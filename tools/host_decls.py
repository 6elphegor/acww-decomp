#!/usr/bin/env python3
"""Function declarations against definitions, across the sources (libclang).

The decomp's units declare what they call themselves (`extern "C" void Foo(s32, s32);`, methods called through
their mangled names as C functions taking void *) instead of sharing headers, and many of those declarations
disagree with the definitions. This collects every function definition and every declaration written in a .c /
.cpp file, keyed by the symbol name, and compares their types (64-bit, canonical: u32 -> unsigned int).

usage: host_decls.py [--json OUT] [--jobs N] [--list] [FILES...]   (default: every source under src/)
  --list   print every mismatching local declaration (file:line symbol: declared vs defined)

Needs the clang Python bindings (pip install --user clang==21.*) and libclang (/usr/lib/llvm-21/lib).
"""
import argparse
import glob
import json
import os
import sys
from multiprocessing import Pool

LIBCLANG = '/usr/lib/llvm-21/lib/libclang-21.so.1'
COMMON = ['-m64', '-ffreestanding', '-nostdinc', '-fsigned-char', '-fshort-wchar', '-DMODERN', '-DHOST',
          '-DGAME_VERSION_USA', '-Iinclude', '-Wno-everything', '-ferror-limit=0']
C_ARGS = ['-x', 'c', '-std=gnu11'] + COMMON
CXX_ARGS = ['-x', 'c++', '-std=gnu++14', '-fno-exceptions', '-fno-rtti'] + COMMON

_index = None


def _ci():
    import clang.cindex as ci
    if not ci.Config.loaded:
        ci.Config.set_library_file(LIBCLANG)
    return ci


def canonical_type(cur):
    """The function's canonical type; a method's with its object pointer first (as a C call through the mangled
    name passes it)."""
    ci = _ci()
    t = cur.type.get_canonical()
    params = [a.get_canonical().spelling for a in t.argument_types()] if t.kind == ci.TypeKind.FUNCTIONPROTO else []
    variadic = t.kind == ci.TypeKind.FUNCTIONPROTO and t.is_function_variadic()
    if t.kind == ci.TypeKind.FUNCTIONNOPROTO:
        params = ['<no prototype>']
    is_member = cur.kind in (ci.CursorKind.CXX_METHOD, ci.CursorKind.CONSTRUCTOR, ci.CursorKind.DESTRUCTOR,
                             ci.CursorKind.CONVERSION_FUNCTION)
    if is_member and not cur.is_static_method():
        cls = cur.semantic_parent.type.get_canonical().spelling
        params = [cls + ' *'] + params
    result = t.get_result().get_canonical().spelling if t.kind in (ci.TypeKind.FUNCTIONPROTO,
                                                                   ci.TypeKind.FUNCTIONNOPROTO) else '?'
    if cur.kind in (ci.CursorKind.CONSTRUCTOR, ci.CursorKind.DESTRUCTOR):
        result = 'void'
    return result, params + (['...'] if variadic else [])


def scan(path):
    ci = _ci()
    global _index
    if _index is None:
        _index = ci.Index.create()
    args = C_ARGS if path.endswith('.c') else CXX_ARGS
    try:
        tu = _index.parse(path, args=args, options=ci.TranslationUnit.PARSE_SKIP_FUNCTION_BODIES * 0)
    except ci.TranslationUnitLoadError as e:
        return path, [], [f'parse failed: {e}']
    kinds = (ci.CursorKind.FUNCTION_DECL, ci.CursorKind.CXX_METHOD, ci.CursorKind.CONSTRUCTOR,
             ci.CursorKind.DESTRUCTOR, ci.CursorKind.CONVERSION_FUNCTION)
    out = []
    errors = [str(d) for d in tu.diagnostics if d.severity >= ci.Diagnostic.Error][:20]
    def visit(node, depth=0):
        for c in node.get_children():
            if c.kind in kinds:
                loc = c.location
                if loc.file is None:
                    continue
                f = os.path.relpath(loc.file.name)
                if c.kind == ci.CursorKind.FUNCTION_DECL and c.linkage == ci.LinkageKind.INTERNAL:
                    continue
                try:
                    sym = c.mangled_name or c.spelling
                    if sym.startswith('_Z') or c.kind != ci.CursorKind.FUNCTION_DECL or True:
                        pass
                    res, params = canonical_type(c)
                except Exception:
                    continue
                rec = {'sym': sym, 'name': c.spelling, 'file': f, 'line': loc.line,
                       'def': c.is_definition(), 'result': res, 'params': params,
                       'decl': c.extent.start.file and _text(c)}
                if c.kind == ci.CursorKind.FUNCTION_DECL:
                    # a free function: its prototype as written, linkage, namespace, the named types it uses
                    rec['c_linkage'] = (c.mangled_name or c.spelling) == c.spelling
                    ns, p = [], c.semantic_parent
                    while p is not None and p.kind == ci.CursorKind.NAMESPACE:
                        ns.insert(0, p.spelling)
                        p = p.semantic_parent
                    rec['ns'] = '::'.join(ns)
                    rec['types'] = _signature_types(c)
                    if c.is_definition():
                        rec['proto'] = _head_text(c, path)
                if c.kind != ci.CursorKind.FUNCTION_DECL:
                    # a member: its class (qualified), whether static, the parameters as written
                    rec['cls'] = c.semantic_parent.type.spelling
                    cdef = c.semantic_parent.get_definition()
                    rec['cls_file'] = os.path.relpath(cdef.location.file.name) if cdef is not None and \
                        cdef.location.file is not None else None
                    rec['static'] = c.is_static_method()
                    rec['virtual'] = c.is_virtual_method() or (c.kind == ci.CursorKind.DESTRUCTOR and
                                                              _has_virtual_dtor(c.semantic_parent))
                    rec['kind'] = c.kind.name
                    rec['wparams'] = [a.type.spelling for a in c.get_arguments()]
                    rec['wresult'] = c.result_type.spelling
                out.append(rec)
            if c.kind in (ci.CursorKind.NAMESPACE, ci.CursorKind.LINKAGE_SPEC, ci.CursorKind.UNEXPOSED_DECL,
                          ci.CursorKind.CLASS_DECL, ci.CursorKind.STRUCT_DECL, ci.CursorKind.CLASS_TEMPLATE):
                visit(c, depth + 1)
    visit(tu.cursor)
    return path, out, errors


def _has_virtual_dtor(cls):
    # a destructor is virtual when declared so here or in a base
    ci = _ci()
    for ch in cls.get_children():
        if ch.kind == ci.CursorKind.DESTRUCTOR and ch.is_virtual_method():
            return True
        if ch.kind == ci.CursorKind.CXX_BASE_SPECIFIER:
            d = ch.type.get_declaration()
            if d is not None and d.kind != ci.CursorKind.NO_DECL_FOUND and _has_virtual_dtor(d):
                return True
    return False


def _signature_types(c):
    """The named types in a function's signature: [name, kind, file of the definition (or declaration)]."""
    ci = _ci()
    out, seen = [], set()
    def walk(ty, depth=0):
        if depth > 12:
            return
        k = ty.kind
        if k in (ci.TypeKind.POINTER, ci.TypeKind.LVALUEREFERENCE, ci.TypeKind.RVALUEREFERENCE):
            return walk(ty.get_pointee(), depth + 1)
        if k in (ci.TypeKind.CONSTANTARRAY, ci.TypeKind.INCOMPLETEARRAY):
            return walk(ty.element_type, depth + 1)
        if k == ci.TypeKind.ELABORATED:
            return walk(ty.get_named_type(), depth + 1)
        if k == ci.TypeKind.FUNCTIONPROTO:
            walk(ty.get_result(), depth + 1)
            for a in ty.argument_types():
                walk(a, depth + 1)
            return
        d = ty.get_declaration()
        if d is None or d.kind == ci.CursorKind.NO_DECL_FOUND:
            return
        if d.kind == ci.CursorKind.TYPEDEF_DECL and d.location.file is None:
            return
        key = (d.spelling, d.kind.name)
        if key in seen or not d.spelling:
            return
        seen.add(key)
        dd = d.get_definition() or d
        f = os.path.relpath(dd.location.file.name) if dd.location.file else None
        qual = ty.get_canonical().spelling if d.kind != ci.CursorKind.TYPEDEF_DECL else d.spelling
        out.append([d.spelling, d.kind.name, f, qual])
        if d.kind == ci.CursorKind.TYPEDEF_DECL and (f is None or not f.startswith('include/')):
            walk(d.underlying_typedef_type, depth + 1)
    walk(c.result_type)
    for a in c.get_arguments():
        walk(a.type)
    return out


def _head_text(c, path):
    """A definition's head as written in the source: from its start to the body's '{'."""
    try:
        start = c.extent.start.offset
        body = None
        for ch in c.get_children():
            if ch.kind == _ci().CursorKind.COMPOUND_STMT:
                body = ch.extent.start.offset
        if body is None:
            return None
        with open(c.extent.start.file.name, 'rb') as fh:
            src = fh.read()
        return src[start:body].decode(errors='replace').strip()
    except Exception:
        return None


def _text(c):
    """The declaration as written (up to the body)."""
    try:
        toks = []
        for t in c.get_tokens():
            if t.spelling in ('{', ';'):
                break
            toks.append(t.spelling)
            if len(toks) > 80:
                break
        return ' '.join(toks)
    except Exception:
        return ''


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--json')
    ap.add_argument('--jobs', type=int, default=os.cpu_count())
    ap.add_argument('--list', action='store_true')
    ap.add_argument('files', nargs='*')
    a = ap.parse_args()
    files = a.files or sorted(glob.glob('src/**/*.c', recursive=True) + glob.glob('src/**/*.cpp', recursive=True))
    with Pool(a.jobs) as pool:
        results = pool.map(scan, files, chunksize=4)
    defs, local = {}, []
    failed = []
    seen = set()
    for path, recs, errs in results:
        if errs and not recs:
            failed.append((path, errs))
        for r in recs:
            key = (r['sym'], r['file'], r['line'])
            if key in seen:
                continue
            seen.add(key)
            if r['def']:
                defs.setdefault(r['sym'], r)
            elif r['file'].startswith('src/'):
                local.append(r)
    mism, matched, undefined = [], 0, 0
    for r in local:
        d = defs.get(r['sym'])
        if d is None:
            undefined += 1
            continue
        if (r['result'], r['params']) == (d['result'], d['params']):
            matched += 1
        else:
            mism.append((r, d))
    print(f'{len(files)} files, {len(defs)} defined functions, {len(local)} declarations in source files: '
          f'{matched} agree with the definition, {len(mism)} disagree, {undefined} have no definition here '
          f'(assembly, the host runtime)')
    if failed:
        print(f'{len(failed)} files did not parse', file=sys.stderr)
    if a.list:
        for r, d in mism:
            print(f"{r['file']}:{r['line']} {r['name']}: {r['result']} ({', '.join(r['params'])})  vs  "
                  f"{d['result']} ({', '.join(d['params'])})  [{d['file']}:{d['line']}]")
    if a.json:
        with open(a.json, 'w') as fh:
            json.dump({'defs': defs, 'local': local}, fh)


if __name__ == '__main__':
    main()
