#ifndef SYS_SCENEBASE_H
#define SYS_SCENEBASE_H

#include "types.h"
#include "sys/ProcBase.h"

// Base game process of the scenes (vtable 0x020e2980; constructor and destructor are inline). Virtuals defined in
// src/main/unk_020a427c.cpp.

class SceneBase : public GameProc {
public:
    SceneBase() {
        procFlags |= 1;
        procFlags |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 status);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 status);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
    virtual ~SceneBase() {}
};

#endif
