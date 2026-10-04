// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "save/BlancaFaceRecord.h"
#include "talk/TalkWindowState.h"
#include "town/TownBlockMap.h"
#include "talk/MsgRequest.h"
#include "ui/HudWallet.h"
#include "talk/TalkMsgRequest.h"
#include "sys/ProcProfile.h"
#include "game/NibblePair.h"

// ---- declarations shared by the merged files
class TalkMsgRequest;





// vtable 0x020e281c: the message object inside the scene (size 0x48)
class SaveManagerTalk : public TalkMsgRequest {
public:
    SaveManagerTalk();
    virtual ~SaveManagerTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);

    void setOwner(u32 v);

    /* 0x44 */ u32 unk_44;
};

class SaveManager;
typedef void (SaveManager::*Unk_020e27d4_Fn)();

struct Unk_020e27d4_Ent {
    Unk_020e27d4_Fn enter;
    Unk_020e27d4_Fn exec;
};

// vtable 0x020e27cc: the scene (size 0x10c). Its destructor is implicit (D1, D0 at the start of the unit).
class SaveManager : public GameProc {
public:
    typedef s32 (SaveManager::*Fn)();

    SaveManager() {
        hostDateTime = 0;
        unk_dc = 0;
    }
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();

    s32 verifyStepChoose();
    s32 verifyStepSlot1();
    s32 verifyStepSlot0();
    s32 verifyStepReset();
    s32 verifySlotsStep();
    void setTransferReceived(u32 i, u8 v);
    u32 isTransferReceived(u32 i);
    void setTransferDest(u32 i, u8 v);
    u32 getTransferDest(u32 i);
    u32 func_020a148c();
    void restoreVillagerTransfer();
    void backupVillagerTransfer();
    BOOL func_020a15c8(u32 v);
    void func_020a15f8();
    void showSequence2Msg0B();
    void showSequence2Msg0A();
    void execAct1F();
    void enterAct1F();
    void execAct1E();
    void enterAct03();
    void execAct02();
    void enterAct02();
    void execAct01();
    void enterAct01();
    void execAct00();
    void enterAct00();
    void setState(s32 idx);

    /* 0x50 */ s32 act;
    /* 0x54 */ SaveManagerTalk talk;
    /* 0x9c */ u8 slotStep;
    /* 0x9d */ u8 actStep;
    /* 0x9e */ u8 pad_9e[0xa8 - 0x9e];
    /* 0xa8 */ void *bufferHeap;
    /* 0xac */ void *workBuf;
    /* 0xb0 */ void *readBackBuf;
    /* 0xb4 */ void *saveDataCopy;
    /* 0xb8 */ void *playerDataCopy;
    /* 0xbc */ void *villagerTransferBackup;
    /* 0xc0 */ void *letterStorage;
    /* 0xc4 */ void *townCompressBuf;
    /* 0xc8 */ void *townCompressThread;
    /* 0xcc */ u8 pad_cc[0xd4 - 0xcc];
    /* 0xd4 */ u8 sendChunk;
    /* 0xd5 */ u8 pad_d5[0xd8 - 0xd5];
    /* 0xd8 */ u32 hostDateTime;
    /* 0xdc */ u32 unk_dc;
    /* 0xe0 */ u8 pad_e0[0xeb - 0xe0];
    /* 0xeb */ u8 ctrlAct0E[0x12];
    /* 0xfd */ u8 unk_fd;
    /* 0xfe */ u8 freePlayerSlot;
    /* 0xff */ u8 transferDests[4];
    /* 0x103 */ u8 transferReceived[4];
    /* 0x107 */ u8 noSaveData;
    /* 0x108 */ u8 unk_108;
    /* 0x109 */ NibblePair slotStatus;
    /* 0x10a */ NibblePair slotOrder;
};

// the three file-scope objects of __sinit (constructors and destructors are functions of other units)
class AxMail {
public:
    AxMail();
    ~AxMail();
    u32 unk_00[0x42];
};

class AxBbsNotice {
public:
    AxBbsNotice();
    ~AxBbsNotice();
    u8 unk_00[0xd2];
};


// the 4-byte record class of the previous file (constructor 0x0209eb90, destructor 0x0209eb8c)
extern "C" void _ZN11SaveRecord49constructEv(void *p);
extern "C" void _ZN11SaveRecord48destructEv(void *p);

// ---- unk_0209e394.cpp

namespace NA {
extern "C" {
extern u8 sRecentJoinAids[];
extern u8 sAxBbsReceived;
extern u8 sAxBbsBuf[];
void MI_CpuCopy8(void *src, void *dst, s32 n);
void AxBbsNotice_Construct(void *p);
void *AxBbsNotice_GetDigest(void *p);
void func_0211a748(void *a, void *b, s32 c, s32 d, s32 e);
void MI_CpuFill8(void *p, s32 v, s32 n);
s32 AxMail_GetDigestKey();
s32 Mem_Differs(void *a, void *b, s32 n);
void AxBbsNotice_Post(void *p);
void AxBbsNotice_Destruct(void *p);
}
}

// ---- unk_0209ecf8.cpp

struct TownCompressThread {
    u8 thread[0x64];
    s32 threadState;
    u8 pad_68[0xc0 - 0x68];
    u32 stackGuardLow;
    u8 pad_c4[0x10c4 - 0xc4];
    u32 stackGuardHigh;
    u8 done;

    u8 isDone();
    void start(u32 a);
    void kill();
    void init();
};

struct TownCompressBuffer {
    u32 size;
    u8 data[4];
    u8 dataBody[4];

    u32 getSize();
    void decompress();
    void compress();
};

struct Unk_0209f304 {
    u8 pad_00[0xb4];
    void *saveDataCopy;
    u8 pad_b8[0xeb - 0xb8];
    u8 ctrlAct0E;
    u8 pad_ec[0xf4 - 0xec];
    u8 ctrlAct10[4];
    u8 pad_f8[0x10a - 0xf8];
    u8 unk_10a_lo : 4;
    u8 unk_10a_hi : 4;

    void func_0209f304(u8 *p, u32 base);
    BOOL func_0209f344();
    void func_0209f390(u8 *p, u32 base, u32 x, u32 y);
    s32 runSyncedSaveClient(u8 *p, u32 base, u32 fail, u8 a5, u8 a6, u8 a7, u32 a8);
};

namespace NB {
extern "C" {
extern u8 sAxMailReceived;
extern u8 sAxMailBuf[];
extern u8 sGameStatsReceived;
extern u8 sGameStatsBuf[];
extern u8 gSaveBlancaFace[];
extern u8 sAxBbsReceived;
extern char *sAxMailBaseUrl;
extern char *sAxBbsFileName;
extern char *sAxMailFileName;
extern u32 sNetRegion;
extern u8 sAxBbsBuf[];
extern u8 gSaveData[];
extern u8 gOverlayHandle[];
extern u8 data_021ed390;
extern u8 data_021ed3a4;
extern u8 *gCommManager;
extern u8 gSaveFooter[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_65_ID[];
extern u32 OVERLAY_66_ID[];
void *AxMail_Construct(void *p);
u8 *AxMail_GetDigest(u8 *p);
void *AxMail_Destruct(void *p);
BOOL AxMail_Deliver(u8 *p);
s32 AxMail_GetDigestKey(void);
void MI_CpuFill8(void *p, u32 v, u32 n);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
void func_0211a748(void *a, void *b, u32 c, s32 d, u32 e);
s32 Mem_Differs(u8 *a, u8 *b, u32 n);
s32 Save_Sum16(void *a, u32 n);
void _ZN16BlancaFaceRecord8setStateEj(void *p, u32 v);
void _ZN16BlancaFaceRecord11setChecksumEj(void *p, s32 v);
s32 _ZN16BlancaFaceRecord11getChecksumEv(void *p);
s32 Save_CalcChecksum(void *p, u32 n, s32 v);
s32 _ZN16BlancaFaceRecord8getStateEv(void *p);
void _ZN16BlancaFaceRecord5resetEv(void *p);
s32 _Z21NetOverlay_AssertWifiv(void);
s32 Net_IsUploadDone(s32 a);
s32 Net_IsDownloadDone(s32 a);
s32 _ZN8SaveData8testFlagEj(void *p, u32 n);
char *func_0212a360(char *dst, const char *src);
char *func_0212a2bc(char *dst, const char *src);
void Net_GetBrid(char *p);
s32 Net_HttpDownload(char *a, void *b, u32 c, u32 d);
s32 Net_GameStatsDownload(void *a, void *b, u32 c, u32 d);
s32 Net_GameStatsUpload(void *a, void *b, u32 c, u32 d);
s32 Net_GetMode(void);
s32 Comm_End(void);
s32 PlayerData_GetCurrent(void);
s32 _ZN10PlayerData8getIndexEv(s32 h);
void GameStats_ApplyDownload(void);
void AxMail_ApplyMail(void);
void AxMail_ApplyBbs(void);
void Wifi_StoreFriendList(void);
s32 Save_WritePlayerFriendList(void);
s32 TalkWindow_Get(s32 a);
void _ZN15TalkWindowState12hideBusyIconEv(void);
void _ZN15TalkWindowState13unlockAdvanceEv(s32 a);
void _ZN15TalkWindowState14setNextMessageEPhPv(s32 a, u8 *b, void *c);
void OS_CreateThread(void *a, void *fn, u32 b, void *c, u32 d, u32 e);
void OS_WakeupThreadDirect(void *a);
s32 OS_IsThreadTerminated(void *a);
void OS_KillThread(void *a, u32 b);
void OS_ExitThread(void);
void *SaveManager_GetTownCompressBuf(void);
void *SaveManager_GetTownCompressThread(void);
void *SaveManager_GetTownTransferBuf(void);
void func_021163b0(void *a, void *b, void *c);
void func_021162b0(void *a, void *b, u32 c);
s32 func_021164ec(void *a, u32 b, void *c);
void OverlayHandle_Unload(void *p);
void OverlayHandle_Load(void *p, u32 v);
s32 _ZN11CommManager17getWifiFriendListEv(void *p);
s32 _ZN10PlayerData13getFriendListEv(void);
u8 *FriendList_GetEntries(void);
s32 FriendEntry_GetFriendData(u8 *p);
u8 *DwcFriendData_GetBytes(s32 p);
void _ZN12Unk_020a09909startTalkEPKch(u32 a, void *b, u32 c);
void _ZN12Unk_02097ff49clearFlagEj(s32 a, u32 b);
void _ZN12Unk_02097ff47setFlagEj(s32 a, u32 b);
s32 Hud_GetCountdown(void);
void _ZN12HudCountdown5startEii(s32 a, u32 b, u32 c);
u32 _ZN11CommManager7getModeEv(void *g);
s32 CommCtrl_SendAct10(void);
s32 _ZN11CommManager12isSlotActiveEi(void *g, s32 i);
s32 _ZN11CommManager7isMyAidEj(void *g, s32 i);
s32 NetArea_GetSlotScene(s32 i);
s32 NetArea_IsSlotMoving(s32 i);
void _ZN11CommManager14setPendingModeEj(void *g, u32 v);
s32 CommCtrl_SendAct08(void);
s32 Comm_IsConnectionLost(u32 a);
void Comm_SetLostFlag(void);
s32 _ZN11SaveManager15verifySlotsStepEv(void *p);
s32 _ZN14SaveSlotWriter12loadSlotStepEi(void *p, u32 v);
s32 _ZN14SaveSlotWriter12saveSlotStepEi(void *p, u32 v);
s32 CommCtrl_SendAct0E(u32 a, u32 b);
void func_020a0268(void *p);
void _ZN11SaveManager23restoreVillagerTransferEv(void *p);
void Save_StoreCurrentPlayerToResident(void *p);
void LostChild_ApplyReceived(void *p);
void LostChild_SaveToTown(void);
void _ZN11SaveRecord415markInterruptedEv(void *p);
void _ZN11SaveRecord416setStateValidAltEv(void *p);
void TownCompressThread_Main(s32 a);
u8 func_0209f23c(void);
}
}

// ---- unk_0209f638.cpp

struct Unk_0209f638 {
    u8 pad_00[0xeb];
    u8 ctrlAct0E[5];
    u8 recvAct06[0x1f - 5];
     u8 slotOrder;
};

struct Unk_0209fb48_V3 { s32 v[3]; };

struct Unk_0209f898_Rec { u32 unk_00; u32 unk_04; };

namespace NC {
extern "C" {
extern CommManager *gCommManager;
extern u8 gSaveFooter;
extern Unk_0209fb48_V3 data_020e2764;
extern Unk_0209fb48_V3 data_020e2770;
BOOL Comm_IsConnectionLost(s32 a);
void Comm_SetLostFlag();
u32 Comm_GetRemoteMask();
void Comm_ResetNetSession();
void _Z20NetOverlay_AssertAnyv();
BOOL Net_IsReadyToSend();
BOOL Net_GetMyAid();
s32 Net_GetMode();
void Comm_EnterCritical();
void Comm_LeaveCritical();
BOOL CommCtrl_SendAct0E(s32 a, u32 b);
BOOL CommCtrl_SendAct13();
s32 _ZN11SaveManager15verifySlotsStepEv(Unk_0209f638 *p);
s32 _ZN14SaveSlotWriter12saveSlotStepEi(Unk_0209f638 *p, u32 v);
void _ZN11SaveManager23restoreVillagerTransferEv(Unk_0209f638 *p);
void func_020a0268(Unk_0209f638 *p);
void _ZN11SaveManager18showSequence2Msg0AEv(Unk_0209f638 *p);
void _ZN11SaveManager18showSequence2Msg0BEv(Unk_0209f638 *p);
void *_ZN11SaveManager15getTransferDestEj(Unk_0209f638 *p, s32 i);
void _ZN11SaveRecord415markInterruptedEv(void *p);
void _ZN11SaveRecord416setStateValidAltEv(void *p);
void LostChild_SaveToTown();
void Wifi_EndSession(Unk_0209f638 *p);
Unk_0209f898_Rec *TalkWindow_Get(s32 i);
void OS_ResetSystem(s32 v);
void CommSend_VillagerTransferReply(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *TownExchange_GetForAid(s32 a);
BOOL _ZN18TownExchangeRecord7isValidEv(void *a);
void *_ZN18TownExchangeRecord18getLostChildRecordEv(void *a);
void _ZN15LostChildRecord5clearEv(void *a);
s32 _ZN15LostChildRecord11getDaysLeftEv(void *a);
void *_ZN15LostChildRecord9getTownIdEv(void *a);
void _ZN15LostChildRecord13isKaitlinRoleEv(void *a);
void _ZN15LostChildRecord14setKaitlinRoleEh(void *a, u8 b);
void _ZN15LostChildRecord9setTownIdEv(void *a, void *b);
void _ZN15LostChildRecord11setDaysLeftEh(void *a, s32 b);
void MI_CpuCopy8(void *dst, void *src, u32 n);
void _ZN11MsgString9CC2Ev(void *p);
void _ZN11MsgString9CD1Ev(void *p);
void TownId_GetNameString(void *a, void *b);
void *PlayerId_GetTownId(void *a);
void *_ZN10PlayerData11getPlayerIdEv(void *a);
void *_ZN10PlayerData18getLostChildRecordEv(void *a);
void *PlayerData_GetCurrent();
void *PlayerData_GetBySessionSlot(s32 i);
void *DebugVar_GetPtr(s32 a, s32 b);
BOOL Random_GlobalBelow(s32 a);
void *_ZN10PlayerData15getWifiUserDataEv(void *a);
void *_ZN10PlayerData13getFriendListEv(void *a);
void *PlayerWifiData_GetOwnFriendData(void *a);
void *DwcFriendData_GetBytes(void *a);
void *FriendList_GetEntries(void *a);
void *FriendEntry_GetFriendData(void *a);
BOOL Net_IsSameFriendData(void *a, void *b);
void func_0209fef8(Unk_0209f638 *p, void *q);
BOOL Wifi_IsInFriendList(Unk_0209f638 *p, void *a, void *b);
void LostChild_TryPair(Unk_0209f638 *p, s32 idx);
void LostChild_ApplyReceived(Unk_0209f638 *p);
}
}

// ---- unk_0209ff4c.cpp

struct Unk_020cbb18_ff4c {
    u8 pad_00[0x68];
    volatile s32 localSlot;
};

struct Unk_021ed3b0 {
    u8 pad_00[0x50];
    s32 act;
    u8 pad_54[0x9d - 0x54];
    u8 actStep;
    u8 pad_9e[0xc0 - 0x9e];
    s32 letterStorage;
    s32 townCompressBuf;
    s32 townCompressThread;
    u8 pad_cc[4];
    u16 hostMemberMask;
    u8 unk_d2;
    u8 hostDataIndex;
    u8 pad_d4;
    u8 joinReady;
    u8 dateTimeReceived;
    u8 pad_d7;
    u8 hostDateTime[8];
    u8 joinDone;
    u8 ctrlAct12;
    u8 recvAct07;
    u8 recvAct04[4];
    u8 recvAct02[4];
    u8 ctrlAct0E[4];
    u8 recvAct03;
    u8 recvAct06[4];
    u8 ctrlAct10[4];
    u8 ctrlAct11[4];
    u8 unk_fc;
    u8 unk_fd;
};

class SaveRecord4 {
public:
    u32 v;
    SaveRecord4() { _ZN11SaveRecord49constructEv(this); }
    ~SaveRecord4() { _ZN11SaveRecord48destructEv(this); }
    u32 getStamp();
};

class Unk_020a0088_Date {
public:
    u16 v;
    Unk_020a0088_Date() {}
};

namespace ND {
extern "C" {
extern Unk_020cbb18_ff4c *gCommManager;
extern Unk_021ed3b0 *gSaveManager;
extern s32 sGameStartMode;
extern u8 data_021ed398;
extern s32 gTownTransferBuf;
extern u8 sJoiningAid;
extern s32 sEraseResidentSlot;
extern u8 gSaveData[];
extern u8 gSavePlayers[];
extern u8 data_021e7f8c[];
extern u8 data_021ecfa8[];
extern u8 gSaveFooter[];
extern u8 gBackup[];
extern const u32 sSaveSlotOffsets[];
extern u8 sSessionResidentIndex;
extern u8 data_020e252c[];
BOOL _ZN11CommManager12isSlotActiveEi(Unk_020cbb18_ff4c *, s32);
void _ZN11CommManager14setMemberCountEj(Unk_020cbb18_ff4c *, u32);
void TownExchange_GetForAid(s32);
void _ZN18TownExchangeRecord18getLostChildRecordEv();
void _ZN15LostChildRecord5clearEv();
void LostChild_TryPair(void *, s32);
s32 NetSession_GetLastSyncSlot();
void _ZN11SaveManager15setTransferDestEjh(void *, s32, s32);
s32 Random_GlobalBelow(s32);
void Comm_ResetNetSession(void *);
void Wifi_EndSession(void *);
void PlayerSession_ClearDataIndex(s32);
void PlayerSession_SetDataIndex(s32, s32);
s32 PlayerSession_GetDataIndex(s32);
s32 PlayerData_Get(s32);
void _ZN10PlayerData5resetEv();
void Clock_Update(s32);
void SaveData_Setup(void *, s32);
void SaveData_Apply(void *);
s32 TownBlockMap_Get();
void _ZN12TownBlockMap13updateAcreIdsEv(s32);
void _ZN12TownBlockMap6bindBgEv(s32);
void Town_ClearBorderTrees(s32);
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_BindBg();
void Town_OnLoad();
void Comm_ResetPeerState(s32);
u8 *PlayerSession_GetSessionFlags(s32);
u16 *PlayerSession_GetLastPlayDate();
void Clock_GetDateTime(void *);
void _ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(s32, Unk_020a0088_Date);
void _ZN8SaveData5resetEv(void *);
s32 PlayerDataArray_FindUnused(void *);
void PlayerDataArray_CreateResident(void *, void *, s32, s32);
s32 _ZN18TownExchangeRecord11getChecksumEv(void *);
u32 Save_CalcChecksum(void *, u32, u32);
void _ZN18TownExchangeRecord11setChecksumEj(void *, u32);
s32 _ZN18TownExchangeRecord15getChecksumByteEv(void *);
void _ZN18TownExchangeRecord15setChecksumByteEj(void *, u32);
BOOL Backup_Write(void *, u32, void *, u32);
s32 PlayerData_GetCurrentIndex();
s32 PlayerData_GetCurrent();
u8 *_ZN10PlayerData13getFriendListEv();
void PlayerData_GetResident(void *, s32);
u8 *_ZN10PlayerData15getWifiUserDataEv();
s32 FriendList_GetChecksum(void *);
void FriendList_SetChecksum(void *, u32);
s32 PlayerWifiData_GetChecksum(void *);
void PlayerWifiData_SetChecksum(void *, u32);
void _ZN11SaveRecord410clearStateEv(void *);
void LetterStorage_MarkInterrupted(s32);
s32 Backup_Read(void *, void *, u32, u32);
s32 Save_ReadSlotFooter(s32, SaveRecord4 *);
BOOL Save_CheckFooterReadError(s32);
Unk_021ed3b0 *SaveManager_Get();
s32 SaveManager_GetLetterStorage();
BOOL GameStart_IsMode4();
BOOL GameStart_IsNewTown();
BOOL GameStart_IsMode3();
}
}

// ---- unk_020a0868.cpp

class SaveSlotWriter;

typedef s32 (SaveSlotWriter::*Unk_020a09d8_State)(s32);

class SaveSlotWriter {
public:
    s32 stepPrepare(s32 idx);
    s32 stepChecksum(s32 mode);
    s32 stepReadBack(s32 idx);
    s32 stepFindDirty(s32 idx);
    s32 stepWriteDirty(s32 idx);
    s32 stepCommit(s32 idx);
    s32 eraseSlotStep(s32 idx);
    s32 verifySlotStep(s32 idx);
    s32 loadSlotStep(s32 idx);
    BOOL memEqual(u8 *p, u8 *q, s32 n);
    s32 saveSlotStep(s32 arg);

     u32 unk_00[0x14];
     s32 act;
     u32 unk_54[0x12];
     u8 slotStep;
     u8 actStep;
     u8 blockCursor;
     u8 unk_9f;
     s16 dirtyFirstBlock;
     s16 unk_a2;
     s32 dirtySize;
     u32 bufferHeap;
     u8 *workBuf;
     u8 *readBackBuf;
};

class Unk_020a0990 {
public:
    void startTalk(const char *str, u8 flag);

     u32 unk_00[0x15];
     TalkMsgRequest talk;
};

namespace NE {
extern "C" {
extern s32 sSaveManagerRequest;
extern u8 gSaveData[];
extern u8 gBackup[];
extern s32 sSaveSlotSizes[];
extern s32 sSaveSlotDataSizes[];
extern s32 sSaveSlotOffsets[];
extern u8 __ptmf_null[];
extern SaveSlotWriter *gSaveManager;
TalkWindowState *TalkWindow_Get(s32 i);
s32 Backup_GetStatus(void *p);
s32 Backup_EndAccess(void *p);
s32 Backup_ReadAsync(void *p, void *buf, s32 size, s32 off);
s32 Backup_WriteAsync(void *p, s32 off, void *buf, s32 size);
s32 Backup_Read(void *p, void *buf, s32 size, s32 off);
s32 Save_Sum16(void *buf, s32 size);
s32 _ZN8SaveData7isValidEv(void *buf);
void *MI_CpuFill8(void *dst, s32 v, u32 n);
void *MI_CpuCopy8(void *dst, void *src, u32 n);
u8 *SaveManager_GetLetterStorage(void);
s32 Save_SlotStampsMatch(void);
void Save_ReadSlotFooter(s32 a, void *p);
u16 Save_CalcChecksum(void *p, u32 n, u32 m);
void _ZN11SaveRecord48newStampEv(void *p);
void _ZN11SaveRecord49constructEv(void *p);
void _ZN11SaveRecord48destructEv(void *p);
u32 _ZN11SaveRecord48getStampEv(void *p);
void _ZN11SaveRecord48setStampEh(void *p, u32 v);
u32 _ZN12SaveChecksum3getEv(void *p);
void _ZN12SaveChecksum3setEt(void *p, u32 v);
u32 _ZN18TownExchangeRecord11getChecksumEv(void *p);
void _ZN18TownExchangeRecord11setChecksumEj(void *p, u32 v);
u32 _ZN18TownExchangeRecord15getChecksumByteEv(void *p);
void _ZN18TownExchangeRecord15setChecksumByteEj(void *p, u32 v);
void *PlayerData_GetResident(void *t, s32 i);
void *_ZN10PlayerData15getWifiUserDataEv(void *p);
void *_ZN10PlayerData13getFriendListEv(void *p);
u16 PlayerWifiData_GetChecksum(void *p);
void PlayerWifiData_SetChecksum(void *p, u32 v);
u16 FriendList_GetChecksum(void *p);
void FriendList_SetChecksum(void *p, u32 v);
BOOL Save_ReadSlotSync(u32 idx, s32 flag);
BOOL Save_ReadSlot(u32 idx);
s32 Save_ReadAndCheckSlot(s32 idx, s32 flag);
s32 Save_CheckSlot(s32 idx);
}
}

// ---- unk_020a1224.cpp

void operator delete(void *p);


namespace Unk_020a14ac_Ns {
extern "C" s32 MI_CpuCopy8(const void *src, void *dst, u32 size);
}

namespace NF {
extern "C" {
extern CommManager *gCommManager;
extern u8 gSaveData[];
extern u8 gSaveFooter[];
extern u8 gTalkMsgIndexEnd[];
extern u8 data_021e7f8c[];
extern u8 sSessionResidentIndex;
u8 _ZN14SaveSlotWriter14verifySlotStepEi(SaveManager *self, u32 x);
s32 _ZN14SaveSlotWriter12saveSlotStepEi(SaveManager *self, u32 x);
u32 Save_SlotStampsMatch(void);
s32 func_020a0210(void);
void _ZN11SaveManager8setStateEi(void *p, s32 x);
void *TalkWindow_Get(u32 x);
void _ZN15TalkWindowState11lockAdvanceEv(void *o);
void _ZN15TalkWindowState14setNextMessageEPhPv(void *o, void *a, void *b);
void _ZN15TalkWindowState12hideBusyIconEv(void *o);
s32 _ZN15TalkWindowState13unlockAdvanceEv(void *o);
void _ZN15TalkWindowState12showBusyIconEv(void *o, u32 x);
s32 Comm_IsConnectionLost(s32 x);
void Comm_SetLostFlag(void);
s32 CommCtrl_SendAct14(void);
s32 CommSend_PlayerDataToHost(u8 *p);
s32 CommSend_LetterStorageToHost(u8 *p);
s32 CommCtrl_SendAct17(void);
s32 CommCtrl_SendAct0E(u32 a, u32 b);
u32 _Z20NetOverlay_AssertAnyv(void);
s32 Net_IsReadyToSend(u32 x);
u32 Net_GetConnectedMask(void);
s32 Net_GetMyAid(s32 x);
HudWallet *Hud_GetWallet(void);
void _ZN18TownExchangeRecord16incrementCounterEv(void *p);
void *PlayerData_GetCurrent(void);
u32 PlayerData_Get(u32 x);
s32 PlayerData_GetCurrentIndex(void);
s32 _ZN12Unk_02097ff49clearFlagEj(void *p, u32 x);
void *_ZN10PlayerData5resetEv(void *p);
void SaveData_Apply(void *p);
void SaveData_Setup(void *p, u32 x);
void _ZN8SaveData11resetPlayerEi(void *p, s32 x);
void _ZN8SaveData7setFlagEj(void *p, u32 x);
void _ZN11SaveRecord416setStateValidAltEv(void *p);
void _ZN11SaveRecord415markInterruptedEv(void *p);
u32 Wifi_EndSession(void *p);
void NetOverlay_Restore(void);
void SaveManager_RunSessionEnd(void *self, u8 *st, u32 a, u32 b, u32 c, u32 d);
void Comm_PrepareJoin(void);
void PlayerOptions_Commit(void);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}
}

// ---- unk_020a1c88.cpp

class Unk_020a1c88 {
public:
    u8 pad_00[0x9d];
    u8 actStep;
    u8 pad_9e[0xcc - 0x9e];
    u16 unk_cc;
    u16 memberMask;
    u8 pad_d0[0xe1 - 0xd0];
    u8 ctrlAct12;
    u8 recvAct07;
    u8 pad_e3[0xf0 - 0xe3];
    u8 recvAct06[8];
    u8 ctrlAct11[6];
    u8 freePlayerSlot;
    u8 pad_ff[0x107 - 0xff];
    u8 noSaveData;

    void enterAct1E();
    void execAct1D();
    void enterAct1D();
    void execAct1C();
    void enterAct1C();
    void execAct1B();
    void enterAct1B();
    void execAct1A();
    void enterAct1A();
    void execAct19();
};

namespace NG {
extern "C" {
extern u8 gSaveData[];
extern u8 gSaveTownId[];
extern u8 gSavePlayers[];
extern u8 sSessionResidentIndex;
extern CommManager *gCommManager;
s32 func_020a0210(Unk_020a1c88 *self);
void _ZN11SaveManager8setStateEi(Unk_020a1c88 *self, u32 s);
BOOL _ZN11SaveManager13func_020a15c8Ej(Unk_020a1c88 *self, u32 a);
void _ZN11SaveManager13func_020a15f8Ev(Unk_020a1c88 *self);
BOOL _ZN11SaveManager18isTransferReceivedEj(Unk_020a1c88 *self, s32 a);
void _ZN11SaveManager22backupVillagerTransferEv(Unk_020a1c88 *self);
s32 _ZN11SaveManager15getTransferDestEj(Unk_020a1c88 *self, u32 a);
void NetSession_ReturnToSolo(Unk_020a1c88 *self, u32 a, u32 b);
void _ZN12Unk_020a09909startTalkEPKch(Unk_020a1c88 *self, void *a, u32 b);
BOOL Wifi_EndSession(Unk_020a1c88 *self);
void VillagerTransfer_PlanRotate(Unk_020a1c88 *self);
void LostChild_ResetAndPairAll(Unk_020a1c88 *self);
BOOL _ZN12Unk_0209f30413func_0209f344Ev(Unk_020a1c88 *self);
BOOL VillagerTransfer_SendReplies(Unk_020a1c88 *self);
void SaveManager_StartSequence2Talk(Unk_020a1c88 *self);
void _ZN12Unk_0209f30413func_0209f304EPhj(Unk_020a1c88 *self, u8 *s, u32 a);
void _ZN12Unk_0209f30413func_0209f390EPhjjj(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c);
void _ZN12Unk_0209f30419runSyncedSaveClientEPhjjhhhj(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void SaveManager_RunSyncedSaveHost(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void SaveManager_RunSessionEnd(Unk_020a1c88 *self, u8 *s, u32 a, u32 b, u32 c, u32 d);
BOOL _ZN8SaveData7isValidEv(void *p);
TalkWindowState *TalkWindow_Get(u32 x);
u32 Net_GetMemberCount();
BOOL Math_CountDownU16(void *p);
BOOL Comm_SendEmpty();
void Comm_Start(s32 a, u32 b, u32 c);
void Comm_SetRecvBuffersAsHost();
void *TownId_GetName(void *p);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
void _Z25NetOverlay_AssertWirelessv();
void Net_SetLocalGameInfo(void *p, u32 n);
u8 PlayerDataArray_FindUnused(void *p);
void NetOverlay_LoadWireless();
BOOL Comm_IsConnectionLost(s32 a);
void Comm_SetLostFlag();
u32 Comm_GetRemoteMask();
u32 Comm_GetMemberMask();
BOOL func_0209f23c();
void _Z20NetOverlay_AssertAnyv();
BOOL Net_IsReadyToSend();
BOOL Net_PollConnected();
BOOL CommCtrl_SendAct11();
BOOL CommCtrl_SendAct13();
BOOL CommCtrl_SendAct12(u32 a);
void Comm_EnterCritical();
void Comm_LeaveCritical();
void NetOverlay_Restore();
s32 NetSession_GetLastSyncSlot();
void NetSession_RemoveSlot(u32 a);
void Weather_RerollRainSlant();
void *TownExchange_GetForAid(u32 a);
s32 TownExchange_Clear(void *a);
}
}

// ---- unk_020a25d8.cpp


struct Unk_020a25d8 {
    u8 pad_00[0x9d];
    u8 actStep;
    u8 pad_9e[0xc8 - 0x9e];
    u32 townCompressThread;
    u8 pad_cc[2];
    u16 memberMask;
    u16 hostMemberMask;
    u8 unk_d2;
    u8 hostDataIndex;
    u8 sendChunk;
    u8 joinReady;
    u8 dateTimeReceived;
    u8 pad_d7;
    u8 hostDateTime[8];
    u8 joinDone;
    u8 ctrlAct12;
    u8 pad_e2[0xf0 - 0xe2];
    u8 recvAct06[8];
    u8 ctrlAct11[4];
};

struct Unk_020a2ecc_Reg {
    u8 pad_00[0x38];
    u16 unk_38;
};

namespace NH {
extern "C" {
extern CommManager *gCommManager;
extern u8 sSessionResidentIndex;
extern u8 sJoiningAid;
extern u8 data_021c3cb8;
extern u32 data_021ed304;
extern void *gTownTransferBuf;
extern u8 gSaveData[];
extern Unk_020a2ecc_Reg data_021ed2d0;
void SaveManager_StartGatekeeperTalk(Unk_020a25d8 *p, s32 v);
BOOL Comm_IsConnectionLost(u32 v);
void Comm_SetLostFlag();
u32 Comm_GetRemoteMask();
u32 Comm_GetMemberMask();
BOOL _ZN11SaveManager13func_020a15c8Ej(Unk_020a25d8 *p, s32 v);
void VillagerTransfer_PlanSwap(Unk_020a25d8 *p);
void LostChild_ResetAndPairLast(Unk_020a25d8 *p);
void _ZN12Unk_0209f30413func_0209f390EPhjjj(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_0209f30413func_0209f344Ev(Unk_020a25d8 *p);
BOOL VillagerTransfer_SendReplies(Unk_020a25d8 *p);
s32 NetSession_GetLastSyncSlot();
u32 _ZN11SaveManager15getTransferDestEj(Unk_020a25d8 *p, s32 v);
void *TownExchange_GetForAid(u32 v);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void TownExchange_Clear(void *p);
void _ZN11SaveManager22backupVillagerTransferEv(Unk_020a25d8 *p);
void JoinHistory_Remove(u32 v);
void SaveManager_RunSyncedSaveHost(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
BOOL CommCtrl_SendAct12(u32 v);
void Comm_RemoveMember(u32 v);
void _Z20NetOverlay_AssertAnyv();
BOOL Net_IsReadyToSend();
u32 Net_GetMemberCount();
void Weather_RerollRainSlant();
void Town_OnLoad();
void SaveManager_RunSessionEnd(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d);
void _ZN11SaveManager13func_020a15f8Ev(Unk_020a25d8 *p);
void _ZN11SaveManager8setStateEi(Unk_020a25d8 *p, s32 v);
void _ZN12Unk_0209f30413func_0209f304EPhj(Unk_020a25d8 *p, u8 *st, u32 a);
BOOL _ZN11SaveManager18isTransferReceivedEj(Unk_020a25d8 *p, s32 v);
void _ZN12Unk_0209f30419runSyncedSaveClientEPhjjhhhj(Unk_020a25d8 *p, u8 *st, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
BOOL CommCtrl_SendAct11();
void NetSession_ReturnToSolo(Unk_020a25d8 *p, u32 a, u32 b);
void NetOverlay_Restore();
void *PlayerData_GetCurrent();
void _ZN12Unk_02097ff47setFlagEj(void *p, s32 v);
void NetSession_SetLastSyncSlot(s32 v);
void NetArea_SetSlotStatus(u32 a, s32 b, u32 c, u32 d, u32 e);
void Comm_ResetPeerState(u32 v);
BOOL CommSend_PlayerData(u8 *p, u32 v);
BOOL NetSession_GetCtrl07Received();
BOOL CommSend_MemberInfo(u32 v);
BOOL CommBlock_BuildPacket(u32 v);
BOOL CommSend_BuiltPacket(u32 v);
BOOL CommSend_SyncVarChunk(u8 *p, u32 v);
BOOL CommSend_SlotStatusAll(u32 v);
void _ZN18TownCompressThread5startEj(u32 a, s32 b);
BOOL _ZN18TownCompressThread6isDoneEv(u32 a);
void DC_FlushAll();
BOOL CommSend_TownChunk(u8 *p, u32 v);
BOOL CommSend_DateTime(u32 v);
void JoinHistory_Push(u32 v);
void LetterDelivery_DeliverOutgoing();
void Constellation_PrepareExchange();
void JoinHistory_Clear();
BOOL CommCtrl_SendAct07();
BOOL CommSend_VillagerTransfer(u8 *p);
BOOL PlayerData_IsUsedByIndex(s32 v);
BOOL func_020a03f0();
void *PlayerActor_GetActor(u32 v);
void ProcBase_RequestDelete();
BOOL CommSend_JoinReady();
u32 Net_GetMyAid();
u32 PlayerSession_GetDataIndex(u32 v);
void *PlayerData_Get(u32 v);
void PlayerSession_SetDataIndex(u32 a, u32 b);
u32 ClockOffset_CalcMinutes(u32 *a, void *b);
u32 ClockOffset_CalcSeconds(u32 *a, void *b);
TownBlockMap *TownBlockMap_Get();
void Town_ClearBorderTrees(TownBlockMap *p);
void HouseRoomMaps_UpdateAll();
void HouseRoomMaps_BindBg();
void Melody_SetPacked(u8 *p);
BOOL CommSend_JoinDone(u32 v);
BOOL SpNpcCopper_CheckKatieEscort();
void *Scene_GetWarpRequest();
void SceneWarp_RequestExit(void *p, u32 v);
void SceneWarp_SetFadeOut(void *p, u32 v);
}
}

// ---- unk_020a3238.cpp

struct Unk_020a3238_Vec {
    s32 x, y, z;
};

class Unk_020a3238;

class Unk_020a3238 {
public:
    u8 pad_00[0x9d];
    u8 actStep;
    u8 pad_9e[0x10a - 0x9e];
    u8 slotOrder;

    void enterAct14();
    void execAct13();
    void enterAct13();
    void execAct12();
    void enterAct12();
    void execAct11();
    void enterAct11();
    void execAct10();
    void enterAct10();
    void execAct0F();
    void enterAct0F();
    void execAct0E();
    void enterAct0E();
    void execAct0D();
    void enterAct0D();
    void execAct0C();
    void enterAct0C();
    void execAct0B();
    void enterAct0B();
    void execAct0A();
    void enterAct0A();
    void execAct09();
    void enterAct09();
    void execAct08();
    void enterAct08();
    void execAct07();
    void enterAct07();
    void execAct06();
    void enterAct06();
    void execAct05();
    void enterAct05();
    void execAct04();
    void enterAct04();
    void execAct03();
};

namespace NI {
extern "C" {
extern u8 gScreenTransition;
extern u8 gSaveData[];
extern u8 gSavePlayers[];
extern u32 sEraseResidentSlot;
extern Unk_020a3238_Vec data_020d0788;
extern Unk_020a3238_Vec data_020d0770;
extern u8 gSaveVillagers[];
s32 _ZN11SaveManager15verifySlotsStepEv(Unk_020a3238 *self);
s32 _ZN14SaveSlotWriter12saveSlotStepEi(Unk_020a3238 *self, u32 n);
s32 _ZN11SaveManager13func_020a15c8Ej(Unk_020a3238 *self, u32 n);
void _ZN11SaveManager13func_020a15f8Ev(Unk_020a3238 *self);
void _ZN11SaveManager18showSequence2Msg0AEv(Unk_020a3238 *self);
void _ZN11SaveManager8setStateEi(Unk_020a3238 *self, u32 n);
void _ZN12Unk_020a09909startTalkEPKch(Unk_020a3238 *self, void *p, u32 n);
s32 Save_InvalidateAll(Unk_020a3238 *self);
s32 _ZN14SaveSlotWriter13eraseSlotStepEi(Unk_020a3238 *self, u32 n);
TalkWindowState *TalkWindow_Get(s32 i);
s32 Scene_GetWarpRequest();
void SceneWarp_RequestExit(s32 a, s32 b);
s32 Scene_GetCurrent();
s32 TownBlockMap_Get();
void Town_FindTownHallFront(s32 a, Unk_020a3238_Vec *v, s32 b, s32 c);
void SceneWarp_RequestAt(s32 a, s32 b, Unk_020a3238_Vec *v, s32 c, s32 d, s32 e, s32 f);
void SceneWarp_RequestFade(s32 a, s32 b, s32 c, s32 d);
s32 _ZN8SaveData8testFlagEj(void *p, s32 n);
void GameStart_SetMode3();
void GameStart_SetMode4();
void GameStart_SetupSave();
s32 Scene_Request(s32 a, s32 b, s32 c, s32 d);
s32 Save_LoadSync();
void _ZN8SaveData5resetEv(void *p);
void GuestPlayers_ResetAll();
void VillagerStates_Init();
void SaveData_Setup(void *p, s32 n);
void SaveData_Apply(void *p);
void VillagerStates_Destroy();
void SaveManager_StartGatekeeperTalk(void *p, s32 n);
s32 Constellation_PrepareExchange();
s32 PlayerData_GetCurrent(void *p);
void _ZN12Unk_02097ff49clearFlagEj(s32 a, s32 b);
void Clock_Init();
void SaveVillagers_DailyUpdate(void *p, s32 n);
s32 TownUpdateThread_Start();
s32 TownUpdateThread_PollDone();
void TownUpdateThread_Create();
s32 PlayerData_GetResident(void *p, u32 n);
void _ZN11MsgString9BC1Ev(void *p);
void _ZN11MsgString9BD1Ev(void *p);
s32 _ZN10PlayerData11getPlayerIdEv(...);
void _ZN8PlayerId13getNameStringEP9MsgString(s32 a, void *p);
void _ZN10PlayerData5resetEv(s32 a);
void _ZN8SaveData11resetPlayerEi(void *p, u32 n);
s32 PlayerDataArray_CountUsed(void *p);
}
}

static inline BOOL Unk_020a3238_Is2(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

// ---- unk_020a3b7c.cpp

namespace NJ {
extern "C" {
extern CommManager *gCommManager;
extern u8 gScreenTransition;
extern s32 sSaveManagerRequest;
extern void *gSaveManager;
extern void *gTownTransferBuf;
extern u8 data_021ed398;
extern void *gCurrentHeap;
extern u8 gSaveVillagers[];
extern u8 gSaveTownState[];
extern Unk_020e27d4_Ent sSaveManagerStates[];
s32 Scene_GetCurrent(void);
void _ZN12Unk_020a09909startTalkEPKch(void *p, char *name, s32 id);
s32 PlayerOptions_Commit(void);
s32 _ZN11SaveManager13func_020a15c8Ej(void *p, s32 v);
s32 Comm_ResetNetSession(void);
BOOL Wifi_EndSession(void *p);
s32 NetOverlay_Restore(void);
s32 _ZN11SaveManager15verifySlotsStepEv(void *p);
s32 _ZN14SaveSlotWriter12saveSlotStepEi(void *p, u32 v);
s32 _ZN11SaveManager18showSequence2Msg0AEv(void *p);
s32 _ZN11SaveManager13func_020a15f8Ev(void *p);
void *PlayerData_GetCurrent(void);
s32 MenuCtrl_ClearClockChangeFlags(void);
s32 _ZN12Unk_02097ff49clearFlagEj(void *p, s32 v);
s32 TownState_ClampDate(void *p);
s32 SaveVillagers_UpdateAllRoomInfo(void *p);
s32 Heap_Free(void *heap, void *p);
void *Heap_Alloc(void *heap, u32 size);
s32 _ZN18TownCompressThread4killEv(void);
s32 TownBlockMap_Get(void);
s32 _ZN12TownBlockMap13updateAcreIdsEv(s32 v);
s32 _ZN12TownBlockMap6bindBgEv(s32 v);
s32 Town_ClearBorderTrees(s32 v);
s32 HouseRoomMaps_UpdateAll(void);
s32 HouseRoomMaps_BindBg(void);
void _ZN15SaveManagerTalk8setOwnerEj(void *p, void *q);
s32 Save_ReadSlot(s32 v);
void *SaveManager_GetLetterStorage(void);
s32 Save_Sum16(void *p, u32 v);
s32 LetterStorage_IsValid(void *p);
s32 MI_CpuFill8(void *p, s32 v, u32 n);
s32 LetterStorage_MarkValid(void *p);
s32 _ZN18TownCompressThread4initEv(void *p);
s32 _ZN11SaveRecord410clearStateEv(void *p);
}
}

static inline BOOL Unk_020a42c4_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

// ---- objects of the unit
extern const s32 sSaveSlotSizes[3];
extern const Unk_020a3238_Vec data_020d0770;
extern const s32 sSaveSlotDataSizes[3];
extern const Unk_020a3238_Vec data_020d0788;
extern const u32 sSaveSlotOffsets[3];
extern char data_020e24f0[];
extern char data_020e277c[];
extern char data_020e2790[];
extern char data_020e27a4[];
extern "C" SaveManager *SaveManager_Create();
namespace NT {
extern "C" {
void _ZN11SaveManager10enterAct00Ev();
void _ZN11SaveManager9execAct00Ev();
void _ZN11SaveManager10enterAct01Ev();
void _ZN11SaveManager9execAct01Ev();
void _ZN11SaveManager10enterAct02Ev();
void _ZN11SaveManager9execAct02Ev();
void _ZN11SaveManager10enterAct03Ev();
void _ZN12Unk_020a32389execAct03Ev();
void _ZN12Unk_020a323810enterAct04Ev();
void _ZN12Unk_020a32389execAct04Ev();
void _ZN12Unk_020a323810enterAct05Ev();
void _ZN12Unk_020a32389execAct05Ev();
void _ZN12Unk_020a323810enterAct06Ev();
void _ZN12Unk_020a32389execAct06Ev();
void _ZN12Unk_020a323810enterAct07Ev();
void _ZN12Unk_020a32389execAct07Ev();
void _ZN12Unk_020a323810enterAct08Ev();
void _ZN12Unk_020a32389execAct08Ev();
void _ZN12Unk_020a323810enterAct09Ev();
void _ZN12Unk_020a32389execAct09Ev();
void _ZN12Unk_020a323810enterAct0AEv();
void _ZN12Unk_020a32389execAct0AEv();
void _ZN12Unk_020a323810enterAct0BEv();
void _ZN12Unk_020a32389execAct0BEv();
void _ZN12Unk_020a323810enterAct0CEv();
void _ZN12Unk_020a32389execAct0CEv();
void _ZN12Unk_020a323810enterAct0DEv();
void _ZN12Unk_020a32389execAct0DEv();
void _ZN12Unk_020a323810enterAct0EEv();
void _ZN12Unk_020a32389execAct0EEv();
void _ZN12Unk_020a323810enterAct0FEv();
void _ZN12Unk_020a32389execAct0FEv();
void _ZN12Unk_020a323810enterAct10Ev();
void _ZN12Unk_020a32389execAct10Ev();
void _ZN12Unk_020a323810enterAct11Ev();
void _ZN12Unk_020a32389execAct11Ev();
void _ZN12Unk_020a323810enterAct12Ev();
void _ZN12Unk_020a32389execAct12Ev();
void _ZN12Unk_020a323810enterAct13Ev();
void _ZN12Unk_020a32389execAct13Ev();
void _ZN12Unk_020a323810enterAct14Ev();
void SaveManager_ExecAct14();
void SaveManager_EnterAct15();
void SaveManager_ExecAct15();
void SaveManager_EnterAct16();
void SaveManager_ExecAct16();
void SaveManager_EnterAct17();
void SaveManager_ExecAct17();
void SaveManager_EnterAct18();
void SaveManager_ExecAct18();
void SaveManager_EnterAct19();
void _ZN12Unk_020a1c889execAct19Ev();
void _ZN12Unk_020a1c8810enterAct1AEv();
void _ZN12Unk_020a1c889execAct1AEv();
void _ZN12Unk_020a1c8810enterAct1BEv();
void _ZN12Unk_020a1c889execAct1BEv();
void _ZN12Unk_020a1c8810enterAct1CEv();
void _ZN12Unk_020a1c889execAct1CEv();
void _ZN12Unk_020a1c8810enterAct1DEv();
void _ZN12Unk_020a1c889execAct1DEv();
void _ZN12Unk_020a1c8810enterAct1EEv();
void _ZN11SaveManager9execAct1EEv();
void _ZN11SaveManager10enterAct1FEv();
void _ZN11SaveManager9execAct1FEv();
}
}
extern void *data_020e273c[2];
extern void *data_020e2734[2];
extern void *data_020e25bc[2];
extern void *data_020e2724[2];
extern void *data_020e271c[2];
extern void *data_020e25ac[2];
extern void *data_020e2574[2];
extern void *data_020e2704[2];
extern void *data_020e26fc[2];
extern void *data_020e26f4[2];
extern void *data_020e26ec[2];
extern void *data_020e26e4[2];
extern void *data_020e26dc[2];
extern void *data_020e259c[2];
extern void *data_020e25cc[2];
extern void *data_020e26c4[2];
extern void *data_020e26bc[2];
extern void *data_020e26b4[2];
extern void *data_020e26ac[2];
extern void *data_020e26a4[2];
extern void *data_020e269c[2];
extern void *data_020e2694[2];
extern void *data_020e2654[2];
extern void *data_020e266c[2];
extern void *data_020e2674[2];
extern void *data_020e2684[2];
extern void *data_020e268c[2];
extern void *data_020e270c[2];
extern void *data_020e2714[2];
extern void *data_020e2744[2];
extern void *data_020e274c[2];
extern void *data_020e2644[2];
extern void *data_020e263c[2];
extern void *data_020e2634[2];
extern void *data_020e253c[2];
extern void *data_020e2624[2];
extern void *data_020e2504[2];
extern void *data_020e250c[2];
extern void *data_020e2514[2];
extern void *data_020e2604[2];
extern void *data_020e25fc[2];
extern void *data_020e25f4[2];
extern void *data_020e25ec[2];
extern void *data_020e2534[2];
extern void *data_020e25dc[2];
extern void *data_020e2554[2];
extern void *data_020e2564[2];
extern void *data_020e25c4[2];
extern void *data_020e256c[2];
extern void *data_020e25b4[2];
extern void *data_020e257c[2];
extern void *data_020e25a4[2];
extern void *data_020e2584[2];
extern void *data_020e2594[2];
extern void *data_020e25d4[2];
extern void *data_020e2614[2];
extern void *data_020e261c[2];
extern void *data_020e264c[2];
extern void *data_020e265c[2];
extern void *data_020e267c[2];
extern void *data_020e26cc[2];
extern void *data_020e272c[2];
extern void *data_020e2754[2];
extern void *data_020e2544[2];

extern "C" SaveManager *SaveManager_Create() {
    return new SaveManager;
}

BOOL SaveManager::onCreate() {
    if (NJ::Scene_GetCurrent() == 6) {
        if (NJ::TownBlockMap_Get() != 0) {
            NJ::_ZN12TownBlockMap13updateAcreIdsEv(NJ::TownBlockMap_Get());
            NJ::_ZN12TownBlockMap6bindBgEv(NJ::TownBlockMap_Get());
            NJ::Town_ClearBorderTrees(NJ::TownBlockMap_Get());
        }
        NJ::HouseRoomMaps_UpdateAll();
        NJ::HouseRoomMaps_BindBg();
    }
    NJ::data_021ed398 = 0;
    if (NJ::gCommManager->isOnline()) {
        if (NJ::Scene_GetCurrent() == 0xb || NJ::Scene_GetCurrent() == 9) {
            return FALSE;
        }
    }
    NJ::gSaveManager = this;
    NJ::_ZN15SaveManagerTalk8setOwnerEj(&talk, this);
    bufferHeap = NJ::gCurrentHeap;
    if (NJ::Scene_GetCurrent() == 0x2e || NJ::Scene_GetCurrent() == 6 || NJ::Scene_GetCurrent() == 9 || NJ::Scene_GetCurrent() == 0xb) {
        workBuf = NJ::Heap_Alloc(bufferHeap, 0x15fe0);
        readBackBuf = NJ::Heap_Alloc(bufferHeap, 0x15fe0);
        letterStorage = NJ::Heap_Alloc(bufferHeap, 0x11df4);
        NJ::Save_ReadSlot(2);
        void *r4 = NJ::SaveManager_GetLetterStorage();
        s32 r6 = NJ::Save_Sum16(r4, 0x11df4);
        if (NJ::LetterStorage_IsValid(r4) == 0 || r6 != 0) {
            NJ::MI_CpuFill8(r4, 0, 0x11df4);
        }
        NJ::LetterStorage_MarkValid(r4);
    }
    if (NJ::Scene_GetCurrent() == 9) {
        playerDataCopy = NJ::Heap_Alloc(bufferHeap, 0x228c);
    }
    if (NJ::Scene_GetCurrent() == 0x2e) {
        saveDataCopy = NJ::Heap_Alloc(bufferHeap, 0x15fe0);
        villagerTransferBackup = NJ::Heap_Alloc(bufferHeap, 0x84c);
    }
    if (NJ::sSaveManagerRequest == 0x14 || NJ::sSaveManagerRequest == 0x15) {
        townCompressBuf = NJ::Heap_Alloc(bufferHeap, 0x15fe4);
        townCompressThread = NJ::Heap_Alloc(bufferHeap, 0x10cc);
        NJ::_ZN18TownCompressThread4initEv(townCompressThread);
    }
    if (NJ::sSaveManagerRequest == 0x14) {
        void *p = NJ::Heap_Alloc(bufferHeap, 0x15fe0);
        NJ::gTownTransferBuf = p;
        NJ::_ZN11SaveRecord410clearStateEv((u8 *)p + 0x15fdc);
    }
    return TRUE;
}

BOOL SaveManager::onDelete() {
    if (NJ::Scene_GetCurrent() == 6) {
        NJ::SaveVillagers_UpdateAllRoomInfo(NJ::gSaveVillagers);
    }
    if (NJ::gCommManager->isOnline()) {
        if (NJ::Scene_GetCurrent() == 0xb || NJ::Scene_GetCurrent() == 9) {
            return TRUE;
        }
    }
    NJ::gSaveManager = 0;
    if (NJ::Scene_GetCurrent() == 0x2e || NJ::Scene_GetCurrent() == 6 || NJ::Scene_GetCurrent() == 9 || NJ::Scene_GetCurrent() == 0xb) {
        NJ::Heap_Free(bufferHeap, workBuf);
        NJ::Heap_Free(bufferHeap, readBackBuf);
        NJ::Heap_Free(bufferHeap, letterStorage);
    }
    if (NJ::Scene_GetCurrent() == 9) {
        NJ::Heap_Free(bufferHeap, playerDataCopy);
    }
    if (NJ::gTownTransferBuf) {
        NJ::Heap_Free(bufferHeap, NJ::gTownTransferBuf);
        NJ::gTownTransferBuf = 0;
    }
    if (townCompressThread) {
        NJ::_ZN18TownCompressThread4killEv();
        NJ::Heap_Free(bufferHeap, townCompressThread);
        townCompressThread = 0;
    }
    if (townCompressBuf) {
        NJ::Heap_Free(bufferHeap, townCompressBuf);
    }
    if (NJ::Scene_GetCurrent() == 0x2e) {
        NJ::Heap_Free(bufferHeap, saveDataCopy);
        NJ::Heap_Free(bufferHeap, villagerTransferBackup);
    }
    return TRUE;
}

BOOL SaveManager::onExecute() {
    if (NJ::sSaveManagerStates[act].exec) {
        (this->*NJ::sSaveManagerStates[act].exec)();
    }
    return TRUE;
}

void SaveManager::setState(s32 idx) {
    if (NJ::sSaveManagerStates[idx].enter) {
        (this->*NJ::sSaveManagerStates[idx].enter)();
    }
    act = idx;
}

void SaveManager::enterAct00() {}

void SaveManager::execAct00() {
    s32 m = NJ::Scene_GetCurrent();
    if (Unk_020a42c4_IsTwo(NJ::gScreenTransition) != 0) {
        if (m == 9) {
            s32 t = NJ::sSaveManagerRequest;
            if (t == 0x12 || t == 0x1f) {
                setState(*(volatile s32 *)&NJ::sSaveManagerRequest);
                NJ::sSaveManagerRequest = 0;
            }
        } else if (m == 0xb) {
            if (NJ::sSaveManagerRequest == 0x13) {
                setState(NJ::sSaveManagerRequest);
                NJ::sSaveManagerRequest = 0;
            }
        } else if (m == 6) {
            if ((u32)(NJ::sSaveManagerRequest - 3) <= 1) {
                setState(NJ::sSaveManagerRequest);
                NJ::sSaveManagerRequest = 0;
            }
        } else if (m == 0x2e) {
            setState(NJ::sSaveManagerRequest);
            NJ::sSaveManagerRequest = 0;
        }
        if (m == 0xc && NJ::sSaveManagerRequest == 0x14) {
            setState(NJ::sSaveManagerRequest);
            NJ::sSaveManagerRequest = 0;
        }
        if (m == 0x2f || m == 0xd) {
            setState(NJ::sSaveManagerRequest);
            NJ::sSaveManagerRequest = 0;
        }
    }
}

void SaveManager::enterAct01() {
    void *r5 = NJ::PlayerData_GetCurrent();
    NJ::_ZN12Unk_020a09909startTalkEPKch(this, (char *)"sp_etc_sequence2", 1);
    NJ::MenuCtrl_ClearClockChangeFlags();
    NJ::_ZN12Unk_02097ff49clearFlagEj(r5, 2);
    NJ::TownState_ClampDate(NJ::gSaveTownState);
    actStep = 0;
}

void SaveManager::execAct01() {
    switch (actStep) {
    case 0:
        if (NJ::_ZN11SaveManager13func_020a15c8Ej(this, 0) != 0) {
            if (NJ::gCommManager->isSlotActive(NJ::gCommManager->myAid) != 0) {
                NJ::Comm_ResetNetSession();
                if (NJ::Wifi_EndSession(this) != 0) {
                    NJ::NetOverlay_Restore();
                }
            }
            actStep = 1;
        }
        break;
    case 1: {
        s32 r = NJ::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 4;
        } else if (r != 3) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NJ::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
        if (r == 1) {
            actStep = 4;
        } else if (r == 0) {
            actStep = 3;
        }
        break;
    }
    case 3: {
        s32 r = NJ::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.lo);
        if (r == 1) {
            actStep = 4;
        } else if (r == 0) {
            actStep = 6;
        }
        break;
    }
    case 4:
        NJ::_ZN11SaveManager18showSequence2Msg0AEv(this);
        actStep = 5;
        break;
    case 5:
        break;
    default:
        NJ::_ZN11SaveManager13func_020a15f8Ev(this);
        setState(0xc);
        break;
    }
}

void SaveManager::enterAct02() {
    void *r5 = NJ::PlayerData_GetCurrent();
    NJ::_ZN12Unk_020a09909startTalkEPKch(this, (char *)"sp_npc_gatekeeper", 0x66);
    NJ::MenuCtrl_ClearClockChangeFlags();
    NJ::_ZN12Unk_02097ff49clearFlagEj(r5, 2);
    NJ::TownState_ClampDate(NJ::gSaveTownState);
    actStep = 0;
}

void SaveManager::execAct02() {
    switch (actStep) {
    case 0:
        if (NJ::_ZN11SaveManager13func_020a15c8Ej(this, 0) != 0) {
            if (NJ::gCommManager->isSlotActive(NJ::gCommManager->myAid) != 0) {
                NJ::Comm_ResetNetSession();
                if (NJ::Wifi_EndSession(this) != 0) {
                    NJ::NetOverlay_Restore();
                }
            }
            actStep = 1;
        }
        break;
    case 1: {
        s32 r = NJ::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 4;
        } else if (r != 3) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NJ::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
        if (r == 1) {
            actStep = 4;
        } else if (r == 0) {
            actStep = 3;
        }
        break;
    }
    case 3: {
        s32 r = NJ::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.lo);
        if (r == 1) {
            actStep = 4;
        } else if (r == 0) {
            actStep = 6;
        }
        break;
    }
    case 4:
        NJ::_ZN11SaveManager18showSequence2Msg0AEv(this);
        actStep = 5;
        break;
    case 5:
        break;
    default:
        NJ::_ZN11SaveManager13func_020a15f8Ev(this);
        setState(0xd);
        break;
    }
}

void SaveManager::enterAct03() {
    NJ::_ZN12Unk_020a09909startTalkEPKch(this, (char *)"sp_etc_sequence1", 0x28);
    NJ::PlayerOptions_Commit();
    actStep = 0;
}

void Unk_020a3238::execAct03() {
    switch (actStep) {
    case 0:
        if (NI::_ZN11SaveManager13func_020a15c8Ej(this, 0) != 0) {
            NI::Clock_Init();
            actStep = actStep + 1;
        }
        break;
    case 1:
        NI::SaveVillagers_DailyUpdate(NI::gSaveVillagers, 0);
        actStep = actStep + 1;
        break;
    case 2:
        NI::SaveData_Setup(NI::gSaveData, 2);
        actStep = actStep + 1;
        break;
    case 3:
        NI::TownUpdateThread_Create();
        actStep = actStep + 1;
        break;
    case 4:
        NI::SaveData_Apply(NI::gSaveData);
        actStep = actStep + 1;
        break;
    default:
        NI::_ZN11SaveManager8setStateEi(this, 4);
        break;
    }
}

void Unk_020a3238::enterAct04() {
    actStep = 0;
}

void Unk_020a3238::execAct04() {
    switch (actStep) {
    case 0:
        actStep = 1;
        break;
    case 1:
        if (NI::TownUpdateThread_Start() != 0) {
            actStep = 2;
        } else {
            actStep = 3;
        }
        break;
    case 2:
        if (NI::TownUpdateThread_PollDone() != 0) {
            actStep = 3;
        }
        break;
    case 3: {
        s32 r = NI::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 6;
        } else if (r != 3) {
            actStep = 4;
        }
        break;
    }
    case 4: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 24) >> 28);
        if (r == 1) {
            actStep = 6;
        } else if (r == 0) {
            actStep = 5;
        }
        break;
    }
    case 5: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 28) >> 28);
        if (r == 1) {
            actStep = 6;
        } else if (r == 0) {
            actStep = 8;
        }
        break;
    }
    case 6:
        NI::_ZN11SaveManager18showSequence2Msg0AEv(this);
        actStep = 7;
        break;
    case 7:
        break;
    default:
        NI::_ZN11SaveManager13func_020a15f8Ev(this);
        NI::_ZN11SaveManager8setStateEi(this, 0x10);
        break;
    }
}

void Unk_020a3238::enterAct05() {
    NI::_ZN12Unk_020a09909startTalkEPKch(this, (u32 *)"sp_etc_sequence1", 0xc);
    actStep = 0;
}

void Unk_020a3238::execAct05() {
    switch (actStep) {
    case 0:
        if (NI::_ZN11SaveManager13func_020a15c8Ej(this, 0) != 0) {
            actStep = 1;
        }
        break;
    case 1: {
        s32 r = NI::Save_InvalidateAll(this);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN14SaveSlotWriter13eraseSlotStepEi(this, 0);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 3;
        }
        break;
    }
    case 3: {
        s32 r = NI::_ZN14SaveSlotWriter13eraseSlotStepEi(this, 1);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 4;
        }
        break;
    }
    case 4: {
        s32 r = NI::_ZN14SaveSlotWriter13eraseSlotStepEi(this, 2);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 7;
        }
        break;
    }
    case 5:
        NI::_ZN11SaveManager18showSequence2Msg0AEv(this);
        actStep = 6;
        break;
    case 6:
        break;
    default:
        NI::_ZN11SaveManager13func_020a15f8Ev(this);
        NI::_ZN11SaveManager8setStateEi(this, 0xc);
        break;
    }
}

void Unk_020a3238::enterAct06() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    u8 *d = NI::gSaveData;
    u8 buf[0x1c];
    s32 h = NI::PlayerData_GetResident(NI::gSavePlayers, NI::sEraseResidentSlot);
    NI::_ZN11MsgString9BC1Ev(buf);
    NI::_ZN8PlayerId13getNameStringEP9MsgString(NI::_ZN10PlayerData11getPlayerIdEv(h), buf);
    o->setSlot(0, buf);
    NI::_ZN10PlayerData5resetEv(h);
    NI::_ZN8SaveData11resetPlayerEi(d, NI::sEraseResidentSlot);
    NI::_ZN12Unk_020a09909startTalkEPKch(this, (u32 *)"sp_etc_sequence1", 7);
    if (NI::PlayerDataArray_CountUsed(NI::gSavePlayers) == 0) {
        *(u8 *)(d + 0x15e76) = 0;
    }
    actStep = 0;
    NI::_ZN11MsgString9BD1Ev(buf);
}

void Unk_020a3238::execAct06() {
    switch (actStep) {
    case 0:
        if (NI::_ZN11SaveManager13func_020a15c8Ej(this, 0) != 0) {
            actStep = 1;
        }
        break;
    case 1: {
        s32 r = NI::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 5;
        } else if (r != 3) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 24) >> 28);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 3;
        }
        break;
    }
    case 3: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 28) >> 28);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 4;
        }
        break;
    }
    case 4: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, 2);
        if (r == 1) {
            actStep = 5;
        } else if (r == 0) {
            actStep = 7;
        }
        break;
    }
    case 5:
        NI::_ZN11SaveManager18showSequence2Msg0AEv(this);
        actStep = 6;
        break;
    case 6:
        break;
    default:
        NI::_ZN11SaveManager13func_020a15f8Ev(this);
        NI::_ZN11SaveManager8setStateEi(this, 0xc);
        break;
    }
}

void Unk_020a3238::enterAct07() {
    NI::_ZN12Unk_020a09909startTalkEPKch(this, (u32 *)"sp_etc_sequence3", 0x27);
    actStep = 0;
}

void Unk_020a3238::execAct07() {
    switch (actStep) {
    case 0:
        if (NI::_ZN11SaveManager13func_020a15c8Ej(this, 0) != 0) {
            actStep = 1;
        }
        break;
    case 1: {
        s32 r = NI::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 4;
        } else if (r != 3) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 24) >> 28);
        if (r == 1) {
            actStep = 4;
        } else if (r == 0) {
            actStep = 3;
        }
        break;
    }
    case 3: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 28) >> 28);
        if (r == 1) {
            actStep = 4;
        } else if (r == 0) {
            actStep = 6;
        }
        break;
    }
    case 4:
        NI::_ZN11SaveManager18showSequence2Msg0AEv(this);
        actStep = 5;
        break;
    case 5:
        break;
    default:
        NI::_ZN11SaveManager13func_020a15f8Ev(this);
        NI::_ZN11SaveManager8setStateEi(this, 0xf);
        break;
    }
}

void Unk_020a3238::enterAct08() {}

void Unk_020a3238::execAct08() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        NI::SceneWarp_RequestExit(NI::Scene_GetWarpRequest(), 1);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct09() {}

void Unk_020a3238::execAct09() {
    Unk_020a3238_Vec v;
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        v.x = NI::data_020d0770.x;
        v.y = NI::data_020d0770.y;
        v.z = NI::data_020d0770.z;
        NI::SceneWarp_RequestAt(NI::Scene_GetWarpRequest(), 0xd, &v, 0x800000, 0, 3, 2);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct0A() {}

void Unk_020a3238::execAct0A() {
    Unk_020a3238_Vec v;
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        v.x = NI::data_020d0788.x;
        v.y = NI::data_020d0788.y;
        v.z = NI::data_020d0788.z;
        NI::SceneWarp_RequestAt(NI::Scene_GetWarpRequest(), 0xe, &v, 0x800000, 0, 3, 2);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct0B() {}

void Unk_020a3238::execAct0B() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        NI::SceneWarp_RequestFade(NI::Scene_GetWarpRequest(), 0x2f, 3, 2);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct0C() {}

void Unk_020a3238::execAct0C() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        s32 r = NI::Save_LoadSync();
        if (r == 4 || r == 1) {
            NI::_ZN8SaveData5resetEv(NI::gSaveData);
            NI::GuestPlayers_ResetAll();
            NI::VillagerStates_Init();
            NI::SaveData_Setup(NI::gSaveData, 3);
        } else {
            NI::SaveData_Setup(NI::gSaveData, 4);
        }
        NI::SaveData_Apply(NI::gSaveData);
        NI::VillagerStates_Destroy();
        NI::SceneWarp_RequestFade(NI::Scene_GetWarpRequest(), 0x2c, 3, 2);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct0D() {}

void Unk_020a3238::execAct0D() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        NI::Scene_Request(2, 3, 0, 0);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct0E() {}

void Unk_020a3238::execAct0E() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (Unk_020a3238_Is2(NI::gScreenTransition)) {
        if (o->state == 0) {
            o->detachRequest();
            if (NI::_ZN8SaveData8testFlagEj(NI::gSaveData, 0x12) != 0) {
                NI::GameStart_SetMode3();
            } else {
                NI::GameStart_SetMode4();
            }
            NI::GameStart_SetupSave();
            NI::SceneWarp_RequestFade(NI::Scene_GetWarpRequest(), 0x2d, 3, 0);
            NI::_ZN11SaveManager8setStateEi(this, 0);
        }
    }
}

void Unk_020a3238::enterAct0F() {}

void Unk_020a3238::execAct0F() {
    Unk_020a3238_Vec v;
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (Unk_020a3238_Is2(NI::gScreenTransition)) {
        if (o->state == 0) {
            o->detachRequest();
            NI::Town_FindTownHallFront(NI::TownBlockMap_Get(), &v, 0, 0);
            NI::SceneWarp_RequestAt(NI::Scene_GetWarpRequest(), 0, &v, 0x400000, -0x8000, 3, 2);
            NI::_ZN11SaveManager8setStateEi(this, 0);
        }
    }
}

void Unk_020a3238::enterAct10() {}

void Unk_020a3238::execAct10() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        if (NI::Scene_GetCurrent() == 6) {
            NI::SceneWarp_RequestExit(NI::Scene_GetWarpRequest(), 2);
        } else {
            NI::SceneWarp_RequestExit(NI::Scene_GetWarpRequest(), 0);
        }
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct11() {}

void Unk_020a3238::execAct11() {
    TalkWindowState *o = NI::TalkWindow_Get(0);
    if (o->state == 0) {
        o->detachRequest();
        NI::SceneWarp_RequestExit(NI::Scene_GetWarpRequest(), 2);
        NI::_ZN11SaveManager8setStateEi(this, 0);
    }
}

void Unk_020a3238::enterAct12() {
    actStep = 0;
}

void Unk_020a3238::execAct12() {
    switch (actStep) {
    case 0: {
        s32 r = NI::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 3;
        } else if (r != 3) {
            actStep = 1;
        }
        break;
    }
    case 1: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 24) >> 28);
        if (r == 1) {
            actStep = 3;
        } else if (r == 0) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, 2);
        if (r == 1) {
            actStep = 3;
        } else if (r == 0) {
            actStep = 4;
        }
        break;
    }
    case 3:
        break;
    default:
        NI::_ZN11SaveManager8setStateEi(this, 0);
        break;
    }
}

void Unk_020a3238::enterAct13() {
    NI::_ZN12Unk_02097ff49clearFlagEj(NI::PlayerData_GetCurrent(this), 2);
    actStep = 0;
}

void Unk_020a3238::execAct13() {
    switch (actStep) {
    case 0: {
        s32 r = NI::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            actStep = 3;
        } else if (r != 3) {
            actStep = 1;
        }
        break;
    }
    case 1: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, (u32)(slotOrder << 24) >> 28);
        if (r == 1) {
            actStep = 3;
        } else if (r == 0) {
            actStep = 2;
        }
        break;
    }
    case 2: {
        s32 r = NI::_ZN14SaveSlotWriter12saveSlotStepEi(this, 2);
        if (r == 1) {
            actStep = 3;
        } else if (r == 0) {
            actStep = 4;
        }
        break;
    }
    case 3:
        break;
    default:
        NI::_ZN11SaveManager8setStateEi(this, 0);
        break;
    }
}

void Unk_020a3238::enterAct14() {
    NI::SaveManager_StartGatekeeperTalk(this, 1);
    NI::Constellation_PrepareExchange();
}

extern "C" void SaveManager_ExecAct14(Unk_020a25d8 *p) {
    switch (p->actStep) {
    case 0:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommCtrl_SendAct07()) {
            p->actStep = 1;
        }
        break;
    case 1:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (p->hostMemberMask != 0) {
            p->sendChunk = 0;
            p->actStep = 2;
        }
        break;
    case 2:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_VillagerTransfer(&p->sendChunk)) {
            p->sendChunk = 0;
            p->actStep = 3;
        }
        break;
    case 3:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::_ZN18TownCompressThread6isDoneEv(p->townCompressThread)) {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            for (; r5 >= 0; r5--) {
                if (r5 != 0) {
                    u32 m = (u16)(1 << r5);
                    if (m == (m & p->hostMemberMask)) {
                        if (NH::PlayerData_IsUsedByIndex(r5 + 3) == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (!r6) {
                p->actStep = 4;
            }
        }
        break;
    case 4:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::func_020a03f0()) {
            NH::PlayerActor_GetActor(4);
            NH::ProcBase_RequestDelete();
            p->actStep = 5;
        }
        break;
    case 5:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::PlayerActor_GetActor(4) == 0) {
            if (NH::CommSend_JoinReady()) {
                p->actStep = 6;
            }
        }
        break;
    case 6:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (p->dateTimeReceived != 0) {
            u32 r7 = NH::Net_GetMyAid();
            CommManager *r5 = NH::gCommManager;
            r5->myAid = r7;
            void *r6 = NH::PlayerData_Get(NH::PlayerSession_GetDataIndex(r5->localSlot));
            NH::MI_CpuCopy8(r6, NH::PlayerData_Get(r5->myAid + 3), 0x228c);
            NH::sSessionResidentIndex = NH::PlayerSession_GetDataIndex(r5->localSlot);
            r5->localSlot = r7;
            u32 cnt = 0;
            u32 zero = 0;
            s32 i = 3;
            for (; i >= 0; i--) {
                if (p->hostMemberMask & (1 << i)) {
                    r5->setSlotActive(i, 1);
                    cnt = (u8)(cnt + 1);
                } else {
                    r5->setSlotActive(i, zero);
                }
            }
            r5->setMemberCount(cnt);
            NH::NetArea_SetSlotStatus(r7, 0xc, 1, 0, 7);
            NH::PlayerSession_SetDataIndex(0, p->hostDataIndex);
            NH::PlayerSession_SetDataIndex(r7, r7 + 3);
            NH::MI_CpuCopy8(NH::gTownTransferBuf, NH::gSaveData, 0x15fe0);
            u8 buf1[8];
            u8 buf2[8];
            NH::MI_CpuCopy8(p->hostDateTime, buf1, 8);
            u32 *const r7p = &NH::data_021ed304;
            u32 r6b = NH::ClockOffset_CalcMinutes(r7p, buf1);
            NH::MI_CpuCopy8(p->hostDateTime, buf2, 8);
            u32 h = NH::ClockOffset_CalcSeconds(r7p, buf2);
            *r7p = r6b;
            NH::data_021ed2d0.unk_38 = h;
            if (NH::TownBlockMap_Get()) {
                NH::TownBlockMap_Get()->updateAcreIds();
                NH::TownBlockMap_Get()->bindBg();
                NH::Town_ClearBorderTrees(NH::TownBlockMap_Get());
            }
            NH::HouseRoomMaps_UpdateAll();
            NH::HouseRoomMaps_BindBg();
            NH::Comm_ResetPeerState(4);
            NH::Melody_SetPacked((u8 *)((u32)NH::gSaveData + 0x15fa8));
            NH::Weather_RerollRainSlant();
            p->unk_d2 = 1;
            r5->setMode(1);
            p->actStep = 7;
        }
        break;
    case 7:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_JoinDone(NH::Comm_GetRemoteMask())) {
            p->actStep = 8;
        }
        break;
    case 8:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_Z20NetOverlay_AssertAnyv();
            if (NH::Net_IsReadyToSend()) {
                NH::gCommManager->setMode(2);
                if (NH::SpNpcCopper_CheckKatieEscort()) {
                    NH::SceneWarp_RequestExit(NH::Scene_GetWarpRequest(), 2);
                    NH::SceneWarp_SetFadeOut(NH::Scene_GetWarpRequest(), 3);
                } else {
                    NH::SceneWarp_RequestExit(NH::Scene_GetWarpRequest(), 0);
                    NH::SceneWarp_SetFadeOut(NH::Scene_GetWarpRequest(), 3);
                }
                NH::data_021c3cb8 = 1;
                p->actStep = 9;
            }
        }
        break;
    }
}

extern "C" void SaveManager_EnterAct15(Unk_020a25d8 *p) {
    NH::SaveManager_StartGatekeeperTalk(p, 1);
    if (NH::gCommManager->memberCount == 1) {
        NH::LetterDelivery_DeliverOutgoing();
        NH::LetterDelivery_DeliverOutgoing();
        NH::Constellation_PrepareExchange();
        NH::JoinHistory_Clear();
    }
}

extern "C" void SaveManager_ExecAct15(Unk_020a25d8 *p) {
    switch (p->actStep) {
    case 0: {
        u32 r5 = NH::Comm_GetRemoteMask();
        r5 |= 1 << NH::NetSession_GetLastSyncSlot();
        if (NH::Comm_IsConnectionLost(r5)) {
            NH::Comm_SetLostFlag();
        } else if (NH::NetSession_GetCtrl07Received()) {
            p->actStep = 1;
        }
        break;
    }
    case 1:
    case 2: {
        u32 r5 = NH::Comm_GetRemoteMask();
        r5 |= 1 << NH::NetSession_GetLastSyncSlot();
        if (NH::Comm_IsConnectionLost(r5)) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_ZN12Unk_0209f30413func_0209f390EPhjjj(p, &p->actStep, 1, 0xd, 0x2f);
            if (p->actStep > 2) {
                NH::NetArea_SetSlotStatus(NH::sJoiningAid, 0xc, 1, 0, 7);
                CommManager *g = NH::gCommManager;
                g->setMemberCount((u8)(g->memberCount + 1));
                g->setSlotActive(NH::sJoiningAid, 1);
                NH::Comm_ResetPeerState(NH::sJoiningAid);
            }
        }
        break;
    }
    case 3:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_MemberInfo((u16)(1 << NH::sJoiningAid))) {
            p->actStep = 4;
        }
        break;
    case 4:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommBlock_BuildPacket(NH::sJoiningAid)) {
            p->actStep = 5;
        }
        break;
    case 5:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_BuiltPacket((u16)(1 << NH::sJoiningAid))) {
            p->sendChunk = 0;
            p->actStep = 6;
        }
        break;
    case 6:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_SyncVarChunk(&p->sendChunk, (u16)(1 << NH::sJoiningAid))) {
            p->actStep = 7;
        }
        break;
    case 7:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_SlotStatusAll(NH::sJoiningAid)) {
            NH::_ZN18TownCompressThread5startEj(p->townCompressThread, 1);
            p->sendChunk = 0;
            p->actStep = 8;
        }
        break;
    case 8:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::_ZN18TownCompressThread6isDoneEv(p->townCompressThread)) {
            NH::DC_FlushAll();
            if (NH::CommSend_TownChunk(&p->sendChunk, (u16)(1 << NH::sJoiningAid))) {
                p->actStep = 9;
            }
        }
        break;
    case 9:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (p->joinReady != 0) {
            if (NH::CommSend_DateTime((u16)(1 << NH::sJoiningAid))) {
                p->actStep = 10;
            }
        }
        break;
    case 10:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_Z20NetOverlay_AssertAnyv();
            if (NH::Net_IsReadyToSend()) {
                if (p->joinDone != 0) {
                    NH::gCommManager->setMode(2);
                    p->unk_d2 = 1;
                    NH::JoinHistory_Push(NH::sJoiningAid);
                    p->actStep = 11;
                }
            }
        }
        break;
    }
}

extern "C" void SaveManager_EnterAct16(Unk_020a25d8 *p) {
    NH::SaveManager_StartGatekeeperTalk(p, 1);
}

extern "C" void SaveManager_ExecAct16(Unk_020a25d8 *p) {
    switch (p->actStep) {
    case 0:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::gCommManager->getMode() == 1) {
            NH::NetArea_SetSlotStatus(NH::sJoiningAid, 0xc, 1, 0, 7);
            CommManager *g = NH::gCommManager;
            g->setMemberCount((u8)(g->memberCount + 1));
            g->setSlotActive(NH::sJoiningAid, 1);
            NH::Comm_ResetPeerState(NH::sJoiningAid);
            p->actStep = 1;
        }
        break;
    case 1:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::CommSend_PlayerData(&p->sendChunk, (u16)(1 << NH::sJoiningAid))) {
            p->actStep = 2;
        }
        break;
    case 2:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_Z20NetOverlay_AssertAnyv();
            if (NH::Net_IsReadyToSend()) {
                if (p->joinDone != 0) {
                    NH::gCommManager->setMode(2);
                    p->unk_d2 = 1;
                    p->actStep = 3;
                }
            }
        }
        break;
    }
}

extern "C" void SaveManager_EnterAct17(Unk_020a25d8 *p) {
    NH::SaveManager_StartGatekeeperTalk(p, 0);
    NH::_ZN12Unk_02097ff47setFlagEj(NH::PlayerData_GetCurrent(), 2);
    NH::NetSession_SetLastSyncSlot(NH::gCommManager->myAid);
}

extern "C" void SaveManager_ExecAct17(Unk_020a25d8 *p) {
    switch (p->actStep) {
    case 0:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::_ZN11SaveManager13func_020a15c8Ej(p, 0)) {
            p->memberMask = NH::Comm_GetMemberMask();
            p->actStep = 1;
        }
        break;
    case 1:
    case 2:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_ZN12Unk_0209f30413func_0209f304EPhj(p, &p->actStep, 1);
        }
        break;
    case 3:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (NH::_ZN11SaveManager18isTransferReceivedEj(p, NH::gCommManager->myAid)) {
            NH::_ZN11SaveManager22backupVillagerTransferEv(p);
            p->actStep = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        NH::_ZN12Unk_0209f30419runSyncedSaveClientEPhjjhhhj(p, &p->actStep, 4, 0xe, 0x14, 1, 0, 1);
        break;
    case 12:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            CommManager *g = NH::gCommManager;
            for (; r5 >= 0; r5--) {
                if (g->isSlotActive(r5)) {
                    if (!g->isMyAid(r5)) {
                        if (g->getAckCount(r5)) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (NH::CommCtrl_SendAct11()) {
                    p->actStep = 0xd;
                }
            }
        }
        break;
    case 13:
        if (NH::Comm_IsConnectionLost(1)) {
            NH::Comm_SetLostFlag();
        } else if (p->ctrlAct12 != 0) {
            NH::NetSession_ReturnToSolo(p, NH::sSessionResidentIndex, 0);
            NH::sSessionResidentIndex = 7;
            NH::NetOverlay_Restore();
            NH::Weather_RerollRainSlant();
            p->actStep = 0x19;
        }
        break;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
        NH::SaveManager_RunSessionEnd(p, &p->actStep, 0xe, 0x14, 1, 1);
        break;
    default:
        NH::_ZN11SaveManager13func_020a15f8Ev(p);
        NH::_ZN11SaveManager8setStateEi(p, 8);
        break;
    }
}

extern "C" void SaveManager_EnterAct18(Unk_020a25d8 *p) {
    NH::SaveManager_StartGatekeeperTalk(p, 0);
}

extern "C" void SaveManager_ExecAct18(Unk_020a25d8 *p) {
    switch (p->actStep) {
    case 0:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::_ZN11SaveManager13func_020a15c8Ej(p, 0)) {
            p->memberMask = NH::Comm_GetMemberMask();
            NH::VillagerTransfer_PlanSwap(p);
            NH::LostChild_ResetAndPairLast(p);
            p->actStep = 1;
        }
        break;
    case 1:
    case 2:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_ZN12Unk_0209f30413func_0209f390EPhjjj(p, &p->actStep, 1, 0x2e, 0x2e);
        }
        break;
    case 3:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::_ZN12Unk_0209f30413func_0209f344Ev(p)) {
            p->actStep = 4;
        }
        break;
    case 4:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else if (NH::VillagerTransfer_SendReplies(p)) {
            s32 r5 = NH::NetSession_GetLastSyncSlot();
            u32 r7 = NH::_ZN11SaveManager15getTransferDestEj(p, r5);
            void *r6 = NH::TownExchange_GetForAid(r5);
            NH::MI_CpuCopy8(r6, NH::TownExchange_GetForAid(r7), 0x84c);
            NH::TownExchange_Clear(r6);
            NH::_ZN11SaveManager22backupVillagerTransferEv(p);
            NH::JoinHistory_Remove((u8)r5);
            p->actStep = 5;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        u32 t = NH::Comm_GetRemoteMask();
        NH::SaveManager_RunSyncedSaveHost(p, &p->actStep, 1, 5, 0xf, 0x15, 4, 1, t);
        break;
    }
    case 12:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            CommManager *g = NH::gCommManager;
            for (; r5 >= 0; r5--) {
                if (g->isSlotActive(r5)) {
                    if (!g->isMyAid(r5)) {
                        if (p->ctrlAct11[r5] == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (g->getAckCount(NH::NetSession_GetLastSyncSlot())) {
                    r6 = FALSE;
                }
            }
            if (r6) {
                if (NH::CommCtrl_SendAct12((u16)(1 << NH::NetSession_GetLastSyncSlot()))) {
                    p->actStep = 0xd;
                }
            }
        }
        break;
    case 13: {
        u32 r5 = NH::Comm_GetRemoteMask();
        r5 ^= (u16)(1 << NH::NetSession_GetLastSyncSlot());
        if (NH::Comm_IsConnectionLost(r5)) {
            NH::Comm_SetLostFlag();
        } else {
            NH::_Z20NetOverlay_AssertAnyv();
            if (NH::Net_IsReadyToSend() || NH::Net_GetMemberCount() <= 1) {
                NH::Comm_RemoveMember(NH::NetSession_GetLastSyncSlot());
                CommManager *g = NH::gCommManager;
                g->setMode(2);
                if (g->isOnline()) {
                    u8 b = NH::NetSession_GetLastSyncSlot();
                    g = NH::gCommManager;
                    g->beginRecord();
                    g->writeRecord(&b, 1);
                    g->endRecord(5, 5);
                }
                p->actStep = 0xe;
            }
        }
        break;
    }
    case 14:
        if (NH::Comm_IsConnectionLost(NH::Comm_GetRemoteMask())) {
            NH::Comm_SetLostFlag();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            CommManager *g = NH::gCommManager;
            for (; r5 >= 0; r5--) {
                if (g->isSlotActive(r5)) {
                    if (!g->isMyAid(r5)) {
                        if (p->recvAct06[r5] == 0) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                NH::Weather_RerollRainSlant();
                g = NH::gCommManager;
                g->beginRecord();
                g->endRecord(7, 5);
                if (g->memberCount == 1) {
                    NH::Town_OnLoad();
                }
                p->actStep = 0x1a;
            }
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        NH::SaveManager_RunSessionEnd(p, &p->actStep, 0xf, 0x15, NH::Comm_GetRemoteMask(), 1);
        break;
    default:
        NH::_ZN11SaveManager13func_020a15f8Ev(p);
        NH::_ZN11SaveManager8setStateEi(p, 10);
        break;
    }
}

extern "C" void SaveManager_EnterAct19(Unk_020a25d8 *p) {
    NH::SaveManager_StartGatekeeperTalk(p, 0);
}

void Unk_020a1c88::execAct19() {
    switch (actStep) {
    case 0:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (NG::_ZN11SaveManager13func_020a15c8Ej(this, 0)) {
            memberMask = NG::Comm_GetMemberMask();
            actStep = 1;
        }
        break;
    case 1:
    case 2:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else {
            NG::_ZN12Unk_0209f30413func_0209f304EPhj(this, &actStep, 1);
        }
        break;
    case 3:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (NG::_ZN11SaveManager18isTransferReceivedEj(this, NG::gCommManager->myAid)) {
            NG::_ZN11SaveManager22backupVillagerTransferEv(this);
            actStep = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        NG::_ZN12Unk_0209f30419runSyncedSaveClientEPhjjhhhj(this, &actStep, 4, 0xf, 0x15, 1, 1, 1);
        break;
    case 12:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else {
            BOOL r5 = TRUE;
            if (NG::gCommManager->getAckCount(NG::NetSession_GetLastSyncSlot())) {
                r5 = FALSE;
            }
            if (r5) {
                if (NG::CommCtrl_SendAct11()) {
                    actStep = 0xd;
                }
            }
        }
        break;
    case 13:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else {
            NG::_Z20NetOverlay_AssertAnyv();
            if (NG::Net_IsReadyToSend()) {
                u32 t = NG::Comm_GetMemberMask();
                if (memberMask != t) {
                    CommManager *r5;
                    NG::NetSession_RemoveSlot(NG::NetSession_GetLastSyncSlot());
                    r5 = NG::gCommManager;
                    r5->setMode(2);
                    r5->beginRecord();
                    r5->endRecord(6, 0);
                    actStep = 0xe;
                }
            }
        }
        break;
    case 14:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (recvAct07) {
            NG::Weather_RerollRainSlant();
            actStep = 0x1a;
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        NG::SaveManager_RunSessionEnd(this, &actStep, 0xf, 0x15, 1, 1);
        break;
    default:
        NG::_ZN11SaveManager13func_020a15f8Ev(this);
        NG::_ZN11SaveManager8setStateEi(this, 0xa);
        break;
    }
}

void Unk_020a1c88::enterAct1A() {
    NG::SaveManager_StartSequence2Talk(this);
}

void Unk_020a1c88::execAct1A() {
    switch (actStep) {
    case 0:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else if (NG::_ZN11SaveManager13func_020a15c8Ej(this, 0)) {
            if (NG::func_0209f23c()) {
                NG::VillagerTransfer_PlanRotate(this);
                NG::LostChild_ResetAndPairAll(this);
            }
            actStep = 1;
        }
        break;
    case 1:
    case 2:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else {
            NG::_ZN12Unk_0209f30413func_0209f390EPhjjj(this, &actStep, 1, 0x2e, 0x2e);
        }
        break;
    case 3:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else if (NG::_ZN12Unk_0209f30413func_0209f344Ev(this)) {
            actStep = 4;
        }
        break;
    case 4:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else if (NG::func_0209f23c()) {
            if (NG::VillagerTransfer_SendReplies(this)) {
                s32 r5 = NG::_ZN11SaveManager15getTransferDestEj(this, 0);
                if (r5 < 4) {
                    void *dst = NG::TownExchange_GetForAid(0);
                    void *src = NG::TownExchange_GetForAid(r5);
                    NG::MI_CpuCopy8(src, dst, 0x84c);
                } else {
                    NG::TownExchange_Clear(NG::TownExchange_GetForAid(0));
                }
                for (r5 = 2; r5 >= 0; r5--) {
                    NG::TownExchange_Clear(NG::TownExchange_GetForAid(r5 + 1));
                }
                NG::_ZN11SaveManager22backupVillagerTransferEv(this);
                actStep = 5;
            }
        } else {
            actStep = 5;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        BOOL r5;
        if (NG::func_0209f23c()) r5 = TRUE; else r5 = FALSE;
        NG::SaveManager_RunSyncedSaveHost(this, &actStep, 1, 5, 0x10, 0x16, 4, r5, NG::Comm_GetRemoteMask());
        break;
    }
    case 12:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else {
            NG::_Z20NetOverlay_AssertAnyv();
            if (NG::Net_IsReadyToSend()) {
                if (!NG::func_0209f23c()) {
                    NG::gCommManager->setMode(2);
                    actStep = 0xe;
                } else {
                    actStep = 0xd;
                }
            }
        }
        break;
    case 14:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else {
            CommManager *r5 = NG::gCommManager;
            r5->beginRecord();
            r5->endRecord(7, 5);
            actStep = 0x1b;
        }
        break;
    case 13:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            CommManager *r7 = NG::gCommManager;
            for (; r5 >= 0; r5--) {
                if (r7->isSlotActive(r5)) {
                    if (!r7->isMyAid(r5)) {
                        if (!ctrlAct11[r5]) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                for (r5 = 3; r5 >= 0; r5--) {
                    if (r7->isSlotActive(r5)) {
                        if (!r7->isMyAid(r5)) {
                            if (r7->getAckCount(r5)) {
                                r6 = FALSE;
                                break;
                            }
                        }
                    }
                }
            }
            if (r6) {
                if (NG::CommCtrl_SendAct12(NG::Comm_GetRemoteMask())) {
                    actStep = 0xf;
                }
            }
        }
        break;
    case 15:
        if (NG::Comm_IsConnectionLost(NG::Comm_GetRemoteMask())) {
            NG::Comm_SetLostFlag();
        } else {
            BOOL r6 = TRUE;
            s32 r5;
            CommManager *r7;
            NG::Comm_EnterCritical();
            r5 = 3;
            r7 = NG::gCommManager;
            for (; r5 >= 0; r5--) {
                if (r7->isSlotActive(r5)) {
                    if (!r7->isMyAid(r5)) {
                        if (!recvAct06[r5]) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            NG::Comm_LeaveCritical();
            if (r6) {
                NG::NetSession_ReturnToSolo(this, 7, 1);
                NG::NetOverlay_Restore();
                actStep = 0x1b;
            }
        }
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        NG::SaveManager_RunSessionEnd(this, &actStep, 0x10, 0x16, NG::Comm_GetRemoteMask(), 1);
        break;
    default: {
        u8 b;
        NG::_ZN11SaveManager13func_020a15f8Ev(this);
        if (NG::func_0209f23c()) {
            b = 6;
            NG::TalkWindow_Get(0)->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
        }
        NG::_ZN11SaveManager8setStateEi(this, 8);
        break;
    }
    }
}

void Unk_020a1c88::enterAct1B() {
    NG::SaveManager_StartSequence2Talk(this);
}

void Unk_020a1c88::execAct1B() {
    switch (actStep) {
    case 0:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (NG::_ZN11SaveManager13func_020a15c8Ej(this, 0)) {
            actStep = 1;
        }
        break;
    case 1:
    case 2:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else {
            NG::_ZN12Unk_0209f30413func_0209f304EPhj(this, &actStep, 1);
        }
        break;
    case 3:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (NG::func_0209f23c()) {
            if (NG::_ZN11SaveManager18isTransferReceivedEj(this, NG::gCommManager->myAid)) {
                NG::_ZN11SaveManager22backupVillagerTransferEv(this);
                actStep = 4;
            }
        } else {
            actStep = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        BOOL a, b;
        if (NG::func_0209f23c()) a = FALSE; else a = TRUE;
        if (NG::func_0209f23c()) b = TRUE; else b = FALSE;
        NG::_ZN12Unk_0209f30419runSyncedSaveClientEPhjjhhhj(this, &actStep, 4, 0x11, 0x17, b, a, 1);
        break;
    }
    case 12:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else {
            NG::_Z20NetOverlay_AssertAnyv();
            if (NG::Net_IsReadyToSend()) {
                if (!NG::func_0209f23c()) {
                    actStep = 0xd;
                } else {
                    actStep = 0xe;
                }
            }
        }
        break;
    case 13:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (recvAct07) {
            NG::gCommManager->setMode(2);
            actStep = 0x1c;
        }
        break;
    case 14:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            CommManager *g = NG::gCommManager;
            for (; r5 >= 0; r5--) {
                if (g->isSlotActive(r5)) {
                    if (!g->isMyAid(r5)) {
                        if (g->getAckCount(r5)) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (NG::CommCtrl_SendAct11()) {
                    actStep = 0xf;
                }
            }
        }
        break;
    case 15:
        if (NG::Comm_IsConnectionLost(1)) {
            NG::Comm_SetLostFlag();
        } else if (ctrlAct12) {
            if (NG::CommCtrl_SendAct13()) {
                NG::gCommManager->setErrorMode(2);
                actStep = 0x10;
            }
        }
        break;
    case 16:
        NG::_Z20NetOverlay_AssertAnyv();
        if (!NG::Net_PollConnected()) {
            NG::NetSession_ReturnToSolo(this, NG::sSessionResidentIndex, 0);
            NG::NetOverlay_Restore();
            NG::sSessionResidentIndex = 7;
            actStep = 0x1c;
        }
        break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        NG::SaveManager_RunSessionEnd(this, &actStep, 0x11, 0x17, 1, 1);
        break;
    default: {
        u8 b;
        NG::_ZN11SaveManager13func_020a15f8Ev(this);
        if (NG::func_0209f23c()) {
            b = 6;
            NG::TalkWindow_Get(0)->setNextMessage(&b, (u8 *)"sp_etc_sequence2");
            NG::_ZN11SaveManager8setStateEi(this, 0x11);
        } else {
            NG::_ZN11SaveManager8setStateEi(this, 8);
        }
        break;
    }
    }
}

void Unk_020a1c88::enterAct1C() {
    NG::_ZN12Unk_020a09909startTalkEPKch(this, (u8 *)"sp_etc_sequence1", 0x23);
}

void Unk_020a1c88::execAct1C() {
    if (NG::_ZN11SaveManager13func_020a15c8Ej(this, 1)) {
        NG::NetOverlay_LoadWireless();
        NG::_ZN11SaveManager8setStateEi(this, 0x1d);
    }
}

void Unk_020a1c88::enterAct1D() {
    u8 buf[16];
    unk_cc = 0x258;
    NG::Comm_Start(1, 2, 0);
    NG::Comm_SetRecvBuffersAsHost();
    NG::MI_CpuCopy8(NG::TownId_GetName(NG::gSaveTownId), buf, 8);
    buf[9] = 1;
    buf[8] = 0;
    if (NG::_ZN8SaveData7isValidEv(NG::gSaveData) == 0) {
        buf[8] = 1;
    }
    NG::_Z25NetOverlay_AssertWirelessv();
    NG::Net_SetLocalGameInfo(buf, 10);
    freePlayerSlot = NG::PlayerDataArray_FindUnused(NG::gSavePlayers);
}

void Unk_020a1c88::execAct1D() {
    u8 b[2];
    s32 n = NG::func_020a0210(this);
    if (n > 0 && n < 4) {
        TalkWindowState *p = NG::TalkWindow_Get(0);
        p->hideBusyIcon();
        p->unlockAdvance();
        b[0] = 0x26;
        p->setNextMessage(&b[0], (u8 *)"sp_etc_sequence1");
        NG::_ZN11SaveManager8setStateEi(this, 0);
    } else {
        BOOL ok = FALSE;
        if (NG::Net_GetMemberCount() == 2) {
            unk_cc = ok;
            return;
        }
        if (NG::Net_GetMemberCount() == 1) {
            if (NG::Math_CountDownU16(&unk_cc) == 0) {
                ok = TRUE;
            } else {
                NG::Comm_SendEmpty();
            }
        } else {
            ok = TRUE;
        }
        if (ok) {
            if (NG::Wifi_EndSession(this)) {
                NG::NetOverlay_Restore();
            }
            TalkWindowState *p = NG::TalkWindow_Get(0);
            b[1] = 0x25;
            p->setNextMessage(&b[1], (u8 *)"sp_etc_sequence1");
            p->hideBusyIcon();
            p->unlockAdvance();
            NG::_ZN11SaveManager8setStateEi(this, 0xc);
        }
    }
}

void Unk_020a1c88::enterAct1E() {
    actStep = 0;
    if (NG::_ZN8SaveData7isValidEv(NG::gSaveData) == 0) {
        noSaveData = 1;
    } else {
        noSaveData = 0;
    }
}

void SaveManager::execAct1E() {
    switch (actStep) {
    case 0:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else if (func_020a15c8(0)) {
            actStep = 1;
        }
        break;
    case 1:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else {
            s32 r = NF::func_020a0210();
            if (r > 0) {
                if (r < 4) {
                    actStep = 2;
                }
            }
        }
        break;
    case 2:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else if (unk_fd != 0) {
            if (noSaveData == 0) {
                NF::SaveData_Setup(NF::gSaveData, 5);
                NF::SaveData_Apply(NF::gSaveData);
            } else {
                NF::_ZN8SaveData7setFlagEj(NF::gSaveData, 0x12);
            }
            NF::PlayerOptions_Commit();
            actStep = 3;
        }
        break;
    case 3:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else {
            s32 r = NF::_ZN14SaveSlotWriter12saveSlotStepEi(this, 2);
            if (r == 1) {
                actStep = 0xb;
            } else if (r == 0) {
                actStep = 4;
            }
        }
        break;
    case 4:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else {
            s32 r = verifySlotsStep();
            if (r == 1) {
                actStep = 0xb;
            } else if (r != 3) {
                NF::_ZN11SaveRecord415markInterruptedEv(NF::gSaveFooter);
                actStep = 5;
            }
        }
        break;
    case 5:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else {
            s32 r = NF::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
            if (r == 1) {
                actStep = 0xb;
            } else if (r == 0) {
                actStep = 6;
            }
        }
        break;
    case 6:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::Comm_SetLostFlag();
        } else {
            u32 t = ctrlAct0E[NF::func_020a0210()];
            if (t == 1) {
                NF::_ZN11SaveRecord416setStateValidAltEv(NF::gSaveFooter);
                ctrlAct0E[NF::func_020a0210()] = 0;
                NF::gCommManager->setErrorMode(2);
                actStep = 7;
            } else if (t == 2) {
                actStep = 0x11;
            }
        }
        break;
    case 7: {
        NF::Comm_IsConnectionLost(-1);
        s32 r = NF::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
        if (r == 1) {
            NF::gCommManager->setErrorMode(0);
            actStep = 0xb;
        } else if (r == 0) {
            actStep = 8;
        }
        break;
    }
    case 8:
        if (NF::Comm_IsConnectionLost(-1)) {
            NF::_ZN11SaveRecord415markInterruptedEv(NF::gSaveFooter);
            actStep = 0xa;
        } else {
            s32 i = NF::func_020a0210();
            if (NF::CommCtrl_SendAct0E(1, (u16)(1 << i))) {
                NF::gCommManager->setErrorMode(0);
                actStep = 9;
            }
        }
        break;
    case 9: {
        u32 m = NF::Net_GetConnectedMask();
        if ((m & (1 << NF::func_020a0210())) == 0) {
            if (NF::Wifi_EndSession(this)) {
                NF::NetOverlay_Restore();
            }
            actStep = 0x16;
        }
        break;
    }
    case 10: {
        NF::Comm_IsConnectionLost(-1);
        s32 r = NF::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
        if (r == 1) {
            NF::gCommManager->setErrorMode(0);
            actStep = 0xb;
        } else if (r == 0) {
            NF::gCommManager->setErrorMode(0);
            actStep = 0x11;
        }
        break;
    }
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21: {
        s32 i = NF::func_020a0210();
        NF::SaveManager_RunSessionEnd(this, &actStep, 0xb, 0x11, (u16)(1 << i), 1);
        break;
    }
    default:
        func_020a15f8();
        NF::_ZN11SaveManager8setStateEi(this, 0xe);
        break;
    }
}

void SaveManager::enterAct1F() {
    NF::Net_GetMyAid(NF::_ZN12Unk_02097ff49clearFlagEj(NF::PlayerData_GetCurrent(), 2));
    NF::Comm_PrepareJoin();
    actStep = 0;
}

void SaveManager::execAct1F() {
    switch (actStep) {
    case 0:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::Comm_SetLostFlag();
        } else if (NF::CommCtrl_SendAct14()) {
            actStep = 1;
        }
        break;
    case 1:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::Comm_SetLostFlag();
        } else if (NF::CommSend_PlayerDataToHost(&sendChunk)) {
            sendChunk = 0;
            actStep = 2;
        }
        break;
    case 2:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::Comm_SetLostFlag();
        } else if (NF::CommSend_LetterStorageToHost(&sendChunk)) {
            sendChunk = 0;
            actStep = 3;
        }
        break;
    case 3:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::Comm_SetLostFlag();
        } else if (NF::CommCtrl_SendAct17()) {
            actStep = 4;
        }
        break;
    case 4:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::Comm_SetLostFlag();
        } else if (NF::Net_IsReadyToSend(NF::_Z20NetOverlay_AssertAnyv())) {
            NF::Hud_GetWallet()->freezeValue();
            NF::MI_CpuCopy8(NF::PlayerData_GetCurrent(), playerDataCopy, 0x228c);
            NF::_ZN10PlayerData5resetEv(NF::PlayerData_GetCurrent());
            NF::_ZN8SaveData11resetPlayerEi(NF::gSaveData, NF::PlayerData_GetCurrentIndex());
            actStep = 5;
        }
        break;
    case 5:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::Comm_SetLostFlag();
        } else {
            s32 r = verifySlotsStep();
            if (r == 1) {
                actStep = 0xb;
            } else if (r != 3) {
                NF::gCommManager->setErrorMode(2);
                actStep = 6;
            }
        }
        break;
    case 6: {
        NF::Comm_IsConnectionLost(1);
        s32 r = NF::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
        if (r == 1) {
            NF::gCommManager->setErrorMode(0);
            actStep = 0xb;
        } else if (r == 0) {
            actStep = 7;
        }
        break;
    }
    case 7:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::_ZN11SaveRecord415markInterruptedEv(NF::gSaveFooter);
            actStep = 0xa;
        } else if (NF::CommCtrl_SendAct0E(1, 1)) {
            actStep = 8;
        }
        break;
    case 8:
        if (NF::Comm_IsConnectionLost(1)) {
            NF::_ZN11SaveRecord415markInterruptedEv(NF::gSaveFooter);
            actStep = 0xa;
        } else if (NF::Net_IsReadyToSend(NF::_Z20NetOverlay_AssertAnyv())) {
            u32 t = ctrlAct0E[0];
            if (t == 1) {
                NF::gCommManager->setErrorMode(0);
                actStep = 9;
            } else if (t == 2) {
                NF::_ZN11SaveRecord415markInterruptedEv(NF::gSaveFooter);
                actStep = 0xa;
            }
        }
        break;
    case 9:
        if (NF::Wifi_EndSession(this)) {
            NF::NetOverlay_Restore();
        }
        NF::MI_CpuCopy8(playerDataCopy, NF::PlayerData_GetCurrent(), 0x228c);
        NF::Hud_GetWallet()->unfreezeValue();
        actStep = 0x16;
        break;
    case 10: {
        NF::Comm_IsConnectionLost(1);
        s32 r = NF::_ZN14SaveSlotWriter12saveSlotStepEi(this, slotOrder.hi);
        if (r == 1) {
            NF::gCommManager->setErrorMode(0);
            actStep = 0xb;
        } else if (r == 0) {
            NF::gCommManager->setErrorMode(0);
            actStep = 0x11;
        }
        break;
    }
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
        NF::SaveManager_RunSessionEnd(this, &actStep, 0xb, 0x11, 1, 1);
        break;
    default:
        NF::_ZN11SaveManager8setStateEi(this, 0);
        break;
    }
}

void SaveManager::showSequence2Msg0A() {
    u8 b;
    void *o = NF::TalkWindow_Get(0);
    NF::_ZN15TalkWindowState12hideBusyIconEv(o);
    NF::_ZN15TalkWindowState13unlockAdvanceEv(o);
    b = 0xa;
    NF::_ZN15TalkWindowState14setNextMessageEPhPv(o, &b, (u8 *)"sp_etc_sequence2");
}

void SaveManager::showSequence2Msg0B() {
    u8 b;
    void *o = NF::TalkWindow_Get(0);
    NF::_ZN15TalkWindowState12hideBusyIconEv(o);
    NF::_ZN15TalkWindowState13unlockAdvanceEv(o);
    b = 0xb;
    NF::_ZN15TalkWindowState14setNextMessageEPhPv(o, &b, (u8 *)"sp_etc_sequence2");
}

void SaveManager::func_020a15f8() {
    void *o = NF::TalkWindow_Get(0);
    NF::_ZN15TalkWindowState12hideBusyIconEv(o);
    NF::_ZN15TalkWindowState13unlockAdvanceEv(o);
}

BOOL SaveManager::func_020a15c8(u32 v) {
    void *o = NF::TalkWindow_Get(0);
    if (((u32 *)o)[1] == 2) {
        if (v != 0) {
            NF::_ZN15TalkWindowState12showBusyIconEv(o, 1);
        } else {
            NF::_ZN15TalkWindowState12showBusyIconEv(o, 0);
        }
        return TRUE;
    }
    return FALSE;
}

SaveManagerTalk::SaveManagerTalk() {
}

SaveManagerTalk::~SaveManagerTalk() {
}

void SaveManagerTalk::setOwner(u32 v) {
    unk_44 = v;
}

void SaveManagerTalk::onMessageEnd(u32) {
    void *o = NF::TalkWindow_Get(0);
    switch (((u8 *)fileName)[0x1a]) {
    case 0xa:
        NF::_ZN15TalkWindowState11lockAdvanceEv(o);
        break;
    case 8:
        NF::_ZN15TalkWindowState14setNextMessageEPhPv(o, NF::gTalkMsgIndexEnd, 0);
        break;
    case 0x27:
        NF::_ZN15TalkWindowState14setNextMessageEPhPv(o, NF::gTalkMsgIndexEnd, 0);
        break;
    case 0x26:
        NF::_ZN15TalkWindowState11lockAdvanceEv(o);
        NF::_ZN11SaveManager8setStateEi((void *)unk_44, 0x1e);
        break;
    case 0x69:
        NF::_ZN15TalkWindowState14setNextMessageEPhPv(o, NF::gTalkMsgIndexEnd, 0);
        break;
    }
}

void SaveManagerTalk::onChoice(u32) {
}

extern "C" void Save_StoreCurrentPlayerToResident(void) {
    void *o = NF::PlayerData_GetCurrent();
    NF::MI_CpuCopy8(o, (void *)NF::PlayerData_Get(NF::sSessionResidentIndex), 0x228c);
}

void SaveManager::backupVillagerTransfer() {
    u8 *const g = NF::data_021e7f8c;
    NF::_ZN18TownExchangeRecord16incrementCounterEv(g);
    Unk_020a14ac_Ns::MI_CpuCopy8(g, villagerTransferBackup, 0x84c);
}

void SaveManager::restoreVillagerTransfer() {
    NF::MI_CpuCopy8(villagerTransferBackup, NF::data_021e7f8c, 0x84c);
}

u32 SaveManager::func_020a148c() {
    return freePlayerSlot;
}

u32 SaveManager::getTransferDest(u32 i) {
    return transferDests[i];
}

void SaveManager::setTransferDest(u32 i, u8 v) {
    transferDests[i] = v;
}

u32 SaveManager::isTransferReceived(u32 i) {
    return transferReceived[i];
}

void SaveManager::setTransferReceived(u32 i, u8 v) {
    transferReceived[i] = v;
}

AxMail sAxMailBuf;

AxBbsNotice sAxBbsBuf;

BlancaFaceRecord sGameStatsBuf;

Unk_020e27d4_Ent sSaveManagerStates[32] = {
    {*(Unk_020e27d4_Fn *)data_020e273c, *(Unk_020e27d4_Fn *)data_020e2734},
    {*(Unk_020e27d4_Fn *)data_020e25bc, *(Unk_020e27d4_Fn *)data_020e2724},
    {*(Unk_020e27d4_Fn *)data_020e271c, *(Unk_020e27d4_Fn *)data_020e25ac},
    {*(Unk_020e27d4_Fn *)data_020e2574, *(Unk_020e27d4_Fn *)data_020e2704},
    {*(Unk_020e27d4_Fn *)data_020e26fc, *(Unk_020e27d4_Fn *)data_020e26f4},
    {*(Unk_020e27d4_Fn *)data_020e26ec, *(Unk_020e27d4_Fn *)data_020e26e4},
    {*(Unk_020e27d4_Fn *)data_020e26dc, *(Unk_020e27d4_Fn *)data_020e259c},
    {*(Unk_020e27d4_Fn *)data_020e25cc, *(Unk_020e27d4_Fn *)data_020e26c4},
    {*(Unk_020e27d4_Fn *)data_020e26bc, *(Unk_020e27d4_Fn *)data_020e26b4},
    {*(Unk_020e27d4_Fn *)data_020e26ac, *(Unk_020e27d4_Fn *)data_020e26a4},
    {*(Unk_020e27d4_Fn *)data_020e269c, *(Unk_020e27d4_Fn *)data_020e2694},
    {*(Unk_020e27d4_Fn *)data_020e2654, *(Unk_020e27d4_Fn *)data_020e266c},
    {*(Unk_020e27d4_Fn *)data_020e2674, *(Unk_020e27d4_Fn *)data_020e2684},
    {*(Unk_020e27d4_Fn *)data_020e268c, *(Unk_020e27d4_Fn *)data_020e270c},
    {*(Unk_020e27d4_Fn *)data_020e2714, *(Unk_020e27d4_Fn *)data_020e2744},
    {*(Unk_020e27d4_Fn *)data_020e274c, *(Unk_020e27d4_Fn *)data_020e2644},
    {*(Unk_020e27d4_Fn *)data_020e263c, *(Unk_020e27d4_Fn *)data_020e2634},
    {*(Unk_020e27d4_Fn *)data_020e253c, *(Unk_020e27d4_Fn *)data_020e2624},
    {*(Unk_020e27d4_Fn *)data_020e2504, *(Unk_020e27d4_Fn *)data_020e250c},
    {*(Unk_020e27d4_Fn *)data_020e2514, *(Unk_020e27d4_Fn *)data_020e2604},
    {*(Unk_020e27d4_Fn *)data_020e25fc, *(Unk_020e27d4_Fn *)data_020e25f4},
    {*(Unk_020e27d4_Fn *)data_020e25ec, *(Unk_020e27d4_Fn *)data_020e2534},
    {*(Unk_020e27d4_Fn *)data_020e25dc, *(Unk_020e27d4_Fn *)data_020e2554},
    {*(Unk_020e27d4_Fn *)data_020e2564, *(Unk_020e27d4_Fn *)data_020e25c4},
    {*(Unk_020e27d4_Fn *)data_020e256c, *(Unk_020e27d4_Fn *)data_020e25b4},
    {*(Unk_020e27d4_Fn *)data_020e257c, *(Unk_020e27d4_Fn *)data_020e25a4},
    {*(Unk_020e27d4_Fn *)data_020e2584, *(Unk_020e27d4_Fn *)data_020e2594},
    {*(Unk_020e27d4_Fn *)data_020e25d4, *(Unk_020e27d4_Fn *)data_020e2614},
    {*(Unk_020e27d4_Fn *)data_020e261c, *(Unk_020e27d4_Fn *)data_020e264c},
    {*(Unk_020e27d4_Fn *)data_020e265c, *(Unk_020e27d4_Fn *)data_020e267c},
    {*(Unk_020e27d4_Fn *)data_020e26cc, *(Unk_020e27d4_Fn *)data_020e272c},
    {*(Unk_020e27d4_Fn *)data_020e2754, *(Unk_020e27d4_Fn *)data_020e2544},
};

void *data_020e2654[2] = {(void *)NT::_ZN12Unk_020a323810enterAct0BEv, 0};

u8 data_021ed390;

SaveManager *gSaveManager;

void *data_020e2674[2] = {(void *)NT::_ZN12Unk_020a323810enterAct0CEv, 0};

u8 sJoiningAid;

void *data_020e2574[2] = {(void *)NT::_ZN11SaveManager10enterAct03Ev, 0};

char *sNetRegion = data_020e24f0;

void *data_020e2624[2] = {(void *)NT::_ZN12Unk_020a32389execAct11Ev, 0};

char data_020e2790[] = "forest_mail_USA.bin";

char data_020e24f0[] = "us";

void *data_020e250c[2] = {(void *)NT::_ZN12Unk_020a32389execAct12Ev, 0};

void *data_020e2514[2] = {(void *)NT::_ZN12Unk_020a323810enterAct13Ev, 0};

void *data_020e256c[2] = {(void *)NT::SaveManager_EnterAct18, 0};

void *data_020e25d4[2] = {(void *)NT::_ZN12Unk_020a1c8810enterAct1BEv, 0};

void *data_020e2754[2] = {(void *)NT::_ZN11SaveManager10enterAct1FEv, 0};

void *data_020e25cc[2] = {(void *)NT::_ZN12Unk_020a323810enterAct07Ev, 0};

s32 sSaveManagerRequest;

u8 sRecentJoinAids[3];

const Unk_020a3238_Vec data_020d0770 = {0x10000, 0, 0x5000};

void *data_020e272c[2] = {(void *)NT::_ZN11SaveManager9execAct1EEv, 0};

void *data_020e2724[2] = {(void *)NT::_ZN11SaveManager9execAct01Ev, 0};

void *data_020e271c[2] = {(void *)NT::_ZN11SaveManager10enterAct02Ev, 0};

void *data_020e257c[2] = {(void *)NT::SaveManager_EnterAct19, 0};

void *data_020e2584[2] = {(void *)NT::_ZN12Unk_020a1c8810enterAct1AEv, 0};

void *data_020e2704[2] = {(void *)NT::_ZN12Unk_020a32389execAct03Ev, 0};

void *data_020e26fc[2] = {(void *)NT::_ZN12Unk_020a323810enterAct04Ev, 0};

void *data_020e26f4[2] = {(void *)NT::_ZN12Unk_020a32389execAct04Ev, 0};

void *data_020e2594[2] = {(void *)NT::_ZN12Unk_020a1c889execAct1AEv, 0};

void *data_020e26e4[2] = {(void *)NT::_ZN12Unk_020a32389execAct05Ev, 0};

u8 sGameStatsReceived;

u8 sAxBbsReceived;

void *data_020e26cc[2] = {(void *)NT::_ZN12Unk_020a1c8810enterAct1EEv, 0};

void *data_020e26c4[2] = {(void *)NT::_ZN12Unk_020a32389execAct07Ev, 0};

void *data_020e26bc[2] = {(void *)NT::_ZN12Unk_020a323810enterAct08Ev, 0};

void *data_020e26b4[2] = {(void *)NT::_ZN12Unk_020a32389execAct08Ev, 0};

void *data_020e26ac[2] = {(void *)NT::_ZN12Unk_020a323810enterAct09Ev, 0};

void *data_020e26a4[2] = {(void *)NT::_ZN12Unk_020a32389execAct09Ev, 0};

void *data_020e269c[2] = {(void *)NT::_ZN12Unk_020a323810enterAct0AEv, 0};

void *data_020e2694[2] = {(void *)NT::_ZN12Unk_020a32389execAct0AEv, 0};

void *data_020e268c[2] = {(void *)NT::_ZN12Unk_020a323810enterAct0DEv, 0};

void *data_020e267c[2] = {(void *)NT::_ZN12Unk_020a1c889execAct1DEv, 0};

void *gTownTransferBuf;

void *data_020e2684[2] = {(void *)NT::_ZN12Unk_020a32389execAct0CEv, 0};

Unk_0209fb48_V3 data_020e2770 = {4, 4, 4};

void *data_020e26ec[2] = {(void *)NT::_ZN12Unk_020a323810enterAct05Ev, 0};

void *data_020e270c[2] = {(void *)NT::_ZN12Unk_020a32389execAct0DEv, 0};

void *data_020e273c[2] = {(void *)NT::_ZN11SaveManager10enterAct00Ev, 0};

void *data_020e2744[2] = {(void *)NT::_ZN12Unk_020a32389execAct0EEv, 0};

void *data_020e2644[2] = {(void *)NT::_ZN12Unk_020a32389execAct0FEv, 0};

void *data_020e263c[2] = {(void *)NT::_ZN12Unk_020a323810enterAct10Ev, 0};

void *data_020e2634[2] = {(void *)NT::_ZN12Unk_020a32389execAct10Ev, 0};

void *data_020e253c[2] = {(void *)NT::_ZN12Unk_020a323810enterAct11Ev, 0};

void *data_020e261c[2] = {(void *)NT::_ZN12Unk_020a1c8810enterAct1CEv, 0};

const s32 sSaveSlotSizes[3] = {0x15fe0, 0x15fe0, 0x11df4};

void *data_020e2614[2] = {(void *)NT::_ZN12Unk_020a1c889execAct1BEv, 0};

char data_020e277c[] = "forest_bbs_USA.bin";

void *data_020e2604[2] = {(void *)NT::_ZN12Unk_020a32389execAct13Ev, 0};

void *data_020e25fc[2] = {(void *)NT::_ZN12Unk_020a323810enterAct14Ev, 0};

void *data_020e25f4[2] = {(void *)NT::SaveManager_ExecAct14, 0};

void *data_020e25ec[2] = {(void *)NT::SaveManager_EnterAct15, 0};

char *sAxMailFileName = data_020e2790;

void *data_020e25dc[2] = {(void *)NT::SaveManager_EnterAct16, 0};

s32 sGameStartMode;

void *data_020e2554[2] = {(void *)NT::SaveManager_ExecAct16, 0};

void *data_020e25c4[2] = {(void *)NT::SaveManager_ExecAct17, 0};

void *data_020e2734[2] = {(void *)NT::_ZN11SaveManager9execAct00Ev, 0};

void *data_020e25b4[2] = {(void *)NT::SaveManager_ExecAct18, 0};

s32 sEraseResidentSlot;

const Unk_020a3238_Vec data_020d0788 = {0x10000, 0, 0x5000};

void *data_020e259c[2] = {(void *)NT::_ZN12Unk_020a32389execAct06Ev, 0};

void *data_020e25a4[2] = {(void *)NT::_ZN12Unk_020a1c889execAct19Ev, 0};

void *data_020e25ac[2] = {(void *)NT::_ZN11SaveManager9execAct02Ev, 0};

const u32 sSaveSlotOffsets[3] = {0, 0x15fe0, 0x2e20c};

void *data_020e264c[2] = {(void *)NT::_ZN12Unk_020a1c889execAct1CEv, 0};

void *data_020e265c[2] = {(void *)NT::_ZN12Unk_020a1c8810enterAct1DEv, 0};

Unk_0209fb48_V3 data_020e2764 = {3, 3, 3};

u8 data_021ed3a4;

char *sAxBbsFileName = data_020e277c;

void *data_020e2714[2] = {(void *)NT::_ZN12Unk_020a323810enterAct0EEv, 0};

void *data_020e274c[2] = {(void *)NT::_ZN12Unk_020a323810enterAct0FEv, 0};

void *data_020e2544[2] = {(void *)NT::_ZN11SaveManager9execAct1FEv, 0};

void *data_020e2504[2] = {(void *)NT::_ZN12Unk_020a323810enterAct12Ev, 0};

u8 sAxMailReceived;

u8 data_020e252c[8] = {0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0, 0};

s32 SaveManager::verifySlotsStep() {
    s32 r = 0;
    static Fn tbl[4] = {&SaveManager::verifyStepReset, &SaveManager::verifyStepSlot0, &SaveManager::verifyStepSlot1,
                        &SaveManager::verifyStepChoose};
    if (tbl[slotStep] != 0) {
        r = (this->*tbl[slotStep])();
    }
    if (r != 3) {
        slotStep = 0;
        return r;
    }
    return 3;
}

s32 SaveManager::verifyStepReset() {
    slotStatus.hi = 3;
    slotStatus.lo = 3;
    slotOrder.lo = 3;
    slotOrder.hi = 3;
    slotStep = slotStep + 1;
    return 3;
}

s32 SaveManager::verifyStepSlot0() {
    slotStatus.hi = NF::_ZN14SaveSlotWriter14verifySlotStepEi(this, 0);
    if (slotStatus.hi == 3) {
        return 3;
    }
    slotStep = slotStep + 1;
    return 3;
}

s32 SaveManager::verifyStepSlot1() {
    slotStatus.lo = NF::_ZN14SaveSlotWriter14verifySlotStepEi(this, 1);
    if (slotStatus.lo == 3) {
        return 3;
    }
    slotStep = slotStep + 1;
    return 3;
}

s32 SaveManager::verifyStepChoose() {
    s32 r = 0;
    if (slotStatus.lo == 1 || slotStatus.hi == 1) {
        r = 1;
    } else if (slotStatus.hi != 0 && slotStatus.lo != 0) {
        slotOrder.lo = 1;
        slotOrder.hi = 0;
        r = 4;
    } else if (slotStatus.hi != 0) {
        slotOrder.lo = 1;
        slotOrder.hi = 0;
    } else if (slotStatus.lo != 0) {
        slotOrder.lo = 0;
        slotOrder.hi = 1;
    } else {
        slotOrder.lo = (u8)NF::Save_SlotStampsMatch();
        if (slotOrder.lo == 1) {
            slotOrder.hi = 0;
        } else {
            slotOrder.hi = 1;
        }
    }
    slotStep = 6;
    return r;
}

s32 SaveSlotWriter::saveSlotStep(s32 arg) {
    static Unk_020a09d8_State tbl[7] = {
        &SaveSlotWriter::stepPrepare, &SaveSlotWriter::stepChecksum, &SaveSlotWriter::stepReadBack,
        &SaveSlotWriter::stepFindDirty, &SaveSlotWriter::stepWriteDirty, &SaveSlotWriter::stepCommit,
        *(Unk_020a09d8_State *)NE::__ptmf_null};
    s32 r = 3;
    if (tbl[slotStep]) r = (this->*tbl[slotStep])(arg);
    if (slotStep == 6) {
        r = 0;
        slotStep = r;
    }
    return r;
}

s32 SaveSlotWriter::stepPrepare(s32 idx) {
    u8 *a[3];
    a[0] = NE::gSaveData;
    a[1] = NE::gSaveData;
    a[2] = NE::SaveManager_GetLetterStorage();
    NE::MI_CpuFill8(workBuf, 0, NE::sSaveSlotSizes[idx]);
    NE::MI_CpuCopy8(a[idx], workBuf, NE::sSaveSlotDataSizes[idx]);
    blockCursor = 0;
    dirtyFirstBlock = -1;
    dirtySize = 0;
    slotStep = 1;
    return 3;
}

s32 SaveSlotWriter::stepChecksum(s32 mode) {
    if (mode == 2) {
        u8 *b = workBuf;
        *(u16 *)(b + 0x11df2) = NE::Save_CalcChecksum(b, 0x11df4, *(u16 *)(b + 0x11df2));
    } else {
        s32 s = 0;
        if (mode == 1) s = verifySlotStep(s);
        if (s == 3) return 3;
        if (s == 1) return 1;
        u8 *buf = workBuf;
        if (mode == 0) {
            NE::_ZN11SaveRecord48newStampEv(buf + 0x15fdc);
        } else if (s == 0) {
            u32 local;
            NE::_ZN11SaveRecord49constructEv(&local);
            NE::Save_ReadSlotFooter(0, &local);
            NE::_ZN11SaveRecord48setStampEh(buf + 0x15fdc, NE::_ZN11SaveRecord48getStampEv(&local));
            NE::_ZN11SaveRecord48destructEv(&local);
        }
        u8 *p = buf + 0x10c3c;
        NE::_ZN18TownExchangeRecord11setChecksumEj(p, NE::Save_CalcChecksum(p, 0x84c, NE::_ZN18TownExchangeRecord11getChecksumEv(p)));
        p = buf + 0x15c58;
        NE::_ZN18TownExchangeRecord15setChecksumByteEj(p, NE::Save_CalcChecksum(p, 0xf8, NE::_ZN18TownExchangeRecord15getChecksumByteEv(p)));
        for (s32 i = 0; i < 4; i++) {
            void *e = NE::_ZN10PlayerData15getWifiUserDataEv(NE::PlayerData_GetResident(buf + 0xc, i));
            NE::PlayerWifiData_SetChecksum(e, NE::Save_CalcChecksum(e, 0x50, NE::PlayerWifiData_GetChecksum(e)));
            e = NE::_ZN10PlayerData13getFriendListEv(NE::PlayerData_GetResident(buf + 0xc, i));
            NE::FriendList_SetChecksum(e, NE::Save_CalcChecksum(e, 0x384, NE::FriendList_GetChecksum(e)));
        }
        NE::_ZN12SaveChecksum3setEt(buf + 0x15fdc, NE::Save_CalcChecksum(buf, 0x15fe0, NE::_ZN12SaveChecksum3getEv(buf + 0x15fdc)));
        NE::Save_Sum16(buf, 0x15fe0);
        NE::Save_Sum16(buf, 0x15fe0);
    }
    slotStep = 2;
    return 3;
}

s32 SaveSlotWriter::stepReadBack(s32 idx) {
    s32 r = NE::Backup_GetStatus(NE::gBackup);
    s32 off = NE::sSaveSlotOffsets[idx];
    s32 size = NE::sSaveSlotSizes[idx];
    if (r == 1) {
        NE::Backup_EndAccess(NE::gBackup);
        return 1;
    } else if (r == 4) {
        NE::MI_CpuFill8(readBackBuf, 0, size);
        NE::Backup_ReadAsync(NE::gBackup, readBackBuf, size, off);
    } else if (r != 3) {
        NE::Backup_EndAccess(NE::gBackup);
        slotStep = 3;
    }
    return 3;
}

s32 SaveSlotWriter::stepFindDirty(s32 idx) {
    s32 size = NE::sSaveSlotSizes[idx];
    s32 q = size / 0x200;
    s32 rem = size % 0x200;
    while (blockCursor <= q) {
        s32 n = 0x200;
        if (blockCursor == q) n = rem;
        s32 o = blockCursor << 9;
        if (memEqual(workBuf + o, readBackBuf + o, n) == 0) {
            if (dirtyFirstBlock == -1) dirtyFirstBlock = blockCursor;
            dirtySize = dirtySize + n;
            if (blockCursor == q) {
                slotStep = 4;
                blockCursor = blockCursor + 1;
                return 3;
            }
        } else if (dirtySize != 0) {
            slotStep = 4;
            return 3;
        }
        blockCursor = blockCursor + 1;
    }
    if (blockCursor > q) slotStep = 5;
    return 3;
}

s32 SaveSlotWriter::stepWriteDirty(s32 idx) {
    s32 r = NE::Backup_GetStatus(NE::gBackup);
    s32 off = NE::sSaveSlotOffsets[idx];
    if (r == 1) {
        NE::Backup_EndAccess(NE::gBackup);
        return 1;
    } else if (r == 4) {
        s32 o = dirtyFirstBlock << 9;
        NE::Backup_WriteAsync(NE::gBackup, o + off, workBuf + o, dirtySize);
    } else if (r != 3) {
        NE::Backup_EndAccess(NE::gBackup);
        dirtyFirstBlock = -1;
        dirtySize = 0;
        slotStep = 3;
    }
    return 3;
}

s32 SaveSlotWriter::stepCommit(s32 idx) {
    u8 *a[3];
    a[0] = NE::gSaveData;
    a[1] = NE::gSaveData;
    a[2] = NE::SaveManager_GetLetterStorage();
    NE::MI_CpuCopy8(workBuf, a[idx], NE::sSaveSlotDataSizes[idx]);
    slotStep = 6;
    return 3;
}

s32 SaveSlotWriter::eraseSlotStep(s32 idx) {
    s32 r = NE::Backup_GetStatus(NE::gBackup);
    s32 off = NE::sSaveSlotOffsets[idx];
    s32 size = NE::sSaveSlotSizes[idx];
    if (r == 1) {
        NE::Backup_EndAccess(NE::gBackup);
        return 1;
    } else if (r == 4) {
        NE::MI_CpuFill8(workBuf, 0xff, size);
        NE::Backup_WriteAsync(NE::gBackup, off, workBuf, size);
    } else if (r != 3) {
        NE::Backup_EndAccess(NE::gBackup);
        return 0;
    }
    return 3;
}

extern "C" s32 Save_LoadSync(void) {
    s32 a = NE::Save_CheckSlot(0);
    s32 b = NE::Save_CheckSlot(1);
    if (a == 1 || b == 1) return 1;
    if (a != 0 && b != 0) return 4;
    if (a != 0) NE::Save_ReadSlot(1);
    else if (b != 0) NE::Save_ReadSlot(0);
    else NE::Save_ReadSlot(NE::Save_SlotStampsMatch());
    return 0;
}

extern "C" s32 Save_CheckSlot(s32 idx) {
    return NE::Save_ReadAndCheckSlot(idx, 0);
}

extern "C" s32 Save_ReadAndCheckSlot(s32 idx, s32 flag) {
    if (flag != 0 && NE::gSaveManager == NULL) return 1;
    s32 r = NE::Save_ReadSlotSync(idx, flag);
    if (r == 0) {
        u8 *buf;
        if (flag != 0) buf = NE::gSaveManager->workBuf;
        else buf = NE::gSaveData;
        s32 t = NE::Save_Sum16(buf, 0x15fe0);
        if (NE::_ZN8SaveData7isValidEv(buf) == 0) return 4;
        if (t == 0) {
            NE::Save_Sum16(buf + 0x10c3c, 0x84c);
            s32 i = 0;
            u8 *p = buf + 0xc;
            for (; i < 4; i++) {
                NE::Save_Sum16(NE::_ZN10PlayerData15getWifiUserDataEv(NE::PlayerData_GetResident(p, i)), 0x50);
                NE::Save_Sum16(NE::_ZN10PlayerData13getFriendListEv(NE::PlayerData_GetResident(buf + 0xc, i)), 0x384);
            }
        } else {
            return 4;
        }
    }
    return r;
}

extern "C" BOOL Save_ReadSlot(u32 idx) {
    return NE::Save_ReadSlotSync(idx, 0);
}

extern "C" BOOL Save_ReadSlotSync(u32 idx, s32 flag) {
    u8 *a[3];
    a[0] = NE::gSaveData;
    a[1] = NE::gSaveData;
    a[2] = NE::SaveManager_GetLetterStorage();
    u8 *buf = a[idx];
    s32 off = NE::sSaveSlotOffsets[idx];
    s32 size = NE::sSaveSlotSizes[idx];
    if (flag != 0 && idx <= 1) {
        SaveSlotWriter *g = NE::gSaveManager;
        if (g == NULL) return TRUE;
        buf = g->workBuf;
    }
    if (NE::Backup_Read(NE::gBackup, buf, size, off) != 0) return TRUE;
    return FALSE;
}

s32 SaveSlotWriter::verifySlotStep(s32 idx) {
    s32 r = NE::Backup_GetStatus(NE::gBackup);
    s32 off = NE::sSaveSlotOffsets[idx];
    s32 size = NE::sSaveSlotSizes[idx];
    if (r == 4) {
        NE::MI_CpuFill8(readBackBuf, 0, size);
        NE::Backup_ReadAsync(NE::gBackup, readBackBuf, size, off);
    } else if (r != 3) {
        NE::Backup_EndAccess(NE::gBackup);
        if (NE::_ZN8SaveData7isValidEv(NE::gSaveManager->readBackBuf) == 0) return 4;
        if (NE::Save_Sum16(readBackBuf, NE::sSaveSlotDataSizes[idx]) == 0) return 0;
        return 4;
    } else if (r == 1) {
        NE::Backup_EndAccess(NE::gBackup);
        return 1;
    }
    return 3;
}

extern "C" s32 Save_ReadSlotAsyncStep(s32 idx, u8 *buf) {
    s32 r = NE::Backup_GetStatus(NE::gBackup);
    s32 off = NE::sSaveSlotOffsets[idx];
    s32 size = NE::sSaveSlotSizes[idx];
    if (r == 4) {
        NE::MI_CpuFill8(buf, 0, size);
        NE::Backup_ReadAsync(NE::gBackup, buf, size, off);
    } else if (r != 3) {
        NE::Backup_EndAccess(NE::gBackup);
        s32 t = NE::Save_Sum16(buf, NE::sSaveSlotDataSizes[idx]);
        if (NE::_ZN8SaveData7isValidEv(buf) == 0) return 4;
        if (t == 0) return 0;
        return 4;
    } else if (r == 1) {
        NE::Backup_EndAccess(NE::gBackup);
        return 1;
    }
    return 3;
}

s32 SaveSlotWriter::loadSlotStep(s32 idx) {
    u8 *a[3];
    a[0] = NE::gSaveData;
    a[1] = NE::gSaveData;
    a[2] = NE::SaveManager_GetLetterStorage();
    u8 *buf = a[idx];
    s32 r = NE::Backup_GetStatus(NE::gBackup);
    s32 off = NE::sSaveSlotOffsets[idx];
    s32 size = NE::sSaveSlotSizes[idx];
    if (r == 4) {
        NE::Backup_ReadAsync(NE::gBackup, buf, size, off);
    } else if (r == 1) {
        NE::Backup_EndAccess(NE::gBackup);
        return 1;
    } else if (r != 3) {
        NE::Backup_EndAccess(NE::gBackup);
        if (NE::Save_Sum16(buf, NE::sSaveSlotDataSizes[idx]) == 0) return 0;
        return 4;
    }
    return 3;
}

BOOL SaveSlotWriter::memEqual(u8 *p, u8 *q, s32 n) {
    while (n != 0) {
        if (*p != *q) return FALSE;
        p++;
        q++;
        n--;
    }
    return TRUE;
}

void Unk_020a0990::startTalk(const char *str, u8 flag) {
    TalkWindowState *o = NE::TalkWindow_Get(0);
    talk.resetMsg();
    talk.setFileName(str);
    talk.msgIndex = flag;
    o->lockAdvance();
    o->attachRequest(&talk);
    o->nextState = 1;
}

extern "C" void SaveManager_RequestAct01(void) { NE::sSaveManagerRequest = 1; }

extern "C" void SaveManager_RequestAct02(void) { NE::sSaveManagerRequest = 2; }

extern "C" void SaveManager_RequestAct06(void) { NE::sSaveManagerRequest = 6; }

extern "C" void SaveManager_RequestAct05(void) { NE::sSaveManagerRequest = 5; }

extern "C" void SaveManager_RequestAct03(void) { NE::sSaveManagerRequest = 3; }

extern "C" void SaveManager_RequestAct12(void) { NE::sSaveManagerRequest = 0x12; }

extern "C" void SaveManager_RequestAct13(void) { NE::sSaveManagerRequest = 0x13; }

extern "C" void SaveManager_RequestAct14(void) { NE::sSaveManagerRequest = 0x14; }

extern "C" void SaveManager_RequestAct15(void) { NE::sSaveManagerRequest = 0x15; }

extern "C" void SaveManager_RequestAct16(void) { NE::sSaveManagerRequest = 0x16; }

extern "C" void SaveManager_RequestAct17(void) { NE::sSaveManagerRequest = 0x17; }

extern "C" void SaveManager_RequestAct18(void) { NE::sSaveManagerRequest = 0x18; }

extern "C" void SaveManager_RequestAct19(void) { NE::sSaveManagerRequest = 0x19; }

extern "C" void SaveManager_RequestAct1A(void) { NE::sSaveManagerRequest = 0x1a; }

extern "C" void SaveManager_RequestAct1B(void) { NE::sSaveManagerRequest = 0x1b; }

extern "C" void SaveManager_RequestAct1F(void) { NE::sSaveManagerRequest = 0x1f; }

extern "C" void SaveManager_RequestAct1C(void) { NE::sSaveManagerRequest = 0x1c; }

extern "C" BOOL SaveManager_IsIdle(void) {
    SaveSlotWriter *p = NE::gSaveManager;
    if (p != NULL && p->act == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL SaveManager_HasAct12Failed(void) {
    SaveSlotWriter *p = NE::gSaveManager;
    if (p != NULL && p->act == 0x12 && p->actStep == 3) return TRUE;
    return FALSE;
}

extern "C" BOOL SaveManager_IsIdleForRoom(void) {
    SaveSlotWriter *p = NE::gSaveManager;
    if (p != NULL && p->act == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL SaveManager_IsIdleAfterAct13() {
    Unk_021ed3b0 *g = ND::gSaveManager;
    if (g && g->act == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL SaveManager_HasAct13Failed() {
    Unk_021ed3b0 *g = ND::gSaveManager;
    if (g && g->act == 0x13 && g->actStep == 3) return TRUE;
    return FALSE;
}

extern "C" BOOL SaveManager_IsIdleAfterAct1F() {
    Unk_021ed3b0 *g = ND::gSaveManager;
    if (g && g->act == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL SaveManager_HasAct1FFailed() {
    Unk_021ed3b0 *g = ND::gSaveManager;
    if (g && g->act == 0x1f) {
        u32 t = g->actStep;
        if (t == 0xf || t == 0x14) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Save_CheckFooterReadError(s32 idx) {
    SaveRecord4 d;
    if (ND::Save_ReadSlotFooter(idx, &d)) return TRUE;
    return FALSE;
}

extern "C" BOOL Save_CheckBackupError() { return ND::Save_CheckFooterReadError(0); }

extern "C" s32 Save_ReadSlotFooter(s32 idx, SaveRecord4 *d) {
    return ND::Backup_Read(ND::gBackup, d, 4, ((u32)ND::gSaveFooter - (u32)ND::gSaveData) + ND::sSaveSlotOffsets[idx]);
}

extern "C" BOOL Save_SlotStampsMatch() {
    SaveRecord4 a;
    ND::Save_ReadSlotFooter(0, &a);
    SaveRecord4 b;
    ND::Save_ReadSlotFooter(1, &b);
    if (a.getStamp() == b.getStamp()) return TRUE;
    return FALSE;
}

extern "C" BOOL Save_InvalidateLetterStorage() {
    u8 z = 0;
    if (ND::Backup_Write(ND::gBackup, 0x3fffc, &z, 1) == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL Save_InvalidateAll() {
    u32 r4 = ND::SaveManager_GetLetterStorage();
    u8 *const r7 = ND::gSaveFooter;
    u32 r6, r5;
    ND::_ZN11SaveRecord410clearStateEv(r7);
    ND::LetterStorage_MarkInterrupted(r4);
    r6 = r4 + 0x11df0;
    r5 = r7 - ND::gSaveData;
    r4 = r6 - r4;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[0] + r5, r7, 4) == 1) return TRUE;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[1] + r5, r7, 4) == 1) return TRUE;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[2] + r4, (void *)r6, 1) == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL Save_WritePlayerWifiData() {
    u8 *q;
    u32 d;
    ND::PlayerData_GetResident(ND::gSavePlayers, ND::PlayerData_GetCurrentIndex());
    q = ND::_ZN10PlayerData15getWifiUserDataEv();
    ND::PlayerWifiData_SetChecksum(q, ND::Save_CalcChecksum(q, 0x50, ND::PlayerWifiData_GetChecksum(q)));
    d = q - ND::gSaveData;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[0] + d, q, 0x50) == 1) return TRUE;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[1] + d, q, 0x50) == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL Save_WritePlayerFriendList() {
    u8 *base = ND::gSaveData;
    s32 t = ND::PlayerData_GetCurrentIndex();
    u8 *p;
    u8 *q;
    ND::PlayerData_GetCurrent();
    p = ND::_ZN10PlayerData13getFriendListEv();
    if (t >= 4) t = ND::sSessionResidentIndex;
    ND::PlayerData_GetResident(base + 0xc, t);
    q = ND::_ZN10PlayerData13getFriendListEv();
    ND::FriendList_SetChecksum(p, ND::Save_CalcChecksum(p, 0x384, ND::FriendList_GetChecksum(p)));
    {
        u32 d = q - base;
        if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[0] + d, p, 0x384) == 1) return TRUE;
        if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[1] + d, p, 0x384) == 1) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Save_WriteVillagerTransfer() {
    u32 y, x;
    u32 a, b;
    void *base = ND::gSaveData;
    void *p = ND::data_021e7f8c;
    void *q = ND::data_021ecfa8;
    a = (u32)p - (u32)base;
    b = (u32)q - (u32)base;
    ND::_ZN18TownExchangeRecord11setChecksumEj(p, ND::Save_CalcChecksum(p, 0x84c, ND::_ZN18TownExchangeRecord11getChecksumEv(p)));
    ND::_ZN18TownExchangeRecord15setChecksumByteEj(q, ND::Save_CalcChecksum(q, 0xf8, ND::_ZN18TownExchangeRecord15getChecksumByteEv(q)));
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[0] + a, p, 0x84c) == 1) return TRUE;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[1] + a, p, 0x84c) == 1) return TRUE;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[0] + b, q, 0xf8) == 1) return TRUE;
    if (ND::Backup_Write(ND::gBackup, ND::sSaveSlotOffsets[1] + b, q, 0xf8) == 1) return TRUE;
    return FALSE;
}

extern "C" void GameStart_SetupSave() {
    if (!ND::GameStart_IsMode4()) {
        if (ND::GameStart_IsNewTown()) ND::_ZN8SaveData5resetEv(ND::gSaveData);
        if (ND::GameStart_IsMode3()) {
            Unk_020cbb18_ff4c *g = ND::gCommManager;
            g->localSlot = 0;
            ND::PlayerSession_SetDataIndex(g->localSlot, 0);
        } else {
            void *p = ND::gSavePlayers;
            s32 t = ND::PlayerDataArray_FindUnused(p);
            Unk_020cbb18_ff4c *g = ND::gCommManager;
            g->localSlot = 0;
            ND::PlayerSession_SetDataIndex(g->localSlot, t);
            ND::PlayerDataArray_CreateResident(p, ND::data_020e252c, 0, t);
        }
    }
}

extern "C" void SaveManager_SetEraseResidentSlot(s32 v) { ND::sEraseResidentSlot = v; }

extern "C" u32 Net_GetJoiningAid() { return ND::sJoiningAid; }

extern "C" void Net_SetJoiningAid(u32 v) { ND::sJoiningAid = v; }

extern "C" s32 SaveManager_GetTownTransferBuf() { return ND::gTownTransferBuf; }

extern "C" u32 func_020a03f0() { return ND::data_021ed398; }

extern "C" void func_020a03e4() { ND::data_021ed398 = 1; }

extern "C" u32 func_020a03c4() {
    if (ND::SaveManager_Get()) return ND::SaveManager_Get()->unk_d2;
    return 0;
}

extern "C" s32 SaveManager_GetLetterStorage() {
    if (ND::gSaveManager == NULL) return 0;
    return ND::gSaveManager->letterStorage;
}

extern "C" s32 SaveManager_GetTownCompressBuf() {
    if (ND::gSaveManager == NULL) return 0;
    return ND::gSaveManager->townCompressBuf;
}

extern "C" s32 SaveManager_GetTownCompressThread() {
    if (ND::gSaveManager == NULL) return 0;
    return ND::gSaveManager->townCompressThread;
}

extern "C" Unk_021ed3b0 *SaveManager_Get() { return ND::gSaveManager; }

extern "C" void GameStart_SetNewTown() { ND::sGameStartMode = 1; }

extern "C" void GameStart_SetNewResident() { ND::sGameStartMode = 2; }

extern "C" void GameStart_SetMode3() { ND::sGameStartMode = 3; }

extern "C" void GameStart_SetMode4() { ND::sGameStartMode = 4; }

extern "C" BOOL GameStart_IsActive() {
    if (ND::sGameStartMode != 0) return TRUE;
    return FALSE;
}

extern "C" BOOL GameStart_IsNewTown() {
    if (ND::sGameStartMode == 1) return TRUE;
    return FALSE;
}

extern "C" BOOL GameStart_IsNewResident() {
    if (ND::sGameStartMode == 2) return TRUE;
    return FALSE;
}

extern "C" BOOL GameStart_IsMode3() {
    if (ND::sGameStartMode == 3) return TRUE;
    return FALSE;
}

extern "C" BOOL GameStart_IsMode4() {
    if (ND::sGameStartMode == 4) return TRUE;
    return FALSE;
}

extern "C" void GameStart_Clear() { ND::sGameStartMode = 0; }

extern "C" void func_020a02c8(Unk_021ed3b0 *p, u32 v) { p->hostMemberMask = v; }

extern "C" void func_020a02c0(Unk_021ed3b0 *p, u32 v) { p->hostDataIndex = v; }

extern "C" void func_020a02b8(Unk_021ed3b0 *p, u32 v) { p->joinDone = v; }

extern "C" void func_020a02b0(Unk_021ed3b0 *p, u32 v) { p->ctrlAct12 = v; }

extern "C" void func_020a02a8(Unk_021ed3b0 *p, u32 v) { p->recvAct07 = v; }

extern "C" void func_020a02a0(Unk_021ed3b0 *p, u32 v) { p->joinReady = v; }

extern "C" void func_020a0298(Unk_021ed3b0 *p, u32 v) { p->dateTimeReceived = v; }

extern "C" u8 *func_020a0294(Unk_021ed3b0 *p) { return p->hostDateTime; }

extern "C" void func_020a028c(Unk_021ed3b0 *p, s32 i, u32 v) { p->recvAct04[i] = v; }

extern "C" void func_020a0284(Unk_021ed3b0 *p, s32 i, u32 v) { p->recvAct02[i] = v; }

extern "C" void func_020a027c(Unk_021ed3b0 *p, s32 i, u32 v) { p->ctrlAct0E[i] = v; }

extern "C" void func_020a0268(Unk_021ed3b0 *p) {
    s32 i;
    for (i = 3; i >= 0; i--) p->ctrlAct0E[i] = 0;
}

extern "C" void func_020a0254(u32 v) {
    if (ND::gSaveManager) ND::gSaveManager->recvAct03 = v;
}

extern "C" void func_020a024c(Unk_021ed3b0 *p, s32 i, u32 v) { p->recvAct06[i] = v; }

extern "C" void func_020a0244(Unk_021ed3b0 *p, s32 i, u32 v) { p->ctrlAct10[i] = v; }

extern "C" void func_020a023c(Unk_021ed3b0 *p, s32 i, u32 v) { p->ctrlAct11[i] = v; }

extern "C" void func_020a0228(u32 v) {
    if (ND::gSaveManager) ND::gSaveManager->unk_fc = v;
}

extern "C" u32 func_020a0210() {
    if (ND::gSaveManager) return ND::gSaveManager->unk_fc;
    return 4;
}

extern "C" void func_020a0208(Unk_021ed3b0 *p, u32 v) { p->unk_fd = v; }

extern "C" void NetSession_ReturnToSolo(void *a, s32 b, s32 c) {
    s32 i;
    Unk_020cbb18_ff4c *g;
    s32 s;
    s32 t;
    s32 r5;
    u8 *r4;
    struct { Unk_020a0088_Date packed; u32 d[2]; } l;
    ND::Comm_ResetNetSession(a);
    ND::Wifi_EndSession(a);
    if (b < 7) {
        g = ND::gCommManager;
        ND::PlayerSession_ClearDataIndex(g->localSlot);
        g->localSlot = 0;
    }
    g = ND::gCommManager;
    ND::_ZN11CommManager14setMemberCountEj(g, 1);
    if (b < 7) {
        ND::PlayerSession_SetDataIndex(g->localSlot, b);
    }
    s = g->localSlot;
    ND::PlayerSession_GetDataIndex(s);
    for (i = 3; i >= 0; i--) {
        if (i != s) ND::PlayerSession_ClearDataIndex(i);
    }
    for (i = 2; i >= 0; i--) {
        if (ND::PlayerData_Get(i + 4)) ND::_ZN10PlayerData5resetEv();
    }
    if (c == 0) {
        ND::Clock_Update(0);
        ND::SaveData_Setup(ND::gSaveData, 2);
        ND::SaveData_Apply(ND::gSaveData);
        if (ND::TownBlockMap_Get()) {
            ND::_ZN12TownBlockMap13updateAcreIdsEv(ND::TownBlockMap_Get());
            ND::_ZN12TownBlockMap6bindBgEv(ND::TownBlockMap_Get());
            ND::Town_ClearBorderTrees(ND::TownBlockMap_Get());
        }
        ND::HouseRoomMaps_UpdateAll();
        ND::HouseRoomMaps_BindBg();
    } else {
        ND::Town_OnLoad();
    }
    ND::Comm_ResetPeerState(-4);
    if (c == 0) {
        t = ND::PlayerSession_GetDataIndex(0);
        if (t < 7) {
            r5 = ND::PlayerData_Get(t);
            r4 = ND::PlayerSession_GetSessionFlags(r5);
            if (*r4 & 6) {
                l.d[0] = 0;
                l.d[1] = 0;
                ND::Clock_GetDateTime(l.d);
                l.packed.v = (l.packed.v & ~0x7f) | (((u8 *)l.d)[5] & 0x7f);
                l.packed.v = (l.packed.v & ~0x780) | ((((u8 *)l.d)[4] & 0xf) << 7);
                l.packed.v = (l.packed.v & ~0xf800) | ((((u8 *)l.d)[3] & 0x1f) << 11);
                if (*r4 & 2) *r4 |= 0x11;
            } else {
                l.packed.v = *ND::PlayerSession_GetLastPlayDate();
                *r4 = *r4 | ((*r4 >> 4) & 1);
            }
            ND::_ZN10PlayerData15setLastPlayDateE17Unk_0209865c_Bits(r5, l.packed);
        }
    }
}

extern "C" void VillagerTransfer_PlanSwap(void *a) {
    s32 list[4];
    Unk_020cbb18_ff4c *g;
    s32 n;
    s32 i;
    s32 cur = ND::NetSession_GetLastSyncSlot();
    s32 pick;
    n = 0;
    i = 3;
    g = ND::gCommManager;
    for (; i >= 0; i--) {
        if (i != cur && ND::_ZN11CommManager12isSlotActiveEi(g, i)) {
            list[n] = i;
            n++;
        }
    }
    for (i = 3; i >= 0; i--) {
        if (ND::_ZN11CommManager12isSlotActiveEi(g, i)) {
            ND::_ZN11SaveManager15setTransferDestEjh(a, i, i);
        } else {
            ND::_ZN11SaveManager15setTransferDestEjh(a, i, 4);
        }
    }
    pick = list[ND::Random_GlobalBelow(n)];
    ND::_ZN11SaveManager15setTransferDestEjh(a, pick, cur);
    ND::_ZN11SaveManager15setTransferDestEjh(a, cur, pick);
}

extern "C" void VillagerTransfer_PlanRotate(void *a) {
    s32 list[4];
    s32 n = 0;
    s32 i = 3, j;
    Unk_020cbb18_ff4c *g = ND::gCommManager;
    for (; i >= 0; i--) {
        if (ND::_ZN11CommManager12isSlotActiveEi(g, i)) {
            list[n] = i;
            n++;
        }
    }
    for (i = 3; i >= 0; i--) {
        ND::_ZN11SaveManager15setTransferDestEjh(a, i, 4);
    }
    j = 0;
    for (i = 0; i < n; i++) {
        s32 k = i + 1;
        if (k >= n) k = j;
        ND::_ZN11SaveManager15setTransferDestEjh(a, n ? list[i] : list[i], list[k]);
    }
}

extern "C" void LostChild_ResetAndPairLast(void *a) {
    s32 i = 3;
    Unk_020cbb18_ff4c *g = ND::gCommManager;
    for (; i >= 0; i--) {
        if (ND::_ZN11CommManager12isSlotActiveEi(g, i)) {
            ND::TownExchange_GetForAid(i);
            ND::_ZN18TownExchangeRecord18getLostChildRecordEv();
            ND::_ZN15LostChildRecord5clearEv();
        }
    }
    ND::LostChild_TryPair(a, ND::NetSession_GetLastSyncSlot());
}

extern "C" void LostChild_ResetAndPairAll(Unk_0209f638 *self) {
    CommManager *o;
    s32 i = 3;
    o = NC::gCommManager;
    for (; i >= 0; i--) {
        if (o->isSlotActive(i)) {
            NC::_ZN15LostChildRecord5clearEv(NC::_ZN18TownExchangeRecord18getLostChildRecordEv(NC::TownExchange_GetForAid(i)));
        }
    }
    for (i = 3; i >= 0; i--) {
        if (o->isSlotActive(i)) {
            NC::LostChild_TryPair(self, i);
        }
    }
}

extern "C" void func_0209fef8(Unk_0209f638 *p, void *q) {}

extern "C" void LostChild_TryPair(Unk_0209f638 *self, s32 idx) {
    void *r7 = NC::PlayerData_GetBySessionSlot(idx);
    if (r7 == 0) return;
    u32 sa[7];
    NC::_ZN11MsgString9CC2Ev(sa);
    NC::TownId_GetNameString(NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(r7)), sa);
    void *r6 = NC::_ZN10PlayerData18getLostChildRecordEv(r7);
    if (NC::_ZN15LostChildRecord11getDaysLeftEv(r6)) {
        NC::func_0209fef8(self, r6);
        NC::_ZN11MsgString9CD1Ev(sa);
        return;
    }
    s32 found = 4;
    void *other = 0;
    void *other2 = 0;
    u32 sb[7];
    NC::_ZN11MsgString9CC2Ev(sb);
    s32 i = 0;
    CommManager *o = NC::gCommManager;
    for (; i < 4; i++) {
        if (i == idx) continue;
        if (!o->isSlotActive(i)) continue;
        other = NC::PlayerData_GetBySessionSlot(i);
        if (!other) continue;
        NC::TownId_GetNameString(NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(other)), sb);
        other2 = NC::_ZN10PlayerData18getLostChildRecordEv(other);
        if (NC::_ZN15LostChildRecord11getDaysLeftEv(other2)) continue;
        if (NC::Net_GetMode() == 3 || NC::Net_GetMode() == 4) {
            if (!NC::Wifi_IsInFriendList(self, other, r7)) continue;
            if (!NC::Wifi_IsInFriendList(self, r7, other)) continue;
        }
        found = i;
        break;
    }
    if (found == 4) {
        NC::_ZN11MsgString9CD1Ev(sb);
        NC::_ZN11MsgString9CD1Ev(sa);
        return;
    }
    s16 *pp = (s16 *)NC::DebugVar_GetPtr(0, 0x49);
    if (*pp == 0 && NC::Random_GlobalBelow(0x10)) {
        NC::_ZN11MsgString9CD1Ev(sb);
        NC::_ZN11MsgString9CD1Ev(sa);
        return;
    }
    s32 r4 = NC::Random_GlobalBelow(2);
    NC::_ZN15LostChildRecord14setKaitlinRoleEh(other2, r4 == 0 ? 1 : 0);
    NC::_ZN15LostChildRecord9setTownIdEv(other2, NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(r7)));
    NC::_ZN15LostChildRecord11setDaysLeftEh(other2, 0xa);
    NC::_ZN15LostChildRecord14setKaitlinRoleEh(r6, r4 == 1 ? 1 : 0);
    NC::_ZN15LostChildRecord9setTownIdEv(r6, NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(other)));
    NC::_ZN15LostChildRecord11setDaysLeftEh(r6, 0xa);
    NC::func_0209fef8(self, r6);
    NC::func_0209fef8(self, other2);
    void *h7 = NC::_ZN11SaveManager15getTransferDestEj(self, idx);
    void *h5 = NC::_ZN11SaveManager15getTransferDestEj(self, found);
    void *c4 = NC::PlayerData_GetBySessionSlot((s32)h7);
    void *m7 = NC::TownExchange_GetForAid((s32)h7);
    u32 sc[7];
    NC::_ZN11MsgString9CC2Ev(sc);
    if (c4) {
        NC::TownId_GetNameString(NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(c4)), sc);
    }
    NC::MI_CpuCopy8(r6, NC::_ZN18TownExchangeRecord18getLostChildRecordEv(m7), 0xc);
    c4 = NC::PlayerData_GetBySessionSlot((s32)h5);
    void *m5 = NC::TownExchange_GetForAid((s32)h5);
    u32 sd[7];
    NC::_ZN11MsgString9CC2Ev(sd);
    if (c4) {
        NC::TownId_GetNameString(NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(c4)), sd);
    }
    NC::MI_CpuCopy8(other2, NC::_ZN18TownExchangeRecord18getLostChildRecordEv(m5), 0xc);
    NC::_ZN11MsgString9CD1Ev(sd);
    NC::_ZN11MsgString9CD1Ev(sc);
    NC::_ZN11MsgString9CD1Ev(sb);
    NC::_ZN11MsgString9CD1Ev(sa);
    return;
}

extern "C" BOOL Wifi_IsInFriendList(Unk_0209f638 *self, void *a, void *b) {
    void *r6 = NC::DwcFriendData_GetBytes(NC::PlayerWifiData_GetOwnFriendData(NC::_ZN10PlayerData15getWifiUserDataEv(a)));
    u8 *r5 = (u8 *)NC::FriendList_GetEntries(NC::_ZN10PlayerData13getFriendListEv(b));
    s32 i;
    u32 st = 0x1c;
    for (i = 0; i < 0x20; i++) {
        void *e = NC::DwcFriendData_GetBytes(NC::FriendEntry_GetFriendData(r5 + i * st));
        if (e) {
            if (NC::Net_IsSameFriendData(r6, e)) return TRUE;
        }
    }
    return FALSE;
}

extern "C" void LostChild_ApplyReceived(Unk_0209f638 *self) {
    void *p5 = NC::TownExchange_GetForAid(4);
    void *r4 = NC::PlayerData_GetCurrent();
    u32 s1[7];
    NC::_ZN11MsgString9CC2Ev(s1);
    NC::TownId_GetNameString(NC::PlayerId_GetTownId(NC::_ZN10PlayerData11getPlayerIdEv(r4)), s1);
    void *r6 = NC::_ZN10PlayerData18getLostChildRecordEv(r4);
    void *q = NC::_ZN18TownExchangeRecord18getLostChildRecordEv(p5);
    u32 s2[7];
    NC::_ZN11MsgString9CC2Ev(s2);
    NC::TownId_GetNameString(NC::_ZN15LostChildRecord9getTownIdEv(q), s2);
    if (NC::_ZN15LostChildRecord11getDaysLeftEv(q)) {
        NC::MI_CpuCopy8(q, r6, 0xc);
        NC::_ZN15LostChildRecord13isKaitlinRoleEv(q);
    }
    NC::_ZN15LostChildRecord5clearEv(NC::_ZN18TownExchangeRecord18getLostChildRecordEv(p5));
    NC::_ZN11MsgString9CD1Ev(s2);
    NC::_ZN11MsgString9CD1Ev(s1);
}

extern "C" void VillagerTransfer_SendReplies(Unk_0209f638 *self) {
    Unk_0209fb48_V3 a = NC::data_020e2764;
    Unk_0209fb48_V3 b = NC::data_020e2770;
    s32 i = 2;
    CommManager *o = NC::gCommManager;
    for (; i >= 0; i--) {
        s32 n = i + 1;
        if (o->isSlotActive(n)) {
            s32 q = (s32)NC::_ZN11SaveManager15getTransferDestEj(self, n);
            if (q < 4) {
                if (NC::_ZN18TownExchangeRecord7isValidEv(NC::TownExchange_GetForAid(q))) {
                    a.v[i] = 2;
                    b.v[i] = q;
                } else {
                    a.v[i] = 1;
                }
            } else {
                a.v[i] = 0;
            }
        }
    }
    NC::CommSend_VillagerTransferReply(a.v[0], b.v[0], a.v[1], b.v[1], a.v[2], b.v[2]);
}

extern "C" s32 SaveManager_RunSessionEnd(Unk_0209f638 *self, u8 *st, s32 base, s32 base2, u32 mask, u8 a6) {
    u32 cur = *st;
    if (cur == base) {
        if (NC::Comm_IsConnectionLost(mask)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        if (NC::Net_GetMyAid() == 0) {
            if (NC::CommCtrl_SendAct0E(2, mask)) {
                *st = base + 1;
            }
        } else {
            if (NC::CommCtrl_SendAct0E(2, 1)) {
                *st = base + 1;
            }
        }
    } else if (cur == base + 1) {
        if (NC::Comm_IsConnectionLost(mask)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        NC::_Z20NetOverlay_AssertAnyv();
        if (NC::Net_IsReadyToSend()) {
            *st = base + 2;
        }
    } else if (cur == base + 2) {
        if (NC::Net_GetMyAid() == 0) {
            BOOL flag = TRUE;
            u32 m = 0;
            s32 i;
            NC::Comm_EnterCritical();
            for (i = 3; i >= 0; i--) {
                if (i != 0) {
                    u32 bit = 1 << i;
                    if (mask & bit) {
                        if (self->recvAct06[i] == 0) {
                            flag = FALSE;
                            m = m | bit;
                            m = (u16)m;
                        }
                    }
                }
            }
            BOOL err = NC::Comm_IsConnectionLost(m);
            NC::Comm_LeaveCritical();
            if (err) {
                NC::Comm_SetLostFlag();
                return 0x20;
            }
            if (flag) {
                NC::Comm_ResetNetSession();
                NC::Wifi_EndSession(self);
                *st = base + 3;
            }
        } else {
            if (NC::Comm_IsConnectionLost(mask)) {
                NC::Comm_SetLostFlag();
                return 0x20;
            }
            if (self->ctrlAct0E[0]) {
                if (NC::CommCtrl_SendAct13()) {
                    *st = base + 3;
                }
            }
        }
    } else if (cur == base + 3) {
        if (NC::Net_GetMyAid() == 0) {
            *st = base + 4;
        } else {
            if (NC::Comm_IsConnectionLost(mask)) {
                NC::Comm_SetLostFlag();
                return 0x20;
            }
            NC::_Z20NetOverlay_AssertAnyv();
            if (NC::Net_IsReadyToSend()) {
                NC::Comm_ResetNetSession();
                NC::Wifi_EndSession(self);
                *st = base + 4;
            }
        }
    } else if (cur == base + 4) {
        if (a6) NC::_ZN11SaveManager18showSequence2Msg0AEv(self);
        *st = base + 5;
    }

    cur = *st;
    if (cur == base2) {
        if (NC::Comm_IsConnectionLost(mask)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        if (NC::Net_GetMyAid() == 0) {
            if (NC::CommCtrl_SendAct0E(2, mask)) {
                *st = base2 + 1;
            }
        } else {
            if (NC::CommCtrl_SendAct13()) {
                *st = base2 + 1;
            }
        }
    } else if (cur == base2 + 1) {
        if (NC::Comm_IsConnectionLost(mask)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        NC::_Z20NetOverlay_AssertAnyv();
        if (NC::Net_IsReadyToSend()) {
            *st = base2 + 2;
        }
    } else if (cur == base2 + 2) {
        if (NC::Net_GetMyAid() == 0) {
            BOOL flag = TRUE;
            u32 m = 0;
            s32 i;
            NC::Comm_EnterCritical();
            for (i = 3; i >= 0; i--) {
                if (i != 0) {
                    u32 bit = 1 << i;
                    if (mask & bit) {
                        if (self->recvAct06[i] == 0) {
                            flag = FALSE;
                            m = m | bit;
                            m = (u16)m;
                        }
                    }
                }
            }
            m = NC::Comm_IsConnectionLost(m);
            NC::Comm_LeaveCritical();
            if (m) {
                NC::Comm_SetLostFlag();
                return 0x20;
            }
            if (flag) {
                NC::Comm_ResetNetSession();
                NC::Wifi_EndSession(self);
                *st = base2 + 3;
            }
        } else {
            NC::Comm_ResetNetSession();
            NC::Wifi_EndSession(self);
            *st = base2 + 3;
        }
    } else if (cur == base2 + 3) {
        if (a6) NC::_ZN11SaveManager18showSequence2Msg0BEv(self);
        *st = base2 + 4;
    } else if (cur == base2 + 4) {
        if (NC::TalkWindow_Get(0)->unk_04 == 0) {
            NC::OS_ResetSystem(0);
        }
    }
    return 0x20;
}

extern "C" s32 SaveManager_RunSyncedSaveHost(Unk_0209f638 *self, u8 *st, s32 a2, s32 base, u8 a5, u8 a6, s32 a7, u8 a8, u32 a9) {
    CommManager *o5, *o2;
    u32 cur = *st;
    if (cur == base) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        s32 r = NC::_ZN11SaveManager15verifySlotsStepEv(self);
        if (r == 1) {
            *st = a5;
        } else if (r == 3) {
        } else {
            NC::_ZN11SaveRecord415markInterruptedEv(&NC::gSaveFooter);
            if (a8) {
                NC::_ZN11SaveManager23restoreVillagerTransferEv(self);
                NC::LostChild_ApplyReceived(self);
                NC::LostChild_SaveToTown();
            }
            *st = base + 1;
        }
    } else if (cur == base + 1) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        s32 r = NC::_ZN14SaveSlotWriter12saveSlotStepEi(self, (u32)(self->slotOrder << 24) >> 28);
        if (r == 1) {
            *st = a5;
        } else if (r == 0) {
            *st = base + 2;
        }
    } else if (cur == base + 2) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        s32 r6 = 1;
        s32 i = 3;
        o2 = NC::gCommManager;
        for (; i >= 0; i--) {
            if (o2->isSlotActive(i) && !o2->isMyAid(i)) {
                u8 v = self->ctrlAct0E[i];
                if (v == 0) {
                    r6 = 0;
                    break;
                }
                if (v == 2) {
                    r6 = 2;
                    break;
                }
            }
        }
        if (r6) {
            if (a2 == 0) r6 = 0;
            else if (a2 == 2) r6 = 2;
        }
        if (r6 == 1) {
            NC::func_020a0268(self);
            *st = base + 3;
        } else if (r6 == 2) {
            *st = a6;
        }
    } else if (cur == base + 3) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        NC::_Z20NetOverlay_AssertAnyv();
        if (NC::Net_IsReadyToSend()) {
            u32 m = NC::Comm_GetRemoteMask();
            if (NC::CommCtrl_SendAct0E(1, m)) {
                NC::_ZN11SaveRecord416setStateValidAltEv(&NC::gSaveFooter);
                *st = base + 4;
            }
        }
    } else if (cur == base + 4) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        s32 r = NC::_ZN14SaveSlotWriter12saveSlotStepEi(self, (u32)(self->slotOrder << 24) >> 28);
        if (r == 1) {
            *st = a5;
        } else if (r == 0) {
            *st = base + 5;
        }
    } else if (cur == base + 5) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        s32 r7 = 1;
        s32 i = 3;
        o5 = NC::gCommManager;
        for (; i >= 0; i--) {
            if (o5->isSlotActive(i) && !o5->isMyAid(i)) {
                u8 v = self->ctrlAct0E[i];
                if (v == 0) {
                    r7 = 0;
                    break;
                }
                if (v == 2) {
                    r7 = 2;
                    break;
                }
            }
        }
        if (r7 == 1) {
            *st = base + 6;
        } else if (r7 == 2) {
            *st = a6;
        }
    } else if (cur == base + 6) {
        if (NC::Comm_IsConnectionLost(a9)) {
            NC::Comm_SetLostFlag();
            return 0x20;
        }
        u32 m = NC::Comm_GetRemoteMask();
        if (a7 < 4) {
            m = (u16)(m | (1 << a7));
        }
        if (NC::CommCtrl_SendAct0E(1, m)) {
            *st = base + 7;
        }
    }
    return 0x20;
}

s32 Unk_0209f304::runSyncedSaveClient(u8 *p, u32 base, u32 fail, u8 a5, u8 a6, u8 a7, u32 a8) {
    u32 v = *p;
    s32 r;
    if (v == base) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        r = NB::_ZN11SaveManager15verifySlotsStepEv(this);
        if (r == 1) {
            *p = fail;
        } else if (r != 3) {
            NB::MI_CpuCopy8(NB::gSaveData, saveDataCopy, 0x15fe0);
            *p = base + 1;
        }
    } else if (v == base + 1) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        r = NB::_ZN14SaveSlotWriter12loadSlotStepEi(this, unk_10a_lo);
        if (r == 1) {
            *p = fail;
        } else if (r == 0) {
            if (a6 != 0) {
                NB::_ZN11SaveManager23restoreVillagerTransferEv(this);
            }
            NB::Save_StoreCurrentPlayerToResident(this);
            if (a6 != 0) {
                NB::LostChild_ApplyReceived(this);
                NB::LostChild_SaveToTown();
            }
            NB::_ZN11SaveRecord415markInterruptedEv(NB::gSaveFooter);
            *p = base + 2;
        }
    } else if (v == base + 2) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        r = NB::_ZN14SaveSlotWriter12saveSlotStepEi(this, unk_10a_hi);
        if (r == 1) {
            *p = fail;
        } else if (r == 0) {
            *p = base + 3;
        }
    } else if (v == base + 3) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        if (NB::CommCtrl_SendAct0E(1, 1) != 0) {
            *p = base + 4;
        }
    } else if (v == base + 4) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        if (ctrlAct0E == 1) {
            NB::func_020a0268(this);
            NB::_ZN11SaveRecord416setStateValidAltEv(NB::gSaveFooter);
            *p = base + 5;
        } else if (ctrlAct0E == 2) {
            *p = a5;
        }
    } else if (v == base + 5) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        r = NB::_ZN14SaveSlotWriter12saveSlotStepEi(this, unk_10a_hi);
        if (r == 1) {
            *p = fail;
        } else if (r == 0) {
            if (a7 != 0) {
                NB::MI_CpuCopy8(saveDataCopy, NB::gSaveData, 0x15fe0);
            }
            *p = base + 6;
        }
    } else if (v == base + 6) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        if (NB::CommCtrl_SendAct0E(1, 1) != 0) {
            *p = base + 7;
        }
    } else if (v == base + 7) {
        if (NB::Comm_IsConnectionLost(a8) != 0) {
            NB::Comm_SetLostFlag();
            return 0x20;
        }
        if (ctrlAct0E == 1) {
            *p = base + 8;
        } else if (ctrlAct0E == 2) {
            *p = a5;
        }
    }
    return 0x20;
}

void Unk_0209f304::func_0209f390(u8 *p, u32 base, u32 x, u32 y) {
    u32 v = *p;
    if (v == base) {
        BOOL r = TRUE;
        s32 i = 3;
        u8 *g = NB::gCommManager;
        for (; i >= 0; i--) {
            if (NB::_ZN11CommManager12isSlotActiveEi(g, i) != 0 && NB::_ZN11CommManager7isMyAidEj(g, i) == 0) {
                if (x == NB::NetArea_GetSlotScene(i) || y == NB::NetArea_GetSlotScene(i)) {
                    if (NB::NetArea_IsSlotMoving(i) == 0) {
                        continue;
                    }
                }
                r = FALSE;
                break;
            }
        }
        if (r) {
            NB::_ZN11CommManager14setPendingModeEj(g, 1);
            *p = base + 1;
        }
    } else if (v == base + 1) {
        if (NB::_ZN11CommManager7getModeEv(NB::gCommManager) == 1 && NB::CommCtrl_SendAct08() != 0) {
            *p = base + 2;
        }
    }
}

BOOL Unk_0209f304::func_0209f344() {
    BOOL r = TRUE;
    s32 i = 3;
    u8 *g = NB::gCommManager;
    for (; i >= 0; i--) {
        if (NB::_ZN11CommManager12isSlotActiveEi(g, i) != 0 && NB::_ZN11CommManager7isMyAidEj(g, i) == 0 && ctrlAct10[i] == 0) {
            r = FALSE;
            break;
        }
    }
    return r;
}

void Unk_0209f304::func_0209f304(u8 *p, u32 base) {
    u32 v = *p;
    if (v == base) {
        if (NB::_ZN11CommManager7getModeEv(NB::gCommManager) == 1) {
            *p = base + 1;
        }
    } else if (v == base + 1) {
        if (NB::CommCtrl_SendAct10() != 0) {
            *p = base + 2;
        }
    }
}

extern "C" void SaveManager_StartGatekeeperTalk(u32 a, u32 b) {
    if (b == 0) {
        NB::_ZN12Unk_020a09909startTalkEPKch(a, (u8 *)"sp_npc_gatekeeper", 0x69);
    }
    NB::_ZN12Unk_02097ff49clearFlagEj(NB::PlayerData_GetCurrent(), 2);
    NB::_ZN12HudCountdown5startEii(NB::Hud_GetCountdown(), 0, 1);
}

extern "C" void SaveManager_StartSequence2Talk(u32 a) {
    NB::_ZN12Unk_020a09909startTalkEPKch(a, (u8 *)"sp_etc_sequence2", 7);
    NB::_ZN12Unk_02097ff49clearFlagEj(NB::PlayerData_GetCurrent(), 2);
    if (NB::func_0209f23c() != 0) {
        NB::_ZN12HudCountdown5startEii(NB::Hud_GetCountdown(), 0, 1);
        NB::_ZN12Unk_02097ff47setFlagEj(NB::PlayerData_GetCurrent(), 2);
    }
}

extern "C" void Wifi_StoreFriendList(void) {
    s32 r6 = NB::_ZN11CommManager17getWifiFriendListEv(NB::gCommManager);
    NB::PlayerData_GetCurrent();
    NB::_ZN10PlayerData13getFriendListEv();
    u8 *r5 = NB::FriendList_GetEntries();
    s32 i;
    for (i = 0; i < 0x20; i++) {
        NB::MI_CpuCopy8((u8 *)r6 + i * 12, NB::DwcFriendData_GetBytes(NB::FriendEntry_GetFriendData(r5)), 12);
        r5 += 0x1c;
    }
}

extern "C" u8 func_0209f23c(void) { return NB::data_021ed3a4; }

extern "C" void func_0209f230(u32 v) { NB::data_021ed3a4 = v; }

extern "C" void func_0209f224(u32 v) { NB::data_021ed390 = v; }

extern "C" void NetOverlay_LoadWireless(void) {
    NB::OverlayHandle_Unload(NB::gOverlayHandle);
    NB::OverlayHandle_Load(NB::gOverlayHandle, (u32)NB::OVERLAY_66_ID);
}

extern "C" void NetOverlay_LoadWifi(void) {
    NB::OverlayHandle_Unload(NB::gOverlayHandle);
    NB::OverlayHandle_Load(NB::gOverlayHandle, (u32)NB::OVERLAY_65_ID);
}

extern "C" void NetOverlay_Restore(void) {
    NB::OverlayHandle_Unload(NB::gOverlayHandle);
    NB::OverlayHandle_Load(NB::gOverlayHandle, (u32)NB::OVERLAY_68_ID);
}

void TownCompressBuffer::compress() {
    s32 r = NB::func_021164ec(NB::gSaveData, 0x15fe0, data);
    if (r == 0) {
        size = 0;
        NB::MI_CpuCopy8(NB::gSaveData, data, 0x15fe0);
    } else {
        size = r;
    }
}

void TownCompressBuffer::decompress() {
    void *dst = NB::SaveManager_GetTownTransferBuf();
    if (size != 0) {
        u8 ctx[0x10];
        NB::func_021163b0(ctx, dst, data);
        NB::func_021162b0(ctx, dataBody, size - 4);
    } else {
        NB::MI_CpuCopy8(data, dst, 0x15fe0);
    }
}

u32 TownCompressBuffer::getSize() {
    return size;
}

extern "C" void TownCompressThread_Main(s32 a) {
    BOOL r = a != 0 ? TRUE : FALSE;
    if (r) {
        ((TownCompressBuffer *)NB::SaveManager_GetTownCompressBuf())->compress();
    } else {
        ((TownCompressBuffer *)NB::SaveManager_GetTownCompressBuf())->decompress();
    }
    ((TownCompressThread *)NB::SaveManager_GetTownCompressThread())->done = 1;
    NB::OS_ExitThread();
}

void TownCompressThread::init() {
    stackGuardLow = 0x3039;
    stackGuardHigh = 0x3039;
    done = 0;
    NB::MI_CpuFill8(this, 0, 0xc0);
    threadState = 2;
}

void TownCompressThread::kill() {
    if (NB::OS_IsThreadTerminated(this) == 0) {
        NB::OS_KillThread(this, 0);
    }
}

void TownCompressThread::start(u32 a) {
    NB::OS_CreateThread(this, (void *)NB::TownCompressThread_Main, a, &stackGuardHigh, 0x1000, 0x1e);
    NB::OS_WakeupThreadDirect(this);
}

u8 TownCompressThread::isDone() {
    return done;
}

extern "C" s32 Wifi_EndSession(void) {
    BOOL r4 = FALSE;
    if (NB::Net_GetMode() == 3 || NB::Net_GetMode() == 4) {
        r4 = TRUE;
    }
    s32 r5 = NB::Comm_End();
    if (r4) {
        s32 h = NB::PlayerData_GetCurrent();
        if (h != 0) {
            s32 q = NB::_ZN10PlayerData8getIndexEv(h);
            if (q >= 0 && q < 4) {
                NB::GameStats_ApplyDownload();
                NB::AxMail_ApplyMail();
                NB::AxMail_ApplyBbs();
                NB::Wifi_StoreFriendList();
                if (NB::Save_WritePlayerFriendList() != 0) {
                    s32 t = NB::TalkWindow_Get(0);
                    NB::_ZN15TalkWindowState12hideBusyIconEv();
                    NB::_ZN15TalkWindowState13unlockAdvanceEv(t);
                    u8 b = 2;
                    NB::_ZN15TalkWindowState14setNextMessageEPhPv(t, &b, (u8 *)"sp_npc_gatekeeper");
                }
            }
        }
    }
    return r5;
}

extern "C" BOOL GameStats_Upload(void) {
    u8 *p = NB::gSaveBlancaFace;
    if (NB::_ZN16BlancaFaceRecord8getStateEv(p) == 3) {
        s32 v = NB::_ZN16BlancaFaceRecord11getChecksumEv(p);
        NB::_ZN16BlancaFaceRecord11setChecksumEj(p, NB::Save_CalcChecksum(p, 0x22c, v));
        u32 t = NB::sNetRegion;
        NB::_Z21NetOverlay_AssertWifiv();
        NB::Net_GameStatsUpload((u8 *)"http://gamestats.gs.nintendowifi.net/acrossingds/upload.asp", p, 0x22c, t);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL GameStats_Download(void) {
    if (NB::_ZN16BlancaFaceRecord8getStateEv(NB::gSaveBlancaFace) == 0) {
        u32 t = NB::sNetRegion;
        NB::_Z21NetOverlay_AssertWifiv();
        if (NB::Net_GameStatsDownload((u8 *)"http://gamestats.gs.nintendowifi.net/acrossingds/download.asp", NB::sGameStatsBuf, 0x22c, t) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL AxMail_DownloadMail(void) {
    char a[0xc];
    char buf[0x84];
    if (NB::_ZN8SaveData8testFlagEj(NB::gSaveData, 0x14) != 0) {
        return FALSE;
    }
    NB::func_0212a360(buf, NB::sAxMailBaseUrl);
    NB::func_0212a2bc(buf, NB::sAxMailFileName);
    NB::Net_GetBrid(a);
    NB::func_0212a2bc(buf, "?brid=");
    NB::func_0212a2bc(buf, a);
    u32 t = NB::sNetRegion;
    NB::_Z21NetOverlay_AssertWifiv();
    if (NB::Net_HttpDownload(buf, NB::sAxMailBuf, 0x108, t) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL AxMail_DownloadBbs(void) {
    char a[0xc];
    char buf[0x84];
    if (NB::_ZN8SaveData8testFlagEj(NB::gSaveData, 0x14) != 0) {
        return FALSE;
    }
    NB::func_0212a360(buf, NB::sAxMailBaseUrl);
    NB::func_0212a2bc(buf, NB::sAxBbsFileName);
    NB::Net_GetBrid(a);
    NB::func_0212a2bc(buf, "?brid=");
    NB::func_0212a2bc(buf, a);
    u32 t = NB::sNetRegion;
    NB::_Z21NetOverlay_AssertWifiv();
    if (NB::Net_HttpDownload(buf, NB::sAxBbsBuf, 0xd2, t) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL GameStats_PollDownload(void) {
    if (NB::Net_IsDownloadDone(NB::_Z21NetOverlay_AssertWifiv()) != 0) {
        NB::sGameStatsReceived = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL AxMail_PollMail(void) {
    if (NB::Net_IsDownloadDone(NB::_Z21NetOverlay_AssertWifiv()) != 0) {
        NB::sAxMailReceived = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL AxMail_PollBbs(void) {
    if (NB::Net_IsDownloadDone(NB::_Z21NetOverlay_AssertWifiv()) != 0) {
        NB::sAxBbsReceived = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL GameStats_PollUpload(void) {
    if (NB::Net_IsUploadDone(NB::_Z21NetOverlay_AssertWifiv()) != 0) {
        NB::_ZN16BlancaFaceRecord5resetEv(NB::gSaveBlancaFace);
        return TRUE;
    }
    return FALSE;
}

extern "C" void GameStats_ApplyDownload(void) {
    if (NB::sGameStatsReceived != 0) {
        NB::sGameStatsReceived = 0;
        s32 r = NB::Save_Sum16(NB::sGameStatsBuf, 0x22c);
        u8 *dst = NB::gSaveBlancaFace;
        if (r == 0) {
            NB::_ZN16BlancaFaceRecord8setStateEj(NB::sGameStatsBuf, 1);
            NB::MI_CpuCopy8(NB::sGameStatsBuf, dst, 0x22c);
        }
        NB::MI_CpuFill8(NB::sGameStatsBuf, 0, 0x22c);
        NB::_ZN16BlancaFaceRecord11setChecksumEj(NB::sGameStatsBuf, 1);
    }
}

extern "C" void AxMail_ApplyMail(void) {
    if (NB::sAxMailReceived != 0) {
        u32 buf[4];
        u32 obj[0x42];
        NB::sAxMailReceived = 0;
        NB::AxMail_Construct(obj);
        NB::MI_CpuCopy8(NB::sAxMailBuf, obj, 0x108);
        NB::MI_CpuFill8(NB::AxMail_GetDigest((u8 *)obj), 0, 0x10);
        NB::func_0211a748(buf, obj, 0x108, NB::AxMail_GetDigestKey(), 0x10);
        if (NB::Mem_Differs(NB::AxMail_GetDigest(NB::sAxMailBuf), (u8 *)buf, 0x10) == 0) {
            NB::AxMail_Deliver(NB::sAxMailBuf);
        }
        NB::MI_CpuFill8(NB::sAxMailBuf, 0, 0x108);
        NB::AxMail_Destruct(obj);
    }
}

extern "C" void AxMail_ApplyBbs() {
    u8 a[0x10];
    u8 b[0xd2];
    if (NA::sAxBbsReceived != 0) {
        NA::sAxBbsReceived = 0;
        NA::AxBbsNotice_Construct(b);
        NA::MI_CpuCopy8(NA::sAxBbsBuf, b, 0xd2);
        NA::MI_CpuFill8(NA::AxBbsNotice_GetDigest(b), 0, 0x10);
        NA::func_0211a748(a, b, 0xd2, NA::AxMail_GetDigestKey(), 0x10);
        if (NA::Mem_Differs(NA::AxBbsNotice_GetDigest(NA::sAxBbsBuf), a, 0x10) == 0) {
            NA::AxBbsNotice_Post(NA::sAxBbsBuf);
        }
        NA::MI_CpuFill8(NA::sAxBbsBuf, 0, 0xd2);
        NA::AxBbsNotice_Destruct(b);
    }
}

extern "C" void JoinHistory_Push(u32 v) {
    s32 i;
    for (i = 0; i < 2; i++) {
        NA::sRecentJoinAids[i] = NA::sRecentJoinAids[i + 1];
    }
    NA::sRecentJoinAids[2] = v;
}

extern "C" void JoinHistory_Remove(u32 v) {
    u32 idx = 0xff;
    s32 i;
    for (i = 0; i < 3; i++) {
        if (NA::sRecentJoinAids[i] == v) {
            idx = i;
            break;
        }
    }
    if (idx != 0xff) {
        for (; (s32)idx < 2; idx++) {
            NA::sRecentJoinAids[idx] = NA::sRecentJoinAids[idx + 1];
        }
        NA::sRecentJoinAids[2] = 0xff;
    }
}

extern "C" void JoinHistory_Clear() {
    s32 i;
    for (i = 0; i < 3; i++) {
        NA::sRecentJoinAids[i] = 0xff;
    }
}

extern "C" u32 JoinHistory_GetLatest() {
    s32 i;
    for (i = 2; i >= 0; i--) {
        if (NA::sRecentJoinAids[i] != 0xff) {
            return NA::sRecentJoinAids[i];
        }
    }
    return 4;
}

void *data_020e2534[2] = {(void *)NT::SaveManager_ExecAct15, 0};

ProcProfile sSaveManagerProfile = {(void *(*)())SaveManager_Create, 0xc7, 0xc5};

void *data_020e25bc[2] = {(void *)NT::_ZN11SaveManager10enterAct01Ev, 0};

u8 sSessionResidentIndex = 7;

void *data_020e266c[2] = {(void *)NT::_ZN12Unk_020a32389execAct0BEv, 0};

void *data_020e26dc[2] = {(void *)NT::_ZN12Unk_020a323810enterAct06Ev, 0};

char data_020e27a4[] = "http://axing.nintendowifi.net/axmail/";

void *data_020e2564[2] = {(void *)NT::SaveManager_EnterAct17, 0};

const s32 sSaveSlotDataSizes[3] = {0x15fe0, 0x15fe0, 0x11df4};

char *sAxMailBaseUrl = data_020e27a4;

u8 data_021ed398;
