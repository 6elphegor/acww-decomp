#ifndef UI_WFCLINKICON_H
#define UI_WFCLINKICON_H

#include "types.h"
#include "nitro/gxoam.h"

// ov001 Wi-Fi utility link-strength icon (sWfcLinkIcon; WfcLinkIcon_* in unk_ov001_02208a24.cpp): its OAM entry,
// the update task and the icon set (data_ov001_02229bd0 row).
struct WfcLinkIcon {
    /* 0x0 */ GXOamAttr *oam;
    /* 0x4 */ u32 task;
    /* 0x8 */ s8 iconSet;
};

#endif
