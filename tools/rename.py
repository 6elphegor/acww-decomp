#!/usr/bin/env python3
"""rename.py [-n] [-v] [--allow-existing] [--partial] [--min-confidence LEVEL] [--report FILE] [--root DIR]
          [--extra PATH ...] <rename list or batch renames.txt> ...

Renames functions, data symbols, C++ classes, methods and virtual-method slots everywhere the build and the
documentation name them, in one consistent step. Renames never change bytes, so a full build (`python3
tools/configure.py usa && ninja` ending in `acww_usa.nds: OK`) proves a batch.

Plain lines (`#` starts a comment):

    func   <old> <new>                  function, data symbol, label (alias), linker-script or source-only name
    class  <OldClass> <NewClass>        C++ class, in every mangled name and in sources/docs
    member <Class>::<old> <new>         non-virtual method
    vfunc  <Class> <old> <new>          virtual method, for the whole hierarchy of the class that introduces it
    vfunc  <Class> slot:0x10 <new>      the same, by vtable offset (0x00/0x04 = destructor)

Batch lines (pipeline_wip/phase1/survey/plan.md "Batch deliverable"), `|`-separated:

    func|data <old> <new>        | <confidence> | <evidence>
    class <Old> <New>            | ...
    method <Class> <old> <new>   | ...        (= member)
    vfunc <Class> <slot|old> <new> | ...
    member <Struct> <offset> <type> <name> | ...   struct field: reported only
    unit <src path> <new path>   | ...                reported only

Old names may be qualified with a module (`ov065:func_ov065_02268c38`, `main:`, `autoload_2:`, `itcm:`, `*:`).
Nothing is written unless every record validates, unless --partial (then refused records are dropped and the
rest is applied). -n writes nothing. See README.md.
"""
import argparse
import bisect
import re
import sys
from collections import defaultdict
from pathlib import Path

IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
TOKEN = re.compile(r"(?<![A-Za-z0-9_$])[A-Za-z_][A-Za-z0-9_]*(?![A-Za-z0-9_$])")
FILE_EXT = re.compile(r"\.(?:h|hpp|c|cpp|s|o|txt|md|py|lcf|bin|nds|yaml|json)\b")
SOURCE_SUFFIXES = {".c", ".cpp", ".h", ".hpp", ".inc", ".s"}
DOC_SUFFIXES = {".md", ".txt"}
CONFIDENCE = {"descriptive": 1, "probable": 2, "certain": 3}
KEYWORDS = set("""
alignas alignof and and_eq asm auto bitand bitor bool break case catch char char16_t char32_t class compl const
constexpr const_cast continue decltype default delete do double dynamic_cast else enum explicit export extern false
float for friend goto if inline int long mutable namespace new noexcept not not_eq nullptr operator or or_eq private
protected public register reinterpret_cast return short signed sizeof static static_assert static_cast struct switch
template this thread_local throw true try typedef typeid typename union unsigned using virtual void volatile wchar_t
while xor xor_eq restrict _Bool _Complex _Imaginary NULL
""".split())
TYPE_WORDS = {"const", "volatile", "struct", "class", "union", "unsigned", "signed", "static", "mutable", "enum",
              "inline", "extern"}


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
# Rename records
# ---------------------------------------------------------------------------------------------------------------

class Rename:
    def __init__(self, kind, qual, old, new, where, raw, batch, confidence=None, evidence=""):
        self.kind = kind          # func / class / member / vfunc
        self.qual = qual          # None, "*" or a module name
        self.old = old            # func/class: name; member/vfunc: method name (vfunc: None when given by slot)
        self.path = ()            # member/vfunc: class path tuple
        self.slot = None          # vfunc: vtable offset when given by slot
        self.new = new
        self.where = where
        self.raw = raw
        self.batch = batch
        self.confidence = confidence
        self.evidence = evidence
        self.scope = None         # None = everywhere, else one module
        self.pairs = []           # member/vfunc: [(class path tuple, old method name)] actually renamed
        self.file_pairs = None    # vfunc: {source path: {(class, old method)}}; None = every file
        self.errors = []          # set while parsing (bad record)
        self.notes = []
        self.reset()

    def reset(self):
        self.counts = defaultdict(int)
        self.files = set()
        self.unresolved = []
        for m in getattr(self, "members", ()):
            m.reset()

    def absorb_members(self):
        """counts and problems of the member aliases of a func record (see check_func) become the record's"""
        for m in getattr(self, "members", ()):
            for k, v in m.counts.items():
                self.counts[f"member {m.path[-1]}::{m.new}: {k}"] += v
            self.files |= m.files
            self.unresolved += m.unresolved
            m.counts, m.unresolved = defaultdict(int), []

    def label(self):
        q = f"{self.qual}:" if self.qual else ""
        if self.kind == "member":
            return f"member {'::'.join(self.path)}::{self.old} -> {self.new}"
        if self.kind == "vfunc":
            what = self.old if self.slot is None else f"slot:{self.slot:#04x}"
            return f"vfunc {self.path[-1]} {what} -> {self.new}"
        return f"{self.kind} {q}{self.old} -> {self.new}"


class Report:
    def __init__(self, kind, fields, where, raw, batch, confidence, evidence):
        self.kind, self.fields, self.where, self.raw = kind, fields, where, raw
        self.batch, self.confidence, self.evidence = batch, confidence, evidence


QUALIFIER = re.compile(r"(\*|main|itcm|dtcm|autoload_\d+|ov\d{3}):(?!:)(.+)$")


def parse_slot(text):
    m = re.fullmatch(r"(?:slot:)?(0x[0-9a-fA-F]+|\d+)", text)
    if not m or (not text.startswith("slot:") and not text.startswith("0x")):
        return None
    return int(m[1], 0)


def parse_list(path):
    """returns (renames, reports); a malformed record is a Rename with errors"""
    renames, reports = [], []
    batch = str(path)
    for number, raw in enumerate(path.read_text(encoding="utf-8", errors="replace").splitlines(), 1):
        s = raw.strip()
        if not s or s.startswith("#"):
            continue
        where = f"{path}:{number}"
        confidence, evidence = None, ""
        if "|" in s:
            parts = [p.strip() for p in s.split("|", 2)]
            record = parts[0]
            confidence = parts[1].lower() if len(parts) > 1 else ""
            evidence = parts[2] if len(parts) > 2 else ""
        else:
            record = s.split("#", 1)[0].strip()
        f = record.split()
        kind = f[0] if f else ""

        def bad(msg):
            r = Rename(kind or "?", None, record, "?", where, s, batch, confidence, evidence)
            r.errors.append(f"{where}: {msg}: {s}")
            renames.append(r)

        if confidence is not None and confidence not in CONFIDENCE:
            bad(f"confidence must be one of {', '.join(CONFIDENCE)}")
            continue
        if kind == "unit" and len(f) == 3:
            reports.append(Report("unit", f[1:], where, s, batch, confidence, evidence))
            continue
        if kind == "member" and len(f) >= 4 and "::" not in f[1]:
            reports.append(Report("field", [f[1], f[2], " ".join(f[3:-1]), f[-1]], where, s, batch, confidence,
                                  evidence))
            continue
        if kind in ("func", "data", "class") and len(f) == 3:
            old, qual = f[1], None
            m = QUALIFIER.match(old)
            if m:
                qual, old = m[1], m[2]
            if not IDENT.fullmatch(old):
                bad(f"old name {old} is not an identifier (or mangled name)")
                continue
            renames.append(Rename("class" if kind == "class" else "func", qual, old, f[2], where, s, batch,
                                  confidence, evidence))
            continue
        if kind == "member" and len(f) == 3 or kind == "method" and len(f) == 4:
            if kind == "member":
                parts = f[1].split("::")
                cls_path, old = parts[:-1], parts[-1]
            else:
                cls_path, old = f[1].split("::"), f[2]
            if not cls_path or not all(IDENT.fullmatch(p) for p in cls_path + [old]):
                bad("expected `member <Class>::<old> <new>` or `method <Class> <old> <new>`")
                continue
            r = Rename("member", None, old, f[-1], where, s, batch, confidence, evidence)
            r.path = tuple(cls_path)
            renames.append(r)
            continue
        if kind == "vfunc" and len(f) == 4:
            cls = f[1]
            if QUALIFIER.match(cls):
                cls = QUALIFIER.match(cls)[2]
            if not IDENT.fullmatch(cls):
                bad("class must be an identifier")
                continue
            r = Rename("vfunc", None, None, f[3], where, s, batch, confidence, evidence)
            r.path = (cls,)
            slot = parse_slot(f[2])
            if slot is not None:
                r.slot = slot
            elif IDENT.fullmatch(f[2]):
                r.old = f[2]
            else:
                bad("vfunc needs a method name or a slot (`slot:0x10` / `0x10`)")
                continue
            renames.append(r)
            continue
        bad("unknown record (func|data|class|method|member|vfunc|unit)")
    return renames, reports


# ---------------------------------------------------------------------------------------------------------------
# Source model: class declarations, method definitions, vtable layouts
# ---------------------------------------------------------------------------------------------------------------

CLASS_HEAD = re.compile(r"\b(class|struct|union)\s+([A-Za-z_]\w*)\s*(?:final\s*)?(:\s*[^{};()]*)?\{")
METHOD_DEF = re.compile(r"\b([A-Za-z_]\w*)\s*::\s*(~?\s*[A-Za-z_]\w*)\s*\(")
DEFINE = re.compile(r"^[ \t]*#[ \t]*define[ \t]+([A-Za-z_]\w*)[ \t]+([A-Za-z_]\w*)[ \t]*$", re.M)
DEFINE_CALL = re.compile(r"^[ \t]*#[ \t]*define[ \t]+([A-Za-z_]\w*)\([^)\n]*\)[ \t]+(_Z[A-Za-z0-9_]*)[ \t]*\(", re.M)
ACCESS = re.compile(r"^\s*(?:(?:public|private|protected)\s*:\s*)+")


def bracket_pairs(text, o, c):
    out, stack = {}, []
    for m in re.finditer(re.escape(o) + "|" + re.escape(c), text):
        if m[0] == o:
            stack.append(m.start())
        elif stack:
            out[stack.pop()] = m.start()
    return out


def parse_bases(text):
    if not text:
        return []
    out = []
    for part in text.lstrip(":").split(","):
        part = re.sub(r"<[^<>]*>", "", part)
        words = [w for w in IDENT.findall(part) if w not in ("public", "private", "protected", "virtual")]
        if words:
            out.append(words[-1])
    return out


def classify_member(stmt, classname):
    """('method', name, virtual, pure, dtor) / ('field', [(name, type)]) / None"""
    s = ACCESS.sub("", stmt).strip()
    if not s or re.match(r"(typedef|friend|using|template|enum)\b", s):
        return None
    if "(" in s:
        if re.search(r"\boperator\b", s):
            return None
        for m in re.finditer(r"(~\s*)?([A-Za-z_]\w*)\s*\(", s):
            name = m[2]
            if name in KEYWORDS or name in ("__attribute__", "asm"):
                continue
            if m[1]:
                return ("method", "~", bool(re.search(r"\bvirtual\b", s)), False, True)
            if name == classname:
                return None  # constructor
            if re.search(r"\bstatic\b", s[:m.start()]):
                return ("method", name, False, False, False)
            return ("method", name, bool(re.search(r"\bvirtual\b", s[:m.start()])),
                    bool(re.search(r"=\s*0\s*$", s)), False)
        fp = re.search(r"\(\s*\*\s*([A-Za-z_]\w*)\s*\)", s)
        if fp:
            return ("field", [(fp[1], None)])
    words = [w for w in IDENT.findall(s.split("[")[0].split("=")[0]) if w not in TYPE_WORDS]
    ftype = words[0] if len(words) > 1 else None
    names = []
    for part in re.sub(r"\[[^\]]*\]", "", s).split(","):
        part = part.split("=")[0].split(":")[0]
        ids = IDENT.findall(part)
        if ids:
            names.append((ids[-1], ftype))
    return ("field", names) if names else None


def back_ws_forward(m, j):
    while j < len(m) and m[j] in " \t\r\n":
        j += 1
    return j


def parse_body(m, o, c, braces, classname):
    members = []
    anonymous = []
    acc, i, seg = [], o + 1, o + 1
    pat = re.compile(r"[;{]")
    while i < c:
        hit = pat.search(m, i, c)
        if not hit:
            break
        k = hit.start()
        acc.append(m[seg:k])
        if hit[0] == ";":
            members.append("".join(acc))
            acc = []
            i = seg = k + 1
        else:
            close = braces.get(k, c)
            i = seg = close + 1
            prefix = ACCESS.sub("", "".join(acc))
            after = back_ws_forward(m, close + 1)
            if re.fullmatch(r"\s*(?:union|struct)\s*", prefix) and after < len(m) and m[after] == ";":
                # an anonymous union/struct: its members are members of the class
                anonymous.extend(x for x in parse_body(m, k, close, braces, classname) if x[0] == "field")
                acc = []
            elif "(" in "".join(acc):  # inline function body: the declaration ends here
                members.append("".join(acc))
                acc = []
    out = []
    for stmt in members:
        r = classify_member(stmt, classname)
        if r:
            out.append(r)
    return out + anonymous


class FileModel:
    def __init__(self, path, text, module):
        self.path, self.module = path, module
        self.asm = path.suffix == ".s"
        parts = []
        for a, b, k in code_segments(text, self.asm):
            parts.append(text[a:b] if k == "code" else re.sub(r"[^\n]", " ", text[a:b]))
        self.masked = m = "".join(parts)
        self.classes = []   # (open, close, name, bases, members)
        self.class_ns = []  # the innermost namespace of each class ('' = none)
        self.namespaces = []  # (open, close, name)
        self.usings = []    # (position, namespace, scope open, scope close)
        self.vkey = path    # the view key of the occurrence being decided (path, or (path, namespaces))
        self.defs = []      # (open, close, classname, head start)
        self.defines = {}
        self.includes = []
        self.macro_ranges = {}
        self.undefs = defaultdict(list)
        if self.asm:
            return
        braces = bracket_pairs(m, "{", "}")
        self.parens = bracket_pairs(m, "(", ")")
        self.paren_rev = {v: k for k, v in self.parens.items()}
        for mo in re.finditer(r"\bnamespace\s+([A-Za-z_]\w*)\s*\{", m):
            o = mo.end() - 1
            if o in braces:
                self.namespaces.append((o, braces[o], mo[1]))
        for mo in CLASS_HEAD.finditer(m):
            o = mo.end() - 1
            c = braces.get(o)
            if c is not None:
                self.classes.append((o, c, mo[2], parse_bases(mo[3]), parse_body(m, o, c, braces, mo[2])))
                self.class_ns.append(self.namespace_at(o))
        if self.namespaces:
            for mo in re.finditer(r"\busing\s+namespace\s+([A-Za-z_]\w*)\s*;", m):
                scope = (-1, len(m) + 1)
                for o, c in braces.items():
                    if o < mo.start() < c and o > scope[0]:
                        scope = (o, c)
                self.usings.append((mo.start(), mo[1], scope[0], scope[1]))
        last_end = -1
        for mo in METHOD_DEF.finditer(m):
            if mo.start() < last_end or self.in_class(mo.start()):
                continue
            pc = self.parens.get(mo.end() - 1)
            if pc is None:
                continue
            k = pc + 1
            while k < len(m) and m[k] in " \t\r\n":
                k += 1
            if m.startswith("const", k):
                k += 5
                while k < len(m) and m[k] in " \t\r\n":
                    k += 1
            if k < len(m) and m[k] == ":" and not m.startswith("::", k):
                while k < len(m) and m[k] not in "{;":
                    k = self.parens.get(k, k) + 1 if m[k] == "(" else k + 1
            if k < len(m) and m[k] == "{" and k in braces:
                self.defs.append((k, braces[k], mo[1], mo.start()))
                last_end = braces[k]
        for mo in DEFINE.finditer(m):
            self.defines[mo[1]] = mo[2]
            self.macro_ranges.setdefault(("define", mo[1]), []).append((mo.start(), mo[2]))
        # function-like call macros `#define func_X(a, b) _ZN8NpcActor13func_XEii(this, a, b)`: like the object-like
        # ones, the macro stands for that mangled symbol (only `_Z` bodies; never used for typing)
        for mo in DEFINE_CALL.finditer(m):
            self.macro_ranges.setdefault(("define", mo[1]), []).append((mo.start(), mo[2]))
        # token-pasting macros `#define PM(a) (... data_ov074_##a)`: (macro, prefix); `PM(02272538)` spells
        # data_ov074_02272538, which a whole-word rename cannot see
        self.paste_prefixes = [(mo[1], mo[2]) for mo in re.finditer(
            r"^[ \t]*#[ \t]*define[ \t]+([A-Za-z_]\w*)\([^)\n]*\)[^\n]*?\b([A-Za-z_]\w*)[ \t]*##", m, re.M)]
        # file-scope free functions (declarations and definitions, also inside namespace / extern "C" blocks):
        # name -> first position. A bare call of such a name from a member function of a class that has no method
        # of that name calls the free function (a `static inline` wrapper named like a method placeholder)
        self.free_funcs = {}
        transparent = {o for o, c, _ in self.namespaces}
        transparent |= {mo.end() - 1 for mo in re.finditer(r"\bextern\s*\{", m)}
        opaque = []
        for o in sorted(braces):
            if o in transparent or (opaque and o < opaque[-1][1]):
                continue
            opaque.append((o, braces[o]))
        starts = [o for o, _ in opaque]
        for mo in re.finditer(r"\b([A-Za-z_]\w*)\s*\(", m):
            name, at = mo[1], mo.start()
            if name in KEYWORDS or name in self.free_funcs:
                continue
            i = bisect.bisect_right(starts, at) - 1
            if i >= 0 and at < opaque[i][1]:
                continue  # inside a class, function or initializer body
            ls = m.rfind("\n", 0, at) + 1
            if m[ls:at].lstrip().startswith("#"):
                continue
            j = back_ws(m, at - 1)
            if j < 0 or not (m[j].isalnum() or m[j] in "_*&"):
                continue  # not preceded by a return type (a macro invocation, an initializer call)
            k = j
            while k > 0 and (m[k - 1].isalnum() or m[k - 1] == "_"):
                k -= 1
            if m[k:j + 1] in ("return", "sizeof", "new", "delete", "else", "case", "goto", "operator") or \
                    m[max(0, k - 2):k] == "::" or m[max(0, k - 1):k] in (".", ">"):
                continue
            self.free_funcs[name] = at
        self.includes = re.findall(r'^[ \t]*#[ \t]*include[ \t]+"([^"]+)"', text, re.M)
        self.typedefs = {}
        for mo in re.finditer(r"\btypedef\s+(?:const\s+)?(?:struct\s+|class\s+)?([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*;", m):
            self.typedefs[mo[2]] = mo[1]
        # object-like macros whose body is a cast, `#define M ((Unk_020e2a18 *)unk_a1c)`: M has that type
        self.cast_macros = {}
        for mo in re.finditer(r"^[ \t]*#[ \t]*define[ \t]+([A-Za-z_]\w*)[ \t]+\(\s*\(\s*(?:const\s+)?"
                              r"(?:struct\s+|class\s+)?([A-Za-z_]\w*)\s*\*\s*\)", m, re.M):
            self.cast_macros[mo[1]] = mo[2]
            self.macro_ranges.setdefault(("cast", mo[1]), []).append((mo.start(), mo[2]))
        self.undefs = defaultdict(list)
        for mo in re.finditer(r"^[ \t]*#[ \t]*undef[ \t]+([A-Za-z_]\w*)", m, re.M):
            self.undefs[mo[1]].append(mo.start())
        # every #define with its body (continuation lines included): (start, body start, end, name)
        self.define_spans = []
        for mo in re.finditer(r"^[ \t]*#[ \t]*define[ \t]+([A-Za-z_]\w*)", m, re.M):
            end = m.find("\n", mo.end())
            while end != -1 and m[:end].rstrip(" \t\r").endswith("\\"):
                end = m.find("\n", end + 1)
            self.define_spans.append((mo.start(), mo.end(), len(m) if end == -1 else end, mo[1]))

    def define_body_at(self, pos):
        """(macro name, end of the definition) if pos is in the body of a #define, else None"""
        for start, body, end, name in self.define_spans:
            if body <= pos < end:
                return name, end
        return None

    def macro_pos(self, pos):
        """where to look up the macro named by the identifier at pos: just after it, or, for the name of an `#undef`
        line, just before that line (the #undef itself ends the macro, but names the macro that was active)"""
        ls = self.masked.rfind("\n", 0, pos) + 1
        if re.fullmatch(r"[ \t]*#[ \t]*undef[ \t]+", self.masked[ls:pos]):
            return ls
        return pos + 1

    def macro(self, kind, name, pos):
        """the value of a macro (kind 'define': identifier body, 'cast': the cast's type) active at pos, or None"""
        best = None
        for at, value in self.macro_ranges.get((kind, name), ()):
            if at < pos and not any(at < u < pos for u in self.undefs.get(name, ())):
                best = value
        return best

    def namespace_at(self, pos):
        best = None
        for o, c, name in self.namespaces:
            if o < pos < c and (best is None or o > best[0]):
                best = (o, name)
        return best[1] if best else ""

    def namespaces_at(self, pos):
        """the namespaces whose names are visible at pos: enclosing blocks (innermost first), then using-directives"""
        out = [name for o, c, name in sorted(self.namespaces, reverse=True) if o < pos < c]
        out += [name for at, name, o, c in self.usings if at < pos and o < pos < c and name not in out]
        return tuple(out)

    def in_class(self, pos):
        return any(o < pos < c for o, c, *_ in self.classes)

    def enclosing_class(self, pos):
        best = None
        for o, c, name, *_ in self.classes:
            if o < pos < c and (best is None or o > best[0]):
                best = (o, name)
        if best:
            return best[1]
        for o, c, name, _ in self.defs:
            if o < pos < c:
                return name
        return None

    def enclosing_def(self, pos):
        for o, c, name, head in self.defs:
            if o < pos < c:
                return head
        return None

    def line(self, pos):
        return self.masked.count("\n", 0, pos) + 1


class ClassInfo:
    def __init__(self, name):
        self.name = name
        self.bases = []
        self.methods = []        # canonical ordered member list (declaration with the most methods)
        self.all_methods = set()
        self.fields = {}
        self.files = set()
        self.all_bases = set()

    def add(self, bases, members, path):
        self.files.add(path)
        self.all_bases.update(bases)
        methods = [x for x in members if x[0] == "method"]
        if bases and (not self.bases or len(methods) > len(self.methods)):
            self.bases = bases
        if len(methods) > len(self.methods):
            self.methods = methods
        for x in members:
            if x[0] == "method":
                self.all_methods.add(x[1])
            else:
                for name, ftype in x[1]:
                    self.fields.setdefault(name, ftype)


def reloc_module(text):
    m = re.match(r"(main|itcm|dtcm)$|autoload\((\d+)\)$|overlays?\((\d+)", text)
    if not m:
        return None
    if m[1]:
        return m[1]
    if m[2]:
        return f"autoload_{m[2]}"
    return f"ov{int(m[3]):03d}"


# ---------------------------------------------------------------------------------------------------------------
# Index of the repository
# ---------------------------------------------------------------------------------------------------------------

class Index:
    def __init__(self, repo):
        self.repo = repo
        self.symbols = defaultdict(set)       # name -> modules (symbols.txt)
        self.other_config = defaultdict(set)  # lcf/abs names -> modules
        self.tokens = defaultdict(set)        # source identifier (code) -> modules
        self.components = defaultdict(set)    # source-names inside mangled names -> modules
        self.methods = defaultdict(set)       # method -> {class path} (mangled names)
        self.sym_components = set()
        self.sym_methods = defaultdict(set)
        self.sym_addr = defaultdict(list)     # (module, address) -> names
        self.vtables = {}                     # class -> (module, address of _ZTV)
        self.unparsed = []
        self.files = {}
        self.classes = {}
        self.field_names = set()
        self._layout = {}
        self._views = {}
        self._files_with = None
        self._relocs = {}
        for p in repo.config_files:
            text = repo.read(p)
            module = config_module(p, repo.cfg)
            for a, b in config_fields(p, text):
                (self.symbols if p.name == "symbols.txt" else self.other_config)[text[a:b]].add(module)
            if p.name == "symbols.txt":
                for mo in re.finditer(r"^(\S+) kind:\S+ addr:(0x[0-9a-fA-F]+)", text, re.M):
                    self.sym_addr[(module, int(mo[2], 16))].append(mo[1])
                    vt = re.fullmatch(r"_ZTV(\d+)([A-Za-z_]\w*)", mo[1])
                    if vt and int(vt[1]) == len(vt[2]):
                        self.vtables[vt[2]] = (module, int(mo[2], 16))
        for name, mods in list(self.symbols.items()):
            if name.startswith("_Z"):
                self.add_mangled(name, mods, True)
        for p in repo.sources:
            module = source_module(p, repo.root)
            text = repo.read(p)
            fm = FileModel(p, text, module)
            self.files[p] = fm
            for tok in set(TOKEN.findall(fm.masked)):
                if module not in self.tokens[tok]:
                    self.tokens[tok].add(module)
                    if tok.startswith("_Z"):
                        self.add_mangled(tok, {module}, False)
            for o, c, name, bases, members in fm.classes:
                self.classes.setdefault(name, ClassInfo(name)).add(bases, members, p)
                for x in members:
                    if x[0] == "field":
                        self.field_names.update(n for n, _ in x[1])
        self.declarers = defaultdict(set)
        for name, info in self.classes.items():
            for meth in info.all_methods:
                self.declarers[meth].add(name)
        for meth, paths in self.methods.items():
            for path in paths:
                if path and path[-1]:
                    self.declarers[meth].add(path[-1])
        self.children = defaultdict(set)
        for name, info in self.classes.items():
            for b in info.all_bases:
                self.children[b].add(name)

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

    def addresses(self):
        """symbols.txt name -> {(module, address)}"""
        if not hasattr(self, "_addr_of"):
            self._addr_of = defaultdict(set)
            for key, names in self.sym_addr.items():
                for n in names:
                    self._addr_of[n].add(key)
        return self._addr_of

    def method_symbols(self, cls, meth):
        """the mangled symbols.txt names of cls::meth"""
        if not hasattr(self, "_method_syms"):
            self._method_syms = defaultdict(list)
            for n in self.symbols:
                mm = parse_mangled(n) if n.startswith("_Z") else None
                for path, m in (class_method_pairs(mm) if mm else ()):
                    if path and path[-1]:
                        self._method_syms[(path[-1], m)].append(n)
        return self._method_syms.get((cls, meth), [])

    def used(self, name):
        return name in self.symbols or name in self.other_config or name in self.tokens or name in self.components

    # class model -------------------------------------------------------------------------------------------
    # A class's declaration is per translation unit: files declare their own copies of shared classes, and the
    # copies name virtual slots differently (`vfunc_08` in one file, `func_0203e678` in another). Layouts, lookups
    # and field types are therefore computed in the view of one file: its own classes plus its headers'.

    def resolve_include(self, path, name):
        for cand in (self.repo.root / "include" / name, path.parent / name):
            if cand in self.files:
                return cand
        return None

    def view(self, path, stack=()):
        if path in self._views:
            return self._views[path]
        if isinstance(path, tuple):
            file, spaces = path
            fm = self.files[file]
            v = dict(self.view(file))
            for wanted in ("",) + tuple(reversed(spaces)):
                own = {}
                for (o, c, name, bases, members), ns in zip(fm.classes, fm.class_ns):
                    if ns == wanted:
                        own.setdefault(name, ClassInfo(name)).add(bases, members, file)
                v.update(own)
            self._views[path] = v
            return v
        v = {}
        fm = self.files.get(path)
        if fm:
            for inc in fm.includes:
                hp = self.resolve_include(path, inc)
                if hp and hp not in stack:
                    for k, ci in self.view(hp, stack + (path,)).items():
                        v.setdefault(k, ci)
            own = {}
            for o, c, name, bases, members in fm.classes:
                own.setdefault(name, ClassInfo(name)).add(bases, members, path)
            v.update(own)
        self._views[path] = v
        return v

    def info(self, cls, path=None):
        if path is not None:
            ci = self.view(path).get(cls)
            if ci is not None:
                return ci
        return self.classes.get(cls)

    def declares(self, cls, meth, path=None):
        info = self.info(cls, path)
        if info and meth in info.all_methods:
            return True
        if path is not None and cls in self.view(path):
            return False
        return any(p and p[-1] == cls for p in self.methods.get(meth, ()))

    def lookup(self, cls, meth, path=None):
        """the class that declares meth for an object of class cls (cls, then its bases), in a file's view"""
        seen, todo = set(), [cls]
        while todo:
            c = todo.pop(0)
            if c in seen:
                continue
            seen.add(c)
            if self.declares(c, meth, path):
                return c
            info = self.info(c, path)
            if info:
                todo += info.bases
        return None

    def field_type(self, cls, field, path=None):
        seen, todo = set(), [cls]
        while todo:
            c = todo.pop(0)
            if c in seen:
                continue
            seen.add(c)
            info = self.info(c, path)
            if info:
                if field in info.fields:
                    return info.fields[field]
                todo += info.bases
        return None

    def primary_chain(self, cls, path=None):
        chain = [cls]
        while True:
            info = self.info(chain[-1], path)
            if not info or not info.bases or info.bases[0] in chain:
                return chain
            chain.append(info.bases[0])

    def ancestors(self, cls, path=None):
        out, todo = set(), [cls]
        while todo:
            c = todo.pop()
            info = self.info(c, path)
            for b in (info.bases if info else ()):
                if b not in out:
                    out.add(b)
                    todo.append(b)
        return out

    def layout(self, cls, path, stack=()):
        """primary vtable of cls in a file's view: [[name or '~', owner class, pure]] per 4-byte slot from the
        address point; None if the class or a base is not declared there"""
        key = (path, cls)
        if key in self._layout:
            return self._layout[key]
        info = self.view(path).get(cls)
        if info is None or cls in stack:
            return None
        table, secondary = [], set()
        if info.bases:
            base = self.layout(info.bases[0], path, stack + (cls,))
            if base is None:
                self._layout[key] = None
                return None
            table = [list(e) for e in base]
            for b in info.bases[1:]:
                other = self.layout(b, path, stack + (cls,))
                if other:
                    secondary |= {e[0] for e in other}
        for _, name, virtual, pure, dtor in info.methods:
            slots = [e for e in table if e[0] == name]
            if slots:
                for e in slots:
                    e[1], e[2] = cls, pure
            elif virtual or name in secondary:
                # a new virtual, or an override of a secondary base's virtual that the primary chain lacks: mwcc gives
                # those their own primary slots too (B17: BuildingActor's vfunc_60/6c/88; ROM vtable 0x0225e29c)
                table.append([name, cls, pure])
                if dtor:
                    table.append([name, cls, pure])
        for e in table:  # overrides declared only in another copy of the class in the same file
            if e[1] != cls and e[0] in info.all_methods:
                e[1] = cls
        self._layout[key] = table
        return table

    def files_with(self, cls):
        """the source files whose view declares cls"""
        if self._files_with is None:
            self._files_with = defaultdict(list)
            for p in self.files:
                for name in self.view(p):
                    self._files_with[name].append(p)
        return self._files_with.get(cls, [])

    def reloc(self, module, address):
        if module not in self._relocs:
            cfg = self.repo.cfg
            path = cfg / "relocs.txt" if module == "main" else (
                cfg / "overlays" / module / "relocs.txt" if module.startswith("ov") else cfg / module / "relocs.txt")
            table = {}
            if path.is_file():
                for mo in re.finditer(r"^from:(0x[0-9a-fA-F]+) kind:\S+ to:(0x[0-9a-fA-F]+)(?: add:\S+)? module:(\S+)",
                                      path.read_text(), re.M):
                    table[int(mo[1], 16)] = (int(mo[2], 16), reloc_module(mo[3]))
            self._relocs[module] = table
        return self._relocs[module].get(address)


# ---------------------------------------------------------------------------------------------------------------
# Receiver resolution: which class does `x->name` / `x.name` / `name` mean at a position of a source file
# ---------------------------------------------------------------------------------------------------------------

def back_ws(m, j):
    while j >= 0 and m[j] in " \t\r\n":
        j -= 1
    return j


def receiver_type(fm, idx, pos, depth=0):
    """(class or None, is a member access)"""
    m = fm.masked
    j = back_ws(m, pos - 1)
    if j >= 1 and m[j - 1:j + 1] == "->":
        j -= 2
    elif j >= 0 and m[j] == "." and not re.search(r"(?<![A-Za-z0-9_])\d[A-Za-z0-9_]*$", m[max(0, j - 40):j]):
        j -= 1
    else:
        return None, False
    return expression_type(fm, idx, back_ws(m, j), pos, depth), True


def expression_type(fm, idx, j, pos, depth):
    """class of the expression that ends at j"""
    m = fm.masked
    if depth > 6 or j < 0:
        return None
    while m[j] == "]":
        level, k = 0, j
        while k >= 0:
            if m[k] == "]":
                level += 1
            elif m[k] == "[":
                level -= 1
                if level == 0:
                    break
            k -= 1
        j = back_ws(m, k - 1)
        if j < 0:
            return None
    if m[j] == ")":
        k = fm.paren_rev.get(j)
        if k is None:
            return None
        inner = m[k + 1:j]
        cast = re.match(r"\s*\(\s*(?:const\s+)?(?:struct\s+|class\s+)?([A-Za-z_]\w*)\s*\*\s*\)", inner)
        if cast:
            return resolve_type(fm, cast[1], idx, pos)
        before = back_ws(m, k - 1)
        if before >= 0 and (m[before].isalnum() or m[before] == "_"):
            f = k - 1
            while f > 0 and (m[f - 1].isalnum() or m[f - 1] == "_"):
                f -= 1
            return return_type(fm, idx, m[f:before + 1], pos)  # a call: its declared return type
        if not inner.strip():
            return None
        # a parenthesised expression `(expr)` / `(*p)`: the type of what it ends with
        return expression_type(fm, idx, back_ws(m, j - 1), pos, depth + 1)
    if not (m[j].isalnum() or m[j] == "_"):
        return None
    k = j
    while k > 0 and (m[k - 1].isalnum() or m[k - 1] == "_"):
        k -= 1
    name = m[k:j + 1]
    if name == "this":
        encl = fm.enclosing_class(pos)
        return resolve_type(fm, encl, idx, pos) if encl else None
    # a member of another expression: `a.b->name`
    owner, access = receiver_type(fm, idx, k, depth + 1)
    if access:
        if not owner:
            return None
        alias = fm.macro("define", name, k)
        if alias and alias != name and not alias.startswith("_Z"):
            name = alias  # a field renamed by a macro: `#define unk_13b0 unk_13b0_v16`
        return idx.field_type(owner, name, fm.vkey)
    return variable_type(fm, idx, name, pos)


def resolve_type(fm, name, idx=None, pos=None):
    if pos is not None and idx is not None:
        # a class name aliased by a macro active here (`#define TalkMsgRequest Unk_020ddcf0_v13`): the compiler sees
        # the alias's class
        alias = fm.macro("define", name, pos)
        if alias and alias != name and not alias.startswith("_Z") and \
                (alias in idx.view(fm.vkey) or alias in idx.classes):
            return alias
    if idx is not None and name in idx.view(fm.vkey):
        return name  # a class of this view (another unit of a merged file may typedef the same name)
    seen = set()
    while name in fm.typedefs and name not in seen:
        seen.add(name)
        name = fm.typedefs[name]
    return name


def return_type(fm, idx, func, pos):
    """the class a function or method named func returns (pointer or reference): its nearest declaration before
    pos in the file, or its only one"""
    pat = re.compile(r"\b([A-Za-z_]\w*)\s*[*&]\s*(?:[A-Za-z_]\w*\s*::\s*)?" + re.escape(func) + r"\s*\(")
    found = [(mo.start(), resolve_type(fm, mo[1], idx, mo.start())) for mo in pat.finditer(fm.masked)]
    found = [(at, t) for at, t in found if t in idx.classes or t in idx.sym_components]
    before = [t for at, t in found if at < pos]
    if before:
        return before[-1]
    types = {t for _, t in found}
    return types.pop() if len(types) == 1 else None


def variable_type(fm, idx, name, pos):
    cast = fm.macro("cast", name, pos)
    if cast:
        return resolve_type(fm, cast, idx, pos)
    value = fm.macro("define", name, pos)
    if value and not value.startswith("_Z"):
        name = value  # `#define OWNER unk_13b0`
    t = variable_type_raw(fm, idx, name, pos)
    return resolve_type(fm, t, idx, pos) if t else None


def variable_type_raw(fm, idx, name, pos):
    m = fm.masked
    pat = re.compile(r"\b([A-Za-z_]\w*)\s*(?:\*+\s*(?:const\s+)?|&\s*|\s)\s*\b" + re.escape(name) + r"\b\s*(?=[;,)=\[])")
    found = [(mo.start(), resolve_type(fm, mo[1], idx, mo.start())) for mo in pat.finditer(m)]
    found = [(at, t) for at, t in found if t in idx.classes or t in idx.sym_components]
    head = fm.enclosing_def(pos)
    if head is None:
        for o, c, cname, *_ in fm.classes:
            if o < pos < c:
                head = o
    if head is not None:
        local = [(at, t) for at, t in found if head <= at < pos]
        # a local constructed with arguments: `TalkTagScannerView loc(this);`
        ctor = re.compile(r"(?<![\w.>:])([A-Za-z_]\w*)\s+" + re.escape(name) + r"\s*\(")
        for mo in ctor.finditer(m, head, pos):
            t = resolve_type(fm, mo[1], idx, mo.start())
            if t in idx.classes or t in idx.sym_components:
                local.append((mo.start(), t))
        local = [t for at, t in sorted(local)]
        if local:
            return local[-1]
    cls = fm.enclosing_class(pos)
    if cls:
        cls = resolve_type(fm, cls, idx, pos)
        ft = idx.field_type(cls, name, fm.vkey)
        if ft:
            return ft
    types = {t for _, t in found}
    return types.pop() if len(types) == 1 else None


# ---------------------------------------------------------------------------------------------------------------
# The renamer
# ---------------------------------------------------------------------------------------------------------------

class Renamer:
    def __init__(self, repo, idx, renames):
        self.repo, self.idx = repo, idx
        self.funcs, self.classes = {}, {}
        self.any_pairs = defaultdict(dict)          # old method -> {class: rename}, all files (comments, docs)
        self.global_pairs = defaultdict(dict)       # member renames: the same in every file
        self.file_pairs = defaultdict(lambda: defaultdict(dict))  # vfunc renames: path -> old -> {class: rename}
        self.mangled_members = defaultdict(list)    # old method -> [(class path, rename)]
        for r in renames:
            if r.kind == "func":
                self.funcs[r.old] = r
                for m in getattr(r, "members", ()):  # member aliases of the same function
                    for path, old in m.pairs:
                        self.any_pairs[old][path[-1]] = m
                        self.global_pairs[old][path[-1]] = m
                        self.mangled_members[old].append((path, m))
            elif r.kind == "class":
                self.classes[r.old] = r
            else:
                for path, old in r.pairs:
                    self.any_pairs[old][path[-1]] = r
                    self.mangled_members[old].append((path, r))
                    if r.file_pairs is None:
                        self.global_pairs[old][path[-1]] = r
                for f, prs in (r.file_pairs or {}).items():
                    for cls, old in prs:
                        self.file_pairs[f][old][cls] = r
                        self.any_pairs[old].setdefault(cls, r)
        self.mangled_needed = bool(self.classes or self.mangled_members)
        self.produced_candidates = [r for r in renames if r.kind != "func"]
        subs = set(self.funcs) | set(self.classes) | set(self.any_pairs)
        self.prefilter = re.compile("|".join(re.escape(s) for s in sorted(subs, key=len, reverse=True))) \
            if subs else None
        self.define_cache = {}
        self.produced = defaultdict(set)   # new name written into a config file -> renames that made it
        self.free = {r.ident: r for r in renames if r.kind == "free"}
        self.mangled_needed = self.mangled_needed or bool(self.free)
        self.call_macros = self.find_call_macros(idx)
        subs |= set(self.free) | {name for _, name, _ in self.call_macros}
        self.prefilter = re.compile("|".join(re.escape(s) for s in sorted(subs, key=len, reverse=True))) \
            if subs else None

    def find_call_macros(self, idx):
        """Call macros `#define func_XXXX _ZN<Class><method>...` (or already `#define Class_method _ZN...`) whose method
        or class is renamed: (path, macro name, body) -> (new macro name `<Class>_<method>`, rename). The new name is
        unique; the bare method name would capture the class's own method declarations in that file."""
        out = {}
        if not (self.mangled_members or self.classes):
            return out
        for p, fm in idx.files.items():
            for (kind, name), entries in fm.macro_ranges.items():
                if kind != "define":
                    continue
                for _, body in entries:
                    mm = parse_mangled(body) if body.startswith("_Z") else None
                    for cpath, meth in (class_method_pairs(mm) if mm else ()):
                        if not cpath or not all(cpath) or name not in (meth, "_".join(cpath) + "_" + meth):
                            continue
                        r = next((rr for mpath, rr in self.mangled_members.get(meth, ())
                                  if cpath[-len(mpath):] == mpath), None)
                        if r is None and name == meth:
                            continue  # only the class is renamed; a bare-name macro stays as it is
                        rc = r or next((self.classes[c] for c in cpath if c in self.classes), None)
                        if rc is None:
                            continue
                        new = "_".join(self.classes[c].new if c in self.classes else c for c in cpath) + "_" + \
                            (r.new if r else meth)
                        if new == name:
                            continue
                        if re.search(r"\b" + re.escape(new) + r"\b", fm.masked):
                            rc.unresolved.append(f"{p.relative_to(self.repo.root)}: call macro {name} would become "
                                                 f"{new}, which the file already uses")
                        out[(p, name, body)] = (new, rc)
        return out

    @staticmethod
    def in_scope(r, module):
        return r.scope is None or module is None or r.scope == module

    def hit(self, r, category, path):
        r.counts[category] += 1
        r.files.add(path)
        return r.new

    def rewrite_mangled(self, tok, module, category, path):
        m = parse_mangled(tok)
        if m is None:
            return tok
        edits = []
        if self.free and tok[2:3].isdigit() and m.names and m.names[0][0] == 2 and m.names[0][2] in self.free:
            edits.append((2, m.names[0][1], self.free[m.names[0][2]]))  # `_Z<len><ident><params>`: a free function
        for a, b, text in m.names:
            r = self.classes.get(text)
            if r is not None and self.in_scope(r, module):
                edits.append((a, b, r))
        for comps in m.nested:
            names = [c for c in comps if c[0] != "targs"]
            if len(names) < 2 or names[-1][0] != "name":
                continue
            cls = tuple(c[3] if c[0] == "name" else None for c in names[:-1])
            for cpath, r in self.mangled_members.get(names[-1][3], ()):
                if cls[-len(cpath):] == cpath:
                    edits.append((names[-1][1], names[-1][2], r))
                    break
        if not edits:
            return tok
        out, last = [], 0
        for a, b, r in sorted(edits, key=lambda e: e[0]):
            if a < last:
                continue
            out.append(tok[last:a])
            out.append(f"{len(r.new)}{r.new}")
            last = b
            self.hit(r, category, path)
        out.append(tok[last:])
        return "".join(out)

    def decide_method(self, tok, text, pos, fm, code, path, free_fallback=False):
        """new name for a method identifier at pos, or None to keep it"""
        idx = self.idx
        fpath = fm.path if fm is not None else None
        if fm is not None and fm.namespaces:
            spaces = fm.namespaces_at(pos)
            fm.vkey = (fm.path, spaces) if spaces else fm.path
            fpath = fm.vkey
        elif fm is not None:
            fm.vkey = fm.path
        if fm is None:
            pairs = self.any_pairs[tok]
        else:
            pairs = dict(self.global_pairs.get(tok, {}))
            pairs.update(self.file_pairs[fm.path].get(tok, {}))
        if re.search(r"(?:^|[^A-Za-z0-9_\s])\s*::\s*$", text[max(0, pos - 200):pos]):
            for r in {id(x): x for x in pairs.values()}.values():
                r.counts["left (::global, free function of the same name)"] += 1
            return None
        q = re.search(r"([A-Za-z_]\w*)\s*::\s*(?:~\s*)?$", text[max(0, pos - 200):pos])
        if q:
            qcls = resolve_type(fm, q[1], idx, pos) if fm is not None else q[1]
            owner = idx.lookup(qcls, tok, fpath) or qcls
            r = pairs.get(owner)
            return self.hit(r, "src" if code else "comment/docs", path) if r else None
        if code and fm is not None and fm.macro("define", tok, fm.macro_pos(pos)):
            # `#define name _ZN...`: every use in the file follows the macro's mangled symbol (its #undef too)
            key = (fm.path, tok, fm.macro("define", tok, fm.macro_pos(pos)))
            if key not in self.define_cache:
                owner = None
                mm = parse_mangled(key[2])
                if mm:
                    for cpath, meth in class_method_pairs(mm):
                        if meth == tok and cpath and cpath[-1]:
                            owner = cpath[-1]
                self.define_cache[key] = owner
            owner = self.define_cache[key]
            if owner:
                r = self.any_pairs[tok].get(owner)
                return self.hit(r, "src", path) if r else None
        if not pairs or (fm is not None and not fm.asm and code and
                         not any(c in idx.view(fm.path) for c in pairs)):
            return None  # none of the renamed classes is declared in this file
        if not code or fm is None or fm.asm:
            for r in pairs.values():
                r.counts["left (unqualified, comment/docs)"] += 1
            return None
        line_start = text.rfind("\n", 0, pos) + 1
        body_of = fm.define_body_at(pos)
        if text[line_start:pos].lstrip().startswith("#") and not (body_of and body_of[0] != tok):
            # a preprocessor line (`#define vfunc_14() vfunc_14(s32 a)` around an #include): it is about the
            # classes of the headers the file includes
            for inc in fm.includes:
                hp = idx.resolve_include(fm.path, inc)
                for c, ci in (idx.view(hp).items() if hp else ()):
                    if tok in ci.all_methods and c in pairs:
                        return self.hit(pairs[c], "src (preprocessor)", path)
            return None
        cls, access = receiver_type(fm, idx, pos)
        in_macro = fm.define_body_at(pos) if fm.enclosing_class(pos) is None else None
        if in_macro and (not access or cls is None) and in_macro[0] != tok:
            # an implicit-this (or this->) call in the body of a file-scope macro: the macro's uses decide
            return self.decide_by_macro_uses(tok, pos, fm, fpath, pairs, path, *in_macro, access)
        if not access:
            cls = fm.enclosing_class(pos)
            if cls is not None:
                cls = resolve_type(fm, cls, idx, pos)
            if cls is None:
                for r in {id(x): x for x in pairs.values()}.values():
                    r.counts["left (free function of the same name)"] += 1
                return None
        owner = idx.lookup(cls, tok, fpath) if cls else None
        if owner:
            r = pairs.get(owner)
            return self.hit(r, "src", path) if r else None
        if free_fallback and not access:
            return None  # an unqualified name that no class of the chain declares: the free function of that name
        if not access and self.free_in_scope(fm, tok, pos):
            # no class of the chain declares it, and a free function of that name is declared before (e.g. a
            # file-local `static inline` wrapper named like the method placeholder): the call is to that function
            for r in {id(x): x for x in pairs.values()}.values():
                r.counts["left (free function in scope)"] += 1
            return None
        # unresolved: safe only if every class of this file's view that has this method name is renamed
        declared = {c for c, ci in idx.view(fm.vkey).items() if tok in ci.all_methods}
        if declared and declared <= set(pairs) and tok not in idx.field_names and tok not in idx.symbols:
            r = next(iter(pairs.values())) if len({id(x) for x in pairs.values()}) == 1 else None
            if r:
                return self.hit(r, "src (by elimination)", path)
        where = f"{fm.path.relative_to(self.repo.root)}:{fm.line(pos)}"
        for r in {id(x): x for x in pairs.values()}.values():
            r.unresolved.append(f"{where}: `{tok}` ({'receiver ' + cls if cls else 'receiver unknown'})")
        return None

    def free_in_scope(self, fm, tok, pos):
        """a file-scope free function named tok is declared in the file before pos, or in a header it includes"""
        if fm.free_funcs.get(tok, pos) < pos:
            return True
        seen, todo = {fm.path}, [fm]
        while todo:
            f = todo.pop()
            for inc in f.includes:
                hp = self.idx.resolve_include(f.path, inc)
                if hp is None or hp in seen:
                    continue
                seen.add(hp)
                hf = self.idx.files[hp]
                if tok in hf.free_funcs:
                    return True
                todo.append(hf)
        return False

    def decide_by_macro_uses(self, tok, pos, fm, fpath, pairs, path, macro, end, access):
        """a method name in the body of a file-scope #define: decided by the classes of the member functions that use
        the macro (all uses must agree), else refused with file:line"""
        idx = self.idx
        where = f"{fm.path.relative_to(self.repo.root)}:{fm.line(pos)}"
        uses = [mo.start() for mo in re.finditer(r"\b" + re.escape(macro) + r"\b", fm.masked)
                if mo.start() > end and not fm.define_body_at(mo.start())]
        if not uses:
            for r in {id(x): x for x in pairs.values()}.values():
                r.counts["left (body of an unused macro)"] += 1
            return None
        decisions = set()
        for u in uses:
            cls = fm.enclosing_class(u)
            cls = resolve_type(fm, cls, idx, u) if cls else None
            owner = idx.lookup(cls, tok, fpath) if cls else None
            if owner is None and not access and cls and self.free_in_scope(fm, tok, pos):
                decisions.add(None)  # the free function of that name
            elif owner is None:
                decisions.add("unresolved")
            else:
                decisions.add(id(pairs[owner]) if owner in pairs else None)
        if len(decisions) == 1 and "unresolved" not in decisions:
            choice = decisions.pop()
            if choice is None:
                return None
            r = next(x for x in pairs.values() if id(x) == choice)
            return self.hit(r, "src (macro body, by its uses)", path)
        for r in {id(x): x for x in pairs.values()}.values():
            r.unresolved.append(f"{where}: `{tok}` in the body of macro {macro}, whose {len(uses)} use(s) "
                                f"{'are in different classes' if 'unresolved' not in decisions else 'are not all in member functions of a known class'}")
        return None

    def rewrite_text(self, text, spans, module, category, path, skip_files, fm=None):
        """spans: (start, end, is code); comments, docs and config fields are not code"""
        out, last = [], 0
        for a, b, code in spans:
            seg = text[a:b]
            if self.prefilter and not self.prefilter.search(seg):
                continue

            def sub(m):
                tok = m[0]
                if skip_files and FILE_EXT.match(seg, m.end()):
                    r = self.funcs.get(tok) or self.classes.get(tok)
                    if r:
                        r.counts["skipped (file name)"] += 1
                    return tok
                if fm is not None and self.call_macros and code:
                    body = fm.macro("define", tok, fm.macro_pos(a + m.start()))
                    hitm = self.call_macros.get((fm.path, tok, body)) if body else None
                    if hitm:
                        hitm[1].counts["src (call macro)"] += 1
                        hitm[1].files.add(path)
                        return hitm[0]
                rf = self.free.get(tok)
                if rf is not None:
                    return self.hit(rf, category, path)
                r = self.funcs.get(tok) or self.classes.get(tok)
                if r is not None and getattr(r, "members", None) and category == "src":
                    # the name is also a member alias: occurrences that resolve to the member get the member's name
                    member = self.decide_method(tok, text, a + m.start(), fm, code, path, free_fallback=True)
                    if member:
                        return member
                if r is not None and self.in_scope(r, module):
                    if category.startswith("config"):
                        self.produced[r.new].add(r)
                    return self.hit(r, category, path)
                if tok in self.any_pairs:
                    new = self.decide_method(tok, text, a + m.start(), fm, code, path)
                    return new or tok
                if self.mangled_needed and tok.startswith("_Z"):
                    before = {id(x): sum(x.counts.values()) for x in self.produced_candidates}
                    new = self.rewrite_mangled(tok, module, category, path)
                    if category.startswith("config") and new != tok:
                        self.produced[new] |= {x for x in self.produced_candidates
                                               if sum(x.counts.values()) != before[id(x)]}
                    return new
                return tok
            new = TOKEN.sub(sub, seg)
            if new != seg:
                out.append(text[last:a])
                out.append(new)
                last = b
        if last == 0:
            return text
        out.append(text[last:])
        return "".join(out)

    def merge_aliases(self, text, path):
        """two names of one address that became the same name: keep one line (the function's, else the first)"""
        lines = text.splitlines(keepends=True)
        seen = {}
        drop = set()
        for i, line in enumerate(lines):
            mo = re.match(r"(\S+) kind:(\S+) addr:(0x[0-9a-fA-F]+)", line)
            if not mo:
                continue
            key = (mo[1], mo[3].lower())
            if key in seen:
                j = seen[key]
                keep_new = "function" in mo[2] and "function" not in lines[j]
                drop.add(j if keep_new else i)
                if keep_new:
                    seen[key] = i
                for r in self.produced.get(mo[1], ()):
                    r.notes.append(f"{path.relative_to(self.repo.root)}: two names of {mo[3]} became {mo[1]}: one "
                                   f"symbols.txt line kept")
            else:
                seen[key] = i
        return "".join(line for i, line in enumerate(lines) if i not in drop) if drop else text

    def count_strings(self, text, spans, path):
        for a, b in spans:
            for m in TOKEN.finditer(text, a, b):
                r = self.funcs.get(m[0]) or self.classes.get(m[0])
                if r:
                    r.counts["skipped (string literal)"] += 1
                    r.notes.append(f"{path}: `{m[0]}` inside a string literal left unchanged")

    def run(self):
        repo, changed = self.repo, {}
        for p in repo.config_files:
            text = repo.read(p)
            if self.prefilter and not self.prefilter.search(text):
                continue
            module = config_module(p, repo.cfg)
            spans = [(a, b, False) for a, b in config_fields(p, text)]
            new = self.rewrite_text(text, spans, module, f"config:{p.name}", p, False)
            if p.name == "symbols.txt" and new != text:
                new = self.merge_aliases(new, p)
            if new != text:
                changed[p] = new
        for p in repo.sources:
            text = repo.read(p)
            if self.prefilter and not self.prefilter.search(text):
                continue
            fm = self.idx.files[p]
            segs = list(code_segments(text, p.suffix == ".s"))
            self.count_strings(text, [(a, b) for a, b, k in segs if k == "string"], p)
            spans = [(a, b, k == "code") for a, b, k in segs if k != "string" and b > a]
            new = self.rewrite_text(text, spans, fm.module, "src", p, False, fm)
            if new != text:
                changed[p] = new
        for p in repo.docs:
            text = repo.read(p)
            if self.prefilter and not self.prefilter.search(text):
                continue
            new = self.rewrite_text(text, [(0, len(text), False)], None, "docs", p, True)
            if new != text:
                changed[p] = new
        return changed


# ---------------------------------------------------------------------------------------------------------------
# Validation
# ---------------------------------------------------------------------------------------------------------------

def valid_new_name(r):
    if r.kind == "func" and r.new.startswith("_Z"):
        return parse_mangled(r.new) is not None
    return bool(IDENT.fullmatch(r.new)) and r.new not in KEYWORDS


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


def normalize(r, idx):
    """func records that name a method become member/vfunc records"""
    if r.kind != "func" or r.errors:
        return
    target = None
    if r.old.startswith("_Z") and not r.new.startswith("_Z") and r.old in idx.symbols:
        mm = parse_mangled(r.old)
        pairs = class_method_pairs(mm) if mm else []
        if len(pairs) == 1 and all(pairs[0][0]):
            target = pairs[0]
        elif mm and not mm.nested and r.old[2:3].isdigit() and mm.names and mm.names[0][0] == 2:
            # `_Z13func_020b22b0iii`: a C++ free function. The source identifier gets the new name and the symbol the
            # re-mangled `_Z<len(new)><new><params>`
            before = r.label()
            r.kind = "free"
            r.ident = mm.names[0][2]
            r.new_mangled = f"_Z{len(r.new)}{r.new}{r.old[mm.names[0][1]:]}"
            r.notes.append(f"`{before}` is a C++ free function: {r.ident} -> {r.new} in sources, symbol -> "
                           f"{r.new_mangled}")
            return
    elif IDENT.fullmatch(r.old) and r.old not in idx.symbols and not r.old.startswith("_Z") and \
            any(n.startswith(f"_Z{len(r.old)}{r.old}") for n in idx.symbols):
        # the plain identifier of a C++ free function whose symbol is mangled (`func func_020c22e0 X` for the symbol
        # `_Z13func_020c22e0v`): the same `free` rename
        for n in sorted(idx.symbols):
            mm = parse_mangled(n) if n.startswith(f"_Z{len(r.old)}{r.old}") else None
            if mm and not mm.nested and mm.names and mm.names[0][0] == 2 and mm.names[0][2] == r.old:
                before = r.label()
                r.kind, r.ident = "free", r.old
                r.old = n
                r.new_mangled = f"_Z{len(r.new)}{r.new}{n[mm.names[0][1]:]}"
                r.notes.append(f"`{before}`: the symbol is the C++ free function {n}: {r.ident} -> {r.new} in sources, "
                               f"symbol -> {r.new_mangled}")
                return
    elif r.old not in idx.symbols and r.old not in idx.other_config and len(idx.sym_methods.get(r.old, ())) == 1:
        (path,) = idx.sym_methods[r.old]
        if all(path):
            target = (path, r.old)
    if not target:
        return
    path, meth = target
    before = r.label()
    r.path, r.old = tuple(path), meth
    if slot_of(idx, path[-1], meth) is not None:
        r.kind = "vfunc"
    else:
        r.kind = "member"
    r.notes.append(f"`{before}` names a method: treated as `{r.label()}`")


def resolve_scope(r, global_mods, src_mods, what, cfg="symbols.txt"):
    src_mods = set(src_mods) - {"include", "src"}
    if global_mods:
        if len(global_mods) > 1:
            if r.qual in (None, "*"):
                return [f"{r.where}: {what} {r.old} is in the {cfg} of several modules "
                        f"({', '.join(sorted(global_mods))}); qualify it, e.g. `{sorted(global_mods)[0]}:{r.old}`"]
            if r.qual not in global_mods:
                return [f"{r.where}: {r.old} is not in {r.qual}'s {cfg} (it is in {', '.join(sorted(global_mods))})"]
            r.scope = r.qual
            r.notes.append(f"in several modules' {cfg}: only {r.qual}'s {cfg} and src/{r.qual} renamed")
            return []
        (only,) = global_mods
        if r.qual not in (None, "*") and r.qual != only:
            return [f"{r.where}: {r.old} belongs to {only}, not {r.qual}"]
        r.scope = None
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
    in_lcf = idx.other_config.get(r.old, set())
    in_src = idx.tokens.get(r.old, set()) | in_lcf
    if not in_syms and not in_src:
        return [f"{r.where}: {r.old} exists in no symbols.txt and no source"]
    if not in_syms and r.old in idx.sym_methods:
        classes = ", ".join("::".join(p or "?" for p in path) for path in sorted(idx.sym_methods[r.old], key=str))
        return [f"{r.where}: {r.old} is not a symbols.txt name but a method of {classes}; use "
                f"`member <Class>::{r.old} <new>` (or `vfunc` if virtual)"]
    # a name the linker script defines (lcf_symbols.txt / abs_symbols.txt: `data_021ed0a0 ... base:gSaveData`) is a
    # global link-time symbol like a symbols.txt name: renamed in every module that uses it, no qualifier needed
    if in_syms:
        errors += resolve_scope(r, in_syms, in_src, "symbol")
    else:
        errors += resolve_scope(r, in_lcf, in_src, "symbol", "lcf_symbols.txt/abs_symbols.txt")
    if not allow_existing and idx.used(r.new):
        errors.append(f"{r.where}: {r.new} is already used ({describe_use(idx, r.new)}); --allow-existing to accept")
    for p, fm in idx.files.items():
        for macro, prefix in getattr(fm, "paste_prefixes", ()):
            rest = r.old[len(prefix):]
            if r.old.startswith(prefix) and rest:
                mo = re.search(r"\b" + re.escape(macro) + r"\s*\(\s*" + re.escape(rest) + r"\s*\)", fm.masked)
                if mo:
                    errors.append(f"{r.where}: {r.old} is also spelled by token pasting, `{mo[0]}` with "
                                  f"`#define {macro}(..) ..{prefix}##..` at {p.relative_to(idx.repo.root)}:"
                                  f"{fm.line(mo.start())}; expand that use (or the macro) by hand first")
    if r.old.startswith("_Z"):
        r.notes.append("old name is mangled: only literal uses change (symbols.txt, extern \"C\" declarations)")
    if in_syms and r.old in idx.sym_methods:
        # the name is also a method name in mangled symbols (alias labels of the same function, e.g.
        # `_ZN9TalkFrame13func_02068524Ev` next to `func_02068524`): a class copy declares the function as a member
        # and calls it as one. The token rename changes those declarations and calls, so the method component of
        # those mangled names must change too, which is only right when they are names of the same address.
        # Occurrences that resolve to the member (declaration, calls from member functions) and the mangled alias get
        # a member-style name: lowerCamel of the part after `<Class>_` of the new name
        # (`TalkFrame_FreeBuffers` -> TalkFrame::freeBuffers); the free function's occurrences get the new name.
        addr_of = idx.addresses()
        mine = addr_of.get(r.old, set())
        r.members = []
        for path in sorted(idx.sym_methods[r.old], key=str):
            if not path or not all(path):
                continue
            cls = path[-1]
            syms = idx.method_symbols(cls, r.old)
            if not (syms and all(addr_of.get(n, set()) & mine for n in syms)):
                errors.append(f"{r.where}: {r.old} is also the method {'::'.join(path)}::{r.old} at another address "
                              f"({', '.join(syms)}); rename that with `member`, or this one by its address name")
                continue
            rest = r.new.split("_", 1)[1] if "_" in r.new.strip("_") else ""
            if not rest or not IDENT.fullmatch(rest) or rest[0].isdigit():
                errors.append(f"{r.where}: {r.old} is also declared as a member of {cls} (alias "
                              f"{', '.join(syms)}); give the member its own name with `method {cls} {r.old} <name>` "
                              f"(or name the function `<Class>_<Name>` to derive it)")
                continue
            mname = rest[0].lower() + rest[1:]
            m = Rename("member", None, r.old, mname, r.where, r.raw, r.batch)
            m.path, m.pairs, m.file_pairs, m.parent = (cls,), [((cls,), r.old)], None, r
            errors += check_new_method(m, idx, [cls], allow_existing, {cls: idx.files_with(cls) or [None]})
            r.members.append(m)
            r.notes.append(f"also declared as a member of {cls} (alias {', '.join(syms)}): member occurrences and "
                           f"the alias become {cls}::{mname}")
    if not in_syms and r.old in idx.other_config:
        r.notes.append("not in symbols.txt: a linker script name (lcf_symbols.txt / abs_symbols.txt)")
    elif not in_syms:
        r.notes.append("not in any symbols.txt: source-only name")
    return errors


def check_free(r, idx, allow_existing):
    """a C++ free function `_Z<len><ident><params>` renamed to a plain identifier"""
    errors = []
    if r.ident in idx.symbols or r.ident in idx.other_config:
        errors.append(f"{r.where}: {r.ident} is also a plain symbols.txt name; renaming the C++ function's source "
                      f"identifier would be ambiguous")
    if r.new_mangled in idx.symbols:
        errors.append(f"{r.where}: {r.new_mangled} is already a symbol")
    if not allow_existing and idx.used(r.new):
        errors.append(f"{r.where}: {r.new} is already used ({describe_use(idx, r.new)}); --allow-existing to accept")
    if r.ident in idx.methods:
        r.notes.append(f"{r.ident} is also a method name inside mangled names (not renamed)")
    return errors


def check_class(r, idx, allow_existing):
    errors = []
    src_mods = idx.tokens.get(r.old, set()) | idx.components.get(r.old, set())
    if r.old not in idx.sym_components and not src_mods:
        return [f"{r.where}: class {r.old} occurs in no mangled symbols.txt name and no source"]
    if r.old in idx.sym_components:
        if r.qual not in (None, "*"):
            r.notes.append(f"qualifier {r.qual} ignored: the class is part of symbols.txt names, renamed everywhere")
        r.scope = None
    else:
        errors += resolve_scope(r, set(), src_mods, "class")
        r.notes.append("class not part of any symbols.txt name: source-only class")
    if not allow_existing and idx.used(r.new):
        errors.append(f"{r.where}: {r.new} is already used ({describe_use(idx, r.new)}); --allow-existing to accept")
    return errors


def slot_of(idx, cls, meth):
    """the vtable slot index of cls::meth in any file's view, or None (non-virtual / unknown)"""
    for p in idx.files_with(cls):
        table = idx.layout(cls, p)
        if table:
            hits = [i for i, e in enumerate(table) if e[0] == meth]
            if hits:
                return hits[0]
    return None


def check_new_method(r, idx, classes, allow_existing, files=None, slot=None):
    """the new method name must not clash with a method the classes have or inherit, in any file's view (for a
    vfunc: unless that method is the same slot, i.e. the name a copy of the class already uses for it)"""
    errors = []
    for cls in sorted(classes):
        for p in (files or {}).get(cls, [None]):
            owner = idx.lookup(cls, r.new, p)
            if owner and slot is not None and p is not None:
                t = idx.layout(cls, p)
                if t and slot < len(t) and t[slot][0] == r.new:
                    continue
            if owner:
                where = f" in {p.relative_to(idx.repo.root)}" if p else ""
                errors.append(f"{r.where}: {cls} already has a method {r.new} (declared in {owner}{where})")
                break
        if errors:
            break
    if (r.new in idx.symbols or r.new in idx.other_config) and not allow_existing:
        errors.append(f"{r.where}: {r.new} is a plain symbols.txt name (a free function or object); inside the class "
                      f"an unqualified call would bind to the method instead; --allow-existing to accept")
    elif not allow_existing and r.new in idx.classes:
        errors.append(f"{r.where}: {r.new} is a class name; --allow-existing to accept")
    elif r.new in idx.tokens:
        r.notes.append(f"{r.new} already occurs as an identifier ({describe_use(idx, r.new)})")
    return errors


def check_member(r, idx, allow_existing):
    cls, old = r.path[-1], r.old
    known = any(p[-len(r.path):] == r.path for p in idx.methods.get(old, ())) or \
        any(old in idx.view(p)[cls].all_methods for p in idx.files_with(cls))
    if not known:
        return [f"{r.where}: {'::'.join(r.path)} has no method {old} (mangled names or source declarations)"]
    errors = []
    s = slot_of(idx, cls, old)
    if s is not None:
        errors.append(f"{r.where}: {cls}::{old} is virtual (vtable slot {4 * s:#04x}); use "
                      f"`vfunc {cls} {old} {r.new}` to rename the slot for the whole hierarchy")
    if old in idx.symbols or old in idx.other_config:
        errors.append(f"{r.where}: {old} is also a plain symbols.txt name")
    errors += check_new_method(r, idx, [cls], allow_existing, {cls: idx.files_with(cls) or [None]})
    if r.qual and r.qual != "*":
        r.notes.append(f"qualifier {r.qual} ignored: methods are renamed everywhere")
    r.pairs = [(r.path, old)]
    r.file_pairs = None
    return errors


def hierarchy(idx, root):
    out, todo = set(), [root]
    while todo:
        c = todo.pop()
        if c not in out:
            out.add(c)
            todo += idx.children.get(c, ())
    return out


def file_uses_class_symbols(idx, path, cls, meth):
    """whether a source file refers to cls::meth by name, or defines methods of cls (and so emits its vtable)"""
    fm = idx.files[path]
    if re.search(r"\b" + re.escape(cls) + r"\s*::\s*" + re.escape(meth) + r"\b", fm.masked):
        return True
    return any(resolve_type(fm, name) == cls for _, _, name, _ in fm.defs)


def thunks_of(idx, cls):
    if not hasattr(idx, "_thunks"):
        idx._thunks = defaultdict(list)
        for name in idx.symbols:
            if name.startswith(("_ZThn", "_ZTv")):
                mm = parse_mangled(name)
                for path, _ in (class_method_pairs(mm) if mm else ()):
                    if path and path[-1]:
                        idx._thunks[path[-1]].append(name)
    return idx._thunks.get(cls, [])


def rom_slot(idx, cls, s):
    """(names at the ROM vtable slot, whether the word has a relocation), or None without a _ZTV symbol"""
    if cls not in idx.vtables:
        return None
    module, vt = idx.vtables[cls]
    rel = idx.reloc(module, vt + 8 + 4 * s)
    if rel is None:
        return [], False
    names = idx.sym_addr.get((rel[1], rel[0]), []) or idx.sym_addr.get((rel[1], rel[0] & ~1), [])
    return names, True


def owners_at(names):
    """{(class, method)} of the mangled method names among names"""
    out = set()
    for n in names:
        mm = parse_mangled(n) if n.startswith("_Z") else None
        if mm:
            for p, meth in class_method_pairs(mm):
                if p and p[-1]:
                    out.add((p[-1], meth))
    return out


def vfunc_slot(r, idx, cls, tables, files):
    """slot index of a vfunc record, or an error string"""
    if r.slot is not None:
        if r.slot % 4:
            return f"{r.where}: slot {r.slot:#x} is not a multiple of 4"
        s = r.slot // 4
        if not any(s < len(t) for t in tables.values()):
            longest = max(len(t) for t in tables.values())
            return (f"{r.where}: {cls}'s vtable has {longest} slots (0x00-{4 * longest - 4:#04x}); "
                    f"{r.slot:#x} is not one")
        return s
    slots = defaultdict(list)
    for p, t in tables.items():
        hits = [i for i, e in enumerate(t) if e[0] == r.old]
        if len(hits) > 1:
            return (f"{r.where}: {cls}::{r.old} is in several slots in {p.relative_to(idx.repo.root)} (overloads); "
                    f"name it by slot")
        for i in hits:
            slots[i].append(p)
    rom = set()
    longest = max(len(t) for t in tables.values())
    for i in range(longest):
        rs = rom_slot(idx, cls, i)
        if rs and any(meth == r.old for _, meth in owners_at(rs[0])):
            rom.add(i)
    if not slots and not rom:
        hint = " (non-virtual: use member)" if any(idx.declares(cls, r.old, p) for p in files) else ""
        return f"{r.where}: {cls} has no virtual method {r.old}{hint}"
    if len(set(slots) | rom) > 1:
        return (f"{r.where}: {cls}::{r.old} is in different slots in different places (sources: "
                f"{[hex(4 * i) for i in sorted(slots)]}, ROM vtable: {[hex(4 * i) for i in sorted(rom)]}); "
                f"name it by slot")
    return (set(slots) | rom).pop()


def check_vfunc(r, idx, allow_existing):
    cls = r.path[-1]
    files = idx.files_with(cls)
    if not files:
        return [f"{r.where}: class {cls} has no declaration in the sources"]
    tables = {p: t for p in files if (t := idx.layout(cls, p))}
    if not tables:
        return [f"{r.where}: vtable of {cls} unknown: base {idx.primary_chain(cls)[-1]} is not declared in the "
                f"sources"]
    s = vfunc_slot(r, idx, cls, tables, files)
    if isinstance(s, str):
        return [s]
    if any(s < len(t) and t[s][0] == "~" for t in tables.values()):
        return [f"{r.where}: slot {4 * s:#04x} of {cls} is the destructor"]
    # the class that introduces the slot
    root = cls
    for base in idx.primary_chain(cls)[1:]:
        if any((bt := idx.layout(base, p)) and s < len(bt) for p in idx.files_with(base)):
            root = base
        else:
            break
    if root != cls:
        r.notes.append(f"slot {4 * s:#04x} is introduced by {root}: its whole hierarchy is renamed")
    # Copies of a class may name its bases differently per file (ov046's TalkMsgRequest derives from a local
    # ActorTalkRequest that introduces the slot there). Every base that has the slot in some file's primary chain is a
    # root too; the hierarchy is the union of their descendants.
    # Globally one root. A file whose copy of a member continues ABOVE the root with a local base that has the slot
    # (ov046: TalkMsgRequest : ActorTalkRequest) gets that base and its other subclasses in that file renamed too
    # (local_roots below); hierarchies are never merged globally through such copies.
    roots, members = {root}, set(hierarchy(idx, root))
    local_roots = defaultdict(set)   # file -> local bases above the root that have the slot
    errors, file_pairs, mangled, olds = [], defaultdict(set), set(), defaultdict(set)
    file_class_pairs = {}
    secondary_pairs, secondary_classes, secondary_seen = set(), set(), set()
    class_files = defaultdict(list)
    for p in idx.files:
        view = idx.view(p)
        for d in [d for d in members if d in view]:
            class_files[d].append(p)
            if not roots & set(idx.primary_chain(d, p)):
                sec = sorted(roots & idx.ancestors(d, p))
                if sec:
                    secondary_seen.add(d)
                    # through a secondary base: the slot is in a secondary vtable (with _ZThn thunks); an override
                    # has the root's name for the slot in this file
                    rt = idx.layout(sec[0], p)
                    if rt and s < len(rt):
                        rname = rt[s][0]
                        dt = idx.layout(d, p) or []
                        if idx.declares(d, rname, p) and any(e[0] == rname for e in dt):
                            slot2 = next(i for i, e in enumerate(dt) if e[0] == rname)
                            errors.append(f"{r.where}: {d}::{rname} overrides slot {4 * s:#04x} of {root} (secondary "
                                          f"base) and slot {4 * slot2:#04x} of its primary vtable "
                                          f"({p.relative_to(idx.repo.root)}): one function in two hierarchies; "
                                          f"renaming it for one breaks the other")
                            continue
                        if idx.declares(d, rname, p):
                            file_pairs[p].add((d, rname))
                            secondary_pairs.add(((d,), rname))
                            olds[d].add(rname)
                            secondary_classes.add(d)
                    continue
                # a copy of the class without the root in its chain (no base declared, or bases that lack the
                # slot): the slot by position in this copy's own declaration
            t = idx.layout(d, p)
            if not t or s >= len(t):
                continue
            name, owner, _ = t[s]
            if name == "~":
                errors.append(f"{r.where}: slot {4 * s:#04x} of {d} is a destructor in "
                              f"{p.relative_to(idx.repo.root)}")
                continue
            if sum(1 for e in t if e[0] == name) > 1:
                errors.append(f"{r.where}: {d}::{name} is in several slots in {p.relative_to(idx.repo.root)} "
                              f"(overloads)")
                continue
            if owner == d:
                chain = set(idx.primary_chain(d, p))
                for b in sorted(idx.ancestors(d, p) - chain):
                    bt = idx.layout(b, p)
                    if bt and any(e[0] == name for e in bt):
                        errors.append(f"{r.where}: {d}::{name} also overrides {b}::{name} (a non-primary base, "
                                      f"{p.relative_to(idx.repo.root)}): one function in two hierarchies; renaming "
                                      f"it for one breaks the other (the _ZThn thunk would disappear)")
                        break
            file_pairs[p].add((owner, name))
            file_class_pairs[(p, d)] = (owner, name)
            olds[owner].add(name)
            chain = idx.primary_chain(d, p)
            if root in chain:
                for base in chain[chain.index(root) + 1:]:
                    bt = idx.layout(base, p)
                    if not (bt and s < len(bt)):
                        break
                    local_roots[p].add(base)
    # local bases above the root (see above): their slot and that of their other subclasses in the same file
    for p, bases in local_roots.items():
        view = idx.view(p)
        for x in view:
            if x in members:
                continue
            chain = idx.primary_chain(x, p)
            if not set(chain) & bases:
                continue
            t = idx.layout(x, p)
            if not t or s >= len(t) or t[s][0] == "~":
                continue
            name, owner, _ = t[s]
            file_pairs[p].add((owner, name))
            olds[owner].add(name)
            if file_uses_class_symbols(idx, p, owner, name) and owner not in bases:
                # a subclass outside the hierarchy defines or names the override here: its symbol follows
                mangled.add(((owner,), name))
        r.notes.append(f"{p.relative_to(idx.repo.root)}: local base(s) {', '.join(sorted(bases))} above {root} "
                       f"declare the slot; renamed in that file with their subclasses")
    # View classes: a file that aliases a hierarchy class to a stand-in class with `#define A B` (A in the hierarchy,
    # B declared in the file, e.g. `#define TalkMsgRequest Unk_020ddcf0_v13`) types A's objects as B there; B's slot
    # (by position in B's own declaration) is renamed in that file too
    views = []
    for p, fm in idx.files.items():
        for (kind, alias), entries in fm.macro_ranges.items():
            if kind != "define" or alias not in members:
                continue
            for _, target in entries:
                if target.startswith("_Z") or target in members or target not in idx.view(p):
                    continue
                t = idx.layout(target, p)
                if not t or s >= len(t) or t[s][0] == "~":
                    errors.append(f"{r.where}: {p.relative_to(idx.repo.root)} aliases {alias} to {target} "
                                  f"(#define), whose declaration has no slot {4 * s:#04x}")
                    continue
                file_pairs[p].add((t[s][1], t[s][0]))
                olds[t[s][1]].add(t[s][0])
                class_files[target].append(p)
                if idx.lookup(target, r.new, p):
                    errors.append(f"{r.where}: view class {target} ({p.relative_to(idx.repo.root)}) already has a "
                                  f"method {r.new}")
                views.append(f"{target} ({t[s][1]}::{t[s][0]}, {p.relative_to(idx.repo.root)})")
    if views:
        r.notes.append(f"view classes aliased by #define, renamed by slot position: {'; '.join(sorted(set(views))[:4])}")
    # The ROM vtables are the authority, not the vfunc_NN names or one file's copy of a class. For every class of
    # the hierarchy that has a _ZTV symbol, the slot function's names in symbols.txt (aliases: the names other files
    # use) are the mangled names to rename, and a file whose copy of the class disagrees with the ROM (swapped or
    # shifted slots) is left unchanged for this record.
    verified, rom_owned, excluded, by_position = 0, set(), {}, set()
    for d in sorted(members):
        if d in secondary_classes and not any((p, d) in file_class_pairs for p in class_files.get(d, [])):
            continue  # reaches the root through a secondary base: its primary vtable is another one
        rs = rom_slot(idx, d, s)
        if rs is None:
            continue
        names, present = rs
        copies = {p: file_class_pairs[(p, d)] for p in class_files.get(d, []) if (p, d) in file_class_pairs}
        if not present:
            pures = [idx.layout(d, p)[s][2] for p in copies]
            if pures and not any(pures):
                errors.append(f"{r.where}: the ROM vtable of {d} has no function in slot {4 * s:#04x}, the sources "
                              f"declare one")
            else:
                verified += 1
            continue
        rom_owners = owners_at(names)
        if not rom_owners:
            continue
        rom_classes, rom_methods = {o for o, _ in rom_owners}, {n for _, n in rom_owners}
        other_slots = set()
        for i in range(max((len(idx.layout(d, p)) for p in copies), default=0)):
            if i != s:
                other = rom_slot(idx, d, i)
                if other and other[1]:
                    other_slots |= {n for _, n in owners_at(other[0])}
        # The slot is found by POSITION in each file's own declarations, and whatever name a copy uses for it is
        # renamed there (copies name slots differently: `func_0203e678` in the overlays' ProcBase copies, `postCreate`
        # in main; opaque copies don't redeclare the override). The one dangerous case: the copy's name is the ROM
        # name of ANOTHER slot of this class and the file refers to that name by symbol (qualified call, definition):
        # renaming it would retarget that reference. Refused with the file.
        dangerous = []
        for p, (owner, name) in copies.items():
            agrees = name in rom_methods or (owner in rom_classes and name not in other_slots)
            if agrees:
                continue
            if name in other_slots and file_uses_class_symbols(idx, p, owner, name):
                dangerous.append(f"{p.relative_to(idx.repo.root)} ({owner}::{name})")
            else:
                by_position.add(p)
        if dangerous:
            errors.append(f"{r.where}: slot {4 * s:#04x} of {d} is {', '.join(names)} in the ROM, but in "
                          f"{'; '.join(dangerous[:3])} that name is the ROM name of another slot and the file refers "
                          f"to it by symbol")
            continue
        verified += 1
        rom_owned.add(d)
        for o, n in rom_owners:
            if o in members:
                mangled.add(((o,), n))
                olds[o].add(n)
    if by_position:
        r.notes.append(f"{len(by_position)} files name slot {4 * s:#04x} differently from the ROM symbols (their own "
                       f"copies of the classes); renamed by position")
    # classes without a ROM vtable symbol: the names their declarations give the slot
    for (p, d), (owner, name) in file_class_pairs.items():
        if p not in excluded and owner not in rom_owned and d not in rom_owned:
            mangled.add(((owner,), name))
    mangled |= secondary_pairs
    # only classes that really sit in two hierarchies: reached through a secondary base, or with this-adjusting
    # thunks, and their descendants (single-inheritance base-less copies are opaque copies: position decides)
    lineage = set(members)
    for q in idx.files_with(root):
        lineage |= set(idx.primary_chain(root, q))

    def copies_disagree(c):
        """one copy has the root in c's primary chain, another a primary chain through a base outside the root's
        lineage (not a class of the hierarchy, not a primary base of the root): copies disagree about c's primary
        base, so one of them is another hierarchy (truncated or base-less copies don't count)"""
        with_root = without_root = False
        for q in idx.files_with(c):
            chain = idx.primary_chain(c, q)
            if root in chain:
                with_root = True
            elif set(chain[1:]) - lineage:
                without_root = True
        return with_root and without_root

    dual = {c for c in members if c in secondary_classes or c in secondary_seen or copies_disagree(c)}
    dual |= {c for c in members if idx.ancestors(c) & dual}
    for (o,), n in sorted(mangled):
        if o not in dual:
            continue
        for q in idx.files_with(o):
            t = idx.layout(o, q)
            if not t or roots & set(idx.primary_chain(o, q)):
                continue
            hits = [i for i, e in enumerate(t) if e[0] == n and e[1] == o]
            if hits and len(idx.primary_chain(o, q)) == 1 and not file_uses_class_symbols(idx, q, o, n):
                r.notes.append(f"{q.relative_to(idx.repo.root)}: an opaque copy of {o} (no base) declares {n}; it "
                               f"does not refer to the symbol and is left unchanged")
                continue
            if hits:
                errors.append(f"{r.where}: {o}::{n} is renamed as slot {4 * s:#04x} of {root}, but in "
                              f"{q.relative_to(idx.repo.root)} it is slot {4 * hits[0]:#04x} of the primary vtable of "
                              f"{o} (whose primary base chain {' <- '.join(idx.primary_chain(o, q)[:3])} does not "
                              f"contain {root}): one function in two hierarchies")
                break
    # thunks: a this-adjusting thunk of a renamed method means it also overrides a secondary base's virtual; that is
    # fine only when that secondary relation is the one being renamed (secondary_pairs)
    for (o,), n in sorted(mangled - secondary_pairs):
        if o in secondary_classes:
            continue
        for path in idx.methods.get(n, ()):
            if path and path[-1] == o and any(name.startswith(("_ZThn", "_ZTv")) and
                                              f"{len(o)}{o}{len(n)}{n}E" in name for name in thunks_of(idx, o)):
                errors.append(f"{r.where}: {o}::{n} has a this-adjusting thunk (_ZThn...): it also overrides a "
                              f"virtual of a secondary base; renaming it for {root}'s hierarchy alone breaks that")
                break
    if secondary_classes:
        r.notes.append(f"{', '.join(sorted(secondary_classes))} derive from {root} through a secondary base: their "
                       f"overrides are renamed by name (thunks included)")
    pairs = sorted(mangled)
    if not pairs:
        errors.append(f"{r.where}: no class of the hierarchy of {root} defines slot {4 * s:#04x}")
    all_olds = sorted({n for ns in olds.values() for n in ns})
    if r.old is None:
        r.old = "/".join(all_olds)
    for name in all_olds:
        if name in idx.symbols or name in idx.other_config:
            errors.append(f"{r.where}: {name} is also a plain symbols.txt name")
    errors += check_new_method(r, idx, members, allow_existing, class_files, s)
    for (d,), name in pairs:
        mo = re.fullmatch(r"v?func_([0-9a-f]{2})", name)
        if mo and int(mo[1], 16) != 4 * s:
            r.notes.append(f"{d}::{name} is in slot {4 * s:#04x} (its name says {mo[1]})")
    r.notes.append(f"slot {4 * s:#04x} of {root}: {len(members)} classes in the hierarchy, {len(olds)} define it "
                   f"(old names: {', '.join(all_olds)}); {verified} checked against ROM vtables; "
                   f"{len(file_pairs)} files")
    r.pairs = pairs
    r.file_pairs = dict(file_pairs)
    r.slot_offset = 4 * s
    return errors


def class_methods(idx, cls):
    """every method name the class has in any source declaration or mangled name"""
    if not hasattr(idx, "_class_methods"):
        cm = defaultdict(set)
        for meth, paths in idx.methods.items():
            for path in paths:
                if path and path[-1]:
                    cm[path[-1]].add(meth)
        for name, info in idx.classes.items():
            cm[name] |= info.all_methods
        idx._class_methods = cm
    return idx._class_methods.get(cls, set())


def in_slot(idx, cls, meth, slot):
    """whether cls::meth is the method of vtable offset `slot` in some file's view"""
    for p in idx.files_with(cls):
        t = idx.layout(cls, p)
        if t and slot // 4 < len(t) and t[slot // 4][0] == meth:
            return True
    return False


def check_hierarchy_names(renames, idx, errs):
    """A method's new name must not be a method name of a base or derived class after the whole batch, unless it is
    the same vtable slot (an override): an unqualified call in the derived class would bind to the other method
    (silent recursion) or hide a base overload."""
    meth = [r for r in renames if r.kind in ("member", "vfunc") and not errs.get(r)]
    if not meth:
        return
    away = defaultdict(set)   # class -> method names the batch renames away
    owners = {}               # rename -> classes whose method it renames
    for r in meth:
        cs = {path[-1] for path, _ in r.pairs}
        for path, old in r.pairs:
            away[path[-1]].add(old)
        for prs in (r.file_pairs or {}).values():
            for c, old in prs:
                away[c].add(old)
                cs.add(c)
        owners[r] = cs
    for r in meth:
        related = set()
        for c in owners[r]:
            related |= idx.ancestors(c) | hierarchy(idx, c)
        slot = getattr(r, "slot_offset", None)
        for x in sorted(related):
            if x in owners[r] and r.kind == "vfunc":
                continue  # the slot's own classes
            clash = None
            if r.new in class_methods(idx, x) - away[x]:
                if slot is not None and in_slot(idx, x, r.new, slot):
                    continue  # an override of the same slot
                clash = f"{x} already has a method {r.new}"
            for r2 in meth:
                if r2 is not r and r2.new == r.new and x in owners[r2]:
                    clash = f"{r2.where} renames {x}'s {r2.old} to {r.new} too"
            if clash:
                errs.setdefault(r, []).append(
                    f"{r.where}: {r.label()}: {clash}, and {x} is a base or derived class of "
                    f"{', '.join(sorted(owners[r])[:3])}; an unqualified call would bind to the other method or hide it")
                break


def validate(renames, idx, allow_existing, allow_common=False):
    """{rename: [errors]}"""
    errs = defaultdict(list)
    for r in renames:
        errs[r] += r.errors
        if r.errors:
            continue
        if not valid_new_name(r):
            errs[r].append(f"{r.where}: new name {r.new} is not a valid identifier"
                           + (" or mangled name" if r.kind == "func" else ""))
            continue
        if r.kind in ("func", "class") and r.new == r.old:
            errs[r].append(f"{r.where}: old and new name are the same")
            continue
        if r.qual not in (None, "*") and r.qual not in modules_known(idx):
            errs[r].append(f"{r.where}: unknown module {r.qual}")
            continue
        if r.kind in ("func", "class") and not allow_common:
            e = check_common_name(r, idx)
            if e:
                errs[r] += e
                continue
        check = {"func": check_func, "class": check_class, "member": check_member, "vfunc": check_vfunc,
                 "free": check_free}[r.kind]
        errs[r] += check(r, idx, allow_existing)
    errs = defaultdict(list, {r: e for r, e in errs.items() if e})
    check_hierarchy_names(renames, idx, errs)
    # conflicts inside the list
    olds, news, owners = defaultdict(list), defaultdict(list), defaultdict(list)
    for r in renames:
        if errs[r]:
            continue
        if r.kind in ("func", "class"):
            olds[(r.kind, r.old)].append(r)
            news[(r.kind, r.new)].append(r)
        else:
            for path, old in r.pairs:
                # a mangled pair only matters if such a mangled name exists (pure slots have none)
                if r.kind == "member" or any(q[-len(path):] == path for q in idx.methods.get(old, ())):
                    owners[("mangled", path[-1], old)].append(r)
            for f, prs in (r.file_pairs or {}).items():
                for cls, old in prs:
                    owners[("file", f, cls, old)].append(r)
    for key, group in list(olds.items()) + list(owners.items()):
        group = list(dict.fromkeys(group))
        if len(group) > 1:
            what = f"{key[-2]}::{key[-1]}" if key[0] in ("mangled", "file") else key[-1]
            where = f" in {key[1].relative_to(idx.repo.root)}" if key[0] == "file" else ""
            for r in group:
                errs[r].append(f"{r.where}: conflict: {what}{where} is renamed by "
                               f"{', '.join(x.where for x in group if x is not r)} too")
    for (kind, new), group in news.items():
        if len(group) > 1:
            for r in group:
                errs[r].append(f"{r.where}: conflict: {', '.join(x.where for x in group if x is not r)} also renames "
                               f"to {new}")
    old_names = {r.old for r in renames if r.kind in ("func", "class") and not errs[r]}
    for r in renames:
        if r.kind in ("func", "class") and not errs[r] and r.new in old_names:
            errs[r].append(f"{r.where}: new name {r.new} is also renamed in this list (chains and swaps are refused; "
                           f"split them into two batches)")
    return {r: e for r, e in errs.items() if e}


PLACEHOLDER = re.compile(r"(?:Unk|func|data|vfunc|unk|sub|lbl|ptr|jtbl)_\w+|_Z\w+|\w*[0-9a-fA-F]{8}\w*")


def check_common_name(r, idx):
    """func/class records are applied as whole-word replacements. An old name that is not a placeholder and is very
    short, or is also spelled as a field / method / class / symbol elsewhere, would rewrite unrelated identifiers
    (merge 1: B01's local classes A, B, D -> every local, label and comment spelled A, B or D, "D-pad")"""
    old = r.old
    if PLACEHOLDER.fullmatch(old):
        return []
    why = []
    if len(old) <= 3:
        why.append(f"is only {len(old)} character{'s' if len(old) > 1 else ''} long")
    if old in idx.field_names:
        why.append("is also a struct field name")
    if idx.declarers.get(old, set()) - {old}:
        why.append("is also a method name")
    if r.kind == "func" and old in idx.classes:
        why.append("is also a class name")
    if r.kind == "class" and (old in idx.symbols or old in idx.other_config):
        why.append("is also a symbol name")
    if not why:
        return []
    return [f"{r.where}: old name {old} is not a placeholder (Unk_/func_/data_<addr>...) and {' and '.join(why)}; a "
            f"{r.kind} record is a whole-word rename and would also rewrite unrelated identifiers and comments "
            f"spelled {old}. Rename it by hand, or pass --allow-common-names if every occurrence is meant"]


def modules_known(idx):
    if not hasattr(idx, "_mods"):
        idx._mods = set().union(*idx.symbols.values()) | set().union(*idx.tokens.values())
    return idx._mods


def post_check(renames, changed, produced=None):
    errs = defaultdict(list)
    for r in renames:
        r.absorb_members()
        total =sum(v for k, v in r.counts.items() if not k.startswith(("skipped", "left")))
        if total == 0:
            errs[r].append(f"{r.where}: {r.label()}: nothing to rename")
        if r.unresolved:
            errs[r].append(f"{r.where}: {r.label()}: cannot tell which class's method {len(r.unresolved)} "
                           f"occurrence(s) mean: " + "; ".join(r.unresolved[:5])
                           + (" ..." if len(r.unresolved) > 5 else ""))
    by_new = defaultdict(list)
    for r in renames:
        by_new[r.new].append(r)
    for p, text in changed.items():
        if p.name == "symbols.txt":
            seen = defaultdict(int)
            for a, b in config_fields(p, text):
                seen[text[a:b]] += 1
            for name, k in seen.items():
                if k > 1:
                    culprits = sorted((produced or {}).get(name, ()), key=lambda x: x.where) or \
                        [r for r in renames if r.new in name] or renames
                    for r in culprits:
                        errs[r].append(f"{p}: {name} would be in symbols.txt twice")
    return errs


# ---------------------------------------------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------------------------------------------

def write_report(path, lists, renames, reports, refused, skipped, dry):
    lines = ["# rename.py report", "", "Dry run (nothing written)." if dry else "Applied.", ""]
    for batch in lists:
        rs = [r for r in renames if r.batch == batch]
        reps = [x for x in reports if x.batch == batch]
        applied = [r for r in rs if r not in refused and r not in skipped]
        lines += [f"## {batch}", "",
                  f"{len(rs) + len(reps)} records: {len(applied)} applied, {len([r for r in rs if r in refused])} "
                  f"refused, {len([r for r in rs if r in skipped])} below the confidence threshold, "
                  f"{len([x for x in reps if x.kind == 'field'])} struct fields, "
                  f"{len([x for x in reps if x.kind == 'unit'])} units (reported only).", ""]
        if applied:
            lines += ["### Would be applied" if dry else "### Applied", ""]
            for r in applied:
                counts = ", ".join(f"{k} {v}" for k, v in sorted(r.counts.items()))
                lines.append(f"- `{r.label()}` ({r.confidence or '-'}): {counts}")
                for n in dict.fromkeys(r.notes):
                    lines.append(f"  - {n}")
            lines.append("")
        bad = [r for r in rs if r in refused]
        if bad:
            lines += ["### Refused", ""]
            for r in bad:
                lines.append(f"- `{r.raw}`")
                for e in dict.fromkeys(refused[r]):
                    lines.append(f"  - {e}")
            lines.append("")
        low = [r for r in rs if r in skipped]
        if low:
            lines += ["### Below the confidence threshold", ""] + [f"- `{r.raw}`" for r in low] + [""]
        fields = [x for x in reps if x.kind == "field"]
        if fields:
            lines += ["### Struct fields (not applied)", "", "| Struct | Offset | Type | Name | Confidence | Evidence |",
                      "|---|---|---|---|---|---|"]
            for x in fields:
                lines.append(f"| {x.fields[0]} | {x.fields[1]} | `{x.fields[2]}` | {x.fields[3]} | "
                             f"{x.confidence or '-'} | {x.evidence.replace('|', '/')} |")
            lines.append("")
        units = [x for x in reps if x.kind == "unit"]
        if units:
            lines += ["### Source file renames (not applied)", ""]
            lines += [f"- `{x.fields[0]}` -> `{x.fields[1]}` ({x.confidence or '-'}): {x.evidence}" for x in units]
            lines.append("")
    path.write_text("\n".join(lines))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("lists", type=Path, nargs="+", help="rename lists / batch renames.txt files")
    ap.add_argument("-n", "--dry-run", action="store_true", help="report only, write nothing to the repository")
    ap.add_argument("-v", "--verbose", action="store_true", help="list the changed files of every rename")
    ap.add_argument("--allow-existing", action="store_true", help="accept new names that already occur")
    ap.add_argument("--allow-common-names", action="store_true", help="accept func/class records whose old name is "
                    "not a placeholder and is very short or also a field/method/class/symbol name")
    ap.add_argument("--partial", action="store_true", help="drop refused records and apply the rest")
    ap.add_argument("--min-confidence", choices=list(CONFIDENCE), help="skip batch records below this confidence")
    ap.add_argument("--report", type=Path, help="write a markdown report (default for batch files: "
                    "rename_report.md next to the first list)")
    ap.add_argument("--root", type=Path, default=Path("."), help="repository root (default: current directory)")
    ap.add_argument("--extra", action="append", default=[], help="more files/directories to rewrite as text")
    args = ap.parse_args()

    renames, reports, lists = [], [], []
    for p in args.lists:
        rs, reps = parse_list(p)
        renames += rs
        reports += reps
        lists.append(str(p))
    batch_format = any(r.confidence is not None for r in renames) or bool(reports)
    report_path = args.report or (args.lists[0].resolve().parent / "rename_report.md" if batch_format else None)
    skipped = set()
    if args.min_confidence:
        floor = CONFIDENCE[args.min_confidence]
        skipped = {r for r in renames if r.confidence and not r.errors and CONFIDENCE[r.confidence] < floor}
    active = [r for r in renames if r not in skipped]
    refused = {}

    def finish(code):
        for batch in lists:
            rs = [r for r in renames if r.batch == batch]
            reps = [x for x in reports if x.batch == batch]
            ok = len([r for r in rs if r not in refused and r not in skipped]) if code == 0 else 0
            print(f"batch {batch}: {len(rs) + len(reps)} records, {ok} {'would apply' if args.dry_run else 'applied'}, "
                  f"{len([r for r in rs if r in refused])} refused, {len([r for r in rs if r in skipped])} below "
                  f"confidence, {len(reps)} reported only")
        if report_path:
            write_report(report_path, lists, renames, reports, refused, skipped, args.dry_run or code != 0)
            print(f"report: {report_path}")
        if code:
            sys.exit(code)

    if not active:
        print("rename.py: nothing to rename")
        finish(0)
        return
    repo = Repo(args.root.resolve(), args.extra)
    idx = Index(repo)
    for r in active:
        normalize(r, idx)

    def drop(errs):
        nonlocal active
        for r, e in errs.items():
            refused[r] = refused.get(r, []) + e
        if not args.partial:
            for r, e in errs.items():
                print("\n".join(dict.fromkeys(e)))
            print(f"rename.py: {len(errs)} records refused, nothing written (--partial applies the others)")
            finish(1)
        active = [r for r in active if r not in errs]

    while active:
        errs = validate(active, idx, args.allow_existing, args.allow_common_names)
        if not errs:
            break
        drop(errs)
    changed = {}
    while active:
        for r in active:
            r.reset()
        renamer = Renamer(repo, idx, active)
        changed = renamer.run()
        errs = post_check(active, changed, renamer.produced)
        if not errs:
            break
        drop(errs)
    if not active:
        changed = {}

    for r in active:
        detail = ", ".join(f"{k} {v}" for k, v in sorted(r.counts.items()))
        print(f"{r.label()}: {detail}; {len(r.files)} files")
        for n in dict.fromkeys(r.notes):
            print(f"    note: {n}")
        if args.verbose:
            for p in sorted(r.files):
                print(f"    {p.relative_to(repo.root) if p.is_relative_to(repo.root) else p}")
    for r, e in refused.items():
        print(f"REFUSED {r.raw}")
        for x in dict.fromkeys(e):
            print(f"    {x}")
    print(f"{len(active)} renames, {len(changed)} files {'would change' if args.dry_run else 'changed'}")
    if not args.dry_run:
        for p, text in changed.items():
            with open(p, "w", encoding="latin-1", newline="") as f:
                f.write(text)
    finish(0)


if __name__ == "__main__":
    main()
