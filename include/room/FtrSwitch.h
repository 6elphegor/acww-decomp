#ifndef ROOM_FTRSWITCH_H
#define ROOM_FTRSWITCH_H

#include "types.h"

class FtrActor;

// On/off state of a switchable furniture object (current and pending value; member at 0x73c), saved to the room map.
// Members defined in src/ov004/unk_ov004_02204f24.cpp (0x02205c44-0x02205d5a).
struct FtrSwitch {
    ~FtrSwitch();
    void set(u32 v, s32 flag);
    void toggle(s32 flag);
    BOOL isChanging();
    u8 isOn();
    void saveToMap(FtrActor *o);
    void commit(FtrActor *o);
    void loadFromMap(FtrActor *o);
    void clear();

    /* 0x00 */ u8 cur;
    /* 0x01 */ u8 next;
};

#endif // ROOM_FTRSWITCH_H
