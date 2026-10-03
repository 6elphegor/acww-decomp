#ifndef UNK_020D8C7C_H
#define UNK_020D8C7C_H

#include "types.h"

// Library base class; its code is ARM in autoload_2 and ITCM. It allocates its objects on a separate heap.
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
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
};

// Vtable at 0x020d8c74. Its constructor and destructor are inline, which is why derived constructors and destructors
// store two vtable pointers in a row.
class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual void postCreate();
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

#endif
