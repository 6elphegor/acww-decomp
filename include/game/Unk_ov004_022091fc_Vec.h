#ifndef GAME_UNK_OV004_022091FC_VEC_H
#define GAME_UNK_OV004_022091FC_VEC_H

#include "types.h"

// 12-byte position with empty inline ctor/dtor (ov004 RoomBoardSign / MuseumExhibitInfo TUs).

struct Unk_ov004_022091fc_Vec {
    /* 0x0 */ s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

#endif // GAME_UNK_OV004_022091FC_VEC_H
