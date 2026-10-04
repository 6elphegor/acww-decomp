// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_0226453c_Node {
    u32 prev;
    struct Unk_ov066_0226453c_Node *next;
    u16 frameSize;
    u16 destMask;
    u16 ackMask;
};

struct Unk_ov066_02264574_Node {
    struct Unk_ov066_02264574_Node *prev;
    struct Unk_ov066_02264574_Node *next;
    u8 pad_08[0x20 - 0x08];
    u8 frameId;
};

struct Unk_ov066_0226460c_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    s32 f8 : 1;
    s32 f9 : 1;
    s32 rest : 22;
};

struct Unk_ov066_0226460c_A {
    u32 requestedMode;
    u8 pad_04[0x08 - 0x04];
    u8 channel;
    u8 numScanChannels;
    u8 maxChildren;
    u8 maxMembers;
    u8 maxBeacons;
    u8 pad_0d[0x14 - 0x0d];
    u8 parentWaitBeacons;
    u8 pad_15[2];
    u8 mpFreq;
    u16 recvChildSize;
    u16 parentMaxSize;
    u16 recvParentSize;
    u16 childMaxSize;
    u16 scanLoopTime;
    u16 scanMaxChannelTime;
    u16 unk_24;
    u8 pad_26[0x28 - 0x26];
    u32 ggid;
    u8 pad_2c[0x3c - 0x2c];
    Unk_ov066_0226460c_Bits flags;
};

struct Unk_ov066_0226460c_In {
    u32 ggid;
    u8 maxMembers;
    u8 maxBeacons;
    u8 recordSize;
    u8 mpFreq;
};

struct Unk_ov066_02263c3c_Rec {
    u8 a : 2;
    u8 c : 1;
    u8 b : 1;
    u8 d : 4;
    u8 length;
    u16 destMask;
    u16 totalSizeLo;
    u16 totalSizeHi;
    u8 data[1];
};

struct Unk_ov066_02263c3c_Lo {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_ov066_02263c3c_Fl {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
    u8 f4 : 1;
};

struct Unk_ov066_02263c3c_Node {
    u32 prev;
    Unk_ov066_02263c3c_Node *next;
    u8 pad[0x18];
    u8 frameId;
};

struct Unk_ov066_02263c3c_Q {
    u32 recvPos;
    Unk_ov066_02263c3c_Node *ackPos;
};

struct Unk_ov066_02263c3c_Ent {
    u8 *buffer;
    u32 bufferSize;
    u32 totalSize;
    u32 receivedSize;
};

struct Unk_ov066_02263c3c_Link {
    u32 prev;
    Unk_ov066_02263c3c_Link *next;
};

struct Unk_ov066_02263c3c_G {
    u8 recordSize;
    Unk_ov066_02263c3c_Lo frameIds;
    s8 numPendingSends;
    s8 numRecordsInFlight;
    Unk_ov066_02263c3c_Fl flags;
    u8 pad[3];
    u32 sendRing;
    u32 recvRing;
    Unk_ov066_02263c3c_Link *curSendFrame;
    u32 pad14;
    Unk_ov066_02263c3c_Q *recvCursors;
    u16 recvActiveMask;
    u16 sendDestMask;
    u8 *sendData;
    u32 sendSize;
    s32 sendOffset;
    void (*sendDoneCallback)(u32);
    Unk_ov066_02263c3c_Ent *recvEntries;
};

struct Unk_ov066_02263c3c_S {
    u8 pad[4];
    u32 state;
    u8 pad2[3];
    u8 maxMembers;
};

struct Unk_ov066_02263c3c_V {
    u8 pad[0x9c];
    void *resetHook;
    void *parentSendHook;
    void *childSendHook;
    void *shutdownHook;
    void *sendControlHook;
    void *sendHook;
    void *isReadyToSendHook;
    void (*recvCallback)(u32, u8 *, u32);
    void *memberLeftHook;
};

struct Unk_ov066_02263c3c_Wrap {
    u8 pad[0x14];
    Unk_ov066_02263c3c_Rec *sentData;
};

struct Unk_ov066_02263f54_Obj {
    u8 pad[0x24];
    Unk_ov066_02263c3c_Rec parentRecord;
};

struct Unk_ov066_02263320_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
};

struct Unk_ov066_02263320_Pay {
    u8 frameId;
    u8 unk_01;
    u16 aidMask;
    u8 records[1];
};

struct Unk_ov066_02263320_Rec {
    Unk_ov066_02263320_Rec *prev;
    Unk_ov066_02263320_Rec *next;
    u16 frameSize;
    u16 destMask;
    u16 ackMask;
    u8 pad[0x20 - 0x0e];
    Unk_ov066_02263320_Pay payload;
};

struct Unk_ov066_02263320_G {
    u8 recordSize;
    u8 lo : 4;
    u8 hi : 4;
    s8 numPendingSends;
    s8 numRecordsInFlight;
    Unk_ov066_02263320_Flags flags;
    u8 pad[3];
    Unk_ov066_02263320_Rec *sendRing;
    Unk_ov066_02263320_Rec *recvRing;
    Unk_ov066_02263320_Rec *curSendFrame;
    Unk_ov066_02263320_Rec *resendFrame;
    Unk_ov066_02263320_Rec **recvCursors;
    u16 recvActiveMask;
    u16 sendDestMask;
    u32 sendData;
    u32 sendSize;
    s32 sendOffset;
    u32 sendDoneCallback;
};

struct Unk_ov066_02263320_S {
    u8 pad[0xb];
    u8 maxMembers;
};

struct Unk_ov066_02263320_V {
    u8 pad[0x98];
    u16 readyMask;
};

struct Unk_ov066_02263320_Hdr {
    u8 a : 2;
    u8 pad : 1;
    u8 b : 1;
    u8 c : 4;
    u8 d;
};

struct Unk_ov066_02263320_Msg {
    u16 unk_00;
    u16 errcode;
    u16 state;
    u8 pad[6];
    Unk_ov066_02263320_Pay *data;
    u16 length;
    u16 aid;
    u8 pad2[0x20 - 0x14];
    void (*unk_20)(void *);
};

struct Unk_ov066_022629cc_S {
    u32 requestedMode;
    u32 state;
    u8 channel;
    u8 numScanChannels;
    u8 maxChildren;
    u8 maxMembers;
};

struct Unk_ov066_022629cc_V {
    u8 pad[0x8d];
    u8 channel;
    u8 pad2[2];
    u16 allowedChannelMask;
    u8 numAllowedChannels;
    u8 pad3[0xc0 - 0x93];
    u32 flags;
};

struct Unk_ov066_022629cc_Msg {
    u16 unk_00;
    u16 errcode;
    u8 unk_04[4];
    u16 channel;
    u16 busyRatio;
};

struct Unk_ov066_022629cc_E {
    u32 a;
    u32 b;
    u32 pad[2];
};

struct Unk_ov066_022629cc_G {
    u8 pad[0x1c];
    u16 recvActiveMask;
    u8 pad2[0x30 - 0x1e];
    Unk_ov066_022629cc_E *recvEntries;
};

struct Unk_ov066_022629cc_Ent;

struct Unk_ov066_022629cc_Rec {
    u16 inUse;
    u8 macAddr[6];
    u16 tag;
    u8 linkLevel;
    u8 linkLevelPos;
    u8 linkLevels[6];
    u8 pad[2];
    Unk_ov066_022629cc_Ent *ownerList;
    u8 pad2[8];
    u8 bssDesc[0xc0];
};

struct Unk_ov066_022629cc_Sub {
    u8 pad[0x2c];
};

struct Unk_ov066_022629cc_Ent {
    u8 listId;
    u8 numUsed;
    u8 capacity;
    u8 pad;
    Unk_ov066_022629cc_Rec *entries;
    Unk_ov066_022629cc_Sub *alarms;
    void (*unk_0c)(Unk_ov066_022629cc_Rec *);
};

struct Unk_ov066_02262074_Flags {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 1;
    u32 f3 : 1;
    u32 f4 : 1;
    u32 f5 : 1;
    u32 f6 : 1;
    u32 f7 : 1;
    u32 f8 : 1;
    u32 f9 : 1;
    u32 f10 : 1;
    u32 rest : 21;
};

struct Unk_ov066_02262074_Ent {
    u8 b[6];
};

struct Unk_ov066_02262074_Row {
    u8 pad[0x28];
    Unk_ov066_02262074_Ent e;
};

struct Unk_ov066_02262074_Rec {
    void *userGameInfo;
    u16 userGameInfoLength;
    u16 pad06;
    u32 ggid;
    u16 tgid;
    u16 entryFlag;
    u16 maxChildren;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 beaconPeriod;
    u8 pad1a[0x32 - 0x1a];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
};

struct Unk_ov066_02262074_Rec2 {
    u16 tag;
    u16 nonce;
    u8 scanSlot;
    u8 memberCount;
    u8 version;
};

struct Unk_ov066_02262074_Buf {
    u32 unk_00;
    u8 *unk_04;
};

struct Unk_ov066_02262074_Data {
    u8 pad[0x17e];
    u16 connectedMask;
};

struct Unk_ov066_02262074_A {
    u32 requestedMode;
    u32 state;
    u8 channel;
    u8 pad09;
    u8 maxChildren;
    u8 pad0b[2];
    u8 dmaNo;
    u8 pad0e[0x18 - 0xe];
    u16 recvChildSize;
    u16 parentMaxSize;
    u16 recvParentSize;
    u16 childMaxSize;
    u16 scanLoopTime;
    u8 pad22[6];
    u32 ggid;
};

struct Unk_ov066_02262074_B {
    Unk_ov066_02262074_Rec *parentParam;
    Unk_ov066_02262074_Buf *wmBuf;
    Unk_ov066_02262074_Rec2 *gameInfo;
    void *recvBuf;
    void *sendBuf;
    void *controlBuf;
    u16 gameInfoLength;
    u16 recvBufSize;
    u16 sendBufSize;
    u16 myAid;
    u16 tgid;
    u8 myMac[2];
    u8 unk_24[4];
    Unk_ov066_02262074_Ent memberMacs[16];
    u8 *selectedBeacon;
    u8 numMembers;
    u8 channel;
    u8 scanChannel;
    u8 fixedChannel;
    u8 pad90[3];
    u8 roleTurnTarget;
    u8 roleTurnCount;
    u8 scanSlot;
    u8 numBeaconsSent;
    u8 pad97;
    u16 readyMask;
    u8 pad9a[2];
    void (*resetHook)(void);
    u8 pad_a0[0xb0 - 0xa0];
    s32 (*sendHook)(u32, u32, u32, u32);
    s32 (*isReadyToSendHook)(void);
    u32 recvCallback;
    u8 padbc[4];
    Unk_ov066_02262074_Flags flags;
};

struct Unk_ov066_02261764_CBits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
};

struct Unk_ov066_02261764_TBits {
    s32 pad : 8;
    s32 f8 : 1;
};

struct Unk_ov066_02261764_S {
    u32 requestedMode;
    u32 state;
    u8 unk_08[3];
    u8 maxMembers;
    u8 unk_0c[8];
    u8 parentWaitBeacons;
    u8 unk_15[0x3c - 0x15];
    Unk_ov066_02261764_TBits flags;
};

struct Unk_ov066_02261764_V {
    u32 parentParam;
    u32 wmBuf;
    u32 gameInfo;
    u32 recvBuf;
    u32 sendBuf;
    u8 *controlBuf;
    u16 gameInfoLength;
    u16 recvBufSize;
    u16 sendBufSize;
    u16 myAid;
    u8 unk_20[8];
    u8 memberMacs[0x60];
    u8 unk_88[4];
    u8 numMembers;
    u8 unk_8d[5];
    u8 unk_92[4];
    u8 numBeaconsSent;
    u8 unk_97;
    u16 readyMask;
    u8 unk_9a[2];
    void (*resetHook)(void);
    u8 pad[0xac - 0xa0];
    void (*sendControlHook)(u8 *, u32, u32, void (*)(void));
    u8 pad2[0xbc - 0xb0];
    void (*memberLeftHook)(u32);
    Unk_ov066_02261764_CBits flags;
};

struct Unk_ov066_02261764_Msg {
    u8 unk_00[0xa];
    u16 unk_0a;
    u8 *data;
    u16 unk_10;
    u16 aid;
};

struct Unk_ov066_02261764_R6 {
    u8 b[6];
};

struct Unk_ov066_02261764_Hdr {
    u16 a;
    u16 b;
    u32 c;
};

struct Unk_ov066_02260e18_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    u32 f8 : 2;
    s32 f10 : 1;
    s32 f11 : 1;
    s32 f12 : 1;
};

struct Unk_ov066_02260e18_CBits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
};

struct Unk_ov066_02260e18_S {
    u32 requestedMode;
    u32 state;
    u8 channel;
    u8 numScanChannels;
    u8 maxChildren;
    u8 maxMembers;
    u32 unk_0c;
    u32 scanChannels;
    u8 parentWaitBeacons;
    u8 resetRetryCount;
    u8 abortRequest;
    u8 mpFreq;
    u32 unk_18[4];
    u32 ggid;
    u32 unk_2c;
    u32 doneCallback;
    u32 doneCallbackArg;
    u32 eventCallback;
    Unk_ov066_02260e18_Bits flags;
};

struct Unk_ov066_02260e18_V {
    u32 parentParam;
    u32 wmBuf;
    u32 gameInfo;
    u32 recvBuf;
    u32 sendBuf;
    u16 unk_14;
    u16 unk_16;
    u16 gameInfoLength;
    u16 recvBufSize;
    u16 sendBufSize;
    u16 myAid;
    u16 tgid;
    u8 myMac[0x8c - 0x22];
    u8 numMembers;
    u8 pad[0x9c - 0x8d];
    void (*resetHook)(void);
    void (*parentSendHook)(void);
    void (*childSendHook)(void);
    u8 pad2[0xc0 - 0xa8];
    Unk_ov066_02260e18_CBits flags;
};

struct Unk_ov066_02260e18_Msg {
    u16 unk_00;
    u16 errcode;
    u16 mpEvent;
    u16 unk_06;
    u16 event;
};

struct Unk_ov066_02260518_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 rest : 30;
};

struct Unk_ov066_02260518_Bits3 {
    s32 pad : 3;
    s32 f3 : 1;
    s32 rest : 28;
};

struct Unk_ov066_02260518_CBits {
    s32 pad : 7;
    s32 f7 : 1;
    s32 f8 : 1;
    s32 f9 : 1;
    s32 rest : 22;
};

struct Unk_ov066_02260518_Elem {
    u32 v[4];
};

struct Unk_ov066_02260518_Head {
    u32 scanBuf;
    u16 channel;
    u16 maxChannelTime;
    u8 bssid0;
    u8 bssid1;
    u8 bssid2;
    u8 bssid3;
    u8 bssid4;
    u8 bssid5;
};

// sLocalWl
struct Unk_ov066_02260518_A {
    u32 requestedMode;
    s32 state;
    u8 pad_08;
    u8 numScanChannels;
    u8 pad_0a[2];
    u8 maxBeacons;
    u8 pad_0d[3];
    u8 *scanChannels;
    u8 pad_14[0x20 - 0x14];
    u16 scanLoopTime;
    u16 scanMaxChannelTime;
    u8 pad_24[0x3c - 0x24];
    Unk_ov066_02260518_Bits3 flags;
};

// sLocalWlScan
struct Unk_ov066_02260518_B {
    Unk_ov066_02260518_Head *scanParam;
    u32 scanBuffer;
    Unk_ov066_02260518_Elem *beaconLists;
    Unk_ov066_02260518_Bits scanFlags;
    u32 scanTimer[11];
    u32 stopTimer[12];
    s32 beaconFilter;
};

struct Unk_ov066_02260dd0_Msg {
    u16 unk_00;
    u16 errcode;
};

struct Unk_ov066_02260518_Rec {
    u16 inUse;
    u8 macAddr[6];
    u16 tag;
};

// sLocalWlSession
struct Unk_ov066_02260518_C {
    u8 pad_00[0x88];
    Unk_ov066_02260518_Rec *selectedBeacon;
    u8 numMembers;
    u8 pad_8d;
    u8 scanChannel;
    u8 pad_8f[4];
    u8 roleTurnTarget;
    u8 roleTurnCount;
    u8 scanSlot;
    u8 pad_96[0xb8 - 0x96];
    u32 recvCallback;
    u8 pad_bc[4];
    Unk_ov066_02260518_CBits flags;
};

struct Unk_ov066_0225faf8_Bits {
    u32 f0 : 3;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    u32 f8 : 2;
    s32 f10 : 1;
    s32 f11 : 1;
    s32 f12 : 1;
};

struct Unk_ov066_0225faf8_S {
    u32 requestedMode;
    u32 state;
    u8 channel;
    u8 numScanChannels;
    u8 maxChildren;
    u8 maxMembers;
    u8 maxBeacons;
    u8 dmaNo;
    u32 scanChannels;
    u8 parentWaitBeacons;
    u8 resetRetryCount;
    u8 abortRequest;
    u8 mpFreq;
    u32 unk_18[4];
    u32 ggid;
    u32 unk_2c;
    u32 doneCallback;
    u32 doneCallbackArg;
    u32 eventCallback;
    Unk_ov066_0225faf8_Bits flags;
};

struct Unk_ov066_0225faf8_TBits {
    s32 f0 : 1;
    s32 f1 : 1;
    u32 f2 : 30;
};

struct Unk_ov066_0225faf8_W {
    u8 pad[0x3c];
    u16 gameInfoLength;
    u16 unk_3e;
    u32 unk_40;
    u32 unk_44;
    u8 unk_48[3];
    u8 gameInfoAttr;
    u8 unk_4c[4];
    u8 userGameInfo[8];
};

struct Unk_ov066_0225faf8_T {
    s32 scanParam;
    Unk_ov066_0225faf8_W *scanBuffer;
    u8 *beaconLists;
    Unk_ov066_0225faf8_TBits scanFlags;
    u32 scanTimer[11];
    u32 stopTimer[12];
    s32 (*beaconFilter)(void *);
};

struct Unk_ov066_0225faf8_V {
    u8 pad[0x8e];
    u8 scanChannel;
    u8 pad2[6];
    u8 scanSlot;
    u8 pad3[0xc0 - 0x96];
    u32 flags;
};

struct Unk_ov066_0225faf8_Msg {
    u16 unk_00;
    u16 errcode;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u16 scanState;
    u8 macAddr[8];
    u16 linkLevel;
};

struct Unk_ov066_0225f1a0_S {
    u32 requestedMode;
    u32 state;
    u32 unk_08[3];
    u8 parentWaitBeacons;
    u8 resetRetryCount;
    u8 abortRequest;
    u8 mpFreq;
    u32 unk_18[6];
    void (*doneCallback)(u32);
    u32 doneCallbackArg;
    void (*eventCallback)(void *);
    u32 flags;
};

struct Unk_ov066_0225f7c8_Bits {
    s32 lo : 10;
    s32 f : 1;
    s32 hi : 21;
};

struct Unk_ov066_0225f1a0_Msg {
    u16 apiid;
    u16 errcode;
};

struct Unk_ov066_0225f64c_Rec {
    u8 pad[0x5c];
    u16 gameInfoLength;
    u8 pad2[0x77 - 0x5e];
    u8 userDataSize;
};

extern "C" {
s32 WM_Enable(void *);
s32 WM_Disable(void *);
s32 WM_PowerOn(void *);
s32 WM_PowerOff(void *);
s32 (*sLocalWlPowerApis[4])(void *) = {WM_Enable, WM_Disable, WM_PowerOn, WM_PowerOff};
u32 data_ov066_022647c4;
u32 data_ov066_022647c0;
u32 data_ov066_022647bc;
u32 sLocalWlRandSeed;
Unk_ov066_02263c3c_V *sLocalWlSession;
Unk_ov066_02263c3c_G *sLocalWlMp;
Unk_ov066_0226460c_A *sLocalWl;
void *(*sLocalWlAllocHook)(u32, u32);
Unk_ov066_02260518_B *sLocalWlScan;
void (*sLocalWlErrorHook)(u32);
void (*sLocalWlFreeHook)(void *);

u32 OS_DisableInterrupts(void);
s32 OS_RestoreInterrupts(u32);
s32 Fatal_Trap(void);
void DC_InvalidateRange(void *p, s32 v);
s32 DC_StoreRange(void *, s32);
s32 OS_InitTick(void);
s32 func_02114ef4(u32);
s32 func_02114f74(void *, u32);
s32 OS_CancelAlarm(void *);
s32 OS_SetAlarm(void *, s64, void *, void *);
s32 OS_CreateAlarm(void *);
s32 OS_InitAlarm(void);
void OS_GetMacAddress(void *p);
s32 MIi_CpuClearFast(s32, void *, s32);
s32 MIi_CpuCopyFast(void *, void *, s32);
void MI_CpuFill8(void *p, u32 v, u32 n);
s32 MI_CpuCopy8(void *, void *, s32);
s32 func_0211f188(void);
s32 WM_Init(void *p, s32 v);
u32 WM_GetDispersionBeaconPeriod(void);
s32 WM_GetLinkLevel(void);
s32 func_0211f7e4(void);
u32 WM_GetAllowedChannel(void);
s32 func_0211fb0c(u32, void *, s32);
s32 WM_SetIndCallback(void *);
s32 WM_Disconnect(void *, u32);
s32 func_0211fcbc(void *, u32, u32, u32, u32);
s32 WM_EndScan(void *);
s32 WM_StartScan(void *, s32);
s32 WM_EndParent(void *);
s32 WM_StartParent(void *);
s32 WM_SetParentParameter(void *, u32);
s32 WM_Reset(void);
s32 WM_EndMP(void *);
s32 WM_SetMPDataToPortEx(void *, u32, u32, u32, u32, u32, u32);
s32 func_021206b4(void *, u32, u32, u32, u32, u32, u32, s32, s32, s32, s32);
s32 WM_SetEntry(void *, u32);
s32 func_021218d0(void *, s32, s32, u32, s32);
s32 WM_SetGameInfo(void *, u32, u32, u32, u32, u8);
u32 MATH_CountPopulation(void);
u32 func_0213335c(u32 a, u32 b);
s32 LocalWl_SetEventCallback(void (*fn)(void *));
void LocalWl_PostEvent(u32 a, u32 b);
void LocalWl_CallEventCallback(void *p);
void LocalWl_SetError(u32 v);
void LocalWl_Free(void *p);
s32 LocalWl_Alloc(s32 a, s32 b);
void LocalWl_ClearResetFlag(void);
void LocalWl_OnReset(Unk_ov066_0225f1a0_Msg *m);
void LocalWl_Reset(void *p);
void LocalWl_OnPowerOff(Unk_ov066_0225f1a0_Msg *m);
void LocalWl_OnPowerOn(Unk_ov066_0225f1a0_Msg *m);
void LocalWl_OnDisable(Unk_ov066_0225f1a0_Msg *m);
void LocalWl_OnEnable(Unk_ov066_0225f1a0_Msg *m);
void LocalWl_CallPowerApi(u32 idx);
void LocalWl_OnPowerApiDone(Unk_ov066_0225f1a0_Msg *m);
void LocalWl_Advance(void);
u32 LocalWl_IsBeaconValid(Unk_ov066_0225f1a0_Msg *m);
void * LocalWl_GetBeaconGameInfo(Unk_ov066_0225f64c_Rec *r);
s32 LocalWl_GetBeaconGameInfoSize(Unk_ov066_0225f64c_Rec *r);
s32 LocalWl_GetLinkLevel(void);
void LocalWl_ResetIfActive(void);
s32 LocalWl_IsAborting(void);
void LocalWl_Abort(void);
void LocalWl_Step(void);
void LocalWl_StepChildMp(void);
void LocalWl_StepParentMp(void);
void LocalWl_StepMeasuring(void);
void LocalWl_StepConnecting(void);
void LocalWl_StepScanning(void);
void LocalWl_StepParentWaiting(void);
void LocalWl_StepIdle(void);
void LocalWl_StepEnabled(void);
void LocalWl_StepReady(void);
s32 LocalWl_RequestMode(s32 a, u32 b, u32 c);
s32 LocalWl_IsModeReached(void);
s32 LocalWl_Finish(void);
s32 LocalWl_Init(u32 a, void *(*b)(u32, u32), void (*c)(void *), void (*d)(u32));
void LocalWl_ResetSettings(u32 a);
s32 LocalWl_GetState(void);
void LocalWl_OnEndScan(Unk_ov066_0225faf8_Msg *m);
s32 LocalWl_EndScan(void);
void LocalWl_OnScan(Unk_ov066_0225faf8_Msg *m);
void LocalWl_StartScan(void);
s32 LocalWl_GetBeacon(u32 idx, u32 b);
s32 LocalWl_GetBeaconCount(u32 idx);
s32 LocalWl_FilterBeacon(void *a, u8 *b);
void LocalWl_StopScanSoon(void);
void LocalWl_OnScanStopTimer(void);
void LocalWl_OnBeaconFound(Unk_ov066_0225faf8_Msg *m);
void LocalWl_SetupScanParam(void);
void LocalWl_StopScanLoop(void);
void LocalWl_ScanNextChannel(void);
void LocalWl_OnScanTimer(void);
void LocalWl_StartScanLoop(s32 t);
u32 LocalWl_GetScanChannel(u32 idx);
void LocalWl_SetBeaconFilter(s32 v);
void LocalWl_FreeScanWork(void);
void LocalWl_AllocScanWork(void);
void LocalWl_SetRecvCallback(u32 v);
BOOL LocalWl_IsMacSet(u8 *p);
u8 LocalWl_GetMemberCount(void);
void LocalWl_StepAuto(void);
BOOL LocalWl_JoinBestParent(void);
void LocalWl_NextRoleTurn(void);
void LocalWl_StartScanMode(void);
s32 LocalWl_ConnectToParent(Unk_ov066_02260518_Rec *p, u32 a, u32 b);
void LocalWl_StartParent(u32 v);
s32 LocalWl_CompareMac(u8 *a, u8 *b);
u32 LocalWl_ReadBe32(u8 *p);
void LocalWl_OnConnectFailReset(Unk_ov066_02260dd0_Msg *m);
void LocalWl_OnSetEntry(Unk_ov066_02260e18_Msg *m);
void LocalWl_SetEntry(u32 a);
void LocalWl_OnEndMp(Unk_ov066_02260e18_Msg *m);
void LocalWl_EndMp(void);
void LocalWl_OnMpEvent(Unk_ov066_02260e18_Msg *m);
void LocalWl_StartMp(void);
void LocalWl_OnSetGameInfo(Unk_ov066_02260e18_Msg *m);
void LocalWl_UpdateGameInfo(void);
void LocalWl_OnDisconnect(Unk_ov066_02260e18_Msg *m);
s32 LocalWl_Disconnect(u32 a);
void LocalWl_OnChildConnectEvent(Unk_ov066_02260e18_Msg *m);
void LocalWl_StartConnect(u32 a);
void LocalWl_OnEndParent(Unk_ov066_02260e18_Msg *m);
void LocalWl_EndParent(void);
void LocalWl_OnParentEvent(Unk_ov066_02260e18_Msg *m);
void LocalWl_StartParentNow(void);
void LocalWl_OnSetParentParameter(Unk_ov066_02260e18_Msg *m);
void LocalWl_SetParentParameter(void);
s32 LocalWl_CheckEndRequest(void);
void LocalWl_RequestEnd(void);
void LocalWl_ApplyMemberTable(void *m);
void LocalWl_OnChildControl(Unk_ov066_02261764_Msg *m);
void LocalWl_OnParentLost(void);
void LocalWl_OnChildEvent8Stub(void);
void LocalWl_OnChildConnected(Unk_ov066_02261764_Msg *m);
void LocalWl_OnChildReady(u32 idx, u8 *src);
void LocalWl_OnParentControl(Unk_ov066_02261764_Msg *m);
void LocalWl_OnChildLeft(Unk_ov066_02261764_Msg *m);
void LocalWl_OnChildJoined(Unk_ov066_02261764_Msg *m);
void LocalWl_OnBeaconSent(void);
void LocalWl_CallMemberLeftCb(u32 a);
void LocalWl_OnControlRecv(Unk_ov066_02261764_Msg *m);
void LocalWl_ClearMembers(void);
void LocalWl_CountMembers(void);
void LocalWl_MergeMemberTable(u8 *a, u8 *b);
void LocalWl_OnMemberTableSent(void);
void LocalWl_SendMemberTable(void);
void LocalWl_SendReady(void);
void LocalWl_SetMember(u32 idx, u8 *src);
s32 LocalWl_SetGameInfo(void *a, u32 n);
void LocalWl_ConnectToBeacon(u8 *p, u32 v);
void LocalWl_ConnectToSelected(void);
void LocalWl_BeginParent(u32 a);
void LocalWl_BuildParentParameter(u32 a);
void LocalWl_BuildGameInfo(u32 a, u32 b);
s32 LocalWl_Send(u32 a, u32 b, u32 c, u32 d);
s32 LocalWl_IsReadyToSend(void);
u32 LocalWl_GetConnectedMask(void);
u32 LocalWl_GetMyAid(void);
u32 LocalWl_Rand(void);
void LocalWl_StartSession(void);
void LocalWl_FinishWm(void);
void LocalWl_InitWm(void);
void LocalWl_AllocBuffers(void);
void LocalWl_ResetSessionInfo(void);
s32 LocalWl_PickChannel(void);
void LocalWl_StartMeasureChannels(void);
void LocalWl_OnMeasureChannel(Unk_ov066_022629cc_Msg *m);
s32 LocalWl_MeasureChannel(u32 a);
u32 LocalWl_NextAllowedChannel(u32 a);
void LocalWl_UpdateAllowedChannels(void);
s32 LocalWl_MeasureNextChannel(u32 i);
void LocalWlBcn_RefreshTimeouts(Unk_ov066_022629cc_Ent *o, s32 x);
void LocalWlBcn_Clear(Unk_ov066_022629cc_Ent *o);
void LocalWlBcn_CancelAlarms(Unk_ov066_022629cc_Ent *o);
Unk_ov066_022629cc_Rec * LocalWlBcn_Get(Unk_ov066_022629cc_Ent *o, u32 i);
u32 LocalWlBcn_Count(Unk_ov066_022629cc_Ent *o);
void LocalWlBcn_OnExpire(Unk_ov066_022629cc_Rec *r);
s32 LocalWlBcn_Add(Unk_ov066_022629cc_Ent *o, s32 a, u8 *b, u32 c, u16 d, void *e);
void LocalWlBcn_Free(Unk_ov066_022629cc_Ent *o);
void LocalWlBcn_Init(Unk_ov066_022629cc_Ent *o, u32 id, s32 n);
s32 LocalWlMp_SetRecvBuffer(s32 idx, u32 a, u32 b);
void LocalWlMp_Reset(void);
void LocalWlMp_OnDataRecv(Unk_ov066_02263320_Msg *m);
void LocalWlMp_OnDataDisconnectStub(Unk_ov066_02263320_Msg *m);
void LocalWlMp_OnPacket(Unk_ov066_02263320_Msg *m);
void LocalWlMp_StoreChildPacket(u32 idx, void *src, u32 size);
Unk_ov066_02263320_Rec * LocalWlMp_FindFrame(u32 id, Unk_ov066_02263320_Rec *head);
void LocalWlMp_OnSetMpData(Unk_ov066_02263320_Msg *m);
void LocalWlMp_SendControl(u32 a, u32 b, u32 c, u32 d);
s32 LocalWlMp_SetMpData(u32 x, u32 a, u32 b, u32 c, u32 d);
void LocalWlMp_OnMemberLeft(u32 idx);
void LocalWlMp_ChildSendStep(void);
void LocalWlMp_ParentSendStep(void);
s32 LocalWlMp_MergeFrame(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src);
void LocalWlMp_DeliverFrame(Unk_ov066_02263320_Pay *p);
void LocalWlMp_ReceiveRecord(u32 idx, u8 *msg);
void LocalWlMp_BuildChildPacket(void);
void LocalWlMp_PutParentRecord(Unk_ov066_02263f54_Obj *o);
u16 LocalWlMp_PutSendRecord(Unk_ov066_02263c3c_Rec *rec);
void LocalWlMp_OnFrameSent(void);
void LocalWlMp_OnChildPacketSent(Unk_ov066_02263c3c_Wrap *w);
void LocalWlMp_FinishSend(void);
void LocalWlMp_OnIndicationStub(void);
s32 LocalWlMp_Send(u8 *a, u32 b, u32 c, void (*d)(u32));
s32 LocalWlMp_IsReadyToSend(void);
void LocalWlMp_Shutdown(void);
void LocalWlMp_Start(u8 *msg);
void LocalWlMp_ClearRing(Unk_ov066_0226453c_Node *p, s32 n);
void * LocalWlMp_AllocRing(s32 n);
void LocalWl_ApplyConfig(Unk_ov066_0226460c_In *in);
}

#pragma thumb off
extern "C" {

// ---- unk_0226453c
#define LocalWl_Alloc ((void * (*)(u32, u32))LocalWl_Alloc)

void LocalWl_ApplyConfig(Unk_ov066_0226460c_In *in) {
    u8 w = in->recordSize;
    u32 sz = w * in->maxMembers;
    u16 t = sz + 4;
    sLocalWl->ggid = in->ggid;
    sLocalWl->flags.f3 = 0;
    sLocalWl->flags.f0 = 0;
    sLocalWl->flags.f5 = -1;
    sLocalWl->flags.f6 = -1;
    sLocalWl->flags.f7 = -1;
    sLocalWl->flags.f9 = 0;
    sLocalWl->flags.f8 = 0;
    sLocalWl->flags.f2 = -1;
    sLocalWl->flags.f1 = -1;
    sLocalWl->mpFreq = in->mpFreq;
    sLocalWl->channel = 0xfe;
    sLocalWl->numScanChannels = 1;
    sLocalWl->maxChildren = in->maxMembers - 1;
    sLocalWl->maxMembers = in->maxMembers;
    sLocalWl->maxBeacons = in->maxBeacons;
    sLocalWl->recvChildSize = w;
    sLocalWl->parentMaxSize = t;
    sLocalWl->recvParentSize = t;
    sLocalWl->childMaxSize = w;
    sLocalWl->scanMaxChannelTime = 0x1e;
    sLocalWl->scanLoopTime = 0x5a;
    sLocalWl->unk_24 = 0xc8;
    sLocalWl->parentWaitBeacons = 4;
}

void *LocalWlMp_AllocRing(s32 n) {
    u32 sz = (sLocalWl->parentMaxSize + 0x43) & ~0x1f;
    u32 tot = sz * n;
    Unk_ov066_02264574_Node *p = (Unk_ov066_02264574_Node *)LocalWl_Alloc(tot, 0x20);
    u16 i;
    Unk_ov066_02264574_Node *q;
    Unk_ov066_02264574_Node *head;
    MI_CpuFill8(p, 0, tot);
    head = p;
    s32 last = n - 1;
    for (i = 0; (s32)i < last; ) {
        i++;
        p->frameId = 0;
        q = p;
        p->next = (Unk_ov066_02264574_Node *)((u8 *)p + sz);
        p = p->next;
        p->prev = q;
    }
    p->frameId = last;
    p->next = head;
    head->prev = p;
    return head;
}

void LocalWlMp_ClearRing(Unk_ov066_0226453c_Node *p, s32 n) {
    u16 i;
    for (i = 0; (s32)i < n; ) {
        i++;
        p->frameSize = 0;
        p->destMask = 0;
        p->ackMask = 0;
        p = p->next;
    }
}
#undef LocalWl_Alloc

// ---- unk_02263c3c
#define sLocalWl (*(Unk_ov066_02263c3c_S * *)&sLocalWl)
#define MI_CpuFill8 ((void (*)(void *, s32, u32))MI_CpuFill8)
#define MI_CpuCopy8 ((s32 (*)(void *, void *, u32))MI_CpuCopy8)
#define LocalWl_Alloc ((void * (*)(u32, u32))LocalWl_Alloc)
#define LocalWl_OnControlRecv ((void (*)(void))LocalWl_OnControlRecv)
#define LocalWlMp_OnDataRecv ((void (*)(void))LocalWlMp_OnDataRecv)
#define LocalWlMp_SetMpData ((void (*)(u32, void *, s32, s32, void *))LocalWlMp_SetMpData)
#define LocalWlMp_OnMemberLeft ((void (*)(void))LocalWlMp_OnMemberLeft)
#define LocalWlMp_SendControl ((void (*)(void))LocalWlMp_SendControl)
#define LocalWl_ApplyConfig ((void (*)(u8 *))LocalWl_ApplyConfig)
#define LocalWlMp_AllocRing ((void * (*)(u32))LocalWlMp_AllocRing)

void LocalWlMp_Start(u8 *msg) {
    u32 n;
    if (sLocalWlMp != NULL) {
        return;
    }
    LocalWl_ApplyConfig(msg);
    LocalWl_InitWm();
    sLocalWlSession->resetHook = (void *)LocalWlMp_Reset;
    sLocalWlSession->parentSendHook = (void *)LocalWlMp_ParentSendStep;
    sLocalWlSession->childSendHook = (void *)LocalWlMp_ChildSendStep;
    sLocalWlSession->sendControlHook = (void *)LocalWlMp_SendControl;
    sLocalWlSession->sendHook = (void *)LocalWlMp_Send;
    sLocalWlSession->isReadyToSendHook = (void *)LocalWlMp_IsReadyToSend;
    sLocalWlSession->shutdownHook = (void *)LocalWlMp_Shutdown;
    sLocalWlSession->memberLeftHook = (void *)LocalWlMp_OnMemberLeft;
    sLocalWlMp = (Unk_ov066_02263c3c_G *)LocalWl_Alloc(0x34, 4);
    n = sLocalWl->maxMembers << 4;
    sLocalWlMp->recvEntries = (Unk_ov066_02263c3c_Ent *)LocalWl_Alloc(n, 4);
    MI_CpuFill8(sLocalWlMp->recvEntries, 0, n);
    sLocalWlMp->sendRing = (u32)LocalWlMp_AllocRing(3);
    sLocalWlMp->recvRing = (u32)LocalWlMp_AllocRing(3);
    n = sLocalWl->maxMembers << 2;
    sLocalWlMp->recvCursors = (Unk_ov066_02263c3c_Q *)LocalWl_Alloc(n, 4);
    MI_CpuFill8(sLocalWlMp->recvCursors, 0, n);
    sLocalWlMp->recordSize = msg[6];
    func_0211fb0c(0xc, (void *)LocalWl_OnControlRecv, 0);
    func_0211fb0c(0xd, (void *)LocalWlMp_OnDataRecv, 0);
    WM_SetIndCallback((void *)LocalWlMp_OnIndicationStub);
    LocalWlMp_Reset();
}

void LocalWlMp_Shutdown(void) {
    if (sLocalWlMp == NULL) {
        return;
    }
    func_0211fb0c(0xc, 0, 0);
    func_0211fb0c(0xd, 0, 0);
    LocalWl_Free(sLocalWlMp->recvCursors);
    LocalWl_Free((void *)sLocalWlMp->recvRing);
    LocalWl_Free((void *)sLocalWlMp->sendRing);
    LocalWl_Free(sLocalWlMp->recvEntries);
    LocalWl_Free(sLocalWlMp);
    LocalWl_FinishWm();
    sLocalWlMp = NULL;
}

s32 LocalWlMp_IsReadyToSend(void) {
    Unk_ov066_02263c3c_G *g = sLocalWlMp;
    s32 r = 0;
    if (g == NULL) {
        return r;
    }
    s32 t = sLocalWl->state;
    switch (t) {
    case 10:
    case 11:
        r = g->flags.f3;
        if (r == 0) {
            r = 1;
        } else {
            r = 0;
        }
    }
    return r;
}

s32 LocalWlMp_Send(u8 *a, u32 b, u32 c, void (*d)(u32)) {
    s32 r = 0;
    u32 irq = OS_DisableInterrupts();
    if (LocalWlMp_IsReadyToSend() != 0) {
        sLocalWlMp->flags.f3 = 1;
        sLocalWlMp->flags.f4 = 0;
        sLocalWlMp->sendData = a;
        sLocalWlMp->sendSize = b;
        sLocalWlMp->sendOffset = r;
        r = 1;
        sLocalWlMp->sendDestMask = c;
        sLocalWlMp->sendDoneCallback = d;
    }
    OS_RestoreInterrupts(irq);
    return r;
}

void LocalWlMp_OnIndicationStub(void) {
}

void LocalWlMp_FinishSend(void) {
    Unk_ov066_02263c3c_G *g = sLocalWlMp;
    u32 n = g->sendSize;
    void (*cb)(u32) = g->sendDoneCallback;
    g->flags.f3 = 0;
    sLocalWlMp->sendDestMask = 0;
    sLocalWlMp->sendData = 0;
    sLocalWlMp->sendSize = 0;
    sLocalWlMp->sendOffset = -1;
    sLocalWlMp->sendDoneCallback = 0;
    if (cb == NULL) {
        return;
    }
    cb(n);
}

void LocalWlMp_OnChildPacketSent(Unk_ov066_02263c3c_Wrap *w) {
    Unk_ov066_02263c3c_Rec *rec = w->sentData;
    sLocalWlMp->numPendingSends--;
    if (rec->a != 0) {
        if (rec->a != 1) {
            return;
        }
    }
    if (rec->c == 0) {
        return;
    }
    rec->c = 0;
    LocalWlMp_FinishSend();
}

void LocalWlMp_OnFrameSent(void) {
    sLocalWlMp->numPendingSends--;
}

u16 LocalWlMp_PutSendRecord(Unk_ov066_02263c3c_Rec *rec) {
    u8 *dst;
    u8 *base;
    s32 off;
    u32 rem;
    u32 tot;
    u8 *src;
    u16 ret;
    Unk_ov066_02263c3c_G *g;
    u32 len;
    u32 n;
    off = sLocalWlMp->sendOffset;
    tot = sLocalWlMp->sendSize;
    base = sLocalWlMp->sendData;
    rem = tot - off;
    src = base + off;
    if (off == 0) {
        rec->a = 0;
        dst = (u8 *)rec + 8;
        rec->destMask = sLocalWlMp->sendDestMask;
        rec->totalSizeLo = sLocalWlMp->sendSize;
        rec->totalSizeHi = sLocalWlMp->sendSize >> 16;
        g = sLocalWlMp;
        n = g->sendSize;
        if (n > (u32)(g->recordSize - 8)) {
            n = g->recordSize - 8;
        }
        len = (u8)n;
        ret = (len + 9) & ~1;
    } else {
        rec->a = 1;
        dst = (u8 *)rec + 2;
        g = sLocalWlMp;
        n = rem;
        if (n > (u32)(g->recordSize - 2)) {
            n = g->recordSize - 2;
        }
        len = (u8)n;
        ret = (len + 3) & ~1;
    }
    g->sendOffset += len;
    rec->length = len;
    rec->c = (sLocalWlMp->sendOffset == (s32)sLocalWlMp->sendSize) ? 1 : 0;
    sLocalWlMp->flags.f4 = rec->c;
    MI_CpuCopy8(src, dst, len);
    return ret;
}

void LocalWlMp_PutParentRecord(Unk_ov066_02263f54_Obj *o) {
    LocalWlMp_PutSendRecord(&o->parentRecord);
    if (o->parentRecord.c == 0) {
        return;
    }
    LocalWlMp_FinishSend();
}

void LocalWlMp_BuildChildPacket(void) {
    Unk_ov066_02263c3c_G *g = sLocalWlMp;
    s32 sent = 0;
    Unk_ov066_02263c3c_Rec *rec = (Unk_ov066_02263c3c_Rec *)((u8 *)g->curSendFrame + 0x20);
    if (g->flags.f2 != 0) {
        rec->a = 3;
        sent = 2;
        rec->d = sLocalWlMp->frameIds.hi;
    } else if (g->flags.f3 != 0) {
        if (g->numRecordsInFlight < 2) {
            if (g->flags.f4 == 0) {
                if (g->flags.f1 == 0) {
                    sent = LocalWlMp_PutSendRecord(rec);
                    sLocalWlMp->numRecordsInFlight++;
                }
            }
        }
    }
    if (sLocalWlMp->recvCursors->recvPos != (u32)sLocalWlMp->recvCursors->ackPos) {
        if (sent == 0) {
            rec->a = 2;
            sent = 2;
            rec->c = 0;
        }
        rec->b = 1;
        rec->d = sLocalWlMp->recvCursors->ackPos->frameId;
        sLocalWlMp->recvCursors->ackPos = sLocalWlMp->recvCursors->ackPos->next;
    } else {
        rec->b = 0;
    }
    if (sent != 0) {
        sLocalWlMp->numPendingSends++;
        LocalWlMp_SetMpData(0xd, rec, sent, 1, (void *)LocalWlMp_OnChildPacketSent);
        sLocalWlMp->curSendFrame = sLocalWlMp->curSendFrame->next;
    }
    sLocalWlMp->flags.f1 = 0;
}

void LocalWlMp_ReceiveRecord(u32 idx, u8 *msg) {
    u32 len = 0;
    Unk_ov066_02263c3c_Ent *e = sLocalWlMp->recvEntries + idx;
    u8 *p;
    u32 t = ((Unk_ov066_02263c3c_Rec *)msg)->a;
    switch (t) {
    case 0:
        p = msg + 8;
        if ((*(u16 *)(msg + 2) & (1 << LocalWl_GetMyAid())) != 0) {
            sLocalWlMp->recvActiveMask |= 1 << idx;
            e->receivedSize = len;
            e->totalSize = (*(u16 *)(msg + 6) << 16) | *(u16 *)(msg + 4);
            len = e->totalSize;
            if (len > (u32)(sLocalWlMp->recordSize - 8)) {
                len = sLocalWlMp->recordSize - 8;
            }
        }
        break;
    case 1:
        p = msg + 2;
        len = msg[1];
        break;
    }
    if ((sLocalWlMp->recvActiveMask & (1 << idx)) == 0) {
        return;
    }
    if (e->receivedSize + len <= e->bufferSize) {
        MI_CpuCopy8(p, e->buffer + e->receivedSize, len);
        e->receivedSize += len;
    }
    if (e->totalSize != e->receivedSize) {
        return;
    }
    sLocalWlMp->recvActiveMask ^= 1 << idx;
    if (sLocalWlSession->recvCallback == NULL) {
        return;
    }
    sLocalWlSession->recvCallback(idx, e->buffer, e->totalSize);
}
#undef sLocalWl
#undef MI_CpuFill8
#undef MI_CpuCopy8
#undef LocalWl_Alloc
#undef LocalWl_OnControlRecv
#undef LocalWlMp_OnDataRecv
#undef LocalWlMp_SetMpData
#undef LocalWlMp_OnMemberLeft
#undef LocalWlMp_SendControl
#undef LocalWl_ApplyConfig
#undef LocalWlMp_AllocRing

// ---- unk_02263320
#define sLocalWl (*(Unk_ov066_02263320_S * *)&sLocalWl)
#define sLocalWlSession (*(Unk_ov066_02263320_V * *)&sLocalWlSession)
#define sLocalWlMp (*(Unk_ov066_02263320_G * *)&sLocalWlMp)
#define LocalWl_GetMyAid ((s32 (*)(void))LocalWl_GetMyAid)
#define LocalWlMp_ClearRing ((void (*)(void *, s32))LocalWlMp_ClearRing)
#define LocalWlMp_PutParentRecord ((void (*)(void *))LocalWlMp_PutParentRecord)
#define LocalWlMp_ReceiveRecord ((void (*)(s32, void *))LocalWlMp_ReceiveRecord)
void LocalWlMp_OnPacket(Unk_ov066_02263320_Msg *m);
void LocalWlMp_StoreChildPacket(u32 idx, void *src, u32 size);
void LocalWlMp_DeliverFrame(Unk_ov066_02263320_Pay *p);
Unk_ov066_02263320_Rec *LocalWlMp_FindFrame(u32 id, Unk_ov066_02263320_Rec *head);
s32 LocalWlMp_SetMpData(u32 x, u32 a, u32 b, u32 c, u32 d);
s32 LocalWlMp_MergeFrame(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src);

void LocalWlMp_DeliverFrame(Unk_ov066_02263320_Pay *p) {
    u16 i;
    u8 *q = p->records;
    for (i = 0; i < sLocalWl->maxMembers; i++) {
        if ((p->aidMask & (1 << i)) != 0) {
            if (i == LocalWl_GetMyAid()) {
                sLocalWlMp->numRecordsInFlight = sLocalWlMp->numRecordsInFlight - 1;
            }
            LocalWlMp_ReceiveRecord(i, q);
            q += sLocalWlMp->recordSize & ~1;
        }
    }
}

s32 LocalWlMp_MergeFrame(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src) {
    u16 mask;
    u16 i;
    u16 total;
    s32 result = 0;
    u8 sz;
    u8 *rd;
    u8 *rp;
    mask = src->payload.aidMask;
    if (mask != 0) {
        u32 t;
        sz = sLocalWlMp->recordSize;
        rd = (u8 *)src + 0x24;
        total = 4;
        rp = (u8 *)dst + 0x24;
        dst->payload.aidMask = mask;
        t = sLocalWlMp->lo;
        sLocalWlMp->lo = t + 1;
        dst->payload.frameId = t;
        for (i = 0; i < sLocalWl->maxMembers; i++) {
            if ((mask & (1 << i)) != 0) {
                MI_CpuCopy8(rd + sz * i, rp, sz);
                rp += sz;
                total = total + sz;
            }
            if (sLocalWlMp->recvCursors[i] == src) {
                sLocalWlMp->recvCursors[i] = src->next;
            }
        }
        src->payload.aidMask = 0;
        dst->destMask = sLocalWlSession->readyMask;
        dst->ackMask = 0;
        dst->frameSize = total;
        LocalWlMp_DeliverFrame(&dst->payload);
        result = 1;
    }
    return result;
}

void LocalWlMp_ParentSendStep(void) {
    Unk_ov066_02263320_G *g = sLocalWlMp;
    Unk_ov066_02263320_Rec *n14;
    Unk_ov066_02263320_Rec *r5;
    Unk_ov066_02263320_Rec *e0;
    if (g->numPendingSends >= 1) {
        return;
    }
    e0 = g->recvCursors[0];
    r5 = 0;
    n14 = g->resendFrame;
    if (n14 != 0) {
        Unk_ov066_02263320_Rec *nx = n14->next;
        r5 = n14;
        if (nx == g->curSendFrame) {
            g->resendFrame = 0;
        } else {
            g->resendFrame = nx;
        }
    } else {
        Unk_ov066_02263320_Rec *p = g->curSendFrame->prev->prev;
        u16 a = p->destMask;
        if (a == 0 || a == p->ackMask) {
            if (g->flags.f3) {
                LocalWlMp_PutParentRecord(e0);
                e0->payload.aidMask = e0->payload.aidMask | 1;
                sLocalWlMp->numRecordsInFlight = sLocalWlMp->numRecordsInFlight + 1;
            }
            if (LocalWlMp_MergeFrame(sLocalWlMp->curSendFrame, e0) != 0) {
                g = sLocalWlMp;
                r5 = g->curSendFrame;
                g->curSendFrame = r5->next;
            }
        }
    }
    if (r5 == 0) {
        return;
    }
    if (r5->destMask == 0) {
        return;
    }
    g = sLocalWlMp;
    g->numPendingSends = g->numPendingSends + 1;
    LocalWlMp_SetMpData(0xd, (u32)&r5->payload, r5->frameSize, r5->destMask, (u32)LocalWlMp_OnFrameSent);
}

void LocalWlMp_ChildSendStep(void) {
    if (sLocalWlMp->numPendingSends >= 2) {
        return;
    }
    LocalWlMp_BuildChildPacket();
}

void LocalWlMp_OnMemberLeft(u32 idx) {
    u16 mask = ~(1 << idx);
    Unk_ov066_02263320_Rec *head = sLocalWlMp->curSendFrame;
    Unk_ov066_02263320_Rec *n = head;
    do {
        n->destMask = n->destMask & mask;
        n->ackMask = n->ackMask & mask;
        n = n->prev;
    } while (head != n);
}

s32 LocalWlMp_SetMpData(u32 x, u32 a, u32 b, u32 c, u32 d) {
    s32 r = WM_SetMPDataToPortEx((void *)LocalWlMp_OnSetMpData, d, a, b, c, x, 2);
    if (r != 2 && r != 7) {
        LocalWl_SetError(r);
        return 0;
    }
    return 1;
}

void LocalWlMp_SendControl(u32 a, u32 b, u32 c, u32 d) {
    LocalWlMp_SetMpData(0xc, a, b, c, d);
}

void LocalWlMp_OnSetMpData(Unk_ov066_02263320_Msg *m) {
    if (m->errcode == 0) {
        if (m->unk_20 == 0) {
            return;
        }
        m->unk_20(m);
        return;
    }
    LocalWl_SetError(m->errcode);
    Fatal_Trap();
}

Unk_ov066_02263320_Rec *LocalWlMp_FindFrame(u32 id, Unk_ov066_02263320_Rec *head) {
    Unk_ov066_02263320_Rec *n;
    for (n = head->prev; head != n; n = n->prev) {
        if (n->payload.frameId == id) {
            return n;
        }
    }
    return 0;
}

void LocalWlMp_StoreChildPacket(u32 idx, void *src, u32 size) {
    Unk_ov066_02263320_Hdr h;
    Unk_ov066_02263320_Rec *r;
    Unk_ov066_02263320_Rec *e;
    MI_CpuCopy8(src, &h, 2);
    if (h.b) {
        r = LocalWlMp_FindFrame(h.c, sLocalWlMp->curSendFrame);
        if (r != 0) {
            r->ackMask = r->ackMask | (r->destMask & (1 << idx));
        }
    }
    if (h.a == 3) {
        if (sLocalWlMp->resendFrame != 0) {
            return;
        }
        r = LocalWlMp_FindFrame(h.c, sLocalWlMp->curSendFrame);
        if (r != 0) {
            sLocalWlMp->resendFrame = r;
        }
        return;
    }
    if (h.a == 2) {
        return;
    }
    e = sLocalWlMp->recvCursors[idx];
    MI_CpuCopy8(src, (u8 *)e + 0x24 + idx * sLocalWlMp->recordSize, size);
    e->payload.aidMask = e->payload.aidMask | (1 << idx);
    sLocalWlMp->recvCursors[idx] = e->next;
}

void LocalWlMp_OnPacket(Unk_ov066_02263320_Msg *m) {
    Unk_ov066_02263320_G *g;
    Unk_ov066_02263320_Pay *p;
    if (m->length == 0) {
        return;
    }
    if (m->aid != 0) {
        LocalWlMp_StoreChildPacket(m->aid, m->data, m->length);
        return;
    }
    g = sLocalWlMp;
    p = m->data;
    if (g->flags.f0 == 0) {
        if (p->frameId != ((g->lo + 1) & 0xf)) {
            goto cc;
        }
    }
    {
        Unk_ov066_02263320_Rec *e = g->recvCursors[0];
        e->payload.frameId = p->frameId;
        sLocalWlMp->recvCursors[0] = e->next;
    }
    LocalWlMp_DeliverFrame(p);
    sLocalWlMp->flags.f0 = 0;
    sLocalWlMp->flags.f2 = 0;
    sLocalWlMp->lo = p->frameId;
    return;
cc:
    if (p->frameId != ((g->lo + 2) & 0xf)) {
        g->flags.f1 = 1;
        return;
    }
    g->flags.f2 = 1;
    sLocalWlMp->hi = (sLocalWlMp->lo + 1) & 0xf;
}

void LocalWlMp_OnDataDisconnectStub(Unk_ov066_02263320_Msg *m) {
}

void LocalWlMp_OnDataRecv(Unk_ov066_02263320_Msg *m) {
    u32 t;
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode != 0) {
        return;
    }
    t = m->state;
    if (t == 7) {
        return;
    }
    if (t != 9) {
        if (t == 0x15) {
            LocalWlMp_OnPacket(m);
        }
    } else {
        LocalWlMp_OnDataDisconnectStub(m);
    }
}

void LocalWlMp_Reset(void) {
    u32 t = OS_DisableInterrupts();
    u16 i;
    sLocalWlMp->curSendFrame = sLocalWlMp->sendRing;
    LocalWlMp_ClearRing(sLocalWlMp->sendRing, 3);
    LocalWlMp_ClearRing(sLocalWlMp->recvRing, 3);
    for (i = 0; i < sLocalWl->maxMembers; i++) {
        sLocalWlMp->recvCursors[i] = sLocalWlMp->recvRing;
    }
    sLocalWlMp->lo = 0;
    sLocalWlMp->hi = 0;
    sLocalWlMp->numPendingSends = 0;
    sLocalWlMp->numRecordsInFlight = 0;
    sLocalWlMp->flags.f0 = 1;
    sLocalWlMp->flags.f1 = 0;
    sLocalWlMp->flags.f2 = 0;
    sLocalWlMp->flags.f3 = 0;
    sLocalWlMp->resendFrame = 0;
    sLocalWlMp->recvActiveMask = 0;
    sLocalWlMp->sendDestMask = 0;
    sLocalWlMp->sendData = 0;
    sLocalWlMp->sendSize = 0;
    sLocalWlMp->sendOffset = -1;
    sLocalWlMp->sendDoneCallback = 0;
    OS_RestoreInterrupts(t);
}
#undef sLocalWl
#undef sLocalWlSession
#undef sLocalWlMp
#undef LocalWl_GetMyAid
#undef LocalWlMp_ClearRing
#undef LocalWlMp_PutParentRecord
#undef LocalWlMp_ReceiveRecord

// ---- unk_022629cc
#define sLocalWl (*(Unk_ov066_022629cc_S * *)&sLocalWl)
#define sLocalWlSession (*(Unk_ov066_022629cc_V * *)&sLocalWlSession)
#define data_ov066_022647bc (*(u8 *)&data_ov066_022647bc)
#define data_ov066_022647c0 (*(u16 *)&data_ov066_022647c0)
#define data_ov066_022647c4 (*(u16 *)&data_ov066_022647c4)
#define sLocalWlMp (*(Unk_ov066_022629cc_G * *)&sLocalWlMp)
#define LocalWl_Alloc ((void * (*)(u32, u32))LocalWl_Alloc)
#define LocalWl_PickChannel ((s32 (*)(u32))LocalWl_PickChannel)
#define LocalWl_CompareMac ((s32 (*)(void *, void *))LocalWl_CompareMac)

s32 LocalWlMp_SetRecvBuffer(s32 idx, u32 a, u32 b) {
    BOOL r = FALSE;
    u32 t = OS_DisableInterrupts();
    Unk_ov066_022629cc_G *g = sLocalWlMp;
    Unk_ov066_022629cc_E *p;
    if (g != NULL && (p = g->recvEntries) != NULL && sLocalWlSession != NULL && idx < (s32)sLocalWl->maxMembers) {
        if ((g->recvActiveMask & (1 << idx)) == 0) {
            p[idx].a = a;
            r = TRUE;
            p[idx].b = b;
        }
    }
    OS_RestoreInterrupts(t);
    return r;
}

void LocalWlBcn_Init(Unk_ov066_022629cc_Ent *o, u32 id, s32 n) {
    volatile s32 z;
    s32 i;
    s32 size = n * 0xe0;
    o->listId = id;
    o->numUsed = 0;
    o->capacity = n;
    o->unk_0c = NULL;
    o->entries = (Unk_ov066_022629cc_Rec *)LocalWl_Alloc(size, 0x20);
    o->alarms = (Unk_ov066_022629cc_Sub *)LocalWl_Alloc(n * 0x2c, 0x20);
    z = 0;
    MIi_CpuClearFast(z, o->entries, size);
    DC_StoreRange(o->entries, size);
    for (i = 0; i < n; i++) {
        OS_CreateAlarm(&o->alarms[i]);
    }
}

void LocalWlBcn_Free(Unk_ov066_022629cc_Ent *o) {
    o->numUsed = 0;
    o->capacity = 0;
    func_02114ef4(o->listId + 0x80);
    LocalWl_Free(o->alarms);
    LocalWl_Free(o->entries);
}

s32 LocalWlBcn_Add(Unk_ov066_022629cc_Ent *o, s32 a, u8 *b, u32 c, u16 d, void *e) {
    u8 v8;
    Unk_ov066_022629cc_Rec *r;
    s32 i;
    u32 t;
    u32 v = d;
    s32 i2;
    if (v > 0xff) {
        v = 0xff;
    }
    v8 = v;
    if (o->numUsed != 0) {
        for (i = 0; i < o->capacity; i++) {
            Unk_ov066_022629cc_Rec *r = &o->entries[i];
            if (r->inUse == 1 && LocalWl_CompareMac(r->macAddr, b) == 0) {
                s32 j, sum, k;
                u32 soff;
                u8 nw;
                u8 *p;
                OS_CancelAlarm(&o->alarms[i]);
                t = OS_DisableInterrupts();
                o->entries[i].tag = c;
                p = &o->entries->linkLevelPos;
                k = (u8)(p[i * 0xe0] + 1);
                nw = k % 6;
                p[i * 0xe0] = nw;
                o->entries[i].linkLevels[nw] = v8;
                sum = 0;
                for (j = 0; j < 6; j++) {
                    sum += o->entries[i].linkLevels[j];
                }
                o->entries[i].linkLevel = sum / 6;
                MIi_CpuCopyFast(e, o->entries[i].bssDesc, 0xc0);
                DC_StoreRange(o->entries[i].bssDesc, 0xc0);
                OS_RestoreInterrupts(t);
                soff = i * 0x2c;
                OS_SetAlarm((u8 *)o->alarms + soff, a * 0x82ea / 64, (void *)LocalWlBcn_OnExpire, &o->entries[i]);
                func_02114f74((u8 *)o->alarms + soff, o->listId + 0x80);
                return TRUE;
            }
        }
    }
    i2 = 0;
    if (i2 < *(volatile u8 *)&o->capacity) {
    r = o->entries;
    do {
        if (r->inUse == 0) {
            s32 j, q;
            u32 off;
            t = OS_DisableInterrupts();
            o->numUsed = o->numUsed + 1;
            r->inUse = 1;
            r->macAddr[0] = b[0];
            r->macAddr[1] = b[1];
            r->macAddr[2] = b[2];
            r->macAddr[3] = b[3];
            r->macAddr[4] = b[4];
            r->macAddr[5] = b[5];
            r->tag = c;
            r->ownerList = o;
            r->linkLevelPos = 0;
            for (j = 0; j < 6; j++) {
                r->linkLevels[j] = v8;
            }
            r->linkLevel = v8;
            MIi_CpuCopyFast(e, r->bssDesc, 0xc0);
            DC_StoreRange(r->bssDesc, 0xc0);
            OS_RestoreInterrupts(t);
            OS_CancelAlarm(&o->alarms[i2]);
            off = i2 * 0xe0;
            OS_SetAlarm(&o->alarms[i2], a * 0x82ea / 64, (void *)LocalWlBcn_OnExpire, (u8 *)o->entries + off);
            func_02114f74(&o->alarms[i2], o->listId + 0x80);
            if (o->unk_0c != NULL) {
                o->unk_0c((Unk_ov066_022629cc_Rec *)((u8 *)o->entries + off));
            }
            return TRUE;
        }
        i2++;
        r++;
    } while (i2 < *(volatile u8 *)&o->capacity);
    }
    return FALSE;
}

void LocalWlBcn_OnExpire(Unk_ov066_022629cc_Rec *r) {
    Unk_ov066_022629cc_Ent *o = r->ownerList;
    if (r->inUse != 1) {
        return;
    }
    o->numUsed = o->numUsed - 1;
    r->inUse = 0;
    if (o->unk_0c != NULL) {
        o->unk_0c(r);
    }
}

u32 LocalWlBcn_Count(Unk_ov066_022629cc_Ent *o) {
    return o->numUsed;
}

Unk_ov066_022629cc_Rec *LocalWlBcn_Get(Unk_ov066_022629cc_Ent *o, u32 i) {
    if (i < o->capacity) {
        return &o->entries[i];
    }
    return NULL;
}

void LocalWlBcn_CancelAlarms(Unk_ov066_022629cc_Ent *o) {
    func_02114ef4(o->listId + 0x80);
}

void LocalWlBcn_Clear(Unk_ov066_022629cc_Ent *o) {
    volatile s32 z;
    u32 n;
    LocalWlBcn_CancelAlarms(o);
    o->numUsed = 0;
    n = *(volatile u8 *)&o->capacity;
    z = 0;
    MIi_CpuClearFast(z, o->entries, n * 0xe0);
    DC_StoreRange(o->entries, o->capacity * 0xe0);
}

void LocalWlBcn_RefreshTimeouts(Unk_ov066_022629cc_Ent *o, s32 x) {
    s32 i = 0;
    if (i < o->capacity) {
        s32 q = x * 0x82ea / 64;
        do {
            if (o->entries[i].inUse == 1) {
                OS_CancelAlarm(&o->alarms[i]);
                OS_SetAlarm(&o->alarms[i], q, (void *)LocalWlBcn_OnExpire, &o->entries[i]);
                func_02114f74(&o->alarms[i], o->listId + 0x80);
            }
            i++;
        } while (i < o->capacity);
    }
}

s32 LocalWl_MeasureNextChannel(u32 i) {
    if (i < 0xe) {
        do {
            if (sLocalWlSession->allowedChannelMask & (1 << i)) {
                if (LocalWl_MeasureChannel((u16)(i + 1)) != 0) {
                    return TRUE;
                }
            }
            i = (u16)(i + 1);
        } while (i < 0xe);
    }
    return FALSE;
}

void LocalWl_UpdateAllowedChannels(void) {
    u32 r = WM_GetAllowedChannel();
    if (r == 0) {
        LocalWl_SetError(0x41);
        return;
    }
    sLocalWlSession->allowedChannelMask = r;
    r = MATH_CountPopulation();
    sLocalWlSession->numAllowedChannels = r;
}

u32 LocalWl_NextAllowedChannel(u32 a) {
    u32 idx = a;
    u32 n = 0;
    do {
        idx = (u16)(idx + 1);
        if (idx > 0xe) {
            idx = 1;
        }
        if (sLocalWlSession->allowedChannelMask & (1 << (idx - 1))) {
            return idx;
        }
        n = (u16)(n + 1);
    } while (n < 0xe);
    return a;
}

s32 LocalWl_MeasureChannel(u32 a) {
    s32 r = func_021218d0((void *)LocalWl_OnMeasureChannel, 3, 0x11, a, 0x1e);
    if (r == 2) {
        return TRUE;
    }
    LocalWl_SetError(r);
    return FALSE;
}

void LocalWl_OnMeasureChannel(Unk_ov066_022629cc_Msg *m) {
    if (m->errcode == 0) {
        u16 a = m->busyRatio;
        u16 b = m->channel;
        if (data_ov066_022647c4 > a) {
            data_ov066_022647c4 = a;
            data_ov066_022647c0 = 1 << (b - 1);
            data_ov066_022647bc = 1;
        } else if (data_ov066_022647c4 == a) {
            data_ov066_022647c0 = data_ov066_022647c0 | (1 << (b - 1));
            data_ov066_022647bc = data_ov066_022647bc + 1;
        }
        if (LocalWl_PickChannel(b) != 0) {
            sLocalWl->state = 4;
            if (sLocalWl->channel == 0xfe) {
                sLocalWlSession->flags &= ~0x80;
            }
            LocalWl_Advance();
        }
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_StartMeasureChannels(void) {
    sLocalWl->state = 5;
    data_ov066_022647bc = 0;
    data_ov066_022647c0 = 0;
    data_ov066_022647c4 = 0x65;
    sLocalWlSession->channel = 0;
    LocalWl_PickChannel(0);
}
#undef sLocalWl
#undef sLocalWlSession
#undef data_ov066_022647bc
#undef data_ov066_022647c0
#undef data_ov066_022647c4
#undef sLocalWlMp
#undef LocalWl_Alloc
#undef LocalWl_PickChannel
#undef LocalWl_CompareMac

// ---- unk_02262074
#define sLocalWl (*(Unk_ov066_02262074_A * *)&sLocalWl)
#define sLocalWlSession (*(Unk_ov066_02262074_B * *)&sLocalWlSession)
#define data_ov066_022647bc (*(u8 *)&data_ov066_022647bc)
#define data_ov066_022647c0 (*(u16 *)&data_ov066_022647c0)
#define MI_CpuFill8 ((void (*)(void *, s32, s32))MI_CpuFill8)
#define LocalWl_Alloc ((void * (*)(s32, s32))LocalWl_Alloc)
#define LocalWl_ReadBe32 ((u32 (*)(void *))LocalWl_ReadBe32)
#define LocalWl_StartConnect ((void (*)(void *))LocalWl_StartConnect)
#define LocalWl_MeasureNextChannel ((s32 (*)(void))LocalWl_MeasureNextChannel)

s32 LocalWl_PickChannel(void) {
    if (LocalWl_MeasureNextChannel() == 0) {
        if (data_ov066_022647bc != 0) {
            u8 i = 0;
            u32 t = LocalWl_Rand();
            u32 sel = (u8)(t % data_ov066_022647bc);
            u16 m = data_ov066_022647c0;
            do {
                if ((m & (1 << i)) != 0) {
                    if (sel != 0) {
                        sel = (u8)(sel - 1);
                    } else {
                        sLocalWlSession->channel = i + 1;
                        return 1;
                    }
                }
                i = i + 1;
            } while (i < 14);
        }
    }
    return 0;
}

void LocalWl_ResetSessionInfo(void) {
    u8 buf[6];
    sLocalWlSession->myAid = 0xffff;
    sLocalWlSession->numMembers = 1;
    sLocalWlSession->flags.f0 = 0;
    sLocalWlSession->flags.f1 = 0;
    sLocalWlSession->flags.f2 = 0;
    sLocalWlSession->flags.f3 = 0;
    sLocalWlSession->flags.f4 = 0;
    sLocalWlSession->flags.f5 = 0;
    sLocalWlSession->flags.f6 = 0;
    sLocalWlSession->flags.f10 = 0;
    if ((u8)(sLocalWl->channel + 2) <= 1) {
        sLocalWlSession->flags.f7 = 1;
        sLocalWlSession->channel = 0;
        sLocalWlSession->scanChannel = 0;
        sLocalWlSession->fixedChannel = 0;
    } else {
        sLocalWlSession->flags.f7 = 0;
        sLocalWlSession->channel = sLocalWl->channel;
        sLocalWlSession->scanChannel = 0;
        sLocalWlSession->fixedChannel = sLocalWl->channel;
    }
    MI_CpuFill8(buf, 0, 6);
    s32 i;
    Unk_ov066_02262074_Row *e = (Unk_ov066_02262074_Row *)sLocalWlSession;
    for (i = 0; i < 16; i++) {
        e->e = *(Unk_ov066_02262074_Ent *)buf;
        e = (Unk_ov066_02262074_Row *)((u8 *)e + 6);
    }
}

void LocalWl_AllocBuffers(void) {
    sLocalWlSession->parentParam = (Unk_ov066_02262074_Rec *)LocalWl_Alloc(0x40, 0x20);
    sLocalWlSession->gameInfo = (Unk_ov066_02262074_Rec2 *)LocalWl_Alloc(0x70, 0x20);
    sLocalWlSession->gameInfoLength = 8;
    u32 a = ((sLocalWl->recvChildSize + 0xe) * sLocalWl->maxChildren + 0x29) & ~0x1f;
    u32 b = (sLocalWl->recvParentSize + 0x55) & ~0x1f;
    u16 x = (u16)(a << 1);
    u16 y = (u16)(b << 1);
    if (x <= y) {
        x = y;
    }
    sLocalWlSession->recvBufSize = x;
    sLocalWlSession->recvBuf = LocalWl_Alloc(sLocalWlSession->recvBufSize, 0x20);
    a = (sLocalWl->parentMaxSize + 0x23) & ~0x1f;
    b = (sLocalWl->childMaxSize + 0x21) & ~0x1f;
    x = (u16)a;
    y = (u16)b;
    if (x <= y) {
        x = y;
    }
    sLocalWlSession->sendBufSize = x;
    sLocalWlSession->sendBuf = LocalWl_Alloc(sLocalWlSession->sendBufSize, 0x20);
    sLocalWlSession->controlBuf = LocalWl_Alloc(sLocalWl->childMaxSize * 2, 0x20);
    sLocalWlSession->recvCallback = 0;
    LocalWl_AllocScanWork();
    OS_GetMacAddress(sLocalWlSession->myMac);
    sLocalWlRandSeed = LocalWl_ReadBe32(sLocalWlSession->unk_24);
    sLocalWl->state = 2;
    sLocalWl->requestedMode = 0;
    LocalWl_ResetSessionInfo();
}

void LocalWl_InitWm(void) {
    if (sLocalWlSession != NULL) {
        return;
    }
    sLocalWlSession = (Unk_ov066_02262074_B *)LocalWl_Alloc(0xc4, 4);
    sLocalWlSession->wmBuf = (Unk_ov066_02262074_Buf *)LocalWl_Alloc(0xf00, 0x20);
    if (WM_Init(sLocalWlSession->wmBuf, sLocalWl->dmaNo) == 0) {
        LocalWl_AllocBuffers();
        return;
    }
    LocalWl_Free(sLocalWlSession->wmBuf);
}

void LocalWl_FinishWm(void) {
    if (sLocalWl->state == 2) {
        if (func_0211f188() != 0) {
            return;
        }
        LocalWl_FreeScanWork();
        LocalWl_Free(sLocalWlSession->controlBuf);
        LocalWl_Free(sLocalWlSession->sendBuf);
        LocalWl_Free(sLocalWlSession->recvBuf);
        LocalWl_Free(sLocalWlSession->gameInfo);
        LocalWl_Free(sLocalWlSession->parentParam);
        LocalWl_Free(sLocalWlSession->wmBuf);
        LocalWl_Free(sLocalWlSession);
        sLocalWlSession = NULL;
        sLocalWl->state = 1;
    } else {
        LocalWl_SetError(0x44);
    }
}

void LocalWl_StartSession(void) {
    LocalWl_SetBeaconFilter(0);
    sLocalWlSession->flags.f2 = 0;
    sLocalWlSession->resetHook();
    sLocalWlSession->flags.f0 = 0;
    sLocalWlSession->flags.f1 = 0;
    sLocalWlSession->roleTurnTarget = 0;
    sLocalWlSession->roleTurnCount = 0;
    sLocalWlSession->scanSlot = 0;
    sLocalWlSession->readyMask = 0;
    LocalWl_ClearMembers();
    LocalWl_UpdateAllowedChannels();
}

u32 LocalWl_Rand(void) {
    u32 t = sLocalWlRandSeed * 0x5eedf715 + 0x1b0cb173;
    sLocalWlRandSeed = t;
    return t;
}

u32 LocalWl_GetMyAid(void) {
    if (sLocalWlSession != NULL) {
        return sLocalWlSession->myAid;
    }
    return 0xffff;
}

u32 LocalWl_GetConnectedMask(void) {
    if (LocalWl_GetState() != 10) {
        return 0;
    }
    Unk_ov066_02262074_Data *d = (Unk_ov066_02262074_Data *)((Unk_ov066_02262074_B *)sLocalWlSession)->wmBuf->unk_04;
    DC_InvalidateRange(&d->connectedMask, 2);
    return d->connectedMask;
}

s32 LocalWl_IsReadyToSend(void) {
    if (sLocalWlSession != NULL) {
        if (sLocalWlSession->isReadyToSendHook != NULL) {
            return sLocalWlSession->isReadyToSendHook();
        }
    }
    return 0;
}

s32 LocalWl_Send(u32 a, u32 b, u32 c, u32 d) {
    if (sLocalWlSession != NULL) {
        if (sLocalWlSession->sendHook != NULL) {
            return sLocalWlSession->sendHook(a, b, c, d);
        }
    }
    return 0;
}

void LocalWl_BuildGameInfo(u32 a, u32 b) {
    Unk_ov066_02262074_Rec2 *r = sLocalWlSession->gameInfo;
    if (a != 0xe34d) {
        r->tag = a;
    }
    sLocalWlRandSeed = sLocalWlRandSeed * 0x5eedf715 + 0x1b0cb173;
    r->nonce = sLocalWlRandSeed;
    r->scanSlot = sLocalWlSession->scanSlot;
    r->memberCount = b;
    r->version = 5;
}

void LocalWl_BuildParentParameter(u32 a) {
    Unk_ov066_02262074_Rec *r = sLocalWlSession->parentParam;
    sLocalWlSession->numMembers = 1;
    LocalWl_BuildGameInfo(a, 1);
    r->userGameInfo = sLocalWlSession->gameInfo;
    r->userGameInfoLength = sLocalWlSession->gameInfoLength;
    r->ggid = sLocalWl->ggid;
    sLocalWlRandSeed = sLocalWlRandSeed * 0x5eedf715 + 0x1b0cb173;
    sLocalWlSession->tgid = sLocalWlRandSeed;
    r->tgid = sLocalWlSession->tgid;
    r->entryFlag = 1;
    r->unk_12 = 0;
    r->unk_14 = 0;
    r->unk_16 = 0;
    r->maxChildren = sLocalWl->maxChildren;
    r->beaconPeriod = WM_GetDispersionBeaconPeriod();
    r->channel = sLocalWlSession->channel;
    r->parentMaxSize = sLocalWl->parentMaxSize;
    r->childMaxSize = sLocalWl->childMaxSize;
}

void LocalWl_BeginParent(u32 a) {
    sLocalWl->state = 6;
    sLocalWlSession->numBeaconsSent = 0;
    LocalWl_BuildParentParameter(a);
    LocalWl_SetParentParameter();
}

void LocalWl_ConnectToSelected(void) {
    LocalWl_ConnectToBeacon(sLocalWlSession->selectedBeacon, 0);
}

void LocalWl_ConnectToBeacon(u8 *p, u32 v) {
    if (sLocalWl->state != 4) {
        return;
    }
    if (p == NULL) {
        return;
    }
    sLocalWl->state = 8;
    {
        u32 w = v & 1;
        u32 c = *(u32 *)&sLocalWlSession->flags;
        *(u32 *)&sLocalWlSession->flags = (c & ~0x40) | (w << 6);
    }
    LocalWl_StartConnect(p + 0x20);
}
#undef sLocalWl
#undef sLocalWlSession
#undef data_ov066_022647bc
#undef data_ov066_022647c0
#undef MI_CpuFill8
#undef LocalWl_Alloc
#undef LocalWl_ReadBe32
#undef LocalWl_StartConnect
#undef LocalWl_MeasureNextChannel

// ---- unk_02261764
#define sLocalWl (*(Unk_ov066_02261764_S * *)&sLocalWl)
#define sLocalWlSession (*(Unk_ov066_02261764_V * *)&sLocalWlSession)
#define MI_CpuFill8 ((s32 (*)(void *, u32, u32))MI_CpuFill8)
#define LocalWl_ApplyMemberTable ((void (*)(u8 *))LocalWl_ApplyMemberTable)

s32 LocalWl_SetGameInfo(void *a, u32 n) {
    if (sLocalWlSession != NULL && n <= 0x68) {
        u8 *p = (u8 *)sLocalWlSession->gameInfo;
        sLocalWlSession->flags.f4 = 1;
        MI_CpuCopy8(a, p + 8, n);
        p[7] = n;
        sLocalWlSession->gameInfoLength = (n + 9) & ~1;
        return TRUE;
    }
    return FALSE;
}

void LocalWl_SetMember(u32 idx, u8 *src) {
    u8 buf[6];
    u8 *r;
    if (src != NULL) {
        MI_CpuCopy8(src, buf, 6);
    } else {
        MI_CpuFill8(buf, 0, 6);
    }
    r = (u8 *)sLocalWlSession + idx * 6;
    *(Unk_ov066_02261764_R6 *)(r + 0x28) = *(Unk_ov066_02261764_R6 *)buf;
    LocalWl_CountMembers();
}

void LocalWl_SendReady(void) {
    Unk_ov066_02261764_Hdr h;
    u32 seed;
    seed = sLocalWlRandSeed * 0x5eedf715 + 0x1b0cb173;
    h.a = 2;
    h.b = 8;
    sLocalWlRandSeed = seed;
    h.c = seed;
    MI_CpuCopy8(&h, sLocalWlSession->controlBuf, 8);
    sLocalWlSession->sendControlHook(sLocalWlSession->controlBuf, 8, 1, 0);
}

void LocalWl_SendMemberTable(void) {
    Unk_ov066_02261764_Hdr h;
    u32 seed;
    if (sLocalWlSession->flags.f0 != 0) {
        sLocalWlSession->flags.f1 = 1;
        return;
    }
    sLocalWlSession->flags.f0 = 1;
    sLocalWlSession->flags.f1 = 0;
    h.a = 0;
    h.b = 0x68;
    seed = sLocalWlRandSeed * 0x5eedf715 + 0x1b0cb173;
    sLocalWlRandSeed = seed;
    h.c = seed;
    MI_CpuCopy8(&h, sLocalWlSession->controlBuf, 8);
    MI_CpuCopy8(sLocalWlSession->memberMacs, sLocalWlSession->controlBuf + 8, 0x60);
    sLocalWlSession->sendControlHook(sLocalWlSession->controlBuf, 0x68, 0xffff, LocalWl_OnMemberTableSent);
}

void LocalWl_OnMemberTableSent(void) {
    sLocalWlSession->flags.f0 = 0;
    if (sLocalWlSession->flags.f1 == 0) {
        return;
    }
    LocalWl_SendMemberTable();
}

void LocalWl_MergeMemberTable(u8 *a, u8 *b) {
    u16 i = 0;
    do {
        BOOL ra = LocalWl_IsMacSet(a + i * 6);
        BOOL rb = LocalWl_IsMacSet(b + i * 6);
        *(Unk_ov066_02261764_R6 *)(a + i * 6) = *(Unk_ov066_02261764_R6 *)(b + i * 6);
        if (ra == 0 && rb != 0) {
            LocalWl_PostEvent(0, i);
        }
        if (ra != 0 && rb == 0) {
            LocalWl_PostEvent(1, i);
        }
        i++;
    } while (i < 16);
}

void LocalWl_CountMembers(void) {
    s32 i;
    u8 n;
    s32 off;
    n = 0;
    i = 0;
    off = 0;
    do {
        if (LocalWl_IsMacSet(sLocalWlSession->memberMacs + off) != 0) {
            n++;
        }
        i++;
        off += 6;
    } while (i < 16);
    sLocalWlSession->numMembers = n;
}

void LocalWl_ClearMembers(void) {
    MI_CpuFill8(sLocalWlSession->memberMacs, 0, 0x60);
}

void LocalWl_OnControlRecv(Unk_ov066_02261764_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (LocalWl_CheckEndRequest() != 0) {
        return;
    }
    if (sLocalWlSession->myAid == 0) {
        LocalWl_OnParentControl(m);
        return;
    }
    LocalWl_OnChildControl(m);
}

void LocalWl_CallMemberLeftCb(u32 a) {
    if (sLocalWlSession->memberLeftHook == NULL) {
        return;
    }
    sLocalWlSession->memberLeftHook(a);
}

void LocalWl_OnBeaconSent(void) {
    if (sLocalWlSession->flags.f4 != 0) {
        LocalWl_BuildGameInfo(0xe34d, sLocalWlSession->numMembers);
        LocalWl_UpdateGameInfo();
        sLocalWlSession->flags.f4 = 0;
    }
    if (sLocalWl->state != 6) {
        return;
    }
    sLocalWlSession->numBeaconsSent++;
    if (sLocalWlSession->numBeaconsSent < sLocalWl->parentWaitBeacons) {
        return;
    }
    LocalWl_Advance();
}

void LocalWl_OnChildJoined(Unk_ov066_02261764_Msg *m) {
    sLocalWlSession->flags.f4 = 1;
    if (sLocalWl->state == 6) {
        sLocalWl->state = 9;
        sLocalWlSession->myAid = 0;
        LocalWl_ClearMembers();
        sLocalWlSession->flags.f5 = 1;
        LocalWl_BuildGameInfo(0xbd8a, sLocalWlSession->numMembers);
        LocalWl_UpdateGameInfo();
    }
    LocalWl_SetMember(m->unk_10, (u8 *)&m->unk_0a);
    LocalWl_PostEvent(0, m->unk_10);
    if (sLocalWlSession->numMembers < sLocalWl->maxMembers) {
        return;
    }
    LocalWl_SetEntry(0);
}

void LocalWl_OnChildLeft(Unk_ov066_02261764_Msg *m) {
    if (sLocalWlSession->numMembers == sLocalWl->maxMembers) {
        LocalWl_SetEntry(1);
    }
    sLocalWlSession->readyMask &= ~(1 << m->unk_10);
    LocalWl_SetMember(m->unk_10, 0);
    LocalWl_PostEvent(1, m->unk_10);
    if (sLocalWlSession->numMembers <= 1) {
        if (sLocalWlSession->flags.f2 != 0) {
            return;
        }
        sLocalWlSession->resetHook();
        sLocalWlSession->flags.f0 = 0;
        sLocalWlSession->flags.f1 = 0;
    } else {
        LocalWl_CallMemberLeftCb(m->unk_10);
        LocalWl_SendMemberTable();
        sLocalWlSession->flags.f4 = 1;
    }
}

void LocalWl_OnParentControl(Unk_ov066_02261764_Msg *m) {
    u16 b[4];
    if (m->unk_10 == 0) {
        return;
    }
    MI_CpuCopy8(m->data, b, 4);
    if (b[0] == 0) {
        return;
    }
    if (b[0] == 1) {
        return;
    }
    if (b[0] != 2) {
        return;
    }
    LocalWl_OnChildReady(m->aid, m->data);
}

void LocalWl_OnChildReady(u32 idx, u8 *src) {
    u8 buf[8];
    MI_CpuCopy8(src, buf, 8);
    sLocalWlSession->readyMask |= 1 << idx;
    LocalWl_SendMemberTable();
}

void LocalWl_OnChildConnected(Unk_ov066_02261764_Msg *m) {
    sLocalWl->state = 9;
    sLocalWlSession->myAid = m->unk_0a;
    LocalWl_StartMp();
}

void LocalWl_OnChildEvent8Stub(void) {
}

void LocalWl_OnParentLost(void) {
    sLocalWl->state = 4;
    sLocalWlSession->resetHook();
    if (sLocalWl->flags.f8 != 0) {
        LocalWl_SetMember(0, 0);
    }
    if (sLocalWlSession->flags.f2 == 0) {
        LocalWl_Abort();
    }
    LocalWl_PostEvent(2, 0);
}

void LocalWl_OnChildControl(Unk_ov066_02261764_Msg *m) {
    u16 b[4];
    if (m->unk_10 == 0) {
        return;
    }
    MI_CpuCopy8(m->data, b, 4);
    switch (b[0]) {
    case 0:
        LocalWl_ApplyMemberTable(m->data);
        break;
    case 1:
        return;
    case 2:
        break;
    }
}
#undef sLocalWl
#undef sLocalWlSession
#undef MI_CpuFill8
#undef LocalWl_ApplyMemberTable

// ---- unk_02260e18
#define sLocalWl (*(Unk_ov066_02260e18_S * *)&sLocalWl)
#define sLocalWlSession (*(Unk_ov066_02260e18_V * *)&sLocalWlSession)
#define OS_DisableInterrupts ((s32 (*)(void))OS_DisableInterrupts)
#define OS_RestoreInterrupts ((s32 (*)(s32))OS_RestoreInterrupts)
#define LocalWl_SetMember ((void (*)(u32, void *))LocalWl_SetMember)
#define LocalWl_OnChildConnected ((void (*)(void *))LocalWl_OnChildConnected)
#define LocalWl_OnChildEvent8Stub ((void (*)(void *))LocalWl_OnChildEvent8Stub)
#define LocalWl_OnParentLost ((void (*)(void *))LocalWl_OnParentLost)
#define LocalWl_OnBeaconSent ((void (*)(void *))LocalWl_OnBeaconSent)
#define LocalWl_OnChildJoined ((void (*)(void *))LocalWl_OnChildJoined)
#define LocalWl_OnChildLeft ((void (*)(void *))LocalWl_OnChildLeft)
#define LocalWl_MergeMemberTable ((void (*)(void *, void *))LocalWl_MergeMemberTable)
#define LocalWl_OnConnectFailReset ((void (*)(void))LocalWl_OnConnectFailReset)

void LocalWl_ApplyMemberTable(void *m) {
    u8 buf[8];
    MI_CpuCopy8(m, buf, 8);
    LocalWl_MergeMemberTable((u8 *)sLocalWlSession + 0x28, (u8 *)m + 8);
    LocalWl_CountMembers();
    if (sLocalWl->state == 9) {
        sLocalWl->state = 11;
    }
    LocalWl_Advance();
}

void LocalWl_RequestEnd(void) {
    s32 t = OS_DisableInterrupts();
    Unk_ov066_02260e18_V *v = sLocalWlSession;
    if (v->flags.f3 == 0) {
        v->flags.f2 = 1;
    }
    OS_RestoreInterrupts(t);
}

s32 LocalWl_CheckEndRequest(void) {
    if (sLocalWlSession->flags.f2 != 0 && sLocalWlSession->flags.f3 == 0) {
        LocalWl_EndMp();
        sLocalWlSession->flags.f3 = 1;
        sLocalWlSession->flags.f2 = 0;
        return 1;
    }
    return 0;
}

void LocalWl_SetParentParameter(void) {
    s32 r = WM_SetParentParameter((void *)LocalWl_OnSetParentParameter, sLocalWlSession->parentParam);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnSetParentParameter(Unk_ov066_02260e18_Msg *m) {
    if (m->errcode == 0) {
        LocalWl_StartParentNow();
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_StartParentNow(void) {
    s32 r = WM_StartParent((void *)LocalWl_OnParentEvent);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnParentEvent(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        switch (m->event) {
        case 0:
            break;
        case 2:
            LocalWl_OnBeaconSent(m);
            break;
        case 7:
            LocalWl_OnChildJoined(m);
            break;
        case 9:
            if (sLocalWlSession->flags.f2 != 0) {
                LocalWl_Abort();
            } else {
                LocalWl_OnChildLeft(m);
            }
            break;
        }
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_EndParent(void) {
    s32 r = WM_EndParent((void *)LocalWl_OnEndParent);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnEndParent(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        sLocalWl->state = 4;
        if (sLocalWlSession->flags.f3 != 0) {
            LocalWl_ResetSessionInfo();
        }
        LocalWl_Advance();
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_StartConnect(u32 a) {
    s32 r = func_0211fcbc((void *)LocalWl_OnChildConnectEvent, a, 0, 1, 0);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnChildConnectEvent(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        switch (m->event) {
        case 6:
            break;
        case 7:
            LocalWl_OnChildConnected(m);
            break;
        case 8:
            LocalWl_OnChildEvent8Stub(m);
            break;
        case 9:
            if (sLocalWlSession->flags.f2 != 0) {
                LocalWl_Abort();
            } else {
                LocalWl_OnParentLost(m);
            }
            break;
        default:
            LocalWl_SetError(0x10);
            break;
        }
    } else if (m->errcode == 1) {
        if (sLocalWlSession->flags.f6 != 0) {
            LocalWl_Reset((void *)LocalWl_OnConnectFailReset);
        } else {
            LocalWl_Abort();
        }
    } else {
        LocalWl_SetError(m->errcode);
    }
}

s32 LocalWl_Disconnect(u32 a) {
    s32 r = WM_Disconnect((void *)LocalWl_OnDisconnect, a);
    if (r == 2) {
        return 1;
    }
    LocalWl_SetError(r);
    return 0;
}

void LocalWl_OnDisconnect(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        sLocalWl->state = 4;
        LocalWl_ResetSessionInfo();
        LocalWl_Advance();
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_UpdateGameInfo(void) {
    Unk_ov066_02260e18_S *s = sLocalWl;
    u32 t = s->maxMembers;
    u32 f = (*(Unk_ov066_02260e18_V *volatile *)&sLocalWlSession)->numMembers < t;
    Unk_ov066_02260e18_V *v = *(Unk_ov066_02260e18_V *volatile *)&sLocalWlSession;
    s32 r = WM_SetGameInfo((void *)LocalWl_OnSetGameInfo, v->gameInfo, v->gameInfoLength, s->ggid, v->tgid, f);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnSetGameInfo(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        if (sLocalWlSession->flags.f5 == 0) {
            return;
        }
        LocalWl_StartMp();
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_StartMp(void) {
    s32 r = func_021206b4((void *)LocalWl_OnMpEvent, sLocalWlSession->recvBuf, sLocalWlSession->recvBufSize,
                          sLocalWlSession->sendBuf, sLocalWlSession->sendBufSize, sLocalWl->mpFreq, 4,
                          sLocalWl->flags.f0, sLocalWl->flags.f1, 1,
                          sLocalWl->flags.f2);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnMpEvent(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        switch (m->mpEvent) {
        case 10:
            sLocalWlSession->flags.f5 = 0;
            sLocalWl->flags.f12 = 1;
            sLocalWlSession->resetHook();
            sLocalWlSession->flags.f0 = 0;
            sLocalWlSession->flags.f1 = 0;
            if (sLocalWlSession->myAid == 0) {
                LocalWl_SetMember(0, &sLocalWlSession->myMac[0]);
                if (sLocalWl->state != 10) {
                    sLocalWl->state = 10;
                }
                LocalWl_SendMemberTable();
                LocalWl_Advance();
            } else {
                LocalWl_SendReady();
            }
            break;
        case 11:
            LocalWl_CheckEndRequest();
            if (sLocalWlSession->parentSendHook != NULL) {
                sLocalWlSession->parentSendHook();
            }
            break;
        case 12:
            LocalWl_CheckEndRequest();
            break;
        case 13:
            if (sLocalWlSession->childSendHook != NULL) {
                sLocalWlSession->childSendHook();
            }
            break;
        }
    } else {
        if (m->errcode != 9 && m->errcode != 0xd && m->errcode != 0xf) {
            LocalWl_SetError(m->errcode);
        }
    }
}

void LocalWl_EndMp(void) {
    s32 r = WM_EndMP((void *)LocalWl_OnEndMp);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnEndMp(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        if (sLocalWlSession->flags.f3 == 0) {
            return;
        }
        if (sLocalWlSession->myAid == 0) {
            LocalWl_EndParent();
        } else {
            LocalWl_Disconnect(0);
        }
    } else {
        LocalWl_SetError(m->errcode);
    }
}

void LocalWl_SetEntry(u32 a) {
    s32 r = WM_SetEntry((void *)LocalWl_OnSetEntry, a);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnSetEntry(Unk_ov066_02260e18_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        return;
    }
    LocalWl_SetError(m->errcode);
}
#undef sLocalWl
#undef sLocalWlSession
#undef OS_DisableInterrupts
#undef OS_RestoreInterrupts
#undef LocalWl_SetMember
#undef LocalWl_OnChildConnected
#undef LocalWl_OnChildEvent8Stub
#undef LocalWl_OnParentLost
#undef LocalWl_OnBeaconSent
#undef LocalWl_OnChildJoined
#undef LocalWl_OnChildLeft
#undef LocalWl_MergeMemberTable
#undef LocalWl_OnConnectFailReset

// ---- unk_02260518
#define sLocalWl (*(Unk_ov066_02260518_A * *)&sLocalWl)
#define sLocalWlSession (*(Unk_ov066_02260518_C * *)&sLocalWlSession)
#define OS_CancelAlarm ((void (*)(void *))OS_CancelAlarm)
#define OS_CreateAlarm ((void (*)(void *))OS_CreateAlarm)
#define OS_SetAlarm ((void (*)(void *, s64, void (*)(void), u32))OS_SetAlarm)
#define OS_RestoreInterrupts ((void (*)(u32))OS_RestoreInterrupts)
#define LocalWl_Alloc ((void * (*)(u32, u32))LocalWl_Alloc)
#define LocalWl_GetBeacon ((Unk_ov066_02260518_Rec * (*)(u32, u32))LocalWl_GetBeacon)
#define LocalWl_ConnectToBeacon ((void (*)(void *, s32))LocalWl_ConnectToBeacon)
#define LocalWl_StartMeasureChannels ((void (*)(u32))LocalWl_StartMeasureChannels)
#define LocalWlBcn_RefreshTimeouts ((void (*)(void *, s32))LocalWlBcn_RefreshTimeouts)
#define LocalWlBcn_Clear ((void (*)(void *))LocalWlBcn_Clear)
#define LocalWlBcn_Free ((void (*)(void *))LocalWlBcn_Free)
#define LocalWlBcn_Init ((void (*)(void *, u8, u32))LocalWlBcn_Init)

void LocalWl_OnConnectFailReset(Unk_ov066_02260dd0_Msg *m) {
    LocalWl_ClearResetFlag();
    if (m->errcode == 0) {
        sLocalWl->state = 4;
        LocalWl_StartScanLoop(0x64);
    } else {
        LocalWl_SetError(m->errcode);
    }
}

u32 LocalWl_ReadBe32(u8 *p) {
    return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

s32 LocalWl_CompareMac(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 6; i++) {
        u32 bb = b[i];
        u32 aa = a[i];
        if (aa > bb) {
            return 1;
        }
        if (aa < bb) {
            return -1;
        }
    }
    return 0;
}

void LocalWl_StartParent(u32 v) {
    if (sLocalWlSession->flags.f7) {
        LocalWl_StartMeasureChannels(v);
    } else {
        LocalWl_BeginParent(v);
    }
}

s32 LocalWl_ConnectToParent(Unk_ov066_02260518_Rec *p, u32 a, u32 b) {
    if (p != NULL && p->inUse != 0 && (p->tag == 0x2348 || p->tag == 0xbd8a)) {
        sLocalWlSession->selectedBeacon = p;
        sLocalWlSession->flags.f9 = 1;
        return LocalWl_RequestMode(5, a, b);
    }
    return 0;
}

void LocalWl_StartScanMode(void) {
    LocalWl_StartScanLoop(0);
    LocalWl_Advance();
}

void LocalWl_NextRoleTurn(void) {
    sLocalWlSession->roleTurnCount = sLocalWlSession->roleTurnCount + 1;
    if (sLocalWlSession->roleTurnCount >= 4) {
        sLocalWlSession->roleTurnCount = 0;
        sLocalWlRandSeed = sLocalWlRandSeed * 0x5eedf715 + 0x1b0cb173;
        sLocalWlSession->roleTurnTarget = sLocalWlRandSeed & 3;
    }
}

BOOL LocalWl_JoinBestParent(void) {
    u8 i;
    Unk_ov066_02260518_Rec *best = NULL;
    i = 0;
    if (i < sLocalWl->maxBeacons) {
        do {
            Unk_ov066_02260518_Rec *e = LocalWl_GetBeacon(sLocalWlSession->scanSlot, i);
            if (e->inUse != 0) {
                if (*(volatile u16 *)&e->tag == 0xbd8a) {
                    best = e;
                    break;
                }
                if (*(volatile u16 *)&e->tag == 0x2348) {
                    if (best != NULL) {
                        if (LocalWl_CompareMac(e->macAddr, best->macAddr) != 0) {
                            best = e;
                        }
                    } else {
                        best = e;
                    }
                }
            }
            i++;
        } while (i < sLocalWl->maxBeacons);
    }
    if (best == NULL) {
        return FALSE;
    }
    LocalWl_ConnectToBeacon(best, 1);
    return TRUE;
}

void LocalWl_StepAuto(void) {
    s32 r = 0;
    if (sLocalWlSession->flags.f8) {
        if (LocalWl_GetBeaconCount(sLocalWlSession->scanSlot) > 0) {
            r = LocalWl_JoinBestParent();
        }
    }
    if (r != 0) {
        return;
    }
    if (sLocalWlSession->roleTurnCount == sLocalWlSession->roleTurnTarget) {
        switch (sLocalWl->state) {
        case 6:
            LocalWl_EndParent();
            break;
        case 4:
        case 7:
            LocalWl_NextRoleTurn();
            LocalWl_StartScanLoop(sLocalWl->scanLoopTime);
            break;
        }
    } else {
        switch (sLocalWl->state) {
        case 4:
            LocalWl_StartParent(0x2348);
        case 6:
            LocalWl_NextRoleTurn();
            break;
        }
    }
}

u8 LocalWl_GetMemberCount(void) {
    if (sLocalWlSession != NULL) {
        return sLocalWlSession->numMembers;
    }
    return 0;
}

BOOL LocalWl_IsMacSet(u8 *p) {
    if (p[0] != 0 || p[1] != 0 || p[2] != 0 || p[3] != 0 || p[4] != 0 || p[5] != 0) {
        return TRUE;
    }
    return FALSE;
}

void LocalWl_SetRecvCallback(u32 v) {
    if (sLocalWlSession == NULL) {
        return;
    }
    u32 s = OS_DisableInterrupts();
    sLocalWlSession->recvCallback = v;
    OS_RestoreInterrupts(s);
}

void LocalWl_AllocScanWork(void) {
    s32 i;
    sLocalWlScan = (Unk_ov066_02260518_B *)LocalWl_Alloc(0x70, 4);
    sLocalWlScan->scanParam = (Unk_ov066_02260518_Head *)LocalWl_Alloc(0x20, 0x20);
    sLocalWlScan->scanBuffer = (u32)LocalWl_Alloc(0xc0, 0x20);
    sLocalWlScan->beaconLists = (Unk_ov066_02260518_Elem *)LocalWl_Alloc(sLocalWl->numScanChannels << 4, 4);
    for (i = 0; i < sLocalWl->numScanChannels; i++) {
        LocalWlBcn_Init(&sLocalWlScan->beaconLists[i], i, sLocalWl->maxBeacons);
    }
    OS_CreateAlarm(&sLocalWlScan->scanTimer);
    OS_CreateAlarm(&sLocalWlScan->stopTimer);
}

void LocalWl_FreeScanWork(void) {
    s32 i;
    for (i = sLocalWl->numScanChannels - 1; i >= 0; i--) {
        LocalWlBcn_Free(&sLocalWlScan->beaconLists[i]);
    }
    LocalWl_Free(sLocalWlScan->beaconLists);
    LocalWl_Free((void *)sLocalWlScan->scanBuffer);
    LocalWl_Free(sLocalWlScan->scanParam);
    sLocalWlScan->beaconFilter = 0;
    sLocalWlScan->scanFlags.f0 = 0;
    OS_CancelAlarm(&sLocalWlScan->stopTimer);
    OS_CancelAlarm(&sLocalWlScan->scanTimer);
    LocalWl_Free(sLocalWlScan);
    sLocalWlScan = NULL;
}

void LocalWl_SetBeaconFilter(s32 v) {
    u32 s = OS_DisableInterrupts();
    sLocalWlScan->beaconFilter = v;
    OS_RestoreInterrupts(s);
}

u32 LocalWl_GetScanChannel(u32 idx) {
    u8 *p = sLocalWl->scanChannels;
    if (p != NULL) {
        return p[idx];
    }
    return LocalWl_NextAllowedChannel(sLocalWlSession->scanChannel);
}

void LocalWl_StartScanLoop(s32 t) {
    if (sLocalWl->flags.f3) {
        LocalWlBcn_Clear(&sLocalWlScan->beaconLists[sLocalWlSession->scanSlot]);
    } else {
        LocalWlBcn_RefreshTimeouts(&sLocalWlScan->beaconLists[sLocalWlSession->scanSlot], 0x1f4);
        LocalWl_SetBeaconFilter(0);
    }
    sLocalWlScan->scanFlags.f1 = 1;
    sLocalWlScan->scanFlags.f0 = 0;
    if (t != 0) {
        OS_CancelAlarm(&sLocalWlScan->scanTimer);
        OS_SetAlarm(&sLocalWlScan->scanTimer, t * 0x82ea / 64, LocalWl_OnScanTimer, 0);
    }
    LocalWl_ScanNextChannel();
}

void LocalWl_OnScanTimer(void) {
    if (sLocalWlScan->scanFlags.f0) {
        return;
    }
    LocalWl_StopScanLoop();
}

void LocalWl_ScanNextChannel(void) {
    sLocalWl->state = 7;
    LocalWl_SetupScanParam();
    LocalWl_StartScan();
    sLocalWlSession->scanSlot++;
    if (sLocalWlSession->scanSlot >= sLocalWl->numScanChannels) {
        sLocalWlSession->scanSlot = 0;
    }
}

void LocalWl_StopScanLoop(void) {
    sLocalWlScan->scanFlags.f1 = 0;
    OS_CancelAlarm(&sLocalWlScan->scanTimer);
}

void LocalWl_SetupScanParam(void) {
    Unk_ov066_02260518_Head *r = sLocalWlScan->scanParam;
    sLocalWlSession->scanChannel = LocalWl_GetScanChannel(sLocalWlSession->scanSlot);
    r->scanBuf = sLocalWlScan->scanBuffer;
    r->channel = sLocalWlSession->scanChannel;
    r->maxChannelTime = sLocalWl->scanMaxChannelTime;
    r->bssid0 = 0xff;
    r->bssid1 = 0xff;
    r->bssid2 = 0xff;
    r->bssid3 = 0xff;
    r->bssid4 = 0xff;
    r->bssid5 = 0xff;
}
#undef sLocalWl
#undef sLocalWlSession
#undef OS_CancelAlarm
#undef OS_CreateAlarm
#undef OS_SetAlarm
#undef OS_RestoreInterrupts
#undef LocalWl_Alloc
#undef LocalWl_GetBeacon
#undef LocalWl_ConnectToBeacon
#undef LocalWl_StartMeasureChannels
#undef LocalWlBcn_RefreshTimeouts
#undef LocalWlBcn_Clear
#undef LocalWlBcn_Free
#undef LocalWlBcn_Init

// ---- unk_0225faf8
#define sLocalWl (*(Unk_ov066_0225faf8_S * *)&sLocalWl)
#define sLocalWlScan (*(Unk_ov066_0225faf8_T * *)&sLocalWlScan)
#define sLocalWlSession (*(Unk_ov066_0225faf8_V * *)&sLocalWlSession)
#define DC_InvalidateRange ((s32 (*)(void *, s32))DC_InvalidateRange)
#define OS_SetAlarm ((s32 (*)(void *, s32, s32, void *, s32))OS_SetAlarm)
#define LocalWl_Alloc ((void * (*)(u32, u32))LocalWl_Alloc)
#define LocalWlBcn_CancelAlarms ((void * (*)(void *))LocalWlBcn_CancelAlarms)
#define LocalWlBcn_Get ((s32 (*)(void *, u32))LocalWlBcn_Get)
#define LocalWlBcn_Count ((s32 (*)(void *))LocalWlBcn_Count)
#define LocalWlBcn_Add ((void (*)(void *, s32, void *, u32, u32, void *))LocalWlBcn_Add)

void LocalWl_OnBeaconFound(Unk_ov066_0225faf8_Msg *m) {
    volatile u16 buf[4];
    DC_InvalidateRange(sLocalWlScan->scanBuffer, 0xc0);
    Unk_ov066_0225faf8_W *w = sLocalWlScan->scanBuffer;
    if (w->gameInfoLength == 0) {
        if (sLocalWl->flags.f4 != 0) {
            return;
        }
        LocalWlBcn_Add(sLocalWlScan->beaconLists + sLocalWlSession->scanSlot * 16, 0xfa0, &m->macAddr, 0xacce, m->linkLevel, w);
        return;
    }
    if ((w->gameInfoAttr & 1) == 0) {
        return;
    }
    MI_CpuCopy8(w->userGameInfo, (void *)buf, 8);
    DC_StoreRange((void *)buf, 8);
    if (LocalWl_FilterBeacon(m, (u8 *)buf) == 0) {
        return;
    }
    LocalWlBcn_Add(sLocalWlScan->beaconLists + sLocalWlSession->scanSlot * 16, 0xfa0, &m->macAddr, buf[0], m->linkLevel, sLocalWlScan->scanBuffer);
    if (sLocalWl->flags.f3 == 0) {
        return;
    }
    if (buf[0] == 0xbd8a) {
        LocalWl_StopScanSoon();
        return;
    }
    if (buf[0] != 0x2348) {
        return;
    }
    if (sLocalWlScan->scanFlags.f0 != 0) {
        return;
    }
    OS_CancelAlarm(&sLocalWlScan->stopTimer);
    OS_SetAlarm(&sLocalWlScan->stopTimer, 0x3d5d, 0, (void *)LocalWl_OnScanStopTimer, 0);
    sLocalWlScan->scanFlags.f0 = 1;
}

void LocalWl_OnScanStopTimer(void) {
    LocalWl_StopScanSoon();
}

void LocalWl_StopScanSoon(void) {
    sLocalWlSession->flags |= 0x100;
    OS_CancelAlarm(&sLocalWlScan->stopTimer);
    LocalWl_StopScanLoop();
}

s32 LocalWl_FilterBeacon(void *a, u8 *b) {
    Unk_ov066_0225faf8_S *s = sLocalWl;
    if (s->flags.f5 != 0) {
        if (sLocalWlScan->scanBuffer->unk_44 != s->ggid) {
            goto fail;
        }
    }
    if (s->flags.f6 != 0) {
        if (b[4] != sLocalWlSession->scanSlot) {
            goto fail;
        }
    }
    if (s->flags.f7 != 0) {
        if (b[6] != 5) {
            goto fail;
        }
    }
    if (sLocalWlScan->beaconFilter == NULL) {
        return 1;
    }
    return sLocalWlScan->beaconFilter(a);
fail:
    return 0;
}

s32 LocalWl_GetBeaconCount(u32 idx) {
    Unk_ov066_0225faf8_T *t = sLocalWlScan;
    if (t != NULL && idx < sLocalWl->numScanChannels) {
        return LocalWlBcn_Count(t->beaconLists + idx * 16);
    }
    return 0;
}

s32 LocalWl_GetBeacon(u32 idx, u32 b) {
    Unk_ov066_0225faf8_T *t = sLocalWlScan;
    if (t != NULL && idx < sLocalWl->numScanChannels) {
        return LocalWlBcn_Get(t->beaconLists + idx * 16, b);
    }
    return 0;
}

void LocalWl_StartScan(void) {
    s32 r = WM_StartScan((void *)LocalWl_OnScan, sLocalWlScan->scanParam);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnScan(Unk_ov066_0225faf8_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        if (m->scanState != 4) {
            if (m->scanState != 5) {
                return;
            }
            LocalWl_OnBeaconFound(m);
        }
        if (sLocalWlScan->scanFlags.f1 != 0) {
            LocalWl_ScanNextChannel();
            return;
        }
        LocalWlBcn_CancelAlarms(sLocalWlScan->beaconLists + sLocalWlSession->scanSlot * 16);
        LocalWl_EndScan();
        return;
    }
    LocalWl_SetError(m->errcode);
}

s32 LocalWl_EndScan(void) {
    return WM_EndScan((void *)LocalWl_OnEndScan);
}

void LocalWl_OnEndScan(Unk_ov066_0225faf8_Msg *m) {
    if (LocalWl_IsAborting() != 0) {
        return;
    }
    if (m->errcode == 0) {
        sLocalWl->state = 4;
        LocalWl_Advance();
        return;
    }
    LocalWl_SetError(m->errcode);
}

s32 LocalWl_GetState(void) {
    s32 r = 0;
    u32 irq = OS_DisableInterrupts();
    Unk_ov066_0225faf8_S *s = sLocalWl;
    if (s != NULL) {
        r = s->state;
    }
    OS_RestoreInterrupts(irq);
    return r;
}

void LocalWl_ResetSettings(u32 a) {
    sLocalWl->requestedMode = 7;
    sLocalWl->state = 1;
    sLocalWl->channel = 0xfe;
    sLocalWl->numScanChannels = 1;
    sLocalWl->maxChildren = 0;
    sLocalWl->maxMembers = 0;
    sLocalWl->maxBeacons = 0;
    sLocalWl->dmaNo = a;
    sLocalWl->scanChannels = 0;
    sLocalWl->resetRetryCount = 0;
    sLocalWl->abortRequest = 0;
    sLocalWl->doneCallback = 0;
    sLocalWl->doneCallbackArg = 0;
    sLocalWl->eventCallback = 0;
    sLocalWl->flags.f11 = 0;
    sLocalWl->flags.f10 = 0;
    sLocalWl->flags.f12 = 0;
    sLocalWl->flags.f11 = 0;
}

s32 LocalWl_Init(u32 a, void *(*b)(u32, u32), void (*c)(void *), void (*d)(u32)) {
    if (sLocalWl == NULL) {
        sLocalWlAllocHook = b;
        sLocalWlFreeHook = c;
        sLocalWlErrorHook = d;
        sLocalWl = (Unk_ov066_0225faf8_S *)LocalWl_Alloc(0x40, 4);
        if (sLocalWl != NULL) {
            OS_InitTick();
            OS_InitAlarm();
            if (func_0211f7e4() != 0) {
                LocalWl_ResetSettings(a);
                return 1;
            }
            LocalWl_SetError(0x41);
            LocalWl_Free(sLocalWl);
        }
    }
    return 0;
}

s32 LocalWl_Finish(void) {
    if (sLocalWl->state == 1) {
        sLocalWl->state = 0;
        LocalWl_Free(sLocalWl);
        sLocalWlAllocHook = NULL;
        sLocalWlFreeHook = NULL;
        sLocalWlErrorHook = NULL;
        sLocalWl = NULL;
        return 1;
    }
    LocalWl_SetError(0x44);
    return 0;
}

s32 LocalWl_IsModeReached(void) {
    s32 r = 0;
    switch (sLocalWl->requestedMode) {
    case 0:
        if (sLocalWl->state == 2) {
            r = 1;
        }
        break;
    case 1:
        if (sLocalWl->state == 3) {
            r = 1;
        }
        break;
    case 2:
        if (sLocalWl->state == 4) {
            r = 1;
        }
        break;
    case 3:
        if (sLocalWl->state == 10) {
            r = 1;
        }
        break;
    case 4:
        if (sLocalWl->state == 7) {
            r = 1;
        }
        break;
    case 5:
        if (sLocalWl->state == 11) {
            r = 1;
        }
        break;
    case 6:
        {
            s32 t = 1;
            if (sLocalWl->state != 10) {
                if (sLocalWl->state != 11) {
                    t = r;
                }
            }
            r = t;
        }
        break;
    }
    return r;
}

s32 LocalWl_RequestMode(s32 a, u32 b, u32 c) {
    if (sLocalWl == NULL) {
        return 0;
    }
    if (a >= 7 || a == sLocalWl->requestedMode) {
        return 0;
    }
    sLocalWl->requestedMode = a;
    sLocalWl->doneCallback = b;
    sLocalWl->doneCallbackArg = c;
    if (sLocalWl->flags.f11 == 0) {
        sLocalWl->flags.f11 = 1;
        LocalWl_Step();
    }
    return 1;
}

void LocalWl_StepReady(void) {
    s32 v = sLocalWl->requestedMode;
    if (v <= 0) {
        return;
    }
    LocalWl_CallPowerApi(0);
}

void LocalWl_StepEnabled(void) {
    s32 v = sLocalWl->requestedMode;
    if (v < 1) {
        LocalWl_CallPowerApi(1);
        return;
    }
    if (v <= 1) {
        return;
    }
    LocalWl_CallPowerApi(2);
}

void LocalWl_StepIdle(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
        LocalWl_CallPowerApi(3);
        break;
    case 2:
        break;
    case 3:
        LocalWl_StartParent(0xbd8a);
        break;
    case 4:
        LocalWl_StartScanMode();
        break;
    case 5:
        LocalWl_ConnectToSelected();
        break;
    case 6:
        LocalWl_StepAuto();
        break;
    }
}

void LocalWl_StepParentWaiting(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
        LocalWl_Abort();
        break;
    case 3:
        break;
    }
}
#undef sLocalWl
#undef sLocalWlScan
#undef sLocalWlSession
#undef DC_InvalidateRange
#undef OS_SetAlarm
#undef LocalWl_Alloc
#undef LocalWlBcn_CancelAlarms
#undef LocalWlBcn_Get
#undef LocalWlBcn_Count
#undef LocalWlBcn_Add

// ---- unk_ov066_0225f1a0
#define sLocalWl (*(Unk_ov066_0225f1a0_S * *)&sLocalWl)
#define sLocalWlAllocHook (*(s32 (**)(s32, s32))&sLocalWlAllocHook)

void LocalWl_StepScanning(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
        LocalWl_Abort();
        break;
    case 5:
        LocalWl_StopScanLoop();
        break;
    case 4:
        break;
    }
}

void LocalWl_StepConnecting(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
        LocalWl_Abort();
        break;
    case 5:
        break;
    }
}

void LocalWl_StepMeasuring(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
    case 2:
        LocalWl_Abort();
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        break;
    }
}

void LocalWl_StepParentMp(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        LocalWl_Abort();
        break;
    case 5:
        LocalWl_RequestEnd();
        break;
    case 3:
        break;
    }
}

void LocalWl_StepChildMp(void) {
    switch (sLocalWl->requestedMode) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        LocalWl_Abort();
        break;
    case 3:
        LocalWl_RequestEnd();
        break;
    case 5:
        break;
    }
}

void LocalWl_Step(void) {
    switch (sLocalWl->state) {
    case 2:
        LocalWl_StepReady();
        break;
    case 3:
        LocalWl_StepEnabled();
        break;
    case 4:
        LocalWl_StepIdle();
        break;
    case 6:
        LocalWl_StepParentWaiting();
        break;
    case 7:
        LocalWl_StepScanning();
        break;
    case 8:
        LocalWl_StepConnecting();
        break;
    case 5:
        LocalWl_StepMeasuring();
        break;
    case 10:
        LocalWl_StepParentMp();
        break;
    case 11:
        LocalWl_StepChildMp();
        break;
    case 0:
    case 1:
        LocalWl_SetError(0x44);
        break;
    default:
        LocalWl_Abort();
        break;
    }
}

void LocalWl_Abort(void) {
    LocalWl_ResetIfActive();
}

s32 LocalWl_IsAborting(void) {
    BOOL r = FALSE;
    if (((Unk_ov066_0225f7c8_Bits *)&sLocalWl->flags)->f != 0) {
        r = TRUE;
    } else if (sLocalWl->abortRequest == 1) {
        LocalWl_ResetIfActive();
        r = TRUE;
    }
    return r;
}

void LocalWl_ResetIfActive(void) {
    switch (sLocalWl->state) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    default:
        LocalWl_Reset((void *)LocalWl_OnReset);
        break;
    }
}

s32 LocalWl_GetLinkLevel(void) {
    switch (sLocalWl->state) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    case 10:
    case 11:
        switch (WM_GetLinkLevel()) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        return 4;
    }
    return 5;
}

s32 LocalWl_GetBeaconGameInfoSize(Unk_ov066_0225f64c_Rec *r) {
    if (r != NULL && r->gameInfoLength != 0) {
        return r->userDataSize;
    }
    return 0;
}

void *LocalWl_GetBeaconGameInfo(Unk_ov066_0225f64c_Rec *r) {
    if (r != NULL && r->gameInfoLength != 0) {
        if (LocalWl_GetBeaconGameInfoSize(r) != 0) {
            return (u8 *)((u32)r + 0x70) + 8;
        }
    }
    return NULL;
}

u32 LocalWl_IsBeaconValid(Unk_ov066_0225f1a0_Msg *m) {
    if (m != NULL) {
        return m->apiid;
    }
    return 0;
}

void LocalWl_Advance(void) {
    if (LocalWl_IsModeReached() != 0) {
        sLocalWl->flags &= ~0x800;
        if (sLocalWl->doneCallback != NULL) {
            sLocalWl->doneCallback(sLocalWl->doneCallbackArg);
            if (sLocalWl != NULL) {
                sLocalWl->doneCallback = NULL;
            }
        }
        if (sLocalWl != NULL) {
            sLocalWl->requestedMode = 7;
        }
        return;
    }
    LocalWl_Step();
}

void LocalWl_OnPowerApiDone(Unk_ov066_0225f1a0_Msg *m) {
    switch (m->apiid) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        LocalWl_OnEnable(m);
        break;
    case 4:
        LocalWl_OnDisable(m);
        break;
    case 5:
        LocalWl_OnPowerOn(m);
        break;
    case 6:
        LocalWl_OnPowerOff(m);
        break;
    }
    LocalWl_Advance();
}

void LocalWl_CallPowerApi(u32 idx) {
    s32 r = sLocalWlPowerApis[idx]((void *)LocalWl_OnPowerApiDone);
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnEnable(Unk_ov066_0225f1a0_Msg *m) {
    if (m->errcode == 0) {
        sLocalWl->state = 3;
        return;
    }
    LocalWl_SetError(m->errcode);
}

void LocalWl_OnDisable(Unk_ov066_0225f1a0_Msg *m) {
    if (m->errcode == 0) {
        sLocalWl->state = 2;
        return;
    }
    LocalWl_SetError(m->errcode);
}

void LocalWl_OnPowerOn(Unk_ov066_0225f1a0_Msg *m) {
    if (m->errcode == 0) {
        sLocalWl->state = 4;
        LocalWl_StartSession();
        return;
    }
    LocalWl_SetError(m->errcode);
}

void LocalWl_OnPowerOff(Unk_ov066_0225f1a0_Msg *m) {
    if (m->errcode == 0) {
        sLocalWl->state = 3;
        return;
    }
    LocalWl_SetError(m->errcode);
}

void LocalWl_Reset(void *p) {
    s32 r = WM_Reset();
    sLocalWl->flags |= 0x400;
    if (r == 2) {
        return;
    }
    LocalWl_SetError(r);
}

void LocalWl_OnReset(Unk_ov066_0225f1a0_Msg *m) {
    sLocalWl->abortRequest = 0;
    LocalWl_ClearResetFlag();
    if (m->errcode == 0) {
        sLocalWl->resetRetryCount = 0;
        sLocalWl->state = 4;
        LocalWl_Advance();
        return;
    }
    sLocalWl->resetRetryCount++;
    if (sLocalWl->resetRetryCount > 0x10) {
        LocalWl_SetError(m->errcode);
        return;
    }
    LocalWl_Reset((void *)LocalWl_OnReset);
}

void LocalWl_ClearResetFlag(void) {
    sLocalWl->flags &= ~0x400;
}

s32 LocalWl_Alloc(s32 a, s32 b) {
    if (sLocalWlAllocHook != NULL) {
        s32 r = sLocalWlAllocHook(a, b);
        if (r != 0) {
            return r;
        }
    }
    LocalWl_SetError(0x42);
    return 0;
}

void LocalWl_Free(void *p) {
    if (sLocalWlFreeHook == NULL) {
        return;
    }
    if (p == NULL) {
        return;
    }
    sLocalWlFreeHook(p);
}

void LocalWl_SetError(u32 v) {
    sLocalWl->state = v | 0x80;
    sLocalWl->flags &= ~0x800;
    if (sLocalWlErrorHook == NULL) {
        return;
    }
    sLocalWlErrorHook(v);
}

void LocalWl_CallEventCallback(void *p) {
    if (sLocalWl == NULL) {
        return;
    }
    if (sLocalWl->eventCallback == NULL) {
        return;
    }
    sLocalWl->eventCallback(p);
}

void LocalWl_PostEvent(u32 a, u32 b) {
    u8 buf[2];
    buf[0] = a;
    buf[1] = b;
    LocalWl_CallEventCallback(buf);
}

s32 LocalWl_SetEventCallback(void (*fn)(void *)) {
    if (sLocalWl != NULL) {
        sLocalWl->eventCallback = fn;
        return TRUE;
    }
    return FALSE;
}
#undef sLocalWl
#undef sLocalWlAllocHook

}
#pragma thumb reset
