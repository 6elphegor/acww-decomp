#include "types.h"

extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void *memset(void *, s32, u32);
void func_02115fb4(void *dst, s32 v, u32 n);
void func_02116048(void *src, void *dst, u32 n);
u32 func_02063b8c(u32 n);

void func_02004b60();
void func_0203442c();
void func_02080fd0();
void func_02080fe8();
void func_02080fa8(void *);

void *func_02065634(u32);
void func_020942d8(void *, void *);
s32 func_02094218(void *);
void func_020942c8(void *);
void *func_0207f854(void *, void *);
void func_02065e70(void *, u32);
void func_02063990(void *, const void *);
u32 func_020655d0(u32);
void func_02061168(u16 *, u16 *, s32);
s32 func_0204b2d4(u16 *);
void func_0207cfb8(void *, u16 *);
void func_0200309c(void *, u32, u32, u32);
void func_02050fd0(void *);
void func_02081218(void *);
void func_02081200(void *);
s32 func_020813bc(void *, u32);
void func_020811cc(void *, void *, s32);
void *func_020815b4(u32);
void func_0207e394(void *, u32);
void func_0207e388(void *, u32);
void *func_0207e268(void *);
void func_0209a614(void *, void *, u32);
u32 func_0209a610(void *);
u32 func_0209b354(u32);
void func_0207e4b4(void *, u32, u32);
void func_0207c6d4(void *);
void func_0207dfdc(void *, u32);
void func_020030e8(void *);
void func_0207fc08(void *);
void func_020639a0(void *);
void func_0208104c(void *);
void func_0209a628(void *);
void func_02065c94(void *);
void func_0207d08c(void *);
void func_020639b8(void *);
void func_02081054(void *);
void func_02003100(void *);
void func_0209a640(void *);
void func_02065cc8(void *);
void func_02071e5c(void *);
void func_02071e74(void *);
void func_02065cd4(void *);
void func_0209a658(void *);
void func_02003130(void *);
void func_020639bc(void *);
void func_02081058(void *);
void func_020810a8(void *);
void func_02081090(void *);
void func_02081158(void *);
void func_02081140(void *);
void func_020a78a4(void *, void *, s32);
void func_020a7aa0(void *, void *, s32, s32);
void func_02093fd8(void *);
void func_02093fc0(void *);
void func_02093f90(void *, void *, s32);
void func_020a77f8(void *, void *);
s32 func_02128930(void *, void *, u32);
s32 func_020941e8(void *, void *);
extern u8 data_021d7352[];
}

// ---------------------------------------------------------------- Unk_0208091c
struct Unk_0208091c {
    u8 unk_00[0x16];
    u8 unk_16[8];
    u8 unk_1e[0x10];
    u8 unk_2e[0x10];
    u8 unk_3e[0x14];
    u16 unk_52;
    s8 unk_54;
    u8 unk_55;
    u8 unk_56[2];
    u32 unk_58;
    long long unk_5c;
    struct {
        u16 f0 : 1;
        u16 f1 : 1;
        u16 f2 : 1;
        u16 f3 : 1;
        u16 f4 : 1;
        u16 f5 : 1;
        u16 f6 : 1;
        u16 f7 : 1;
        u16 pad8 : 3;
        u16 f11 : 1;
        u16 f12 : 1;
        u16 f13 : 1;
        u16 f14 : 1;
        u16 f15 : 1;
    } unk_64;
    u8 unk_66[2];

    BOOL func_0208091c();
    void func_02080930();
    void func_02080940();
    BOOL func_02080950();
    void func_02080964();
    void func_02080978();
    BOOL func_0208098c();
    void func_020809a0();
    void func_020809b4();
    BOOL func_020809c8();
    void func_020809dc();
    void func_020809f0();
    BOOL func_02080a04();
    void func_02080a18();
    void func_02080a2c();
    BOOL func_02080a40();
    void func_02080a54();
    void func_02080a64();
    BOOL func_02080a74();
    void func_02080a88();
    void func_02080a98();
    BOOL func_02080aa8();
    void func_02080abc();
    s32 func_02080acc();
    void func_02080b38(s32 v);
    u32 func_02080b40();
    void func_02080b48(long long *src);
    BOOL func_02080b60();
    u16 *func_02080b74();
    void func_02080b78(u16 *p);
    void func_02080b80(void *src, s32 n);
    void func_02080bb8(void *out);
    void func_02080bdc(void *out);
    BOOL func_02080c0c();
    void func_02080c20(void *src, s32 n);
    void func_02080c58(void *out);
    void func_02080c7c(void *out);
    BOOL func_02080cb8();
    void func_02080ccc(void *src, s32 n);
    void func_02080cf8(void *out);
    void func_02080d28(void *out);
    void func_02080d4c(void *out);
    void func_02080d7c();
    BOOL func_02080d90();
    s32 func_02080da4(s32 d);
    void func_02080dd0(s8 v);
    s32 func_02080dd8();
};

BOOL Unk_0208091c::func_0208091c() { if (unk_64.f5) return TRUE; return FALSE; }
void Unk_0208091c::func_02080930() { unk_64.f5 = 0; }
void Unk_0208091c::func_02080940() { unk_64.f5 = 1; }
BOOL Unk_0208091c::func_02080950() { if (unk_64.f14) return TRUE; return FALSE; }
void Unk_0208091c::func_02080964() { unk_64.f14 = 0; }
void Unk_0208091c::func_02080978() { unk_64.f14 = 1; }
BOOL Unk_0208091c::func_0208098c() { if (unk_64.f13) return TRUE; return FALSE; }
void Unk_0208091c::func_020809a0() { unk_64.f13 = 0; }
void Unk_0208091c::func_020809b4() { unk_64.f13 = 1; }
BOOL Unk_0208091c::func_020809c8() { if (unk_64.f12) return TRUE; return FALSE; }
void Unk_0208091c::func_020809dc() { unk_64.f12 = 0; }
void Unk_0208091c::func_020809f0() { unk_64.f12 = 1; }
BOOL Unk_0208091c::func_02080a04() { if (unk_64.f11) return TRUE; return FALSE; }
void Unk_0208091c::func_02080a18() { unk_64.f11 = 0; }
void Unk_0208091c::func_02080a2c() { unk_64.f11 = 1; }
BOOL Unk_0208091c::func_02080a40() { if (unk_64.f7) return TRUE; return FALSE; }
void Unk_0208091c::func_02080a54() { unk_64.f7 = 0; }
void Unk_0208091c::func_02080a64() { unk_64.f7 = 1; }
BOOL Unk_0208091c::func_02080a74() { if (unk_64.f6) return TRUE; return FALSE; }
void Unk_0208091c::func_02080a88() { unk_64.f6 = 0; }
void Unk_0208091c::func_02080a98() { unk_64.f6 = 1; }
BOOL Unk_0208091c::func_02080aa8() { if (unk_64.f4) return TRUE; return FALSE; }
void Unk_0208091c::func_02080abc() { unk_64.f4 = 1; }

s32 Unk_0208091c::func_02080acc() {
    u32 cnt = 0, idx = 0;
    s32 i;
    u32 n;
    if (unk_58 == -1) unk_58 = 0;
    i = 0;
    u32 m = unk_58;
    for (; i < 32; i++) {
        if (((m >> i) & 1) == 0) cnt++;
    }
    n = func_02063b8c(cnt);
    for (i = 0; i < 32; i++) {
        if (((unk_58 >> i) & 1) == 0) {
            if (n == 0) {
                idx = i;
                break;
            }
            n--;
        }
    }
    if (cnt == 1) unk_58 = 0;
    unk_58 = unk_58 | (1 << idx);
    return idx;
}

void Unk_0208091c::func_02080b38(s32 v) { unk_55 = v; }
u32 Unk_0208091c::func_02080b40() { return unk_55; }
void Unk_0208091c::func_02080b48(long long *src) {
    unk_64.f2 = 1;
    unk_5c = *src;
}
BOOL Unk_0208091c::func_02080b60() { if (unk_64.f2 == 1) return TRUE; return FALSE; }
u16 *Unk_0208091c::func_02080b74() { return &unk_52; }
void Unk_0208091c::func_02080b78(u16 *p) { unk_52 = *p; }

void Unk_0208091c::func_02080b80(void *src, s32 n) {
    func_02115fb4(unk_2e, 0, 0x10);
    if (n > 0x10) n = 0x10;
    func_02116048(src, unk_2e, n);
    unk_64.f3 = 1;
}
void Unk_0208091c::func_02080bb8(void *out) {
    func_02050fd0(out);
    func_020a78a4(out, unk_2e, 0x10);
}
void Unk_0208091c::func_02080bdc(void *out) {
    u32 tmp[9];
    func_020810a8(tmp);
    func_02080bb8(tmp);
    func_020a7aa0(out, tmp, 0, 0);
    func_02081090(tmp);
}
BOOL Unk_0208091c::func_02080c0c() { if (unk_64.f3 == 1) return TRUE; return FALSE; }
void Unk_0208091c::func_02080c20(void *src, s32 n) {
    func_02115fb4(unk_1e, 0, 0x10);
    if (n > 0x10) n = 0x10;
    func_02116048(src, unk_1e, n);
    unk_64.f1 = 1;
}
void Unk_0208091c::func_02080c58(void *out) {
    func_02050fd0(out);
    func_020a78a4(out, unk_1e, 0x10);
}
void Unk_0208091c::func_02080c7c(void *out) {
    u32 tmp[9];
    func_02081158(tmp);
    func_02080c58(tmp);
    func_020a78a4(tmp, unk_1e, 0x10);
    func_020a7aa0(out, tmp, 0, 0);
    func_02081140(tmp);
}
BOOL Unk_0208091c::func_02080cb8() { if (unk_64.f1 == 1) return TRUE; return FALSE; }
void Unk_0208091c::func_02080ccc(void *src, s32 n) {
    func_02115fb4(unk_16, 0, 8);
    if (n > 8) n = 8;
    func_02116048(src, unk_16, n);
}
void Unk_0208091c::func_02080cf8(void *out) {
    u32 tmp[7];
    func_02093fd8(tmp);
    func_020a77f8(tmp, out);
    func_02093f90(tmp, unk_16, 8);
    func_02093fc0(tmp);
}
void Unk_0208091c::func_02080d28(void *out) {
    func_02050fd0(out);
    func_020a78a4(out, unk_16, 8);
}
void Unk_0208091c::func_02080d4c(void *out) {
    u32 tmp[7];
    func_02093fd8(tmp);
    func_02080d28(tmp);
    func_020a7aa0(out, tmp, 0, 0);
    func_02093fc0(tmp);
}
void Unk_0208091c::func_02080d7c() { unk_64.f0 = 1; }
BOOL Unk_0208091c::func_02080d90() { if (unk_64.f0 == 1) return TRUE; return FALSE; }
s32 Unk_0208091c::func_02080da4(s32 d) {
    s32 t = unk_54 + d;
    if (t > 0x7f) t = 0x7f;
    else if (t < -0x80) t = -0x80;
    func_02080dd0(t);
    return (s8)t;
}
s32 Unk_0208091c::func_02080dd8() { return unk_54; }

// ---------------------------------------------------------------- Unk_02080860
struct Unk_020805d0_Rec {
    u8 pad_00[6];
    u16 unk_06[10];
    u8 pad_1a[0x12];
    u16 unk_2c;
    u8 unk_2e;
    u8 unk_2f;
    u8 unk_30;
    u8 unk_31;
    u8 unk_32[0x18];
    u8 unk_4a;
};

struct Unk_02080860 {
    Unk_0208091c unk_000[8];
    u32 unk_340[0x228 / 4];
    u32 unk_568[0xf4 / 4];
    u32 unk_65c[0x50 / 4];
    u16 unk_6ac[10];
    u32 unk_6c0[3];
    u16 unk_6cc[4];
    u8 unk_6d4[0xa];
    u8 unk_6de[0xa];
    u32 unk_6e8;
    u16 unk_6ec;
    u8 pad_6ee[2];
    u8 unk_6f0;
    u8 pad_6f1;
    u8 unk_6f2;
    u8 pad_6f3;
    u8 unk_6f4;
    u8 pad_6f5;
    u8 unk_6f6[0xa];

    s32 func_020804d0(u32 id);
    void *func_020805ac();
    void *func_020805b8();
    void *func_020805c4();
    void func_020805d0(u32 id, u32 a, u32 b, u8 c);
    void func_02080704(void *src);
    void func_02080718();
    Unk_02080860 *func_020807c8();
    Unk_02080860 *func_02080860();
};

s32 Unk_02080860::func_020804d0(u32 id) {
    Unk_0208091c *e = 0;
    u32 buf[6];
    volatile u16 v[2];
    void *p = func_02065634(id);
    BOOL r = FALSE;
    if (p) {
        func_020942d8(buf, p);
        if (func_02094218(buf)) {
            e = (Unk_0208091c *)func_0207f854(this, buf);
        }
        func_020942c8(buf);
    }
    if (e) {
        e->func_02080d7c();
        func_02065e70(unk_568, id);
        func_02063990(unk_6f6, data_021d7352);
        v[0] = func_020655d0(id);
        if (v[0] != 0xfff1) {
            func_02061168((u16 *)&v[1], (u16 *)&v[0], 1);
            if (func_0204b2d4((u16 *)&v[1]) == 0) {
                BOOL f = FALSE;
                u32 x = v[1];
                u32 y = v[1];
                if (y >= 0x1100 && x <= 0x1143) f = TRUE;
                if (!f) {
                    if (x < 0x1144 || x > 0x1187) goto done;
                }
            }
            func_0207cfb8(this, (u16 *)&v[0]);
        }
    done:
        r = TRUE;
    }
    return r;
}

void *Unk_02080860::func_020805ac() { return unk_568; }
void *Unk_02080860::func_020805b8() { return unk_340; }
void *Unk_02080860::func_020805c4() { return unk_6c0; }

void Unk_02080860::func_020805d0(u32 id, u32 a, u32 b, u8 c) {
    Unk_020805d0_Rec *rec = (Unk_020805d0_Rec *)func_020815b4(id);
    u32 t = 0;
    u32 tmp[7];
    func_02081218(tmp);
    if (rec) t = rec->unk_4a;
    func_0200309c(unk_6c0, id, t, b);
    func_02050fd0(tmp);
    if (func_020813bc(tmp, id)) {
        func_020811cc(tmp, unk_6de, 10);
    }
    if (rec) {
        u32 h = rec->unk_2c;
        u16 t2;
        if (h < 0x100) t2 = h + 0x11a8;
        else t2 = 0x11a8;
        unk_6ec = t2;
        for (s32 i = 0; i < 10; i++) unk_6ac[i] = rec->unk_06[i];
        func_0207e394(this, rec->unk_30);
        func_0207e388(this, rec->unk_31);
        func_0209a614(func_0207e268(this), rec->unk_32, c);
        func_0207e4b4(this, func_0209b354(func_0209a610(func_0207e268(this))), 0);
        unk_6f2 = rec->unk_2f;
        if (func_0209b354(func_0209a610(func_0207e268(this))) == 2) {
            unk_6f2 = unk_6f2 % 10;
        }
        func_0207c6d4(this);
        unk_6f4 = rec->unk_2e;
    }
    func_0207dfdc(this, a);
    func_02081200(tmp);
}

void Unk_02080860::func_02080704(void *src) { func_02116048(src, this, 0x700); }

void Unk_02080860::func_02080718() {
    func_02115fb4(this, 0, 0x700);
    func_020030e8(unk_6c0);
    unk_6ec = 0x11a8;
    func_0207fc08(this);
    for (s32 i = 0; i < 8; i++) func_02080fa8(&unk_000[i]);
    func_020639a0(unk_6d4);
    for (s32 i = 0; i < 10; i++) unk_6ac[i] = 0xfff1;
    func_0208104c(&unk_6e8);
    func_0209a628(unk_65c);
    unk_6f0 = 3;
    func_02065c94(unk_568);
    func_0207d08c(this);
    func_020639a0(unk_6f6);
}

Unk_02080860 *Unk_02080860::func_020807c8() {
    func_020639b8(unk_6f6);
    func_02081054(&unk_6e8);
    func_020639b8(unk_6d4);
    __cxa_vec_cleanup(unk_6cc, 4, 2, (void *(*)(void *, s32))func_02004b60);
    func_02003100(unk_6c0);
    __cxa_vec_cleanup(unk_6ac, 10, 2, (void *(*)(void *, s32))func_02004b60);
    func_0209a640(unk_65c);
    func_02065cc8(unk_568);
    func_02071e5c(unk_340);
    __cxa_vec_cleanup(this, 8, 0x68, (void *(*)(void *, s32))func_02080fd0);
    return this;
}

Unk_02080860 *Unk_02080860::func_02080860() {
    __cxa_vec_ctor(this, 8, 0x68, (void *(*)(void *))func_02080fe8, (void *(*)(void *, s32))func_02080fd0);
    func_02071e74(unk_340);
    func_02065cd4(unk_568);
    func_0209a658(unk_65c);
    __cxa_vec_ctor(unk_6ac, 10, 2, (void *(*)(void *))func_0203442c, (void *(*)(void *, s32))func_02004b60);
    func_02003130(unk_6c0);
    __cxa_vec_ctor(unk_6cc, 4, 2, (void *(*)(void *))func_0203442c, (void *(*)(void *, s32))func_02004b60);
    func_020639bc(unk_6d4);
    func_02081058(&unk_6e8);
    unk_6ec = 0xfff1;
    func_020639bc(unk_6f6);
    return this;
}

#pragma dont_inline on
void Unk_0208091c::func_02080dd0(s8 v) { unk_54 = v; }
#pragma dont_inline reset

// ---------------------------------------------------------------- func_02080de0
struct Unk_02080de0 {
    u16 unk_00;
    u8 unk_02[8];
};

extern "C" BOOL func_02080de0(Unk_02080de0 *a, Unk_02080de0 *b) {
    if (a->unk_00 == b->unk_00 && func_02128930(a->unk_02, b->unk_02, 8) == 0 && func_020941e8(a, b) != 0) return TRUE;
    return FALSE;
}
