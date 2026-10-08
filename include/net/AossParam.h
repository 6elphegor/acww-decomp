#ifndef NET_AOSSPARAM_H
#define NET_AOSSPARAM_H

#include "types.h"

typedef union AossClientInfo AossClientInfo;
typedef struct AossParam AossParam;
typedef struct AossApInfo AossApInfo;
typedef struct AossApConfig AossApConfig;
typedef struct AossConnectResult AossConnectResult;

// Buffalo AOSS client (ov001 units 02200680 / 02202c44, driven by WfcAoss_* in unk_ov001_0220c37c.cpp): the run
// parameters/result block given to Aoss_Run, the client-info TLV inside it, and the scanned AP record.

// Client information sent as a TLV in the AOSS start request (Aoss_InitSession / Aoss_BuildClientInfoTlv). The u16
// view is what the original code copies it by (WfcAoss_Begin; the struct of named fields alone copies differently).
union AossClientInfo {
    /* 0x000 */ u16 words[0x82];
    struct {
        /* 0x000 */ u8 tlvType;
        /* 0x001 */ u8 pad_01;
        /* 0x002 */ u16 nameLength;
        /* 0x004 */ u8 name[0x100];
    };
};

// Aoss_Run parameter block (0x26c bytes, sWfcAossConfig); errorCode and result are outputs.
struct AossParam {
    /* 0x000 */ u16 keyTypeMask;
    /* 0x002 */ AossClientInfo clientInfo;
    /* 0x106 */ s16 apRetryCount;
    /* 0x108 */ s16 apRetryWait;
    /* 0x10a */ s16 packetRetryCount;
    /* 0x10c */ s16 packetRetryWait;
    /* 0x10e */ s16 recvTimeout;
    /* 0x110 */ u8 macAddress[6];
    /* 0x116 */ u8 errorCode;
    /* 0x117 */ u8 result[0x155];
};

// Scanned AP (0x54 bytes) converted from a WM BSS descriptor by Aoss_ConvertBssDesc.
struct AossApInfo {
    /* 0x00 */ u32 ssidLength;
    /* 0x04 */ u8 ssid[0x20];
    /* 0x24 */ u32 channel;
    /* 0x28 */ u8 pad_28[8];
    /* 0x30 */ u8 bssid[6];
    /* 0x36 */ u8 pad_36[2];
    /* 0x38 */ u32 numRates;
    /* 0x3c */ u8 rates[0x10];
    /* 0x4c */ u32 beaconPeriod;
    /* 0x50 */ u32 bssType;
};

// The AP to connect to (Aoss_ConnectAp; built by Aoss_BuildAossApConfig: the AOSS setup ESSID and WEP key).
struct AossApConfig {
    /* 0x00 */ s32 ssidLength;
    /* 0x04 */ u8 ssid[0x20];
    /* 0x24 */ s32 mode;           // 0: 0x80000, 1: 0xc0000 connect option
    /* 0x28 */ s32 wepKeyLength;
    /* 0x2c */ u8 wepKey[0x10];
};

// Aoss_ConnectAp's result (sAossConnectResult): whether it connected, and to which AP.
struct AossConnectResult {
    /* 0x00 */ s32 connected;
    /* 0x04 */ AossApInfo ap;
};

#endif
