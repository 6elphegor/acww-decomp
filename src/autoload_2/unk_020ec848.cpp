// mwcc-flags: -nothumb -O4,p
// G005a: autoload_2 0x020ec848-0x020ed4bc (37 functions). mwcc 1.2/base, C++, ARM, -O4,p.
// The tail-call stubs into the "current heap" new/delete, the object factory (func_020ec970: builds a scene object
// through the table data_021f59e4, runs the registered hooks, links it into the object tree) and the library base class
// Unk_020d8c7c_Base (members at 0x020ecc6c-0x020ed378; vtable 0x0213b154 stays extern, nothing is defined here).
// The symbols.txt names of the class members are C++-mangled (_ZN17Unk_020d8c7c_Base...). They are defined here as
// extern "C" functions that carry the mangled identifier verbatim and take the object first (as the game code
// declares them), so no vtable, D0/D1 or C1 is emitted. Virtual calls go through the declared-only virtuals.
#include "types.h"

class Unk_020e8b94 {
public:
    virtual ~Unk_020e8b94(); // 0x00 / 0x04
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void *vfunc_18(u32 size, s32 align) = 0; // alloc
    virtual void vfunc_1c(void *p) = 0; // free
    virtual void vfunc_20() = 0; // free all
    virtual BOOL vfunc_24() = 0;
    virtual void vfunc_28() = 0;
    virtual s32 vfunc_2c(void *p, u32 size) = 0; // resize
    virtual u32 vfunc_30(void *p) = 0; // block size
    virtual u32 vfunc_34() = 0;
    virtual u32 vfunc_38() = 0;
    virtual u32 vfunc_3c(s32 align) = 0; // largest allocatable size
    virtual u32 vfunc_40() = 0;
    virtual void *vfunc_44() = 0;
    virtual void *vfunc_48() = 0;
    virtual void *vfunc_4c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ Unk_020e8b94 *unk_0c; // parent heap
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ void *unk_14;
};

class Unk_020d8c7c_Base;

// tree node (functions 0x020e7af4 / 0x020e7a7c / 0x01ffcfc0 / 0x01ffcffc work on it)
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

struct QList {
    QNode *unk_00;
    QNode *unk_04;
};

struct P2 {
    u32 a;
    u32 b;
};

class Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
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

struct SceneDesc {
    Unk_020d8c7c_Base *(*unk_00)(void);
    u16 unk_04;
    u16 unk_06;
};

extern "C" {
extern Unk_020e8b94 *data_021f482c;
extern Unk_020e8b94 *data_021f4818;
extern u8 data_021f5974;
extern u8 data_021f5978;
extern u16 data_021f597c;
extern u16 data_021f5980;
extern u32 data_021f5984;
extern u32 (*data_021f5988)(u32);
extern void (*data_021f598c)(u32);
extern u32 data_021f5990;
extern u32 data_0213b120;
extern P2 data_0213b124, data_0213b12c, data_0213b134, data_0213b13c, data_0213b144, data_0213b14c;
extern u32 data_0213b15c[];
extern u32 data_0213b1a4;
extern TreeNode data_021f5998;
extern QList data_021f59a4, data_021f59b4, data_021f59c4, data_021f59d4;
extern SceneDesc **data_021f59e4;

void func_020e85fc(Unk_020e8b94 *heap, void *p);
void *func_020e8608(Unk_020e8b94 *heap, u32 size);
void OS_InitTick(void);
void *func_020e8b94(Unk_020e8b94 *self, u32 size, s32 align);
void func_020e8c94(Unk_020e8b94 *self);
void func_020e8c88(Unk_020e8b94 *self);
Unk_020e8b94 *func_020e8698(u32 size, Unk_020e8b94 *parent);
u32 func_020e8af4(Unk_020e8b94 *self);
void func_020e8634(void);
void *func_020e877c(Unk_020e8b94 *self);
void func_020e8908(Unk_020e8b94 *self, void *p);
void func_020e7968(QList *l, QNode *n);
void func_020e79a0(QList *l, QNode *n);
void func_020e7a7c(TreeNode *root, TreeNode *n);
void func_020e7af4(TreeNode *root, TreeNode *n, TreeNode *parent);
TreeNode *func_020e7b80(TreeNode *n);
void func_020ed5c0(QList *l, QNode *n);
void func_020ed8cc(void *p);
BOOL func_020ed7e4(void *p);
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
TreeNode *func_01ffcfc0(TreeNode *n);
TreeNode *func_01ffcffc(TreeNode *n);
u32 func_01ffd44c(void *p, P2 a, P2 b, P2 c);

void func_020ec878(void *p);
void *func_020ec894(u32 size);
Unk_020d8c7c_Base *func_020ec970(u32 a, TreeNode *parent, u32 c, u32 d);
void func_020ec904(u32 a);
u32 func_020ec938(u32 a);
void func_020eca48(u32 a, TreeNode *parent, u32 c, u32 d);
void func_020ecb78(Unk_020d8c7c_Base *p);
void func_020ecbe0(Unk_020d8c7c_Base *p);
void func_020ed188(Unk_020d8c7c_Base *p);
Unk_020d8c7c_Base *func_020ed174(Unk_020d8c7c_Base *p);
void _ZN17Unk_020d8c7c_BasedlEPv(void *p);
}

static inline BOOL isZero(u32 v) {
    return v == 0;
}

static inline BOOL isOne(u32 v) {
    return v == 1;
}

static inline BOOL isThree(u32 v) {
    return v == 3;
}

static inline BOOL isFive(u32 v) {
    return v == 5;
}

static inline BOOL isTwo(u32 v) {
    return v == 2;
}

extern "C" Unk_020d8c7c_Base *_ZN17Unk_020d8c7c_BaseC2Ev(Unk_020d8c7c_Base *self) {
    *(u32 **)self = data_0213b15c;
    func_020e7b80(&self->unk_14);
    self->unk_14.unk_10 = self;
    self->unk_28.unk_00 = NULL;
    self->unk_28.unk_04 = NULL;
    self->unk_28.unk_08 = self;
    self->unk_28.unk_0c = 0;
    self->unk_28.unk_0e = 0;
    self->unk_38.unk_00 = NULL;
    self->unk_38.unk_04 = NULL;
    self->unk_38.unk_08 = self;
    self->unk_38.unk_0c = 0;
    self->unk_38.unk_0e = 0;
    self->unk_04 = data_0213b120;
    data_0213b120++;
    self->unk_08 = data_021f5990;
    self->unk_0c = data_021f5980;
    self->unk_12 = data_021f5978;
    func_020e7af4(&data_021f5998, &self->unk_14, (TreeNode *)data_021f5984);
    SceneDesc *d = data_021f59e4[self->unk_0c];
    u16 a = d->unk_04;
    QNode *q1 = &self->unk_28;
    q1->unk_0c = a;
    q1->unk_0e = a;
    u16 b = d->unk_06;
    QNode *q2 = &self->unk_38;
    q2->unk_0c = b;
    q2->unk_0e = b;
    Unk_020d8c7c_Base *parent = func_020ed174(self);
    if (parent != NULL) {
        if ((parent->unk_13 & 1) != 0 || (parent->unk_13 & 2) != 0) self->unk_13 |= 2;
        if ((parent->unk_13 & 4) != 0 || (parent->unk_13 & 8) != 0) self->unk_13 |= 8;
    }
    return self;
}

extern "C" Unk_020d8c7c_Base *func_020ed354(Unk_020d8c7c_Base *self) {
    *(u32 **)self = data_0213b15c;
    _ZN17Unk_020d8c7c_BasedlEPv(self);
    return self;
}

extern "C" void _ZN17Unk_020d8c7c_BaseD2Ev(Unk_020d8c7c_Base *self) {
    *(u32 **)self = data_0213b15c;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_00Ev(Unk_020d8c7c_Base *self) {
    return TRUE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_04Ev(Unk_020d8c7c_Base *self) {
    return TRUE;
}

extern "C" void func_020ed2b4(Unk_020d8c7c_Base *self, s32 a) {
    if (a != 2) return;
    func_020e79a0(&data_021f59b4, &self->unk_28);
    if (isThree(data_0213b1a4)) {
        self->unk_10 = 1;
        return;
    }
    func_020ed5c0(&data_021f59a4, &self->unk_28);
    func_020ed5c0(&data_021f59c4, &self->unk_38);
    self->unk_0e = 1;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_0cEv(Unk_020d8c7c_Base *self) {
    return TRUE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_10Ev(Unk_020d8c7c_Base *self) {
    if ((self->unk_48 == NULL || func_020ed7e4(self->unk_48) != 0) && self->unk_14.unk_04 == NULL) {
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" void _ZN17Unk_020d8c7c_Base8vfunc_14Ev(Unk_020d8c7c_Base *self, s32 a) {
    if (a != 2) return;
    func_020e7a7c(&data_021f5998, &self->unk_14);
    func_020e79a0(&data_021f59d4, &self->unk_28);
    if (self->unk_4c != NULL) func_020e8c88(self->unk_4c);
    if (self->unk_48 != NULL) func_020ed8cc(self->unk_48);
    delete self;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_30Ev(Unk_020d8c7c_Base *self) {
}

extern "C" void func_020ed1e4(Unk_020d8c7c_Base *self, Unk_020e8b94 *heap) {
    self->unk_4c = heap;
}

extern "C" void func_020ed188(Unk_020d8c7c_Base *self) {
    if (self->unk_0f != 0) return;
    if (isTwo(self->unk_0e)) return;
    self->unk_0f = 1;
    self->vfunc_30();
}

extern "C" Unk_020d8c7c_Base *func_020ed174(Unk_020d8c7c_Base *self) {
    TreeNode *parent = self->unk_14.unk_00;
    if (parent != NULL) return parent->unk_10;
    return NULL;
}

extern "C" void func_020ed0d8(Unk_020d8c7c_Base *self, u16 v) {
    if (isOne(self->unk_0e)) {
        if (isThree(data_0213b1a4)) {
            self->unk_28.unk_0e = v;
            return;
        }
        func_020e79a0(&data_021f59a4, &self->unk_28);
        QNode *q = &self->unk_28;
        q->unk_0c = v;
        q->unk_0e = v;
        func_020ed5c0(&data_021f59a4, &self->unk_28);
    } else {
        QNode *q = &self->unk_28;
        q->unk_0c = v;
        q->unk_0e = v;
    }
}

extern "C" void func_020ed03c(Unk_020d8c7c_Base *self, u16 v) {
    if (isOne(self->unk_0e)) {
        if (isFive(data_0213b1a4)) {
            self->unk_38.unk_0e = v;
            return;
        }
        func_020e79a0(&data_021f59c4, &self->unk_38);
        QNode *q = &self->unk_38;
        q->unk_0c = v;
        q->unk_0e = v;
        func_020ed5c0(&data_021f59c4, &self->unk_38);
    } else {
        QNode *q = &self->unk_38;
        q->unk_0c = v;
        q->unk_0e = v;
    }
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_34Ev(Unk_020d8c7c_Base *self, u32 size, Unk_020e8b94 *parent) {
    Unk_020e8b94 *h = NULL;
    u32 need;
    Unk_020e8b94 *h2;
    if (self->unk_4c != NULL) return TRUE;
    if (size != 0) {
        h = func_020e8698(size, parent);
        if (h != NULL) {
            BOOL ok;
            u32 f = h->unk_04 & 0x10;
            if (f) func_020e8b94(h, 0x10, 0x10);
            ok = self->vfunc_3c();
            if (f == 0) {
                if (func_020e8b94(h, 0x10, 0x10) == NULL) ok = FALSE;
            }
            func_020e8634();
            if (ok == 0) {
                func_020e8c94(h);
                h = NULL;
            } else {
                need = (u32)h->unk_08;
                need = (need - func_020e8af4(h) + 31) & ~31;
                if (size == need) {
                    func_020e877c(h);
                    self->unk_4c = h;
                    return TRUE;
                }
            }
        }
    }
    if (h == NULL) {
        u32 f;
        BOOL ok;
        h = func_020e8698(-1, parent);
        f = h->unk_04 & 0x10;
        if (f) func_020e8b94(h, 0x10, 0x10);
        ok = self->vfunc_3c();
        if (f == 0) {
            if (func_020e8b94(h, 0x10, 0x10) == NULL) ok = FALSE;
        }
        func_020e8634();
        if (ok == 0) {
            func_020e8c94(h);
            func_020ed188(self);
            return FALSE;
        }
        need = (u32)h->unk_08;
                need = (need - func_020e8af4(h) + 31) & ~31;
    }
    if (h != NULL) {
        u32 used = (u32)h->unk_08;
        h2 = NULL;
        used -= func_020e8af4(h);
        if (((used + 15) & ~15) + 0x30 < func_020e8af4(parent)) {
            h2 = func_020e8698(need, parent);
        }
        if (h2 != NULL) {
            if (h2 < h) {
                BOOL r;
                func_020e8c94(h);
                h = NULL;
                r = self->vfunc_3c();
                func_020e8634();
                if (r == 0) {
                    func_020e8c94(h2);
                    h2 = h;
                }
            } else {
                func_020e8634();
                func_020e8c94(h2);
                h2 = NULL;
            }
        }
        if (h2 != NULL) {
            func_020e877c(h2);
            self->unk_4c = h2;
            return TRUE;
        }
        if (h != NULL) {
            func_020e877c(h);
            self->unk_4c = h;
            return TRUE;
        }
    }
    func_020ed188(self);
    return FALSE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_38Ev(Unk_020d8c7c_Base *self, u32 size, Unk_020e8b94 *parent) {
    if (self->unk_4c != NULL) return TRUE;
    if (size != 0) {
        Unk_020e8b94 *h = func_020e8698(size, parent);
        if (h != NULL) {
            BOOL ok;
            u32 f = h->unk_04 & 0x10;
            if (f) func_020e8b94(h, 0x10, 0x10);
            ok = self->vfunc_3c();
            if (f == 0) {
                if (func_020e8b94(h, 0x10, 0x10) == NULL) ok = FALSE;
            }
            func_020e8af4(h);
            func_020e8634();
            if (ok == 0) {
                func_020e8c94(h);
            } else {
                self->unk_4c = h;
                return TRUE;
            }
        }
    }
    func_020ed188(self);
    return FALSE;
}

extern "C" BOOL _ZN17Unk_020d8c7c_Base8vfunc_3cEv(Unk_020d8c7c_Base *self) {
    return TRUE;
}

extern "C" void *_ZN17Unk_020d8c7c_BasenwEm(u32 size) {
    void *p = func_020e8b94(data_021f4818, size, -4);
    if (p == NULL) return NULL;
    MI_CpuFill8(p, 0, size);
    return p;
}

extern "C" void _ZN17Unk_020d8c7c_BasedlEPv(void *p) {
    func_020e8908(data_021f4818, p);
}

extern "C" void func_020ecbe0(Unk_020d8c7c_Base *self) {
    func_020ecb78(self);
    if (self->unk_0f != 0) return;
    if (self->unk_10 != 0) return;
    if (!isZero(self->unk_0e)) return;
    if (isTwo(data_0213b1a4)) {
        self->unk_11 = 1;
        return;
    }
    func_020e7968(&data_021f59b4, &self->unk_28);
}

extern "C" void func_020ecb78(Unk_020d8c7c_Base *self) {
    func_01ffd44c(self, data_0213b13c, data_0213b134, data_0213b124);
}

extern "C" u32 func_020ecaf4(Unk_020d8c7c_Base *self) {
    u16 id = self->unk_0c;
    u32 r = func_01ffd44c(self, data_0213b12c, data_0213b144, data_0213b14c);
    if (r == 1) func_020ec904(id);
    return r;
}

extern "C" BOOL func_020eca8c(Unk_020d8c7c_Base *self) {
    TreeNode *root = &self->unk_14;
    TreeNode *end = func_01ffcfc0(root);
    TreeNode *n = root->unk_04;
    while (n != NULL && n != end) {
        if (isZero(n->unk_10->unk_0e)) return TRUE;
        n = func_01ffcffc(n);
    }
    return FALSE;
}

extern "C" void func_020eca48(u32 a, TreeNode *parent, u32 c, u32 d) {
    data_021f5990 = c;
    data_021f5980 = a;
    data_021f5978 = d;
    data_021f5984 = (u32)parent;
}

extern "C" Unk_020d8c7c_Base *func_020ec970(u32 a, TreeNode *parent, u32 c, u32 d) {
    data_021f597c = a;
    data_021f5974 = 1;
    func_020ec938(a);
    data_021f5974 = 2;
    func_020eca48(a, parent, c, d);
    data_021f5974 = 3;
    Unk_020d8c7c_Base *r = data_021f59e4[a]->unk_00();
    if (r == NULL) {
        data_021f5974 = 0;
        data_021f597c = 0xffff;
        return NULL;
    }
    data_021f5974 = 4;
    func_020ecbe0(r);
    data_021f5974 = 0;
    data_021f597c = 0xffff;
    return r;
}

extern "C" u32 func_020ec938(u32 a) {
    if (data_021f5988 == NULL) return 2;
    return data_021f5988(a);
}

extern "C" void func_020ec904(u32 a) {
    if (data_021f598c == NULL) return;
    data_021f598c(a);
}

extern "C" Unk_020d8c7c_Base *func_020ec8d4(u32 a, Unk_020d8c7c_Base *parent, u32 c, u32 d) {
    if (parent == NULL) return NULL;
    return func_020ec970(a, &parent->unk_14, c, d);
}

extern "C" Unk_020d8c7c_Base *func_020ec8bc(u32 a, u32 b, u32 c) {
    return func_020ec970(a, 0, b, c);
}

extern "C" void func_020ec8b0(void) {
    OS_InitTick();
}

extern "C" void *func_020ec894(u32 size) {
    return func_020e8608(data_021f482c, size);
}

extern "C" void func_020ec878(void *p) {
    func_020e85fc(data_021f482c, p);
}

extern "C" void *func_020ec86c(u32 size) {
    return func_020ec894(size);
}

extern "C" void *func_020ec860(u32 size) {
    return func_020ec894(size);
}

extern "C" void _ZdlPv(void *p) {
    func_020ec878(p);
}

extern "C" void func_020ec848(void *p) {
    func_020ec878(p);
}
