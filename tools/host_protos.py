#!/usr/bin/env python3
"""Shared prototypes for the free functions: generated headers instead of each unit's own declarations.

The decomp's units declare the functions they call themselves, often with other types than the definition. This
generates, for every source file, a header with the prototypes of the free functions it defines, exactly as the
definitions are written (include/proto/<dir>/<file>.h), replaces the units' own declarations of those functions by
includes of these headers, and compiles each unit for 32-bit and 64-bit. A unit where a function's shared
prototype doesn't compile with its calls (a different number of arguments, a void result used ...) keeps its own
declaration of that function: the header leaves the prototype out when the unit defines PROTO_LOCAL_<name>, and
the function is listed - these are the calls to look at by hand.

usage: host_protos.py --decls DECLS.json [--jobs N] [--report OUT] FILES...
  DECLS.json: tools/host_decls.py --json (the definitions: prototype as written, linkage, namespace, types)
"""
import argparse
import json
import os
import re
import subprocess
import sys
from multiprocessing import Pool

sys.path.insert(0, os.path.dirname(__file__))
import host_decls  # noqa: E402

sys.setrecursionlimit(20000)
CXX = ['gcc', '-x', 'c++', '-fsyntax-only', '-fno-short-enums', '-fsigned-char', '-fshort-wchar', '-ffreestanding',
       '-nostdinc', '-fno-builtin', '-DMODERN', '-DHOST', '-DGAME_VERSION_USA', '-Iinclude', '-std=gnu++14',
       '-fno-exceptions', '-fno-rtti', '-fpermissive', '-w']
CC = ['gcc', '-x', 'c', '-fsyntax-only', '-fno-short-enums', '-fsigned-char', '-fshort-wchar', '-ffreestanding',
      '-nostdinc', '-fno-builtin', '-DMODERN', '-DHOST', '-DGAME_VERSION_USA', '-Iinclude', '-std=gnu11', '-w']
CPP_ONLY = re.compile(r'\bclass\b|\bnamespace\b|\btemplate\s*<|::|\bpublic\s*:|\bprivate\s*:|\bvirtual\b|&')
DEFS = {}
HEADER_OF = {}       # function name -> header (relative to include/)


def proto_header(src):
    rel = os.path.relpath(src, 'src')
    return os.path.join('proto', os.path.splitext(rel)[0] + '.h')


_hdr_cpp_cache = {}


def header_is_cpp(h):
    if h not in _hdr_cpp_cache:
        try:
            body = open(os.path.join('include', h)).read()
            body = re.sub(r'//[^\n]*|/\*.*?\*/', '', body, flags=re.S)
            _hdr_cpp_cache[h] = bool(CPP_ONLY.search(body))
        except OSError:
            _hdr_cpp_cache[h] = True
    return _hdr_cpp_cache[h]


def strip_defaults(proto):
    """Default arguments stay with the definition (a declaration may not repeat them)."""
    out, depth, i = [], 0, 0
    while i < len(proto):
        ch = proto[i]
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        if ch == '=' and depth == 1 and proto[i + 1:i + 2] != '=' and proto[i - 1:i] not in '!<>=':
            j, d = i + 1, 0
            while j < len(proto):
                if proto[j] in '(<[':
                    d += 1
                elif proto[j] in ')>]':
                    if d == 0:
                        break
                    d -= 1
                elif proto[j] == ',' and d == 0:
                    break
                j += 1
            while out and out[-1] == ' ':
                out.pop()
            i = j
            continue
        out.append(ch)
        i += 1
    return ''.join(out)


def pretty(text):
    """A declaration from its tokens: `u8 * a [ 4 ]` -> `u8 *a[4]`."""
    text = ' '.join(text.split())
    text = re.sub(r' ?\[ ?', '[', text)
    text = re.sub(r' \]', ']', text)
    text = re.sub(r'\* (?=[\w(])', '*', text)
    text = re.sub(r' ,', ',', text)
    text = re.sub(r'\( ', '(', text)
    text = re.sub(r' \)', ')', text)
    return text


AMBIGUOUS = set()   # names of types defined in more than one source file (a forward declaration would collide)
ASM_NAMES = set()   # variables declared somewhere with an assembler label


def usable(r):
    """Whether a definition's prototype can go to a header: its named types must be reachable there."""
    p = r.get('proto')
    if r['name'] in ASM_NAMES or r.get('asm'):
        return False
    if not p or 'cls' in r or not r['file'].startswith('src/'):
        return False
    if r.get('var') and (r.get('const') or 'static' in p.split() or re.search(r'\bconst\b', p) and
                         not r['file'].endswith('.c')):
        return False  # (const at namespace scope: internal linkage in C++)
    if re.search(r'\bstatic\b|\binline\b|\boperator\b|\[\[|__attribute__\s*\(\(\s*(section|alias)', p):
        return False
    for name, kind, f, qual in r.get('types', []):
        if f is None or f.startswith('include/'):
            continue
        if kind not in ('STRUCT_DECL', 'CLASS_DECL', 'UNION_DECL'):
            return False      # a typedef / enum / template local to a source file
        if '<' in qual or '(anonymous' in qual or 'lambda' in qual or name in AMBIGUOUS:
            return False
    return True


def forward_types():
    """Types the generated headers declare ahead instead of including their headers, where the prototypes use them
    only through pointers (include/proto/.forward: classes whose headers pull in types that some units define their
    own copies of)."""
    if not os.path.exists('include/proto/.forward'):
        return set()
    return set(l.split('#')[0].strip() for l in open('include/proto/.forward')) - {''}


FORWARD = forward_types()


def forward_ok(r, name, kind, qual):
    if name not in FORWARD or qual != name or kind not in ('STRUCT_DECL', 'CLASS_DECL'):
        return ()
    p = r.get('proto') or ''
    uses = re.findall(r'\b%s\b(\s*\**)' % re.escape(name), p)
    return (name,) if uses and all('*' in u for u in uses) else ()


def make_headers(defs, only=None):
    by_file = {}
    for r in defs.values():
        if r['file'].startswith('src/'):
            by_file.setdefault(r['file'], [])  # (a header for every source file, also when empty: units include them)
        if usable(r):
            by_file.setdefault(r['file'], []).append(r)
    for src, recs in sorted(by_file.items()):
        if only is not None and src not in only:
            continue
        h = proto_header(src)
        includes, fwd_c, fwd_cpp = set(), set(), set()
        c_protos, cpp_protos = [], []
        for r in sorted(recs, key=lambda r: r['line']):
            cpp = not r.get('c_linkage') or bool(r.get('ns')) and not r.get('c_linkage')
            for name, kind, f, qual in r.get('types', []):
                if f is None:
                    continue
                if f.startswith('include/') and name in forward_ok(r, name, kind, qual):
                    # declared ahead instead of its header (include/proto/.forward)
                    tag = {'STRUCT_DECL': 'struct', 'CLASS_DECL': 'class'}[kind]
                    fwd_cpp.add(f'{tag} {name};')
                    cpp = True
                    continue
                if f.startswith('include/'):
                    hh = f[len('include/'):]
                    includes.add(hh)
                    if header_is_cpp(hh):
                        cpp = True
                else:
                    tag = {'STRUCT_DECL': 'struct', 'CLASS_DECL': 'class', 'UNION_DECL': 'union'}[kind]
                    parts = qual.split('::')
                    decl = f'{tag} {parts[-1]};'
                    for ns in reversed(parts[:-1]):
                        decl = f'namespace {ns} {{ {decl} }}'
                    if tag == 'class' or len(parts) > 1:
                        fwd_cpp.add(decl)
                        cpp = True
                    else:
                        fwd_c.add(decl)
            text = strip_defaults(' '.join(r['proto'].split())) if not r.get('var') else pretty(r['proto'])
            if r.get('var'):  # a variable built by a constructor call: its declaration leaves the arguments out
                text = re.sub(r'(\b%s)\s*\(.*\)$' % re.escape(r['name']), r'\1', text)
            if CPP_ONLY.search(text):
                cpp = True
            line = f'#ifndef PROTO_LOCAL_{r["name"]}\n{"extern " if r.get("var") else ""}{text};\n#endif'
            ns = r.get('ns', '')
            if r.get('c_linkage') and not cpp and not ns:
                c_protos.append(('C', line))
            else:
                cpp_protos.append(((ns, 'C' if r.get('c_linkage') else 'C++'), line))
            HEADER_OF[r['name']] = h
        guard = 'PROTO_' + re.sub(r'\W', '_', h.upper())
        out = [f'#ifndef {guard}', f'#define {guard}', '',
               f'// Prototypes of the functions defined in {src} (generated: tools/host_protos.py)', '',
               '#include "types.h"']
        c_incs = sorted(i for i in includes if not header_is_cpp(i) and i != 'types.h')
        cpp_incs = sorted(i for i in includes if header_is_cpp(i))
        out += [f'#include "{i}"' for i in c_incs]
        out += sorted(fwd_c)
        if cpp_incs or fwd_cpp or cpp_protos:
            out += ['#ifdef __cplusplus'] + [f'#include "{i}"' for i in cpp_incs] + sorted(fwd_cpp) + ['#endif']
        out.append('')
        if c_protos:
            out += ['#ifdef __cplusplus', 'extern "C" {', '#endif'] + [l for _, l in c_protos] + \
                   ['#ifdef __cplusplus', '}', '#endif', '']
        if cpp_protos:
            out += ['#ifdef __cplusplus']
            byns = {}
            for (ns, linkage), l in cpp_protos:
                byns.setdefault(ns, {}).setdefault(linkage, []).append(l)
            for ns, groups in sorted(byns.items()):
                body = []
                if groups.get('C'):
                    body += ['extern "C" {'] + groups['C'] + ['}']
                body += groups.get('C++', [])
                if ns:
                    out += [f'namespace {n} {{' for n in ns.split('::')] + body + ['}' * len(ns.split('::'))]
                else:
                    out += body
            out += ['#endif', '']
        out += [f'#endif', '']
        path = os.path.join('include', h)
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, 'w') as fh:
            fh.write('\n'.join(out))
    return len(by_file)


def check_headers(names_by_header):
    """Compile each generated header alone (C++ and C, 64-bit); the prototypes on lines with errors are left
    out (returned as a set of function names)."""
    bad = set()
    for h, names in names_by_header.items():
        for lang, flags in (('c++', CXX), ('c', CC)):
            r = subprocess.run(flags[:1] + ['-x', lang] + flags[3:] + ['-m64', '-'], input=f'#include "{h}"\n',
                               capture_output=True, text=True)
            if r.returncode == 0:
                continue
            lines = open(os.path.join('include', h)).read().split('\n')
            for ln in re.findall(r'include/%s:(\d+):\d+: error' % re.escape(h), r.stderr):
                l = lines[int(ln) - 1]
                for n in names:
                    if re.search(r'\b%s\s*[(\[;]' % re.escape(n), l):
                        bad.add(n)
            if 'error' in r.stderr and not re.search(r'include/%s:\d+:\d+: error' % re.escape(h), r.stderr):
                bad |= set(names)  # an error in an included header: none of these
    return bad


def compile_errors(path):
    errs = []
    for m in ('-m32', '-m64'):
        base = CC if path.endswith('.c') else CXX
        r = subprocess.run(base + [m, path], capture_output=True, text=True)
        if r.returncode != 0:
            errs.append(r.stderr)
    return '\n'.join(errs)


def local_decls(path):
    """The unit's own declarations of functions that now have a shared prototype: (start, end, name)."""
    ci = host_decls._ci()
    index = ci.Index.create()
    args = host_decls.C_ARGS if path.endswith('.c') else host_decls.CXX_ARGS
    tu = index.parse(path, args=args)
    src = open(path, 'rb').read()
    out = []
    incompatible = set()
    stack = [tu.cursor]
    while stack:
        node = stack.pop()
        for c in node.get_children():
            if c.kind in (ci.CursorKind.NAMESPACE, ci.CursorKind.LINKAGE_SPEC, ci.CursorKind.UNEXPOSED_DECL):
                stack.append(c)
                continue
            is_var = c.kind == ci.CursorKind.VAR_DECL and c.storage_class == ci.StorageClass.EXTERN and \
                not c.is_definition()
            if not is_var and (c.kind != ci.CursorKind.FUNCTION_DECL or c.is_definition()):
                continue
            if c.location.file is None or not os.path.samefile(c.location.file.name, path):
                continue
            name = c.spelling
            if name not in HEADER_OF:
                continue
            if is_var and not same_var_type(c.type.get_canonical().spelling, DEFS.get(name, {}).get('result', '')):
                incompatible.add(name)  # (an array declared for a scalar, a view's type ...: the name means
                continue                #  something else here - the unit keeps its declaration)
            s, e = c.extent.start.offset, c.extent.end.offset
            # through the ';' and the line's end; from the line's start when only `extern "C"` precedes it
            semi = src.find(b';', e)
            if semi < 0 or src[e:semi].strip():
                continue
            ls = src.rfind(b'\n', 0, s) + 1
            before = src[ls:s].strip()
            if src[ls:s].strip() not in (b'', b'extern "C"', b'extern'):
                continue  # (another declaration on the line)
            if src[s:s + 6] == b'extern' or before in (b'', b'extern "C"', b'extern'):
                s = ls
            else:
                continue
            le = src.find(b'\n', semi)
            le = len(src) if le < 0 else le + 1
            if src[semi + 1:le].strip() and not src[semi + 1:le].strip().startswith(b'//'):
                le = semi + 1
            out.append((s, le, name))
    return src, sorted(set(out)), incompatible


def keep_needed(incompatible, marked):
    return bool(set(incompatible) - set(marked))


def same_var_type(a, b):
    """Whether a variable declared with canonical type a means the same in expressions as one of type b: the same
    type, or arrays of the same element type (with or without the size)."""
    if a == b:
        return True
    ea, eb = re.sub(r'\[\d*\]$', '[]', a), re.sub(r'\[\d*\]$', '[]', b)
    return ea == eb and ea.endswith('[]')


def apply(path):
    original = open(path, 'rb').read()
    try:
        return _apply(path)
    except Exception as e:
        with open(path, 'wb') as fh:
            fh.write(original)
        return path, 0, [], f'failed: {type(e).__name__}: {e}'


def _apply(path):
    src, decls, incompatible = local_decls(path)
    marked = set(re.findall(r'^#define PROTO_LOCAL_(\w+)', src.decode(errors='replace'), re.M))
    decls = [d for d in decls if d[2] not in marked]  # (kept by an earlier run)
    if not decls and not keep_needed(incompatible, marked):
        return path, 0, [], ''
    own = proto_header(path) if os.path.exists(os.path.join('include', proto_header(path))) else None
    keep = set(incompatible) - marked  # functions / variables that keep the unit's declaration (conflicts)
    for rnd in range(10):
        active = [d for d in decls if d[2] not in keep]
        headers = sorted({HEADER_OF[n] for _, _, n in active} | ({own} if own else set()))
        b = src
        for s, e, n in sorted(active, reverse=True):
            b = b[:s] + b[e:]
        text = b.decode()
        block = ''.join(f'#define PROTO_LOCAL_{n}  // declared below: the shared prototype conflicts with the calls here\n'
                        for n in sorted(keep))
        block += ''.join(f'#include "{h}"\n' for h in headers if f'#include "{h}"' not in text)
        m = list(re.finditer(r'^#include [^\n]*\n', text, re.M))
        at = m[-1].end() if m else 0
        text = text[:at] + block + text[at:]
        with open(path, 'w') as fh:
            fh.write(text)
        err = compile_errors(path)
        if not err:
            return path, len(active), sorted(keep), ''
        # the functions named in the errors that have shared prototypes: their own declarations stay
        names = set(re.findall(r"[‘']((?:[\w:]+::)?\w+)\s*\(", err)) | set(re.findall(r"function [‘']([^’']+)[’']", err))
        names |= set(re.findall(r"argument \d+ of [‘'][^’'(]*?\b(\w+)\s*\(", err))
        names |= {q.split()[-1].strip('*&') for q in re.findall(r"declaration [‘']([^’']+)[’']", err) if q.split()}
        names |= {q.split()[-1].strip('*&') for q in re.findall(r"declaration as [‘']([^’']+)[’']", err) if q.split()}
        hit = set()
        for n in names:
            n = n.split('(')[0].split()[-1].split('::')[-1]
            if n in HEADER_OF and n not in keep:
                hit.add(n)
        # errors that name no function: the shared functions called on the error's line
        cur = text.split('\n')
        for ln in re.findall(r'^%s:(\d+):\d+: error' % re.escape(path), err, re.M):
            ln = int(ln)
            if 0 < ln <= len(cur):
                for n in re.findall(r'\b(\w+)\b', cur[ln - 1]):
                    if n in HEADER_OF and n not in keep:
                        hit.add(n)
        if not hit:
            # last resort: every function / variable this unit declares itself keeps its declaration
            rest = {d[2] for d in decls} - keep
            if not rest:
                break
            hit = rest
        keep |= hit
    with open(path, 'wb') as fh:
        fh.write(src)
    first = '\n'.join(l for l in err.split('\n') if ' error' in l)[:500]
    return path, 0, sorted(keep), f'reverted: {first}'


def _init(decls):
    global DEFS
    data = json.load(open(decls))
    DEFS = data['defs']
    where = {}
    for r in list(DEFS.values()) + data['local']:
        for name, kind, f, qual in r.get('types', []):
            if f and not f.startswith('include/') and kind in ('STRUCT_DECL', 'CLASS_DECL', 'UNION_DECL'):
                where.setdefault(name, set()).add(f)
        if r.get('asm'):
            ASM_NAMES.add(r['name'])
    AMBIGUOUS.update(n for n, fs in where.items() if len(fs) > 1)
    if not os.path.exists('include/proto'):
        os.makedirs('include/proto')
    with open('include/proto/.ambiguous', 'w') as fh:  # (for --only, which scans just a few files)
        fh.write('\n'.join(sorted(AMBIGUOUS)) + '\n')
    excluded = set()
    if os.path.exists('include/proto/.excluded'):
        excluded = set(open('include/proto/.excluded').read().split())
    for r in DEFS.values():
        if usable(r) and r['name'] not in excluded:
            HEADER_OF[r['name']] = proto_header(r['file'])


def regen_only(files):
    """Rewrite the headers of the given source files from a fresh scan of just those files."""
    import tempfile
    tmp = tempfile.mktemp(suffix='.json')
    subprocess.run([sys.executable, os.path.join(os.path.dirname(__file__), 'host_decls.py'), '--json', tmp] + files,
                   check=True, capture_output=True)
    data = json.load(open(tmp))
    os.unlink(tmp)
    global DEFS
    DEFS = data['defs']
    if os.path.exists('include/proto/.ambiguous'):  # type names defined in several files (the full scan's list)
        AMBIGUOUS.update(open('include/proto/.ambiguous').read().split())
    excluded = set()
    if os.path.exists('include/proto/.excluded'):
        excluded = set(open('include/proto/.excluded').read().split())
    only = set(os.path.relpath(f) for f in files)
    for rnd in range(6):
        HEADER_OF.clear()
        make_headers({k: v for k, v in DEFS.items() if v['name'] not in excluded and v['file'] in only}, only)
        by_h = {}
        for name, h in HEADER_OF.items():
            by_h.setdefault(h, []).append(name)
        bad = check_headers(by_h)
        if not bad:
            break
        excluded |= bad
        print(f'left out (do not compile alone): {", ".join(sorted(bad))}', file=sys.stderr)
    print(f'rewrote {len(only)} headers ({len(HEADER_OF)} declarations)', file=sys.stderr)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--decls')
    ap.add_argument('--jobs', type=int, default=os.cpu_count())
    ap.add_argument('--report')
    ap.add_argument('--headers-only', action='store_true')
    ap.add_argument('--only', nargs='+', metavar='SRC',
                    help='regenerate just the headers of these source files (after changing definitions there): '
                         'scans them, rewrites include/proto/<their headers>, leaves every other header alone')
    ap.add_argument('files', nargs='*')
    a = ap.parse_args()
    if a.only:
        regen_only(a.only)
        return
    _init(a.decls)
    excluded = set()
    for rnd in range(6):
        HEADER_OF.clear()
        n = make_headers({k: v for k, v in DEFS.items() if v['name'] not in excluded})
        by_h = {}
        for name, h in HEADER_OF.items():
            by_h.setdefault(h, []).append(name)
        bad = check_headers(by_h)
        print(f'round {rnd}: {n} headers, {len(HEADER_OF)} prototypes, {len(bad)} left out', file=sys.stderr)
        if not bad:
            break
        excluded |= bad
    with open('include/proto/.excluded', 'w') as fh:
        fh.write('\n'.join(sorted(excluded)) + '\n')
    if a.headers_only:
        return
    with Pool(a.jobs, initializer=_init, initargs=(a.decls,)) as pool:
        results = pool.map(apply, a.files, chunksize=1)
    total = sum(r[1] for r in results)
    kept = sum(len(r[2]) for r in results)
    print(f'{total} declarations replaced in {sum(1 for r in results if r[1])} files; {kept} kept (conflicts); '
          f'{sum(1 for r in results if r[3])} files reverted or failed', file=sys.stderr)
    if a.report:
        with open(a.report, 'w') as fh:
            for path, cnt, keep, msg in results:
                if keep or msg:
                    fh.write(f'{path}: {cnt} replaced; kept: {", ".join(keep)}{"; " + msg if msg else ""}\n')


if __name__ == '__main__':
    main()
