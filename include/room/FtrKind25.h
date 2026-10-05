#ifndef ROOM_FTRKIND25_H
#define ROOM_FTRKIND25_H

#include "types.h"
#include "room/FtrActor.h"

// Furniture actor of kind 25 (vtable 0x022496f0).
// Defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit).
class FtrKind25 : public FtrActor {
public:
    FtrKind25();
    virtual ~FtrKind25();
    virtual BOOL onDelete();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u16 sampleIndex;
};

#endif // ROOM_FTRKIND25_H
