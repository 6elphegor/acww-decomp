#!/usr/bin/env python3
# Classify DS-address hex literals in C/C++ code (comments and strings stripped).
import re, sys, os, collections
roots = sys.argv[1:] or ["src", "include"]
def strip(s):
    out=[];i=0;n=len(s)
    while i<n:
        c=s[i]
        if s.startswith("//",i):
            j=s.find("\n",i); j=n if j<0 else j; out.append(" "*(j-i)); i=j
        elif s.startswith("/*",i):
            j=s.find("*/",i+2); j=n if j<0 else j+2; out.append(re.sub(r"[^\n]"," ",s[i:j])); i=j
        elif c in "\"'":
            j=i+1
            while j<n and s[j]!=c:
                j+= 2 if s[j]=="\\" else 1
            out.append(c+" "*(j-i-1)+c if j<n else s[i:]); i=j+1
        else: out.append(c); i+=1
    return "".join(out)
RANGES=[("ITCM 0x01ff8000",0x01ff8000,0x02000000),("DTCM/syswork 0x027e-0x027f",0x027e0000,0x02800000),
 ("main RAM 0x02xxxxxx",0x02000000,0x027e0000),("main RAM mirror 0x028-0x02f",0x02800000,0x03000000),
 ("WRAM 0x03",0x03000000,0x04000000),("I/O 0x04",0x04000000,0x05000000),("palette 0x05",0x05000000,0x06000000),
 ("VRAM 0x06",0x06000000,0x07000000),("OAM 0x07",0x07000000,0x08000000),("GBA slot 0x08-0x0a",0x08000000,0x0b000000)]
lit=re.compile(r"\b0[xX]([0-9a-fA-F]{7,8})[uUlL]*\b")
castp=re.compile(r"(\(\s*(const\s+)?(volatile\s+)?[A-Za-z_][\w:<> ]*?(\s+volatile)?\s*\*+\s*(const\s*)?\)\s*\(?\s*$)|(reinterpret_cast\s*<[^>]*\*\s*>\s*\(\s*$)")
cmp_before=re.compile(r"(<|>|<=|>=|==|!=)\s*\(?\s*$")
cmp_after=re.compile(r"^\s*\)?\s*(<|>|<=|>=|==|!=)")
uptr_cast=re.compile(r"\(\s*(uptr|u32|uintptr_t|unsigned\s+int|unsigned\s+long|sptr|s32)\s*\)\s*$")
stats=collections.Counter(); files=collections.defaultdict(set); examples=collections.defaultdict(list)
for root in roots:
  for d,_,fs in os.walk(root):
    for f in fs:
      if not f.endswith((".c",".cpp",".h",".hpp",".inc")): continue
      p=os.path.join(d,f)
      s=strip(open(p,encoding="utf-8",errors="replace").read())
      for m in lit.finditer(s):
        v=int(m.group(1),16)
        rg=next((r for r in RANGES if r[1]<=v<r[2]),None)
        if not rg: continue
        before=s[max(0,m.start()-80):m.start()]; after=s[m.end():m.end()+20]
        line_start=s.rfind("\n",0,m.start())+1
        line=s[line_start:s.find("\n",m.end())].strip()
        if castp.search(before): kind="cast to pointer"
        elif cmp_before.search(before) or cmp_after.search(after): kind="compare"
        elif re.search(r"#\s*define\b",line): kind="#define"
        elif re.search(r"\bcase\s*$",before): kind="case label"
        else: kind="other (init/arg/arith)"
        key=(rg[0],kind)
        stats[key]+=1; files[key].add(p)
        if len(examples[key])<4: examples[key].append(f"{p}:{s.count(chr(10),0,m.start())+1}: {line[:140]}")
for k in sorted(stats):
    print(f"{stats[k]:6d} {len(files[k]):4d} files  {k[0]:28s} {k[1]}")
if os.environ.get("EX"):
    for k in sorted(stats):
        print("==",k)
        for e in examples[k]: print("   ",e)
