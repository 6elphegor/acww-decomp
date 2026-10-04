#ifndef NITRO_WM_H
#define NITRO_WM_H

#include "types.h"

// NitroSDK WM callback / request message (the ARM7 reply buffer every WM callback receives; 0x100-byte FIFO
// slots, data_021ff4b8 is the ARM9-side instance). C header for the WM units in autoload_2 (0x0211e3fc-0x02121e5c).
// The per-command callback structs share the first fields; the unions below are the views different commands use.

typedef struct WMMsg WMMsg;

struct WMMsg {
    /* 0x00 */ u16 id; // apiid
    /* 0x02 */ u16 errcode;
    /* 0x04 */ u16 f04;
    /* 0x06 */ u16 f06;
    /* 0x08 */ union {
        u32 f08;
        struct {
            u16 f08w;
            u16 f0a; // port
        };
    };
    /* 0x0c */ u16 *f0c;
    /* 0x10 */ u16 f10;
    /* 0x12 */ u16 f12;
    /* 0x14 */ u8 _14[6];
    /* 0x1a */ u16 f1a;
    /* 0x1c */ void *arg;
    /* 0x20 */ union {
        u32 f20;
        u16 f20h;
    };
};

// Game info in a beacon (WMBssDesc.gameInfo; WM_SetGameInfo sets the user part). userGameInfo is game-defined.
typedef struct WMGameInfo {
    /* 0x00 */ u16 magicNumber;
    /* 0x02 */ u8 ver;
    /* 0x03 */ u8 platform;
    /* 0x04 */ u32 ggid;
    /* 0x08 */ u16 tgid;
    /* 0x0a */ u8 userGameInfoLength;
    /* 0x0b */ u8 attribute;
    /* 0x0c */ u16 parentMaxSize;
    /* 0x0e */ u16 childMaxSize;
    /* 0x10 */ u8 userGameInfo[0x70];
} WMGameInfo;

// WM bss description (0xc0 = WM_SIZE_BSSDESC): scan results, WM_GetOtherElements, the WifiAp found-AP list.
typedef struct WMBssDesc {
    /* 0x00 */ u16 length;
    /* 0x02 */ u16 rssi;
    /* 0x04 */ u8 bssid[6];
    /* 0x0a */ u16 ssidLength;
    /* 0x0c */ u8 ssid[32];
    /* 0x2c */ u16 capaInfo;
    /* 0x2e */ struct {
        u16 basic;
        u16 support;
    } rateSet;
    /* 0x32 */ u16 beaconPeriod;
    /* 0x34 */ u16 dtimPeriod;
    /* 0x36 */ u16 channel;
    /* 0x38 */ u16 cfpPeriod;
    /* 0x3a */ u16 cfpMaxDuration;
    /* 0x3c */ u16 gameInfoLength;
    /* 0x3e */ u16 otherElementCount;
    /* 0x40 */ WMGameInfo gameInfo;
} WMBssDesc;

// WM_SetParentParameter argument (0x40).
typedef struct WMParentParam {
    /* 0x00 */ void *userGameInfo;
    /* 0x04 */ u16 userGameInfoLength;
    /* 0x06 */ u16 padding;
    /* 0x08 */ u32 ggid;
    /* 0x0c */ u16 tgid;
    /* 0x0e */ u16 entryFlag;
    /* 0x10 */ u16 maxEntry;
    /* 0x12 */ u16 multiBootFlag;
    /* 0x14 */ u16 KS_Flag;
    /* 0x16 */ u16 CS_Flag;
    /* 0x18 */ u16 beaconPeriod;
    /* 0x1a */ u16 rsv1[4];
    /* 0x22 */ u16 rsv2[8];
    /* 0x32 */ u16 channel;
    /* 0x34 */ u16 parentMaxSize;
    /* 0x36 */ u16 childMaxSize;
    /* 0x38 */ u16 rsv[4];
} WMParentParam;

// WM_StartScan argument (0x20).
typedef struct WMScanParam {
    /* 0x00 */ WMBssDesc *scanBuf;
    /* 0x04 */ u16 channel;
    /* 0x06 */ u16 maxChannelTime;
    /* 0x08 */ u8 bssid[6];
    /* 0x0e */ u16 rsv[9];
} WMScanParam;

// WM_StartScan callback (the fields after linkLevel are not declared: nothing here reads them yet).
typedef struct WMStartScanCallback {
    /* 0x00 */ u16 apiid;
    /* 0x02 */ u16 errcode;
    /* 0x04 */ u16 wlCmdID;
    /* 0x06 */ u16 wlResult;
    /* 0x08 */ u16 state;
    /* 0x0a */ u8 macAddress[6];
    /* 0x10 */ u16 channel;
    /* 0x12 */ u16 linkLevel;
} WMStartScanCallback;

// WM_MeasureChannel callback.
typedef struct WMMeasureChannelCallback {
    /* 0x00 */ u16 apiid;
    /* 0x02 */ u16 errcode;
    /* 0x04 */ u16 wlCmdID;
    /* 0x06 */ u16 wlResult;
    /* 0x08 */ u16 channel;
    /* 0x0a */ u16 ccaBusyRatio;
} WMMeasureChannelCallback;

// Port receive callback (WM_SetPortCallback); fields after aid are not declared.
typedef struct WMPortRecvCallback {
    /* 0x00 */ u16 apiid;
    /* 0x02 */ u16 errcode;
    /* 0x04 */ u16 state;
    /* 0x06 */ u16 port;
    /* 0x08 */ void *recvBuf;
    /* 0x0c */ u16 *data;
    /* 0x10 */ u16 length;
    /* 0x12 */ u16 aid;
} WMPortRecvCallback;

// WM_SetMPDataToPort(Ex) callback; arg is the argument given to the send call.
typedef struct WMPortSendCallback {
    /* 0x00 */ u16 apiid;
    /* 0x02 */ u16 errcode;
    /* 0x04 */ u16 wlCmdID;
    /* 0x06 */ u16 wlResult;
    /* 0x08 */ u16 state;
    /* 0x0a */ u16 port;
    /* 0x0c */ u16 destBitmap;
    /* 0x0e */ u16 restBitmap;
    /* 0x10 */ u16 sentBitmap;
    /* 0x12 */ u16 rsv;
    /* 0x14 */ u16 *data;
    /* 0x18 */ u16 size;
    /* 0x1a */ u16 seqNo;
    /* 0x1c */ void *callback;
    /* 0x20 */ void *arg;
} WMPortSendCallback;

#endif
