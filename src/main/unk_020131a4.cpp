#include "types.h"

struct Unk_0203398c {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x10];
    Unk_0203398c(u32 x, u32 y, u32 z, u32 w);
    ~Unk_0203398c();
};

extern "C" {
BOOL func_0204e350(void* p, u32 x, u32 y);
void func_0204ed8c(void* p, u32 x, u32 y);
void func_0204ee10(u32* a, u32* b, u32 c);
void func_02115fb4(void* p, u32 v, u32 n);
}

extern "C" BOOL func_020131a4(void* unused, void* p1, u32* pos, u32* step, s32 n, u32* bound, s32 flag, void* q)
{
    s32 i;
    u32 x = pos[0];
    u32 y = pos[1];
    s32 cnt = 0;
    s32 zero = 0;
    for (i = 0; i < n; i++) {
        x += step[0];
        y += step[1];
        if (x >= bound[0] || y >= bound[1]) continue;
        if (flag != 0) {
            Unk_0203398c o(x, y, zero, zero);
            if (o.unk_30 != 0) cnt++; else cnt = zero;
            if (cnt >= 4) break;
        }
        if (func_0204e350(q, x, y)) {
            func_0204ed8c(p1, x, y);
            return TRUE;
        }
    }
    return FALSE;
}

struct Unk_02013260;
struct Unk_02013260_Vec { s32 x; s32 y; };
typedef Unk_02013260_Vec (Unk_02013260::*Unk_02013260_Fn)(u32 a, u32 b);
struct Unk_02013260_Entry {
    u8 pad_00[8];
    Unk_02013260_Fn unk_08;
    u8 pad_10[0x30];
};
extern Unk_02013260_Entry data_021be210[];

struct Unk_02013260 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02013260_Vec unk_0c;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s16 unk_24;
    s16 unk_26;
    Unk_02013260_Entry* unk_28;
    u8 pad_2c[0x88 - 0x2c];
    u32 unk_88;
    u32 unk_8c;
    u32 unk_90;
    u32 unk_94;
    u32 unk_98;
    BOOL func_0201324c();
    void func_0201325c(u32 v);
    void func_02013260(u32 v);
    void func_020132c8();
    void func_020132ec(u32 v);
    void func_02013300(u32 a, u32 idx, u32 b, u32 c);
    void func_02013374();
    Unk_02013260* func_020133a8();
    void func_02012df8();
    void func_02012810(u32 v);
};

BOOL Unk_02013260::func_0201324c()
{
    if (unk_08 < 7) return TRUE;
    return FALSE;
}

void Unk_02013260::func_0201325c(u32 v)
{
    unk_00 = v;
}

void Unk_02013260::func_02013260(u32 v)
{
    u32 a = 0;
    u32 b = 0;
    func_0204ee10(&a, &b, v);
    if (unk_94 != 0 && unk_98 != 0 && (unk_94 != a || unk_98 != b)) {
        unk_04 = 3;
        func_02012df8();
        unk_88 = 0;
        unk_8c = 2;
        func_02012810(v);
        unk_90 = 4;
    }
}

void Unk_02013260::func_020132c8()
{
    if (unk_94 == 0 && unk_98 == 0) {
        unk_94 = 0xff;
        unk_98 = 0xff;
    }
}

void Unk_02013260::func_020132ec(u32 v)
{
    func_0204ee10(&unk_94, &unk_98, v);
}

void Unk_02013260::func_02013300(u32 a, u32 idx, u32 b, u32 c)
{
    if (idx < 7) {
        func_02013374();
        unk_08 = idx;
        unk_00 = b;
        unk_28 = &data_021be210[unk_08];
        if (unk_28->unk_08) {
            unk_0c = (this->*(unk_28->unk_08))(a, c);
            s32 y = unk_0c.y;
            unk_14 = unk_0c.x >> 4;
            unk_18 = y >> 4;
            func_02012810(a);
        }
    }
}

void Unk_02013260::func_02013374()
{
    func_02115fb4(this, 0, 0x9c);
    unk_00 = 2;
    unk_08 = 7;
    unk_24 = -1;
    unk_26 = -1;
    unk_8c = 2;
    unk_90 = 4;
}

Unk_02013260* Unk_02013260::func_020133a8()
{
    unk_0c.x = 0;
    unk_0c.y = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0;
    unk_20 = 0;
    unk_94 = 0;
    unk_98 = 0;
    return this;
}

extern "C" s32 func_020133c4()
{
    return -1;
}

struct Unk_020133cc_Player;
struct Unk_02013910_Ref { u32 unk_00; u32 unk_04; };
struct Unk_020133cc_Vec {
    s32 x;
    s32 y;
    s32 z;
    s32 func_020b0cbc();
};
struct Unk_020133cc_Sub {
    u8 pad_00[4];
    s32 func_020197a8();
    s32 func_020197a0();
    s32 func_02019790();
    BOOL func_02014220();
    s32 func_0201ab48();
    BOOL func_020565e8(u32 v);
    void func_0201a174();
    void func_02003dec(s32 a, u32 b);
    s32 func_020196b4(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
    void func_02019670(u32 a, u32 b, u32 c, u32 d, u32 e);
    void func_02019520();
};
extern "C" s32 func_0203f048(u32 v);
extern "C" void func_02090330(u32 a, void* b, void* c, u32 d);

struct Unk_020133cc_Player {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
    virtual s32 vfunc_80();
    virtual s32 vfunc_84();
    u8 pad_04[0x3c - 4];
    Unk_02013910_Ref* unk_3c;
    u8 pad_40[0x5c - 0x40];
    Unk_020133cc_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0x188 - 0xb4];
    Unk_020133cc_Sub unk_188;
    u8 pad_18c[0x350 - 0x18c];
    Unk_020133cc_Sub unk_350;
    u8 pad_354[0x418 - 0x354];
    Unk_020133cc_Sub unk_418;
    u8 pad_41c[0x484 - 0x41c];
    Unk_020133cc_Vec unk_484;
    Unk_020133cc_Vec unk_490;
    u8 pad_49c[0x4e8 - 0x49c];
    u32 unk_4e8;
    u8 pad_4ec[0x514 - 0x4ec];
    Unk_020133cc_Sub unk_514;
    u8 pad_518[0x564 - 0x518];
    Unk_020133cc_Sub unk_564;
    u8 pad_568[0x618 - 0x568];
    Unk_020133cc_Sub unk_618;
    u8 pad_61c[0x634 - 0x61c];
    Unk_020133cc_Player* unk_634;
    u8 pad_638[0x63e - 0x638];
    s16 unk_63e;
    Unk_020133cc_Player* func_0201bc1c();
    Unk_020133cc_Player* func_02015a7c();
    Unk_020133cc_Player* func_02015710();
    void func_020159cc(u32 a, u32 b);
    void func_02015ab8();
    void func_0203e47c(Unk_020133cc_Player* o);
    s32 func_020133cc();
    s16 func_0201344c();
    void func_02013458(s16 v);
    void func_02013464();
};

s16 Unk_020133cc_Player::func_0201344c()
{
    return unk_63e;
}

void Unk_020133cc_Player::func_02013458(s16 v)
{
    unk_63e = v;
}

void Unk_020133cc_Player::func_02013464()
{
    unk_63e = -1;
}

s32 Unk_020133cc_Player::func_020133cc()
{
    s32 result = -1;
    if (unk_618.func_02014220()) {
        if (unk_564.func_020197a8() == 8) {
            if (func_0201bc1c() != NULL && func_0201bc1c()->func_02015a7c() == NULL) {
                s32 v = unk_564.func_020197a0();
                if (v > 0 && v < 0x3c && v != func_0201344c()) {
                    if (func_0203f048((u8)v) == -1) {
                        result = v;
                        func_02013458((u8)v);
                    }
                }
            }
        }
    }
    return result;
}

static inline BOOL Unk_02013568_IsSet(u32 v, u32 m)
{
    if (v & m) return TRUE;
    return FALSE;
}

struct Unk_02013474_Half { s16 a; s16 b; };

struct Unk_02013474 {
    u8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    void func_02013474(Unk_020133cc_Player* p);
    void func_02013568(Unk_020133cc_Player* p);
    void func_020135bc();
    void func_020135c4();
    void func_020135cc();
    void func_020135e0();
    void func_020135e4();
    void func_020135ec(Unk_020133cc_Player* p);
    void func_02013650(Unk_020133cc_Player* p);
    void func_02013714(Unk_020133cc_Player* p);
    void func_02013778(Unk_020133cc_Player* p);
    void func_02013820(Unk_020133cc_Player* p);
    void func_0201389c(Unk_020133cc_Player* p);
    void func_02013910(Unk_020133cc_Player* p);
    void func_02013a04(Unk_020133cc_Player* p);
    void func_02013a18(Unk_020133cc_Player* p);
    void func_02013b7c(Unk_020133cc_Player* p);
    void func_02013fe4(Unk_020133cc_Player* p);
    void func_020140d0();
    void func_020141d4(Unk_020133cc_Player* p);
};

void Unk_02013474::func_02013474(Unk_020133cc_Player* p)
{
    s32 st = p->unk_350.func_0201ab48();
    if (unk_00 != 0 && (u32)(st - 1) <= 2) {
        Unk_02013474_Half h;
        h.a = p->unk_8e;
        if (unk_04 == 0) {
            func_02090330(0x28, &p->unk_490, &h, 0);
            func_02090330(0x28, &p->unk_484, &h, 0);
        } else {
            BOOL r4 = p->unk_188.func_020565e8(1);
            BOOL r0 = p->unk_188.func_020565e8(9);
            if (r4 != 0 || r0 != 0) {
                Unk_020133cc_Vec v;
                v.x = (r4 ? &p->unk_490 : &p->unk_484)->x;
                v.y = (r4 ? &p->unk_490 : &p->unk_484)->y;
                v.z = (r4 ? &p->unk_490 : &p->unk_484)->z;
                h.b = p->unk_8e + 0x8000;
                v.y = p->unk_5c.y;
                if (st == 2) func_02090330(0, &v, &h.b, 0);
                func_02090330(0x28, &v, &h, 0);
                func_02013568(p);
            }
        }
    }
    unk_04 = st;
}

void Unk_02013474::func_02013568(Unk_020133cc_Player* p)
{
    u32 f = p->unk_b0;
    if (!(Unk_02013568_IsSet(f, 4) && Unk_02013568_IsSet(f, 2))) {
        if (unk_00 != 0) {
            p->unk_514.func_02003dec(p->unk_5c.func_020b0cbc(), 0);
        }
    }
}

extern "C" void func_0206dab0();
extern "C" void func_0203a608(void* a, void* b);
extern "C" void func_0203a680(void* a);
extern u16 data_020c6cc8;

struct Unk_02013778_Vec : Unk_020133cc_Vec {
    Unk_02013778_Vec() {}
};
struct Unk_02013474;
typedef void (Unk_02013474::*Unk_02013474_Fn)(Unk_020133cc_Player*);

void Unk_02013474::func_020135bc()
{
    unk_00 = 0;
}

void Unk_02013474::func_020135c4()
{
    unk_00 = 1;
}

void Unk_02013474::func_020135cc()
{
    func_020135bc();
    unk_04 = 5;
}

void Unk_02013474::func_020135e0()
{
}

void Unk_02013474::func_020135e4()
{
    unk_00 = 0;
}

void Unk_02013474::func_020135ec(Unk_020133cc_Player* p)
{
    static Unk_02013474_Fn tbl[3] = { &Unk_02013474::func_02013650 };
    if (unk_0a < 3) {
        (this->*tbl[unk_0a])(p);
    }
}

void Unk_02013474::func_02013650(Unk_020133cc_Player* p)
{
    if (p->unk_564.func_020197a8() == 7) {
        if (p->unk_564.func_02019790() != 0) {
            p->unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            if (unk_0b == 1) {
                p->unk_4e8 &= ~2;
            }
            unk_0a = 1;
            unk_08 = 5;
        }
    }
}

struct Unk_020136c0 {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    void func_020136c0(Unk_020133cc_Player* p);
};

void Unk_020136c0::func_020136c0(Unk_020133cc_Player* p)
{
    p->unk_564.func_02019670(2, unk_04, unk_06, unk_00, data_020c6cc8);
    if (!(p->unk_4e8 & 2)) {
        unk_0b = 1;
    }
    p->unk_4e8 |= 2;
    unk_0a = 0;
}

void Unk_02013474::func_02013714(Unk_020133cc_Player* p)
{
    static Unk_02013474_Fn tbl[1] = { &Unk_02013474::func_02013b7c };
    if (unk_0a < 1) {
        (this->*tbl[unk_0a])(p);
    }
}

void Unk_02013474::func_02013778(Unk_020133cc_Player* p)
{
    Unk_02013778_Vec pos;
    Unk_020133cc_Vec* pv = &p->unk_5c;
    *(Unk_020133cc_Vec*)&pos = *pv;
    if (unk_0d != 0) {
        p->unk_564.func_020196b4(0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    p->unk_564.func_02019520();
    if (!(p->unk_4e8 & 2)) {
        unk_0b = 1;
    }
    p->unk_4e8 |= 2;
    if (p->vfunc_7c()) {
        if (p->vfunc_84() != 0xffff) {
            func_0206dab0();
        }
        p->vfunc_80();
    }
    unk_0a = 0;
}

void Unk_02013474::func_02013820(Unk_020133cc_Player* p)
{
    static Unk_02013474_Fn tbl[3] = { &Unk_02013474::func_02013a04, &Unk_02013474::func_02013910, &Unk_02013474::func_0201389c };
    if (unk_0a < 3) {
        (this->*tbl[unk_0a])(p);
    }
}

void Unk_02013474::func_0201389c(Unk_020133cc_Player* p)
{
    Unk_020133cc_Player* r6 = p->unk_634;
    if (r6 != NULL && r6->func_02015a7c() != NULL && r6->func_02015a7c()->unk_564.func_020197a8() == 8 && r6->func_02015a7c()->unk_564.func_02019790() == 0) {
        return;
    }
    if (p->unk_564.func_020197a8() == 8 && p->unk_564.func_02019790() == 0) {
        return;
    }
    func_02013fe4(p);
    unk_0a = 1;
    unk_08 = 5;
}

void Unk_02013474::func_02013910(Unk_020133cc_Player* p)
{
    Unk_020133cc_Player* r4 = p->unk_634;
    if (r4 != NULL) {
        if (r4->unk_3c != NULL) {
            if (r4->unk_3c->unk_04 == 0) {
                r4->vfunc_7c();
                p->func_0203e47c(r4);
                Unk_020133cc_Player* t = r4->func_02015710();
                if (t != NULL) {
                    t->unk_418.func_0201a174();
                }
                BOOL a = FALSE;
                if (r4->func_02015a7c() != NULL && r4->func_02015a7c()->unk_564.func_020197a8() == 8 && r4->func_02015a7c()->unk_564.func_02019790() == 0) {
                    a = TRUE;
                }
                BOOL b = FALSE;
                if (p->unk_564.func_020197a8() == 8 && p->unk_564.func_02019790() == 0) {
                    b = TRUE;
                }
                if (a || b) {
                    if (b) r4->func_020159cc(0, 0);
                    if (a) r4->func_020159cc(0, 1);
                    unk_0a = 2;
                } else {
                    func_02013fe4(p);
                    unk_0a = 1;
                    unk_08 = 5;
                }
            } else {
                r4->func_02015ab8();
                func_020141d4(p);
            }
        }
    }
}

void Unk_02013474::func_02013a04(Unk_020133cc_Player* p)
{
    func_020140d0();
    unk_0a = 1;
}

void Unk_02013474::func_02013a18(Unk_020133cc_Player* p)
{
    Unk_020133cc_Vec pos;
    Unk_020133cc_Vec* pv = &p->unk_5c;
    pos = *pv;
    if (unk_0d != 0) {
        p->unk_564.func_020196b4(0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    unk_0a = 0;
    if (unk_0c == 0) {
        Unk_020133cc_Player* r6 = p->unk_634;
        if (r6 != NULL && r6->func_02015a7c() != NULL) {
            Unk_020133cc_Vec w;
            w = r6->func_02015a7c()->unk_5c;
            pos.y += 0x2000;
            w.y += 0x2000;
            func_0203a608(&pos, &w);
        } else {
            pos.y += 0x2000;
            func_0203a680(&pos);
        }
    }
    if (!(p->unk_4e8 & 2)) {
        unk_0b = 1;
    }
    p->unk_4e8 |= 2;
    if (p->vfunc_7c()) {
        if (p->vfunc_84() != 0xffff) {
            func_0206dab0();
        }
        p->vfunc_80();
    }
}

extern "C" void func_020133a4()
{
}
