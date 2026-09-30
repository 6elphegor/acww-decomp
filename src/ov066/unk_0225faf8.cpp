// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_0225faf8_Bits {
    u32 f0 : 3;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    u32 f8 : 2;
    s32 f10 : 1;
    s32 f11 : 1;
    s32 f12 : 1;
};

struct Unk_ov066_0225faf8_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18[4];
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    Unk_ov066_0225faf8_Bits unk_3c;
};

struct Unk_ov066_0225faf8_TBits {
    s32 f0 : 1;
    s32 f1 : 1;
    u32 f2 : 30;
};

struct Unk_ov066_0225faf8_W {
    u8 pad[0x3c];
    u16 unk_3c;
    u16 unk_3e;
    u32 unk_40;
    u32 unk_44;
    u8 unk_48[3];
    u8 unk_4b;
    u8 unk_4c[4];
    u8 unk_50[8];
};

struct Unk_ov066_0225faf8_T {
    s32 unk_00;
    Unk_ov066_0225faf8_W *unk_04;
    u8 *unk_08;
    Unk_ov066_0225faf8_TBits unk_0c;
    u32 unk_10[11];
    u32 unk_3c[12];
    s32 (*unk_6c)(void *);
};

struct Unk_ov066_0225faf8_V {
    u8 pad[0x8e];
    u8 unk_8e;
    u8 pad2[6];
    u8 unk_95;
    u8 pad3[0xc0 - 0x96];
    u32 unk_c0;
};

struct Unk_ov066_0225faf8_Msg {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u16 unk_08;
    u8 unk_0a[8];
    u16 unk_12;
};

extern "C" {
extern Unk_ov066_0225faf8_S *data_ov066_022647ac;
extern Unk_ov066_0225faf8_T *data_ov066_022647b0;
extern Unk_ov066_0225faf8_V *data_ov066_022647b4;
extern void (*data_ov066_022647a0)(u32);
extern void (*data_ov066_022647a4)(void *);
extern void *(*data_ov066_022647a8)(u32, u32);

u32 func_01ffa2ec(void);
s32 func_01ffa3d4(u32);
s32 func_02114594(void *, s32);
s32 func_021145b0(void *, s32);
s32 func_02114e48(void);
s32 func_02115094(void *);
s32 func_0211512c(void *, s32, s32, void *, s32);
s32 func_02115304(void);
s32 func_02116048(void *, void *, s32);
s32 func_0211f7e4(void);
s32 func_0211fd8c(void *);
s32 func_0211ff5c(void *, s32);

void func_ov066_0225f22c(u32 v);
void func_ov066_0225f284(void *p);
void *func_ov066_0225f2c8(u32 a, u32 b);
void func_ov066_0225f514(u32 idx);
void func_ov066_0225f5b4(void);
s32 func_ov066_0225f7c8(void);
void func_ov066_0225f824(void);
void func_ov066_0225f830(void);
void func_ov066_02260a58(void);
void func_ov066_02260c8c(void);
void func_ov066_02260d30(u32 v);
void func_ov066_022620e8(void);
void func_ov066_022605a0(void);
void func_ov066_022605cc(void);
void func_ov066_0225fef0(u32 a);
void func_ov066_02260318(Unk_ov066_0225faf8_Msg *m);
s32 func_ov066_0226004c(void);
void func_ov066_022602c8(void);
void func_ov066_0226030c(void);
s32 func_ov066_022601fc(void *a, u8 *b);
void *func_ov066_02262dc4(void *);
s32 func_ov066_02262dd8(void *, u32);
s32 func_ov066_02262df4(void *);
void func_ov066_02262e54(void *, s32, void *, u32, u32, void *);
}

#pragma thumb off
extern "C" {

void func_ov066_0225faf8(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
        func_ov066_0225f824();
        break;
    case 3:
        break;
    }
}

void func_ov066_0225fb48(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
        func_ov066_0225f514(3);
        break;
    case 2:
        break;
    case 3:
        func_ov066_02260d30(0xbd8a);
        break;
    case 4:
        func_ov066_02260c8c();
        break;
    case 5:
        func_ov066_022620e8();
        break;
    case 6:
        func_ov066_02260a58();
        break;
    }
}

void func_ov066_0225fbe4(void) {
    s32 v = data_ov066_022647ac->unk_00;
    if (v < 1) {
        func_ov066_0225f514(1);
        return;
    }
    if (v <= 1) {
        return;
    }
    func_ov066_0225f514(2);
}

void func_ov066_0225fc3c(void) {
    s32 v = data_ov066_022647ac->unk_00;
    if (v <= 0) {
        return;
    }
    func_ov066_0225f514(0);
}

s32 func_ov066_0225fc78(s32 a, u32 b, u32 c) {
    if (data_ov066_022647ac == NULL) {
        return 0;
    }
    if (a >= 7 || a == data_ov066_022647ac->unk_00) {
        return 0;
    }
    data_ov066_022647ac->unk_00 = a;
    data_ov066_022647ac->unk_30 = b;
    data_ov066_022647ac->unk_34 = c;
    if (data_ov066_022647ac->unk_3c.f11 == 0) {
        data_ov066_022647ac->unk_3c.f11 = 1;
        func_ov066_0225f830();
    }
    return 1;
}

s32 func_ov066_0225fd08(void) {
    s32 r = 0;
    switch (data_ov066_022647ac->unk_00) {
    case 0:
        if (data_ov066_022647ac->unk_04 == 2) {
            r = 1;
        }
        break;
    case 1:
        if (data_ov066_022647ac->unk_04 == 3) {
            r = 1;
        }
        break;
    case 2:
        if (data_ov066_022647ac->unk_04 == 4) {
            r = 1;
        }
        break;
    case 3:
        if (data_ov066_022647ac->unk_04 == 10) {
            r = 1;
        }
        break;
    case 4:
        if (data_ov066_022647ac->unk_04 == 7) {
            r = 1;
        }
        break;
    case 5:
        if (data_ov066_022647ac->unk_04 == 11) {
            r = 1;
        }
        break;
    case 6:
        {
            s32 t = 1;
            if (data_ov066_022647ac->unk_04 != 10) {
                if (data_ov066_022647ac->unk_04 != 11) {
                    t = r;
                }
            }
            r = t;
        }
        break;
    }
    return r;
}

s32 func_ov066_0225fdc4(void) {
    if (data_ov066_022647ac->unk_04 == 1) {
        data_ov066_022647ac->unk_04 = 0;
        func_ov066_0225f284(data_ov066_022647ac);
        data_ov066_022647a8 = NULL;
        data_ov066_022647a4 = NULL;
        data_ov066_022647a0 = NULL;
        data_ov066_022647ac = NULL;
        return 1;
    }
    func_ov066_0225f22c(0x44);
    return 0;
}

s32 func_ov066_0225fe4c(u32 a, void *(*b)(u32, u32), void (*c)(void *), void (*d)(u32)) {
    if (data_ov066_022647ac == NULL) {
        data_ov066_022647a8 = b;
        data_ov066_022647a4 = c;
        data_ov066_022647a0 = d;
        data_ov066_022647ac = (Unk_ov066_0225faf8_S *)func_ov066_0225f2c8(0x40, 4);
        if (data_ov066_022647ac != NULL) {
            func_02114e48();
            func_02115304();
            if (func_0211f7e4() != 0) {
                func_ov066_0225fef0(a);
                return 1;
            }
            func_ov066_0225f22c(0x41);
            func_ov066_0225f284(data_ov066_022647ac);
        }
    }
    return 0;
}

void func_ov066_0225fef0(u32 a) {
    data_ov066_022647ac->unk_00 = 7;
    data_ov066_022647ac->unk_04 = 1;
    data_ov066_022647ac->unk_08 = 0xfe;
    data_ov066_022647ac->unk_09 = 1;
    data_ov066_022647ac->unk_0a = 0;
    data_ov066_022647ac->unk_0b = 0;
    data_ov066_022647ac->unk_0c = 0;
    data_ov066_022647ac->unk_0d = a;
    data_ov066_022647ac->unk_10 = 0;
    data_ov066_022647ac->unk_15 = 0;
    data_ov066_022647ac->unk_16 = 0;
    data_ov066_022647ac->unk_30 = 0;
    data_ov066_022647ac->unk_34 = 0;
    data_ov066_022647ac->unk_38 = 0;
    data_ov066_022647ac->unk_3c.f11 = 0;
    data_ov066_022647ac->unk_3c.f10 = 0;
    data_ov066_022647ac->unk_3c.f12 = 0;
    data_ov066_022647ac->unk_3c.f11 = 0;
}

s32 func_ov066_0225ffcc(void) {
    s32 r = 0;
    u32 irq = func_01ffa2ec();
    Unk_ov066_0225faf8_S *s = data_ov066_022647ac;
    if (s != NULL) {
        r = s->unk_04;
    }
    func_01ffa3d4(irq);
    return r;
}

void func_ov066_0225fffc(Unk_ov066_0225faf8_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_0225f5b4();
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

s32 func_ov066_0226004c(void) {
    return func_0211fd8c((void *)func_ov066_0225fffc);
}

void func_ov066_02260060(Unk_ov066_0225faf8_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        if (m->unk_08 != 4) {
            if (m->unk_08 != 5) {
                return;
            }
            func_ov066_02260318(m);
        }
        if (data_ov066_022647b0->unk_0c.f1 != 0) {
            func_ov066_022605cc();
            return;
        }
        func_ov066_02262dc4(data_ov066_022647b0->unk_08 + data_ov066_022647b4->unk_95 * 16);
        func_ov066_0226004c();
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_02260100(void) {
    s32 r = func_0211ff5c((void *)func_ov066_02260060, data_ov066_022647b0->unk_00);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

s32 func_ov066_02260144(u32 idx, u32 b) {
    Unk_ov066_0225faf8_T *t = data_ov066_022647b0;
    if (t != NULL && idx < data_ov066_022647ac->unk_09) {
        return func_ov066_02262dd8(t->unk_08 + idx * 16, b);
    }
    return 0;
}

s32 func_ov066_022601a0(u32 idx) {
    Unk_ov066_0225faf8_T *t = data_ov066_022647b0;
    if (t != NULL && idx < data_ov066_022647ac->unk_09) {
        return func_ov066_02262df4(t->unk_08 + idx * 16);
    }
    return 0;
}

s32 func_ov066_022601fc(void *a, u8 *b) {
    Unk_ov066_0225faf8_S *s = data_ov066_022647ac;
    if (s->unk_3c.f5 != 0) {
        if (data_ov066_022647b0->unk_04->unk_44 != s->unk_28) {
            goto fail;
        }
    }
    if (s->unk_3c.f6 != 0) {
        if (b[4] != data_ov066_022647b4->unk_95) {
            goto fail;
        }
    }
    if (s->unk_3c.f7 != 0) {
        if (b[6] != 5) {
            goto fail;
        }
    }
    if (data_ov066_022647b0->unk_6c == NULL) {
        return 1;
    }
    return data_ov066_022647b0->unk_6c(a);
fail:
    return 0;
}

void func_ov066_022602c8(void) {
    data_ov066_022647b4->unk_c0 |= 0x100;
    func_02115094(&data_ov066_022647b0->unk_3c);
    func_ov066_022605a0();
}

void func_ov066_0226030c(void) {
    func_ov066_022602c8();
}

void func_ov066_02260318(Unk_ov066_0225faf8_Msg *m) {
    volatile u16 buf[4];
    func_02114594(data_ov066_022647b0->unk_04, 0xc0);
    Unk_ov066_0225faf8_W *w = data_ov066_022647b0->unk_04;
    if (w->unk_3c == 0) {
        if (data_ov066_022647ac->unk_3c.f4 != 0) {
            return;
        }
        func_ov066_02262e54(data_ov066_022647b0->unk_08 + data_ov066_022647b4->unk_95 * 16, 0xfa0, &m->unk_0a, 0xacce, m->unk_12, w);
        return;
    }
    if ((w->unk_4b & 1) == 0) {
        return;
    }
    func_02116048(w->unk_50, (void *)buf, 8);
    func_021145b0((void *)buf, 8);
    if (func_ov066_022601fc(m, (u8 *)buf) == 0) {
        return;
    }
    func_ov066_02262e54(data_ov066_022647b0->unk_08 + data_ov066_022647b4->unk_95 * 16, 0xfa0, &m->unk_0a, buf[0], m->unk_12, data_ov066_022647b0->unk_04);
    if (data_ov066_022647ac->unk_3c.f3 == 0) {
        return;
    }
    if (buf[0] == 0xbd8a) {
        func_ov066_022602c8();
        return;
    }
    if (buf[0] != 0x2348) {
        return;
    }
    if (data_ov066_022647b0->unk_0c.f0 != 0) {
        return;
    }
    func_02115094(&data_ov066_022647b0->unk_3c);
    func_0211512c(&data_ov066_022647b0->unk_3c, 0x3d5d, 0, (void *)func_ov066_0226030c, 0);
    data_ov066_022647b0->unk_0c.f0 = 1;
}

}
#pragma thumb reset
