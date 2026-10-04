#ifndef SYS_PROCBASE_H
#define SYS_PROCBASE_H

#include "types.h"
#include "sys/TreeNode.h"
#include "sys/QNode.h"

class Heap;

// Library base class of every task object (actors, scenes, menus); ARM code in autoload_2 (src/autoload_2/unk_020ec848.cpp,
// vtable 0x0213b154) and ITCM (src/itcm/unk_01ffd0e4.cpp), defined there as extern "C" functions with the mangled names.
// Each phase has three hooks: the main one, a pre-check and a post hook that gets the phase status (1/2), called by
// ProcBase_RunPhase through member pointers. The post hooks of the four phases are slots 0x08, 0x14, 0x20 and 0x2c.
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL onCreate();                // 0x00 create
    virtual BOOL preCreate();                // 0x04 pre-create
    virtual void postCreate(s32 status);    // 0x08 (body: _ZN8ProcBase10postCreateEi)
    virtual BOOL onDelete();                // 0x0c delete
    virtual BOOL preDelete();               // 0x10
    virtual BOOL postDelete(s32 status);      // 0x14 post-delete
    virtual BOOL onExecute();               // 0x18
    virtual BOOL preExecute();              // 0x1c
    virtual BOOL postExecute(u32 status);      // 0x20 post-execute
    virtual BOOL onDraw();                  // 0x24
    virtual BOOL preDraw();                 // 0x28
    virtual BOOL postDraw(s32 status);      // 0x2c
    virtual BOOL onDeleteRequest();                // 0x30 delete requested
    virtual BOOL createHeapFitted();        // 0x34
    virtual BOOL createHeap();              // 0x38
    virtual BOOL allocResources();                // 0x3c
    virtual ~ProcBase();                    // 0x40

    void taskConnect(); // itcm func_01ffd1b4
    void taskExecute(); // itcm func_01ffd14c
    void taskDraw();    // itcm func_01ffd0e4
    void taskCreate();  // func_020ecb78
    void taskDelete();  // func_020ecaf4

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

// Vtable at 0x020d8c74 (emitted with postCreate in src/main/unk_0202e840.cpp). Its constructor and destructor are
// inline, which is why derived constructors and destructors store two vtable pointers in a row. Size 0x50.
class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual void postCreate(s32 status);
    virtual ~GameProc() {}
};

#endif // SYS_PROCBASE_H
