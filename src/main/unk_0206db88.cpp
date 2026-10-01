// mwcc-flags: -str reuse
#include "types.h"

class Unk_020e4608 {
public:
    BOOL func_020b84a4(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
};

extern "C" {
extern u8 data_021cb420[];
extern u8 data_021ed2f8[];
extern u8 data_021cb410[];
extern s32 data_021cb400;
extern s32 data_021c5384;
extern u8 data_020e416c;
extern u8 data_021f482c[];
extern u8 data_027e0438[24];
extern u8 data_027e0434;

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
void *func_020f5b84(void *);
void func_02001554(u32);
void func_020021a0(u32);
void func_0206ed74();
void func_02001564(u32);
void func_02001738(u32);
void func_020016cc(u32);
void func_020014e4(u32);
BOOL func_0203a5ac();
void func_02002398(u32, u32);
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
void func_020b901c();
void func_020015e0(u32);
void func_020014ac(u32);
void func_0206ef5c();
BOOL func_0203a830();
void func_0206eda4();
void func_02001650(s32, s32, s32, s32);
BOOL func_0203d4d4();
void func_0206ed80();
u32 func_0209750c();
u16 *_ZN12Unk_02097ff413func_020983ccEv();
void *func_020e8618(void *, u32);
void func_020e85fc(void *, void *);
void func_0203c764(void *, void *, u32);
void *func_0203c6d0(void *);
void *func_0203c6e4(void *);
s32 _ZN12Unk_02097ff413func_020983c0EPt(u32 a, u16 *p);
s32 func_02002580(void *, u32, u32, u32, u32);
void func_0200203c(void *, void *, u32, u32);
s32 func_02002438(void *, u32, u32, u32, u32);
s32 func_02002654(const char *, void *, u32);
void func_020639e8(char *, const void *, ...);
s32 func_020026c4(void *, void *, u32, u32, u32, u32);
s32 func_0200261c(void *, void *, u32, u32, u32, u32);
void func_0200226c(u32, u32, u32, u32);
BOOL func_0205b6e4(void *, void (*)(void), void (*)(void), s32);
void func_0205b69c(void *);
void func_01ffccf4(void);
s32 func_020021fc(u32, u32, u32);

BOOL func_0206df74();
BOOL func_0206df2c();
BOOL func_0206defc();
BOOL func_0206deb8();
BOOL func_0206de50();
BOOL func_0206dddc();
BOOL func_0206ddb4();
BOOL func_0206df70();
BOOL func_0206dd48();
BOOL func_0206dc9c();
BOOL func_0206dc5c();
BOOL func_0206dc2c();

void func_0206e43c(void);
void func_0206e4b8(void);
BOOL func_0206e328();
void func_0206e33c();
void func_0206e3a0();
void func_0206e40c();
void func_0206e200();
void func_0206e220();
void func_0206e020();
BOOL func_0206e084(u32);
BOOL func_0206e184(u32);
BOOL func_0206db94(u32);
void func_0206dbac(u32);
void func_0206dbbc(u32);
void func_0206dbcc(u16 *, u16 *);
}

// 4-byte bss slots accessed as u8/u16/s16
union Slot8 { u8 v; u32 pad; };
union Slot16 { u16 v; u32 pad; };
union SlotS16 { s16 v; u32 pad; };

Slot8 data_021cb460;
s32 data_021cb47c;
s32 data_021cb478;
Slot16 data_021cb474;
SlotS16 data_021cb470;
Slot16 data_021cb46c;
Slot8 data_021cb468;
Slot8 data_021cb464;
u32 data_021cb480[7];

BOOL (*data_020ddf90[])() = {
    func_0206df74, func_0206df2c, func_0206defc, func_0206deb8, func_0206de50,
    func_0206dddc, func_0206ddb4, func_0206df70, func_0206dd48, func_0206dc9c,
    func_0206dc5c, func_0206dc2c, func_0206df70,
};

static inline BOOL Unk_0206dc9c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" void func_0206e4b8(void) {
    s32 i, b, t;
    if (data_021cb470.v > 20) {
        data_021cb470.v -= 20;
    } else {
        func_0205b69c(data_021cb480);
        data_021cb468.v &= ~1;
        func_02001650(0, 0, 255, 192);
        *(volatile u16 *)0x4000042 = 0xff;
        data_021cb470.v = 0;
    }
    i = 0;
    b = data_021cb470.v;
    for (; i < 24; i++) {
        t = b - i;
        if (t < 0) {
            data_027e0438[i] = 0;
        } else if (t > 0xfe) {
            data_027e0438[i] = 0xfe;
        } else {
            data_027e0438[i] = t;
        }
    }
    *(volatile u16 *)0x4000042 = ((data_027e0438[0] << 8) & 0xff00) | 0xff;
}

extern "C" void func_0206e43c(void) {
    s32 i, b, t;
    if (data_021cb470.v < 0x103) {
        data_021cb470.v += 20;
    } else {
        func_0205b69c(data_021cb480);
        data_021cb468.v &= ~1;
        data_021cb470.v = 0xfe;
        *(volatile u16 *)0x4000042 = 0xfeff;
    }
    i = 0;
    b = data_021cb470.v;
    for (; i < 24; i++) {
        t = b - i;
        if (t < 0) {
            data_027e0438[i] = 0;
        } else if (t > 0xfe) {
            data_027e0438[i] = 0xfe;
        } else {
            data_027e0438[i] = t;
        }
    }
}

extern "C" void func_0206e40c(void) {
    if (data_021cb468.v & 1) {
        func_0205b69c(data_021cb480);
        data_021cb468.v &= ~1;
    }
}

extern "C" void func_0206e3a0(void) {
    s32 i;
    data_021cb470.v = 0x117;
    if (func_0205b6e4(data_021cb480, func_01ffccf4, (void (*)(void))func_0206e4b8, 0)) {
        data_021cb468.v |= 1;
    }
    for (i = 0; i < 24; i++) {
        data_027e0438[i] = 0xfe;
    }
    func_02001650(data_021cb470.v, 0, 255, 192);
    data_027e0434 = 0;
}

extern "C" void func_0206e33c(void) {
    s32 i;
    data_021cb470.v = 0;
    if (func_0205b6e4(data_021cb480, func_01ffccf4, (void (*)(void))func_0206e43c, 0)) {
        data_021cb468.v |= 1;
    }
    for (i = 0; i < 24; i++) {
        data_027e0438[i] = 0;
    }
    func_02001650(1, 0, 255, 192);
    data_027e0434 = 0;
}

extern "C" BOOL func_0206e328(void) {
    if (data_021cb468.v & 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206e308(void) {
    if ((u16)(data_021cb474.v + 0xfffb) <= 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206e2f4(void) {
    if (data_021cb474.v == 12) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0206e240(u16 *p, Unk_020e4608 *x, u8 *img, u16 *pal) {
    u32 r = func_0209750c();
    BOOL in1 = FALSE;
    u32 v = *p;
    if (v >= 0x11a8 && v <= 0x12a7) in1 = TRUE;
    if (in1 || (v >= 0x12a8 && v <= 0x12af)) {
        void *heap = *(void **)data_021f482c;
        void *o = func_020e8618(heap, 0x2c4);
        if (o != NULL) {
            func_0203c764(o, p, r);
            func_0206dbcc((u16 *)func_0203c6d0(o), pal);
            func_0200203c(func_0203c6e4(o), img, 4, 4);
            func_020e85fc(heap, o);
            if (x->func_020b84a4((u32)img, 5, 0, 0, 0xf, (u32)pal, 0) != 0) {
                _ZN12Unk_02097ff413func_020983c0EPt(r, p);
            }
        }
    }
}

extern "C" void func_0206e220() {
    func_02002398(1, 1);
    func_0200226c(1, 0, 0, 0);
}

extern "C" void func_0206e200() {
    func_02002398(5, 3);
    func_0200226c(5, 0, 0, 0);
}

extern "C" BOOL func_0206e184(u32 arg) {
    char buf[0x24];
    void *heap = *(void **)data_021f482c;
    if (!func_02002654("menu/inventory/b_itm_back.bsc", heap, arg)) {
        return FALSE;
    }
    func_020639e8(buf, "menu/bas/b_bas_%d.bpl", data_021cb464.v);
    if (!func_020026c4(buf, heap, arg, 0, 0, 0)) {
        return FALSE;
    }
    func_020639e8(buf, "menu/bas/b_bas_%d.bch", data_021cb464.v);
    func_0200261c(buf, heap, arg, 0, 0, 0xf);
    return TRUE;
}

extern "C" BOOL func_0206e084(u32 arg) {
    if (data_021cb464.v != 4) {
        return func_0206e184(arg);
    }
    BOOL ok;
    void *heap = *(void **)data_021f482c;
    s32 r = func_0209750c();
    u16 tmp = *_ZN12Unk_02097ff413func_020983ccEv();
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
    ok = func_02002580(b, arg, 0, 0, 0);
    func_0200203c(func_0203c6e4(c), a, 4, 4);
    ok &= func_02002438(a, arg, 0, 0, 0xf);
    func_020e85fc(heap, a);
    func_020e85fc(heap, b);
    func_020e85fc(heap, c);
    ok &= func_02002654("menu/inventory/b_itm_back.bsc", heap, arg);
    return ok;
}

extern "C" void func_0206e070() {
    data_021cb474.v = 8;
    func_0206ed80();
}

extern "C" void func_0206e048() {
    func_0206e220();
    data_021cb474.v = 1;
    data_021cb464.v = 4;
    func_0206ed80();
}

extern "C" void func_0206e03c() { func_0206dbac(1); }

extern "C" void func_0206e020() {
    data_021cb46c.v = 0;
    data_021cb474.v = 0;
    data_021cb470.v = 0;
}

extern "C" void func_0206dfe4() {
    if (!func_0203d4d4()) {
        func_020021a0(1);
        func_020021a0(5);
    }
    func_02001554(2);
    data_021c5384 = 0;
    func_0206ed74();
    func_0206e020();
    func_0206e40c();
}// Declarations for data defined further down (definition order sets the data layout)




extern "C" void func_0206df78() {
    if (data_020ddf90[data_021cb474.v]()) {
        data_021cb46c.v = (data_021cb46c.v + 1) & 0x1ff;
        u16 s = data_021cb474.v;
        if (s == 2 || s == 4 || (u16)(s + 0xfff6) <= 1) {
            func_020021fc(1, data_021cb46c.v, data_021cb46c.v);
        } else {
            func_020021fc(5, data_021cb46c.v, data_021cb46c.v);
        }
    }
}

extern "C" BOOL func_0206df74() { return FALSE; }

extern "C" BOOL func_0206df70() { return TRUE; }

extern "C" BOOL func_0206df2c() {
    if (func_0206e084(1)) {
        data_021cb474.v = 2;
        func_020020b8(1);
        func_02001564(2);
        func_02001738(0x1f);
        func_020016cc(0x1b);
        func_0206e3a0();
        return func_0206defc();
    }
    return TRUE;
}

extern "C" BOOL func_0206defc() {
    if (!func_0206e328()) {
        func_02001650(1, 0, 0xff, 0xc0);
        data_021cb474.v = 3;
        func_0206e200();
    }
    return TRUE;
}

extern "C" BOOL func_0206deb8() {
    if (func_0203a830()) {
        func_0206eda4();
        func_0206ee00(0);
        data_021cb47c = 0x1000;
        data_021cb478 = 0x200;
        data_021cb474.v = 4;
    }
    return TRUE;
}

extern "C" BOOL func_0206de50() {
    if (func_0206e084(5)) {
        func_02001554(2);
        func_020014ac(0xf);
        func_020020b8(5);
        data_021c5384 = 1;
        func_0206ed74();
        func_0206ef5c();
        func_020021a0(1);
        data_021cb474.v = 5;
        if (Unk_0206dc9c_IsZero(data_020e416c)) {
            func_020b9044(1);
        }
    }
    return TRUE;
}

extern "C" BOOL func_0206dddc() {
    if (data_021cb47c == 0) {
        data_021cb474.v = 6;
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

extern "C" BOOL func_0206ddb4() {
    func_02001554(1);
    func_02001554(2);
    func_020014e4(0xe);
    data_021cb474.v = 7;
    return TRUE;
}

extern "C" BOOL func_0206dd48() {
    if (func_0203a35c()) {
        func_0203a32c();
    }
    if (Unk_0206dc9c_IsZero(data_020e416c)) {
        func_0203d4c8(0);
        func_020b9044(1);
        func_020014e4(8);
    }
    data_021cb474.v = 9;
    data_021cb47c = 0x1000;
    data_021cb478 = 0x200;
    func_0206dbbc(1);
    return TRUE;
}

extern "C" BOOL func_0206dc9c() {
    if (data_021cb47c == 0) {
        if (!func_0206db94(1)) {
            func_02002398(5, 1);
            func_0206e084(1);
            func_0206ed98();
            data_021cb474.v = 10;
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

extern "C" BOOL func_0206dc5c() {
    func_02001564(2);
    func_02001554(1);
    func_02001738(0x1f);
    func_020016cc(0x1b);
    func_020014e4(10);
    func_0206e33c();
    if (func_0203a5ac()) {
        data_021cb474.v = 0xb;
    }
    return TRUE;
}

extern "C" BOOL func_0206dc2c() {
    if (!func_0206e328()) {
        data_021cb474.v = 0xc;
        func_02001554(2);
        func_020021a0(1);
        func_0206ed74();
    }
    return TRUE;
}

extern "C" void func_0206dbcc(u16 *src, u16 *dst) {
    s32 i;
    src[0] = 0;
    for (i = 1; i < 16; i++) {
        u16 v = src[i];
        u16 r = v & 0x1f;
        u16 g = (v & 0x3e0) >> 5;
        u16 b = (v & 0x7c00) >> 10;
        r = (r + 0x1f) >> 1;
        g = (g + 0x1f) >> 1;
        b = (b + 0x1f) >> 1;
        dst[i] = r | (g << 5) | (b << 10);
    }
}

extern "C" void func_0206dbbc(u32 a) { data_021cb460.v |= a; }

extern "C" void func_0206dbac(u32 a) { data_021cb460.v &= ~a; }

extern "C" BOOL func_0206db94(u32 a) {
    if (a == (a & data_021cb460.v)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0206db88(u32 a) { data_021cb464.v = a; }






