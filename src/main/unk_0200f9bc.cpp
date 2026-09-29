#include "types.h"

struct Unk_0200ff08_Vec { s32 x, y, z; };

struct Unk_0200ff08_Obj {
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
    virtual BOOL vfunc_54(void *p);
};

inline BOOL Unk_0200f9d4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Unk_020102a0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern u8 data_020e416c;
extern u32 data_020c623c[];
extern u32 data_020cb35c;
extern u32 data_020cb360;
extern u8 data_020d6f30[], data_020d6f38[], data_020d6f3c[], data_020d6f40[], data_020d6f48[], data_020d5e38[];

extern "C" {
void *func_0204262c(u32 p);
s32 func_ov004_0221e980(void *, s32, s32);
s32 func_ov003_02204ce8(void *, s32);
s32 func_ov004_0221e8c0(void *);
s32 func_ov003_02204f3c(void *);
s32 func_020e9650(void *);
s32 func_020e7b98(s32, s32);
s32 func_020e780c(s32, s32);
void func_02063a1c(void *, void *, void *, void *);
void func_02063a5c(void *, void *, void *, void *);
BOOL func_0205d87c(void *);
s32 func_0205ddc8(s32, u32, u16 *, s32 *, s32 *);
void func_0205da08(void *, s32, s32, u16 *, s32);
void *func_0205d854(void *, s32);
s32 func_0210629c(void *);
void *func_0205d340(void *);
void *func_0205ef74(void *);
void *func_0205ef60(void *);
void func_0205d934(void *);
void func_0205db04(void *);
void func_02054b14(void *);
void func_02054b70(void *, void *);
s32 func_0205d7f8(void *, s32);
void func_02055eec(void *);
void func_0205d1f8(void *);
void func_020e885c();
void *func_0205cf60(void *);
void *func_0205cf54(void *);
void func_02055e4c(void *, void *, u32, u32, u32, u32);
s32 func_0205d494(void *);
s32 func_0205d4e4(void *);
s32 func_0205d764(s32);
s32 func_0205d758(s32);
BOOL func_0204b37c(u16 *);
s32 func_0204b598(u16 *);
void func_0205d554(void *, s32);
void func_0205d530(void *);
void func_0205d588(void *);
void *func_0205d4d0(void *);
BOOL func_0203d978(void *);
void func_0203d73c(void *, void *);
BOOL func_0203e5d0(void *);
BOOL func_0203e4a8(void *, void *);
void func_0200f3ec(Unk_0200ff08_Vec *, void *, void *, void *, void *);
void func_0205c91c(void *);
u32 func_0203c6a8();
void func_020b8840(void *, u32, void *, u32, u32, u32);
void func_0205ca94(void *, s32, void *, u32, u32);
void func_0205ef34(void *);
void func_0205ef08(void *, s32);
s32 func_01ffcb0c(s32, s32);
BOOL func_02088d38(void *, s32);
BOOL func_020890b0(void *, s32);
s32 func_0205ed30(u16 *);
s32 func_0205c570(s32);
void func_0205c2dc(void *, s32, s32, s32);
void func_0205c254(void *);
s32 func_021065dc();
s32 func_021065f8(s32, s32);
void func_02053e70(void *, s32, s32, u32, u32, u32, u32, u32);
s32 func_0205c57c(s32);
s32 func_0205c5d0();
s32 func_0205c5ac(s32, s32);
s32 func_0205c588(s32, s32);
void func_02053e00(void *, s32, s32);
void func_02053dd8(void *, s32, s32);
void func_02053e28(void *, s32, s32);
void func_02010a7c(u16 *, void *);
}

struct Unk_02006d14 {
    u8 pad_000[0x5c];
    u8 unk_5c[0x8e - 0x5c];
    s16 unk_8e;
    u8 pad_90[0x138 - 0x90];
    Unk_0200ff08_Obj *unk_138;
    u8 unk_13c;
    u8 pad_13d[0x154 - 0x13d];
    s32 unk_154, unk_158, unk_15c;
    u8 pad_160[0x16c - 0x160];
    s32 unk_16c;
    u8 unk_170[0x230 - 0x170];
    u8 unk_230[0x28c - 0x230];
    u32 unk_28c;
    u8 pad_290[0x388 - 0x290];
    u8 unk_388[0x424 - 0x388];
    u8 unk_424[0x460 - 0x424];
    u8 unk_460[0x4fc - 0x460];
    u8 unk_4fc[0x598 - 0x4fc];
    u8 unk_598[0x6f0 - 0x598];
    s32 unk_6f0;
    s32 pad_6f4;
    s32 unk_6f8;
    u8 pad_6fc[0x6fd - 0x6fc];
    u8 unk_6fd[0x704 - 0x6fd];
    s32 unk_704;
    u8 unk_708;
    u8 unk_709;
    u8 unk_70a;
    u8 unk_70b;
    u8 unk_70c[0x714 - 0x70c];
    u32 unk_714;
    u8 pad_718[0x738 - 0x718];
    u8 unk_738[0x740 - 0x738];
    u32 unk_740;
    u8 pad_744[0x770 - 0x744];
    u8 unk_770[0x774 - 0x770];
    u8 unk_774[0x79c - 0x774];
    u8 unk_79c[0x7a4 - 0x79c];
    u32 unk_7a4;
    u8 pad_7a8[0x808 - 0x7a8];
    u32 unk_808;
    u8 pad_80c[0xc88 - 0x80c];
    s32 unk_c88;
    u16 unk_c8c;
    u8 pad_c8e[2];
    s32 unk_c90;
    u16 unk_c94;
    u8 unk_c96;
    u8 unk_c97;
    u8 unk_c98;

    u32 func_0200f9bc();
    s32 func_0200f9d4(s32 a);
    s32 func_0200fa00();
    BOOL func_0200fa2c(s32 *pos, u32 idx);
    void func_0200fa88(void *a, void *b, void *c, void *d);
    void func_0200faa0(void *a, void *b, void *c, void *d);
    BOOL func_0200fab8(u16 *p, u8 b, u8 c, u8 d);
    void func_0200fb04();
    void func_0200fb30();
    BOOL func_0200fd90(u16 *p);
    void func_0200fdb4();
    void func_0200fdf4();
    s32 func_0200ff08();
    void func_0201000c();
    void func_02010050(void *p);
    void func_02010078(s32 a, s32 b);
    s32 func_020100d0();
    void func_02010154(u16 *p, s32 b, void *c);
    void func_02010284(s32 b, void *c);

    BOOL func_0200ec44(s32 n);
    BOOL func_0200d5b8();
    s32 func_0200d640();
    void func_020105ec();
    void *func_02010cf8();
    void *func_02010d20();
    void *func_02010b08(s32 n);
    s32 func_02010aa0();
    BOOL func_02010ad4();
};

u32 Unk_02006d14::func_0200f9bc() {
    return *(u32 *)((u8 *)func_0204262c(unk_808) + 0xc);
}

s32 Unk_02006d14::func_0200f9d4(s32 a) {
    if (Unk_0200f9d4_IsOne(data_020e416c)) {
        return func_ov004_0221e980(this, a, 0);
    } else {
        return func_ov003_02204ce8(this, a);
    }
}

s32 Unk_02006d14::func_0200fa00() {
    if (Unk_0200f9d4_IsOne(data_020e416c)) {
        return func_ov004_0221e8c0(this);
    } else {
        return func_ov003_02204f3c(this);
    }
}

BOOL Unk_02006d14::func_0200fa2c(s32 *pos, u32 idx) {
    if (func_020e9650(&unk_6f0) < (s32)(data_020c623c[idx] << 13) >> 12) {
        s32 a = func_020e7b98(pos[0] - unk_6f0, pos[2] - unk_6f8);
        if (func_020e780c(a, unk_8e) < 0x2aaa) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_02006d14::func_0200fa88(void *a, void *b, void *c, void *d) {
    func_02063a1c(a, b, c, d);
}

void Unk_02006d14::func_0200faa0(void *a, void *b, void *c, void *d) {
    func_02063a5c(a, b, c, d);
}

BOOL Unk_02006d14::func_0200fab8(u16 *p, u8 b, u8 c, u8 d) {
    if (unk_c90 == 2) {
        unk_c90 = 0;
        unk_c94 = *p;
        unk_c96 = b;
        unk_c97 = c;
        unk_c98 = d;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200fb04() {
    if (unk_c90 == 1) {
        if (func_0205d87c(unk_424)) {
            unk_c90 = 2;
        }
    }
}

void Unk_02006d14::func_0200fb30() {
    u16 a[2];
    s32 x, y;
    s32 r4, r6, r7;
    s32 t;
    if (unk_c90 != 0) return;
    a[0] = 0xfff1;
    if (func_0200ec44(12)) {
        a[0] = 0xfff1;
    } else {
        a[0] = unk_c94;
    }
    func_0205ddc8((s32)func_02010cf8(), unk_c96, a, &y, &x);
    a[1] = unk_c94;
    func_0205da08(unk_424, y, x, &a[1], (s32)func_02010d20());
    func_02010078(unk_c97, (s32)func_02010b08(0));
    r4 = func_0210629c(func_0205d854(unk_424, 0));
    r6 = 0;
    if (x < 0x9e) {
        r6 = func_0210629c(func_0205d854(unk_424, 1));
    }
    if (unk_c98 != 0) {
        r7 = func_0210629c(func_0205d340(&unk_709));
        func_0200faa0((void *)r7, (void *)r4, data_020d6f38, data_020d6f38);
        func_0200faa0((void *)r7, (void *)r4, data_020d6f3c, data_020d6f3c);
    }
    r7 = func_0210629c(func_0205ef74(unk_79c));
    t = func_0210629c(func_0205ef60(unk_79c));
    func_0200fa88((void *)r7, (void *)r4, data_020d6f30, data_020d6f30);
    func_0200fa88((void *)t, (void *)r4, data_020d6f40, data_020d6f40);
    if (r6 != 0) {
        func_0200fa88((void *)r7, (void *)r6, data_020d6f30, data_020d6f30);
    }
    func_0205d934(unk_424);
    func_0205db04(unk_424);
    func_0205d87c(unk_424);
    func_02054b14(unk_388);
    func_02054b14(unk_460);
    func_02054b70(unk_388, func_0205d854(unk_424, 0));
    if (func_0205d7f8(unk_424, 1) < 0x9e) {
        func_02054b70(unk_460, func_0205d854(unk_424, 1));
    }
    if (unk_c98 == 0) {
        u32 p = (unk_714 << 4) >> 16;
        u32 q = (unk_740 << 4) >> 16;
        func_02055eec(unk_70c);
        func_02055eec(unk_738);
        func_0205d1f8(&unk_70b);
        func_020e885c();
        func_020105ec();
        func_02055e4c(unk_70c, func_0205cf60(&unk_70a), p, 0, unk_708, 0x1000);
        func_02055e4c(unk_738, func_0205cf54(&unk_70a), q, 0, unk_708, 0x1000);
    }
    unk_c90 = 1;
}

BOOL Unk_02006d14::func_0200fd90(u16 *p) {
    if (unk_c88 == 2) {
        unk_c88 = 0;
        unk_c8c = *p;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200fdb4() {
    if (unk_c88 == 1) {
        s32 r = 1;
        if (func_0205d494(unk_598) != 0x4b) {
            r = func_0205d4e4(unk_598);
        }
        if (r != 0) {
            unk_c88 = 2;
        }
    }
}


void Unk_02006d14::func_0200fdf4() {
    if (unk_c88 != 0) return;
    s32 r4 = 0x4b;
    volatile u16 buf = unk_c8c;
    BOOL in = FALSE;
    u16 v = buf;
    if (buf >= 0x1431 && v <= 0x1470) in = TRUE;
    if (in) {
        s32 idx;
        if (v >= 0x1431 && v <= 0x1470) idx = v - 0x1431; else idx = -1;
        if (idx >= 0 && (u32)idx < data_020cb35c) {
            r4 = func_0205d764(idx);
        }
    } else if (v >= 0x1471 && v <= 0x1491) {
        if (func_0204b37c((u16 *)&buf)) {
            s32 idx = func_0204b598((u16 *)&buf);
            if (idx >= 0 && (u32)idx < data_020cb360) {
                r4 = func_0205d758(idx);
            }
        }
    }
    func_0205d554(unk_598, r4);
    if (func_0205d494(unk_598) != 0x4b) {
        func_0205d530(unk_598);
        func_0205d588(unk_598);
        func_02054b14(unk_4fc);
        func_02054b70(unk_4fc, func_0205d4d0(unk_598));
        func_0205d4e4(unk_598);
        unk_c88 = 1;
    } else {
        unk_c88 = 1;
        func_0200fdb4();
    }
}

s32 Unk_02006d14::func_0200ff08() {
    if (func_0203d978(this) || func_0200ec44(0x13)) return FALSE;
    if (func_0200d5b8()) {
        func_0203d73c(this, unk_138);
        if (unk_138 == 0) {
            if (func_0203e5d0(this)) return TRUE;
        } else if (!func_0203e4a8(unk_138, this)) {
            if (unk_138->vfunc_54(this)) return TRUE;
        } else {
            return TRUE;
        }
    }
    if (func_0200fa00()) return TRUE;
    if (unk_13c != 0 && unk_16c == 2) {
        volatile Unk_0200ff08_Vec saved;
        Unk_0200ff08_Vec res;
        saved.x = unk_154;
        saved.y = unk_158;
        saved.z = unk_15c;
        func_0200f3ec(&res, this, unk_5c, &unk_8e, data_020d5e38);
        unk_154 = res.x;
        unk_158 = res.y;
        unk_15c = res.z;
        s32 r = func_0200f9d4(0);
        unk_154 = saved.x;
        unk_158 = saved.y;
        unk_15c = saved.z;
        return r;
    }
    return FALSE;
}

void Unk_02006d14::func_0201000c() {
    u32 r4 = unk_28c;
    func_0205c91c(unk_770);
    func_020b8840(unk_774, r4, data_020d6f48, func_0203c6a8(), 0, 0);
}

void Unk_02006d14::func_02010050(void *p) {
    func_0205ca94(unk_770, (s32)p, func_02010d20(), 0, 0);
}

void Unk_02006d14::func_02010078(s32 a, s32 b) {
    s32 r6 = func_02010aa0();
    s32 r1, r4;
    if (func_02010ad4()) {
        r1 = b + ((r6 - 0x10) << 3);
    } else {
        r1 = b + (r6 << 3);
    }
    r4 = b + ((a << 3) + 0x80);
    if (r1 < 0x80) {
        func_0205ef34(unk_79c);
    }
    if (r4 >= 0x80 && r4 < 0xc0) {
        func_0205ef08(unk_79c, r4);
    }
}

s32 Unk_02006d14::func_020100d0() {
    s32 r4 = func_01ffcb0c(func_0200d640(), 0x6e2);
    if (r4 > 0x6e2) {
        r4 = 0x6e2;
    } else if (r4 < 0x108) {
        r4 = 0;
    }
    if (func_02088d38(unk_170, 8) && func_020890b0(unk_170, unk_8e)) {
        if (r4 > 0x245) r4 = 0x245;
    } else if (unk_7a4 & 8) {
        if (r4 > 0x307) r4 = 0x307;
    }
    return r4;
}

inline BOOL Unk_02010154_In(u16 *p) { BOOL r = FALSE; u16 v = *p; if (*p >= 0x1380 && v <= 0x139f) r = TRUE; return r; }

void Unk_02006d14::func_02010154(u16 *p, s32 b, void *c) {
    s32 r6 = func_0205ed30(p);
    s32 r7 = func_0205c570(b);
    if (r7 == 3 || r6 == 0x144) goto B;
    if (r7 == 1) {
        if (!Unk_02010154_In(p)) {
            if (*p < 0x13a0 || *p > 0x13a7) goto B;
        }
    }
    {
        s32 n, cnt, item;
        s32 i;
        func_0205c2dc(unk_6fd, r6, 1, 0);
        func_0205c254(unk_6fd);
        func_02053e70(unk_230, func_021065f8(func_021065dc(), 0), (s32)c, 0, 0x1000, 0, 0, 0);
        n = func_0205c57c(r6);
        if (n < 4) {
            cnt = func_0205c5d0();
            for (i = 0; (u32)i < (u32)cnt; i++) {
                item = func_0205c5ac(n, i);
                func_02053e00(unk_230, item, func_0205c588(n, i));
            }
            if (r7 == 2) {
                i = func_0205c5ac(1, 0);
                func_02053dd8(unk_230, i, func_0205c588(1, 0));
            }
        } else {
            func_02053e28(unk_230, (s32)c, 0);
        }
    }
    goto end;
B:
    func_02053e28(unk_230, (s32)c, 0);
end:
    unk_704 = r6;
}

void Unk_02006d14::func_02010284(s32 b, void *c) {
    u16 v[3];
    v[0] = 0xfff1;
    if (!(Unk_020102a0_IsZero(data_020e416c) && func_0200ec44(0))) {
        v[0] = 0xfff1;
    } else {
        func_02010a7c(&v[1], this);
        v[0] = v[1];
    }
    v[2] = v[0];
    func_02010154(&v[2], b, c);
}
