#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" void Snd_CreateScene(void);

// Intermediate class (vtable 0x020e2988); its constructor and destructor are inline.
// Its virtuals vfunc_04/08/10/14/1c/20/28/2c are defined by another unit (declared only).
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

class Unk_020e4428 : public SceneBase {
public:
    Unk_020e4428() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual ~Unk_020e4428() {}
};

extern "C" Unk_020e4428 *func_020b5e18(void) {
    return new Unk_020e4428();
}

BOOL Unk_020e4428::vfunc_00() {
    Snd_CreateScene();
    return TRUE;
}

BOOL Unk_020e4428::vfunc_0c() { return TRUE; }

BOOL Unk_020e4428::onExecute() { return TRUE; }

BOOL Unk_020e4428::onDraw() { return TRUE; }

BOOL Unk_020e4428::vfunc_30() {}

