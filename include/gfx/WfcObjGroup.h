#ifndef GFX_WFCOBJGROUP_H
#define GFX_WFCOBJGROUP_H

#include "types.h"
#include "nitro/gxoam.h"


struct WfcObjGroup {
    /* 0x0 */ WfcObjGroup *prev;
    /* 0x4 */ WfcObjGroup *next;
    /* 0x8 */ GXOamAttr *oams;
    /* 0xc */ u8 numOams;
};

struct WfcPool {
    /* 0x0 */ u16 capacity;
    /* 0x2 */ u8 head;
    /* 0x3 */ u8 top;
    /* 0x4 */ void *entries[1];
};

#endif
