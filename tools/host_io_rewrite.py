#!/usr/bin/env python3
"""Rewrite hardware register accesses in C/C++ sources to the IO_ macros (include/nitro/io_access.h).

On the DS the macros expand to the original accesses token for token, so the matching build is unchanged; in the
host build they call the host's register model (docs/host.md). A register lvalue is:

  - a register macro: #define NAME (*(T *)ADDR) with ADDR an I/O address (0x04000000-0x04001fff, 0x04100000-),
  - a dereference of a cast I/O address: *(T *)0x04000208, *(T *)(0x04000000 + n),
  - a subscript or member of one: ((T *)0x040000b0)[i], ((T *)0x04000000)->f,
  - the same through a pointer variable set from an I/O address in the same function: vu16 *p = &reg_X; p[1].

Writes (=, op=, ++, --) become IO_W / IO_OR / ...; other uses become IO_R; taking the address (&) is left alone.
Preprocessor lines are not touched: function-like macros that access registers are listed for a manual rewrite.

usage: host_io_rewrite.py [--check] FILE...   (--check: only report what would change)
"""

import re
import sys

IO_RANGES = [(0x04000000, 0x04002000), (0x04100000, 0x04101000)]
ASSIGN_OPS = {"=": "IO_W", "|=": "IO_OR", "&=": "IO_AND", "^=": "IO_XOR", "+=": "IO_ADD", "-=": "IO_SUB"}
OTHER_ASSIGN = {"*=", "/=", "%=", "<<=", ">>="}
TYPE_WORDS = {"u8", "u16", "u32", "u64", "s8", "s16", "s32", "s64", "vu8", "vu16", "vu32", "vu64", "vs8", "vs16",
              "vs32", "vs64", "int", "unsigned", "signed", "char", "short", "long", "volatile", "const", "void",
              "BOOL", "fx16", "fx32", "uintptr_t", "size_t", "struct", "union", "u_int"}
KEYWORDS_BEFORE_UNARY = {"return", "case", "sizeof", "else", "do"}

TOKEN_RE = re.compile(r"""
    (?P<pp>^[ \t]*\#(?:[^\n\\]|\\.|\\\n)*)                       # preprocessor line (with continuations)
  | (?P<comment>//[^\n]*|/\*.*?\*/)
  | (?P<ws>\s+)
  | (?P<str>"(?:[^"\\\n]|\\.)*"|'(?:[^'\\\n]|\\.)*')
  | (?P<num>0[xX][0-9a-fA-F]+[uUlL]*|\d+[uUlL]*(?:\.\d+)?[fF]?)
  | (?P<id>[A-Za-z_]\w*)
  | (?P<op><<=|>>=|->|\+\+|--|<<|>>|<=|>=|==|!=|&&|\|\||[-+*/%&|^]=|::|[][(){}.,;:?~!<>=+\-*/%&|^])
  | (?P<other>.)
""", re.S | re.M | re.X)


class Tok:
    __slots__ = ("kind", "text")

    def __init__(self, kind, text):
        self.kind, self.text = kind, text

    def __repr__(self):
        return f"{self.kind}:{self.text!r}"


def tokenize(src):
    out = []
    for m in TOKEN_RE.finditer(src):
        out.append(Tok(m.lastgroup, m.group()))
    assert "".join(t.text for t in out) == src
    return out


def is_io_value(v):
    return any(lo <= v < hi for lo, hi in IO_RANGES)


def num_value(text):
    t = text.rstrip("uUlL")
    try:
        return int(t, 0)
    except ValueError:
        return None


def sig(toks, i, step):
    """index of the next significant token from i (exclusive) in direction step, or -1 / len"""
    i += step
    while 0 <= i < len(toks) and toks[i].kind in ("ws", "comment"):
        i += step
    return i


def match_close(toks, i):
    """toks[i] is an opening bracket: index of its partner"""
    pairs = {"(": ")", "[": "]", "{": "}"}
    o, c, d = toks[i].text, pairs[toks[i].text], 0
    for j in range(i, len(toks)):
        if toks[j].kind != "op":
            continue
        if toks[j].text == o:
            d += 1
        elif toks[j].text == c:
            d -= 1
            if d == 0:
                return j
    raise ValueError("unbalanced " + o)


class FileInfo:
    def __init__(self, toks):
        self.reg_macros = {}    # NAME -> True (lvalue macros)
        self.addr_macros = set()  # NAME: an I/O address constant
        self.manual = []         # preprocessor lines to rewrite by hand
        self.typedefs = set()
        for t in toks:
            if t.kind != "pp":
                continue
            m = re.match(r"\s*#\s*define\s+(\w+)(\([^)]*\))?\s*(.*)", t.text, re.S)
            if not m:
                continue
            name, params, body = m.group(1), m.group(2), m.group(3)
            vals = [num_value(x) for x in re.findall(r"0[xX][0-9a-fA-F]+", body)]
            io = any(v is not None and is_io_value(v) for v in vals)
            if params is None:
                if io and re.match(r"\(\s*\*\s*\(", body):
                    self.reg_macros[name] = True
                elif io and re.fullmatch(r"\(?\s*0[xX][0-9a-fA-F]+[uUlL]*\s*\)?\s*(//.*)?", body.strip()):
                    self.addr_macros.add(name)
            elif io and body.startswith("(") and "*)" in body.replace(" ", "") and not re.search(r"[^=!<>]=[^=]", body):
                self.reg_macros[name] = "call"  # NAME(args) is a register lvalue
            elif params and re.fullmatch(r"\(\s*\*\s*\(\s*(volatile\s+)?\w+\s*(volatile\s*)?\*\s*\)\s*\(?\s*\w+\s*\)?\s*\)", body.strip()):
                self.reg_macros[name] = "arg"   # NAME(addr) dereferences addr: a register lvalue when addr is one
        for t in toks:  # register macros defined through other ones: #define reg_X_L (*(vu16 *)&reg_X)
            if t.kind != "pp":
                continue
            m = re.match(r"\s*#\s*define\s+(\w+)\s+(\(.*)", t.text, re.S)
            if m and m.group(1) not in self.reg_macros and any(re.search(r"\b%s\b" % re.escape(r), m.group(2)) for r in list(self.reg_macros) + list(self.addr_macros)) \
                    and re.match(r"\(\s*\*\s*\(", m.group(2)):
                self.reg_macros[m.group(1)] = True
        for t in toks:  # function-like macros (and others) touching registers: manual
            if t.kind != "pp" or not re.match(r"\s*#\s*define", t.text):
                continue
            m = re.match(r"\s*#\s*define\s+(\w+)(\([^)]*\))?\s*(.*)", t.text, re.S)
            name, params, body = m.group(1), m.group(2), m.group(3)
            if name in self.reg_macros or name in self.addr_macros:
                continue
            if any(re.search(r"\b%s\b" % re.escape(r), body) for r in list(self.reg_macros) + list(self.addr_macros)) or \
                    any(is_io_value(num_value(x) or 0) for x in re.findall(r"0[xX][0-9a-fA-F]+", body)):
                self.manual.append(t.text.strip().splitlines()[0])
        for i, t in enumerate(toks):
            if t.kind == "id" and t.text == "typedef":
                # the name before the closing ';'
                j = i
                while j < len(toks) and not (toks[j].kind == "op" and toks[j].text == ";"):
                    if toks[j].kind == "op" and toks[j].text == "{":
                        j = match_close(toks, j)
                    j += 1
                k = sig(toks, j, -1)
                if 0 <= k and toks[k].kind == "id":
                    self.typedefs.add(toks[k].text)


class Rewriter:
    def __init__(self, toks, info):
        self.t = toks
        self.info = info
        self.reg_ptrs = set()   # pointer variables holding register addresses (current function)
        self.changes = 0
        self.warnings = []

    # --- classification
    def has_io(self, i, j):
        """does toks[i:j] mention an I/O address (constant, address macro, register macro, register pointer)?"""
        for k in range(i, j):
            tk = self.t[k]
            if tk.kind == "num":
                v = num_value(tk.text)
                if v is not None and is_io_value(v):
                    return True
            elif tk.kind == "id" and (tk.text in self.info.addr_macros or tk.text in self.info.reg_macros or tk.text in self.reg_ptrs):
                return True
        return False

    def is_type_group(self, i, j):
        """toks[i..j] is '( type-name )'"""
        words = [self.t[k] for k in range(i + 1, j) if self.t[k].kind not in ("ws", "comment")]
        if not words:
            return False
        if not all(w.kind == "id" or (w.kind == "op" and w.text in ("*", "::")) for w in words):
            return False
        return words[0].text in TYPE_WORDS or words[0].text in self.info.typedefs or words[0].text.endswith("_t") or \
            any(w.text == "*" for w in words) and words[0].text[0].isupper()

    def unary_context(self, i):
        """is the token at i in a position where '*' or '&' is unary?"""
        p = sig(self.t, i, -1)
        if p < 0:
            return True
        pt = self.t[p]
        if pt.kind == "op":
            if pt.text in (")",):
                o = self.open_of(p)
                if o is None:
                    return False
                before = sig(self.t, o, -1)
                if before >= 0 and self.t[before].kind == "id" and self.t[before].text in ("if", "while", "for", "switch"):
                    return True  # if (c) *p = ...
                return self.is_type_group(o, p)
            return pt.text not in ("]",)
        if pt.kind == "id":
            return pt.text in KEYWORDS_BEFORE_UNARY
        return False

    def open_of(self, j):
        d = 0
        for k in range(j, -1, -1):
            tk = self.t[k]
            if tk.kind == "op" and tk.text == ")":
                d += 1
            elif tk.kind == "op" and tk.text == "(":
                d -= 1
                if d == 0:
                    return k
        return None

    def postfix_end(self, i):
        """end (exclusive) of a postfix expression starting at primary i"""
        tk = self.t[i]
        if tk.kind == "op" and tk.text == "(":
            j = match_close(self.t, i) + 1
        elif tk.kind in ("id", "num"):
            j = i + 1
        else:
            return None
        while True:
            k = sig(self.t, j - 1, 1)
            if k >= len(self.t):
                return j
            tk = self.t[k]
            if tk.kind == "op" and tk.text == "[":
                j = match_close(self.t, k) + 1
            elif tk.kind == "op" and tk.text in (".", "->"):
                k2 = sig(self.t, k, 1)
                j = k2 + 1
            elif tk.kind == "op" and tk.text == "(" and self.t[sig(self.t, k, -1)].kind == "id":
                j = match_close(self.t, k) + 1  # a call
            else:
                return j

    def cast_operand_end(self, i):
        """end of a unary operand at i: casts then a postfix expression (or another unary * / &)"""
        tk = self.t[i]
        if tk.kind == "op" and tk.text == "(":
            c = match_close(self.t, i)
            if self.is_type_group(i, c):
                k = sig(self.t, c, 1)
                return self.cast_operand_end(k)
        if tk.kind == "op" and tk.text in ("*", "&"):
            return self.cast_operand_end(sig(self.t, i, 1))
        return self.postfix_end(i)

    def lvalue_at(self, i):
        """if a register lvalue starts at i: (end, kind, ptr_range). kind: 'macro', 'deref', 'post'"""
        tk = self.t[i]
        if tk.kind == "id" and tk.text in self.info.reg_macros:
            p = sig(self.t, i, -1)
            if p >= 0 and self.t[p].kind == "op" and self.t[p].text in (".", "->"):
                return None
            end = i + 1
            if self.info.reg_macros[tk.text] in ("call", "arg"):
                k = sig(self.t, i, 1)
                if k >= len(self.t) or self.t[k].text != "(":
                    return None
                end = match_close(self.t, k) + 1
                if self.info.reg_macros[tk.text] == "arg" and not self.has_io(k, end):
                    return None
            # a register macro may be subscripted / have members after it? (rare) - not handled
            return end, "macro", (i, end)
        if tk.kind == "op" and tk.text == "*" and self.unary_context(i):
            k = sig(self.t, i, 1)
            end = self.cast_operand_end(k)
            if end is None:
                return None
            if self.has_io(k, end) and self.points_to_io(k, end):
                return end, "deref", (k, end)
            return None
        # ((T *)IO)[i], ((T *)IO)->f, p[i], p->f with p a register pointer
        if (tk.kind == "op" and tk.text == "(") or (tk.kind == "id" and tk.text in self.reg_ptrs):
            if tk.kind == "op":
                c = match_close(self.t, i)
                if self.is_type_group(i, c):
                    return None  # a cast: handled where it's dereferenced
                if not self.has_io(i, c + 1):
                    return None
                base_end = c + 1
            else:
                base_end = i + 1
            k = sig(self.t, base_end - 1, 1)
            if k < len(self.t) and self.t[k].kind == "op" and self.t[k].text in ("[", "->"):
                if tk.kind == "op" and not self.base_is_io_pointer(i, base_end):
                    return None
                p = sig(self.t, i, -1)
                if p >= 0 and self.t[p].kind == "op" and self.t[p].text in (".", "->"):
                    return None
                end = self.postfix_end(i)
                # only the first subscript / member is the register access
                return end, "post", (i, end)
        return None

    def base_is_io_pointer(self, i, j):
        """toks[i:j] = '( ... )' whose value is a pointer to I/O: contains a cast to a pointer type and an I/O
        constant / register pointer"""
        inner = [self.t[k] for k in range(i, j) if self.t[k].kind not in ("ws", "comment")]
        return any(t.text == "*" for t in inner) and self.has_io(i, j)

    def points_to_io(self, i, j):
        """the operand of a '*' at toks[i:j] is a pointer to a register (not, say, 0x04000000 as a flag)"""
        words = [self.t[k] for k in range(i, j) if self.t[k].kind not in ("ws", "comment")]
        if any(w.kind == "id" and w.text in self.reg_ptrs for w in words):
            return True  # p, (p + 1), ...
        return any(w.kind == "op" and w.text == "*" for w in words) or (words[0].kind == "op" and words[0].text == "&")

    # --- rewriting
    def text(self, i, j):
        return "".join(self.t[k].text for k in range(i, j))

    def expr_end(self, i):
        """end of an assignment's right-hand side starting at i: up to ',' ';' or a closing bracket at depth 0"""
        d = 0
        k = i
        while k < len(self.t):
            tk = self.t[k]
            if tk.kind == "op":
                if tk.text in ("(", "[", "{"):
                    d += 1
                elif tk.text in (")", "]", "}"):
                    if d == 0:
                        return k
                    d -= 1
                elif tk.text in (",", ";") and d == 0:
                    return k
            k += 1
        return k

    def ptr_text(self, kind, a, b):
        if kind == "macro":
            return "&" + self.text(a, b)
        if kind == "deref":
            return self.sub(a, b)
        return "&" + self.sub(a, b, skip=a)  # (not the access itself again)

    def sub(self, i, j, skip=None):
        """rewritten text of toks[i:j] (skip: a position not to take as an access)"""
        out = []
        k = i
        while k < j:
            tk = self.t[k]
            r = self.lvalue_at(k) if tk.kind in ("id", "op") and k != skip else None
            if r and r[0] <= j:
                end, kind, (a, b) = r
                pv = sig(self.t, k, -1)
                prev = self.t[pv] if pv >= 0 else None
                if prev is not None and ((prev.kind == "op" and prev.text == "&" and self.unary_context(pv)) or
                                         (prev.kind == "id" and prev.text == "sizeof")):
                    out.append(self.text(k, end))  # address taken / size: not an access
                    k = end
                    continue
                if prev is not None and prev.kind == "op" and prev.text in ("++", "--") and self.unary_context(pv):
                    # ++reg: rewrite the operator we already emitted
                    for n in range(len(out) - 1, -1, -1):
                        if out[n].strip() in ("++", "--"):
                            op = out[n].strip()
                            out[n] = ""
                            break
                    out.append("%s(%s, 1)" % ("IO_ADD" if op == "++" else "IO_SUB", self.ptr_text(kind, a, b)))
                    self.changes += 1
                    k = end
                    continue
                nx = sig(self.t, end - 1, 1)
                ntk = self.t[nx] if nx < len(self.t) else None
                if ntk is not None and ntk.kind == "op" and ntk.text in ASSIGN_OPS:
                    rs = sig(self.t, nx, 1)
                    re_ = self.expr_end(rs)
                    ptr = self.ptr_text(kind, a, b)
                    if ntk.text != "=" and ("++" in ptr or "--" in ptr):
                        self.warnings.append("compound write through %s: by hand" % ptr.strip())
                    out.append("%s(%s, %s)" % (ASSIGN_OPS[ntk.text], ptr, self.sub(rs, re_).strip()))
                    self.changes += 1
                    k = re_
                    continue
                if ntk is not None and ntk.kind == "op" and ntk.text in OTHER_ASSIGN:
                    self.warnings.append("unsupported %s on %s" % (ntk.text, self.text(k, end).strip()))
                if ntk is not None and ntk.kind == "op" and ntk.text in ("++", "--"):
                    out.append("%s(%s, 1)" % ("IO_ADD" if ntk.text == "++" else "IO_SUB", self.ptr_text(kind, a, b)))
                    self.changes += 1
                    k = nx + 1
                    continue
                out.append("IO_R(%s)" % self.ptr_text(kind, a, b))
                self.changes += 1
                k = end
                continue
            out.append(tk.text)
            k += 1
        return "".join(out)

    def find_reg_ptrs(self, i, j):
        """pointer variables in toks[i:j] (a function body) assigned an I/O address"""
        names = set()
        changed = True
        while changed:
            changed = False
            for k in range(i, j):
                tk = self.t[k]
                if tk.kind == "op" and tk.text == "=":
                    lhs = sig(self.t, k, -1)
                    if lhs < 0 or self.t[lhs].kind != "id":
                        continue
                    name = self.t[lhs].text
                    if name in names or name in self.info.reg_macros:
                        continue
                    # declared as a pointer here (TYPE *name = ...), or declared so earlier in the function
                    before = sig(self.t, lhs, -1)
                    bb = sig(self.t, before, -1) if before >= 0 else -1
                    is_decl_ptr = before >= 0 and self.t[before].kind == "op" and self.t[before].text == "*" and bb >= 0 and \
                        self.t[bb].kind == "id" and (self.t[bb].text in TYPE_WORDS or self.t[bb].text in self.info.typedefs)
                    if not is_decl_ptr and not (before >= 0 and self.t[before].text in (";", "{", "}", ",", "(")):
                        continue
                    e = self.expr_end(sig(self.t, k, 1))
                    saved = self.reg_ptrs
                    self.reg_ptrs = names
                    io = self.has_io(k + 1, e)
                    self.reg_ptrs = saved
                    rhs = [self.t[x] for x in range(k + 1, e) if self.t[x].kind not in ("ws", "comment")]
                    # a pointer value: &..., a cast to a pointer type first, or another register pointer
                    ptrish = bool(rhs) and (rhs[0].text == "&" or (len(rhs) == 1 and rhs[0].text in names) or
                                            (rhs[0].text == "(" and self.cast_first(k + 1, e)))
                    if io and ptrish and (is_decl_ptr or self.declared_pointer(i, j, name)):
                        names.add(name)
                        changed = True
        return names

    def cast_first(self, i, j):
        """the expression toks[i:j] starts with a cast to a pointer type (possibly inside parentheses)"""
        k = sig(self.t, i - 1, 1)
        while k < j and self.t[k].text == "(":
            c = match_close(self.t, k)
            if self.is_type_group(k, c):
                return any(self.t[x].text == "*" for x in range(k, c))
            k = sig(self.t, k, 1)
        return False

    def declared_pointer(self, i, j, name):
        for k in range(i, j):
            if self.t[k].kind == "id" and self.t[k].text == name:
                p = sig(self.t, k, -1)
                if p >= 0 and self.t[p].kind == "op" and self.t[p].text == "*":
                    pp = sig(self.t, p, -1)
                    if pp >= 0 and self.t[pp].kind == "id" and (self.t[pp].text in TYPE_WORDS or self.t[pp].text in self.info.typedefs):
                        return True
        return False

    def run(self):
        out = []
        k = 0
        n = len(self.t)
        while k < n:
            tk = self.t[k]
            if tk.kind == "op" and tk.text == "{":
                end = match_close(self.t, k)
                # a function body (or an initializer / struct: then no accesses anyway)
                self.reg_ptrs = self.find_reg_ptrs(k, end)
                out.append(self.sub(k, end + 1))
                self.reg_ptrs = set()
                k = end + 1
                continue
            out.append(tk.text)
            k += 1
        return "".join(out)


INCLUDE = '#include "nitro/io_access.h"\n'


def add_include(src):
    if "nitro/io_access.h" in src:
        return src
    # after the leading comment block and the first #include group, else at the top after comments
    lines = src.split("\n")
    last_inc = None
    for idx, l in enumerate(lines[:200]):
        if re.match(r"\s*#\s*include\b", l):
            last_inc = idx
    if last_inc is not None:
        lines.insert(last_inc + 1, INCLUDE.rstrip("\n"))
        return "\n".join(lines)
    idx = 0
    while idx < len(lines) and (lines[idx].startswith("//") or not lines[idx].strip()):
        idx += 1
    lines.insert(idx, INCLUDE.rstrip("\n"))
    return "\n".join(lines)


def main():
    args = sys.argv[1:]
    check = "--check" in args
    files = [a for a in args if a != "--check"]
    total = 0
    for f in files:
        src = open(f).read()
        toks = tokenize(src)
        info = FileInfo(toks)
        rw = Rewriter(toks, info)
        new = rw.run()
        for w in rw.warnings:
            print(f"{f}: warning: {w}")
        for m in info.manual:
            print(f"{f}: manual: {m}")
        if rw.changes:
            new = add_include(new)
            total += rw.changes
            print(f"{f}: {rw.changes} accesses")
            if not check:
                open(f, "w").write(new)
    print(f"total {total}")


if __name__ == "__main__":
    main()
