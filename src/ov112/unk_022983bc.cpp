#include "types.h"

struct Unk_ov112_0229791c {
    u8 pad_000[0xbc];
    u8 unk_0bc;
    u8 unk_0bd;
    u8 unk_0be;
    u8 unk_0bf;
    u8 pad_0c0;
    u8 unk_0c1;
    u8 pad_0c2[0x370 - 0xc2];
    u8 unk_370[0x40ac - 0x370];
    u8 unk_40ac[0x40f4 - 0x40ac];
    u8 unk_40f4[0x4258 - 0x40f4];
    u8 unk_4258[0x4460 - 0x4258];
    u8 unk_4460[0x20];
};

typedef Unk_ov112_0229791c S;

extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u32 data_021f482c;
extern u8 data_ov112_02299b70[];
extern u8 data_ov112_02299b88[];
extern u8 data_ov112_02299ba0[];
extern u8 data_ov112_02299bb8[];
extern u8 data_ov112_02299bd0[];
extern u8 data_ov112_02299be8[];

extern "C" {
void func_0200402c(s32 a);
BOOL func_0208d9a8(void *p);
BOOL func_0208d4fc(void *p);
void func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_020641b4(void *a, void *b, s32 c);
void func_0206ee80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_0200261c(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);

s32 func_ov002_02200a58(S *s, u32 a);
u32 func_ov002_022009c8(S *s);
BOOL func_ov002_022009d4(S *s);
BOOL func_ov002_02200a14(S *s, u32 a);
BOOL func_ov002_022028f0(void *p);
BOOL func_ov002_02203110(void *p, u32 a);
void func_ov002_02202f00(void *p);
void func_ov002_02202e48(void *p);
void func_ov002_02202ef4(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202ca0(void *p);

BOOL func_ov095_02293da0(void *p);
void func_ov095_02293da8(void *p);
void func_ov095_02293dc0(void *p);
BOOL func_ov095_022942e8(void *p);
u32 func_ov095_02294a40(void *p);
u32 func_ov095_02294864(void *p, u32 a, u32 b);
void func_ov095_02294d40(void *p, u32 a);
u32 func_ov095_02292404(void *p);
u32 func_ov095_02292458(void *p, u32 a);
void func_ov095_02294318(void *p);
void func_ov095_02295194(void *p);
BOOL func_ov095_02294324(void *p);
BOOL func_ov095_02293990(void *p);
void func_ov095_02294648(void *p, u32 a, u32 b, u32 c);
void func_ov095_02294358(void *p, u32 a);
void func_ov095_022943dc(void *p, void *q);
void func_ov095_022943b4(void *p, u32 a);
void func_ov095_022943f8(void *p, u32 a);
s32 func_ov095_02293cc0(void *p);

void func_ov112_02296e14(S *s);
BOOL func_ov112_02296ef8(S *s, u32 a);
void func_ov112_02296ff4(S *s);
void func_ov112_02296c48(S *s);
void func_ov112_02296bdc(S *s);
void func_ov112_02296bfc(S *s);
void func_ov112_02296ce8(S *s);
void func_ov112_02296d6c(S *s);
void func_ov112_02297104(S *s);
BOOL func_ov112_02297108(S *s);
void func_ov112_02297264(S *s);
BOOL func_ov112_02297280(S *s);
s32 func_ov112_02297304(S *s);
s32 func_ov112_0229733c(S *s);
BOOL func_ov112_022973ac(S *s);
BOOL func_ov112_022973dc(S *s);
void func_ov112_02297434(S *s);
void func_ov112_02297540(S *s);
void func_ov112_02297570(S *s);
void func_ov112_02297598(S *s);
void func_ov112_022976a8(S *s);
BOOL func_ov112_022970b0(S *s);
void func_ov112_022977f8(S *s, u32 a);
void func_ov112_02297808(S *s, u32 a);
BOOL func_ov112_02297818(S *s, u32 a);
void func_ov112_0229782c(S *s);
void func_ov112_02297900(S *s);
void func_ov112_0229791c(S *s);
void func_ov112_02297984(S *s);
void func_ov112_022979c0(S *s);
void func_ov112_02297a0c(S *s);
void func_ov112_02297a4c(S *s);
s32 func_ov112_02297cd4(S *s, u32 a);
u32 func_ov112_02297d74(S *s, u32 a);
BOOL func_ov112_02297eb8(S *s);
BOOL func_ov112_02297f1c(S *s);
BOOL func_ov112_02297f48(S *s);
BOOL func_ov112_02297fac(S *s);
BOOL func_ov112_02298018(S *s);
BOOL func_ov112_022980b0(S *s);
BOOL func_ov112_02298114(S *s);
void func_ov112_02299434(S *s);
}

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

extern "C" {
void func_ov112_022983bc(S *s);
void func_ov112_022983e0(S *s);
void func_ov112_02298410(S *s);
void func_ov112_02298440(S *s);
void func_ov112_022984b4(S *s);
void func_ov112_022985b8(S *s);
void func_ov112_02298624(S *s);
void func_ov112_0229864c(S *s);
void func_ov112_022986a8(S *s);
void func_ov112_0229877c(S *s);
void func_ov112_022987a8(S *s);
void func_ov112_02298860(S *s);
void func_ov112_022988cc(S *s);
void func_ov112_02298928(S *s);
void func_ov112_02298988(S *s);
void func_ov112_022989c4(S *s);
void func_ov112_02298a00(S *s);
void func_ov112_02298b40(S *s);
void func_ov112_02298c30();
void func_ov112_02298c68(S *s);

void func_ov112_022983bc(S *s) {
    if (func_0208d9a8(s->unk_40ac)) {
        func_ov002_02200a58(s, 0x11);
    }
}

void func_ov112_022983e0(S *s) {
    if ((data_021f47d8[0] & 0x100) == 0) {
        func_ov002_02200a58(s, s->unk_0c1);
        func_ov112_02296e14(s);
    }
}

void func_ov112_02298410(S *s) {
    if ((data_021f47d8[0] & 0x200) == 0) {
        func_ov002_02200a58(s, s->unk_0c1);
        func_ov112_02296e14(s);
    }
}

void func_ov112_02298440(S *s) {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(s, 0xc);
        if (s->unk_0be == s->unk_0bf) {
            func_ov112_022977f8(s, 0x100);
        }
    } else {
        if (func_ov112_02296ef8(s, func_ov002_022009c8(s))) {
            s->unk_0bf = s->unk_0bd;
            func_ov112_022976a8(s);
            func_ov112_02296ff4(s);
            func_ov112_02296c48(s);
            func_0200402c(0x15);
        }
    }
}

void func_ov112_022984b4(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov112_0229791c(s);
    } else if (func_ov112_02296ef8(s, func_ov002_022009c8(s))) {
        if (func_ov095_02293da0(s->unk_370) || func_ov112_02297280(s)) {
            func_ov095_02293dc0(s->unk_370);
            func_ov112_02297264(s);
            func_ov112_022976a8(s);
        } else {
            func_ov112_02297264(s);
        }
        func_ov112_02296ff4(s);
        func_ov112_02296c48(s);
        func_ov112_02296e14(s);
        func_0200402c(0xb);
    } else if (!func_ov112_02298018(s)) {
        u32 old = s->unk_0bd;
        if (func_ov112_022980b0(s)) {
            if (old != s->unk_0bd) {
                func_ov112_02296c48(s);
            }
        } else {
            if ((data_021f47d8[1] & 1) != 0) {
                func_ov002_02200a58(s, 0xd);
                func_ov112_02297808(s, 0x100);
                s->unk_0be = s->unk_0bd;
                s->unk_0bf = s->unk_0bd;
            }
            if (!func_ov112_02297f48(s)) {
                if (!func_ov112_02297fac(s)) {
                    if (func_ov112_02297f1c(s) != 0) return;
                }
            }
        }
    }
}

void func_ov112_022985b8(S *s) {
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov002_02200a58(s, s->unk_0c1);
    } else if (func_ov095_022942e8(s->unk_370)) {
        func_ov095_02293da8(s->unk_370);
        if (func_ov112_02297cd4(s, 0)) {
            if (func_ov112_02297818(s, 0x800)) {
                func_ov112_02296c48(s);
            }
        } else {
            func_ov112_02296d6c(s);
            func_ov112_02297a0c(s);
        }
    }
}

void func_ov112_02298624(S *s) {
    if (func_0208d4fc(s->unk_4258)) {
        func_ov112_02296bdc(s);
        func_ov002_02200a58(s, 6);
    }
}

void func_ov112_0229864c(S *s) {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov112_02296bfc(s);
    } else if (func_ov095_022942e8(s->unk_370)) {
        u32 r = func_ov095_02294a40(s->unk_370);
        func_ov112_02297d74(s, func_ov095_02294864(s->unk_370, r, 8));
        func_ov095_02294d40(s->unk_370, r);
    }
}

void func_ov112_022986a8(S *s) {
    if (func_0208d4fc(s->unk_4258)) {
        u32 r = func_ov095_02292404(s->unk_370);
        u32 v = func_ov095_02294864(s->unk_370, r, 8);
        if (v == 0x112) {
            func_ov002_02200a58(s, 0x10);
            func_ov002_02202f00(s->unk_40ac);
            func_ov002_02202e48(s->unk_40ac);
            if (func_ov112_02297280(s)) {
                func_ov112_022976a8(s);
            }
            func_ov112_02297264(s);
            func_ov112_02297808(s, 0x1000);
        } else {
            u32 t = func_ov112_02297d74(s, v);
            if (t == 1 && (data_021f47d8[0] & 1) != 0) {
                func_ov095_02294318(s->unk_370);
                func_ov002_02200a58(s, 9);
                func_ov095_02294d40(s->unk_370, r);
            } else if (t == 3) {
            } else if (t == 4) {
                func_ov095_02295194(s->unk_370);
            } else {
                func_ov112_02296bfc(s);
            }
        }
    }
}

void func_ov112_0229877c(S *s) {
    if (!func_ov002_022028f0(s->unk_4258)) {
        func_ov002_02200a58(s, s->unk_0c1);
        func_ov112_02299434(s);
    }
}

void func_ov112_022987a8(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov112_0229791c(s);
    } else {
        switch (func_ov095_02292458(s->unk_370, func_ov002_022009c8(s))) {
        case 1:
            func_ov002_02202c40(s->unk_4258);
            func_ov112_02296ce8(s);
            break;
        case 2:
            func_ov002_02202be0(s->unk_4258);
            func_ov112_02296ce8(s);
            break;
        case 3:
            func_ov002_02202ca0(s->unk_4258);
            func_ov112_02296ce8(s);
            break;
        case 0:
        default:
            if (func_ov112_02298114(s)) return;
            if (func_ov112_022980b0(s)) return;
            if (func_ov112_02298018(s)) return;
            if (func_ov112_02297f48(s)) return;
            if (func_ov112_02297fac(s)) return;
            if (func_ov112_02297f1c(s) != 0) return;
            break;
        }
    }
}

void func_ov112_02298860(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov112_0229782c(s);
    } else if (Both()) {
        if (func_ov002_02203110(s->unk_40f4, 3)) {
            func_ov112_022979c0(s);
        } else if (func_ov002_02203110(s->unk_40f4, 4)) {
            func_ov112_02297984(s);
        }
    }
}

void func_ov112_022988cc(S *s) {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 0);
    } else if (func_ov095_022942e8(s->unk_370)) {
        u32 r = func_ov095_02294a40(s->unk_370);
        func_ov112_02297d74(s, func_ov095_02294864(s->unk_370, r, 8));
        func_ov095_02294d40(s->unk_370, r);
    }
}

void func_ov112_02298928(S *s) {
    BOOL r;
    if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 0);
        if (s->unk_0be == s->unk_0bf) {
            func_ov112_022977f8(s, 0x100);
        }
        r = TRUE;
    } else {
        r = func_ov112_022970b0(s);
        if (r) {
            func_0200402c(0x15);
        }
    }
    if (r) {
        func_ov112_02297434(s);
        func_ov112_022976a8(s);
    }
}

void func_ov112_02298988(S *s) {
    s->unk_0bc = 0;
    if (data_021f4770 == 0) {
        func_ov112_02297104(s);
        func_ov002_02202ef4(s->unk_40ac);
        func_ov112_0229791c(s);
    } else {
        func_ov112_02297304(s);
    }
}

void func_ov112_022989c4(S *s) {
    s->unk_0bc = 0;
    if (data_021f4770 == 0) {
        func_ov112_02297104(s);
        func_ov002_02202ef4(s->unk_40ac);
        func_ov112_0229791c(s);
    } else {
        func_ov112_0229733c(s);
    }
}

void func_ov112_02298a00(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov112_02297900(s);
    } else {
        u32 f = 0;
        s32 v;
        if (func_ov095_02294324(s->unk_370)) f = 1;
        if (Both()) {
            v = data_021ef5ec;
            if (func_ov002_02203110(s->unk_40f4, 9)) {
                func_ov112_02297a4c(s);
            } else if (func_ov002_02203110(s->unk_40f4, 8)) {
                func_ov112_02297a0c(s);
            } else if (func_ov095_02293990(s->unk_370)) {
                func_ov095_02294648(s->unk_370, 8, 6, 1);
                func_ov112_022976a8(s);
            } else if (func_ov112_02297108(s)) {
                func_ov002_02200a58(s, 3);
                func_ov095_02293dc0(s->unk_370);
                func_ov112_022976a8(s);
            } else if (func_ov112_022973dc(s)) {
                func_ov002_02202f00(s->unk_40ac);
                func_ov002_02200a58(s, 1);
                func_ov112_02297264(s);
                func_ov112_022976a8(s);
            } else if (func_ov112_022973ac(s)) {
                func_ov002_02202f00(s->unk_40ac);
                func_ov002_02200a58(s, 2);
                func_ov112_02297264(s);
                func_ov112_022976a8(s);
            } else if (v >= 0x48 && f == 0) {
                BOOL r = func_ov112_02297eb8(s);
                if (r == 0) {
                } else if (r == 1) {
                    func_ov002_02200a58(s, 4);
                }
            }
        }
    }
}

void func_ov112_02298b40(S *s) {
    u32 g = data_021f482c;
    func_020026c4(data_ov112_02299b70, g, 4, 8, 8, 0xe);
    func_020641b4(data_ov112_02299b88, s->unk_4460, 0x800);
    func_0206ee80(s->unk_4460, 6, 5, 0x19, 6, 0xa);
    func_020024f0(s->unk_4460, 4, 0x800, 0);
    func_0200261c(data_ov112_02299ba0, g, 4, 0x13d, 0x13d, 0x1e9);
    func_0200261c(data_ov112_02299bb8, g, 4, 0x10, 0x10, 0x13f);
    func_0200261c(data_ov112_02299bd0, g, 4, 0x101, 0x101, 0x110);
    func_ov095_022943dc(s->unk_370, data_ov112_02299be8);
    func_ov112_02296e14(s);
    func_ov095_022943b4(s->unk_370, 6);
    func_ov095_022943f8(s->unk_370, 6);
    func_ov095_02293cc0(s->unk_370);
}

void func_ov112_02298c30() {
    func_020015b8(0);
    func_02002398(4, 3);
    func_0200226c(4, 0, 0, 0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
}

void func_ov112_02298c68(S *s) {
    func_ov095_02294358(s->unk_370, 6);
    if (func_ov112_02297818(s, 4)) {
        func_ov112_02297598(s);
        func_ov112_022977f8(s, 4);
        func_ov112_02297808(s, 2);
    }
    if (func_ov112_02297818(s, 8)) {
        func_ov112_022977f8(s, 8);
        func_ov112_02297808(s, 2);
    }
    if (func_ov112_02297818(s, 2)) {
        func_ov112_02297570(s);
        func_ov112_02297540(s);
        func_ov112_022977f8(s, 2);
    }
}
}
