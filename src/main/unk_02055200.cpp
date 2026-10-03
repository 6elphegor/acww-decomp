#include "types.h"

struct Unk_020553f8_Res {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0xc];
    u8 unk_18;
};

struct Unk_0205562c_Dict {
    u8 pad_00[6];
    u16 unk_06;
};

struct Unk_0205562c_Blk {
    u32 unk_00;
    Unk_0205562c_Dict unk_04;
};

struct Unk_02055744_Obj {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02055820_Slot {
    void *unk_00;
    u32 unk_04;
};

class Unk_020dbe24 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;

    Unk_020dbe24();
    virtual ~Unk_020dbe24();
    void func_020551f4(u32 a, u32 b, u32 c);
    void func_02055200(void);
    void func_02055210(void *p);
    u32 func_0205526c(u32 a, u32 b);
    u32 func_02055298(u32 a, u32 b, u32 c);
    u32 func_020552d8(u32 a, u32 b);
    u32 func_020552ec(u32 a, u32 b);
    u32 func_02055300(u32 a);
    u32 func_02055314(u32 a, u32 b);
    u32 func_02055328(u32 a);
    u32 func_02055334(u32 a);
    void func_02055340(void *a, void *b, void *c);
};

// Declaration-only twin of Unk_020dbe14: the original vtable order (e14, e24, e34) is the heapsort of the declaration
// order e24, e34, e14, which needs Unk_020dbe34 declared before its real base. aliases.txt maps the twin's names.
class Unk_020dbe14b {
public:
    Unk_020dbe14b();
    virtual ~Unk_020dbe14b();
};

class Unk_020dbe34 : public Unk_020dbe14b {
public:
    Unk_020dbe34();
    virtual ~Unk_020dbe34();
    void func_020553f8(u32 v);
    void func_02055440(u32 v);
    void func_02055488(s32 a, s32 b);
    void func_020554a0(s32 a, s32 b, s32 c, s32 d, s32 e);
    void *func_020554c0();
    void func_020554c4();
    void func_020554d0(s32 *p);
    void func_02055524();
    void func_0205553c(s32 *p);
    void func_02055550(s32 *p);
    BOOL func_020555dc();
    BOOL func_020555ec(Unk_020553f8_Res *a, u32 b);
    BOOL func_02055600(Unk_020553f8_Res *a, u32 b);
    void func_0205562c();
    void func_0205568c();

    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u16 unk_06;
    /* 0x08 */ u8 unk_08[0x2c];
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ u8 unk_38[0x24];
    /* 0x5c */ Unk_020553f8_Res *unk_5c;
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ u8 unk_64[0x24];
    /* 0x88 */ u8 unk_88[0xc];
    /* 0x94 */ u32 unk_94;
};

class Unk_020dbe14 {
public:
    Unk_020dbe14();
    virtual ~Unk_020dbe14();
};

class Unk_020dbe7c {
public:
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~Unk_020dbe7c();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    void func_02055a8c(u32 a);
    void func_02055a9c(u32 a);
    void func_02055aac(s32 a, s32 b, s32 c, u8 d, s32 e, u16 f);
    void func_02055ae4(s32 a, s32 b, s32 c, s32 e, u16 f);
    void func_02055b00(s32 a, s32 b, s32 c, s32 e, u16 f);
    void func_02055b38(s32 a, s32 b, s32 c, u16 e);
    void func_02055b58(Unk_020553f8_Res *a, void *b, u32 c, u32 d, u16 e);
    BOOL func_02055b90(u32 a, void *c);
    BOOL func_02055bcc(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

s32 data_021c5390;
s32 data_021c538c;
Unk_02055820_Slot data_021c5394[0x3c];
Unk_02055820_Slot data_021c5574[0x96];

extern "C" {
void func_02103d48(void *p, s32 a);
void func_02103d50(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_01ff8ad4(void *p);
void MI_Copy36B(void *p, void *q);
extern u8 data_027e0184[];
extern u32 data_027e0148[];
void func_021042d0(void *p);
void func_021042a8(void *p);
void func_021042f8(void);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02105b3c(void *p, s32 a, s32 b, s32 c);
s32 func_02105d50(void *p);
void func_021039ec(void *p, u32 n);
void func_02103830(void *p, u32 q);
void func_02103f98(void *p, void *q);
u32 func_02064f84(void);
void func_0210622c(void *p, s32 a, s32 b);
void MTX_Identity43_(void *p);
u32 func_02103c34(void *p);
void func_02103c2c(void *p, u32 x);
void DC_FlushRange(void *p, u32 a);
void func_02103bc0(void *p, s32 a);
u32 func_02103d3c(void *p);
u32 func_02103d30(void *p);
void NNS_G3dTexSetTexKey(void *p, u32 y, u32 z);
void func_02103c40(void *p, s32 a);
void func_02103d64(s32 a, u32 b);
void func_02103e40(s32 a, u32 b);
void func_02104000(void *p, void *q, u32 r, u32 s);
u32 NNS_G3dAnmObjCalcSizeRequired(const char *a, u32 b);
void *func_020e8608(void *h, u32 n);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void func_0206d49c(void);
u32 _ZN12Unk_02056fd813func_0205710cEv(void *p);
s32 func_02057110(u32 p);
void func_0205c1d8(void);
void func_0205c1f4(u32 a, u32 b);
void _ZN12Unk_020dbe7c13func_0205668cEihit(void *p, u32 a, u32 b, u32 c, u32 d);
void func_02056714(void *p);
s32 func_02105dcc(void *a, void *b, s32 c, s32 d);
void *func_021041e8(void);
void MTX_Concat43(void *a, void *b, void *c);
extern void *data_021c6214;
extern u8 data_020e416c;
extern void *data_021f482c;
extern u32 (*data_0213bc18)(u32, u32, u32);
extern u32 (*data_0213bc10)(u32, u32, u32);
}

extern "C" {
BOOL func_02055724(Unk_02055744_Obj *a, u32 b);
BOOL func_02055744(Unk_02055744_Obj *a, u32 b);
BOOL func_02055780(Unk_02055744_Obj *a, u32 x);
BOOL func_020557a0(Unk_02055744_Obj *a, u32 b);
BOOL func_02055800(Unk_02055744_Obj *a, u32 y, u32 z);
u32 func_02055954(u32 key);
u32 func_0205598c(u32 key);
void *func_0205588c(void *a, void *heap);
void *func_02055928(u32 *a, void *heap);
}

void Unk_020dbe4c::func_02055b58(Unk_020553f8_Res *a, void *b, u32 c, u32 d, u16 e) {
    _ZN12Unk_020dbe7c13func_0205668cEihit(this, *(u16 *)((u8 *)a + 4), c, d, e);
    func_02104000((void *)unk_18, a, unk_1c, (u32)b);
    *(u32 *)unk_18 = e << 12;
}

void Unk_020dbe4c::func_02055b38(s32 a, s32 b, s32 c, u16 e) {
    func_02055b58((Unk_020553f8_Res *)a, NULL, b, c, e);
}

void Unk_020dbe4c::func_02055b00(s32 a, s32 b, s32 c, s32 e, u16 f) {
    func_02055a8c(a);
    func_02055b58((Unk_020553f8_Res *)b, NULL, c, e, f);
    func_02055a9c(a);
}

void Unk_020dbe4c::func_02055ae4(s32 a, s32 b, s32 c, s32 e, u16 f) {
    func_02055b58((Unk_020553f8_Res *)a, (void *)b, c, e, f);
}

void Unk_020dbe4c::func_02055aac(s32 a, s32 b, s32 c, u8 d, s32 e, u16 f) {
    func_02055a8c(a);
    func_02055b58((Unk_020553f8_Res *)b, (void *)c, d, e, f);
    func_02055a9c(a);
}

void Unk_020dbe4c::func_02055a9c(u32 a) {
    func_02103e40(a, unk_18);
}

void Unk_020dbe4c::func_02055a8c(u32 a) {
    func_02103d64(a, unk_18);
}

Unk_020dbe14::Unk_020dbe14() {
}

Unk_020dbe14::~Unk_020dbe14() {
}

extern "C" void func_020559d8(void) {
BOOL c; s32 i; s32 j;
    for (i = 0; i < 0x96; i++) { data_021c5574[i].unk_00 = NULL; data_021c5574[i].unk_04 = 0x4e554c4c; }
    for (j = 0; j < 0x3c; j++) { data_021c5394[j].unk_00 = NULL; data_021c5394[j].unk_04 = 0x4e554c4c; }
    data_021c5390 = 0; data_021c538c = 0;
    c = FALSE;
    if (data_020e416c == 0) c = TRUE;
    func_0205c1f4(c ? 0x7800 : 0x10400, 0);
}

extern "C" void func_020559d0(void) {
    func_0205c1d8();
}

extern "C" u32 func_0205598c(u32 key) {
    s32 i;
    s32 n;
    if (key == 0x4e554c4c) {
        return 0;
    }
    i = 0;
    n = data_021c5390;
    for (; i < n; i++) {
        if (key == data_021c5574[i].unk_04) {
            return (u32)data_021c5574[i].unk_00;
        }
    }
    return 0;
}

extern "C" u32 func_02055954(u32 key) {
    s32 i;
    if (key == 0x4e554c4c) {
        return 0;
    }
    for (i = 0; i < 0x3c; i++) {
        if (key == data_021c5394[i].unk_04) {
            return (u32)data_021c5394[i].unk_00;
        }
    }
    return 0;
}

extern "C" void *func_02055928(u32 *a, void *heap) {
    void *p = func_020e8608(heap, *a);
    if (p == NULL) {
        return NULL;
    }
    MI_CpuCopy8(a, p, *a);
    return p;
}

extern "C" void *func_020558bc(u32 *a, u32 key) {
    void *heap = data_021c6214;
    void *r;
    if (key == 0x4e554c4c || (r = (void *)func_0205598c(key)) == NULL) {
        if (data_021c5390 >= 0x96) {
            func_0206d49c();
            return NULL;
        }
        r = func_02055928(a, heap);
        if (r == NULL) {
            func_0206d49c();
            return NULL;
        }
        s32 n = data_021c5390;
        data_021c5574[n].unk_00 = r;
        data_021c5574[n].unk_04 = key;
        data_021c5390++;
    }
    return r;
}

extern "C" void *func_0205588c(void *a, void *heap) {
    u32 n = _ZN12Unk_02056fd813func_0205710cEv(a);
    void *p = func_020e8608(heap, n);
    if (p == NULL) {
        return NULL;
    }
    MI_CpuCopy8(a, p, n);
    return p;
}

extern "C" void *func_02055820(void *a, u32 key) {
    void *heap = data_021c6214;
    void *r;
    if (key == 0x4e554c4c || (r = (void *)func_02055954(key)) == NULL) {
        if (data_021c538c >= 0x3c) {
            func_0206d49c();
            return NULL;
        }
        r = func_0205588c(a, heap);
        if (r == NULL) {
            func_0206d49c();
            return NULL;
        }
        s32 n = data_021c538c;
        data_021c5394[n].unk_00 = r;
        data_021c5394[n].unk_04 = key;
        data_021c538c++;
    }
    return r;
}

extern "C" BOOL func_02055800(Unk_02055744_Obj *a, u32 y, u32 z) {
    NNS_G3dTexSetTexKey(a, y, z);
    DC_FlushRange(a, a->unk_04);
    func_02103c40(a, 1);
    return TRUE;
}

extern "C" BOOL func_020557a0(Unk_02055744_Obj *a, u32 b) {
    u32 y = func_02103d3c(a);
    u32 z = func_02103d30(a);
    if (b != 0) {
        y = ((Unk_020dbe24 *)b)->func_02055334(y);
        z = ((Unk_020dbe24 *)b)->func_02055328(z);
    } else {
        y = data_0213bc10(y, 0, 0);
        z = data_0213bc10(z, 1, 0);
    }
    return func_02055800(a, y, z);
}

extern "C" BOOL func_02055780(Unk_02055744_Obj *a, u32 x) {
    func_02103c2c(a, x);
    DC_FlushRange(a, a->unk_04);
    func_02103bc0(a, 1);
    return TRUE;
}

extern "C" BOOL func_02055744(Unk_02055744_Obj *a, u32 b) {
    u32 x = func_02103c34(a);
    if (b != 0) {
        x = ((Unk_020dbe24 *)b)->func_02055300(x);
    } else {
        x = data_0213bc18(x, 0, 0);
    }
    return func_02055780(a, x);
}

extern "C" BOOL func_02055724(Unk_02055744_Obj *a, u32 b) {
    BOOL r = func_020557a0(a, b);
    return r | func_02055744(a, b);
}

Unk_020dbe34::Unk_020dbe34() {
    func_0205568c();
}

Unk_020dbe34::~Unk_020dbe34() {
}

void Unk_020dbe34::func_0205568c() {
    func_02103f98(unk_08, NULL);
    unk_5c = NULL;
    unk_60 = 0;
    MTX_Identity43_(unk_64);
    unk_04 = 0;
    unk_94 = 0;
}

void Unk_020dbe34::func_0205562c() {
    func_02103f98(unk_08, unk_5c);
    Unk_0205562c_Blk *b = (Unk_0205562c_Blk *)((u8 *)unk_5c + unk_5c->unk_08);
    s32 i;
    for (i = 0; i < unk_5c->unk_18; i++) {
        u8 *ent = (u8 *)&b->unk_04 + b->unk_04.unk_06;
        u16 sz = *(u16 *)ent;
        ent += sz * i;
        u32 *p = (u32 *)((u8 *)b + *(u32 *)(ent + 4));
        if ((p[3] & 0xf) != 0) {
            p[3] &= ~0xf;
            p[3] |= func_02064f84();
        }
    }
    func_0210622c(unk_5c, 0, 0x400);
}

BOOL Unk_020dbe34::func_02055600(Unk_020553f8_Res *a, u32 b) {
    unk_5c = a;
    unk_60 = b;
    if (unk_60 != 0) {
        func_021039ec(unk_5c, unk_60);
        func_02103830(unk_5c, unk_60);
    }
    func_0205562c();
    return TRUE;
}

BOOL Unk_020dbe34::func_020555ec(Unk_020553f8_Res *a, u32 b) {
    unk_5c = a;
    unk_60 = b;
    func_0205562c();
    return TRUE;
}

BOOL Unk_020dbe34::func_020555dc() {
    func_0205568c();
    return TRUE;
}

void Unk_020dbe34::func_02055550(s32 *p) {
    s32 save;
    s32 v[3];
    u8 *hdr = (u8 *)unk_5c;
    u8 *cmd = hdr + *(u32 *)(hdr + 4);
    s32 lim = *(s32 *)(hdr + 0x1c);
    if (lim == 0x1000) {
        func_020554d0(p);
    } else {
        if (p == NULL) {
            v[0] = v[1] = v[2] = lim;
        } else {
            v[0] = func_01ffcb0c(p[0], lim);
            v[1] = func_01ffcb0c(p[1], lim);
            v[2] = func_01ffcb0c(p[2], lim);
        }
        func_020554d0(v);
    }
    for (;;) {
        switch (*cmd & 0x1f) {
        case 1:
            return;
        case 4:
            save = cmd[1];
            break;
        case 5:
            func_02105b3c(unk_5c, save, cmd[1], 1);
            break;
        }
        cmd += func_02105d50(cmd);
    }
}

void Unk_020dbe34::func_0205553c(s32 *p) {
    func_020554d0(p);
    func_020554c4();
}

void Unk_020dbe34::func_02055524() {
    *(u32 *)unk_08 |= 2;
    func_01ff8ad4(unk_08);
}

void Unk_020dbe34::func_020554d0(s32 *p) {
    s32 v[3];
    MI_Copy36B(unk_64, data_027e0184);
    data_027e0148[0x7c / 4] &= ~0xa4;
    func_021042d0(unk_88);
    if (p == NULL) {
        v[0] = v[1] = v[2] = 0x1000;
        func_021042a8(v);
    } else {
        func_021042a8(p);
    }
    func_021042f8();
}

void Unk_020dbe34::func_020554c4() {
    func_01ff8ad4(unk_08);
}

void *Unk_020dbe34::func_020554c0() {
    return unk_08;
}

void Unk_020dbe34::func_020554a0(s32 a, s32 b, s32 c, s32 d, s32 e) {
    func_02103d50(unk_08, a, e, b, c);
    unk_34 = d;
}

void Unk_020dbe34::func_02055488(s32 a, s32 b) {
    func_02103d48(unk_08, a);
    unk_34 = b;
}

void Unk_020dbe34::func_02055440(u32 v) {
    s32 i;
    Unk_0205562c_Blk *b;
    b = (Unk_0205562c_Blk *)((u8 *)unk_5c + unk_5c->unk_08);
    i = 0;
    u32 sh = v << 24;
    for (; i < unk_5c->unk_18; i++) {
        u8 *ent = (u8 *)&b->unk_04 + b->unk_04.unk_06;
        u16 sz = *(u16 *)ent;
        ent += sz * i;
        u32 *p = (u32 *)((u8 *)b + *(u32 *)(ent + 4));
        p[3] &= 0xc0ffffff;
        p[3] |= sh;
    }
}

void Unk_020dbe34::func_020553f8(u32 v) {
    s32 i;
    Unk_0205562c_Blk *b;
    b = (Unk_0205562c_Blk *)((u8 *)unk_5c + unk_5c->unk_08);
    i = 0;
    u32 sh = v << 16;
    for (; i < unk_5c->unk_18; i++) {
        u8 *ent = (u8 *)&b->unk_04 + b->unk_04.unk_06;
        u16 sz = *(u16 *)ent;
        ent += sz * i;
        u32 *p = (u32 *)((u8 *)b + *(u32 *)(ent + 4));
        p[3] &= 0xffe0ffff;
        p[3] |= sh;
    }
}

extern "C" BOOL func_020553cc(u8 *p, void *a, s32 b) {
    if (!func_02105dcc(p + 8, a, 0, b)) {
        return FALSE;
    }
    MTX_Concat43(a, func_021041e8(), a);
    return TRUE;
}

Unk_020dbe24::Unk_020dbe24() {
    func_02055200();
}

Unk_020dbe24::~Unk_020dbe24() {}

void Unk_020dbe24::func_02055340(void *a, void *b, void *c) {
    if (a != NULL) {
        unk_04 = data_0213bc10((u32)a, 0, 0);
    }
    if (b != NULL) {
        unk_08 = data_0213bc10((u32)b, 1, 0);
    }
    if (c != NULL) {
        unk_0c = data_0213bc18((u32)c, 0, 0);
    }
    unk_10 = 1;
}

u32 Unk_020dbe24::func_02055334(u32 a) {
    return func_02055314(a, unk_04);
}

u32 Unk_020dbe24::func_02055328(u32 a) {
    return func_02055314(a, unk_08);
}

u32 Unk_020dbe24::func_02055314(u32 a, u32 b) {
    return (b & 0x8000ffff) | ((a >> 4) << 16);
}

u32 Unk_020dbe24::func_02055300(u32 a) {
    return (unk_0c & 0xffff) | ((a >> 3) << 16);
}

u32 Unk_020dbe24::func_020552ec(u32 a, u32 b) {
    return func_02055298(b, unk_04, a);
}

u32 Unk_020dbe24::func_020552d8(u32 a, u32 b) {
    return func_02055298(b, unk_08, a);
}

u32 Unk_020dbe24::func_02055298(u32 a, u32 b, u32 c) {
    u32 v = (b & 0xffff) << 3;
    v += ((c & 0x7fff0000) >> 16) << 4;
    u32 top = (c & 0x80000000) >> 31;
    top <<= 31;
    u32 r = (a >> 4) << 16;
    return top | (r | ((v >> 3) & 0xffff));
}

u32 Unk_020dbe24::func_0205526c(u32 a, u32 b) {
    u32 v = (unk_0c & 0xffff) << 3;
    v += ((a & 0xffff0000) >> 16) << 3;
    u32 r = (b >> 3) << 16;
    return r | ((v >> 3) & 0xffff);
}

void Unk_020dbe24::func_02055210(void *p) {
    s32 a = func_02103d3c(p);
    s32 b = func_02103d30(p);
    s32 c = func_02103c34(p);
    s32 x = func_02055334(a);
    s32 y = func_02055328(b);
    s32 z = func_02055300(c);
    NNS_G3dTexSetTexKey(p, x, y);
    func_02103c2c(p, z);
    unk_10 = 1;
}

void Unk_020dbe24::func_02055200(void) {
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
}

