#ifndef ROOM_FTRCARPETSAMPLE_H
#define ROOM_FTRCARPETSAMPLE_H

#include "types.h"
#include "room/FtrActor.h"
#include "gfx/MatTexVramTask.h"

// Furniture actor: carpet / wallpaper sample (vtable 0x0224981c).
// Defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit).
class FtrCarpetSample : public FtrActor {
public:
    FtrCarpetSample();
    virtual ~FtrCarpetSample();
    virtual BOOL onDelete();
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL isVisible();

    /* 0x840 */ u16 sampleIndex;
    /* 0x842 */ u8 initFrames;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ MatTexVramTask texTask;
};

#endif // ROOM_FTRCARPETSAMPLE_H
