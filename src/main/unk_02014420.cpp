#include "types.h"

struct Unk_02014420_Ext {
    virtual u32 vfunc_00();
    virtual u32 vfunc_04();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
    virtual u32 vfunc_10();
    virtual u32 vfunc_14();
    virtual u32 vfunc_18();
    virtual u32 vfunc_1c();
    virtual u32 vfunc_20();
    virtual u32 vfunc_24();
    virtual u32 vfunc_28();
    virtual u32 vfunc_2c();
    virtual u32 vfunc_30();
    virtual u32 vfunc_34();
    virtual u32 vfunc_38();
    virtual u32 vfunc_3c();
    virtual u32 vfunc_40();
    virtual u32 vfunc_44();
    virtual u32 vfunc_48();
    virtual u32 vfunc_4c();
    virtual u32 vfunc_50();
    virtual u32 vfunc_54();
    virtual u32 vfunc_58();
    virtual u32 vfunc_5c();
    virtual u32 vfunc_60();
    virtual u32 vfunc_64();
    virtual u32 vfunc_68();
    virtual u32 vfunc_6c();
    virtual u32 vfunc_70();
    virtual u32 vfunc_74();
    virtual u32 vfunc_78();
    virtual u32 vfunc_7c();
    virtual u32 vfunc_80();
    virtual u32 vfunc_84();
};

extern "C" {
void func_02067a6c(void *p);
void func_02067a78(void *p);
s32 func_020197a8(void *p);
BOOL func_02019790(void *p);
BOOL func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u32 i, s32 j);
BOOL func_02019528(void *p, s32 a, u16 *b, u32 c, u32 d, u32 e, u32 f);
void func_0206db0c(void *p, void *q);
void func_0206dac0(u32 v);
void func_0206da20(u32 v);
extern u16 data_020c6cc8;
extern s32 data_020ddf8c;
extern u8 data_021cb410[];
}

struct Unk_02014420_Vec2 {
    s32 x, y;
};

struct Unk_02014420 {
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
    virtual void vfunc_38(s32 a);
    u8 pad_04[0x38];
    void *unk_3c;
    u32 unk_40;
    u32 unk_44;
    Unk_02014420_Ext *unk_48;
    u8 pad_4c[0x10];
    u8 unk_5c;
    u8 pad_5d[3];
    s32 unk_60;
    u8 pad_64[0x16];
    u16 unk_7a;
    u32 unk_7c;
    u8 pad_80[8];
    Unk_02014420_Vec2 unk_88;
    u8 unk_90;
    u8 pad_91[3];
    u32 unk_94;
    u8 pad_98[9];
    u8 unk_a1;
    u8 pad_a2[6];
    u8 unk_a8;
    u8 unk_a9;

    BOOL func_02015314(s32 cmd);
    void func_020159ac();
    void func_020159b4();
    BOOL func_02014ddc();
    BOOL func_02014d90();
    BOOL func_02014420();
    BOOL func_020144e8();
    BOOL func_020144cc();
    BOOL func_020144a0();
    BOOL func_020145a8();
    BOOL func_02014668();
    BOOL func_02014618();
    BOOL func_020146d4();
    BOOL func_02014790();
    BOOL func_02014744();
    BOOL func_020147fc();
    BOOL func_020148bc();
    BOOL func_0201486c();
    BOOL func_02014930();
    BOOL func_020149f0();
    BOOL func_020149a0();
    BOOL func_02014a64();
    BOOL func_02014b24();
    BOOL func_02014ad4();
    BOOL func_02014b90();
    BOOL func_02014c5c();
    BOOL func_02014c00();
    BOOL func_02014d20();
    BOOL func_02014558();
    BOOL func_02014578(Unk_02014420_Vec2 *p);
    BOOL func_020146bc();
    BOOL func_020147e4();
    BOOL func_02014918();
    BOOL func_02014a4c();
    BOOL func_02014b78();
    BOOL func_02014ce4(u16 *a, u32 b, u32 c, u32 d);
};

typedef BOOL (Unk_02014420::*Unk_02014420_Fn)();

BOOL Unk_02014420::func_02014420()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_020144e8, &Unk_02014420::func_020144cc, &Unk_02014420::func_020144a0};
    if (unk_a8 < 3) {
        return (this->*tbl[unk_a8])();
    }
    return 0;
}

BOOL Unk_02014420::func_020145a8()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_02014668, &Unk_02014420::func_02014618};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_020146d4()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_02014790, &Unk_02014420::func_02014744};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_020147fc()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_020148bc, &Unk_02014420::func_0201486c};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_02014930()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_020149f0, &Unk_02014420::func_020149a0};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_02014a64()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_02014b24, &Unk_02014420::func_02014ad4};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_02014b90()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_02014c5c, &Unk_02014420::func_02014c00};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_02014d20()
{
    static Unk_02014420_Fn tbl[] = {&Unk_02014420::func_02014ddc, &Unk_02014420::func_02014d90};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::func_02014618()
{
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8((u8 *)unk_48 + 0x564) == 0x13 && func_02019790((u8 *)unk_48 + 0x564)) {
            func_02067a6c(unk_3c);
            func_020159ac();
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

BOOL Unk_02014420::func_02014668()
{
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020196b4((u8 *)unk_48 + 0x564, 0x13, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            func_02067a78(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::func_02014744()
{
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8((u8 *)unk_48 + 0x564) == 0x12 && func_02019790((u8 *)unk_48 + 0x564)) {
            func_02067a6c(unk_3c);
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

BOOL Unk_02014420::func_02014790()
{
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020196b4((u8 *)unk_48 + 0x564, 0x12, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            func_02067a78(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::func_0201486c()
{
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8((u8 *)unk_48 + 0x564) == 0x11 && func_02019790((u8 *)unk_48 + 0x564)) {
            func_02067a6c(unk_3c);
            func_020159ac();
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

BOOL Unk_02014420::func_020148bc()
{
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020196b4((u8 *)unk_48 + 0x564, 0x11, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            func_020159b4();
            func_02067a78(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::func_020149a0()
{
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8((u8 *)unk_48 + 0x564) == 0x10 && func_02019790((u8 *)unk_48 + 0x564)) {
            func_02067a6c(unk_3c);
            func_020159ac();
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

BOOL Unk_02014420::func_020149f0()
{
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020196b4((u8 *)unk_48 + 0x564, 0x10, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            func_020159b4();
            func_02067a78(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::func_02014ad4()
{
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8((u8 *)unk_48 + 0x564) == 0xf && func_02019790((u8 *)unk_48 + 0x564)) {
            func_02067a6c(unk_3c);
            func_020159ac();
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

BOOL Unk_02014420::func_02014b24()
{
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020196b4((u8 *)unk_48 + 0x564, 0xf, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            func_02067a78(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::func_02014c00()
{
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8((u8 *)unk_48 + 0x564) == 0xe && func_02019790((u8 *)unk_48 + 0x564)) {
            func_02067a6c(unk_3c);
            if (unk_90 != 4) {
                func_020159ac();
            }
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

BOOL Unk_02014420::func_02014558()
{
    if (func_02015314(10)) {
        unk_a1 = 1;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02014420::func_020146bc()
{
    BOOL r = 0;
    if (func_02015314(9)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::func_020147e4()
{
    BOOL r = 0;
    if (func_02015314(8)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::func_02014918()
{
    BOOL r = 0;
    if (func_02015314(7)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::func_02014a4c()
{
    BOOL r = 0;
    if (func_02015314(6)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::func_02014b78()
{
    BOOL r = 0;
    if (func_02015314(5)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::func_02014578(Unk_02014420_Vec2 *p)
{
    if (func_02015314(10)) {
        *(long long *)&unk_88 = *(long long *)p;
        unk_a1 = 0;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02014420::func_02014ce4(u16 *a, u32 b, u32 c, u32 d)
{
    BOOL r = 0;
    if (func_02015314(4)) {
        unk_7a = *a;
        unk_7c = b;
        unk_90 = c;
        unk_94 = d;
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::func_020144a0()
{
    if (data_020ddf8c != -1) {
        return 0;
    }
    if (unk_3c != NULL) {
        func_02067a6c(unk_3c);
    }
    unk_a8 = 3;
    return 1;
}

BOOL Unk_02014420::func_020144cc()
{
    if (data_020ddf8c != -1) {
        unk_a8 = 2;
    }
    return 0;
}

BOOL Unk_02014420::func_020144e8()
{
    u32 v;
    void *tbl = data_021cb410;
    if (unk_48 != NULL) {
        v = unk_48->vfunc_84();
    } else {
        v = 0;
    }
    if (v != 0xffff) {
        if (unk_3c != NULL) {
            func_02067a78(unk_3c);
        }
        if (unk_a1 == 0) {
            func_0206db0c(&unk_88, tbl);
            func_0206dac0((u16)v);
        } else {
            func_0206da20((u16)v);
        }
        unk_a8 = 1;
        return 0;
    }
    unk_a8 = 3;
    return 1;
}

BOOL Unk_02014420::func_02014c5c()
{
    if (unk_48 != NULL) {
        if (unk_3c != NULL) {
            func_02067a78(unk_3c);
        }
        if (func_020197a8((u8 *)unk_48 + 0x564) == 8 && !func_02019790((u8 *)unk_48 + 0x564)) {
            vfunc_38(0);
        } else if (unk_3c != NULL) {
            if (func_02019528((u8 *)unk_48 + 0x564, 4, &unk_7a, unk_7c, unk_90, unk_94, unk_44)) {
                func_020159b4();
                unk_a8 = 1;
            }
        }
    }
    return 0;
}
