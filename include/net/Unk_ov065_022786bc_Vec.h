#ifndef NET_UNK_OV065_022786BC_VEC_H
#define NET_UNK_OV065_022786BC_VEC_H

#include "types.h"

// GameSpy dynamic array (GsArray_*, defined in src/ov065/unk_ov065_02278328.cpp).

typedef void (*Unk_ov065_02278740_Dtor)(void *);

struct Unk_ov065_022786bc_Vec {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 capacity;
    /* 0x08 */ s32 elemSize;
    /* 0x0c */ s32 growBy;
    /* 0x10 */ Unk_ov065_02278740_Dtor freeElemFn;
    /* 0x14 */ u8 *elems;
};

#endif
