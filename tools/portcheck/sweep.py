#!/usr/bin/env python3
# libclang syntax/semantic sweep of every game unit for several target triples. Usage: sweep.py OUTDIR [target...]
import glob, json, os, sys, re
from multiprocessing import Pool
import clang.cindex as ci
ci.Config.set_library_file('/usr/lib/llvm-21/lib/libclang-21.so.1')
TARGETS = {
  'linux64': ['--target=x86_64-pc-linux-gnu'],
  'linux32': ['--target=i386-pc-linux-gnu', '-fpcc-struct-return'],
  'macos-arm64': ['--target=arm64-apple-macos13'],
  'win64-gnu': ['--target=x86_64-w64-windows-gnu'],
  'win64-msvc': ['--target=x86_64-pc-windows-msvc', '-fms-extensions'],
  'linux-arm64': ['--target=aarch64-linux-gnu'],
  'win64-gnu-nomsbf': ['--target=x86_64-w64-windows-gnu', '-mno-ms-bitfields'],
  'win64-msvc-nomsbf': ['--target=x86_64-pc-windows-msvc', '-fms-extensions', '-mno-ms-bitfields'],
  'linux64-uchar': ['--target=x86_64-pc-linux-gnu', '-funsigned-char'],
}
COMMON = ['-ffreestanding', '-nostdinc', '-fsigned-char', '-fshort-wchar', '-fno-short-enums', '-fno-builtin',
          '-DMODERN', '-DHOST', '-DGAME_VERSION_USA', '-Iinclude', '-ferror-limit=0',
          '-Wno-everything', '-Wpointer-to-int-cast', '-Wint-to-pointer-cast', '-Wvoid-pointer-to-int-cast',
          '-Wpointer-to-enum-cast']
C_ARGS = ['-x', 'c', '-std=gnu11']
CXX_ARGS = ['-x', 'c++', '-std=gnu++14', '-fno-exceptions', '-fno-rtti']
def flags_for(path):
    with open(path, errors='replace') as f:
        for _, line in zip(range(10), f):
            m = re.match(r"\s*//\s*mwcc-flags:\s*(.+?)\s*$", line)
            if m and '-char unsigned' in m.group(1): return ['-funsigned-char']
    return []
def run(job):
    target, path = job
    idx = ci.Index.create()
    args = (C_ARGS if path.endswith('.c') else CXX_ARGS) + TARGETS[target] + COMMON + flags_for(path) + (['-funsigned-char'] if target.endswith('uchar') else [])
    try:
        tu = idx.parse(path, args=args)
    except ci.TranslationUnitLoadError as e:
        return target, path, [('fatal', f'parse failed {e}', '', 0)]
    out = []
    for d in tu.diagnostics:
        if d.severity < ci.Diagnostic.Warning: continue
        loc = d.location
        out.append(('error' if d.severity >= ci.Diagnostic.Error else 'warning', d.spelling, d.option,
                    f'{loc.file}:{loc.line}' if loc.file else ''))
    return target, path, out
if __name__ == '__main__':
    outdir = sys.argv[1]
    targets = sys.argv[2:] or list(TARGETS)
    files = sorted(glob.glob('src/**/*.c', recursive=True) + glob.glob('src/**/*.cpp', recursive=True))
    jobs = [(t, f) for t in targets for f in files]
    res = {t: {} for t in targets}
    with Pool(8) as p:
        for t, f, out in p.imap_unordered(run, jobs, chunksize=4):
            res[t][f] = out
    for t in targets:
        json.dump(res[t], open(os.path.join(outdir, f'diag_{t}.json'), 'w'), indent=0)
        ne = sum(1 for f in res[t] for d in res[t][f] if d[0] != 'warning')
        nw = sum(1 for f in res[t] for d in res[t][f] if d[0] == 'warning')
        nf = sum(1 for f in res[t] if any(d[0] != 'warning' for d in res[t][f]))
        print(t, 'errors', ne, 'in', nf, 'files; warnings', nw, flush=True)
