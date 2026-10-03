#include "types.h"
#include "Unk_020d8c7c.h"

// Vtable at 0x020e2988; its constructor and destructor are inline. The virtuals are defined by another unit.
class SceneBase : public GameProc {
public:
    SceneBase() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~SceneBase() {}
};

// Vtable 0x020e4124
class Unk_020e4124 : public SceneBase {
public:
};

extern "C" Unk_020e4124 *func_020b478c(void) { return new Unk_020e4124; }
