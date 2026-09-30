#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u8 data_ov140_02293d00[];
extern u8 data_ov140_02293d40[];
extern u8 data_ov140_02293d80[];
extern u8 data_ov140_02293d88[];
extern u8 data_ov140_02293da4[];
extern u8 data_ov140_02293dcc[];
extern u8 data_ov140_02293e64[];
extern u8 data_ov140_02293fb4[];

void func_020015b8(u32 a);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_0200402c(u32 a);
void func_020020b8(u32 a);
void func_020021a0(u32 a);
void func_020b87d0(void *p);
void func_020ed188(void *p);
s32 func_020ed174();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
BOOL func_0206ef00();
void func_0206ecf8(u32 v);
void func_0206ed2c(u32 v);
void func_0206e874();
void func_020641b4(void *src, void *dst, u32 n);
void func_02087e70(s32 a, void *src, s32 n, void *dst, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();
    BOOL func_ov002_02200a14(s32 a);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// ov139 sub-object at +0x8e8 (0x624 bytes; declaration in ov139_000, opaque here)
class Unk_ov140_ov139_02291f60 {
public:
    u32 func_ov139_02291f98(s32 i);
    void func_ov139_022921ac();
    void func_ov139_0229237c();
    void func_ov139_022923dc();
    void func_ov139_02292410();
    void func_ov139_02292480(s32 a, s32 b);
    void func_ov139_02292498();
    void func_ov139_022924d8();
    void func_ov139_022924f4();
    void func_ov139_02292510(u8 id, u8 v);
    u8 unk_00[0x624];
};

// sub-object at +0xf0c (vtable 0x02204614, size 0x64)
class Unk_ov140_02204614 {
public:
    Unk_ov140_02204614();
    virtual ~Unk_ov140_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    BOOL func_ov002_022028f0();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// sub-object at +0xf70 (vtable 0x022046cc, size 0x164)
class Unk_ov140_022046cc {
public:
    Unk_ov140_022046cc();
    ~Unk_ov140_022046cc();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    u32 unk_00[0x164 / 4];
};

class Unk_ov140_02293e04;
typedef void (Unk_ov140_02293e04::*Unk_ov140_02293e04_Fn)();

// Vtable 0x02293e04
class Unk_ov140_02293e04 : public Unk_ov002_022044e4 {
public:
    Unk_ov140_02293e04() {}
    virtual ~Unk_ov140_02293e04();

    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov140_02292a90();
    void func_ov140_02292b10();
    void func_ov140_02292b74(u32 v);
    void func_ov140_02292bc8();
    void func_ov140_02292c84();
    u32 func_ov140_02292c48();
    BOOL func_ov140_02292d88();
    void func_ov140_02292e00(s32 a);
    void func_ov140_02292e20();
    void func_ov140_02292e64();
    BOOL func_ov140_02292ea4(s32 a);
    void func_ov140_02292f48();
    void func_ov140_02292f74();
    void func_ov140_02292f94();
    void func_ov140_02293018();
    void func_ov140_0229303c();
    void func_ov140_022930e0();
    void func_ov140_02293140();
    void func_ov140_02293178();
    void func_ov140_022931b0();
    void func_ov140_022931d0();
    void func_ov140_022931ec();
    void func_ov140_022929b0(u32 a);
    void func_ov140_022929c0(u32 a);
    BOOL func_ov140_022929d0(u32 a);

    // in range (0x8c state table, then 0x8d state table)
    void func_ov140_02293204();
    void func_ov140_02293848();
    void func_ov140_022937fc();
    void func_ov140_022937d4();
    void func_ov140_0229379c();
    void func_ov140_02293770();
    void func_ov140_02293450();
    void func_ov140_022933e8();
    void func_ov140_022933b8();
    void func_ov140_02293318();
    void func_ov140_022932c4();
    void func_ov140_02293298();
    void func_ov140_02293260();
    void func_ov140_0229352c();
    void func_ov140_02293574();
    void func_ov140_02293598();
    void func_ov140_0229361c();
    void func_ov140_02293638();
    void func_ov140_0229366c();
    void func_ov140_02293674();
    void func_ov140_02293690();
    void func_ov140_022936c4();
    void func_ov140_02293750();
    void func_ov140_022938e0();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u8 *unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 unk_ac[0x800];
    /* 0x8ac */ u16 unk_8ac;
    /* 0x8ae */ u8 unk_8ae;
    /* 0x8af */ u8 unk_8af[6];
    /* 0x8b5 */ u8 unk_8b5[0x20];
    /* 0x8d5 */ u8 unk_8d5[6];
    /* 0x8db */ u8 unk_8db;
    /* 0x8dc */ u8 unk_8dc;
    /* 0x8dd */ u8 unk_8dd;
    /* 0x8de */ u8 unk_8de;
    /* 0x8df */ u8 unk_8df;
    /* 0x8e0 */ u8 unk_8e0[8];
    /* 0x8e8 */ Unk_ov140_ov139_02291f60 unk_8e8;
    /* 0xf0c */ Unk_ov140_02204614 unk_f0c;
    /* 0xf70 */ Unk_ov140_022046cc unk_f70;
    /* 0x10d4 */ u8 unk_10d4[0x24];
};

void Unk_ov140_02293e04::func_ov140_02293260() {
    if (unk_8db > 1) {
        unk_8db = unk_8db - 1;
        func_ov140_02292b74(unk_8db);
    } else {
        func_ov140_02292b74(0);
        func_ov140_02292c84();
        func_ov002_02200a58(7);
    }
}

void Unk_ov140_02293e04::func_ov140_02293298() {
    if (unk_8db != 0) {
        unk_8db = unk_8db - 1;
    } else {
        func_ov140_0229303c();
        func_ov002_02200a60(1);
    }
}

void Unk_ov140_02293e04::func_ov140_022932c4() {
    if (unk_f0c.func_0208d4fc()) {
        func_ov140_02292f94();
        func_ov002_02200a58(unk_8ae);
        if (func_ov140_022929d0(8)) {
            func_ov140_022929b0(8);
            unk_8dc = 8;
            func_ov140_02293018();
        }
    }
}

void Unk_ov140_02293e04::func_ov140_02293318() {
    if (unk_f0c.func_0208d4fc()) {
        u32 c = unk_8dc;
        if (c == 6) {
            if (unk_a8 != 8) {
                goto tail;
            }
            func_ov140_022930e0();
        } else if (c == 8) {
            if (unk_a0 != 8) {
                goto tail;
            }
            func_ov140_02293178();
        } else if (c == 7) {
            func_ov140_02293140();
        } else {
            u8 *e = (u8 *)this + c;
            if (e[0x8af] == 0 || e[0x8e0] == 4) {
                goto tail;
            }
            func_ov140_02292e00(c);
            func_0200402c(0x29);
            func_ov140_022929c0(8);
            func_ov140_022929c0(0x10);
        tail:
            func_ov002_02200a58(1);
            func_ov140_02292f48();
        }
    }
}

void Unk_ov140_02293e04::func_ov140_022933b8() {
    if (unk_f0c.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_8ae);
        func_ov140_022938e0();
    }
}

void Unk_ov140_02293e04::func_ov140_022933e8() {
    func_ov140_0229352c();
    if (func_ov002_022009d4()) {
        func_ov140_022931ec();
    } else {
        s32 v = func_ov002_022009c8();
        if (func_ov140_02292ea4(v)) {
            func_ov140_02293018();
        } else {
            u16 t = data_021f47d8[1];
            if ((u32)t & 1) {
                func_ov140_02292f74();
            } else if ((u32)t & 2) {
                func_ov140_02293140();
                func_ov140_0229303c();
            }
        }
    }
}

static inline BOOL Unk_ov140_02293450_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov140_02293e04::func_ov140_02293450() {
    func_ov140_0229352c();
    if (func_ov002_02200a14(1)) {
        func_ov140_022931d0();
    } else if (Unk_ov140_02293450_Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec - 0x10;
        if (x >= 0x28 && x < 0xd0 && y >= 0x30 && y < 0x90) {
            s32 i = (y - 0x30) >> 4;
            u8 *e = (u8 *)this + i;
            if (e[0x8af] != 0 && e[0x8e0] != 4) {
                func_ov140_02292e00(i);
                func_0200402c(0x29);
            }
        } else if (y >= 0x96 && y < 0xa7) {
            if (x >= 0x5e && x < 0x9a) {
                func_ov140_02293140();
            } else if (x >= 0x9f && x < 0xdb) {
                if (unk_a0 == 8) {
                    func_ov140_02293178();
                }
            } else if (x >= 0x1d && x < 0x59) {
                if (unk_a8 == 8) {
                    func_ov140_022930e0();
                }
            }
        }
    }
}

void Unk_ov140_02293e04::func_ov140_0229352c() {
    u32 c = func_ov140_02292c48();
    if (c != unk_8df) {
        unk_8df = c;
        func_ov140_02292a90();
        func_ov140_02292c84();
        func_ov140_02292b74(5);
    } else if (func_ov140_02292d88()) {
        func_ov140_02292b74(5);
    }
}

void Unk_ov140_02293e04::func_ov140_02293574() {
    unk_8e8.func_ov139_0229237c();
    unk_f70.func_ov002_02203920();
}

void Unk_ov140_02293e04::func_ov140_02293598() {
    unk_8e8.func_ov139_02292410();
    unk_8e8.func_ov139_022923dc();
    func_020641b4(data_ov140_02293fb4, unk_ac, 0x800);
    func_ov140_02292e20();
}

extern "C" void func_ov140_022935d0() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov140_02293e04::func_ov140_0229361c() {
    func_ov140_02292e64();
    unk_8e8.func_ov139_02292498();
}

void Unk_ov140_02293e04::func_ov140_02293638() {
    func_020b87d0(unk_10d4);
    unk_f70.func_ov002_02203900();
    unk_8e8.func_ov139_022924d8();
    func_ov140_02292b10();
}

void Unk_ov140_02293e04::func_ov140_0229366c() { func_ov140_0229361c(); }

void Unk_ov140_02293e04::func_ov140_02293674() {
    func_ov140_02293638();
    unk_f0c.vfunc_0c();
}

void Unk_ov140_02293e04::func_ov140_02293690() {
    unk_f70.func_ov002_02203900();
    unk_8e8.func_ov139_022924f4();
    func_020b87d0(unk_10d4);
    func_ov140_02292b10();
}

void Unk_ov140_02293e04::func_ov140_022936c4() {
    unk_8ac = 0;
    unk_8e8.func_ov139_02292510(6, 0x7f);
    s32 i;
    for (i = 0; i < 6; i++) {
        unk_8af[i] = 0;
        unk_8e0[i] = 0;
    }
    for (i = 0; i < 0x20; i++) {
        unk_8b5[i] = 0xff;
    }
    func_ov140_02292e00(-1);
    unk_a4 = 8;
    unk_a8 = 9;
    unk_8dc = 0;
    unk_8dd = 0;
    unk_8de = 0;
}

void Unk_ov140_02293e04::func_ov140_02293750() {
    func_ov002_02200840(6, 0, 0);
    unk_94 = (u8 *)func_ov002_02200920();
}

void Unk_ov140_02293e04::func_ov140_02293770() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
    } else {
        func_ov140_02293750();
    }
}

void Unk_ov140_02293e04::func_ov140_0229379c() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov140_02293750();
    func_ov002_02200a50(4);
}

void Unk_ov140_02293e04::func_ov140_022937d4() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov140_022931b0();
    }
    func_ov140_02293750();
}

void Unk_ov140_02293e04::func_ov140_022937fc() {
    func_ov140_02292bc8();
    func_ov140_02292c84();
    func_ov140_02292b74(5);
    func_ov002_022008e0(8, 4, 0, 0x30);
    func_020020b8(6);
    func_ov140_02293750();
    func_ov140_022929c0(1);
    func_ov002_02200a50(2);
}

void Unk_ov140_02293e04::func_ov140_02293848() {
    func_ov140_022935d0();
    func_ov140_02293598();
    func_ov140_02293574();
    unk_8e8.func_ov139_022921ac();
    func_ov002_02200a50(1);
}

BOOL Unk_ov140_02293e04::vfunc_5c() {
    if (func_ov140_022929d0(2)) {
        func_0206ecf8(0);
    } else {
        func_0206ecf8(1);
        func_0206ed2c(unk_8d5[unk_9c]);
    }
    func_0206e874();
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov140_02293e04::vfunc_58() { return TRUE; }

BOOL Unk_ov140_02293e04::vfunc_54() { return TRUE; }

BOOL Unk_ov140_02293e04::vfunc_50() {
    func_ov140_02293674();
    func_ov140_022938e0();
    func_ov140_0229366c();
    return TRUE;
}

void Unk_ov140_02293e04::func_ov140_022938e0() {
    static Unk_ov140_02293e04_Fn tbl[8] = {
        &Unk_ov140_02293e04::func_ov140_02293450,
        &Unk_ov140_02293e04::func_ov140_022933e8,
        &Unk_ov140_02293e04::func_ov140_022933b8,
        &Unk_ov140_02293e04::func_ov140_02293318,
        &Unk_ov140_02293e04::func_ov140_022932c4,
        &Unk_ov140_02293e04::func_ov140_02293298,
        &Unk_ov140_02293e04::func_ov140_02293260,
        &Unk_ov140_02293e04::func_ov140_02293204};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov140_02293e04::vfunc_4c() {
    static Unk_ov140_02293e04_Fn tbl[5] = {
        &Unk_ov140_02293e04::func_ov140_02293848,
        &Unk_ov140_02293e04::func_ov140_022937fc,
        &Unk_ov140_02293e04::func_ov140_022937d4,
        &Unk_ov140_02293e04::func_ov140_0229379c,
        &Unk_ov140_02293e04::func_ov140_02293770};
    func_ov140_02293638();
    (this->*tbl[unk_8c])();
    func_ov140_0229361c();
    return TRUE;
}

BOOL Unk_ov140_02293e04::vfunc_24() {
    if (func_0206ef00()) {
        unk_f0c.func_ov002_02202844();
    }
    if (func_ov140_022929d0(1) == 0) {
        return FALSE;
    }
    unk_f70.func_ov002_022036a4(unk_98);
    u8 *base = unk_94 + 0x60;
    func_02087e70(1, data_ov140_02293da4, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    u32 a = unk_8e8.func_ov139_02291f98(5);
    u32 b = unk_8e8.func_ov139_02291f98(6);
    u32 c = unk_8e8.func_ov139_02291f98(7);
    s32 v = unk_9c;
    if (v != -1) {
        func_02087e70(1, data_ov140_02293dcc, 0x80, base + (v << 4), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    func_02087e70(1, data_ov140_02293e64, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, (void *)a, 0x80, base, unk_a8, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, (void *)b, 0x80, base, unk_a4, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, (void *)c, 0x80, base, unk_a0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    unk_8e8.func_ov139_02292480(0, (s32)unk_94);
    if (func_ov140_022929d0(0x20) == 0) {
        void *tbl[5] = {0, data_ov140_02293d40, data_ov140_02293d00, data_ov140_02293d80, data_ov140_02293d88};
        s32 z = 0;
        s32 i;
        for (i = 0; i < 6; base += 0x10, i++) {
            void *t = tbl[unk_8e0[i]];
            if (t != 0) {
                func_02087e70(1, t, 0x80, base, -1, 2, 0x1000, 0x1000, z, -1, z, z);
            }
        }
    }
    return TRUE;
}
