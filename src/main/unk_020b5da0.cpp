#include "types.h"
#include "sys/ProcProfile.h"
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

// Process profile of DummyScene3_Create (gProfileTable entry): factory, execute and draw priorities.
ProcProfile sDummyScene3Profile = {(void *(*)())DummyScene3_Create, 0x3, 0x2};

BOOL DummyScene3::onCreate() {
    Snd_CreateScene();
    return TRUE;
}

BOOL DummyScene3::onDelete() { return TRUE; }

BOOL DummyScene3::onExecute() { return TRUE; }

BOOL DummyScene3::onDraw() { return TRUE; }

BOOL DummyScene3::onDeleteRequest() {}

