// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov067_022604c0_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[6];
    u32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_ov067_022608c0_Cb {
    u32 a;
    u16 b;
    u16 c;
};

struct Unk_ov067_0226fc_Sub {
    u8 pad[0x34];
    u16 unk_34;
};

typedef s32 (*Unk_ov067_022604c0_Fn)(u32, void *);

struct Unk_ov067_022604c0_S {
    u8 pad_0000[0x4ee0];
    u8 unk_4ee0[0x200];
    u16 unk_50e0;
    u16 unk_50e2;
    u16 unk_50e4;
    u16 unk_50e6;
    u8 pad_50e8[4];
    s32 unk_50ec;
    s32 unk_50f0;
    s32 unk_50f4;
    Unk_ov067_022604c0_Fn unk_50f8;
    Unk_ov067_0226fc_Sub *unk_50fc;
    s32 unk_5100;
    u8 pad_5104[0x516e - 0x5104];
    u16 unk_516e;
};

extern "C" {
extern Unk_ov067_022604c0_S *data_ov067_02262260;
extern u8 data_ov067_02262220[];

s32 func_021202b4(void *);
s32 func_021203ec(void *);
s32 func_0212035c(void *);
s32 func_021203a4(void *);
s32 func_0211f3dc(void *, u32);
s32 func_02120434(void *);
s32 func_0211fb68(void *);
s32 func_0211fb0c(u32, void *, u32);
s32 func_0211f188(void);
s32 func_0212052c(void *, u32, void *, ...);

s32 func_ov067_0225f210(void *);
s32 func_ov067_0225f2ec(u32, u32);
void func_ov067_0225f3e8(void *);
s32 func_ov067_0225fa80(void *, u32);
s32 func_ov067_0225fb7c(u32);
s32 func_ov067_0225fe1c(u32);
s32 func_ov067_02260168(u32);
s32 func_ov067_02260de4(void *, u32, u32);

void func_ov067_022604c0(Unk_ov067_022604c0_Msg *m);
void func_ov067_0226056c(Unk_ov067_022604c0_Msg *m);
void func_ov067_02260654(Unk_ov067_022604c0_Msg *m);
void func_ov067_022606f8(Unk_ov067_022604c0_Msg *m);
void func_ov067_0226079c(Unk_ov067_022604c0_Msg *m);
void func_ov067_022608c0(Unk_ov067_022604c0_Msg *m);
void func_ov067_022609c0(Unk_ov067_022604c0_Msg *m);
void func_ov067_02260a04(void *m);
void func_ov067_02260a4c(Unk_ov067_022604c0_S *s, s32 st, u32 arg);
void func_ov067_02260c8c(Unk_ov067_022604c0_S *s);
s32 func_ov067_02260d64(Unk_ov067_022604c0_S *s, void *m);
s32 func_ov067_02260d9c(Unk_ov067_022604c0_S *s, u32 id, u32 arg);
}

#pragma thumb off

extern "C" {

void func_ov067_022604c0(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 1, func_021202b4((void *)func_ov067_022604c0));
        return;
    }
    if (m->unk_00 != 1) {
        return;
    }
    s->unk_50e4 = 0;
    func_ov067_02260a4c(s, 3, 0);
}

void func_ov067_0226056c(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 4, func_021203ec((void *)func_ov067_0226056c));
        return;
    }
    if (m->unk_00 != 4) {
        return;
    }
    if (func_ov067_02260d9c(s, 2, func_0211f188()) == 0) {
        return;
    }
    data_ov067_02262260 = NULL;
    s->unk_50f0 = 0;
    if (s->unk_50f8 == NULL) {
        return;
    }
    s->unk_50f8(0, 0);
}

void func_ov067_02260654(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 6, func_0212035c((void *)func_ov067_02260654));
        return;
    }
    if (m->unk_00 != 6) {
        return;
    }
    func_ov067_02260a4c(s, 2, 0);
}

void func_ov067_022606f8(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 5, func_021203a4((void *)func_ov067_022606f8));
        return;
    }
    if (m->unk_00 != 5) {
        return;
    }
    func_ov067_02260a4c(s, 3, 0);
}

void func_ov067_0226079c(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_5100 = 1;
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 0, func_0211f3dc(s, s->unk_50e0));
        func_ov067_02260d9c(s, 3, func_02120434((void *)func_ov067_0226079c));
        return;
    }
    if (m->unk_00 != 3) {
        return;
    }
    if (func_ov067_02260d9c(s, 0x80, func_0211fb68((void *)func_ov067_022609c0)) == 0) {
        return;
    }
    if (func_ov067_02260d9c(s, 0x81, func_0211fb0c(4, (void *)func_ov067_022608c0, 0)) == 0) {
        return;
    }
    func_ov067_02260a4c(s, 2, 0);
}

void func_ov067_022608c0(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (func_ov067_02260d64(s, m) == 0) {
        return;
    }
    u32 t = m->unk_04;
    Unk_ov067_022608c0_Cb c;
    switch (t) {
    case 7:
        return;
    case 0x15: {
        s32 r = 0;
        c.c = 1 << m->unk_12;
        c.b = m->unk_10;
        c.a = m->unk_0c;
        if (s->unk_50f8 != NULL) {
            r = s->unk_50f8(8, &c);
        }
        if (r == 0) {
            return;
        }
        func_ov067_0225fa80(s, 3);
        return;
    }
    case 9: {
        Unk_ov067_022604c0_Fn cb = s->unk_50f8;
        u32 sh = 1 << m->unk_12;
        if (cb == NULL) {
            return;
        }
        cb(10, (void *)sh);
        return;
    }
    }
}

void func_ov067_022609c0(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m->unk_02 != 8) {
        return;
    }
    func_ov067_0225f3e8(data_ov067_02262220);
    s->unk_50f4 = 6;
    s->unk_50f0 = 6;
}

void func_ov067_02260a04(void *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    func_ov067_02260d64(s, m);
    s->unk_50ec = 0;
    if (s->unk_50e6 == 0) {
        return;
    }
    func_ov067_02260c8c(s);
}

void func_ov067_02260a4c(Unk_ov067_022604c0_S *s, s32 st, u32 arg) {
    s->unk_50f0 = st;
    s32 prev = s->unk_50f4;
    if (prev == st) {
        switch (st) {
        case 0:
        case 1:
            break;
        case 2:
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(2, 0);
            return;
        case 3:
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(1, 0);
            return;
        case 4:
            s->unk_50ec = 0;
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(3, 0);
            return;
        case 5:
            s->unk_50ec = 0;
            if (s->unk_50f8 != NULL) {
                s->unk_50f8(4, 0);
            }
            s->unk_50e6 |= 1;
            if (s->unk_50f8 != NULL) {
                s->unk_50f8(9, (void *)arg);
            }
            func_ov067_02260c8c(s);
            return;
        }
    } else {
    switch (st) {
    case 0:
        func_ov067_0226079c(NULL);
        return;
    case 1:
        break;
    case 2:
        switch (prev) {
        case 0:
            func_ov067_0226056c(NULL);
            return;
        case 1:
        case 2:
            break;
        case 3:
        case 4:
        case 5:
            func_ov067_022606f8(NULL);
            return;
        }
        break;
    case 3:
        switch (prev) {
        case 0:
        case 2:
            func_ov067_02260654(NULL);
            return;
        case 1:
        case 3:
            break;
        case 4:
            if (s->unk_5100 != 0) {
                func_ov067_0225fe1c(0);
                return;
            }
            func_ov067_02260168(0);
            return;
        case 5:
            func_ov067_0225fb7c(0);
            return;
        }
        break;
    case 4:
    case 5:
        func_ov067_022604c0(NULL);
        return;
    }
    }
}

void func_ov067_02260c8c(Unk_ov067_022604c0_S *s) {
    struct {
        void *d;
        u16 e;
        u16 f;
    } l;
    if (s->unk_50ec != 0) {
        return;
    }
    u32 v;
    if (s->unk_50e4 == 0) {
        v = s->unk_50fc->unk_34;
    } else {
        v = *(u16 *)((u8 *)s + 0x516e);
    }
    u16 fl = s->unk_50e6;
    l.e = v;
    l.d = (void *)((u8 *)s + 0x4ee0);
    l.f = fl;
    if (s->unk_50f8 != NULL) {
        s->unk_50f8(7, &l.d);
    }
    if (l.e > v) {
        return;
    }
    s->unk_50ec = func_ov067_02260d9c(s, 0xf, func_0212052c((void *)func_ov067_02260a04, 0, l.d, l.e, l.f, 4, 2));
}

s32 func_ov067_02260d64(Unk_ov067_022604c0_S *s, void *m) {
    s32 r = func_ov067_0225f210(m);
    if (r == 0) {
        func_ov067_02260de4(s, ((u16 *)m)[0], ((u16 *)m)[1]);
    }
    return r;
}

s32 func_ov067_02260d9c(Unk_ov067_022604c0_S *s, u32 id, u32 arg) {
    s32 r = func_ov067_0225f2ec(id, arg);
    if (r == 0) {
        func_ov067_02260de4(s, id, arg);
    }
    return r;
}

}

#pragma thumb reset
