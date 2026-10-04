#ifndef GFX_WFCOBJGROUP_H
#define GFX_WFCOBJGROUP_H

#include "types.h"

// ov001 (Wi-Fi setup) OAM groups: a linked group of OAM entries and the fixed-size pool its nodes come from.
// Used by src/ov001/unk_ov001_0222449c.cpp, unk_ov001_02224b14.cpp, unk_ov001_02224ca0.cpp.
struct Unk_ov001_02224670_Entry {
    /* 0x0 */ u32 attr01;
    /* 0x4 */ u16 attr2;
    /* 0x6 */ u16 unk_06;
};

struct WfcObjGroup {
    /* 0x0 */ WfcObjGroup *prev;
    /* 0x4 */ WfcObjGroup *next;
    /* 0x8 */ Unk_ov001_02224670_Entry *oams;
    /* 0xc */ u8 numOams;
};

struct WfcPool {
    /* 0x0 */ u16 capacity;
    /* 0x2 */ u8 head;
    /* 0x3 */ u8 top;
    /* 0x4 */ void *entries[1];
};

#endif
