#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/SceneBase.h"

extern "C" void Snd_CreateScene(void);


class DummyScene3 : public SceneBase {
public:
    DummyScene3() {}
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL onDeleteRequest();
    virtual ~DummyScene3() {}
};

extern "C" DummyScene3 *DummyScene3_Create(void) {
    return new DummyScene3();
}

BOOL DummyScene3::onCreate() {
    Snd_CreateScene();
    return TRUE;
}

BOOL DummyScene3::onDelete() { return TRUE; }

BOOL DummyScene3::onExecute() { return TRUE; }

BOOL DummyScene3::onDraw() { return TRUE; }

BOOL DummyScene3::onDeleteRequest() {}

