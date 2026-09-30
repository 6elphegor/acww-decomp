#include "types.h"

class Unk_ov049_0225be74;

typedef void (Unk_ov049_0225be74::*Unk_ov049_0225be74_Fn)();

struct Unk_ov049_0225be74_Ent {
    Unk_ov049_0225be74_Fn fn;
    u8 flag;
    u8 pad[3];
};

extern "C" {
extern u32 data_ov049_0225bc58;
extern Unk_ov049_0225be74_Ent data_ov049_0225bd70[];
extern u8 data_ov049_0225b784[];
extern void *data_020cbb18;

BOOL func_0206ed18();
s32 func_0206ed38();
void *func_0209750c();
void *func_020986d4(void *);
void *func_02071c5c();
s32 func_02071c1c(void *, s32);
BOOL func_02070b68(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
u16 *func_0209872c(void *);
u16 *func_02098714(void *);
u16 *func_020986fc(void *);
void func_02094bb4(u16 *);
void func_02094b9c(u16 *);
void func_02094ba8(u16 *);
void func_02067a84(void *, u8 *, u32);
void func_02067a78(void *);
void *func_020679b4(void *);
s32 func_020aa514(void *);
s32 func_0202e18c(void *, void *, s32);
void func_0202e174(void *, void *);
BOOL func_02072e44(void *);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_020816f8(s32);
void func_02015a80(void *, s32);
void func_0201517c(void *, void *, u32, u32);
void func_020151d0(void *, s32);
void func_02094f48(s32, s32);
void func_0203a5ac();
void func_0203a598();
s32 func_02098ffc();
BOOL func_0201ade4(void *, s32);
s32 func_0201ad68(void *, s32, s32);
void func_0201ad4c(void *, s32);
BOOL func_0204bab8(u16 *);
void func_0206eb38(s32);
void func_ov049_02259484(void *);
BOOL func_ov049_02259bec(u16 *p, s32 v);
}

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
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
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    s32 func_02015a5c();
};
class Unk_ov049_0225be74 : public Unk_02015b54 {
public:
    virtual ~Unk_ov049_0225be74();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov049_02259774();
    void func_ov049_02259890();
    void func_ov049_022599ac();
    void func_ov049_02259a28();
    void func_ov049_02259a48();
    void func_ov049_02259a8c(s32 v);
    void func_ov049_02259b28();
    void func_ov049_02259bc0(s32 v);
    void func_ov049_02259c14(s32 v);
    void func_ov049_02259dd8(s32 v);
    void func_ov049_0225a034(s32 v);
    void func_ov049_0225a048(s32 v);
    void func_ov049_02259484();

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ u8 *unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
};

static inline BOOL Unk_ov049_02259774_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}


void Unk_ov049_0225be74::func_ov049_02259774() {
    u8 m[2];
    u16 v[2];
    if (func_0206ed18()) {
        void *h = func_0209750c();
        s32 a = func_0206ed38();
        func_020986d4(h);
        u32 t = func_02071c1c(func_02071c5c(), a);
        u16 lo, hi;
        func_02070b68(9, t, 4, *(u8 *)(unk_ac + 0x966), 1);
        if (t < 8) {
            lo = t + 0x12a8;
        } else {
            lo = 0x12a8;
        }
        if (t < 8) {
            hi = t + 0x1429;
        } else {
            hi = 0x1429;
        }
        u32 x = *func_0209872c(h);
        u32 y = *func_02098714(h);
        if (lo == x) {
            if (Unk_ov049_02259774_R(func_0209872c(h), 0x12a8, 0x12af)) {
                v[0] = lo;
                func_02094bb4(&v[0]);
            }
        }
        if (hi == y) {
            if (Unk_ov049_02259774_R(func_02098714(h), 0x1429, 0x1430)) {
                v[1] = hi;
                func_02094b9c(&v[1]);
            }
        }
        m[0] = 0x21;
        func_02067a84(unk_3c, m, data_ov049_0225bc58);
    } else {
        m[1] = 0x22;
        func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
    }
}

void Unk_ov049_0225be74::func_ov049_02259890() {
    u8 m[2];
    u16 v[2];
    if (func_0206ed18()) {
        void *h = func_0209750c();
        s32 a = func_0206ed38();
        func_020986d4(h);
        u32 t = func_02071c1c(func_02071c5c(), a);
        u16 lo, hi;
        func_02070e4c(4, *(u8 *)(unk_ac + 0x966), 9, t, 1);
        if (t < 8) {
            lo = t + 0x12a8;
        } else {
            lo = 0x12a8;
        }
        if (t < 8) {
            hi = t + 0x1429;
        } else {
            hi = 0x1429;
        }
        u32 x = *func_0209872c(h);
        u32 y = *func_02098714(h);
        if (lo == x) {
            if (Unk_ov049_02259774_R(func_0209872c(h), 0x12a8, 0x12af)) {
                v[0] = lo;
                func_02094bb4(&v[0]);
            }
        }
        if (hi == y) {
            if (Unk_ov049_02259774_R(func_02098714(h), 0x1429, 0x1430)) {
                v[1] = hi;
                func_02094b9c(&v[1]);
            }
        }
        m[0] = 0x27;
        func_02067a84(unk_3c, m, data_ov049_0225bc58);
    } else {
        m[1] = 0x22;
        func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
    }
}

void Unk_ov049_0225be74::func_ov049_022599ac() {
    u8 m[2];
    if (func_0206ed18()) {
        void *h = func_0209750c();
        s32 a = func_0206ed38();
        func_020986d4(h);
        u32 t = func_02071c1c(func_02071c5c(), a);
        func_02070e4c(9, t, 4, *(u8 *)(unk_ac + 0x966), 1);
        m[0] = 0x24;
        func_02067a84(unk_3c, m, data_ov049_0225bc58);
    } else {
        m[1] = 0x22;
        func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
    }
}

void Unk_ov049_0225be74::func_ov049_02259a28() {
    u8 m[1];
    m[0] = 0x12;
    func_02067a84(unk_3c, m, data_ov049_0225bc58);
}

void Unk_ov049_0225be74::func_ov049_02259a48() {
    u8 m[2];
    if (func_0206ed18()) {
        m[0] = 0x10;
        func_02067a84(unk_3c, m, data_ov049_0225bc58);
    } else {
        m[1] = 0xf;
        func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
    }
}


static inline BOOL Unk_ov049_02259dd8_VR(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

#define F734 (*(u16 *)(unk_ac + 0x734))
#define F732 (*(u16 *)(unk_ac + 0x732))
#define F730 (*(u16 *)(unk_ac + 0x730))

void Unk_ov049_0225be74::func_ov049_02259b28() {
    u8 m[2];
    if ((s32)unk_1e >= 0 && (s32)unk_1e <= 0x11) {
        s32 t = func_020aa514(func_020679b4(unk_3c));
        if (t != 2) {
            m[1] = data_ov049_0225b784[t];
            func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
        } else {
            if (func_0202e18c(unk_ac, m, 2)) {
                func_0202e174(unk_ac, m);
            }
        }
    }
    if (!func_02072e44(data_020cbb18)) {
        if (*func_0209c37c(0, 0x4a) == 0) {
            s32 r = func_020816f8(5);
            if (r) {
                func_02015a80(this, r);
            }
        }
    }
}

void Unk_ov049_0225be74::func_ov049_02259bc0(s32 v) {
    if (v == 0) {
        func_0201517c(this, (void *)func_ov049_02259bec, 0xd, 0);
        func_020151d0(this, 0);
        func_ov049_02259a8c(9);
    }
}

extern "C" BOOL func_ov049_02259bec(u16 *p, s32 v) {
    if (v == 2) {
        return Unk_ov049_02259774_R(p, 0x155f, 0x1560);
    }
    return FALSE;
}

void Unk_ov049_0225be74::func_ov049_02259c14(s32 v) {
    u8 m[3];
    volatile u16 A[2];
    u16 B[2];
    u16 C[2];
    if (Unk_ov049_02259774_R((u16 *)(unk_ac + 0x734), 0x11a8, 0x12a7)) {
        A[1] = F730;
        func_02094bb4((u16 *)&A[1]);
    }
    if (Unk_ov049_02259774_R((u16 *)(unk_ac + 0x734), 0x13c8, 0x1407) || (F734 >= 0x13a8 && F734 <= 0x13c7)) {
        B[0] = F730;
        func_02094b9c(&B[0]);
    }
    if (Unk_ov049_02259774_R((u16 *)(unk_ac + 0x734), 0x1431, 0x1470)) {
        B[1] = F730;
        func_02094ba8(&B[1]);
    }
    if (F732 != 0xfff1) {
        A[0] = F732;
        BOOL r = FALSE;
        u32 h = A[0];
        u32 l = A[0];
        if (l >= 0x13a8 && h <= 0x13c7) {
            r = TRUE;
        }
        if (r || (h >= 0x13c8 && h <= 0x1407)) {
            C[0] = F732;
            func_02094b9c((u16 *)&C[0]);
        } else if (h >= 0x1431 && h <= 0x1470) {
            C[1] = F732;
            func_02094ba8((u16 *)&C[1]);
        }
    }
    func_02094f48(0, 4);
    func_ov049_02259a8c(8);
    func_0203a5ac();
    if (v == 0) {
        s32 r = func_02098ffc();
        if (r == -1) {
            m[0] = 0x2c;
            func_02067a84(unk_3c, m, data_ov049_0225bc58);
        } else if (!func_0201ade4(unk_ac, unk_b8)) {
            m[1] = 0x2b;
            func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
        } else {
            m[2] = 0x29;
            func_02067a84(unk_3c, &m[2], data_ov049_0225bc58);
            func_ov049_02259484();
        }
    }
}

void Unk_ov049_0225be74::func_ov049_02259dd8(s32 v) {
    u8 m[3];
    u16 A[2];
    u16 B[2];
    u16 C[2];
    void *h = func_0209750c();
    if (v == 0) {
        s32 r = func_02098ffc();
        if (r == -1) {
            m[0] = 0x2c;
            func_02067a84(unk_3c, m, data_ov049_0225bc58);
        } else if (!func_0201ade4(unk_ac, unk_b8)) {
            m[1] = 0x2b;
            func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
        } else {
            m[2] = 0x29;
            func_02067a84(unk_3c, &m[2], data_ov049_0225bc58);
            func_ov049_02259484();
        }
    } else if (v == 1) {
        F732 = 0xfff1;
        if (Unk_ov049_02259774_R((u16 *)(unk_ac + 0x734), 0x11a8, 0x12a7)) {
        } else if (F734 >= 0x13c8 && F734 <= 0x1407) {
        } else if (F734 >= 0x13a8 && F734 <= 0x13c7) {
        } else if (F734 >= 0x1431 && F734 <= 0x1470) {
        } else {
            return;
        }
        if (F734 >= 0x11a8 && F734 <= 0x12a7) {
            F730 = *func_0209872c(h);
            A[1] = F734;
            func_02094bb4(&A[1]);
        } else if ((F734 >= 0x13c8 && F734 <= 0x1407) || (F734 >= 0x13a8 && F734 <= 0x13c7)) {
            if (F734 >= 0x13a8 && F734 <= 0x13c7) {
                if (!func_0204bab8((u16 *)(unk_ac + 0x734))) {
                    F732 = *func_020986fc(h);
                    B[0] = 0xfff1;
                    func_02094ba8(&B[0]);
                }
            }
            F730 = *func_02098714(h);
            B[1] = F734;
            func_02094b9c(&B[1]);
        } else if (F734 >= 0x1431 && F734 <= 0x1470) {
            F730 = *func_020986fc(h);
            C[0] = F734;
            func_02094ba8(&C[0]);
            A[0] = 0xfff1;
            A[0] = *func_02098714(h);
            if (Unk_ov049_02259dd8_VR(&A[0], 0x13a8, 0x13c7)) {
                if (!func_0204bab8(&A[0])) {
                    F732 = *func_02098714(h);
                    C[1] = 0xfff1;
                    func_02094b9c(&C[1]);
                }
            }
        }
        func_02094f48(1, 4);
        func_0203a598();
        func_02067a78(unk_3c);
        func_ov049_02259a8c(7);
    }
}

void Unk_ov049_0225be74::func_ov049_0225a034(s32 v) {
    if (v == 1) {
        func_0206eb38(0);
    }
}

void Unk_ov049_0225be74::func_ov049_0225a048(s32 v) {
    u8 m[3];
    switch (v) {
    case 0:
        switch (func_0201ad68(unk_ac, unk_b8, unk_bc)) {
        case 0:
            func_0201ad4c(unk_ac, unk_b8);
            m[0] = 0x1a;
            func_02067a84(unk_3c, m, data_ov049_0225bc58);
            break;
        case 1:
            m[1] = 0x1e;
            func_02067a84(unk_3c, &m[1], data_ov049_0225bc58);
            break;
        case 2:
            m[2] = 0x38;
            func_02067a84(unk_3c, &m[2], data_ov049_0225bc58);
            func_0206eb38(0);
            break;
        }
        break;
    case 1:
        func_0206eb38(0);
        break;
    }
}

void Unk_ov049_0225be74::vfunc_84() {
    s32 i = unk_b4;
    if (data_ov049_0225bd70[i].flag == 0) {
        if (data_ov049_0225bd70[i].fn != 0) {
            (this->*data_ov049_0225bd70[i].fn)();
            func_ov049_02259a8c(0);
        }
    }
}

void Unk_ov049_0225be74::vfunc_80() {
    s32 i = unk_b4;
    if (data_ov049_0225bd70[i].flag != 0) {
        if (data_ov049_0225bd70[i].fn != 0) {
            (this->*data_ov049_0225bd70[i].fn)();
        }
    }
}

void Unk_ov049_0225be74::func_ov049_02259a8c(s32 v) {
    unk_b4 = v;
}
