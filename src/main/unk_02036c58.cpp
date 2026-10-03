// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
void func_02133ef8(void *, u32);
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
void func_02034e10(u32, u32, u32, u32);
void func_02034d84(u32 a);
s32 func_0209cf0c(void);
void func_0209cfb8(u16 *);
void func_0209cf18(u16 *);
s32 func_0209cf00(void);
void func_0205c170(void);
void func_020639e8(void *buf, const void *fmt, ...);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *NNS_G3dGetMdlSet(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *NNS_G3dGetTex(void *);
void func_02055724(void *, s32);
void *func_0205588c(void *, void *);
void Mem_Free(void *);
void *Heap_Alloc(void *, u32);
void MI_CpuCopy8(void *, void *, u32);
void *_ZN7TownMap13func_0204df64Ev(void *);
extern u16 data_020d8d8c, data_020d8d88, data_020d8d90;
extern u16 data_020c8af8[];
extern void *data_021c620c;
extern void *gCurrentHeap;
struct Unk_021e5890_T { u8 pad[0x14]; u8 unk_14; };
extern Unk_021e5890_T data_021e5890;}

extern "C" {
void *File_LoadAlloc(void *, void *, s32, void *);
extern char data_021e3680[];
s32 func_020b50e8(void);
void _ZN7TownMap13func_0204df30Ev(char *);
void func_0205c18c(s32, s32);
}
extern "C" void *func_02037244(void *a, void *b);
extern "C" void *func_02036f24(s32 id, void *heap);
extern "C" s32 func_020370f8(void *);
class Unk_02037108;
extern Unk_02037108 data_021c1b90;
extern const u8 data_020c8ba4[];

struct Unk_02037674_V3 {
    s32 x, y, z;
};
struct Unk_02037638_S8 {
    s32 a, b;
};

struct Unk_0203718c_Ent {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20, unk_24, unk_28, unk_2c;
};
struct Unk_0203718c_Ent2 {
    u32 unk_00, unk_04;
};

class Unk_02037108 {
public:
    Unk_02037108();
    ~Unk_02037108();
    BOOL func_02037108(u32 flag);
    void func_0203718c();

    Unk_0203718c_Ent unk_000[31];
    Unk_0203718c_Ent2 unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    u32 unk_61c;
    u32 unk_620;
    u32 unk_624;
    u32 unk_628;
    u32 unk_62c;
    u32 unk_630;
    u32 unk_634;
    u32 unk_638;
    u32 unk_63c;
    u32 unk_640;
    u32 unk_644;
    u32 unk_648;
};

struct Unk_02036c60_Vec { s32 x, y, z; };

struct Unk_02036c60_Ent { u8 a; u8 pad; s16 b; s16 c; };

// ---- Unk_02036cec ----
struct Unk_02036cec_Entry {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u8 unk_24[4];
    void *unk_28;
    s32 unk_2c;
};

struct Unk_02036cec_Small {
    s32 unk_00;
    void *unk_04;
};

struct Unk_02036cec {
    Unk_02036cec_Entry unk_000[31];
    Unk_02036cec_Small unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    s32 unk_61c;
    u8 pad_620[0x10];
    s32 unk_630;
    s32 unk_634;
    s32 unk_638;
    s32 unk_63c;
    s32 unk_640;
    s32 unk_644;
    s32 unk_648;

    s32 func_02036c98();
    s32 func_02036ca4();
    s32 func_02036cb0();
    s32 func_02036cbc();
    s32 func_02036cc8();
    s32 func_02036cd4();
    s32 func_02036ce0();
    BOOL func_02036cec();
    Unk_02036cec_Entry *func_02036d54(s32 id);
    void *func_02036eb8(s32 id);
    void func_02036fa4();
    void func_02037074();
};

extern "C" void *func_02037244(void *a, void *b) {
    return File_LoadAlloc(a, data_021c620c, 4, b);
}

Unk_02037108::Unk_02037108() {
    func_0203718c();
}

Unk_02037108::~Unk_02037108() {}

void Unk_02037108::func_0203718c() {
    Unk_0203718c_Ent *p; Unk_0203718c_Ent2 *q; u32 i; u32 j;
    p = unk_000;
    for (i = 0; i < 0x1f; p++, i++) {
        p->unk_00 = 0xffff;
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_0c = 0;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1c = 0;
        p->unk_10 = 0;
        p->unk_20 = 0;
        p->unk_28 = 0;
        p->unk_2c = 0;
    }
    q = unk_5d0;
    for (j = 0; j < 9; q++, j++) {
        q->unk_00 = 0xffff;
        q->unk_04 = 0;
    }
    unk_630 = 0;
    unk_634 = 0;
    unk_638 = 0;
    unk_63c = 0;
    unk_640 = 0;
    unk_618 = 0;
    unk_61c = 0;
    unk_620 = 0;
    unk_624 = 0;
    unk_628 = 0;
    unk_62c = 0;
}

BOOL Unk_02037108::func_02037108(u32 flag) {
    s32 t = func_020b50e8();
    if (t == 0x2c) {
        _ZN7TownMap13func_0204df30Ev(data_021e3680);
    }
    func_0203718c();
    unk_618 = flag;
    t = func_020b50e8();
    u32 v;
    if ((u32)t < 0x33) {
        v = data_020c8ba4[t];
    } else {
        v = 0xac;
    }
    unk_61c = (u8)v << 10;
    func_0205c18c(unk_61c, 0);
    if (flag != 0 || t == 0xb || t == 0x2f || (u8)(t + 0xf4) <= 2) {
        ((Unk_02036cec *)this)->func_02037074();
    }
    if (flag != 0) {
        ((Unk_02036cec *)this)->func_02036fa4();
    }
    return TRUE;
}

extern "C" s32 func_020370f8(void *)
{
    return (s32)_ZN7TownMap13func_0204df64Ev(data_021e3680);
}

void Unk_02036cec::func_02037074()
{
    u8 buf[0x20];
    s32 a = func_020370f8(this);
    s32 b = func_020370f8(this);
    void *p;
    func_020639e8(buf, "/bg/ct%d/grd_set%d%c.nsbtx", a, b, ((u32)(data_021e5890.unk_14 << 24) >> 26) + 0x61);
    p = File_LoadAlloc(buf, gCurrentHeap, -4, 0);
    s32 *q = &unk_630;
    *q = (s32)NNS_G3dGetTex(p);
    func_02055724((void *)*q, 0);
    unk_630 = (s32)func_0205588c((void *)unk_630, data_021c620c);
    if (p) {
        Mem_Free(p);
    }
}

void Unk_02036cec::func_02036fa4()
{
    u8 file[0x68];
    void *p = func_02037244((void *)"/bg/grd_anm.arc", 0);
    if (func_02101340(file, "BG", p)) {
        unk_634 = (s32)func_02106634(func_02106618(func_021012bc("BG:a/grd_set.nsbma")), 0);
        unk_638 = (s32)func_02106670(func_02106654(func_021012bc("BG:a/grd_set.nsbta")), 0);
        unk_63c = (s32)func_021066ac(func_02106690(func_021012bc("BG:a/riv.nsbtp")), 0);
        unk_640 = (s32)NNS_G3dGetTex(func_021012bc("BG:a/riv_itp.nsbtx"));
        unk_644 = (s32)func_021066ac(func_02106690(func_021012bc("BG:a/beB.nsbtp")), 0);
        unk_648 = (s32)NNS_G3dGetTex(func_021012bc("BG:a/beB_itp.nsbtx"));
        func_02101310(file);
    }
}

void *func_02036f24(s32 id, void *heap)
{
    u8 buf[0x20];
    u8 file[0x68];
    void *p, *r, *t;
    func_020639e8(buf, "/bg/a%d/%04x.arc", id >> 4, id);
    p = File_LoadAlloc(buf, gCurrentHeap, -4, 0);
    r = 0;
    if (func_02101340(file, "BG", p)) {
        t = func_021012bc("BG:a/bcl/bcl0");
        func_02101310(file);
        r = Heap_Alloc(heap, 0x180);
        MI_CpuCopy8(t, r, 0x180);
    }
    if (p) {
        Mem_Free(p);
    }
    return r;
}

void *Unk_02036cec::func_02036eb8(s32 id)
{
    u32 i, j;
    void *r = 0;
    Unk_02036cec_Entry *e = unk_000;
    Unk_02036cec_Small *s;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->unk_00 == id) {
            r = e->unk_0c;
            break;
        }
    }
    s = unk_5d0;
    for (j = 0; j < 9; s++, j++) {
        if (s->unk_04 == 0) {
            if (r) {
                s->unk_00 = id;
                s->unk_04 = r;
            } else {
                s->unk_04 = func_02036f24(id, data_021c620c);
                s->unk_00 = id;
            }
            return s->unk_04;
        }
        if (s->unk_00 == id) {
            return s->unk_04;
        }
    }
    return 0;
}

Unk_02036cec_Entry *Unk_02036cec::func_02036d54(s32 id)
{
    void *heap = data_021c620c;
    Unk_02036cec_Entry *e = unk_000;
    struct { s32 tmp; u8 buf[0x20]; u8 file[0x68]; } l;
    u32 i;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->unk_04 == 0) {
            s32 hi = id >> 4;
            void *p;
            func_020639e8(l.buf, "/bg/a%d/%04x.arc", hi, id);
            e->unk_04 = func_02037244(l.buf, e->unk_24);
            if (func_02101340(l.file, "BG", e->unk_04)) {
                u8 *q = (u8 *)NNS_G3dGetMdlSet(func_021012bc("BG:a/bmd/bmd0"));
                e->unk_08 = q + *(s32 *)(q + *(u16 *)(q + 0xe) + 0xc);
                e->unk_0c = func_021012bc("BG:a/bcl/bcl0");
                e->unk_10 = func_021012bc("BG:a/bsd/bsd0");
                p = func_021012bc("BG:a/bca/bca0");
                if (p) {
                    e->unk_14 = func_021065f8(func_021065dc(p), 0);
                }
                p = func_021012bc("BG:a/bma/bma0");
                if (p) {
                    e->unk_18 = func_02106634(func_02106618(p), 0);
                }
                p = func_021012bc("BG:a/bta/bta0");
                if (p) {
                    e->unk_1c = func_02106670(func_02106654(p), 0);
                }
                p = func_021012bc("BG:a/mgt/mgt0");
                if (p) {
                    e->unk_28 = (u8 *)p + 2;
                    e->unk_2c = *(s16 *)p;
                }
                func_02101310(l.file);
            }
            if (((id & 0xf000) >> 12) == 1) {
                func_020639e8(l.buf, "/bg/t%d/%04x.nsbtx", hi, id);
                p = File_LoadAlloc(l.buf, gCurrentHeap, -4, 0);
                if (p) {
                    l.tmp = (s32)NNS_G3dGetTex(p);
                    func_02055724((void *)l.tmp, 0);
                    e->unk_20 = func_0205588c((void *)l.tmp, heap);
                    if (p) {
                        Mem_Free(p);
                    }
                }
            }
            e->unk_00 = id;
            return e;
        }
        if (e->unk_00 == id) {
            return e;
        }
    }
    return 0;
}

BOOL Unk_02036cec::func_02036cec()
{
    Unk_02036cec_Entry *e = unk_000;
    Unk_02036cec_Small *s;
    u32 i, j;
    for (i = 0; i < 0x1f; e++, i++) {
        e->unk_00 = 0xffff;
        e->unk_04 = 0;
        e->unk_08 = 0;
        e->unk_0c = 0;
        e->unk_14 = 0;
        e->unk_18 = 0;
        e->unk_1c = 0;
        e->unk_10 = 0;
        e->unk_28 = 0;
        e->unk_2c = 0;
        e->unk_20 = 0;
    }
    s = unk_5d0;
    for (j = 0; j < 9; s++, j++) {
        s->unk_00 = 0xffff;
        s->unk_04 = 0;
    }
    unk_630 = 0;
    unk_618 = 0;
    unk_61c = 0;
    func_0205c170();
    return TRUE;
}

s32 Unk_02036cec::func_02036ce0() { return unk_630; }

s32 Unk_02036cec::func_02036cd4() { return unk_634; }

s32 Unk_02036cec::func_02036cc8() { return unk_638; }

s32 Unk_02036cec::func_02036cbc() { return unk_63c; }

s32 Unk_02036cec::func_02036cb0() { return unk_640; }

s32 Unk_02036cec::func_02036ca4() { return unk_644; }

s32 Unk_02036cec::func_02036c98() { return unk_648; }

extern "C" s32 func_02036c90(s16 *p)
{
    return *p;
}

Unk_02036c60_Vec func_02036c60(u8 *base, s32 idx)
{
    Unk_02036c60_Vec v;
    Unk_02036c60_Ent *e = (Unk_02036c60_Ent *)(base + 2);
    v.x = e[idx].a;
    v.y = e[idx].b << 12;
    v.z = e[idx].c << 12;
    return v;
}

extern "C" u8 *func_02036c58(void)
{
    return (u8 *)&data_021c1b90;
}

const u8 data_020c8ba4[0x34] = {
    0xac, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0e, 0x0e, 0x0e, 0x14, 0x18, 0x2a, 0x2a, 0x2a, 0x2a, 0x0c, 0x19, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0c, 0x0c, 0x0f, 0x11, 0x0c, 0x19, 0x0c, 0x6e, 0x1a, 0x1f, 0x17, 0x0c, 0x0d, 0x12, 0x13, 0x37, 0xac, 0xac, 0xac, 0x28, 0x14, 0x2a, 0x32, 0xac, 0x14, 0x00
};

Unk_02037108 data_021c1b90;
