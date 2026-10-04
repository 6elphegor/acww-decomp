// mwcc-flags: -nothumb -O4,p
// G005a: autoload_2 0x020ec848-0x020ed4bc (37 functions). mwcc 1.2/base, C++, ARM, -O4,p.
// The tail-call stubs into the "current heap" new/delete, the object factory (Proc_Create: builds a scene object
// through the table gProfileTable, runs the registered hooks, links it into the object tree) and the library base class
// ProcBase (members at 0x020ecc6c-0x020ed378; vtable 0x0213b154 stays extern, nothing is defined here).
// The symbols.txt names of the class members are C++-mangled (_ZN17Unk_020d8c7c_Base...). They are defined here as
// extern "C" functions that carry the mangled identifier verbatim and take the object first (as the game code
// declares them), so no vtable, D0/D1 or C1 is emitted. Virtual calls go through the declared-only virtuals.
#include "types.h"
#include "sys/Heap.h"


class ProcBase;

// tree node (functions 0x020e7af4 / 0x020e7a7c / 0x01ffcfc0 / 0x01ffcffc work on it)
struct TreeNode {
    /* 0x00 */ TreeNode *unk_00; // parent
    /* 0x04 */ TreeNode *unk_04;
    /* 0x08 */ TreeNode *unk_08;
    /* 0x0c */ TreeNode *unk_0c;
    /* 0x10 */ ProcBase *owner; // owner
};

struct QNode {
    /* 0x00 */ QNode *prev;
    /* 0x04 */ QNode *next;
    /* 0x08 */ ProcBase *owner;
    /* 0x0c */ u16 priority;
    /* 0x0e */ u16 pendingPriority;
};

struct QList {
    QNode *unk_00;
    QNode *unk_04;
};

struct P2 {
    u32 a;
    u32 b;
};

class ProcBase {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate();
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

    /* 0x04 */ u32 id;
    /* 0x08 */ u32 param;
    /* 0x0c */ u16 profile;
    /* 0x0e */ u8 state;
    /* 0x0f */ u8 deletePending;
    /* 0x10 */ u8 activatePending;
    /* 0x11 */ u8 createRetry;
    /* 0x12 */ u8 group;
    /* 0x13 */ u8 procFlags;
    /* 0x14 */ TreeNode treeNode;
    /* 0x28 */ QNode executeNode;
    /* 0x38 */ QNode drawNode;
    /* 0x48 */ void *seq;
    /* 0x4c */ Heap *unk_4c;
};

struct SceneDesc {
    ProcBase *(*unk_00)(void);
    u16 executePriority;
    u16 drawPriority;
};

extern "C" {
extern Heap *gCurrentHeap;
extern Heap *gProcHeap;
extern u8 gProcCreateStep;
extern u8 sProcCreateGroup;
extern u16 gProcCreateProfile;
extern u16 sProcCreateProfile;
extern u32 sProcCreateParent;
extern u32 (*sProcCreateHook)(u32);
extern void (*sProcDeleteHook)(u32);
extern u32 sProcCreateParam;
extern u32 sProcNextId;
extern P2 data_0213b124, data_0213b12c, data_0213b134, data_0213b13c, data_0213b144, data_0213b14c;
extern u32 data_0213b15c[];
extern u32 gTaskPhase;
extern TreeNode gProcTree;
extern QList gTaskExecuteList, gTaskCreateList, gTaskDrawList, gTaskDeleteList;
extern SceneDesc **gProfileTable;

void Heap_Free(Heap *heap, void *p);
void *Heap_Alloc(Heap *heap, u32 size);
void OS_InitTick(void);
void *func_020e8b94(Heap *self, u32 size, s32 align);
void func_020e8c94(Heap *self);
void func_020e8c88(Heap *self);
Heap *FrameHeap_CreateAsCurrent(u32 size, Heap *parent);
u32 func_020e8af4(Heap *self);
void Heap_RestoreCurrent(void);
void *func_020e877c(Heap *self);
void func_020e8908(Heap *self, void *p);
void func_020e7968(QList *l, QNode *n);
void func_020e79a0(QList *l, QNode *n);
void func_020e7a7c(TreeNode *root, TreeNode *n);
void func_020e7af4(TreeNode *root, TreeNode *n, TreeNode *parent);
TreeNode *func_020e7b80(TreeNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
void func_020ed8cc(void *p);
BOOL func_020ed7e4(void *p);
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
TreeNode *func_01ffcfc0(TreeNode *n);
TreeNode *func_01ffcffc(TreeNode *n);
u32 ProcBase_RunPhase(void *p, P2 a, P2 b, P2 c);

void Mem_FreeForDelete(void *p);
void *Mem_AllocForNew(u32 size);
ProcBase *Proc_Create(u32 a, TreeNode *parent, u32 c, u32 d);
void Proc_CallDeleteHook(u32 a);
u32 Proc_CallCreateHook(u32 a);
void Proc_SetCreateParams(u32 a, TreeNode *parent, u32 c, u32 d);
void func_020ecb78(ProcBase *p);
void ProcBase_StartCreate(ProcBase *p);
void ProcBase_RequestDelete(ProcBase *p);
ProcBase *ProcBase_GetParent(ProcBase *p);
void _ZN8ProcBasedlEPv(void *p);
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

extern "C" ProcBase *_ZN8ProcBaseC2Ev(ProcBase *self) {
    *(u32 **)self = data_0213b15c;
    func_020e7b80(&self->treeNode);
    self->treeNode.owner = self;
    self->executeNode.prev = NULL;
    self->executeNode.next = NULL;
    self->executeNode.owner = self;
    self->executeNode.priority = 0;
    self->executeNode.pendingPriority = 0;
    self->drawNode.prev = NULL;
    self->drawNode.next = NULL;
    self->drawNode.owner = self;
    self->drawNode.priority = 0;
    self->drawNode.pendingPriority = 0;
    self->id = sProcNextId;
    sProcNextId++;
    self->param = sProcCreateParam;
    self->profile = sProcCreateProfile;
    self->group = sProcCreateGroup;
    func_020e7af4(&gProcTree, &self->treeNode, (TreeNode *)sProcCreateParent);
    SceneDesc *d = gProfileTable[self->profile];
    u16 a = d->executePriority;
    QNode *q1 = &self->executeNode;
    q1->priority = a;
    q1->pendingPriority = a;
    u16 b = d->drawPriority;
    QNode *q2 = &self->drawNode;
    q2->priority = b;
    q2->pendingPriority = b;
    ProcBase *parent = ProcBase_GetParent(self);
    if (parent != NULL) {
        if ((parent->procFlags & 1) != 0 || (parent->procFlags & 2) != 0) self->procFlags |= 2;
        if ((parent->procFlags & 4) != 0 || (parent->procFlags & 8) != 0) self->procFlags |= 8;
    }
    return self;
}

extern "C" ProcBase *_ZN17Unk_020d8c7c_BaseD0Ev(ProcBase *self) {
    *(u32 **)self = data_0213b15c;
    _ZN8ProcBasedlEPv(self);
    return self;
}

extern "C" void _ZN8ProcBaseD2Ev(ProcBase *self) {
    *(u32 **)self = data_0213b15c;
}

extern "C" BOOL _ZN8ProcBase8vfunc_00Ev(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase8vfunc_04Ev(ProcBase *self) {
    return TRUE;
}

extern "C" void _ZN17Unk_020d8c7c_Base10postCreateEi(ProcBase *self, s32 a) {
    if (a != 2) return;
    func_020e79a0(&gTaskCreateList, &self->executeNode);
    if (isThree(gTaskPhase)) {
        self->activatePending = 1;
        return;
    }
    Task_InsertByPriority(&gTaskExecuteList, &self->executeNode);
    Task_InsertByPriority(&gTaskDrawList, &self->drawNode);
    self->state = 1;
}

extern "C" BOOL _ZN8ProcBase8vfunc_0cEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase9preDeleteEv(ProcBase *self) {
    if ((self->seq == NULL || func_020ed7e4(self->seq) != 0) && self->treeNode.unk_04 == NULL) {
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" void _ZN8ProcBase8vfunc_14Ev(ProcBase *self, s32 a) {
    if (a != 2) return;
    func_020e7a7c(&gProcTree, &self->treeNode);
    func_020e79a0(&gTaskDeleteList, &self->executeNode);
    if (self->unk_4c != NULL) func_020e8c88(self->unk_4c);
    if (self->seq != NULL) func_020ed8cc(self->seq);
    delete self;
}

extern "C" BOOL _ZN8ProcBase8vfunc_30Ev(ProcBase *self) {
}

extern "C" void ProcBase_SetHeap(ProcBase *self, Heap *heap) {
    self->unk_4c = heap;
}

extern "C" void ProcBase_RequestDelete(ProcBase *self) {
    if (self->deletePending != 0) return;
    if (isTwo(self->state)) return;
    self->deletePending = 1;
    self->vfunc_30();
}

extern "C" ProcBase *ProcBase_GetParent(ProcBase *self) {
    TreeNode *parent = self->treeNode.unk_00;
    if (parent != NULL) return parent->owner;
    return NULL;
}

extern "C" void ProcBase_SetExecutePriority(ProcBase *self, u16 v) {
    if (isOne(self->state)) {
        if (isThree(gTaskPhase)) {
            self->executeNode.pendingPriority = v;
            return;
        }
        func_020e79a0(&gTaskExecuteList, &self->executeNode);
        QNode *q = &self->executeNode;
        q->priority = v;
        q->pendingPriority = v;
        Task_InsertByPriority(&gTaskExecuteList, &self->executeNode);
    } else {
        QNode *q = &self->executeNode;
        q->priority = v;
        q->pendingPriority = v;
    }
}

extern "C" void ProcBase_SetDrawPriority(ProcBase *self, u16 v) {
    if (isOne(self->state)) {
        if (isFive(gTaskPhase)) {
            self->drawNode.pendingPriority = v;
            return;
        }
        func_020e79a0(&gTaskDrawList, &self->drawNode);
        QNode *q = &self->drawNode;
        q->priority = v;
        q->pendingPriority = v;
        Task_InsertByPriority(&gTaskDrawList, &self->drawNode);
    } else {
        QNode *q = &self->drawNode;
        q->priority = v;
        q->pendingPriority = v;
    }
}

extern "C" BOOL _ZN8ProcBase16createHeapFittedEv(ProcBase *self, u32 size, Heap *parent) {
    Heap *h = NULL;
    u32 need;
    Heap *h2;
    if (self->unk_4c != NULL) return TRUE;
    if (size != 0) {
        h = FrameHeap_CreateAsCurrent(size, parent);
        if (h != NULL) {
            BOOL ok;
            u32 f = h->regionStart & 0x10;
            if (f) func_020e8b94(h, 0x10, 0x10);
            ok = self->vfunc_3c();
            if (f == 0) {
                if (func_020e8b94(h, 0x10, 0x10) == NULL) ok = FALSE;
            }
            Heap_RestoreCurrent();
            if (ok == 0) {
                func_020e8c94(h);
                h = NULL;
            } else {
                need = (u32)h->regionSize;
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
        h = FrameHeap_CreateAsCurrent(-1, parent);
        f = h->regionStart & 0x10;
        if (f) func_020e8b94(h, 0x10, 0x10);
        ok = self->vfunc_3c();
        if (f == 0) {
            if (func_020e8b94(h, 0x10, 0x10) == NULL) ok = FALSE;
        }
        Heap_RestoreCurrent();
        if (ok == 0) {
            func_020e8c94(h);
            ProcBase_RequestDelete(self);
            return FALSE;
        }
        need = (u32)h->regionSize;
                need = (need - func_020e8af4(h) + 31) & ~31;
    }
    if (h != NULL) {
        u32 used = (u32)h->regionSize;
        h2 = NULL;
        used -= func_020e8af4(h);
        if (((used + 15) & ~15) + 0x30 < func_020e8af4(parent)) {
            h2 = FrameHeap_CreateAsCurrent(need, parent);
        }
        if (h2 != NULL) {
            if (h2 < h) {
                BOOL r;
                func_020e8c94(h);
                h = NULL;
                r = self->vfunc_3c();
                Heap_RestoreCurrent();
                if (r == 0) {
                    func_020e8c94(h2);
                    h2 = h;
                }
            } else {
                Heap_RestoreCurrent();
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
    ProcBase_RequestDelete(self);
    return FALSE;
}

extern "C" BOOL _ZN8ProcBase10createHeapEv(ProcBase *self, u32 size, Heap *parent) {
    if (self->unk_4c != NULL) return TRUE;
    if (size != 0) {
        Heap *h = FrameHeap_CreateAsCurrent(size, parent);
        if (h != NULL) {
            BOOL ok;
            u32 f = h->regionStart & 0x10;
            if (f) func_020e8b94(h, 0x10, 0x10);
            ok = self->vfunc_3c();
            if (f == 0) {
                if (func_020e8b94(h, 0x10, 0x10) == NULL) ok = FALSE;
            }
            func_020e8af4(h);
            Heap_RestoreCurrent();
            if (ok == 0) {
                func_020e8c94(h);
            } else {
                self->unk_4c = h;
                return TRUE;
            }
        }
    }
    ProcBase_RequestDelete(self);
    return FALSE;
}

extern "C" BOOL _ZN8ProcBase8vfunc_3cEv(ProcBase *self) {
    return TRUE;
}

extern "C" void *_ZN8ProcBasenwEm(u32 size) {
    void *p = func_020e8b94(gProcHeap, size, -4);
    if (p == NULL) return NULL;
    MI_CpuFill8(p, 0, size);
    return p;
}

extern "C" void _ZN8ProcBasedlEPv(void *p) {
    func_020e8908(gProcHeap, p);
}

extern "C" void ProcBase_StartCreate(ProcBase *self) {
    func_020ecb78(self);
    if (self->deletePending != 0) return;
    if (self->activatePending != 0) return;
    if (!isZero(self->state)) return;
    if (isTwo(gTaskPhase)) {
        self->createRetry = 1;
        return;
    }
    func_020e7968(&gTaskCreateList, &self->executeNode);
}

extern "C" void func_020ecb78(ProcBase *self) {
    ProcBase_RunPhase(self, data_0213b13c, data_0213b134, data_0213b124);
}

extern "C" u32 func_020ecaf4(ProcBase *self) {
    u16 id = self->profile;
    u32 r = ProcBase_RunPhase(self, data_0213b12c, data_0213b144, data_0213b14c);
    if (r == 1) Proc_CallDeleteHook(id);
    return r;
}

extern "C" BOOL ProcBase_HasCreatingChild(ProcBase *self) {
    TreeNode *root = &self->treeNode;
    TreeNode *end = func_01ffcfc0(root);
    TreeNode *n = root->unk_04;
    while (n != NULL && n != end) {
        if (isZero(n->owner->state)) return TRUE;
        n = func_01ffcffc(n);
    }
    return FALSE;
}

extern "C" void Proc_SetCreateParams(u32 a, TreeNode *parent, u32 c, u32 d) {
    sProcCreateParam = c;
    sProcCreateProfile = a;
    sProcCreateGroup = d;
    sProcCreateParent = (u32)parent;
}

extern "C" ProcBase *Proc_Create(u32 a, TreeNode *parent, u32 c, u32 d) {
    gProcCreateProfile = a;
    gProcCreateStep = 1;
    Proc_CallCreateHook(a);
    gProcCreateStep = 2;
    Proc_SetCreateParams(a, parent, c, d);
    gProcCreateStep = 3;
    ProcBase *r = gProfileTable[a]->unk_00();
    if (r == NULL) {
        gProcCreateStep = 0;
        gProcCreateProfile = 0xffff;
        return NULL;
    }
    gProcCreateStep = 4;
    ProcBase_StartCreate(r);
    gProcCreateStep = 0;
    gProcCreateProfile = 0xffff;
    return r;
}

extern "C" u32 Proc_CallCreateHook(u32 a) {
    if (sProcCreateHook == NULL) return 2;
    return sProcCreateHook(a);
}

extern "C" void Proc_CallDeleteHook(u32 a) {
    if (sProcDeleteHook == NULL) return;
    sProcDeleteHook(a);
}

extern "C" ProcBase *Proc_CreateChild(u32 a, ProcBase *parent, u32 c, u32 d) {
    if (parent == NULL) return NULL;
    return Proc_Create(a, &parent->treeNode, c, d);
}

extern "C" ProcBase *Proc_CreateRoot(u32 a, u32 b, u32 c) {
    return Proc_Create(a, 0, b, c);
}

extern "C" void func_020ec8b0(void) {
    OS_InitTick();
}

extern "C" void *Mem_AllocForNew(u32 size) {
    return Heap_Alloc(gCurrentHeap, size);
}

extern "C" void Mem_FreeForDelete(void *p) {
    Heap_Free(gCurrentHeap, p);
}

extern "C" void *_Znwm(u32 size) {
    return Mem_AllocForNew(size);
}

extern "C" void *_Znam(u32 size) {
    return Mem_AllocForNew(size);
}

extern "C" void _ZdlPv(void *p) {
    Mem_FreeForDelete(p);
}

extern "C" void _ZdaPv(void *p) {
    Mem_FreeForDelete(p);
}
