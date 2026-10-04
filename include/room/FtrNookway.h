#ifndef ROOM_FTRNOOKWAY_H
#define ROOM_FTRNOOKWAY_H

#include "types.h"
#include "room/FtrActor.h"

// Furniture actor: the Nookway (vtable 0x0224b0b8, size 0x844).
// Defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit).
class FtrNookway : public FtrActor {
public:
    FtrNookway();
    virtual BOOL vfunc_0c();
    virtual ~FtrNookway();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u32 startFrame;
};

#endif // ROOM_FTRNOOKWAY_H
