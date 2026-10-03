#!/usr/bin/env python3
"""rename.py [-n] [-v] [--allow-existing] [--root DIR] [--extra PATH ...] <rename list>

Renames functions, data symbols, C++ classes and C++ methods everywhere the build and the documentation name
them, in one consistent step. Renames never change bytes, so a full build (`python3 tools/configure.py usa &&
ninja` ending in `acww_usa.nds: OK`) proves a batch: a missed reference is a link error or a ROM mismatch.

Rename list, one per line (`#` starts a comment):

    func   <old> <new>              a function or data symbol of any module, a label (alias), or a name that
                                    exists only in sources (static function, local object)
    class  <OldClass> <NewClass>    a C++ class: every mangled name that contains it (any position: nested
                                    names, parameter types, _ZTV/_ZTI/_ZTS, _ZThn thunks, guards), and the
                                    class name in sources/headers/docs
    member <Class>::<old> <new>     a method: the mangled names of Class::old, and the identifier in sources
                                    (`A::B::old` for a nested class)

Any old name may be qualified with a module, `ov065:func_ov065_02268c38`, `main:`, `autoload_2:`, `itcm:`, or
`*:` (explicitly everywhere). See README.md for the exact rules.

Run from the repository root (or give --root). Nothing is written unless every line validates; -n prints what
would change and writes nothing.
"""
import argparse
import re
import sys
from collections import defaultdict
from pathlib import Path

IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
TOKEN = re.compile(r"(?<![A-Za-z0-9_$])[A-Za-z_][A-Za-z0-9_]*(?![A-Za-z0-9_$])")
FILE_EXT = re.compile(r"\.(?:h|hpp|c|cpp|s|o|txt|md|py|lcf|bin|nds|yaml|json)\b")
SOURCE_SUFFIXES = {".c", ".cpp", ".h", ".hpp", ".inc", ".s"}
DOC_SUFFIXES = {".md", ".txt"}
KEYWORDS = set("""
alignas alignof and and_eq asm auto bitand bitor bool break case catch char char16_t char32_t class compl const
constexpr const_cast continue decltype default delete do double dynamic_cast else enum explicit export extern false
float for friend goto if inline int long mutable namespace new noexcept not not_eq nullptr operator or or_eq private
protected public register reinterpret_cast return short signed sizeof static static_assert static_cast struct switch
template this thread_local throw true try typedef typeid typename union unsigned using virtual void volatile wchar_t
while xor xor_eq restrict _Bool _Complex _Imaginary NULL
""".split())


# ---------------------------------------------------------------------------------------------------------------
# Itanium mangled names (the subset mwcc 1.2 emits, plus the common rest)
# ---------------------------------------------------------------------------------------------------------------

class ParseError(Exception):
    pass


BUILTIN = set("vwbcahstijlmxynofdegz")


class Mangled:
    """Parses one mangled name. `names` = [(start, end, text)] of every <source-name> (start at its length digits);
    `nested` = one list per nested name (N...E) of components (kind, start, end, text)."""

    def __init__(self, s: str):
        self.s = s
        self.i = 0
        self.names = []
        self.nested = []
        if not s.startswith("_Z"):
            raise ParseError("not _Z")
        self.i = 2
        self.encoding(top=True)
        if self.i != len(s):
            raise ParseError(f"trailing {s[self.i:]!r}")

    # helpers
    def peek(self, k=0):
        j = self.i + k
        return self.s[j] if j < len(self.s) else ""

    def expect(self, c):
        if self.peek() != c:
            raise ParseError(f"expected {c!r} at {self.i}")
        self.i += 1

    def number(self):
        if self.peek() == "n":
            self.i += 1
        j = self.i
        while self.peek().isdigit():
            self.i += 1
        if j == self.i:
            raise ParseError("number")

    def encoding(self, top):
        s = self.s
        if s.startswith(("TV", "TI", "TS", "TT"), self.i):
            self.i += 2
            self.type()
            return
        if s.startswith("GV", self.i):
            self.i += 2
            self.name()
            return
        if s.startswith("Th", self.i):
            self.i += 2
            self.number()
            self.expect("_")
            self.encoding(top)
            return
        if s.startswith("Tv", self.i):
            self.i += 2
            self.number()
            self.expect("_")
            self.number()
            self.expect("_")
            self.encoding(top)
            return
        if s.startswith("Tc", self.i):
            self.i += 2
            for _ in range(2):
                c = self.peek()
                self.i += 1
                self.number()
                self.expect("_")
                if c == "v":
                    self.number()
                    self.expect("_")
                elif c != "h":
                    raise ParseError("call offset")
            self.encoding(top)
            return
        self.name()
        while self.i < len(s) and (top or s[self.i] != "E"):
            self.type()

    def source_name(self):
        j = self.i
        while self.peek().isdigit():
            self.i += 1
        n = int(self.s[j:self.i])
        text = self.s[self.i:self.i + n]
        if len(text) != n or not re.fullmatch(r"[A-Za-z_$.][A-Za-z0-9_$.]*", text):
            raise ParseError("source name")
        self.i += n
        self.names.append((j, self.i, text))
        return ("name", j, self.i, text)

    def operator(self):
        j = self.i
        if self.s.startswith("cv", self.i):
            self.i += 2
            self.type()
        elif self.peek() == "v" and self.peek(1).isdigit():
            self.i += 2
            self.source_name()
        else:
            if not (self.peek().islower() and self.peek(1).isalpha()):
                raise ParseError("operator")
            self.i += 2
        return ("op", j, self.i, self.s[j:self.i])

    def substitution(self):
        j = self.i
        self.expect("S")
        if self.peek() in ("t", "a", "b", "s", "i", "o", "d"):
            self.i += 1
            return ("sub", j, self.i, self.s[j:self.i])
        while self.peek().isdigit() or self.peek().isupper():
            self.i += 1
        self.expect("_")
        return ("sub", j, self.i, self.s[j:self.i])

    def template_param(self):
        j = self.i
        self.expect("T")
        while self.peek().isdigit() or self.peek().isupper():
            self.i += 1
        self.expect("_")
        return ("tparam", j, self.i, self.s[j:self.i])

    def template_args(self):
        j = self.i
        self.expect("I")
        while self.peek() != "E":
            if not self.peek():
                raise ParseError("template args")
            if self.peek() == "L":
                self.i += 1
                if self.s.startswith("_Z", self.i):
                    self.i += 2
                    self.encoding(top=False)
                else:
                    self.type()
                    while self.peek() and self.peek() != "E":
                        self.i += 1
                self.expect("E")
            elif self.peek() in ("X", "J"):
                raise ParseError("unsupported template argument")
            else:
                self.type()
        self.i += 1
        return ("targs", j, self.i, self.s[j:self.i])

    def unqualified(self):
        c = self.peek()
        if c.isdigit():
            return self.source_name()
        if c == "L" and self.peek(1).isdigit():
            self.i += 1
            return self.source_name()
        if c in ("C", "D") and self.peek(1).isdigit():
            j = self.i
            self.i += 2
            return ("ctor", j, self.i, self.s[j:self.i])
        if c.islower():
            return self.operator()
        raise ParseError(f"unqualified name at {self.i}")

    def nested_name(self):
        self.expect("N")
        while self.peek() in ("r", "V", "K"):
            self.i += 1
        if self.peek() in ("R", "O"):
            self.i += 1
        comps = []
        while self.peek() != "E":
            c = self.peek()
            if not c:
                raise ParseError("unterminated nested name")
            if c == "S":
                if self.peek(1) == "t":
                    self.i += 2
                    comps.append(("sub", self.i - 2, self.i, "St"))
                else:
                    comps.append(self.substitution())
            elif c == "T":
                comps.append(self.template_param())
            elif c == "I":
                comps.append(self.template_args())
            else:
                comps.append(self.unqualified())
        self.i += 1
        self.nested.append(comps)

    def local_name(self):
        self.expect("Z")
        self.encoding(top=False)
        self.expect("E")
        if self.peek() == "s":
            self.i += 1
        else:
            self.name()
        if self.peek() == "_":
            self.i += 1
            if self.peek() == "_":
                self.i += 1
                self.number()
                self.expect("_")
            else:
                self.number()

    def name(self):
        c = self.peek()
        if c == "N":
            self.nested_name()
        elif c == "Z":
            self.local_name()
        elif c == "S":
            if self.peek(1) == "t":
                self.i += 2
                self.unqualified()
            else:
                self.substitution()
            if self.peek() == "I":
                self.template_args()
        else:
            self.unqualified()
            if self.peek() == "I":
                self.template_args()

    def type(self):
        c = self.peek()
        if not c:
            raise ParseError("type expected")
        if c in BUILTIN:
            self.i += 1
        elif c == "u":
            self.i += 1
            self.source_name()
        elif c == "D":
            if self.peek(1) == "p":
                self.i += 2
                self.type()
            elif self.peek(1).isalpha():
                self.i += 2
            else:
                raise ParseError("D type")
        elif c in "PROCGrVK":
            self.i += 1
            self.type()
        elif c == "F":
            self.i += 1
            if self.peek() == "Y":
                self.i += 1
            while self.peek() != "E":
                self.type()
            self.i += 1
        elif c == "A":
            self.i += 1
            while self.peek().isdigit():
                self.i += 1
            self.expect("_")
            self.type()
        elif c == "M":
            self.i += 1
            self.type()
            self.type()
        elif c == "T":
            self.template_param()
            if self.peek() == "I":
                self.template_args()
        elif c in "NZS" or c.isdigit():
            self.name()
        else:
            raise ParseError(f"type {c!r} at {self.i}")


_parse_cache = {}


def parse_mangled(s):
    """Mangled or None (unparseable)"""
    if s not in _parse_cache:
        try:
            _parse_cache[s] = Mangled(s)
        except (ParseError, ValueError):
            _parse_cache[s] = None
    return _parse_cache[s]


def class_method_pairs(m):
    """[(class path tuple, method name)] of the nested names of a parsed mangled name"""
    out = []
    for comps in m.nested:
        names = [c for c in comps if c[0] != "targs"]
        if len(names) >= 2 and names[-1][0] == "name":
            path = []
            for c in names[:-1]:
                path.append(c[3] if c[0] == "name" else None)
            out.append((tuple(path), names[-1][3]))
    return out


# ---------------------------------------------------------------------------------------------------------------
# Rename list
# ---------------------------------------------------------------------------------------------------------------

class Rename:
    def __init__(self, kind, qual, old, new, where):
        self.kind = kind          # func / class / member
        self.qual = qual          # None, "*" or a module name
        self.old = old            # func/class: name; member: method name
        self.path = ()            # member: class path tuple
        self.new = new
        self.where = where
        self.scope = None         # None = everywhere, else module name (sources and config restricted to it)
        self.counts = defaultdict(int)
        self.files = set()
        self.warnings = []

    def label(self):
        q = f"{self.qual}:" if self.qual else ""
        if self.kind == "member":
            return f"member {q}{'::'.join(self.path)}::{self.old} -> {self.new}"
        return f"{self.kind} {q}{self.old} -> {self.new}"


def parse_list(path):
    renames, errors = [], []
    for number, raw in enumerate(path.read_text().splitlines(), 1):
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        where = f"{path}:{number}"
        f = line.split()
        if len(f) != 3 or f[0] not in ("func", "class", "member"):
            errors.append(f"{where}: expected `func|class|member <old> <new>`: {raw.strip()}")
            continue
        kind, old, new = f
        qual = None
        m = re.match(r"(\*|main|itcm|dtcm|autoload_\d+|ov\d{3}):(?!:)(.+)$", old)
        if m:
            qual, old = m[1], m[2]
        r = Rename(kind, qual, old, new, where)
        if kind == "member":
            parts = old.split("::")
            if len(parts) < 2 or not all(IDENT.fullmatch(p) for p in parts):
                errors.append(f"{where}: member needs <Class>::<method> with identifiers, got {old}")
                continue
            r.path, r.old = tuple(parts[:-1]), parts[-1]
        elif not IDENT.fullmatch(old):
            errors.append(f"{where}: old name {old} is not an identifier (or mangled name)")
            continue
        renames.append(r)
    return renames, errors


# ---------------------------------------------------------------------------------------------------------------
# Repository files
# ---------------------------------------------------------------------------------------------------------------

def config_module(path, cfg):
    rel = path.parent.relative_to(cfg).parts
    if not rel:
        return "main"
    if rel[0] == "overlays":
        return rel[1]
    return rel[0]


def source_module(path, root):
    parts = path.relative_to(root).parts
    if parts[0] == "src" and len(parts) > 2:
        return parts[1]
    return parts[0]  # "include" (or "src" for loose files): shared by every module


class Repo:
    def __init__(self, root, extra):
        self.root = root
        self.cfg = root / "config/usa/arm9"
        if not self.cfg.is_dir() or not (root / "src").is_dir():
            sys.exit(f"rename.py: {root} is not the repository root (no config/usa/arm9 or src/)")
        self.config_files = sorted(p for name in ("symbols.txt", "lcf_symbols.txt", "abs_symbols.txt",
                                                  "object_order.txt") for p in self.cfg.rglob(name))
        self.sources = sorted(p for d in ("src", "include") if (root / d).is_dir()
                              for p in (root / d).rglob("*") if p.is_file() and p.suffix in SOURCE_SUFFIXES)
        docs = [root / "README.md"] if (root / "README.md").is_file() else []
        for d in ("docs", "tools"):
            if (root / d).is_dir():
                docs += [p for p in (root / d).rglob("*.md") if p.is_file()]
        for e in extra:
            e = Path(e)
            docs += [p for p in e.rglob("*") if p.is_file() and p.suffix in DOC_SUFFIXES | SOURCE_SUFFIXES] \
                if e.is_dir() else [e]
        self.docs = sorted(set(docs))
        self.text = {}

    def read(self, p):
        if p not in self.text:
            with open(p, encoding="latin-1", newline="") as f:
                self.text[p] = f.read()
        return self.text[p]


def config_fields(path, text):
    """yields (start, end) of the symbol-name fields of a config file"""
    name = path.name
    pos = 0
    for line in text.splitlines(keepends=True):
        body = line.split("#", 1)[0]
        spans = [(m.start() + pos, m.end() + pos, m[0]) for m in re.finditer(r"\S+", body)]
        if spans:
            if name == "symbols.txt" or name == "abs_symbols.txt":
                yield spans[0][:2]
            elif name == "lcf_symbols.txt":
                yield spans[0][:2]
                for a, b, w in spans[1:]:
                    if w.startswith("base:"):
                        yield a + 5, b
            elif name == "object_order.txt":
                first = spans[0][2]
                if first == "extra":
                    for a, b, _ in spans[2:]:
                        yield a, b
                elif first == "place" and len(spans) > 1:
                    yield spans[1][:2]
        pos += len(line)


def code_segments(text, asm):
    """yields (start, end, kind) with kind 'code', 'comment' or 'string' for C/C++ (or mwasm when asm)"""
    i, n, start = 0, len(text), 0
    while i < n:
        c = text[i]
        if text.startswith("//", i) or (asm and c == ";"):
            j = text.find("\n", i)
            j = n if j < 0 else j
            yield start, i, "code"
            yield i, j, "comment"
            i = start = j
        elif text.startswith("/*", i):
            j = text.find("*/", i + 2)
            j = n if j < 0 else j + 2
            yield start, i, "code"
            yield i, j, "comment"
            i = start = j
        elif c == '"' or (c == "'" and not asm):
            j = i + 1
            while j < n and text[j] != c and text[j] != "\n":
                j += 2 if text[j] == "\\" else 1
            if j < n and text[j] == c:
                yield start, i, "code"
                yield i, j + 1, "string"
                i = start = j + 1
            else:
                i += 1
        else:
            i += 1
    yield start, n, "code"


# ---------------------------------------------------------------------------------------------------------------
# The renamer
# ---------------------------------------------------------------------------------------------------------------

class Renamer:
    def __init__(self, repo, renames):
        self.repo = repo
        self.renames = renames
        self.funcs = {}     # old -> Rename
        self.classes = {}   # old -> Rename
        self.members = {}   # (path, old) -> Rename
        for r in renames:
            if r.kind == "func":
                self.funcs[r.old] = r
            elif r.kind == "class":
                self.classes[r.old] = r
            else:
                self.members[(r.path, r.old)] = r
        # the bare method identifier in sources: validation made sure it names nothing else in symbols.txt
        self.plain_members = {r.old: r for r in self.members.values()}
        self.mangled_needed = bool(self.classes or self.members)
        subs = {r.old for r in renames} | {p for r in renames for p in r.path}
        self.prefilter = re.compile("|".join(re.escape(s) for s in sorted(subs, key=len, reverse=True))) \
            if subs else None

    def in_scope(self, r, module):
        return r.scope is None or r.scope == module

    def rewrite_token(self, tok, module, category, path):
        """new token (or the same) and counts the hits"""
        r = self.funcs.get(tok) or self.classes.get(tok) or self.plain_members.get(tok)
        if r is not None and self.in_scope(r, module):
            r.counts[category] += 1
            r.files.add(path)
            return r.new
        if not self.mangled_needed or not tok.startswith("_Z"):
            return tok
        m = parse_mangled(tok)
        if m is None:
            return tok
        edits = []  # (start, end, new text, rename)
        for a, b, text in m.names:
            r = self.classes.get(text)
            if r is not None and self.in_scope(r, module):
                edits.append((a, b, r.new, r))
        for comps in m.nested:
            names = [c for c in comps if c[0] != "targs"]
            if len(names) < 2 or names[-1][0] != "name":
                continue
            cls = tuple(c[3] if c[0] == "name" else None for c in names[:-1])
            for (cpath, old), r in self.members.items():
                if names[-1][3] == old and cls[-len(cpath):] == cpath and self.in_scope(r, module):
                    edits.append((names[-1][1], names[-1][2], r.new, r))
        if not edits:
            return tok
        out, last = [], 0
        for a, b, new, r in sorted(edits, key=lambda e: e[0]):
            if a < last:
                continue
            out.append(tok[last:a])
            out.append(f"{len(new)}{new}")
            last = b
            r.counts[category] += 1
            r.files.add(path)
        out.append(tok[last:])
        return "".join(out)

    def rewrite_text(self, text, spans, module, category, path, skip_files):
        """rewrites the identifiers inside the given (start, end) spans; returns the new text"""
        out, last = [], 0
        for a, b in spans:
            seg = text[a:b]
            if self.prefilter and not self.prefilter.search(seg):
                continue

            def sub(m):
                tok = m[0]
                if skip_files and FILE_EXT.match(seg, m.end()):
                    if tok in self.funcs or tok in self.classes:
                        r = self.funcs.get(tok) or self.classes.get(tok)
                        r.counts["skipped (file name)"] += 1
                    return tok
                return self.rewrite_token(tok, module, category, path)
            new = TOKEN.sub(sub, seg)
            if new != seg:
                out.append(text[last:a])
                out.append(new)
                last = b
        if last == 0:
            return text
        out.append(text[last:])
        return "".join(out)

    def count_strings(self, text, spans, path):
        for a, b in spans:
            for m in TOKEN.finditer(text, a, b):
                r = self.funcs.get(m[0]) or self.classes.get(m[0])
                if r:
                    r.counts["skipped (string literal)"] += 1
                    r.warnings.append(f"{path}: `{m[0]}` inside a string literal left unchanged")

    def run(self):
        """returns {path: new text} of every file that changes"""
        repo, changed = self.repo, {}
        for p in repo.config_files:
            text = repo.read(p)
            if self.prefilter and not self.prefilter.search(text):
                continue
            module = config_module(p, repo.cfg)
            new = self.rewrite_text(text, list(config_fields(p, text)), module, f"config:{p.name}", p, False)
            if new != text:
                changed[p] = new
        for p in repo.sources:
            text = repo.read(p)
            if self.prefilter and not self.prefilter.search(text):
                continue
            module = source_module(p, repo.root)
            segs = list(code_segments(text, p.suffix == ".s"))
            spans = [(a, b) for a, b, k in segs if k != "string" and b > a]
            self.count_strings(text, [(a, b) for a, b, k in segs if k == "string"], p)
            new = self.rewrite_text(text, spans, module, "src", p, False)
            if new != text:
                changed[p] = new
        for p in repo.docs:
            text = repo.read(p)
            if self.prefilter and not self.prefilter.search(text):
                continue
            new = self.rewrite_text(text, [(0, len(text))], None, "docs", p, True)
            if new != text:
                changed[p] = new
        return changed


# ---------------------------------------------------------------------------------------------------------------
# Index of existing names, validation
# ---------------------------------------------------------------------------------------------------------------

class Index:
    def __init__(self, repo):
        self.symbols = defaultdict(set)      # name -> modules (symbols.txt)
        self.other_config = defaultdict(set)  # lcf/abs names -> modules
        self.tokens = defaultdict(set)       # source identifier -> modules
        self.components = defaultdict(set)   # source-name inside mangled names -> modules
        self.methods = defaultdict(set)      # method name -> {class path}
        self.sym_components = set()          # source-names of symbols.txt mangled names
        self.sym_methods = defaultdict(set)
        self.unparsed = []
        for p in repo.config_files:
            text = repo.read(p)
            module = config_module(p, repo.cfg)
            for a, b in config_fields(p, text):
                name = text[a:b]
                (self.symbols if p.name == "symbols.txt" else self.other_config)[name].add(module)
        for name, mods in list(self.symbols.items()):
            if name.startswith("_Z"):
                self.add_mangled(name, mods, True)
        for p in repo.sources:
            module = source_module(p, repo.root)
            text = repo.read(p)
            for a, b, k in code_segments(text, p.suffix == ".s"):
                if k != "code":
                    continue
                for tok in set(TOKEN.findall(text, a, b)):
                    if module not in self.tokens[tok]:
                        self.tokens[tok].add(module)
                        if tok.startswith("_Z"):
                            self.add_mangled(tok, {module}, False)

    def add_mangled(self, name, mods, from_symbols):
        m = parse_mangled(name)
        if m is None:
            if from_symbols:
                self.unparsed.append(name)
            return
        for _, _, text in m.names:
            self.components[text] |= mods
            if from_symbols:
                self.sym_components.add(text)
        for path, method in class_method_pairs(m):
            self.methods[method].add(path)
            if from_symbols:
                self.sym_methods[method].add(path)

    def used(self, name):
        return name in self.symbols or name in self.other_config or name in self.tokens or name in self.components


def valid_new_name(r):
    if r.kind == "func" and r.new.startswith("_Z"):
        return parse_mangled(r.new) is not None
    return bool(IDENT.fullmatch(r.new)) and r.new not in KEYWORDS


def validate(renames, idx, allow_existing):
    errors = []
    olds = defaultdict(list)
    news = defaultdict(list)
    for r in renames:
        olds[(r.kind, r.path, r.old)].append(r)
        news[(r.kind, r.path, r.new)].append(r)
    for key, rs in olds.items():
        if len(rs) > 1:
            errors.append(f"{rs[1].where}: {key[2]} is renamed twice (also {rs[0].where})")
    for key, rs in news.items():
        if len(rs) > 1:
            errors.append(f"{rs[1].where}: two renames to {key[2]} (also {rs[0].where})")
    old_names = {r.old for r in renames if r.kind != "member"}
    for r in renames:
        if not valid_new_name(r):
            errors.append(f"{r.where}: new name {r.new} is not a valid identifier"
                          + (" or mangled name" if r.kind == "func" else ""))
            continue
        if r.new == r.old:
            errors.append(f"{r.where}: old and new name are the same")
            continue
        if r.kind != "member" and r.new in old_names:
            errors.append(f"{r.where}: new name {r.new} is also renamed in this list (chains and swaps are refused;"
                          f" split them into two batches)")
        if r.qual not in (None, "*") and r.qual not in modules_known(idx):
            errors.append(f"{r.where}: unknown module {r.qual}")
            continue
        check = {"func": check_func, "class": check_class, "member": check_member}[r.kind]
        errors += check(r, idx, allow_existing)
    return errors


def modules_known(idx):
    if not hasattr(idx, "_mods"):
        idx._mods = set().union(*idx.symbols.values()) | set().union(*idx.tokens.values())
    return idx._mods


def resolve_scope(r, global_mods, src_mods, what):
    """sets r.scope; returns errors"""
    src_mods = set(src_mods) - {"include", "src"}
    if global_mods:
        if len(global_mods) > 1:
            if r.qual in (None, "*"):
                return [f"{r.where}: {what} {r.old} is in the symbols.txt of several modules "
                        f"({', '.join(sorted(global_mods))}); qualify it, e.g. `{sorted(global_mods)[0]}:{r.old}`"]
            if r.qual not in global_mods:
                return [f"{r.where}: {r.old} is not in {r.qual}'s symbols.txt (it is in {', '.join(sorted(global_mods))})"]
            r.scope = r.qual
            r.warnings.append(f"in several modules' symbols.txt: only {r.qual}'s symbols.txt and src/{r.qual} renamed")
            return []
        (only,) = global_mods
        if r.qual not in (None, "*") and r.qual != only:
            return [f"{r.where}: {r.old} belongs to {only}, not {r.qual}"]
        r.scope = None  # a global: every module refers to it by this name
        return []
    if r.qual == "*":
        r.scope = None
        return []
    if r.qual:
        if r.qual not in src_mods:
            return [f"{r.where}: {r.old} does not occur in src/{r.qual}"]
        r.scope = r.qual
        return []
    if len(src_mods) > 1:
        return [f"{r.where}: {r.old} is not a symbols.txt name and occurs in the sources of several modules "
                f"({', '.join(sorted(src_mods))}), possibly as different things; qualify it with one module "
                f"(`{sorted(src_mods)[0]}:{r.old}`) or `*:{r.old}` for all"]
    r.scope = None
    return []


def check_func(r, idx, allow_existing):
    errors = []
    in_syms = idx.symbols.get(r.old, set())
    in_src = idx.tokens.get(r.old, set()) | idx.other_config.get(r.old, set())
    if not in_syms and not in_src:
        hint = ""
        if r.old in idx.methods:
            classes = ", ".join("::".join(p for p in path if p) for path in sorted(idx.methods[r.old], key=str))
            hint = f" (it is a method name inside mangled names, of {classes}: use `member <Class>::{r.old}`)"
        return [f"{r.where}: {r.old} exists in no symbols.txt and no source{hint}"]
    if not in_syms and r.old in idx.sym_methods:
        classes = ", ".join("::".join(p or "?" for p in path) for path in sorted(idx.sym_methods[r.old], key=str))
        return [f"{r.where}: {r.old} is not a symbols.txt name but a method of {classes} (inside mangled names); "
                f"use `member <Class>::{r.old} <new>`"]
    errors += resolve_scope(r, in_syms, in_src, "symbol")
    if not allow_existing and idx.used(r.new):
        errors.append(f"{r.where}: {r.new} is already used ({describe_use(idx, r.new)}); --allow-existing to accept")
    if r.old in idx.methods:
        r.warnings.append(f"{r.old} is also a method name inside mangled names (not renamed; use `member`)")
    if r.old.startswith("_Z"):
        r.warnings.append("old name is mangled: only literal uses (symbols.txt, extern \"C\" declarations) change; "
                          "a source that declares the method still produces the old name")
    if not in_syms and r.old in idx.other_config:
        r.warnings.append("not in symbols.txt: a linker script name (lcf_symbols.txt / abs_symbols.txt)")
    elif not in_syms:
        r.warnings.append("not in any symbols.txt: source-only name")
    return errors


def check_class(r, idx, allow_existing):
    errors = []
    sym_mods = {"*"} if r.old in idx.sym_components else set()
    src_mods = idx.tokens.get(r.old, set()) | idx.components.get(r.old, set())
    if not sym_mods and not src_mods:
        return [f"{r.where}: class {r.old} occurs in no mangled symbols.txt name and no source"]
    if sym_mods:
        # a class of the program: every module's mangled names must agree
        if r.qual not in (None, "*"):
            r.warnings.append(f"qualifier {r.qual} ignored: the class is part of symbols.txt names, renamed everywhere")
        r.scope = None
    else:
        errors += resolve_scope(r, set(), src_mods, "class")
        r.warnings.append("class not part of any symbols.txt name: source-only class")
    if not allow_existing and idx.used(r.new):
        errors.append(f"{r.where}: {r.new} is already used ({describe_use(idx, r.new)}); --allow-existing to accept")
    return errors


def check_member(r, idx, allow_existing):
    errors = []
    pairs = idx.methods.get(r.old, set())
    mine = {p for p in pairs if p[-len(r.path):] == r.path}
    if not mine:
        return [f"{r.where}: no mangled name (symbols.txt or sources) has the method {'::'.join(r.path)}::{r.old}"]
    others = pairs - mine
    if others:
        names = ", ".join("::".join(x or "?" for x in p) for p in sorted(others, key=str))
        errors.append(f"{r.where}: method name {r.old} is also a method of {names} (overrides or same-named "
                      f"methods); the source identifier cannot be renamed for one class only")
    if r.old in idx.symbols or r.old in idx.other_config:
        errors.append(f"{r.where}: {r.old} is also a plain symbols.txt name; the source identifier is ambiguous")
    if r.old in idx.sym_components and r.old not in idx.methods:
        errors.append(f"{r.where}: {r.old} is also a class/namespace name")
    if any(p[-len(r.path):] == r.path for p in idx.methods.get(r.new, set())):
        errors.append(f"{r.where}: {'::'.join(r.path)} already has a method {r.new}")
    if not allow_existing and (r.new in idx.symbols or r.new in idx.components and r.new not in idx.methods):
        errors.append(f"{r.where}: {r.new} is already used ({describe_use(idx, r.new)}); --allow-existing to accept")
    elif r.new in idx.tokens:
        r.warnings.append(f"{r.new} already occurs as an identifier in sources ({describe_use(idx, r.new)})")
    in_src = idx.tokens.get(r.old, set()) - {"include", "src"}
    if r.qual and r.qual != "*":
        r.warnings.append(f"qualifier {r.qual} ignored: methods are renamed everywhere")
    r.scope = None
    if len(in_src) > 1:
        r.warnings.append(f"identifier {r.old} occurs in sources of {', '.join(sorted(in_src))}: all renamed")
    return errors


def describe_use(idx, name):
    parts = []
    if name in idx.symbols:
        parts.append("symbols.txt of " + ",".join(sorted(idx.symbols[name])))
    if name in idx.other_config:
        parts.append("lcf/abs_symbols of " + ",".join(sorted(idx.other_config[name])))
    if name in idx.tokens:
        mods = sorted(idx.tokens[name])
        parts.append("sources of " + ",".join(mods[:6]) + ("..." if len(mods) > 6 else ""))
    if name in idx.components:
        parts.append("inside mangled names")
    return "; ".join(parts)


# ---------------------------------------------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("list", type=Path, help="rename list")
    ap.add_argument("-n", "--dry-run", action="store_true", help="report only, write nothing")
    ap.add_argument("-v", "--verbose", action="store_true", help="list the changed files of every rename")
    ap.add_argument("--allow-existing", action="store_true", help="accept new names that already occur")
    ap.add_argument("--root", type=Path, default=Path("."), help="repository root (default: current directory)")
    ap.add_argument("--extra", action="append", default=[], help="more files/directories to rewrite as text "
                    "(e.g. pipeline renames.txt/aliases.txt); repeatable")
    args = ap.parse_args()

    renames, errors = parse_list(args.list)
    if errors:
        print("\n".join(errors))
        sys.exit(f"rename.py: {len(errors)} errors in the list, nothing written")
    if not renames:
        sys.exit("rename.py: empty list")
    repo = Repo(args.root.resolve(), args.extra)
    idx = Index(repo)
    errors = validate(renames, idx, args.allow_existing)
    if errors:
        print("\n".join(errors))
        sys.exit(f"rename.py: {len(errors)} refused, nothing written")

    renamer = Renamer(repo, renames)
    changed = renamer.run()

    # results: every rename must have changed something; new names must parse
    for r in renames:
        total = sum(v for k, v in r.counts.items() if not k.startswith("skipped"))
        if total == 0:
            errors.append(f"{r.where}: {r.label()}: nothing to rename")
    for p, text in changed.items():
        if p.name == "symbols.txt":
            seen = defaultdict(int)
            for a, b in config_fields(p, text):
                seen[text[a:b]] += 1
            dup = [n for n, k in seen.items() if k > 1]
            if dup:
                errors.append(f"{p}: duplicate names after renaming: {', '.join(dup[:5])}")
    if errors:
        print("\n".join(errors))
        sys.exit(f"rename.py: {len(errors)} errors, nothing written")

    for r in renames:
        cats = sorted(r.counts.items())
        detail = ", ".join(f"{k} {v}" for k, v in cats)
        print(f"{r.label()}: {detail}; {len(r.files)} files")
        for w in dict.fromkeys(r.warnings):
            print(f"    note: {w}")
        if args.verbose:
            for p in sorted(r.files):
                print(f"    {p.relative_to(repo.root) if p.is_relative_to(repo.root) else p}")
    print(f"{len(renames)} renames, {len(changed)} files {'would change' if args.dry_run else 'changed'}")
    if idx.unparsed:
        print(f"note: {len(idx.unparsed)} symbols.txt mangled names could not be parsed and are only matched "
              f"whole (first: {idx.unparsed[0]})")
    if args.dry_run:
        return
    for p, text in changed.items():
        with open(p, "w", encoding="latin-1", newline="") as f:
            f.write(text)


if __name__ == "__main__":
    main()
