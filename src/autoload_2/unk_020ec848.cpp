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
#include "sys/CmdSeq.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/autoload_2/unk_020ed7e4.h"
#include "proto/autoload_2/unk_020ed8cc.h"
#include "proto/autoload_2/unk_02114d84.h"
#include "proto/itcm/unk_01ffcfc0.h"


class ProcBase;




// the dispatcher's pointer-to-member type: two pointers on the host (the arguments are passed as such on x86-64)
class ProcBase;
typedef BOOL (ProcBase::*P2)();



extern "C" {
extern u8 gProcCreateStep;
extern u8 sProcCreateGroup;
extern u16 gProcCreateProfile;
extern u16 sProcCreateProfile;
extern TreeNode *sProcCreateParent;
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

// (the task lists and the object tree: their definitions use other names for the same types, include/proto/.excluded)
void List_PushBack(QList *l, QNode *n);
void List_Remove(QList *l, QNode *n);
void TreeNode_Detach(TreeNode *root, TreeNode *n);
void TreeNode_Attach(TreeNode *root, TreeNode *n, TreeNode *parent);
TreeNode *TreeNode_Construct(TreeNode *n);
void Task_InsertByPriority(QList *l, QNode *n);
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8 (assembly)
u32 ProcBase_RunPhase(void *p, P2 a, P2 b, P2 c); // (itcm, unk_01ffd0e4.cpp)
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
    TreeNode_Attach(&gProcTree, &self->treeNode, sProcCreateParent);
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
    ProcBase::operator delete(self);
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
    if ((self->seq == NULL || CmdSeq_Poll((CmdSeq *)self->seq) != 0) && self->treeNode.child == NULL) {
    } else {
        return FALSE;
    }
    return TRUE;
}

extern "C" void _ZN8ProcBase10postDeleteEv(ProcBase *self, s32 a) {
    if (a != 2) return;
    TreeNode_Detach(&gProcTree, &self->treeNode);
    List_Remove(&gTaskDeleteList, &self->executeNode);
    if (self->procHeap != NULL) (self->procHeap)->destroy2();
    if (self->seq != NULL) CmdSeq_Undo((CmdSeq *)self->seq);
    delete self;
}

extern "C" BOOL _ZN8ProcBase15onDeleteRequestEv(ProcBase *self) {
    return 0; // the original returns whatever r0 holds; callers ignore it
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
            u32 f = (uptr)h->regionStart & 0x10;
            if (f) (h)->alloc(0x10, 0x10);
            ok = self->allocResources();
            if (f == 0) {
                if ((h)->alloc(0x10, 0x10) == NULL) ok = FALSE;
            }
            Heap_RestoreCurrent();
            if (ok == 0) {
                (h)->destroy();
                h = NULL;
            } else {
                need = (u32)h->regionSize;
                need = (need - (h)->getFreeSize() + 31) & ~31;
                if (size == need) {
                    (h)->adjust();
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
        f = (uptr)h->regionStart & 0x10;
        if (f) (h)->alloc(0x10, 0x10);
        ok = self->allocResources();
        if (f == 0) {
            if ((h)->alloc(0x10, 0x10) == NULL) ok = FALSE;
        }
        Heap_RestoreCurrent();
        if (ok == 0) {
            (h)->destroy();
            ProcBase_RequestDelete(self);
            return FALSE;
        }
        need = (u32)h->regionSize;
                need = (need - (h)->getFreeSize() + 31) & ~31;
    }
    if (h != NULL) {
        u32 used = (u32)h->regionSize;
        h2 = NULL;
        used -= (h)->getFreeSize();
        if (((used + 15) & ~15) + 0x30 < (parent)->getFreeSize()) {
            h2 = FrameHeap_CreateAsCurrent(need, parent);
        }
        if (h2 != NULL) {
            if (h2 < h) {
                BOOL r;
                (h)->destroy();
                h = NULL;
                r = self->allocResources();
                Heap_RestoreCurrent();
                if (r == 0) {
                    (h2)->destroy();
                    h2 = h;
                }
            } else {
                Heap_RestoreCurrent();
                (h2)->destroy();
                h2 = NULL;
            }
        }
        if (h2 != NULL) {
            (h2)->adjust();
            self->procHeap = h2;
            return TRUE;
        }
        if (h != NULL) {
            (h)->adjust();
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
            u32 f = (uptr)h->regionStart & 0x10;
            if (f) (h)->alloc(0x10, 0x10);
            ok = self->allocResources();
            if (f == 0) {
                if ((h)->alloc(0x10, 0x10) == NULL) ok = FALSE;
            }
            (h)->getFreeSize();
            Heap_RestoreCurrent();
            if (ok == 0) {
                (h)->destroy();
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
    void *p = (gProcHeap)->alloc(size, -4);
    if (p == NULL) return NULL;
    MI_CpuFill8(p, 0, size);
    return p;
}

extern "C" void _ZN8ProcBasedlEPv(void *p) {
    (gProcHeap)->free(p);
}

extern "C" void ProcBase_StartCreate(ProcBase *self) {
    self->taskCreate();
    if (self->deletePending != 0) return;
    if (self->activatePending != 0) return;
    if (!isZero(self->state)) return;
    if (isTwo(gTaskPhase)) {
        self->createRetry = 1;
        return;
    }
    List_PushBack(&gTaskCreateList, &self->executeNode);
}

void ProcBase::taskCreate() {
    ProcBase_RunPhase(this, data_0213b13c, data_0213b134, data_0213b124);
}

// (the task list's member pointer is void: the phase result is not used)
void ProcBase::taskDelete() {
    u16 id = profile;
    u32 r = ProcBase_RunPhase(this, data_0213b12c, data_0213b144, data_0213b14c);
    if (r == 1) Proc_CallDeleteHook(id);
}

extern "C" BOOL ProcBase_HasCreatingChild(ProcBase *self) {
    TreeNode *root = &self->treeNode;
    TreeNode *end = TreeNode_GetNextSkipChildren(root);
    TreeNode *n = root->child;
    while (n != NULL && n != end) {
        if (isZero(n->owner->state)) return TRUE;
        n = TreeNode_GetNextPreOrder(n);
    }
    return FALSE;
}

extern "C" void Proc_SetCreateParams(u32 a, TreeNode *parent, u32 c, u32 d) {
    sProcCreateParam = c;
    sProcCreateProfile = a;
    sProcCreateGroup = d;
    sProcCreateParent = parent;
}

extern "C" ProcBase *Proc_Create(u32 a, TreeNode *parent, u32 c, u32 d) {
    gProcCreateProfile = a;
    gProcCreateStep = 1;
    Proc_CallCreateHook(a);
    gProcCreateStep = 2;
    Proc_SetCreateParams(a, parent, c, d);
    gProcCreateStep = 3;
    ProcBase *r = (ProcBase *)gProfileTable[a]->create();
    {
        extern void host_log_proc(u32 profile, void *create, void *obj);
        host_log_proc(a, (void *)gProfileTable[a]->create, r);
    }
    extern char __executable_start[], _end[];  // the program image (linker symbols)
    if (r != NULL && (*(uptr *)r < (uptr)__executable_start || *(uptr *)r >= (uptr)_end)) {  // a vtable outside it
        extern void host_bad_object(u32 profile, void *create, void *obj);
        host_bad_object(a, (void *)gProfileTable[a]->create, r);
    }
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
