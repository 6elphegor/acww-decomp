#include "types.h"


struct Unk_02006d14_Pair { u32 unk_00; u32 unk_04; };
struct Unk_02009f68_Bytes { u8 unk_0; u8 unk_1; u8 unk_2; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; u8 pad_0a[2]; union { Unk_02009f68_Bytes unk_0c; u8 unk_0c_raw[8]; }; };
struct Unk_0200a0a0_Bytes { u8 unk_0; u8 unk_1; u8 unk_2; u8 pad_3[13]; };
struct Unk_0200a63c_St { u8 unk_0; u8 unk_1[2]; u8 unk_3; u8 unk_4; };
struct Unk_0200a728_St { u16 unk_0; u8 unk_2; u8 unk_3; u8 unk_4; u8 pad_5[15]; };
struct Unk_02006d14_Trip { u32 unk_0; u32 unk_4; u32 unk_8; };
struct Unk_02006d14_St7d0 {
    u8 unk_0; u8 unk_1; u8 unk_2; u8 unk_3;
    u8 pad_4[4];
    u8 unk_8; u8 unk_9; u8 unk_a;
};
struct Unk_0200a6d4_St { u8 pad[16]; };
struct Unk_0200a050_Obj { u8 pad[12]; };
struct Unk_02006d14_Ptr { u32 unk_0; u32 unk_4; u32 unk_8; };
struct Unk_02006d14_Obj2cc { u8 pad[8]; u32 unk_8; };
struct Unk_02006d14_Blk30 { u32 w[12]; };
struct Unk_02006d14_Obj59c { u8 pad[4]; };
struct Unk_02006d14_Objec { u8 pad[4]; };

struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_02006d14_Base0 {
    u8 pad_000[0xc4];
    Unk_02006d14_Trip unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14 : Unk_02006d14_Base0, Unk_02006d14_Objec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_02006d14_Ptr* unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u8 unk_2cc[8];
    struct { u32 lo : 12; u32 mid : 16; u32 hi : 4; } unk_2d4;
    u8 pad_2d8[4];
    u32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[4];
    u8 pad_5a0[0x700 - 0x5a0];
    u32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02006d14_St7d0 unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[8];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    u8 unk_820[12];
    u32 unk_82c, unk_830, unk_834;
    u8 pad_838[0x8e8 - 0x838];
    u8 unk_8e8;
    u8 pad_8e9[3];
    Unk_0200a63c_St unk_8ec;
    u8 pad_8f1[0xc80 - 0x8f1];
    s16 unk_c80;

    void func_02009f68(s16 v);
    void func_02009fa8(Unk_02006d14_Item* item, u32 v);
    void func_0200a0ac();
    void func_0200a114();
    void func_0200a198();
    void func_0200a1bc();
    void func_0200a390();
    void func_0200a450();
    void func_0200a484(s16 v);
    void func_0200a4f4(Unk_02006d14_Item* item, u32 v);
    s32 func_0200a684(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y);
    s32 func_0200a6d4(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void func_0200a73c();
    void func_0200a7b4();
    void func_0200a82c(u8* state, u8 flag);
    s32 func_0200a050(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);

    void func_0200ec30(u32 id);
    void func_0200ec1c(u32 id);
    void func_0200ecdc(u32 id);
    BOOL func_0200ec44(u32 id);
    u8 func_02007c08(u32 id);
    s32 func_0200f5b0();
    void func_02010358(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_02010914();
    void func_0201071c();
    void func_0201065c();
    void func_0200abc8();
    void func_0200ad24();
    void func_0200e7f4();
    void func_0200f004(u32 v);
    void func_0200f4c0(u32 v);
    void func_0200eee4(Unk_02006d14_Pair* p);
    void func_0200ce98(u32 a, u32 b, s32 c);
    s32 func_0200e248(Unk_0200a050_Obj* o);
    void func_0203e488(Unk_02006d14_Objec* p);
    void func_0203e47c(Unk_02006d14_Objec* p);
};

struct Unk_02006d14_Data { u8 pad_00[0x64]; u32 unk_64; };

static inline BOOL Unk_0200a114_IsZero(u8* p)
{
    if (*p == 0) return TRUE;
    return FALSE;
}

extern "C" {
    void func_0200a034(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b);
    void func_0200a044(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
    void func_0200a0a0(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
    void func_0200a63c(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b);
    void func_0200a660(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
    void func_0200a728(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
    extern Unk_02006d14_Data* data_020cbb18;
    extern u8 data_020e416c[];
    extern u8 data_020d6ee4[];
    extern u8 data_020d6ef4[];
    extern void* data_021c47c4;
    BOOL func_020729bc(Unk_02006d14_Data* p, u32 v);
    void func_0200e2e0(Unk_0200a050_Obj* o);
    void func_0200e2c0(Unk_0200a050_Obj* o, u32 a, u32 b, s16 c);
    void func_0200e2d0(Unk_0200a050_Obj* o);
    void func_02045460(Unk_02006d14_Pair* p, u32 v);
    void func_02045570(Unk_02006d14_Pair* p, u32 v);
    BOOL func_020565e8(void* p, u32 v);
    BOOL func_02056654(void* p);
    void func_0205e1a0(void* p, u32 a, u32 b, u32 c);
    void func_020a710c(void* p, void* q);
    void func_0204ed8c(void* p, u32 a, u32 b);
    BOOL func_0204b2d4(u16* p);
    s32 func_0204b25c(u16* p);
    void* func_0204eba0(void* a, void* b, u32 c);
    u16 func_0207694c(u8* p);
    void func_02076964(u8* p, u16 v);
    void func_02034d70(u32 a);
    void func_02034dd0(u32 a, u32 b, u32 c);
    void func_02034e10(u32 a, u32 b, u32 c, u32 d);
    BOOL func_0203d820();
    BOOL func_0203d7ec();
    void func_0203d7f8();
    void func_0203a598();
    void func_0203a844();
    BOOL func_02095e8c();
    void func_02099124(u16* p);
    BOOL func_0206e780(u32 v);
    BOOL func_0206ec6c();
    BOOL func_0206ed18();
    s32 func_02042ba8(u32 a, u32 b);
}

void Unk_02006d14::func_02009f68(s16 v)
{
    Unk_02006d14_Pair p;
    u8 b;
    p.unk_00 = 0;
    p.unk_04 = 0;
    func_0200a034((Unk_02009f68_Bytes*)&unk_8ec, &p, &b);
    Unk_02006d14_Pair q;
    q = p;
    func_0200a050(&q, b, 6, v);
}

void Unk_02006d14::func_02009fa8(Unk_02006d14_Item* item, u32 v)
{
    Unk_02009f68_Bytes* it = &item->unk_0c;
    u32 a = it->unk_1;
    u32 c = it->unk_2;
    u8 b = it->unk_0;
    Unk_02006d14_St7d0* s = &unk_7d0;
    s->unk_1 = 0;
    s->unk_2 = a;
    s->unk_3 = c;
    s->unk_0 = b;
    Unk_02006d14_Pair p;
    p.unk_00 = a;
    p.unk_04 = c;
    func_0200a044((Unk_02009f68_Bytes*)&unk_8ec, &p, b);
    unk_82c = 0x1000;
    unk_830 = 0x1000;
    unk_834 = 0x1000;
    func_0200ecdc(0x4f);
    func_02010358(0x18, 3, 0);
    if (func_0200f5b0() == 4) {
        func_0205e1a0(unk_59c, 6, 3, 1);
    }
}

s32 Unk_02006d14::func_0200a050(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y)
{
    Unk_0200a050_Obj o;
    func_0200e2e0(&o);
    func_0200e2c0(&o, 0x1b, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a0a0_Bytes s;
    func_0200a0a0(&s, &q, b);
    s32 r = func_0200e248(&o);
    func_0200e2d0(&o);
    return r;
}

extern "C" void func_0200a034(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b)
{
    out->unk_00 = src->unk_1;
    out->unk_04 = src->unk_2;
    *b = src->unk_0;
}

extern "C" void func_0200a044(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b)
{
    dst->unk_1 = p->unk_00;
    dst->unk_2 = p->unk_04;
    dst->unk_0 = b;
}

extern "C" void func_0200a0a0(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b)
{
    dst->unk_1 = p->unk_00;
    dst->unk_2 = p->unk_04;
    dst->unk_0 = b;
}

void Unk_02006d14::func_0200a0ac()
{
    func_02010914();
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0201071c();
        func_0200a390();
        func_0200a1bc();
    } else {
        Unk_02006d14_St7d0* s = &unk_7d0;
        u32 c = s->unk_3;
        u32 a = s->unk_2;
        Unk_02006d14_Pair p;
        p.unk_00 = a;
        p.unk_04 = c;
        func_0200eee4(&p);
        func_0201071c();
        func_0200a390();
        func_0200a198();
    }
}

void Unk_02006d14::func_0200a114()
{
    func_0200ec30(0xd);
    Unk_02006d14_St7d0* s = &unk_7d0;
    u32 b = s->unk_2;
    u32 c = s->unk_3;
    u8 flag = s->unk_0;
    if (flag) {
        Unk_02006d14_Pair p;
        p.unk_00 = b;
        p.unk_04 = c;
        func_02045460(&p, 0);
    } else {
        Unk_02006d14_Pair p;
        p.unk_00 = b;
        p.unk_04 = c;
        func_02045570(&p, 0);
    }
    func_0200ec1c(0x1c);
    if (Unk_0200a114_IsZero(data_020e416c)) {
        func_0200ecdc(0x5d);
    }
    unk_7f8 = func_02007c08(unk_7ec);
    func_0200ec1c(0x12);
}

void Unk_02006d14::func_0200a198()
{
    if (func_020565e8(unk_2cc, 6)) {
        func_0200a114();
    }
}

void Unk_02006d14::func_0200a1bc()
{
    Unk_02006d14_St7d0* s = &unk_7d0;
    u8* state = &s->unk_1;
    struct { u32 pad; Unk_02006d14_Pair p[3]; u32 pad2; } l;
    switch (*state) {
    case 0:
        if (func_020565e8(unk_2cc, 1)) {
            func_0203a598();
        }
        if (func_020565e8(unk_2cc, 6)) {
            u32 b = s->unk_2;
            u32 c = s->unk_3;
            u8 flag = s->unk_0;
            if (flag) {
                l.p[0].unk_00 = b;
                l.p[0].unk_04 = c;
                func_02045460(&l.p[0], 0);
            } else {
                l.p[1].unk_00 = b;
                l.p[1].unk_04 = c;
                func_02045570(&l.p[1], 0);
            }
            func_0200ec1c(0x1c);
            if (Unk_0200a114_IsZero(data_020e416c)) {
                func_0200ecdc(0x5d);
            }
            func_0200ec30(0xd);
        }
        if (unk_2d4.mid >= 6 && func_0203d820()) {
            *state = 1;
            func_0203e488(this);
            func_0200ec30(0x11);
            func_020a710c((u8*)this + 0xec, data_020d6ef4);
            BOOL r = FALSE;
            u16 h = unk_81c;
            if (h >= 0x137b && h <= 0x137b) r = TRUE;
            if (r) {
                unk_10a = 0x23;
            } else if (h >= 0x136a && h <= 0x136a) {
                unk_10a = 0x21;
            } else {
                unk_10a = 0x25;
            }
            unk_128->unk_8 = 1;
            func_02034d70(0x12);
            func_02034dd0(0xc, 0, 0x10);
            func_02034e10(0xd, 0x39, 0x7f, 1);
            unk_818 = 10;
        }
        break;
    case 1:
        if (unk_128 && unk_128->unk_4) {
            *state = 2;
        }
        break;
    case 2:
        if (unk_128 && !unk_128->unk_4) {
            func_0203e47c(this);
            func_0200ec1c(0x11);
            u8 flag = s->unk_0;
            if (flag == 0) {
                func_0203d7f8();
            }
            func_0203a844();
            u32 b = s->unk_2;
            u32 c = s->unk_3;
            unk_7f8 = func_02007c08(unk_7ec);
            l.p[2].unk_00 = b;
            l.p[2].unk_04 = c;
            func_0200a050(&l.p[2], flag, 6, -1);
        }
        break;
    }
}

void Unk_02006d14::func_0200a390()
{
    volatile u32 t[3];
    Unk_02006d14_Trip* pt = &unk_c4;
    t[0] = pt->unk_0;
    t[1] = pt->unk_4;
    t[2] = pt->unk_8;
    s16 h = unk_d0;
    Unk_02006d14_Blk a = *(Unk_02006d14_Blk*)((u8*)this + 0x294);
    Unk_02006d14_Blk b = *(Unk_02006d14_Blk*)((u8*)this + 0x694);
    func_0200e7f4();
    func_0200f004(0x1000);
    unk_c4.unk_0 = t[0];
    unk_c4.unk_4 = t[1];
    unk_c4.unk_8 = t[2];
    unk_d0 = h;
    *(Unk_02006d14_Blk*)((u8*)this + 0x294) = a;
    *(Unk_02006d14_Blk*)((u8*)this + 0x694) = b;
    if (unk_2d4.mid >= 6) {
        func_0200f4c0(0x400);
    }
}

void Unk_02006d14::func_0200a450()
{
    if (!func_020729bc(data_020cbb18, unk_7fc)) {
        if (func_0200ec44(0x1c)) {
            func_0200a114();
        }
    }
}

void Unk_02006d14::func_0200a484(s16 v)
{
    if (unk_8e8 != 0) {
        unk_8e8++;
    } else if (unk_7ec == 0x1a) {
        unk_c80 = v;
    } else {
        Unk_02006d14_Pair p;
        p.unk_00 = 0;
        p.unk_04 = 0;
        u16 hh;
        u8 bb;
        func_0200a63c(&unk_8ec, &p, &hh, &bb);
        Unk_02006d14_Pair q;
        q = p;
        func_0200a684(&q, hh, bb, 6, v);
    }
}

void Unk_02006d14::func_0200a4f4(Unk_02006d14_Item* item, u32 v)
{
    u8* it = item->unk_0c_raw;
    u32 a = it[2];
    u32 c = it[3];
    u16 g[2];
    g[0] = *(u16*)it;
    u8 d = it[4];
    Unk_02006d14_St7d0* s = &unk_7d0;
    s->unk_1 = 0;
    s->unk_2 = a;
    s->unk_3 = c;
    s->unk_0 = d;
    func_0204ed8c(unk_820, a, c);
    unk_82c = 0x1000;
    unk_830 = 0x1000;
    unk_834 = 0x1000;
    BOOL r;
    if (func_0204b2d4(&g[0])) {
        g[1] = 0xfff1;
        s32 x = func_0204b25c(&g[0]);
        r = x == func_0204b25c(&g[1]);
    } else {
        r = g[0] == 0xfff1;
    }
    if (r) {
        u16* pp = (u16*)func_0204eba0(data_021c47c4, unk_820, 0);
        unk_81e = *pp;
        unk_81c = unk_81e;
    } else {
        unk_81e = g[0];
        unk_81c = unk_81e;
    }
    u16 hv = unk_81c;
    Unk_02006d14_Pair p;
    p.unk_00 = a;
    p.unk_04 = c;
    func_0200a660(&unk_8ec, &p, hv, d);
    func_02010358(0x17, 3, 0);
    if (func_0200f5b0() == 4) {
        func_0205e1a0(unk_59c, 0xd, 3, 1);
    }
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_02034dd0(0x12, 0xf, 0);
    }
    func_0200ec30(0x1c);
}

extern "C" void func_0200a63c(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b)
{
    out->unk_00 = s->unk_3;
    out->unk_04 = s->unk_4;
    *h = func_0207694c(s->unk_1);
    *b = s->unk_0;
}

extern "C" void func_0200a660(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b)
{
    s->unk_3 = p->unk_00;
    s->unk_4 = p->unk_04;
    func_02076964(s->unk_1, h);
    s->unk_0 = b;
}

s32 Unk_02006d14::func_0200a684(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y)
{
    Unk_0200a050_Obj o;
    func_0200e2e0(&o);
    func_0200e2c0(&o, 0x1a, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a728_St s;
    func_0200a728(&s, &q, h, b);
    s32 r = func_0200e248(&o);
    func_0200e2d0(&o);
    return r;
}

s32 Unk_02006d14::func_0200a6d4(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y)
{
    Unk_0200a050_Obj o;
    func_0200e2e0(&o);
    func_0200e2c0(&o, 0x1a, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a6d4_St s;
    func_0200a728((Unk_0200a728_St*)&s, &q, 0xfff1, b);
    s32 r = func_0200e248(&o);
    func_0200e2d0(&o);
    return r;
}

extern "C" void func_0200a728(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b)
{
    s->unk_2 = p->unk_00;
    s->unk_3 = p->unk_04;
    s->unk_0 = h;
    s->unk_4 = b;
}

void Unk_02006d14::func_0200a73c()
{
    func_0200ad24();
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0201071c();
        func_0201065c();
        func_0200abc8();
        Unk_02006d14_St7d0* s = &unk_7d0;
        func_0200a82c(&s->unk_8, s->unk_0);
    } else {
        Unk_02006d14_St7d0* s = &unk_7d0;
        u32 c = s->unk_a;
        u32 a = s->unk_9;
        Unk_02006d14_Pair p;
        p.unk_00 = a;
        p.unk_04 = c;
        func_0200eee4(&p);
        func_0201071c();
        func_0200abc8();
        func_0200a7b4();
    }
}

void Unk_02006d14::func_0200a7b4()
{
    if (func_02056654(unk_2cc)) {
        if (unk_700 == 0x16 || unk_700 == 0x18) {
            func_020103b4(0x6c, 3, 0);
        }
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200ec1c(0x12);
        func_0200ec1c(0xd);
        if (func_0200f5b0() == 4) {
            func_0205e1a0(unk_59c, 0, 9, 0);
        }
    }
}

void Unk_02006d14::func_0200a82c(u8* state, u8 flag)
{
    switch (*state) {
    case 0:
        if (!func_02056654(unk_2cc)) break;
        if (unk_81c == 0x1520) {
            if (func_02095e8c()) {
                *state = 6;
                break;
            }
            if (!func_0203d820()) break;
            func_020103b4(0x6c, 0, 0);
            s32 r = func_0200f5b0();
            if (r == 4) {
                func_0205e1a0(unk_59c, 0, 9, 0);
            } else if (r == 3) {
                func_0205e1a0(unk_59c, 0x13, 3, 0);
            }
            *state = 7;
            func_0203e488(this);
            func_0200ec30(0x11);
            func_020a710c((u8*)this + 0xec, data_020d6ee4);
            unk_10a = 0x12;
            unk_128->unk_8 = 1;
        } else if (flag) {
            if (!func_0203d7ec() && !func_0203d820()) break;
            func_020103b4(0x6c, 0, 0);
            s32 r = func_0200f5b0();
            if (r == 4) {
                func_0205e1a0(unk_59c, 0, 9, 0);
            } else if (r == 3) {
                func_0205e1a0(unk_59c, 0x13, 3, 0);
            }
            *state = 1;
            func_0203e488(this);
            func_0200ec30(0x11);
            func_020a710c((u8*)this + 0xec, data_020d6ef4);
            unk_10a = 2;
            unk_128->unk_8 = 1;
        } else {
            u16 v[2];
            v[1] = unk_81c;
            func_02099124(&v[1]);
            *state = 6;
        }
        break;
    case 1:
        if (!unk_128) break;
        if (!unk_128->unk_4) break;
        *state = 2;
        unk_818 = 3;
        break;
    case 2:
        if (unk_818 >= 15) {
            *state = 3;
        } else {
            if (!unk_128) break;
            if (unk_128->unk_4) break;
            if (unk_818 == 5) {
                if (!func_0206e780(unk_81c)) break;
                unk_818 = 6;
                break;
            } else if (unk_818 != 6) {
                break;
            }
            if (!func_0206ec6c()) break;
            unk_818 = 15;
            unk_2dc = 0x1000;
            if (func_0206ed18()) {
                *state = 6;
                func_0203e47c(this);
                func_0200ec1c(0x11);
                func_0203d7f8();
                break;
            }
            *state = 3;
        }
    case 3:
        if (unk_80c != -1) break;
        unk_80c = func_02042ba8(unk_7fc, unk_81c);
        if (unk_80c == -1) break;
        func_020103b4(0, 6, 6);
        *state = 4;
        if (func_0200f5b0() != 4) break;
        func_0205e1a0(unk_59c, 0, 9, 0);
        break;
    case 4:
        if (unk_80c != -1) break;
        *state = 5;
    case 5:
        if (!unk_128) break;
        if (unk_128->unk_4) break;
        func_0203e47c(this);
        func_0200ec1c(0x11);
        func_0203d7f8();
        *state = 6;
        func_020103b4(0, 6, 6);
        if (func_0200f5b0() == 4) {
            func_0205e1a0(unk_59c, 0, 9, 0);
        }
        break;
    case 6:
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200ce98(3, 1, -1);
        func_0200ec1c(0xd);
        unk_818 = 15;
        break;
    case 7:
        if (!unk_128) break;
        if (!unk_128->unk_4) break;
        *state = 8;
        break;
    case 8:
        if (!unk_128) break;
        if (unk_128->unk_4) break;
        *state = 3;
        if (unk_80c != -1) break;
        unk_80c = func_02042ba8(unk_7fc, unk_81c);
        if (unk_80c == -1) break;
        *state = 5;
        func_020103b4(0, 6, 6);
        if (func_0200f5b0() == 4) {
            func_0205e1a0(unk_59c, 0, 9, 0);
        }
        break;
    }
}
