// mwcc-flags: -nothumb -O4,p
// G005a: autoload_2 0x020ec848-0x020ed4bc (37 functions). mwcc 1.2/base, C++, ARM, -O4,p.
// The tail-call stubs into the "current heap" new/delete, the object factory (Proc_Create: builds a scene object
// through the table gProfileTable, runs the registered hooks, links it into the object tree) and the library base class
// ProcBase (members at 0x020ecc6c-0x020ed378; vtable 0x0213b154 stays extern, nothing is defined here).
// The symbols.txt names of the class members are C++-mangled (_ZN8ProcBase...). They are defined here as
// extern "C" functions that carry the mangled identifier verbatim and take the object first (as the game code
// declares them), so no vtable, D0/D1 or C1 is emitted. Virtual calls go through the declared-only virtuals.
#include "types.h"
#include "sys/Heap.h"
#include "sys/TreeNode.h"
#include "sys/QNode.h"
#include "sys/ProcBase.h"
#include "sys/ProcProfile.h"


class ProcBase;




struct P2 {
    u32 a;
    u32 b;
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
extern ProcProfile **gProfileTable;

void Heap_Free(Heap *heap, void *p);
void *Heap_Alloc(Heap *heap, u32 size);
void OS_InitTick(void);
#define Heap_alloc _ZN4Heap5allocEji
void *Heap_alloc(Heap *self, u32 size, s32 align);
#define Heap_destroy _ZN4Heap7destroyEv
void Heap_destroy(Heap *self);
#define Heap_destroy2 _ZN4Heap8destroy2Ev
void Heap_destroy2(Heap *self);
Heap *FrameHeap_CreateAsCurrent(u32 size, Heap *parent);
#define Heap_getFreeSize _ZN4Heap11getFreeSizeEv
u32 Heap_getFreeSize(Heap *self);
void Heap_RestoreCurrent(void);
#define Heap_adjust _ZN4Heap6adjustEv
void *Heap_adjust(Heap *self);
#define Heap_free _ZN4Heap4freeEPv
void Heap_free(Heap *self, void *p);
void List_PushBack(QList *l, QNode *n);
void List_Remove(QList *l, QNode *n);
void TreeNode_Detach(TreeNode *root, TreeNode *n);
void TreeNode_Attach(TreeNode *root, TreeNode *n, TreeNode *parent);
TreeNode *TreeNode_Construct(TreeNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
void CmdSeq_Undo(void *p);
BOOL CmdSeq_Poll(void *p);
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
#define ProcBase_taskCreate _ZN8ProcBase10taskCreateEv
void ProcBase_taskCreate(ProcBase *p);
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
    TreeNode_Construct(&self->treeNode);
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
    TreeNode_Attach(&gProcTree, &self->treeNode, (TreeNode *)sProcCreateParent);
    ProcProfile *d = gProfileTable[self->profile];
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

extern "C" ProcBase *_ZN8ProcBaseD0Ev(ProcBase *self) {
    *(u32 **)self = data_0213b15c;
    _ZN8ProcBasedlEPv(self);
    return self;
}

extern "C" void _ZN8ProcBaseD2Ev(ProcBase *self) {
    *(u32 **)self = data_0213b15c;
}

extern "C" BOOL _ZN8ProcBase8onCreateEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase9preCreateEv(ProcBase *self) {
    return TRUE;
}

extern "C" void _ZN8ProcBase10postCreateEi(ProcBase *self, s32 a) {
    if (a != 2) return;
    List_Remove(&gTaskCreateList, &self->executeNode);
    if (isThree(gTaskPhase)) {
        self->activatePending = 1;
        return;
    }
    Task_InsertByPriority(&gTaskExecuteList, &self->executeNode);
    Task_InsertByPriority(&gTaskDrawList, &self->drawNode);
    self->state = 1;
}

extern "C" BOOL _ZN8ProcBase8onDeleteEv(ProcBase *self) {
    return TRUE;
}

extern "C" BOOL _ZN8ProcBase9preDeleteEv(ProcBase *self) {
    if ((self->seq == NULL || CmdSeq_Poll(self->seq) != 0) && self->treeNode.child == NULL) {
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" void _ZN8ProcBase10postDeleteEv(ProcBase *self, s32 a) {
    if (a != 2) return;
    TreeNode_Detach(&gProcTree, &self->treeNode);
    List_Remove(&gTaskDeleteList, &self->executeNode);
    if (self->procHeap != NULL) Heap_destroy2(self->procHeap);
    if (self->seq != NULL) CmdSeq_Undo(self->seq);
    delete self;
}

extern "C" BOOL _ZN8ProcBase15onDeleteRequestEv(ProcBase *self) {
}

extern "C" void ProcBase_SetHeap(ProcBase *self, Heap *heap) {
    self->procHeap = heap;
}

extern "C" void ProcBase_RequestDelete(ProcBase *self) {
    if (self->deletePending != 0) return;
    if (isTwo(self->state)) return;
    self->deletePending = 1;
    self->onDeleteRequest();
}

extern "C" ProcBase *ProcBase_GetParent(ProcBase *self) {
    TreeNode *parent = self->treeNode.parent;
    if (parent != NULL) return parent->owner;
    return NULL;
}

extern "C" void ProcBase_SetExecutePriority(ProcBase *self, u16 v) {
    if (isOne(self->state)) {
        if (isThree(gTaskPhase)) {
            self->executeNode.pendingPriority = v;
            return;
        }
        List_Remove(&gTaskExecuteList, &self->executeNode);
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
        List_Remove(&gTaskDrawList, &self->drawNode);
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
    if (self->procHeap != NULL) return TRUE;
    if (size != 0) {
        h = FrameHeap_CreateAsCurrent(size, parent);
        if (h != NULL) {
            BOOL ok;
            u32 f = h->regionStart & 0x10;
            if (f) Heap_alloc(h, 0x10, 0x10);
            ok = self->allocResources();
            if (f == 0) {
                if (Heap_alloc(h, 0x10, 0x10) == NULL) ok = FALSE;
            }
            Heap_RestoreCurrent();
            if (ok == 0) {
                Heap_destroy(h);
                h = NULL;
            } else {
                need = (u32)h->regionSize;
                need = (need - Heap_getFreeSize(h) + 31) & ~31;
                if (size == need) {
                    Heap_adjust(h);
                    self->procHeap = h;
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
        if (f) Heap_alloc(h, 0x10, 0x10);
        ok = self->allocResources();
        if (f == 0) {
            if (Heap_alloc(h, 0x10, 0x10) == NULL) ok = FALSE;
        }
        Heap_RestoreCurrent();
        if (ok == 0) {
            Heap_destroy(h);
            ProcBase_RequestDelete(self);
            return FALSE;
        }
        need = (u32)h->regionSize;
                need = (need - Heap_getFreeSize(h) + 31) & ~31;
    }
    if (h != NULL) {
        u32 used = (u32)h->regionSize;
        h2 = NULL;
        used -= Heap_getFreeSize(h);
        if (((used + 15) & ~15) + 0x30 < Heap_getFreeSize(parent)) {
            h2 = FrameHeap_CreateAsCurrent(need, parent);
        }
        if (h2 != NULL) {
            if (h2 < h) {
                BOOL r;
                Heap_destroy(h);
                h = NULL;
                r = self->allocResources();
                Heap_RestoreCurrent();
                if (r == 0) {
                    Heap_destroy(h2);
                    h2 = h;
                }
            } else {
                Heap_RestoreCurrent();
                Heap_destroy(h2);
                h2 = NULL;
            }
        }
        if (h2 != NULL) {
            Heap_adjust(h2);
            self->procHeap = h2;
            return TRUE;
        }
        if (h != NULL) {
            Heap_adjust(h);
            self->procHeap = h;
            return TRUE;
        }
    }
    ProcBase_RequestDelete(self);
    return FALSE;
}

extern "C" BOOL _ZN8ProcBase10createHeapEv(ProcBase *self, u32 size, Heap *parent) {
    if (self->procHeap != NULL) return TRUE;
    if (size != 0) {
        Heap *h = FrameHeap_CreateAsCurrent(size, parent);
        if (h != NULL) {
            BOOL ok;
            u32 f = h->regionStart & 0x10;
            if (f) Heap_alloc(h, 0x10, 0x10);
            ok = self->allocResources();
            if (f == 0) {
                if (Heap_alloc(h, 0x10, 0x10) == NULL) ok = FALSE;
            }
            Heap_getFreeSize(h);
            Heap_RestoreCurrent();
            if (ok == 0) {
                Heap_destroy(h);
            } else {
                self->procHeap = h;
                return TRUE;
            }
        }
    }
    ProcBase_RequestDelete(self);
    return FALSE;
}

extern "C" BOOL _ZN8ProcBase14allocResourcesEv(ProcBase *self) {
    return TRUE;
}

extern "C" void *_ZN8ProcBasenwEm(u32 size) {
    void *p = Heap_alloc(gProcHeap, size, -4);
    if (p == NULL) return NULL;
    MI_CpuFill8(p, 0, size);
    return p;
}

extern "C" void _ZN8ProcBasedlEPv(void *p) {
    Heap_free(gProcHeap, p);
}

extern "C" void ProcBase_StartCreate(ProcBase *self) {
    ProcBase_taskCreate(self);
    if (self->deletePending != 0) return;
    if (self->activatePending != 0) return;
    if (!isZero(self->state)) return;
    if (isTwo(gTaskPhase)) {
        self->createRetry = 1;
        return;
    }
    List_PushBack(&gTaskCreateList, &self->executeNode);
}

extern "C" void ProcBase_taskCreate(ProcBase *self) {
    ProcBase_RunPhase(self, data_0213b13c, data_0213b134, data_0213b124);
}

#define ProcBase_taskDelete _ZN8ProcBase10taskDeleteEv
extern "C" u32 ProcBase_taskDelete(ProcBase *self) {
    u16 id = self->profile;
    u32 r = ProcBase_RunPhase(self, data_0213b12c, data_0213b144, data_0213b14c);
    if (r == 1) Proc_CallDeleteHook(id);
    return r;
}

extern "C" BOOL ProcBase_HasCreatingChild(ProcBase *self) {
    TreeNode *root = &self->treeNode;
    TreeNode *end = func_01ffcfc0(root);
    TreeNode *n = root->child;
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
    ProcBase *r = (ProcBase *)gProfileTable[a]->create();
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

extern "C" void Main_InitTick(void) {
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
