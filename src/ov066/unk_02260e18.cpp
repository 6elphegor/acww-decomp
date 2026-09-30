// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_02260e18_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
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

struct Unk_ov066_02260e18_CBits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
};

struct Unk_ov066_02260e18_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u32 unk_0c;
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
    Unk_ov066_02260e18_Bits unk_3c;
};

struct Unk_ov066_02260e18_V {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u8 unk_22[0x8c - 0x22];
    u8 unk_8c;
    u8 pad[0x9c - 0x8d];
    void (*unk_9c)(void);
    void (*unk_a0)(void);
    void (*unk_a4)(void);
    u8 pad2[0xc0 - 0xa8];
    Unk_ov066_02260e18_CBits unk_c0;
};

struct Unk_ov066_02260e18_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
};

extern "C" {
extern Unk_ov066_02260e18_S *data_ov066_022647ac;
extern Unk_ov066_02260e18_V *data_ov066_022647b4;

s32 func_02116048(void *, void *, s32);
s32 func_021204a0(void *);
s32 func_02121870(void *, u32);
s32 func_021206b4(void *, u32, u32, u32, u32, u32, u32, s32, s32, s32, s32);
s32 func_02121a24(void *, u32, u32, u32, u32, u8);
s32 func_0211fbb4(void *, u32);
s32 func_0211fcbc(void *, u32, u32, u32, u32);
s32 func_02120060(void *);
s32 func_021200a8(void *);
s32 func_02120164(void *, u32);
s32 func_01ffa2ec(void);
s32 func_01ffa3d4(s32);

s32 func_ov066_0225f7c8(void);
void func_ov066_0225f22c(u32 v);
void func_ov066_0225f5b4(void);
void func_ov066_0225f824(void);
void func_ov066_0225f3c8(void *p);
void func_ov066_02261f6c(u32 a, void *b);
void func_ov066_02261ee8(void);
void func_ov066_02261dfc(void);
void func_ov066_0226278c(void);
void func_ov066_02261860(void *m);
void func_ov066_0226185c(void *m);
void func_ov066_022617d4(void *m);
void func_ov066_02261b14(void *m);
void func_ov066_02261a4c(void *m);
void func_ov066_02261958(void *m);
void func_ov066_02261ce0(void *a, void *b);
void func_ov066_02261704(void *m);
void func_ov066_022616c8(void);
void func_ov066_02261c80(void);

void func_ov066_02260e4c(u32 a);
void func_ov066_02260e18(Unk_ov066_02260e18_Msg *m);
void func_ov066_02260efc(void);
void func_ov066_02260e84(Unk_ov066_02260e18_Msg *m);
void func_ov066_02261490(void);
s32 func_ov066_0226128c(u32 a);
void func_ov066_022613dc(u32 a);
void func_ov066_0226160c(void);
void func_ov066_022611b4(void);
void func_ov066_02260f30(Unk_ov066_02260e18_Msg *m);
void func_ov066_022610b0(void);
void func_ov066_02261158(Unk_ov066_02260e18_Msg *m);
void func_ov066_02261238(Unk_ov066_02260e18_Msg *m);
void func_ov066_022612cc(Unk_ov066_02260e18_Msg *m);
void func_ov066_02260dd0(void);
void func_ov066_02261420(Unk_ov066_02260e18_Msg *m);
void func_ov066_022614c4(Unk_ov066_02260e18_Msg *m);
void func_ov066_022615a4(void);
void func_ov066_022615d8(Unk_ov066_02260e18_Msg *m);
s32 func_ov066_02261650(void);
}

#pragma thumb off
extern "C" {

void func_ov066_02260e18(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_02260e4c(u32 a) {
    s32 r = func_02121870((void *)func_ov066_02260e18, a);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02260e84(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        if (data_ov066_022647b4->unk_c0.f3 == 0) {
            return;
        }
        if (data_ov066_022647b4->unk_1e == 0) {
            func_ov066_02261490();
        } else {
            func_ov066_0226128c(0);
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_02260efc(void) {
    s32 r = func_021204a0((void *)func_ov066_02260e84);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02260f30(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        switch (m->unk_04) {
        case 10:
            data_ov066_022647b4->unk_c0.f5 = 0;
            data_ov066_022647ac->unk_3c.f12 = 1;
            data_ov066_022647b4->unk_9c();
            data_ov066_022647b4->unk_c0.f0 = 0;
            data_ov066_022647b4->unk_c0.f1 = 0;
            if (data_ov066_022647b4->unk_1e == 0) {
                func_ov066_02261f6c(0, &data_ov066_022647b4->unk_22[0]);
                if (data_ov066_022647ac->unk_04 != 10) {
                    data_ov066_022647ac->unk_04 = 10;
                }
                func_ov066_02261dfc();
                func_ov066_0225f5b4();
            } else {
                func_ov066_02261ee8();
            }
            break;
        case 11:
            func_ov066_02261650();
            if (data_ov066_022647b4->unk_a0 != NULL) {
                data_ov066_022647b4->unk_a0();
            }
            break;
        case 12:
            func_ov066_02261650();
            break;
        case 13:
            if (data_ov066_022647b4->unk_a4 != NULL) {
                data_ov066_022647b4->unk_a4();
            }
            break;
        }
    } else {
        if (m->unk_02 != 9 && m->unk_02 != 0xd && m->unk_02 != 0xf) {
            func_ov066_0225f22c(m->unk_02);
        }
    }
}

void func_ov066_022610b0(void) {
    s32 r = func_021206b4((void *)func_ov066_02260f30, data_ov066_022647b4->unk_0c, data_ov066_022647b4->unk_1a,
                          data_ov066_022647b4->unk_10, data_ov066_022647b4->unk_1c, data_ov066_022647ac->unk_17, 4,
                          data_ov066_022647ac->unk_3c.f0, data_ov066_022647ac->unk_3c.f1, 1,
                          data_ov066_022647ac->unk_3c.f2);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02261158(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        if (data_ov066_022647b4->unk_c0.f5 == 0) {
            return;
        }
        func_ov066_022610b0();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022611b4(void) {
    Unk_ov066_02260e18_S *s = data_ov066_022647ac;
    u32 t = s->unk_0b;
    u32 f = (*(Unk_ov066_02260e18_V *volatile *)&data_ov066_022647b4)->unk_8c < t;
    Unk_ov066_02260e18_V *v = *(Unk_ov066_02260e18_V *volatile *)&data_ov066_022647b4;
    s32 r = func_02121a24((void *)func_ov066_02261158, v->unk_08, v->unk_18, s->unk_28, v->unk_20, f);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02261238(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_0226278c();
        func_ov066_0225f5b4();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

s32 func_ov066_0226128c(u32 a) {
    s32 r = func_0211fbb4((void *)func_ov066_02261238, a);
    if (r == 2) {
        return 1;
    }
    func_ov066_0225f22c(r);
    return 0;
}

void func_ov066_022612cc(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        switch (m->unk_08) {
        case 6:
            break;
        case 7:
            func_ov066_02261860(m);
            break;
        case 8:
            func_ov066_0226185c(m);
            break;
        case 9:
            if (data_ov066_022647b4->unk_c0.f2 != 0) {
                func_ov066_0225f824();
            } else {
                func_ov066_022617d4(m);
            }
            break;
        default:
            func_ov066_0225f22c(0x10);
            break;
        }
    } else if (m->unk_02 == 1) {
        if (data_ov066_022647b4->unk_c0.f6 != 0) {
            func_ov066_0225f3c8((void *)func_ov066_02260dd0);
        } else {
            func_ov066_0225f824();
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022613dc(u32 a) {
    s32 r = func_0211fcbc((void *)func_ov066_022612cc, a, 0, 1, 0);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02261420(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        if (data_ov066_022647b4->unk_c0.f3 != 0) {
            func_ov066_0226278c();
        }
        func_ov066_0225f5b4();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_02261490(void) {
    s32 r = func_02120060((void *)func_ov066_02261420);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_022614c4(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        switch (m->unk_08) {
        case 0:
            break;
        case 2:
            func_ov066_02261b14(m);
            break;
        case 7:
            func_ov066_02261a4c(m);
            break;
        case 9:
            if (data_ov066_022647b4->unk_c0.f2 != 0) {
                func_ov066_0225f824();
            } else {
                func_ov066_02261958(m);
            }
            break;
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022615a4(void) {
    s32 r = func_021200a8((void *)func_ov066_022614c4);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_022615d8(Unk_ov066_02260e18_Msg *m) {
    if (m->unk_02 == 0) {
        func_ov066_022615a4();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_0226160c(void) {
    s32 r = func_02120164((void *)func_ov066_022615d8, data_ov066_022647b4->unk_00);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

s32 func_ov066_02261650(void) {
    if (data_ov066_022647b4->unk_c0.f2 != 0 && data_ov066_022647b4->unk_c0.f3 == 0) {
        func_ov066_02260efc();
        data_ov066_022647b4->unk_c0.f3 = 1;
        data_ov066_022647b4->unk_c0.f2 = 0;
        return 1;
    }
    return 0;
}

void func_ov066_022616c8(void) {
    s32 t = func_01ffa2ec();
    Unk_ov066_02260e18_V *v = data_ov066_022647b4;
    if (v->unk_c0.f3 == 0) {
        v->unk_c0.f2 = 1;
    }
    func_01ffa3d4(t);
}

void func_ov066_02261704(void *m) {
    u8 buf[8];
    func_02116048(m, buf, 8);
    func_ov066_02261ce0((u8 *)data_ov066_022647b4 + 0x28, (u8 *)m + 8);
    func_ov066_02261c80();
    if (data_ov066_022647ac->unk_04 == 9) {
        data_ov066_022647ac->unk_04 = 11;
    }
    func_ov066_0225f5b4();
}

}
#pragma thumb reset
