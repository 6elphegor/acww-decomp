// mwcc-flags: -nothumb -O4,p
// I004d: itcm 0x01ffd0e4-0x01ffd50c (10 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: nothing but the functions is defined.
// Two wrappers that call the pointer-to-member dispatcher func_01ffd44c with the ptmf constants stored in .text at
// 0x01ffd0b4-0x01ffd0e4 (data_01ffd0b4.. are extern here, the unit ends before them), a scene-object update step
// (func_01ffd1b4), six members of the library base class Unk_020d8c7c_Base (symbols.txt names are C++-mangled;
// defined as extern "C" functions that carry the mangled identifier verbatim and take the object first) and the dispatcher.
#include "types.h"

class Unk_020e8b94;
class Unk_020d8c7c_Base;

struct TreeNode {
    /* 0x00 */ TreeNode *unk_00; // parent
    /* 0x04 */ TreeNode *unk_04;
    /* 0x08 */ TreeNode *unk_08;
    /* 0x0c */ TreeNode *unk_0c;
    /* 0x10 */ Unk_020d8c7c_Base *unk_10; // owner
};

struct QNode {
    /* 0x00 */ QNode *unk_00;
    /* 0x04 */ QNode *unk_04;
    /* 0x08 */ Unk_020d8c7c_Base *unk_08;
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u16 unk_0e;
};

struct FlagView {
    u8 pad_00[0x13];
    u8 unk_13;
};

struct QList {
    QNode *unk_00;
    QNode *unk_04;
};

class Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ TreeNode unk_14;
    /* 0x28 */ QNode unk_28;
    /* 0x38 */ QNode unk_38;
    /* 0x48 */ void *unk_48;
    /* 0x4c */ Unk_020e8b94 *unk_4c;
};

typedef BOOL (Unk_020d8c7c_Base::*PmfBool)();
typedef void (Unk_020d8c7c_Base::*PmfStatus)(s32);

extern "C" {
// pointer-to-member constants inside .text (0x01ffd0b4-0x01ffd0e4): {vtable offset, 1}
extern PmfStatus data_01ffd0b4;
extern PmfBool data_01ffd0bc;
extern PmfBool data_01ffd0c4;
extern PmfBool data_01ffd0cc;
extern PmfBool data_01ffd0d4;
extern PmfStatus data_01ffd0dc;
extern u32 data_0213b1a4;
extern QList data_021f59a4, data_021f59b4, data_021f59c4, data_021f59d4;

void func_020e7968(QList *l, QNode *n);
void func_020e79a0(QList *l, QNode *n);
void func_020e7930(QList *l, QNode *n);
void func_020ed5c0(QList *l, QNode *n);
void func_020ed188(Unk_020d8c7c_Base *p);
Unk_020d8c7c_Base *func_020ed174(Unk_020d8c7c_Base *p);
s32 func_01ffd44c(Unk_020d8c7c_Base *p, PmfBool a, PmfBool b, PmfStatus c);
}

static inline BOOL isOne(u32 v) {
    return v == 1;
}

static inline BOOL isTwo(u32 v) {
    return v == 2;
}

static inline BOOL testBit(u8 *p, u32 m) {
    return (*p & m) != 0;
}

static inline BOOL changed(QNode *q) {
    return q->unk_0e != q->unk_0c;
}

extern "C" s32 func_01ffd44c(Unk_020d8c7c_Base *p, PmfBool a, PmfBool b, PmfStatus c) {
    BOOL r = (p->*b)();
    s32 status;
    if (r != 0) {
        r = (p->*a)();
        if (r == -1) {
            status = 3;
        } else if (r == 1) {
            status = 2;
        } else {
            status = 1;
        }
    } else {
        status = 0;
    }
    (p->*c)(status);
    return r;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_18Ev(Unk_020d8c7c_Base *self) {
    return TRUE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_1cEv(Unk_020d8c7c_Base *self) {
    if (self->unk_0f != 0 || (self->unk_13 & 2) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_20Ev(Unk_020d8c7c_Base *self) {
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_24Ev(Unk_020d8c7c_Base *self) {
    return TRUE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_28Ev(Unk_020d8c7c_Base *self) {
    if (self->unk_0f != 0 || (self->unk_13 & 8) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_2cEv(Unk_020d8c7c_Base *self) {
}

extern "C" BOOL func_01ffd1b4(Unk_020d8c7c_Base *self) {
    if (self->unk_0f != 0) {
        self->unk_0f = 0;
        if (isOne(self->unk_0e)) {
            func_020e79a0(&data_021f59a4, &self->unk_28);
            func_020e79a0(&data_021f59c4, &self->unk_38);
        } else {
            func_020e79a0(&data_021f59b4, &self->unk_28);
        }
        func_020e7930(&data_021f59d4, &self->unk_28);
        self->unk_0e = 2;
        for (TreeNode *c = self->unk_14.unk_04; c != NULL; c = c->unk_0c) {
            func_020ed188(c->unk_10);
        }
    } else {
        Unk_020d8c7c_Base *parent = func_020ed174(self);
        if (parent != NULL) {
            if ((parent->unk_13 & 1) != 0 || (parent->unk_13 & 2) != 0) {
                self->unk_13 |= 2;
            } else if (*(const u8 *)&self->unk_13 & 2) {
                self->unk_13 &= ~2;
            }
            if ((parent->unk_13 & 4) != 0 || (parent->unk_13 & 8) != 0) {
                self->unk_13 |= 8;
            } else if (*(const u8 *)&self->unk_13 & 8) {
                self->unk_13 &= ~8;
            }
        }
        if (isOne(self->unk_0e)) {
            QNode *q = &self->unk_28;
            if (changed(q)) {
                func_020e79a0(&data_021f59a4, &self->unk_28);
                q = &self->unk_28;
                q->unk_0c = q->unk_0e;
                func_020ed5c0(&data_021f59a4, q);
            }
            q = &self->unk_38;
            if (changed(q)) {
                func_020e79a0(&data_021f59c4, &self->unk_38);
                q = &self->unk_38;
                q->unk_0c = q->unk_0e;
                func_020ed5c0(&data_021f59c4, q);
            }
        } else if (!isTwo(self->unk_0e)) {
            if (self->unk_11 != 0) {
                self->unk_11 = 0;
                func_020e7968(&data_021f59b4, &self->unk_28);
            } else if (self->unk_10 != 0) {
                self->unk_10 = 0;
                func_020ed5c0(&data_021f59a4, &self->unk_28);
                func_020ed5c0(&data_021f59c4, &self->unk_38);
                self->unk_0e = 1;
            }
        }
    }
    return TRUE;
}

extern "C" s32 func_01ffd14c(Unk_020d8c7c_Base *p) {
    return func_01ffd44c(p, data_01ffd0cc, data_01ffd0d4, data_01ffd0b4);
}

extern "C" s32 func_01ffd0e4(Unk_020d8c7c_Base *p) {
    return func_01ffd44c(p, data_01ffd0bc, data_01ffd0c4, data_01ffd0dc);
}

