#ifndef ROOM_FTRCOMPUTER_H
#define ROOM_FTRCOMPUTER_H

#include "types.h"
#include "room/FtrActor.h"
#include "room/FtrGlowMatSet.h"

// Furniture actor: computer (vtable 0x0224936c).
// Defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit).
class FtrComputer : public FtrActor {
public:
    FtrComputer();
    virtual ~FtrComputer();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ FtrGlowMatSet glowMats;
    /* 0x898 */ u8 ftrAct;
};

#endif // ROOM_FTRCOMPUTER_H
