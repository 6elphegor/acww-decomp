#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"

extern "C" {
void AbAllObjGfx_Upload(void);
void Snd_CreateScene(void);
void TransitionCommIcon_Resume(void);
u32 Scene_GetSavedFadeIn(void);
void Scene_Request(u32 a, u32 b, u32 c, u32 d);
u32 NetArea_GetMoveState(void);
void NetArea_SetMoveState(u32 x);
void Scene_ShutdownGraphics(void);
void Scene_SetupGraphics(void);
extern u32 gGfxFrameHooks;
}


extern CommManager *gCommManager;

// Intermediate game-state class with an inline constructor that sets flags
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

class FieldEntryScene : public SceneBase {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~FieldEntryScene() {}

    void idle();
    void requestField();
    void waitAreaMove();

    /* 0x50 */ s32 step;
};

extern "C" FieldEntryScene *FieldEntryScene_Create(void) { return new FieldEntryScene; }

void FieldEntryScene::waitAreaMove() {
    if (NetArea_GetMoveState() == 0xb) {
        NetArea_SetMoveState(0xc);
        requestField();
    }
}

void FieldEntryScene::requestField() {
    Scene_Request(6, 3, Scene_GetSavedFadeIn(), 1);
    step = 2;
}

void FieldEntryScene::idle() {}

BOOL FieldEntryScene::vfunc_00() {
    if (gCommManager->isSlotActive(gCommManager->myAid)) {
        step = 0;
    } else {
        step = 1;
    }
    Snd_CreateScene();
    Scene_SetupGraphics();
    AbAllObjGfx_Upload();
    TransitionCommIcon_Resume();
    return TRUE;
}

BOOL FieldEntryScene::vfunc_0c() {
    gGfxFrameHooks = 0;
    Scene_ShutdownGraphics();
    return TRUE;
}

BOOL FieldEntryScene::onExecute() {
    typedef void (FieldEntryScene::*Fn)();
    Fn dead = &FieldEntryScene::waitAreaMove;
    static Fn table[3] = {&FieldEntryScene::waitAreaMove, &FieldEntryScene::requestField, &FieldEntryScene::idle};
    (this->*table[step])();
    return TRUE;
}

BOOL FieldEntryScene::onDraw() { return TRUE; }
