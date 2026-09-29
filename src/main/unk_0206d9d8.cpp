#include "types.h"

extern "C" {
extern u8 data_021cb420[];
extern u8 data_021ed2f8[];
extern u8 data_021cb410[];
extern s32 data_021cb400;
extern u8 data_021cb464;
extern u8 data_021cb460;
extern u16 data_021cb474;
extern u16 data_021cb46c;
extern u16 data_021cb470;
extern s32 data_021cb47c;
extern s32 data_021cb478;
extern s32 data_021c5384;
extern u8 data_020e416c;
extern u8 data_021f482c[];
extern u8 data_020ddfc4[];
extern u8 data_020ddfe4[];
extern u8 data_020ddffc[];
extern BOOL (*data_020ddf90[])();

u8 *func_02003ac8(void *);
u8 *func_02003ad0(void *);
void func_02003ad8(void *, u32);
BOOL func_02003ae0(void *);
void func_02003af0(void *, u32);
void func_02003af8(void *);
void func_02003b00(void *, u32);
void func_02003b08(void *, u32, u32);
void func_02003b44(void *, u32, void *);
void func_02003b4c(void *, void *);
s64 func_02133540(u32, u32, u32);
s64 func_02133120(s32, s32, u32);
void *func_020f5b84(void *);
BOOL func_0206e328();
void func_02001554(u32);
void func_020021a0(u32);
void func_0206ed74();
void func_02001564(u32);
void func_02001738(u32);
void func_020016cc(u32);
void func_020014e4(u32);
void func_0206e33c();
BOOL func_0203a5ac();
void func_02002398(u32, u32);
BOOL func_0206e084(u32);
BOOL func_0206e184(u32);
void func_0206ed98();
void func_020020b8(u32);
void func_02011940();
void func_020b9044(u32);
void func_0206ef68();
void func_0203d4c4(u32);
s32 func_01ffcb0c(s32, s32);
void func_0206ee00(s32);
BOOL func_0203a35c();
void func_0203a32c();
void func_0203d4c8(u32);
void func_0206dbbc(u32);
void func_020b901c();
void func_020015e0(u32);
void func_020014ac(u32);
void func_0206ef5c();
BOOL func_0203a830();
void func_0206eda4();
void func_02001650(u32, u32, u32, u32);
void func_0206e200();
s32 func_020021fc(u32, u32, u32);
BOOL func_0206defc();
void func_0206e3a0();
BOOL func_0203d4d4();
void func_0206e020();
void func_0206e40c();
void func_0206e220();
void func_0206ed80();
u32 func_0209750c();
u16 *func_020983cc();
void *func_020e8618(void *, u32);
void func_020e85fc(void *, void *);
void func_0203c764(void *, void *, u32);
void *func_0203c6d0(void *);
void *func_0203c6e4(void *);
void func_0206dbcc(u16 *, u16 *);
void func_0206db34(u32 *, u8 *);
void func_0206db0c(u32 *, u8 *);
void func_0206dad8();
void func_0206d9d8();
s32 func_02002580(void *, u32, u32, u32, u32);
void func_0200203c(void *, void *, u32, u32);
s32 func_02002438(void *, u32, u32, u32, u32);
s32 func_02002654(void *, void *, u32);
void func_020639e8(char *, const void *, ...);
s32 func_020026c4(void *, void *, u32, u32, u32, u32);
s32 func_0200261c(void *, void *, u32, u32, u32, u32);
void func_0200226c(u32, u32, u32, u32);
}

static inline BOOL Unk_0206dc9c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" {

void func_0206d9d8() {
    u8 *p = func_02003ac8(data_021cb420);
    if (p) {
        func_0206db34((u32 *)data_021ed2f8, p);
    }
}

void func_0206d9fc() {
    u8 *p = func_02003ad0(data_021cb420);
    if (p) {
        func_0206db34((u32 *)data_021ed2f8, p);
    }
}

void func_0206da20(u32 a) { func_02003ad8(data_021cb420, a); }

BOOL func_0206da30() {
    if (data_021cb400 != 0 || func_02003ae0(data_021cb420)) {
        return TRUE;
    }
    return FALSE;
}

void func_0206da5c(u32 a) { func_02003af0(data_021cb420, a); }

void func_0206da6c(s32 a) {
    func_02003af8(data_021cb420);
    if (a != 0) {
        data_021cb400 = 0x190;
    } else {
        data_021cb400 = 0x14;
    }
}

void func_0206da9c(u32 a, u32 b) { func_02003b08(data_021cb420, a, b); }

void func_0206dab0(u32 a) { func_02003b00(data_021cb420, a); }

void func_0206dac0(u32 a) { func_02003b44(data_021cb420, a, data_021cb410); }

void func_0206dad8() { func_02003b4c(data_021cb420, data_021cb410); }

void func_0206daec(u32 *a) {
    func_0206db0c(a, data_021cb410);
    func_0206dad8();
}

void func_0206db04() { func_0206d9d8(); }

void func_0206db0c(u32 *src, u8 *dst) {
    s32 i;
    for (i = 0; i < 16; i++) {
        dst[i] = (u8)(func_02133540(src[0], src[1], i * 4) & 0xf);
    }
}

void func_0206db34(u32 *dst, u8 *src) {
    s32 i;
    dst[0] = 0;
    dst[1] = 0;
    for (i = 0; i < 16; i++) {
        s32 v = src[i] & 0xf;
        *(s64 *)dst |= (s64)v << (i * 4);
    }
}

void *func_0206db70(void *self) {
    func_020f5b84((u8 *)self + 0x14);
    func_020f5b84(self);
    return self;
}

void func_0206db88(u32 a) { data_021cb464 = a; }

BOOL func_0206db94(u32 a) {
    if (a == (a & data_021cb460)) {
        return TRUE;
    }
    return FALSE;
}

void func_0206dbac(u32 a) { data_021cb460 &= ~a; }

void func_0206dbbc(u32 a) { data_021cb460 |= a; }

}

extern "C" {

void func_0206dbcc(u16 *src, u16 *dst) {
    s32 i;
    src[0] = 0;
    for (i = 1; i < 16; i++) {
        u16 v = src[i];
        u16 r = v & 0x1f;
        u16 g = (v & 0x3e0) >> 5;
        u16 b = (v & 0x7c00) >> 10;
        u16 r2 = (r + 0x1f) >> 1;
        u16 g2 = (g + 0x1f) >> 1;
        u16 b2 = (b + 0x1f) >> 1;
        u16 o = r2;
        o |= g2 << 5;
        o |= b2 << 10;
        dst[i] = o;
    }
}

BOOL func_0206dc2c() {
    if (!func_0206e328()) {
        data_021cb474 = 0xc;
        func_02001554(2);
        func_020021a0(1);
        func_0206ed74();
    }
    return TRUE;
}

BOOL func_0206dc5c() {
    func_02001564(2);
    func_02001554(1);
    func_02001738(0x1f);
    func_020016cc(0x1b);
    func_020014e4(10);
    func_0206e33c();
    if (func_0203a5ac()) {
        data_021cb474 = 0xb;
    }
    return TRUE;
}

BOOL func_0206dc9c() {
    if (data_021cb47c == 0) {
        if (!func_0206db94(1)) {
            func_02002398(5, 1);
            func_0206e084(1);
            func_0206ed98();
            data_021cb474 = 10;
            data_021c5384 = 0;
            func_020014e4(0xe);
            func_020020b8(1);
            func_020021a0(5);
            func_02011940();
            if (Unk_0206dc9c_IsZero(data_020e416c)) {
                func_020b9044(0);
            }
            func_0206ef68();
            func_0203d4c4(0);
        }
    }
    if (data_021cb47c > data_021cb478) {
        data_021cb47c -= data_021cb478;
    } else {
        data_021cb47c = 0;
    }
    func_0206ee00(func_01ffcb0c(data_021cb47c, data_021cb47c));
    return TRUE;
}

}

extern "C" {

BOOL func_0206dd48() {
    if (func_0203a35c()) {
        func_0203a32c();
    }
    if (Unk_0206dc9c_IsZero(data_020e416c)) {
        func_0203d4c8(0);
        func_020b9044(1);
        func_020014e4(8);
    }
    data_021cb474 = 9;
    data_021cb47c = 0x1000;
    data_021cb478 = 0x200;
    func_0206dbbc(1);
    return TRUE;
}

BOOL func_0206ddb4() {
    func_02001554(1);
    func_02001554(2);
    func_020014e4(0xe);
    data_021cb474 = 7;
    return TRUE;
}

BOOL func_0206dddc() {
    if (data_021cb47c == 0) {
        data_021cb474 = 6;
        if (Unk_0206dc9c_IsZero(data_020e416c)) {
            func_020b901c();
        }
        func_020015e0(0);
        return TRUE;
    }
    if (data_021cb47c > data_021cb478) {
        data_021cb47c -= data_021cb478;
    } else {
        data_021cb47c = 0;
    }
    func_0206ee00(0x1000 - func_01ffcb0c(data_021cb47c, data_021cb47c));
    return TRUE;
}

BOOL func_0206de50() {
    if (func_0206e084(5)) {
        func_02001554(2);
        func_020014ac(0xf);
        func_020020b8(5);
        data_021c5384 = 1;
        func_0206ed74();
        func_0206ef5c();
        func_020021a0(1);
        data_021cb474 = 5;
        if (Unk_0206dc9c_IsZero(data_020e416c)) {
            func_020b9044(1);
        }
    }
    return TRUE;
}

BOOL func_0206deb8() {
    if (func_0203a830()) {
        func_0206eda4();
        func_0206ee00(0);
        data_021cb47c = 0x1000;
        data_021cb478 = 0x200;
        data_021cb474 = 4;
    }
    return TRUE;
}

BOOL func_0206defc() {
    if (!func_0206e328()) {
        func_02001650(1, 0, 0xff, 0xc0);
        data_021cb474 = 3;
        func_0206e200();
    }
    return TRUE;
}

BOOL func_0206df2c() {
    if (func_0206e084(1)) {
        data_021cb474 = 2;
        func_020020b8(1);
        func_02001564(2);
        func_02001738(0x1f);
        func_020016cc(0x1b);
        func_0206e3a0();
        return func_0206defc();
    }
    return TRUE;
}

BOOL func_0206df70() { return TRUE; }

BOOL func_0206df74() { return FALSE; }

void func_0206df78() {
    if (data_020ddf90[data_021cb474]()) {
        data_021cb46c = (data_021cb46c + 1) & 0x1ff;
        u16 s = data_021cb474;
        if (s == 2 || s == 4 || (u16)(s + 0xfff6) <= 1) {
            func_020021fc(1, data_021cb46c, data_021cb46c);
        } else {
            func_020021fc(5, data_021cb46c, data_021cb46c);
        }
    }
}

void func_0206dfe4() {
    if (!func_0203d4d4()) {
        func_020021a0(1);
        func_020021a0(5);
    }
    func_02001554(2);
    data_021c5384 = 0;
    func_0206ed74();
    func_0206e020();
    func_0206e40c();
}

void func_0206e020() {
    data_021cb46c = 0;
    data_021cb474 = 0;
    data_021cb470 = 0;
}

void func_0206e03c() { func_0206dbac(1); }

void func_0206e048() {
    func_0206e220();
    data_021cb474 = 1;
    data_021cb464 = 4;
    func_0206ed80();
}

void func_0206e070() {
    data_021cb474 = 8;
    func_0206ed80();
}

}

extern "C" {

BOOL func_0206e084(u32 arg) {
    if (data_021cb464 != 4) {
        return func_0206e184(arg);
    }
    void *heap = *(void **)data_021f482c;
    s32 r = func_0209750c();
    u16 tmp = *func_020983cc();
    void *a = func_020e8618(heap, 0x200);
    if (a == NULL) {
        return FALSE;
    }
    void *b = func_020e8618(heap, 0x20);
    if (b == NULL) {
        func_020e85fc(heap, a);
        return FALSE;
    }
    void *c = func_020e8618(heap, 0x2c4);
    if (c == NULL) {
        func_020e85fc(heap, a);
        func_020e85fc(heap, b);
        return FALSE;
    }
    func_0203c764(c, &tmp, r);
    func_0206dbcc((u16 *)func_0203c6d0(c), (u16 *)b);
    r = func_02002580(b, arg, 0, 0, 0);
    func_0200203c(func_0203c6e4(c), a, 4, 4);
    r &= func_02002438(a, arg, 0, 0, 0xf);
    func_020e85fc(heap, a);
    func_020e85fc(heap, b);
    func_020e85fc(heap, c);
    r &= func_02002654(data_020ddfc4, heap, arg);
    return r;
}

BOOL func_0206e184(u32 arg) {
    char buf[0x24];
    void *heap = *(void **)data_021f482c;
    if (!func_02002654(data_020ddfc4, heap, arg)) {
        return FALSE;
    }
    func_020639e8(buf, data_020ddfe4, data_021cb464);
    if (!func_020026c4(buf, heap, arg, 0, 0, 0)) {
        return FALSE;
    }
    func_020639e8(buf, data_020ddffc, data_021cb464);
    func_0200261c(buf, heap, arg, 0, 0, 0xf);
    return TRUE;
}

void func_0206e200() {
    func_02002398(5, 3);
    func_0200226c(5, 0, 0, 0);
}

void func_0206e220() {
    func_02002398(1, 1);
    func_0200226c(1, 0, 0, 0);
}

}
