#ifndef ROOM_FTRHEADWEAR_H
#define ROOM_FTRHEADWEAR_H

#include "types.h"
#include "room/FtrActor.h"

// Furniture actor: headwear stand (vtable 0x02249498).
// Defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit).
class FtrHeadwear : public FtrActor {
public:
    FtrHeadwear();
    virtual ~FtrHeadwear();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL isVisible();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    void syncAct1();
    void syncAct0();

    /* 0x840 */ u8 ftrAct;
    /* 0x841 */ u8 alwaysVisible;
};

#endif // ROOM_FTRHEADWEAR_H
