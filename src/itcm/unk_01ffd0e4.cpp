// mwcc-flags: -nothumb -O4,p
// I004d: itcm 0x01ffd0e4-0x01ffd50c (10 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: nothing but the functions is defined.
// Two wrappers that call the pointer-to-member dispatcher ProcBase_RunPhase with the ptmf constants stored in .text at
// 0x01ffd0b4-0x01ffd0e4 (data_01ffd0b4.. are extern here, the unit ends before them), a scene-object update step
// (func_01ffd1b4), six members of the library base class ProcBase (symbols.txt names are C++-mangled;
// defined as extern "C" functions that carry the mangled identifier verbatim and take the object first) and the dispatcher.
#include "types.h"

class Heap;
class ProcBase;

struct TreeNode {
    /* 0x00 */ TreeNode *unk_00; // parent
    /* 0x04 */ TreeNode *unk_04;
    /* 0x08 */ TreeNode *unk_08;
    /* 0x0c */ TreeNode *unk_0c;
    /* 0x10 */ ProcBase *unk_10; // owner
};

struct QNode {
    /* 0x00 */ QNode *unk_00;
    /* 0x04 */ QNode *unk_04;
    /* 0x08 */ ProcBase *unk_08;
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

class ProcBase {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();

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
    /* 0x4c */ Heap *unk_4c;
};

typedef BOOL (ProcBase::*PmfBool)();
typedef void (ProcBase::*PmfStatus)(s32);

extern "C" {
// pointer-to-member constants inside .text (0x01ffd0b4-0x01ffd0e4): {vtable offset, 1}
extern PmfStatus data_01ffd0b4;
extern PmfBool data_01ffd0bc;
extern PmfBool data_01ffd0c4;
extern PmfBool data_01ffd0cc;
extern PmfBool data_01ffd0d4;
extern PmfStatus data_01ffd0dc;
extern u32 gTaskPhase;
extern QList gTaskExecuteList, gTaskCreateList, gTaskDrawList, gTaskDeleteList;

void func_020e7968(QList *l, QNode *n);
void func_020e79a0(QList *l, QNode *n);
void func_020e7930(QList *l, QNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
void ProcBase_RequestDelete(ProcBase *p);
ProcBase *ProcBase_GetParent(ProcBase *p);
s32 ProcBase_RunPhase(ProcBase *p, PmfBool a, PmfBool b, PmfStatus c);
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

extern "C" s32 ProcBase_RunPhase(ProcBase *p, PmfBool a, PmfBool b, PmfStatus c) {
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

extern "C" BOOL _ZN8ProcBase9onExecuteEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase10preExecuteEv(ProcBase *self) {
    if (self->unk_0f != 0 || (self->unk_13 & 2) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase8vfunc_20Ev(ProcBase *self) {
}

extern "C" BOOL _ZN8ProcBase6onDrawEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase7preDrawEv(ProcBase *self) {
    if (self->unk_0f != 0 || (self->unk_13 & 8) != 0) {
        return FALSE;
    }
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase8postDrawEv(ProcBase *self) {
}

extern "C" BOOL func_01ffd1b4(ProcBase *self) {
    if (self->unk_0f != 0) {
        self->unk_0f = 0;
        if (isOne(self->unk_0e)) {
            func_020e79a0(&gTaskExecuteList, &self->unk_28);
            func_020e79a0(&gTaskDrawList, &self->unk_38);
        } else {
            func_020e79a0(&gTaskCreateList, &self->unk_28);
        }
        func_020e7930(&gTaskDeleteList, &self->unk_28);
        self->unk_0e = 2;
        for (TreeNode *c = self->unk_14.unk_04; c != NULL; c = c->unk_0c) {
            ProcBase_RequestDelete(c->unk_10);
        }
    } else {
        ProcBase *parent = ProcBase_GetParent(self);
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
                func_020e79a0(&gTaskExecuteList, &self->unk_28);
                q = &self->unk_28;
                q->unk_0c = q->unk_0e;
                Task_InsertByPriority(&gTaskExecuteList, q);
            }
            q = &self->unk_38;
            if (changed(q)) {
                func_020e79a0(&gTaskDrawList, &self->unk_38);
                q = &self->unk_38;
                q->unk_0c = q->unk_0e;
                Task_InsertByPriority(&gTaskDrawList, q);
            }
        } else if (!isTwo(self->unk_0e)) {
            if (self->unk_11 != 0) {
                self->unk_11 = 0;
                func_020e7968(&gTaskCreateList, &self->unk_28);
            } else if (self->unk_10 != 0) {
                self->unk_10 = 0;
                Task_InsertByPriority(&gTaskExecuteList, &self->unk_28);
                Task_InsertByPriority(&gTaskDrawList, &self->unk_38);
                self->unk_0e = 1;
            }
        }
    }
    return TRUE;
}

extern "C" s32 func_01ffd14c(ProcBase *p) {
    return ProcBase_RunPhase(p, data_01ffd0cc, data_01ffd0d4, data_01ffd0b4);
}

extern "C" s32 func_01ffd0e4(ProcBase *p) {
    return ProcBase_RunPhase(p, data_01ffd0bc, data_01ffd0c4, data_01ffd0dc);
}

