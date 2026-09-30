// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_0225f1a0_S {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[3];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18[6];
    void (*unk_30)(u32);
    u32 unk_34;
    void (*unk_38)(void *);
    u32 unk_3c;
};

struct Unk_ov066_0225f7c8_Bits {
    s32 lo : 10;
    s32 f : 1;
    s32 hi : 21;
};

struct Unk_ov066_0225f1a0_Msg {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_ov066_0225f64c_Rec {
    u8 pad[0x5c];
    u16 unk_5c;
    u8 pad2[0x77 - 0x5e];
    u8 unk_77;
};

extern "C" {
extern Unk_ov066_0225f1a0_S *data_ov066_022647ac;
extern void (*data_ov066_022647a0)(u32);
extern void (*data_ov066_022647a4)(void *);
extern s32 (*data_ov066_022647a8)(s32, s32);
extern s32 (*data_ov066_02264780[4])(void *);

s32 func_021202b4(void);
s32 func_0211f73c(void);

void func_ov066_0225f1e4(void *p);
void func_ov066_0225f22c(u32 v);
void func_ov066_0225f310(void);
void func_ov066_0225f32c(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f3c8(void *p);
void func_ov066_0225f40c(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f44c(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f494(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f4d4(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f554(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f5b4(void);
s32 func_ov066_0225f688(Unk_ov066_0225f64c_Rec *r);
void func_ov066_0225f77c(void);
void func_ov066_0225f824(void);
void func_ov066_0225f830(void);
void func_ov066_0225f938(void);
void func_ov066_0225f998(void);
void func_ov066_0225f9f8(void);
void func_ov066_0225fa48(void);
void func_ov066_0225fa98(void);
void func_ov066_0225faf8(void);
void func_ov066_0225fb48(void);
void func_ov066_0225fbe4(void);
void func_ov066_0225fc3c(void);
s32 func_ov066_0225fd08(void);
void func_ov066_022605a0(void);
void func_ov066_022616c8(void);
void func_ov066_022623d4(void);
}

#pragma thumb off
extern "C" {

s32 func_ov066_0225f1a0(void (*fn)(void *)) {
    if (data_ov066_022647ac != NULL) {
        data_ov066_022647ac->unk_38 = fn;
        return TRUE;
    }
    return FALSE;
}

void func_ov066_0225f1c0(u32 a, u32 b) {
    u8 buf[2];
    buf[0] = a;
    buf[1] = b;
    func_ov066_0225f1e4(buf);
}

void func_ov066_0225f1e4(void *p) {
    if (data_ov066_022647ac == NULL) {
        return;
    }
    if (data_ov066_022647ac->unk_38 == NULL) {
        return;
    }
    data_ov066_022647ac->unk_38(p);
}

void func_ov066_0225f22c(u32 v) {
    data_ov066_022647ac->unk_04 = v | 0x80;
    data_ov066_022647ac->unk_3c &= ~0x800;
    if (data_ov066_022647a0 == NULL) {
        return;
    }
    data_ov066_022647a0(v);
}

void func_ov066_0225f284(void *p) {
    if (data_ov066_022647a4 == NULL) {
        return;
    }
    if (p == NULL) {
        return;
    }
    data_ov066_022647a4(p);
}

s32 func_ov066_0225f2c8(s32 a, s32 b) {
    if (data_ov066_022647a8 != NULL) {
        s32 r = data_ov066_022647a8(a, b);
        if (r != 0) {
            return r;
        }
    }
    func_ov066_0225f22c(0x42);
    return 0;
}

void func_ov066_0225f310(void) {
    data_ov066_022647ac->unk_3c &= ~0x400;
}

void func_ov066_0225f32c(Unk_ov066_0225f1a0_Msg *m) {
    data_ov066_022647ac->unk_16 = 0;
    func_ov066_0225f310();
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_15 = 0;
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_0225f5b4();
        return;
    }
    data_ov066_022647ac->unk_15++;
    if (data_ov066_022647ac->unk_15 > 0x10) {
        func_ov066_0225f22c(m->unk_02);
        return;
    }
    func_ov066_0225f3c8((void *)func_ov066_0225f32c);
}

void func_ov066_0225f3c8(void *p) {
    s32 r = func_021202b4();
    data_ov066_022647ac->unk_3c |= 0x400;
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_0225f40c(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 3;
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f44c(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_022623d4();
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f494(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 2;
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f4d4(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 3;
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f514(u32 idx) {
    s32 r = data_ov066_02264780[idx]((void *)func_ov066_0225f554);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_0225f554(Unk_ov066_0225f1a0_Msg *m) {
    switch (m->unk_00) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        func_ov066_0225f4d4(m);
        break;
    case 4:
        func_ov066_0225f494(m);
        break;
    case 5:
        func_ov066_0225f44c(m);
        break;
    case 6:
        func_ov066_0225f40c(m);
        break;
    }
    func_ov066_0225f5b4();
}

void func_ov066_0225f5b4(void) {
    if (func_ov066_0225fd08() != 0) {
        data_ov066_022647ac->unk_3c &= ~0x800;
        if (data_ov066_022647ac->unk_30 != NULL) {
            data_ov066_022647ac->unk_30(data_ov066_022647ac->unk_34);
            if (data_ov066_022647ac != NULL) {
                data_ov066_022647ac->unk_30 = NULL;
            }
        }
        if (data_ov066_022647ac != NULL) {
            data_ov066_022647ac->unk_00 = 7;
        }
        return;
    }
    func_ov066_0225f830();
}

u32 func_ov066_0225f63c(Unk_ov066_0225f1a0_Msg *m) {
    if (m != NULL) {
        return m->unk_00;
    }
    return 0;
}

void *func_ov066_0225f64c(Unk_ov066_0225f64c_Rec *r) {
    if (r != NULL && r->unk_5c != 0) {
        if (func_ov066_0225f688(r) != 0) {
            return (u8 *)((u32)r + 0x70) + 8;
        }
    }
    return NULL;
}

s32 func_ov066_0225f688(Unk_ov066_0225f64c_Rec *r) {
    if (r != NULL && r->unk_5c != 0) {
        return r->unk_77;
    }
    return 0;
}

s32 func_ov066_0225f6a8(void) {
    switch (data_ov066_022647ac->unk_04) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    case 10:
    case 11:
        switch (func_0211f73c()) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        return 4;
    }
    return 5;
}

void func_ov066_0225f77c(void) {
    switch (data_ov066_022647ac->unk_04) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    default:
        func_ov066_0225f3c8((void *)func_ov066_0225f32c);
        break;
    }
}

s32 func_ov066_0225f7c8(void) {
    BOOL r = FALSE;
    if (((Unk_ov066_0225f7c8_Bits *)&data_ov066_022647ac->unk_3c)->f != 0) {
        r = TRUE;
    } else if (data_ov066_022647ac->unk_16 == 1) {
        func_ov066_0225f77c();
        r = TRUE;
    }
    return r;
}

void func_ov066_0225f824(void) {
    func_ov066_0225f77c();
}

void func_ov066_0225f830(void) {
    switch (data_ov066_022647ac->unk_04) {
    case 2:
        func_ov066_0225fc3c();
        break;
    case 3:
        func_ov066_0225fbe4();
        break;
    case 4:
        func_ov066_0225fb48();
        break;
    case 6:
        func_ov066_0225faf8();
        break;
    case 7:
        func_ov066_0225fa98();
        break;
    case 8:
        func_ov066_0225fa48();
        break;
    case 5:
        func_ov066_0225f9f8();
        break;
    case 10:
        func_ov066_0225f998();
        break;
    case 11:
        func_ov066_0225f938();
        break;
    case 0:
    case 1:
        func_ov066_0225f22c(0x44);
        break;
    default:
        func_ov066_0225f824();
        break;
    }
}

void func_ov066_0225f938(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        func_ov066_0225f824();
        break;
    case 3:
        func_ov066_022616c8();
        break;
    case 5:
        break;
    }
}

void func_ov066_0225f998(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        func_ov066_0225f824();
        break;
    case 5:
        func_ov066_022616c8();
        break;
    case 3:
        break;
    }
}

void func_ov066_0225f9f8(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
        func_ov066_0225f824();
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        break;
    }
}

void func_ov066_0225fa48(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
        func_ov066_0225f824();
        break;
    case 5:
        break;
    }
}

void func_ov066_0225fa98(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
        func_ov066_0225f824();
        break;
    case 5:
        func_ov066_022605a0();
        break;
    case 4:
        break;
    }
}

}
#pragma thumb reset
