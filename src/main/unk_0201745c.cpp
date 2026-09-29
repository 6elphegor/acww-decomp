#include "types.h"

struct Unk_0201745c_State {
    u8 pad_00[0x98];
    u8 unk_98;
    u8 pad_99[0xac - 0x99];
    s32 unk_ac;
};

struct Unk_0201745c_Ctx {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70();
    virtual void vf74();
    virtual void vf78();
    virtual void vf7c();
    virtual void vf80();
    virtual void vf84();
    virtual BOOL vf88(void *a, u32 b);
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0x190 - 0x90];
    u32 unk_190;
    u8 pad_194[0x334 - 0x194];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x478 - 0x350];
    s32 unk_478;
    s32 unk_47c;
    s32 unk_480;
    u8 pad_484[0x628 - 0x484];
    void *unk_628;
};

extern volatile u16 data_020c6cc8;
extern u8 data_021f4880[];

extern "C" {
void *func_0201978c(Unk_0201745c_State *s);
BOOL func_020572b0(u32 a);
void func_02057250(u32 a, void *p);
BOOL func_020572e0(void *p);
BOOL func_ov004_02224918(void);
BOOL func_02015e74(void *p);
BOOL func_02015e74_2(void *p, void *q);
s32 func_02015e48(void *p, u32 a);
BOOL func_020573cc(u32 a, void *p);
u32 func_020573b4(void);
void func_0201610c(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 func_02019498(Unk_0201745c_State *s, u32 a);
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
void func_02011dfc(void *a, u32 b, u32 c);
void func_02057378(void *p);
void func_020902f8(s32 a);
s32 func_020902d4(s32 a, void *b, void *c, u32 d);
s32 func_02090330(u32 a, void *b, void *c, u32 d);
s32 func_0209028c(u32 a, void *b, u32 c, u32 d);
BOOL func_02057294(void);
BOOL func_020573f4(void *p);
BOOL func_02094a84(void);
void func_02053848(void *p, u32 a, u32 b);
BOOL func_02057328(void *p);
void func_0201ab4c(void *a, void *b, u32 c, u32 d, u32 e);
void func_0201a9ec(void *a, void *b);
void func_0201a97c(void *a, void *b);
}

typedef Unk_0201745c_State S;
typedef Unk_0201745c_Ctx C;

extern "C" void func_0201745c(S *s, C *c) {
    void *r = func_0201978c(s);
    if (!func_020572b0(2)) {
        func_02057250(9, c);
        if (func_020572e0(*(void **)((u8 *)r + 0x28))) {
            if (func_ov004_02224918()) {
                s->unk_98 = 9;
            }
        }
    }
}

extern "C" void func_02017498(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        if (func_020573cc(2, c)) {
            func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            s->unk_98 = 0x13;
        }
    }
}

extern "C" void func_020174ec(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        u32 r = func_020573b4();
        switch (r) {
        case 7:
            if (func_020573cc(7, c)) {
                func_0201610c(c->unk_334, c, 0x2d, data_020c6cc8, 3, 0x1000, 0, 0);
                s->unk_98 = 0x12;
            }
            break;
        case 5:
            if (func_020573cc(5, c)) {
                func_0201610c(c->unk_334, c, 0x2e, data_020c6cc8, 1, 0x1000, 0, 0);
                func_02003ddc(c->unk_350 + 0x1c4, 0x4f, 0x7f, 0);
                s->unk_98 = 5;
            }
            break;
        default:
            func_0201610c(c->unk_334, c, 0x24, data_020c6cc8, 0, 0x1000, 0, 0);
            func_02019498(s, 1);
            s->unk_98 = 0x14;
            break;
        }
    }
}

extern "C" void func_020175c0(S *s, C *c) {
    if (!func_020572b0(3)) {
        if (func_020573cc(4, c)) {
            func_0201610c(c->unk_334, c, 0x2d, data_020c6cc8, 1, 0x1000, 0, 0);
            s->unk_98 = 0x11;
        }
    }
}

extern "C" void func_02017618(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        if (func_020572e0(c)) {
            if (func_020573cc(3, c)) {
                s->unk_98 = 0x10;
            }
        }
    }
}

extern "C" void func_02017654(S *s, C *c) {
    if (!func_020572b0(1)) {
        func_0201610c(c->unk_334, c, 0x2c, data_020c6cc8, 1, 0x1000, 0, 0);
        s->unk_98 = 0xf;
    }
}

extern "C" void func_020176a0(S *s, C *c) {
    if (func_020572b0(1)) {
        s->unk_98 = 0xe;
    }
}

extern "C" void func_020176bc(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        u16 v = data_020c6cc8;
        func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        func_02057378(c);
        func_02019498(s, 1);
        s->unk_98 = 0x14;
    }
}

extern "C" void func_02017728(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        func_0201610c(c->unk_334, c, 0x2a, 0, 1, 0x1000, 0, 0);
        if (s->unk_ac != -1) {
            func_020902f8(s->unk_ac);
        }
        s->unk_98 = 0xc;
    }
}

extern "C" void func_02017780(S *s, C *c) {
    if (((c->unk_190 << 4) >> 16) == 0) {
        func_02019498(s, 1);
        s->unk_98 = 0x14;
    }
}

extern "C" void func_020177a8(S *s, C *c) {
    if (!func_02057294()) {
        func_02019498(s, 1);
        s->unk_98 = 0x14;
    }
}

extern "C" void func_020177c8(S *s, C *c) {
    if (!func_020573f4(c)) {
        u16 v = data_020c6cc8;
        func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        s->unk_98 = 9;
    }
}

extern "C" void func_02017824(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        if (func_02094a84()) {
            u16 v = data_020c6cc8;
            func_0201610c(c->unk_334, c, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->unk_628) {
                func_02011dfc(c->unk_628, v, 0);
            }
            s->unk_98 = 8;
        }
    }
}

extern "C" BOOL func_020178c4(S *s, C *c, void *p, u32 a, u8 b);

extern "C" void func_0201788c(S *s, C *c) {
    void *r = func_0201978c(s);
    if (func_020178c4(s, c, (u8 *)r + 0x22, 0x28, 1)) {
        func_02019498(s, 1);
        s->unk_98 = 0x14;
    }
}

extern "C" BOOL func_020178c4(S *s, C *c, void *p, u32 a, u8 b) {
    if (a == (u32)func_02015e48(c->unk_334, 0)) {
        if (func_02015e74_2(c->unk_334, c)) {
            u16 v = data_020c6cc8;
            func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->unk_628) {
                func_02011dfc(c->unk_628, v, 0);
            }
            return TRUE;
        } else {
            switch ((c->unk_190 << 4) >> 16) {
            case 8:
                c->vf88(p, b);
                break;
            case 0xd:
                func_02090330(0x22, (u8 *)c + 0x5c, 0, 0);
                break;
            case 3: {
                s16 t = c->unk_8e;
                func_02090330(0x28, (u8 *)c + 0x490, &t, 0);
                func_02090330(0x28, (u8 *)c + 0x484, &t, 0);
                break;
            }
            }
        }
    }
    return FALSE;
}

extern "C" void func_0201799c(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        u16 v = data_020c6cc8;
        func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        func_02057378(c);
        if (s->unk_ac != -1) {
            func_020902f8(s->unk_ac);
        }
        func_02019498(s, 1);
        s->unk_98 = 0x14;
    } else if (s->unk_ac != -1) {
        func_020902d4(s->unk_ac, c->unk_350 + 0x128, &c->unk_8e, 0);
    }
}

extern "C" void func_02017a38(S *s, C *c) {
    s16 t;
    s32 v[3];
    if (func_02015e74(c->unk_334)) {
        switch (func_020573b4()) {
        case 6:
            func_02057378(c);
            func_0201610c(c->unk_334, c, 0x28, data_020c6cc8, 1, 0x1000, 0, 0);
            func_0209028c(0x61, (u8 *)c + 0x5c, 0, 0);
            func_02003ddc(c->unk_350 + 0x1c4, 0x76, 0x7f, 0);
            s->unk_98 = 6;
            break;
        case 7:
            if (func_020573cc(7, c)) {
                func_0201610c(c->unk_334, c, 0x26, data_020c6cc8, 3, 0x1000, 0, 0);
                s->unk_98 = 7;
            }
            break;
        case 5:
            if (func_020573cc(5, c)) {
                func_0201610c(c->unk_334, c, 0x27, data_020c6cc8, 1, 0x1000, 0, 0);
                func_02003ddc(c->unk_350 + 0x1c4, 0x4f, 0x7f, 0);
                s->unk_98 = 5;
            }
            break;
        case 10:
            if (func_020573cc(10, c)) {
                func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
                func_0201610c(c->unk_334, c, 0x139, 0, 0, 0x1000, 0, 1);
                func_02053848((u8 *)c + 0xec, 9, 14);
                func_02019498(s, 1);
                s->unk_98 = 0x14;
            }
            break;
        case 11:
            if (func_020573cc(11, c)) {
                v[0] = c->unk_478;
                v[1] = c->unk_47c;
                v[2] = c->unk_480;
                t = c->unk_8e;
                func_0201610c(c->unk_334, c, 0x29, data_020c6cc8, 1, 0x1000, 0, 0);
                s->unk_ac = func_02090330(0x40, v, &t, 0);
                s->unk_98 = 0xb;
            }
            break;
        case 8:
        case 9:
        default:
            func_0201610c(c->unk_334, c, 0x24, data_020c6cc8, 0, 0x1000, 0, 0);
            func_02019498(s, 1);
            s->unk_98 = 0x14;
            break;
        }
    }
}

extern "C" void func_02017c40(S *s, C *c) {
    if (!func_020572b0(3)) {
        if (func_020573cc(4, c)) {
            u16 v = data_020c6cc8;
            func_0201610c(c->unk_334, c, 0x26, data_020c6cc8, 1, 0x1000, 0, 0);
            if (c->unk_628) {
                func_02011dfc(c->unk_628, v, 0);
            }
            s->unk_98 = 4;
        }
    }
}

extern "C" void func_02017cac(S *s, C *c) {
    if (func_02015e74(c->unk_334)) {
        if (func_020572e0(c)) {
            if (func_020573cc(3, c)) {
                s->unk_98 = 3;
            }
        }
    }
}

extern "C" void func_02017ce8(S *s, C *c) {
    if (func_02057328(c)) {
        u16 v = data_020c6cc8;
        func_0201ab4c(c->unk_350, c, 0, 0, v);
        func_0201a9ec(c->unk_350, data_021f4880);
        func_0201a97c(c->unk_350, data_021f4880);
        func_0201610c(c->unk_334, c, 0x25, v, 1, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        s->unk_98 = 2;
    }
}
