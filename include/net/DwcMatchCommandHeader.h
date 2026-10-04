#ifndef NET_DWCMATCHCOMMANDHEADER_H
#define NET_DWCMATCHCOMMANDHEADER_H

#include "types.h"

// DWC matching: sent-command record and the "SBCM" matching command header
// (src/ov065/unk_ov065_022723b8.cpp, src/ov065/unk_ov065_02270e34.cpp; namespace F02271da0 there).

struct Unk_ov065_02272428_Rec {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u16 unk_04;
    /* 0x6 */ u16 unk_06;
};

struct DwcMatchCommandHeader {
    /* 0x00 */ u8 magic[4];
    /* 0x04 */ u32 version;
    /* 0x08 */ u8 command;
    /* 0x09 */ u8 argsSize;
    /* 0x0a */ u16 senderPort;
    /* 0x0c */ u32 senderIp;
    /* 0x10 */ u32 senderProfileId;
};

#endif
