#include "types.h"
#include "Unk_020d8c7c.h"

// Vtable at 0x020e2988; its constructor and destructor are inline. The virtuals are defined by another unit.
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

// Vtable 0x020e4124
class DummyScene4 : public SceneBase {
public:
};

extern "C" DummyScene4 *DummyScene4_Create(void) { return new DummyScene4; }
