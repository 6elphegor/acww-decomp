#include "types.h"

struct Unk_0200b144_Pos { s32 x; s32 y; };
struct Unk_0200b244_Out { u16 unk_00; u16 pad_02; s32 unk_04; u8 unk_08; u8 unk_09; u8 unk_0a; };
struct Unk_0200b144_Src { u8 unk_00; u8 unk_01; u8 unk_02; s8 unk_03; u8 unk_04; u8 unk_05; };

struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; u32 unk_08; Unk_0200b244_Out unk_0c; };
struct Unk_02006d14_V3 { s32 x; s32 y; s32 z; };
struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_02006d14_Vec { s32 x, y, z; };
struct Unk_02006d14_Sub7d0 {
    u8 unk_00;
    u8 pad_01[3];
    union { s32 s; struct { u8 unk_04, unk_05, unk_06, unk_07; } b; } unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
};

struct Unk_0203d820_Ptr { u32 unk_00; u32 unk_04; u32 unk_08; };
struct Unk_02006d14_A {
    virtual void vfunc_00();
    u8 pad_04[0xc4 - 4];
    Unk_02006d14_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14_B {
    virtual void vfunc_00();
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_0203d820_Ptr* unk_128;
    u8 pad_12c[0x294 - 0x12c];
    Unk_02006d14_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    u32 unk_2d4;
    u8 pad_2d8[0x694 - 0x2d8];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
};

struct Unk_02006d14 : Unk_02006d14_A, Unk_02006d14_B {
    u32 unk_700;
    u8 pad_704[0x7d0-0x704];
    Unk_02006d14_Sub7d0 unk_7d0;
    u8 pad_7dc[0x7ec-0x7dc];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8-0x7f0];
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x810-0x800];
    u32 unk_810;
    u8 pad_814[0x81c-0x814];
    u16 unk_81c;
    u16 unk_81e;
    u32 unk_820;
    u32 unk_824;
    u32 unk_828;
    u32 unk_82c;
    u32 unk_830;
    u32 unk_834;
    u8 pad_838[0x8e8-0x838];
    u8 unk_8e8;
    void func_02010914();
    void func_0200ecdc(u32 id);
    void func_0200ec1c(u32 id);
    void func_0200ec30(u32 id);
    void func_0200b264(Unk_02006d14_Item* item, u32 old);
    void func_0200add8(Unk_02006d14_Item* item, u32 old);
    void func_02010358(u32 a, u32 b, u32 c);
    s32 func_0200f5b0();

    void func_0200b2e0();
    void func_0200abc8();
    void func_0200b510();
    void func_0201071c();
    void func_0200eee4(Unk_0200b144_Pos* pos);
    u32 func_02007c08(u32 id);
    void func_0200ce98(u32 a, u32 b, s32 c);
    void func_0200a6d4(Unk_0200b144_Pos* pos, u32 a, u32 b, s32 c);
    void func_0200e7f4();
    void func_0200f004(u32 a);
    void func_0200ad24(Unk_02006d14_Item* item, u32 old);
    void func_0200ad58(Unk_02006d14_Item* item, u32 old);
    void func_0200ad64(s16 old);
    s32 func_0200b198(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d);
    s32 func_0200b1ec(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d);
};

extern "C" {
extern void* data_020cbb18;
extern u8 data_020d6ef4[];
extern u8 data_020d6ee4[];
BOOL func_020729bc(void* p, u32 v);
BOOL func_0203d820();
void func_0203d7f8();
void func_0204ed8c(void* p, u32 a, u32 b);
u16* func_0204eba0(void* p, void* q, u32 z);
void* func_0209750c();
BOOL func_02098044(void* p, u32 v);
void func_0209801c(void* p, u32 v);
void func_02045460(Unk_0200b144_Pos* p, u32 z);
void func_02045570(Unk_0200b144_Pos* p, u32 z);
void func_0207870c(void* p);
void func_0205e1a0(void* p, u32 a, u32 b, u32 c);
extern void* data_021c47c4;
BOOL func_0204b2d4(void* p);
u32 func_0204b25c(void* p);
void func_0203e488(Unk_02006d14_A* a, Unk_02006d14_B* b);
void func_0203e47c(Unk_02006d14_A* a, Unk_02006d14_B* b);
void func_020a710c(void* p, void* q);
Unk_02006d14_V3* func_ov004_022344a4();
s32 func_02133150(s32 a, s32 b);
u32 func_020565e8(void* p, u32 id);
u16 func_0207694c(void* p);
void func_02076964(void* p, u32 v);
void func_0200e2e0(void* p);
void func_0200e2c0(void* p, u32 a, s32 b, s16 c);
s32 func_0200e248(void* self, void* p);
void func_0200e2d0(void* p);
void func_0200b170(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c);
}

extern "C" void func_0200b144(Unk_0200b144_Src* src, Unk_0200b144_Pos* pos, s8* a, u16* b, u8* c) {
    pos->x = src->unk_04;
    pos->y = src->unk_05;
    *a = src->unk_03;
    *b = func_0207694c(&src->unk_01);
    *c = src->unk_00;
}

extern "C" void func_0200b170(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c) {
    dst->unk_04 = pos->x;
    dst->unk_05 = pos->y;
    dst->unk_03 = a;
    func_02076964(&dst->unk_01, b);
    dst->unk_00 = c;
}

extern "C" void func_0200b244(Unk_0200b244_Out* out, Unk_0200b144_Pos* pos, s32 a, s32 b, u8 c) {
    out->unk_08 = pos->x;
    out->unk_09 = pos->y;
    out->unk_04 = a;
    out->unk_00 = b;
    out->unk_0a = c;
}

s32 Unk_02006d14::func_0200b198(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d) {
    u32 obj[7];
    Unk_0200b144_Pos p;
    s32 r;
    func_0200e2e0(obj);
    func_0200e2c0(obj, 0x19, c, d);
    p.x = pos->x;
    p.y = pos->y;
    func_0200b244((Unk_0200b244_Out*)&obj[3], &p, -1, a, b);
    r = func_0200e248(this, obj);
    func_0200e2d0(obj);
    return r;
}

s32 Unk_02006d14::func_0200b1ec(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d) {
    u32 obj[7];
    Unk_0200b144_Pos p;
    s32 r;
    func_0200e2e0(obj);
    func_0200e2c0(obj, 0x19, c, d);
    p.x = pos->x;
    p.y = pos->y;
    func_0200b244((Unk_0200b244_Out*)&obj[3], &p, a, 0xfff1, b);
    r = func_0200e248(this, obj);
    func_0200e2d0(obj);
    return r;
}

void Unk_02006d14::func_0200ad24(Unk_02006d14_Item* item, u32 old) {
    func_02010914();
    if (unk_700 == 0x16) {
        if (func_020565e8((u8*)this + 0x2cc, 9)) {
            func_0200ecdc(0x4f);
        }
    }
}

void Unk_02006d14::func_0200ad58(Unk_02006d14_Item* item, u32 old) {
    func_0200ec1c(0xd);
}

void Unk_02006d14::func_0200ad64(s16 old) {
    Unk_0200b144_Pos p;
    s8 a;
    u8 b;
    u16 c;
    Unk_0200b144_Pos q;
    if (unk_8e8 != 0) {
        unk_8e8 = unk_8e8 + 1;
    } else if (unk_7ec == 0) {
        p.x = 0;
        p.y = 0;
        func_0200b144((Unk_0200b144_Src*)((u8*)this + 0x8ec), &p, &a, &c, &b);
        if (a < 0) {
            q.x = p.x;
            q.y = p.y;
            func_0200b198(&q, c, b, 6, old);
        }
    }
}

void Unk_02006d14::func_0200b264(Unk_02006d14_Item* item, u32 old) {
    Unk_0200b144_Pos p;
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_0200b510();
        func_0201071c();
        func_0200b2e0();
    } else {
        func_02010914();
        Unk_02006d14_Sub7d0* q = &unk_7d0;
        Unk_0200b144_Pos t = { q->unk_04.b.unk_05, q->unk_04.b.unk_06 };
        p = t;
        func_0200eee4(&p);
        func_0201071c();
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200b2e0();
    }
}

void Unk_02006d14::func_0200b2e0() {
    Unk_02006d14_Sub7d0* s = &unk_7d0;
    u8* st = &s->unk_04.b.unk_04;
    struct { u32 pad; Unk_0200b144_Pos p[2]; } l;
    switch (*st) {
    case 1: {
        u8 a = s->unk_04.b.unk_05;
        u8 b = s->unk_04.b.unk_06;
        s32 v;
        u8 flag;
        if (func_020729bc(data_020cbb18, unk_7fc)) {
            v = unk_810;
        } else {
            v = s->unk_04.b.unk_07;
        }
        flag = 1;
        switch (v) {
        case 3:
            flag = 0;
        case 4: {
            l.p[0].x = a;
            l.p[0].y = b;
            func_0200b1ec(&l.p[0], -1, flag, 6, -1);
            break;
        }
        case 0x15:
            flag = 0;
        case 0x16: {
            l.p[1].x = a;
            l.p[1].y = b;
            func_0200a6d4(&l.p[1], flag, 6, -1);
            break;
        }
        }
        break;
    }
    case 2:
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200ce98(3, 1, -1);
        break;
    case 3:
        if (func_0203d820()) {
            *st = 4;
            func_0203e488(this, this);
            func_0200ec30(0x11);
            func_020a710c((u8*)this + 0xec, &data_020d6ef4);
            unk_10a = 0;
            unk_128->unk_08 = 1;
        }
        break;
    case 4:
        if (unk_128 != NULL) {
            if (unk_128->unk_04 != 0) {
                *st = 5;
            }
        }
        break;
    case 5:
        if (unk_128 != NULL) {
            if (unk_128->unk_04 == 0) {
                func_0203e47c(this, this);
                func_0200ec1c(0x11);
                func_0203d7f8();
                *st = 6;
            }
        }
        break;
    case 6:
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200ce98(3, 1, -1);
        func_0200ec1c(0xd);
        break;
    case 7:
        if (func_0203d820()) {
            *st = 8;
            func_0203e488(this, this);
            func_0200ec30(0x11);
            func_020a710c((u8*)this + 0xec, &data_020d6ee4);
            unk_10a = 1;
            unk_128->unk_08 = 1;
        }
        break;
    case 8:
        if (unk_128 != NULL) {
            if (unk_128->unk_04 != 0) {
                *st = 9;
            }
        }
        break;
    case 9:
        if (unk_128 != NULL) {
            if (unk_128->unk_04 == 0) {
                func_0203e47c(this, this);
                func_0200ec1c(0x11);
                func_0203d7f8();
                unk_7f8 = func_02007c08(unk_7ec);
                func_0200ce98(3, 1, -1);
            }
        }
        break;
    }
}

void Unk_02006d14::func_0200abc8() {
    Unk_02006d14_Sub7d0* s;
    Unk_02006d14_V3* r;
    s32 t;
    u32 v;
    s16 sh;
    if (unk_700 != 0x16) {
        unk_82c = 0;
        unk_830 = 0;
        unk_834 = 0;
        func_0200ec1c(0xd);
        return;
    }
    s = &unk_7d0;
    if (s->unk_04.s >= 0) {
        r = func_ov004_022344a4();
        if (r == NULL) {
            return;
        }
        unk_820 = r->x;
        unk_824 = r->y;
        unk_828 = r->z;
        func_0200ec30(0xd);
        unk_82c = 0x1000;
        unk_830 = 0x1000;
        unk_834 = 0x1000;
        s->unk_04.s = -1;
    }
    v = (unk_2d4 << 4) >> 16;
    if (v >= 6) {
        Unk_02006d14_Blk b1, b2;
        t = 0x1000 - func_02133150((v - 6) << 12, 12);
        if (t < 0) {
            t = 0;
            func_0200ec1c(0xd);
        }
        unk_82c = t;
        unk_830 = t;
        unk_834 = t;
        Unk_02006d14_V3 sv = { unk_c4.x, unk_c4.y, unk_c4.z };
        sh = unk_d0;
        b1 = unk_294;
        b2 = unk_694;
        func_0200e7f4();
        func_0200f004(t);
        unk_c4.x = sv.x;
        unk_c4.y = sv.y;
        unk_c4.z = sv.z;
        unk_d0 = sh;
        unk_294 = b1;
        unk_694 = b2;
    }
}

static inline BOOL Unk_0200add8_R1(u16* p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_IsFFF1(u16* p, u16* t) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *t = 0xfff1;
        r = func_0204b25c(p) == func_0204b25c(t) ? TRUE : FALSE;
    } else {
        r = *p == 0xfff1 ? TRUE : FALSE;
    }
    return r;
}

void Unk_02006d14::func_0200add8(Unk_02006d14_Item* item, u32 old) {
    Unk_0200b244_Out* o = &item->unk_0c;
    u8 x = o->unk_08;
    u8 y = o->unk_09;
    s32 z = o->unk_04;
    u16 t[4];
    t[0] = item->unk_0c.unk_00;
    u8 flag = o->unk_0a;
    if (z < 0) {
        BOOL r;
        func_0204ed8c((u8*)this + 0x820, x, y);
        unk_82c = 0x1000;
        unk_830 = 0x1000;
        unk_834 = 0x1000;
        r = Unk_0200add8_IsFFF1(&t[0], &t[2]);
        if (r) {
            unk_81e = *func_0204eba0(data_021c47c4, (u8*)this + 0x820, 0);
            unk_81c = unk_81e;
        } else {
            unk_81e = t[0];
            unk_81c = unk_81e;
        }
        if (func_020729bc(data_020cbb18, unk_7fc)) {
            void* q = func_0209750c();
            if (q != NULL) {
                if (Unk_0200add8_R1(&unk_81c, 0x137b, 0x137b)) {
                    if (func_02098044(q, 0x28) == 0) {
                        Unk_0200b144_Pos p;
                        func_0209801c(q, 0x28);
                        p.x = x;
                        p.y = y;
                        func_0200a6d4(&p, flag, 6, -1);
                        return;
                    }
                } else if (unk_81c >= 0x136a && unk_81c <= 0x136a) {
                    if (func_02098044(q, 0x27) == 0) {
                        Unk_0200b144_Pos p;
                        func_0209801c(q, 0x27);
                        p.x = x;
                        p.y = y;
                        func_0200a6d4(&p, flag, 6, -1);
                        return;
                    }
                }
            }
        }
        {
            BOOL s8 = 1;
            BOOL s7 = 1;
            BOOL s6 = 1;
            BOOL s5 = 1;
            BOOL s4 = 1;
            BOOL s3 = 1;
            BOOL s2 = 1;
            BOOL s1 = 0;
            u32 v = unk_81c;
            if (v <= 5) {
                s1 = 1;
            }
            if (!s1) {
                if (!Unk_0200add8_InRange(v, 6, 0xb)) {
                    s2 = 0;
                }
            }
            if (!s2) {
                if (!Unk_0200add8_InRange(v, 0xc, 0x11)) {
                    s3 = 0;
                }
            }
            if (!s3) {
                if (!Unk_0200add8_InRange(v, 0x12, 0x19) && v != 0x1c) {
                    s4 = 0;
                }
            }
            if (!s4) {
                if (!Unk_0200add8_InRange(v, 0x8a, 0x8f) && !Unk_0200add8_InRange(v, 0x90, 0x95) &&
                    !Unk_0200add8_InRange(v, 0x96, 0x9b) && !Unk_0200add8_InRange(v, 0x9c, 0xa3) && v != 0xa5) {
                    s5 = 0;
                }
            }
            if (!s5) {
                if (v != 0x1a) {
                    s6 = 0;
                }
            }
            if (!s6) {
                if (v != 0xa4) {
                    s7 = 0;
                }
            }
            if (!s7 && v != 0x1d) {
                s8 = 0;
            }
            if (s8) {
                func_0200ecdc(0x7d7);
                func_0200ec30(9);
            } else {
                func_0200ecdc(0x5d);
                if (Unk_0200add8_R1(&unk_81c, 0x1554, 0x155c)) {
                    func_0207870c((u8*)this + 0x5c);
                }
            }
            func_0200ec30(0xd);
        }
    }
    u8 b20;
    if (flag != 0 && !Unk_0200add8_IsFFF1(&unk_81c, &t[3]) && !Unk_0200add8_R1(&unk_81c, 0xa7, 0xc6)) {
        b20 = 1;
    } else {
        b20 = 0;
    }
    if (b20) {
        Unk_0200b144_Pos p;
        p.x = x;
        p.y = y;
        func_02045460(&p, 0);
    } else {
        Unk_0200b144_Pos p;
        p.x = x;
        p.y = y;
        func_02045570(&p, 0);
    }
    {
        Unk_02006d14_Sub7d0* s = &unk_7d0;
        Unk_0200b144_Pos p;
        s->unk_08 = 0;
        s->unk_04.s = z;
        s->unk_09 = x;
        s->unk_0a = y;
        s->unk_00 = b20;
        u16 w = unk_81c;
        p.x = x;
        p.y = y;
        func_0200b170((Unk_0200b144_Src*)((u8*)this + 0x8ec), &p, (s8)z, w, b20);
    }
    if (z >= 0) {
        func_02010358(0x16, 6, 0);
    } else {
        func_02010358(0x16, 3, 0);
    }
    if (func_0200f5b0() == 4) {
        func_0205e1a0((u8*)this + 0x59c, 0xc, 3, 1);
    }
}
