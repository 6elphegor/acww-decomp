// mwcc-version: 1.2/sp2
#include "types.h"

inline void *operator new(unsigned long, void *p) { return p; }

struct Unk_02053a54_Obj {
    u32 unk_00;
    u8 pad_04[0x48];
    u32 unk_4c;
    u32 unk_50;
    u32 unk_54;
};

struct Unk_02053a54_Hdr {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_02053a54_Msg {
    Unk_02053a54_Hdr *unk_00;
    u8 pad_04[0xb0];
    Unk_02053a54_Obj *unk_b4;
};

struct Unk_02054584_Data {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 pad_0c[0x1c];
    u8 unk_28[0x24];
    s32 unk_4c;
    s32 unk_50;
    s32 unk_54;
};

struct Unk_02054628_Obj {
    u8 *unk_00;
    u8 pad_04[0xb0];
    Unk_02054584_Data *unk_b4;
    u8 pad_b8[0x1c];
    u8 *unk_d4;
};

struct Unk_02054778_Info {
    u32 unk_00;
    u16 unk_04;
    u16 pad_06;
    u32 unk_08;
};

struct Unk_0205415c_Item {
    u8 pad_00[0x10];
    u32 unk_10;
};
struct Unk_0205415c_Obj {
    u8 pad_00[8];
    u8 unk_08[0x10];
    Unk_0205415c_Item *unk_18;
};

class Model {
public:
    Model();
    virtual ~Model();
    u16 unk_04;
    u8 pad_06[2];
    u32 unk_08;
    u8 *unk_0c;
    u8 pad_10[8];
    Unk_02054584_Data *unk_18;
    s32 unk_1c;
    Unk_02054584_Data *unk_20;
    u8 pad_24[0x18];
    void *unk_3c;
    u8 pad_40[0x1c];
    void *unk_5c;
    u8 pad_60[0x34];
    void *unk_94;

    BOOL func_020555dc(void);
    void initRenderObj(void);
};

class Unk_020dbd34 : public Model {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
    BOOL func_02054b14(void);
    BOOL func_02054b38(void *heap);
    void func_02054b70(void *a);
    BOOL func_02054bac(void *a, void *b, void *c);
    BOOL func_02054c2c(void *a, void *b);
    BOOL func_02054c64(void *res, void *name, void *tex, void *d, u32 *e, s32 f);
    BOOL func_02054c88(void *res, void *name);
    BOOL func_02054c9c(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag);
    BOOL func_02054d58(void *res, void *name, u32 tag);
};

class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};


class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    u32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u8 unk_b0;
    u8 pad_b1[3];
};

class Unk_020dbe6c {
public:
    Unk_020dbe6c();
    virtual ~Unk_020dbe6c();
    u8 unk_bc[0x18];
    u8 *unk_d4;
    u8 unk_d8[0x14];
    u32 unk_ec;
    s32 unk_f0;
};

class Unk_020dbd54 : public Unk_020dbd34, public AnimFrameCtrl {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    Unk_02054584_Data *unk_b4;

    void func_0205468c();
    void func_020546c8();
    void func_020546ec();
    s32 func_02054710();
    void func_020547a4(s32 v);
    s32 func_020547cc(void *q);
    void func_020547e4();
    BOOL func_02054800(void *x);
};

class Unk_0205454c : public Unk_020dbd54, public Unk_020dbe6c {
public:
    Unk_0205454c();
    virtual ~Unk_0205454c();

    void func_0205436c(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
    void func_0205439c();
    void func_020543b4(Unk_0205454c *x);
    void func_020543d4(Unk_0205454c *x);
    void func_02054420(Unk_0205454c *x);
    void func_02054440(Unk_0205454c *x);
    Unk_02054584_Data *func_02054584();
    u32 func_0205458c();
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

class Unk_020dbda4 : public Unk_0205454c {
public:
    Unk_020dbda4();
    virtual ~Unk_020dbda4();
    void func_02053dc0();
    void func_02053dd8(u32 a, u32 b);
    void func_02053e00(u32 a, u32 b);
    void func_02053e28(u32 a, u32 b);
    void func_02053e70(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void func_02053f08(u32 a);
    void func_02053f20();
    BOOL func_02053f8c(u32 a);
    void func_02053fcc(Unk_02053a54_Msg *m);
    void func_02054004(Unk_02053a54_Msg *m);
    void func_02054048(Unk_02053a54_Msg *m);
    void func_02054098(Unk_02053a54_Msg *m);
    BOOL func_020540bc(u32 i);
    void func_020540f4(u32 i);
    void func_02054124(u32 i);
    void func_02054154(u32 i);
    void func_02054158(u32 i);

    void *unk_f4;
    AnimFrameCtrl unk_f8;
    Unk_020dbe6c unk_110;
    u32 unk_14c;
    u32 unk_150;
};

class Unk_020dbd74 : public Unk_020dbda4 {
public:
    Unk_020dbd74();
    virtual ~Unk_020dbd74();
    void func_02053878(u32 a, u32 b);
    void func_020538a8(u32 a, u32 b);
    void func_020538f0();
    void func_02053900(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void func_020539a0();
    BOOL func_02053a14(u32 a);
    void func_02053a54(Unk_02053a54_Msg *m);
    void func_02053af0(Unk_02053a54_Msg *m);
    void func_02053b34(Unk_02053a54_Msg *m);
    void func_02053be4(Unk_02053a54_Msg *m);
    BOOL func_02053c08(u32 i);
    void func_02053c40(u32 i);
    void func_02053c70(u32 i);

    void *unk_154;
    AnimFrameCtrl unk_158;
    Unk_020dbe6c unk_170;
    u32 unk_1ac;
    u32 unk_1b0;
};

struct Unk_02054970_Table {
    u32 unk_00;
    u32 unk_04;
    Unk_020dbd34 *unk_08;
    u8 *unk_0c;
};

extern "C" {
void MTX_Identity33_(void *p);
s32 func_01ffcc10(void);
void _ZN12Unk_020dbe6c13func_02056520Ei(void *p, s32 v);
s32 _ZN12Unk_020dbe6c13func_02056544Ev(void *p);
void _ZN12Unk_020dbe6c13func_02056160EP16Unk_02056160_Arg(void *p, void *q);
void _ZN12Unk_020dbe6c13func_020561d8EP16Unk_02056160_Arg(void *p, void *q);
void _ZN13AnimFrameCtrl5setupEihit(void *p, u32 a, s32 b, s32 c, u32 d);
s32 _ZN13AnimFrameCtrl4stepEv(void *p);
void _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void NNS_G3dAnmObjInit(void *a, s32 b, void *c, s32 d);
void NNS_G3dRenderObjRemoveAnmObj(void *a, void *b);
void NNS_G3dRenderObjAddAnmObj(void *a, void *b);
void _ZN5Model13func_0205553cEPi(void *p, void *q);
void *func_02055c08(void *a, void *b, void *c);
extern u8 data_020dbd28[];
s32 _ZN12Unk_020dbd5413func_020547ccEPv(void *p);
void func_0206fde4(u32 v);
void func_0206fe0c(u32 v);
void func_0206fd10(void *a, void *b, void *c);
void func_0206fd84(void *a);
void func_0206fd64(void *a);
void func_0206fdb4(void *a, void *b);
s32 strcmp(void *a, void *b);
void *File_LoadAlloc(void *a, void *b, s32 c, s32 d);
extern void *gCurrentHeap;
extern void *data_021c6214;
void *NNS_G3dGetMdlSet(void *p);
void *NNS_G3dGetTex(void *p);
void *Heap_Alloc(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void MI_CpuCopy8(void *src, void *dst, u32 size);
void func_02055724(void *a, void *b);
void *func_0205588c(void *a, void *heap);
void *func_02055928(void *a, void *heap);
void _ZN5Model18setResourceAndBindEP16Unk_020553f8_Resj(void *a, void *b, void *c);
void NNS_G3dBindMdlTex(void *a, void *b);
void NNS_G3dBindMdlPltt(void *a, void *b);
void func_02103978(void *a, void *b, s32 c, s32 d);
void func_021037b4(void *a, void *b, s32 c, void *d);
void *func_020558bc(void *a, u32 tag);
void *func_0205598c(void *a);
void *func_020716cc(void);
void *_ZN12Unk_020718a413func_020716e8Eii(void *a, void *b, void *c);
void func_02053830(void *p);
void func_02053ee8(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
void func_0205415c(void *p, void *q);
void func_02053848(void *a, u32 b, u32 c);
void func_02053980(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
u16 func_02054778(u32 kind, Unk_02054778_Info *p);
}

u8 data_020dbd28[4] = {0x4a, 0x00, 0x41, 0x43};

static inline u8 *Unk_02054b70_Off(u8 *p) {
    return p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

Unk_020dbd34::Unk_020dbd34() : unk_98(0x4e554c4c) {}

Unk_020dbd34::~Unk_020dbd34() {}

BOOL Unk_020dbd34::func_02054d58(void *res, void *name, u32 tag) {
    void *heap = gCurrentHeap;
    void *h = File_LoadAlloc(res, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(h));
    void *q = NNS_G3dGetTex(h);
    if (name != NULL) {
        unk_5c = func_02055928(p, name);
    } else {
        unk_5c = func_020558bc(p, tag);
    }
    if (q != NULL) {
        func_02055724(q, unk_94);
        NNS_G3dBindMdlTex(unk_5c, q);
        NNS_G3dBindMdlPltt(unk_5c, q);
    }
    Heap_Free(heap, h);
    initRenderObj();
    return TRUE;
}

BOOL Unk_020dbd34::func_02054c9c(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag) {
    void *heap = gCurrentHeap;
    void *h = File_LoadAlloc(res, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(h));
    if (name != NULL) {
        unk_5c = func_02055928(p, name);
    } else {
        unk_5c = func_020558bc(p, tag);
    }
    if (tex != NULL) {
        NNS_G3dBindMdlTex(unk_5c, tex);
    } else {
        void *q = NNS_G3dGetTex(h);
        if (q != NULL) {
            func_02055724(q, unk_94);
            NNS_G3dBindMdlTex(unk_5c, q);
        }
    }
    if (d != NULL) {
        s32 i;
        for (i = 0; i < f; i++) {
            func_021037b4(unk_5c, d, i, (void *)e[i]);
        }
    }
    Heap_Free(heap, h);
    initRenderObj();
    return TRUE;
}

BOOL Unk_020dbd34::func_02054c88(void *res, void *name) {
    return func_02054d58(res, name, 0x4e554c4c);
}

BOOL Unk_020dbd34::func_02054c64(void *res, void *name, void *tex, void *d, u32 *e, s32 f) {
    return func_02054c9c(res, name, tex, d, e, f, 0x4e554c4c);
}

BOOL Unk_020dbd34::func_02054c2c(void *a, void *b) {
    unk_5c = func_0205598c(a);
    if (unk_5c != NULL) {
        initRenderObj();
        return TRUE;
    }
    unk_98 = (u32)a;
    return func_02054d58(b, NULL, (u32)a);
}

BOOL Unk_020dbd34::func_02054bac(void *a, void *b, void *c) {
    void *heap = gCurrentHeap;
    void *h = File_LoadAlloc(a, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(h));
    unk_5c = func_020558bc(p, 0x4e554c4c);
    void *r = _ZN12Unk_020718a413func_020716e8Eii(func_020716cc(), b, c);
    func_02103978(unk_5c, r, 0, 0);
    func_021037b4(unk_5c, r, 0, 0);
    Heap_Free(heap, h);
    initRenderObj();
    return TRUE;
}

void Unk_020dbd34::func_02054b70(void *a) {
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(a));
    void *q = NNS_G3dGetTex(a);
    unk_5c = p;
    NNS_G3dBindMdlTex(unk_5c, q);
    NNS_G3dBindMdlPltt(unk_5c, q);
    initRenderObj();
}

BOOL Unk_020dbd34::func_02054b38(void *heap) {
    u32 size = unk_0c[0x17] * 0x58;
    if (heap == NULL) {
        heap = gCurrentHeap;
    }
    void *p = Heap_Alloc(heap, size);
    if (p == NULL) {
        return FALSE;
    }
    unk_3c = p;
    unk_08 |= 1;
    return TRUE;
}

BOOL Unk_020dbd34::func_02054b14(void) {
    BOOL r = TRUE;
    r &= func_020555dc();
    unk_98 = 0x4e554c4c;
    return r;
}

Unk_020dbd44::Unk_020dbd44() : unk_04(0), unk_08(0) {}

Unk_020dbd44::~Unk_020dbd44() {}

extern "C" BOOL func_020549e4(Unk_02054970_Table *t, void *file, void *heap)
{
    u32 size;
    void *fileHeap;
    void *res;
    void *hdr;
    u32 i;
    if (heap == 0) {
        heap = data_021c6214;
    }
    fileHeap = gCurrentHeap;
    res = File_LoadAlloc(file, fileHeap, -4, 0);
    if (res == 0) {
        return FALSE;
    }
    u8 *hdr2 = (u8 *)NNS_G3dGetMdlSet(res);
    t->unk_04 = hdr2[9];
    size = t->unk_04 << 4;
    t->unk_0c = (u8 *)Heap_Alloc(heap, size);
    {
        u8 *p = hdr2 + 8;
        p = p + *(u16 *)(hdr2 + 0xe);
        MI_CpuCopy8(p + *(u16 *)(p + 2), t->unk_0c, size);
    }
    t->unk_08 = (Unk_020dbd34 *)Heap_Alloc(heap, t->unk_04 * 0x9c);
    for (i = 0; i < t->unk_04; i++) {
        new (&t->unk_08[i]) Unk_020dbd34();
    }
    hdr = NNS_G3dGetTex(res);
    func_02055724(hdr, 0);
    hdr = func_0205588c(hdr, heap);
    for (i = 0; i < t->unk_04; i++) {
        u8 *h = (u8 *)NNS_G3dGetMdlSet(res);
        u8 *p = h + 8;
        u32 off = *(u16 *)(h + 0xe);
        u32 st = *(u16 *)(p + off);
        u8 *q = h + *(s32 *)(p + off + st * i + 4);
        void *r = func_02055928(q, heap);
        _ZN5Model18setResourceAndBindEP16Unk_020553f8_Resj(&t->unk_08[i], r, hdr);
    }
    Heap_Free(fileHeap, res);
    return TRUE;
}

extern "C" void *func_020549ac(Unk_02054970_Table *t, void *name)
{
    u32 i = 0;
    u32 n = t->unk_04;
    for (; i < n; i++) {
        if (strcmp(name, t->unk_0c + i * 16) == 0) {
            return &t->unk_08[i];
        }
    }
    return 0;
}

extern "C" BOOL func_02054970(Unk_02054970_Table *t)
{
    BOOL r = TRUE;
    if (t->unk_04 == 0) {
        return r;
    }
    for (u32 i = 0; i < t->unk_04; i++) {
        r &= t->unk_08[i].func_02054b14();
    }
    t->unk_04 = 0;
    return TRUE;
}

Unk_020dbd54::Unk_020dbd54()
{
    unk_b4 = 0;
}

Unk_020dbd54::~Unk_020dbd54() {}

BOOL Unk_020dbd54::func_02054800(void *x)
{
    if (unk_b4 != 0 || unk_5c == 0) {
        return FALSE;
    }
    unk_b4 = (Unk_02054584_Data *)func_02055c08(unk_5c, data_020dbd28, x);
    if (unk_b4 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbd54::func_020547e4()
{
    AnimFrameCtrl &r = *this;
    _ZN13AnimFrameCtrl4stepEv(&r);
    unk_b4->unk_00 = unk_a4;
}

s32 Unk_020dbd54::func_020547cc(void *q)
{
    if (unk_3c != 0) {
        unk_08 |= 1;
    }
    _ZN5Model13func_0205553cEPi(this, q);
}

void Unk_020dbd54::func_020547a4(s32 v)
{
    unk_a4 = v << 12;
    unk_b4->unk_00 = unk_a4;
    if (unk_3c != 0) {
        unk_08 |= 1;
    }
}

extern "C" u16 func_02054778(u32 kind, Unk_02054778_Info *p)
{
    u16 r = p->unk_04;
    if (kind == 0 || kind == 2) {
        u32 f = p->unk_08;
        if (f & 2) {
            return r;
        }
        if (f & 1) {
            r = r - 1;
        }
    }
    return r;
}

void Unk_0205454c::func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e)
{
    if (e == 0) {
        e = func_02054778(b, (Unk_02054778_Info *)a);
    }
    AnimFrameCtrl &r = *this;
    _ZN13AnimFrameCtrl5setupEihit(&r, e, b, c, d);
    NNS_G3dAnmObjInit(unk_b4, a, unk_5c, 0);
    unk_b4->unk_00 = unk_a4;
}

s32 Unk_020dbd54::func_02054710()
{
    NNS_G3dRenderObjAddAnmObj(&unk_08, unk_b4);
}

void Unk_020dbd54::func_020546ec()
{
    if (unk_b4 != 0) {
        NNS_G3dRenderObjRemoveAnmObj(&unk_08, unk_18);
        unk_b4 = 0;
    }
}

void Unk_020dbd54::func_020546c8()
{
    if (unk_b4 != 0) {
        NNS_G3dRenderObjRemoveAnmObj(&unk_08, unk_20);
        unk_b4 = 0;
    }
}

void Unk_020dbd54::func_0205468c()
{
    if (unk_b4 != 0) {
        if (unk_18 == unk_b4) {
            NNS_G3dRenderObjRemoveAnmObj(&unk_08, unk_18);
            unk_b4 = 0;
        } else if (unk_20 == unk_b4) {
            NNS_G3dRenderObjRemoveAnmObj(&unk_08, unk_20);
            unk_b4 = 0;
        }
    }
}

extern "C" void func_02054628(Unk_02054628_Obj *o, s32 x)
{
    u32 idx = o->unk_00[1];
    if (idx >= 2) {
        u8 *b = o->unk_d4;
        u32 off = *(u16 *)(b + 6);
        u8 *t = b + off;
        u32 st = *(u16 *)(b + off);
        u8 *e = b + *(s32 *)(t + st * idx + 4);
        s32 *v = (s32 *)(e + 4);
        Unk_02054584_Data *d = o->unk_b4;
        d->unk_4c = v[0];
        d->unk_50 = v[1];
        d->unk_54 = v[2];
    } else if (idx == 1) {
        if (x != 0) {
            u8 *b = o->unk_d4;
            u32 off = *(u16 *)(b + 6);
            u8 *t = b + off;
            Unk_02054584_Data *d = o->unk_b4;
            s32 old = d->unk_50;
            u32 st = *(u16 *)(b + off);
            u8 *e = b + *(s32 *)(t + st * idx + 4);
            d->unk_50 = old + (*(s32 *)(e + 8) - x);
        }
    }
}

extern "C" void func_02054594(void *unused, Unk_02054628_Obj *o, void *p)
{
    u32 t = *o->unk_00 & 0xe0;
    if (t == 0x40) {
        func_0206fde4(o->unk_00[4]);
    } else if (t == 0x60) {
        func_0206fde4(o->unk_00[5]);
    }
    if (p != 0) {
        Unk_02054584_Data *d = o->unk_b4;
        func_0206fd10(d->unk_28, &d->unk_4c, p);
    } else {
        Unk_02054584_Data *d = o->unk_b4;
        u32 f = d->unk_00;
        if (f & 2) {
            if (!(f & 4)) {
                func_0206fd84(&d->unk_4c);
            }
        } else if (f & 4) {
            func_0206fd64(d->unk_28);
        } else {
            func_0206fdb4(d->unk_28, &d->unk_4c);
        }
    }
    if (t == 0x20 || t == 0x60) {
        func_0206fe0c(o->unk_00[4]);
    }
}

u32 Unk_0205454c::func_0205458c()
{
    return unk_b4->unk_08;
}

Unk_02054584_Data *Unk_0205454c::func_02054584()
{
    return unk_b4;
}

Unk_0205454c::Unk_0205454c()
{
}

Unk_0205454c::~Unk_0205454c() {}

void Unk_0205454c::func_02054440(Unk_0205454c *x)
{
    if (unk_f0 != 0) {
        Unk_020dbe6c &r = *this;
        _ZN12Unk_020dbe6c13func_02056160EP16Unk_02056160_Arg(&r, x);
    }
}

void Unk_0205454c::func_02054420(Unk_0205454c *x)
{
    if (func_01ffcc10() == 0) {
        func_02054440(x);
    }
}

void Unk_0205454c::func_020543d4(Unk_0205454c *x)
{
    Unk_02054584_Data *d = x->unk_b4;
    if (d->unk_00 & 4) {
        d->unk_4c = 0;
        d->unk_50 = 0;
        d->unk_54 = 0;
    }
    if (d->unk_00 & 2) {
        MTX_Identity33_(d->unk_28);
    }
    if (unk_f0 != 0) {
        Unk_020dbe6c &r = *this;
        _ZN12Unk_020dbe6c13func_020561d8EP16Unk_02056160_Arg(&r, x);
    }
}

void Unk_0205454c::func_020543b4(Unk_0205454c *x)
{
    if (func_01ffcc10() == 0) {
        func_020543d4(x);
    }
}

void Unk_0205454c::func_0205439c()
{
    Unk_020dbe6c &r = *this;
    _ZN12Unk_020dbe6c13func_02056544Ev(&r);
    func_020547e4();
}

void Unk_0205454c::func_0205436c(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f)
{
    Unk_020dbe6c &r = *this;
    _ZN12Unk_020dbe6c13func_02056520Ei(&r, b);
    func_02054720(a, c, d, e, f);
}

Unk_020dbda4::Unk_020dbda4()
{
    unk_f4 = 0;
    unk_14c = 0;
    unk_150 = 0;
}

Unk_020dbda4::~Unk_020dbda4() {}

extern "C" void func_0205415c(void *pv, void *qv) {
    Unk_0205415c_Obj *p = (Unk_0205415c_Obj *)pv;
    Unk_0205415c_Item *q = (Unk_0205415c_Item *)qv;
    Unk_0205415c_Item *cur = p->unk_18;
    if (cur != q && cur != NULL && cur->unk_10 == 0) {
        NNS_G3dRenderObjRemoveAnmObj(&p->unk_08, cur);
        NNS_G3dRenderObjAddAnmObj(&p->unk_08, q);
    }
}

void Unk_020dbda4::func_02054158(u32 i) {}

void Unk_020dbda4::func_02054154(u32 i) {}

void Unk_020dbda4::func_02054124(u32 i) {
    if (i >= 0x20) {
        unk_150 |= 1 << (i - 0x20);
    } else {
        unk_14c |= 1 << i;
    }
}

void Unk_020dbda4::func_020540f4(u32 i) {
    if (i >= 0x20) {
        unk_150 &= ~(1 << (i - 0x20));
    } else {
        unk_14c &= ~(1 << i);
    }
}

BOOL Unk_020dbda4::func_020540bc(u32 i) {
    if (i >= 0x20) {
        if ((unk_150 & (1 << (i - 0x20))) == 0) {
            return FALSE;
        }
        return TRUE;
    }
    if ((unk_14c & (1 << i)) == 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_020dbda4::func_02054098(Unk_02053a54_Msg *m) {
    if (unk_110.unk_f0 != 0) {
        _ZN12Unk_020dbe6c13func_02056160EP16Unk_02056160_Arg(&unk_110, m);
    }
}

void Unk_020dbda4::func_02054048(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        if (func_020540bc(m->unk_00->unk_01)) {
            func_0205415c(this, unk_f4);
            func_02054098(m);
        } else {
            func_0205415c(this, unk_b4);
            func_02054440((Unk_0205454c *)m);
        }
    }
}

void Unk_020dbda4::func_02054004(Unk_02053a54_Msg *m) {
    if ((m->unk_b4->unk_00 & 4) != 0) {
        m->unk_b4->unk_4c = 0;
        m->unk_b4->unk_50 = 0;
        m->unk_b4->unk_54 = 0;
    }
    if (unk_110.unk_f0 != 0) {
        _ZN12Unk_020dbe6c13func_020561d8EP16Unk_02056160_Arg(&unk_110, m);
    }
}

void Unk_020dbda4::func_02053fcc(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        if (func_020540bc(m->unk_00->unk_01)) {
            func_02054004(m);
        } else {
            func_020543d4((Unk_0205454c *)m);
        }
    }
}

BOOL Unk_020dbda4::func_02053f8c(u32 a) {
    if (!func_02054800((void *)a)) {
        return FALSE;
    }
    unk_f4 = func_02055c08(unk_5c, data_020dbd28, (void *)a);
    if (unk_f4 != NULL) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbda4::func_02053f20() {
    func_0205439c();
    if (unk_14c != 0 || unk_150 != 0) {
        if (_ZN12Unk_020dbe6c13func_02056544Ev(&unk_110) != 0 && (unk_04 & 0x4000) != 0) {
            func_02053dc0();
            unk_04 = unk_04 & 0xffffbfff;
        }
        _ZN13AnimFrameCtrl4stepEv(&unk_f8);
        *(u32 *)unk_f4 = unk_f8.unk_a4;
    }
}

void Unk_020dbda4::func_02053f08(u32 a) {
    _ZN12Unk_020dbd5413func_020547ccEPv(this);
    func_0205415c(this, unk_b4);
}

extern "C" void func_02053ee8(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f) {
    ((Unk_0205454c *)p)->func_0205436c(a, b, c, d, e, f);
}

void Unk_020dbda4::func_02053e70(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g) {
    _ZN12Unk_020dbe6c13func_02056520Ei(&unk_110, b);
    if (*(u16 *)&f == 0) {
        *(u16 *)&f = func_02054778(c, (Unk_02054778_Info *)a);
    }
    _ZN13AnimFrameCtrl5setupEihit(&unk_f8, *(u16 *)&f, c, d, *(u16 *)&e);
    NNS_G3dAnmObjInit(unk_f4, a, unk_5c, 0);
    if (g != 0) {
        unk_04 = unk_04 | 0x4000;
    } else {
        unk_04 = unk_04 & 0xffffbfff;
    }
}

void Unk_020dbda4::func_02053e28(u32 a, u32 b) {
    if (a == 0) {
        func_02053dc0();
    } else {
        func_02053e70(func_0205458c(), a, unk_b0, unk_ac, (unk_a4 << 4) >> 16, b, 1);
    }
}

void Unk_020dbda4::func_02053e00(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        func_02054154(i);
        func_02054124(i);
    }
}

void Unk_020dbda4::func_02053dd8(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        func_02054158(i);
        func_020540f4(i);
    }
}

void Unk_020dbda4::func_02053dc0() {
    unk_150 = 0;
    unk_14c = unk_150;
}

Unk_020dbd74::Unk_020dbd74() {
    unk_154 = NULL;
    unk_1ac = 0;
    unk_1b0 = 0;
}

Unk_020dbd74::~Unk_020dbd74() {
}

void Unk_020dbd74::func_02053c70(u32 i) {
    if (i >= 0x20) {
        unk_1b0 |= 1 << (i - 0x20);
    } else {
        unk_1ac |= 1 << i;
    }
}

void Unk_020dbd74::func_02053c40(u32 i) {
    if (i >= 0x20) {
        unk_1b0 &= ~(1 << (i - 0x20));
    } else {
        unk_1ac &= ~(1 << i);
    }
}

BOOL Unk_020dbd74::func_02053c08(u32 i) {
    if (i >= 0x20) {
        if ((unk_1b0 & (1 << (i - 0x20))) == 0) {
            return FALSE;
        }
        return TRUE;
    }
    if ((unk_1ac & (1 << i)) == 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_020dbd74::func_02053be4(Unk_02053a54_Msg *m) {
    if (unk_170.unk_f0 != 0) {
        _ZN12Unk_020dbe6c13func_02056160EP16Unk_02056160_Arg(&unk_170, m);
    }
}

void Unk_020dbd74::func_02053b34(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        u32 t = m->unk_00->unk_01;
        u32 v;
        if (t >= 0x20) {
            v = unk_1b0 & (1 << (t - 0x20));
        } else {
            v = unk_1ac & (1 << t);
        }
        if (v != 0) {
            func_0205415c(this, unk_154);
            func_02053be4(m);
        } else {
            u32 w;
            if (t >= 0x20) {
                w = unk_150 & (1 << (t - 0x20));
            } else {
                w = unk_14c & (1 << t);
            }
            if (w != 0) {
                func_0205415c(this, unk_f4);
                func_02054098(m);
            } else {
                func_0205415c(this, unk_b4);
                func_02054440((Unk_0205454c *)m);
            }
        }
    }
}

void Unk_020dbd74::func_02053af0(Unk_02053a54_Msg *m) {
    if ((m->unk_b4->unk_00 & 4) != 0) {
        m->unk_b4->unk_4c = 0;
        m->unk_b4->unk_50 = 0;
        m->unk_b4->unk_54 = 0;
    }
    if (unk_170.unk_f0 != 0) {
        _ZN12Unk_020dbe6c13func_020561d8EP16Unk_02056160_Arg(&unk_170, m);
    }
}

void Unk_020dbd74::func_02053a54(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        u32 x = unk_1b0 | (unk_1ac | (unk_14c | unk_150));
        if (x == 0) {
            func_020543d4((Unk_0205454c *)m);
        } else {
            u32 t = m->unk_00->unk_01;
            if ((x & (1 << (t & 0x1f))) == 0) {
                func_020543d4((Unk_0205454c *)m);
            } else if (func_02053c08(t)) {
                func_02053af0(m);
            } else if (func_020540bc(t)) {
                func_02054004(m);
            } else {
                func_020543d4((Unk_0205454c *)m);
            }
        }
    }
}

BOOL Unk_020dbd74::func_02053a14(u32 a) {
    if (!func_02053f8c(a)) {
        return FALSE;
    }
    unk_154 = func_02055c08(unk_5c, data_020dbd28, (void *)a);
    if (unk_154 != NULL) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbd74::func_020539a0() {
    func_02053f20();
    if (unk_1ac != 0 || unk_1b0 != 0) {
        if (_ZN12Unk_020dbe6c13func_02056544Ev(&unk_170) != 0 && (unk_04 & 0x8000) != 0) {
            func_02053830(this);
            unk_04 = unk_04 & 0xffff7fff;
        }
        _ZN13AnimFrameCtrl4stepEv(&unk_158);
        *(u32 *)unk_154 = unk_158.unk_a4;
    }
}

extern "C" void func_02053980(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f) { func_02053ee8(p, a, b, c, d, e, f); }

void Unk_020dbd74::func_02053900(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g) {
    _ZN12Unk_020dbe6c13func_02056520Ei(&unk_170, b);
    if (*(u16 *)&f == 0) {
        *(u16 *)&f = func_02054778(c, (Unk_02054778_Info *)a);
    }
    _ZN13AnimFrameCtrl5setupEihit(&unk_158, *(u16 *)&f, c, d, *(u16 *)&e);
    NNS_G3dAnmObjInit(unk_154, a, unk_5c, 0);
    if (g != 0) {
        unk_04 = unk_04 | 0x8000;
    } else {
        unk_04 = unk_04 & 0xffff7fff;
    }
}

void Unk_020dbd74::func_020538f0() { _ZN13AnimFrameCtrl10isFinishedEv(&unk_158); }

void Unk_020dbd74::func_020538a8(u32 a, u32 b) {
    if (a == 0) {
        func_02053830(this);
    } else {
        func_02053900(func_0205458c(), a, unk_b0, unk_ac, (unk_a4 << 4) >> 16, b, 1);
    }
}

void Unk_020dbd74::func_02053878(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        func_02054154(i);
        func_020540f4(i);
        func_02053c70(i);
    }
}

extern "C" void func_02053848(void *a, u32 b, u32 c)
{
    Unk_020dbd74 *o = (Unk_020dbd74 *)a;
    for (; b <= c; b++) {
        o->func_02054154(b);
        o->func_02054124(b);
        o->func_02053c40(b);
    }
}

