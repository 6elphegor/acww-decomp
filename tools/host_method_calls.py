#!/usr/bin/env python3
"""Rewrite calls of member functions through their mangled names into real member calls.

The decomp calls methods of classes it kept opaque as C functions named by the mangled symbol, with the object as
a void * first argument (`void _ZN9AnimModel8stepAnimEv(void *); ... _ZN9AnimModel8stepAnimEv(e->model);`), often
through a #define alias. This rewrites each such call, found with libclang, into the call it stands for:

    _ZN9AnimModel8stepAnimEv(x)          ->  ((AnimModel *)(x))->stepAnim()
    _ZN9AnimModelC1Ev(x)                 ->  new (x) AnimModel()
    _ZN9AnimModelD1Ev(x)                 ->  ((AnimModel *)(x))->~AnimModel()
    _ZN5Class6staticEi(a)                ->  Class::static(a)

(the object cast is left out when the argument already has the class's pointer type; an argument whose type does
not convert to the parameter's gets an explicit cast to it). The local declarations and aliases left unused are
deleted. Each file is then compiled for 32-bit and 64-bit and the rewrite kept only if both compile; otherwise the
file is restored and reported.

usage: host_method_calls.py --decls DECLS.json [--jobs N] FILES...
  DECLS.json: tools/host_decls.py --json (the definitions: class, static, parameter types as written)
"""
import argparse
import json
import os
import re
import subprocess
import sys
from multiprocessing import Pool

sys.setrecursionlimit(20000)

sys.path.insert(0, os.path.dirname(__file__))
import host_decls  # noqa: E402

GCC = ['gcc', '-x', 'c++', '-fsyntax-only', '-fno-short-enums', '-fsigned-char', '-fshort-wchar', '-ffreestanding',
       '-nostdinc', '-fno-builtin', '-DMODERN', '-DHOST', '-DGAME_VERSION_USA', '-Iinclude', '-std=gnu++14',
       '-fno-exceptions', '-fno-rtti', '-fpermissive', '-w']
DEFS = {}


def compiles(path):
    for m in ('-m32', '-m64'):
        # as the builds compile (tools/configure_host.py: -fpermissive for the 64-bit build only, for now)
        args = [a for a in GCC if m == '-m64' or a != '-fpermissive'] + [m]
        if m == '-m32':
            args += ['--sysroot', os.path.expanduser('~/acww/toolchains/i386-sysroot')]
        r = subprocess.run(args + [path], capture_output=True, text=True)
        if r.returncode != 0:
            return False, r.stderr
    return True, ''


def strict_conversion_errors(path):
    """(line, col, to-type) of the invalid pointer conversions in the 64-bit build (as errors: no -fpermissive)."""
    args = [a for a in GCC if a not in ('-fpermissive', '-w')] + ['-m64', '-fmax-errors=0']
    r = subprocess.run(args + [path], capture_output=True, text=True)
    out = []
    for m in re.finditer(r"^[^:\n]+:(\d+):(\d+): error: invalid conversion from '([^']*)' to '([^']*)'", r.stderr,
                         re.M):
        out.append((int(m.group(1)), int(m.group(2)), m.group(4)))
    for m in re.finditer(r"^[^:\n]+:(\d+):(\d+): error: invalid conversion from ‘([^’]*)’ to ‘([^’]*)’", r.stderr,
                         re.M):
        out.append((int(m.group(1)), int(m.group(2)), m.group(4)))
    return out


def find_calls(path):
    ci = host_decls._ci()
    index = ci.Index.create()
    tu = index.parse(path, args=host_decls.CXX_ARGS)
    src = open(path, 'rb').read()
    calls = []
    stack = [tu.cursor]
    while stack:  # (iterative: some functions nest deeper than Python's recursion limit)
        node = stack.pop()
        for c in node.get_children():
            if c.kind == ci.CursorKind.CALL_EXPR and c.referenced is not None and \
                    c.referenced.kind == ci.CursorKind.FUNCTION_DECL:
                name = c.referenced.spelling
                if name.startswith('_Z') and c.location.file and os.path.samefile(c.location.file.name, path):
                    calls.append((c, name))
            stack.append(c)
    out = []
    for c, name in calls:
        s, e = c.extent.start, c.extent.end
        if s.file is None or e.file is None or not os.path.samefile(s.file.name, path):
            continue
        args = []
        ok = True
        for a in c.get_arguments():
            if a.extent.start.file is None or not os.path.samefile(a.extent.start.file.name, path):
                ok = False
                break
            args.append((a.extent.start.offset, a.extent.end.offset, a.type.get_canonical().spelling,
                         a.extent.start.line, a.extent.start.column))
        if not ok:
            continue
        # the callee's spelling in the source (the mangled name or an alias macro)
        callee_end = src.index(b'(', s.offset)
        callee = src[s.offset:callee_end].decode().strip()
        out.append({'start': s.offset, 'end': e.offset, 'name': name, 'callee': callee, 'args': args})
    return src, out


DEMANGLE_CACHE = {}


def member_of(name):
    d = DEFS.get(name)
    if d is None or 'cls' not in d:
        return None
    return d


def rewrite(path):
    try:
        return _rewrite(path)
    except Exception as e:
        return path, 0, f'failed: {type(e).__name__}: {e}'


def _rewrite(path):
    try:
        src, calls = find_calls(path)
    except Exception as e:
        return path, 0, f'parse: {e}'
    edits = []
    used_callees = set()
    headers = set()
    skipped = set()
    dropped = []
    for c in calls:
        d = member_of(c['name'])
        if d is None:
            continue
        cls = d['cls']
        kind = d['kind']
        hdr = d.get('cls_file')
        if not hdr or not hdr.startswith('include/'):
            if not (hdr and os.path.samefile(hdr, path)):
                skipped.add(cls)
                continue
        else:
            headers.add(hdr[len('include/'):])
        args = c['args']
        text = [('\x00ARG%d:%d\x00' % (a[0], a[1])) for a in args]  # rendered after all edits are known
        seps = [', '] + [src[args[i - 1][1]:args[i][0]].decode() for i in range(1, len(args))]
        def join(items, first):
            # the arguments from index first on, with the separators they had (line breaks stay where they were)
            out = ''
            for i in range(first, first + len(items)):
                out += (seps[i] if i > first else '') + items[i - first]
            return out
        wparams = d['wparams']
        nparams = len(d['params']) - (0 if d.get('static') else 1) + (0 if kind not in ('CONSTRUCTOR',) else 0)
        if '...' not in d['params'] and len(args) > len(d['params']):
            dropped.append(f"{d['name']}: {len(args) - len(d['params'])} extra argument(s) dropped")
            args = args[:len(d['params'])]
            text = text[:len(d['params'])]
        # the arguments after the object, cast where a pointer / array doesn't match the parameter (the old call
        # passed them through void * or an integer: the same value, now with its type visible)
        first = 0 if d.get('static') else 1
        canon = d['params'][first:]
        for i in range(first, len(args)):
            j = i - first
            if j >= len(wparams) or j >= len(canon) or canon[j] == '...':
                continue
            have = args[i][2]
            want = canon[j]
            if wparams[j].endswith('&') and ('*' in have or '[' in have):
                # a reference parameter given a pointer (the direct call passed the address): the object it points to
                text[i] = f"*({wparams[j][:-1].strip()} *)({text[i]})"
                continue
            if have != want and ('*' in want or '*' in have or '[' in have):
                if '*' in want and '*' in have and have not in ('void *', 'unsigned char *', 'char *'):
                    text[i] = f"({wparams[j]})(void *)({text[i]})"  # (the same address: no base adjustment)
                else:
                    text[i] = f"({wparams[j]})({text[i]})"
        if kind == 'CONSTRUCTOR':
            if not args:
                continue
            rest = text[1:]
            new = f"new ({text[0]}) {cls}({join(rest, 1)})"
        elif kind == 'DESTRUCTOR':
            if len(args) < 1:
                continue
            short = cls.split('::')[-1]
            if re.search(r'D0E', c['name']):
                continue  # (the deleting destructor: left as it is)
            obj = text[0] if '*' not in args[0][2] or args[0][2] in ('void *', 'unsigned char *', 'char *') \
                else f"(void *)({text[0]})"
            # qualified: the destructor of exactly this class, as the direct call was (no virtual dispatch)
            new = f"(({cls} *)({obj}))->{cls}::~{short}()" if d.get('virtual') else f"(({cls} *)({obj}))->~{short}()"
        elif d.get('static'):
            new = f"{cls}::{d['name']}({join(text, 0)})"
        else:
            if not args:
                continue
            obj = text[0]
            objtype = args[0][2]
            if objtype == d['params'][0]:
                head = f"({obj})->" if not re.fullmatch(r'[\w.>-]+', obj) else f"{obj}->"
            elif '*' in objtype and objtype not in ('void *', 'unsigned char *', 'char *', 'signed char *'):
                # another class's pointer: the same address, as the direct call passed it (no base adjustment)
                head = f"(({cls} *)(void *)({obj}))->"
            else:
                head = f"(({cls} *)({obj}))->"
            # a virtual method: qualified, the function itself as the direct call was (no virtual dispatch)
            mname = f"{cls}::{d['name']}" if d.get('virtual') else d['name']
            new = f"{head}{mname}({join(text[1:], 1)})"
        edits.append((c['start'], c['end'], new, hdr[len('include/'):] if hdr and hdr.startswith('include/') else None))
        used_callees.add((c['callee'], c['name']))
    if not edits:
        return path, 0, ''
    edits.sort()
    srcline = lambda off: src.count(b'\n', 0, off) + 1

    def render_all(active):
        def render(s, e):
            out, pos = [], s
            for (cs, ce, new, _h) in active:
                if cs >= pos and ce <= e and cs >= s:
                    out.append(src[pos:cs].decode())
                    out.append(expand(new, cs, ce))
                    pos = ce
            out.append(src[pos:e].decode())
            return ''.join(out)
        def expand(new, cs, ce):
            # an argument spanning the whole call (macro expansions): its source as written
            def arg(m):
                s, e = int(m.group(1)), int(m.group(2))
                if s <= cs and e >= ce:
                    return src[s:e].decode()
                return render(s, e)
            return re.sub(r'\x00ARG(\d+):(\d+)\x00', arg, new)
        text = render(0, len(src))
        # the headers of the classes now called directly, after the last #include
        hdrs = sorted({h for (_s, _e, _n, h) in active if h})
        missing = [h for h in hdrs if f'"{h}"' not in text]
        at_line, k = 0, 0
        if missing:
            incs = ''.join(f'#include "{h}"\n' for h in missing)
            m = list(re.finditer(r'^#include [^\n]*\n', text, re.M))
            at = m[-1].end() if m else 0
            at_line = text.count('\n', 0, at)
            k = len(missing)
            text = text[:at] + incs + text[at:]
        return text, at_line, k, missing

    def top_level(active):
        tops, end = [], -1
        for ed in active:
            if ed[0] >= end:
                tops.append(ed)
                end = ed[1]
        return tops

    active = list(edits)
    rounds = 0
    while True:
        text, at_line, k, missing = render_all(active)
        with open(path, 'w') as fh:
            fh.write(text)
        ok, err = compiles(path)
        if ok or rounds >= 8 or not active:
            break
        rounds += 1
        name = re.escape(path)
        bad_lines, redefs = set(), set()
        for m in re.finditer(r'^%s:(\d+):\d+: error: (.*)$' % name, err, re.M):
            ln = int(m.group(1))
            ln = ln - k if ln > at_line + k else (ln if ln <= at_line else None)
            if ln is not None:
                bad_lines.add(ln)
            r = re.search(r"redefinition of [‘'](?:class|struct|union|enum) ([\w:]+)[’']", m.group(2))
            if r:
                redefs.add(r.group(1).split('::')[-1])
        drop = set()
        for ed in top_level(active):
            if any(srcline(ed[0]) <= ln <= srcline(ed[1]) for ln in bad_lines):
                drop.add(ed)
        for cname in redefs:
            # a header that defines a class this file defines itself: not included, its calls left as they were
            for h in missing:
                try:
                    body = open(os.path.join('include', h)).read()
                except OSError:
                    continue
                if re.search(r'\b(class|struct|union)\s+%s\b[^;]*\{' % re.escape(cname), body):
                    drop |= {ed for ed in active if ed[3] == h}
        if not drop:
            break
        active = [ed for ed in active if ed not in drop]
    note = f' (classes defined in source files, calls left: {", ".join(sorted(skipped))})' if skipped else ''
    if dropped:
        note += ' (' + '; '.join(sorted(set(dropped))) + ')'
    if not ok:
        with open(path + '.rej', 'w') as fh:
            fh.write(text)
        with open(path, 'wb') as fh:
            fh.write(src)
        first = '\n'.join(l for l in err.split('\n') if ' error' in l)[:600]
        return path, 0, f'reverted (attempt in {path}.rej): {first}'
    kept = len(active)
    if kept < len(edits):
        note += f' ({len(edits) - kept} calls left as they were: type conflicts to resolve by hand)'
    # drop the declarations / aliases of the rewritten names that are no longer used (kept if that doesn't compile)
    final = text
    for callee, cname in sorted(used_callees):
        if callee != cname and len(re.findall(r'\b%s\b' % re.escape(callee), final)) == 1:
            final = re.sub(r'^#define\s+%s\s+%s[ \t]*\n' % (re.escape(callee), re.escape(cname)), '', final, flags=re.M)
        if len(re.findall(r'\b%s\b' % re.escape(cname), final)) == 1:
            final = re.sub(r'^[^\n(#]*\b%s\s*\([^;{]*\)\s*;[ \t]*\n' % re.escape(cname), '', final, flags=re.M)
    if final != text:
        with open(path, 'w') as fh:
            fh.write(final)
        if not compiles(path)[0]:
            with open(path, 'w') as fh:
                fh.write(text)
    return path, kept, note.strip()


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--decls', required=True)
    ap.add_argument('--jobs', type=int, default=os.cpu_count())
    ap.add_argument('files', nargs='+')
    a = ap.parse_args()
    global DEFS
    DEFS = json.load(open(a.decls))['defs']
    files = [f for f in a.files if f.endswith('.cpp')]
    with Pool(a.jobs, initializer=_init, initargs=(a.decls,)) as pool:
        results = pool.map(rewrite, files, chunksize=1)
    total = 0
    for path, n, msg in results:
        total += n
        if msg:
            print(f'{path}: {msg}')
    print(f'{total} calls rewritten in {sum(1 for r in results if r[1])} files', file=sys.stderr)


def _init(decls):
    global DEFS
    DEFS = json.load(open(decls))['defs']


if __name__ == '__main__':
    main()
