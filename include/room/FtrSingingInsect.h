#ifndef ROOM_FTRSINGINGINSECT_H
#define ROOM_FTRSINGINGINSECT_H

#include "types.h"
#include "room/FtrActor.h"

// Furniture actor: singing insect in a cage (vtable 0x0224b43c, size 0x84c).
// Defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit).
class FtrSingingInsect : public FtrActor {
public:
    FtrSingingInsect();
    virtual ~FtrSingingInsect();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u16 loopsPerPhrase;
    /* 0x842 */ u16 restTimer;
    /* 0x844 */ u8 loopCount;
    /* 0x845 */ u8 singPhase;
    /* 0x846 */ u8 prevAnimDone;
    /* 0x847 */ u8 pad_847;
    /* 0x848 */ u16 singFrames;
};

#endif // ROOM_FTRSINGINGINSECT_H
