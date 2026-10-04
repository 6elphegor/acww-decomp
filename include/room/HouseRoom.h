#ifndef ROOM_HOUSEROOM_H
#define ROOM_HOUSEROOM_H

// One room of the player's house in the save data: two 16x16 item layers, the furniture state, wallpaper/carpet/song
// and two flag bits. Both classes are defined in src/main/unk_02060034.cpp.
#include "types.h"
#include "room/RoomFtrState.h"

struct MapBlockEntry;

// 16x16 grid of item ids (0x200 bytes).
class RoomItemGrid {
public:
    u16 items[0x100];
    RoomItemGrid();
    ~RoomItemGrid();
    RoomItemGrid *getGrid();
    void clear();
};

class HouseRoom {
public:
    /* 0x000 */ RoomItemGrid layers[2];
    /* 0x400 */ RoomFtrState ftrState;
    /* 0x448 */ u16 wallpaper;
    /* 0x44a */ u16 carpet;
    /* 0x44c */ u16 song;
    /* 0x44e */ u8 unk_44e_0 : 1;
    /* 0x44e */ u8 unk_44e_1 : 1;
    HouseRoom();
    ~HouseRoom();
    void func_02060878_dummy();
    MapBlockEntry *buildBlockEntry(void *heap);
    void reset(s32 i);
    void setSong(u16 *src);
    u16 *getSong();
    void setCarpet(u16 *src, u32 flag);
    void setWallpaper(u16 *src, u32 flag);
    u16 *getCarpet(s32 *out);
    u16 *getWallpaper(s32 *out);
    RoomFtrState *func_0206086c();
};

#endif // ROOM_HOUSEROOM_H
