#!/usr/bin/env python3
# Integer / and % (and /=, %=) with a non-constant divisor in the game sources (libclang, x86-64 Linux target).
import glob, sys, collections
from multiprocessing import Pool
import clang.cindex as ci
ci.Config.set_library_file('/usr/lib/llvm-21/lib/libclang-21.so.1')
COMMON = ['--target=x86_64-pc-linux-gnu','-ffreestanding','-nostdinc','-fsigned-char','-fshort-wchar','-fno-builtin','-DMODERN','-DHOST','-DGAME_VERSION_USA','-Iinclude','-Wno-everything','-ferror-limit=0']
K=ci.CursorKind
NONCONST={K.DECL_REF_EXPR, K.MEMBER_REF_EXPR, K.CALL_EXPR, K.ARRAY_SUBSCRIPT_EXPR, K.UNARY_OPERATOR}
def nonconst(c):
    if c.kind==K.DECL_REF_EXPR:
        d=c.referenced
        return not (d is not None and d.kind in (K.ENUM_CONSTANT_DECL,))
    if c.kind in (K.MEMBER_REF_EXPR,K.CALL_EXPR,K.ARRAY_SUBSCRIPT_EXPR): return True
    if c.kind==K.CXX_UNARY_EXPR: return False  # sizeof
    return any(nonconst(ch) for ch in c.get_children())
def op_of(c):
    try: return c.binary_operator.name
    except Exception: return None
def run(path):
    idx=ci.Index.create()
    args=(['-x','c','-std=gnu11'] if path.endswith('.c') else ['-x','c++','-std=gnu++14','-fno-exceptions','-fno-rtti'])+COMMON
    try: tu=idx.parse(path,args=args)
    except Exception: return path,[]
    out=[]
    def walk(n):
        for c in n.get_children():
            if c.location.file and c.location.file.name!=path: 
                continue
            if c.kind in (K.BINARY_OPERATOR,K.COMPOUND_ASSIGNMENT_OPERATOR):
                op=op_of(c)
                if op in ('Div','Rem','DivAssign','RemAssign'):
                    ch=list(c.get_children())
                    if len(ch)==2 and c.type.get_canonical().kind not in (ci.TypeKind.FLOAT,ci.TypeKind.DOUBLE) and ch[0].type.get_canonical().kind not in (ci.TypeKind.FLOAT,ci.TypeKind.DOUBLE) and nonconst(ch[1]):
                        out.append((op,f'{path}:{c.location.line}'))
            walk(c)
    walk(tu.cursor)
    return path,out
if __name__=='__main__':
    files=sorted(glob.glob('src/**/*.c',recursive=True)+glob.glob('src/**/*.cpp',recursive=True))
    tot=collections.Counter(); nf=0; allo=[]
    with Pool(8) as p:
        for path,out in p.imap_unordered(run,files,chunksize=4):
            for op,loc in out: tot[op]+=1; allo.append(loc+' '+op)
            nf+= bool(out)
    print(dict(tot),'files',nf)
    open(sys.argv[1],'w').write('\n'.join(sorted(allo))+'\n')
