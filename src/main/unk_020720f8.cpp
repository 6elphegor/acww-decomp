#include "types.h"

// U126: communication manager CommManager (singleton gCommManagerInstance, reached through the constant pointer
// gCommManager) and its helpers, 0x020720f8-0x020742f4

struct Unk_02072408_Row {
    u32 v[3];
};

struct Unk_02072408_Tail {
    u32 pad[9];
    u32 a4c[3];
    u32 a58[3];
};

class CommManager {
public:
    /* 0x000 */ u8 unk_00[4];
    /* 0x004 */ u16 unk_04;
    /* 0x006 */ u8 unk_06;
    /* 0x007 */ u8 unk_07;
    /* 0x008 */ u8 *unk_08;
    /* 0x00c */ u32 unk_0c[3];
    /* 0x018 */ u32 unk_18[3];
    /* 0x024 */ u8 *unk_24;
    /* 0x028 */ union {
        Unk_02072408_Row unk_28[4];
        Unk_02072408_Tail unk_28t;
    };
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u32 unk_68;
    /* 0x06c */ u8 unk_6c;
    /* 0x06d */ u8 unk_6d;
    /* 0x06e */ u8 pad_6e[2];
    /* 0x070 */ void *unk_70;
    /* 0x074 */ u8 unk_74;
    /* 0x078 */ u8 *unk_78;
    /* 0x07c */ u8 unk_7c[0xc4 - 0x7c];
    /* 0x0c4 */ u8 *unk_c4;
    /* 0x0c8 */ u32 unk_c8;
    /* 0x0cc */ u8 *unk_cc;
    /* 0x0d0 */ u8 *unk_d0;
    /* 0x0d4 */ u8 *unk_d4;
    /* 0x0d8 */ u8 *unk_d8;
    /* 0x0dc */ u32 unk_dc;
    /* 0x0e0 */ u8 *unk_e0;
    /* 0x0e4 */ u8 *unk_e4;
    /* 0x0e8 */ u32 unk_e8;
    /* 0x0ec */ u8 *unk_ec;
    /* 0x0f0 */ u32 unk_f0;
    /* 0x0f4 */ u8 *unk_f4;
    /* 0x0f8 */ u32 unk_f8;
    /* 0x0fc */ u32 unk_fc;
    /* 0x100 */ u32 unk_100;
    /* 0x104 */ u8 *unk_104;
    /* 0x108 */ u32 unk_108;
    /* 0x10c */ u32 unk_10c;
    /* 0x110 */ u8 pad_110[4];
    /* 0x114 */ s16 unk_114;
    /* 0x116 */ s16 unk_116;
    /* 0x118 */ u32 unk_118;
    /* 0x11c */ u32 unk_11c;
    /* 0x120 */ u32 unk_120;
    /* 0x124 */ u32 unk_124;
    /* 0x128 */ u16 unk_128[3];
    /* 0x12e */ u16 unk_12e;
    /* 0x130 */ u16 unk_130;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 unk_134[0x3e0];
    /* 0x514 */ u8 unk_514[0x50];

    CommManager();
    ~CommManager();

    u8 *getWifiUserData();
    u8 *getWifiFriendList();
    void func_02072204(u32 v);
    u32 getSendRetryLimit();
    void setSendRetryLimit(u32 v);
    u32 getSendRetry();
    void setSendRetry(u32 v);
    void clearNoAckFrames();
    void resetNoAckFrames(s32 i);
    u32 getNoAckFrames(s32 i);
    u32 getErrorMode();
    void setErrorMode(u32 v);
    u32 getErrorFlags();
    void setErrorFlags(u32 v);
    u32 getLatchedErrorFlags();
    void setLatchedErrorFlags(u32 v);
    void appendControl(void *src, u32 n);
    void clearControlLen();
    u32 getControlLen();
    void setControlLen(u32 v);
    void clearConfirmedSeq();

    void clearSentSeq();
    s16 getConfirmedSeq();
    s16 getSentSeq();
    void setConfirmedSeq(s16 v);
    void setSentSeq(s16 v);
    u32 getAuxLenB();
    void setAuxLenB(u32 v);
    void clearAuxLenB();
    void setAuxBufB(u32 v);
    u32 getAuxBufB();
    void appendAuxB(u8 *src, u32 n);
    u32 getAuxLenA();
    void setAuxLenA(u32 v);
    void clearAuxLenA();
    void setAuxBufA(u32 v);
    u32 getAuxBufA();
    void dispatchLoopback();
    u32 getLoopbackLen();
    void setLoopbackLen(u32 v);
    void clearLoopbackLen();
    void setLoopbackBuf(u8 *v);
    u8 *getLoopbackBuf();
    void dispatchHeld();
    u32 getHeldLen();
    void setHeldLen(u32 v);
    void clearHeldLen();
    void setHeldBuf(u8 *v);
    u8 *getHeldBuf();
    void flushDeferred();
    u32 getDeferredLen();
    void setDeferredLen(u32 v);
    void clearDeferredLen();
    void setDeferredBuf(u8 *v);
    u8 *getDeferredBuf();
    void readRecord(u8 *src, u32 n);
    u8 *getReadPtr();
    void setReadPtr(u8 *v);
    u32 getSendQueueLen();
    void setSendQueueLen(u32 v);
    void resetSendQueueLen();
    void setSendQueueBuf(u8 *v);
    u8 *getSendQueueBuf();
    void endRecord(u32 a, u32 b);
    void writeRecord(u8 *p, u32 n);
    void beginRecord();
    u32 getRecordLen();
    void setRecordLen(u32 v);
    void resetRecordBuf();
    void setRecordBuf(u8 *v);
    u8 *getRecordBuf();
    void clearSyncVarDirty();
    void setSyncVarDirty(s32 i, u32 v);
    u32 isSyncVarDirty(s32 i);
    u8 *getSyncVar(u32 i);
    void setSyncVarBuf(u8 *v);
    u8 *getSyncVarBuf();
    void clearMemberCount();
    void setMemberCount(u32 v);
    BOOL isLocalSlot(u32 v);
    BOOL isMyAid(u32 v);
    u32 getRecvWriteSlot(s32 a);
    u32 getRecvReadSlot(s32 a);
    void popRecvSlot(s32 a);
    void pushRecvSlot(s32 a);
    void clearRecvRingIndices();
    void processReceived();
    void clearRecvRings();
    void clearRecvLen(s32 a, u32 b);
    void setRecvLen(s32 a, u32 b, u32 c);
    u32 getRecvLen(s32 a, u32 b);
    void setRecvBufs(u8 *v);
    u8 *getRecvBufByPeer(s32 a, s32 b);
    u8 *getRecvBuf(s32 a, s32 b);
    void clearAckCounts();
    void incAckCount(s32 a);
    void setAckCount(s32 a, u32 v);
    u32 getAckCount(s32 a);

    void resetSendCredits();
    void resetSendCredit(s32 a);
    void subSendCredit(s32 a, u32 b);
    void addSendCredit(s32 a, u32 b);
    u32 getSendCredit(s32 a);
    u8 *getSendBuf(s32 i);
    void setSendBufs(u8 *p);
    u8 getPendingMode();
    void setPendingMode(u32 v);
    u8 getMode();
    void setMode(u32 v);
    void incSendSeq();
    s16 getSendSeq();
    BOOL isOnline();
    void clearSlotsActive();
    u32 isSlotActive(s32 i);
    void setSlotActive(s32 i, u32 v);
    BOOL isSendReady();
    BOOL sendPackets(u8 *a1, u32 a2, u32 a3, u8 *s4, u32 s5, u16 s6, u8 *s7, u32 s8, u16 s9);
    void reset();
    void initLocal();
    void init();
};

// ======== types of unk_02071ae0.cpp ========
struct Unk_02071b10_Id16 {
    u8 b[16];
};
struct Unk_02071fa4_Id8 {
    u8 b[8];
};
class Unk_020942c8 {
public:
    Unk_020942c8();
    ~Unk_020942c8();
    u16 unk_00;
    Unk_02071fa4_Id8 unk_02;
    u16 unk_0a;
    Unk_02071fa4_Id8 unk_0c;
    s8 unk_14;
    u8 unk_15;
    BOOL func_020941e8(Unk_020942c8 *o);
};
class EncodedString16Buf {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    EncodedString16Buf();
    virtual ~EncodedString16Buf();
    void copyTo(u8 *dst, s32 n);
    void StrBuf_SetBytes(u8 *src, s32 n);
    u8 unk_04[0x20];
};
class Unk_02071ed0 : public Unk_020942c8 {
public:
    Unk_02071ed0();
    ~Unk_02071ed0();
    Unk_02071b10_Id16 unk_16;
    struct {
        u8 lo : 4;
        u8 hi : 4;
    } unk_26;
    u8 pad_27;

    void func_02071ed0(u32 v);
    u8 func_02071ee8();
    void func_02071ef4(u8 *src);
    void func_02071f08(EncodedString16Buf *o);
    void func_02071f1c(void *x);
    void func_02071f48(u8 *dst);
    void func_02071f5c(EncodedString16Buf *o);
    void func_02071f70(void *x);
    Unk_020942c8 *func_02071fa0();
    void func_02071fa4(Unk_020942c8 *src);
    void func_02071ff0();
    void func_0207200c(u32 v);
    u8 func_0207202c();
    void func_02072040();
    BOOL func_02072084(Unk_02071ed0 *o);
};
class Pattern {
public:
    Pattern();
    ~Pattern();
    u8 unk_00[0x200];
    Unk_02071ed0 unk_200;

    Unk_02071ed0 *func_02071e04();
    void func_02071e10(u32 v);
    void func_02071e3c(void *dst);
    u8 *func_02071e58();
    BOOL func_02071e8c(Pattern *o);
};
class Unk_02071ae0 : public Pattern {
public:
    Unk_02071ae0();
    ~Unk_02071ae0();
};
class Unk_02071c1c {
public:
    Unk_02071c1c();
    ~Unk_02071c1c();
    u8 unk_00[8];
    u32 func_02071c1c(u32 i);
    void func_02071c2c(u32 a, u32 b);
    void func_02071c44();
};
class AbleSistersPatterns {
public:
    AbleSistersPatterns();
    ~AbleSistersPatterns();
    Pattern unk_00[8];

    Pattern *func_02071b00(u8 i);
    void func_02071b10();
};
class PlayerPatterns {
public:
    PlayerPatterns();
    ~PlayerPatterns();
    Pattern unk_00[8];
    Unk_02071c1c unk_1140;

    Unk_02071c1c *func_02071c5c();
    Pattern *func_02071c68(u32 i);
    Pattern *func_02071c88(u8 i);
    void func_02071c98(Unk_020942c8 *a, Unk_020942c8 *b);
    void func_02071d08(Unk_020942c8 *a);
};
struct Unk_020720f8_Data {
    u32 v;
    u8 f;
};
enum Unk_020720f8_Id { Unk_020720f8_Id_0 = 0 };

// ======== types of unk_02072408.cpp ========
struct Unk_020724e0_Loc {
    u8 a;
    u8 b;
    u8 buf[5];
};
struct Unk_0207264c_Loc {
    u8 a;
    u8 b;
    u8 buf[5];
    u8 buf3[5];
    u8 buf2[5];
};

// ======== types of unk_02072d5c.cpp ========

// ======== types of new_020733e4.cpp ========

// ======== types of unk_020739b8.cpp ========

// ======== unk_020739b8.cpp ========
namespace n4 {
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
extern u32 *gNetHeap;
}
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
s32 _ZN11CommManager12isSlotActiveEi(CommManager *, s32);
}
extern "C" {
s32 _ZN11CommManager7getModeEv(CommManager *);
}
extern "C" {
void _ZN11CommManager12dispatchHeldEv(CommManager *);
}
extern "C" {
void _ZN11CommManager16dispatchLoopbackEv(CommManager *);
}
extern "C" {
void _ZN11CommManager15processReceivedEv(CommManager *);
}
extern "C" {
void func_020ebc34();
}
extern "C" {
s32 NetHeap_Destroy();
}
extern "C" {
u32 func_020e86fc(u32 *, u32);
}
extern "C" {
void _Z20NetOverlay_AssertAnyv();
}
extern "C" {
s32 Net_Shutdown();
}
extern "C" {
void func_020b7870();
}
extern "C" {
void _ZN11CommManager5resetEv(CommManager *);
}
extern "C" {
void *_ZN11CommManager10getAuxBufBEv(CommManager *);
}
extern "C" {
void NetHeap_Free(void *);
}
extern "C" {
void _ZN11CommManager10setAuxBufBEj(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager10getAuxBufAEv(CommManager *);
}
extern "C" {
void _ZN11CommManager10setAuxBufAEj(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager14getLoopbackBufEv(CommManager *);
}
extern "C" {
void _ZN11CommManager14setLoopbackBufEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager10getHeldBufEv(CommManager *);
}
extern "C" {
void _ZN11CommManager10setHeldBufEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager14getDeferredBufEv(CommManager *);
}
extern "C" {
void _ZN11CommManager14setDeferredBufEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager15getSendQueueBufEv(CommManager *);
}
extern "C" {
void _ZN11CommManager15setSendQueueBufEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager12getRecordBufEv(CommManager *);
}
extern "C" {
void _ZN11CommManager12setRecordBufEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager10getRecvBufEii(CommManager *, u32, u32);
}
extern "C" {
void _ZN11CommManager11setRecvBufsEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager10getSendBufEi(CommManager *, s32);
}
extern "C" {
void _ZN11CommManager11setSendBufsEPh(CommManager *, void *);
}
extern "C" {
void *_ZN11CommManager13getSyncVarBufEv(CommManager *);
}
extern "C" {
void _ZN11CommManager13setSyncVarBufEPh(CommManager *, void *);
}
extern "C" {
void CommSyncVar_Init();
}
extern "C" {
void *NetHeap_Alloc(u32, u32);
}
extern "C" {
void Net_Init(u32, u32, u32, u64, u32, void *, void *);
}
extern "C" {
s32 _ZN11CommManager17getWifiFriendListEv(CommManager *);
}
extern "C" {
s32 _ZN11CommManager15getWifiUserDataEv(CommManager *);
}
extern "C" {
void MI_CpuFill8(void *, u32, u32);
}
extern "C" {
u32 PlayerData_GetCurrent();
}
extern "C" {
void _ZN10PlayerData13getFriendListEv();
}
extern "C" {
u8 *FriendList_GetEntries();
}
extern "C" {
void FriendEntry_GetFriendData(void *);
}
extern "C" {
void *DwcFriendData_GetBytes();
}
extern "C" {
void MI_CpuCopy8(const void *, void *, u32);
}
extern "C" {
void _ZN10PlayerData11getPlayerIdEv(u32);
}
extern "C" {
void *_ZN8PlayerId13func_02094104Ev();
}
extern "C" {
void *func_02063964(void *);
}
extern "C" {
void _ZN10PlayerData15getWifiUserDataEv(u32);
}
extern "C" {
void *PlayerWifiData_GetDwcUserData();
}
extern "C" {
s32 _Z21NetOverlay_AssertWifiv();
}
extern "C" {
void Net_StartWifi(u32, void *, void *, void *, void *);
}
extern "C" {
void _Z25NetOverlay_AssertWirelessv();
}
extern "C" {
void Net_StartLocal(u32, void *);
}
extern "C" {
void func_02098e8c();
}
extern "C" {
void Comm_OnReceive(u32, u8 *, u32);
}
extern "C" {
s32 _ZN11CommManager12setErrorModeEj(CommManager *, u32);
}
extern "C" {
s32 CommSyncVar_GetVarSize(u32);
}
extern "C" {
void NetHeap_Create(u32, u32);
}
extern "C" {
void func_020ebc38();
}
extern "C" {
void func_020a63bc(u32, u32, u32, u32, u32);
}
extern "C" {
void _ZN11CommManager13setSlotActiveEij(CommManager *, u32, u32);
}
extern "C" {
void _ZN11CommManager14setMemberCountEj(CommManager *, u32);
}
extern "C" {
void _ZN11CommManager15resetSendCreditEi(CommManager *, u32);
}
extern "C" {
void _ZN11CommManager11setAckCountEij(CommManager *, u32, u32);
}
extern "C" {
void NetSession_RemoveSlot(u32);
}
extern "C" {
u32 NetSession_GetSyncState(u32);
}
extern "C" {
void CommPacket_SetHeader(void *, u32, u32);
}
extern "C" {
u32 Comm_GetMemberMask(u32);
}
extern "C" {
u32 _ZN11CommManager15getSendQueueLenEv();
}
extern "C" {
u32 _ZN11CommManager14getDeferredLenEv(CommManager *);
}
extern "C" {
void _ZN11CommManager14setDeferredLenEj(CommManager *, u32);
}
extern "C" {
void CommRecord_UnpackSource(u8 *, u8 *, u8 *);
}
extern "C" {
u32 CommRecord_GetLength(u8 *);
}
extern "C" {
void func_020b50e8();
}
extern "C" {
u32 NetArea_ResolveRoute(u32, u32, u32, u8 *);
}
extern "C" {
s32 _ZN11CommManager14isSyncVarDirtyEi(CommManager *, u32);
}
extern "C" {
void *_ZN11CommManager10getSyncVarEj(CommManager *, u32);
}
extern "C" {
s32 _ZN11CommManager7isMyAidEj(CommManager *, u32);
}
extern "C" {
void *_ZN11CommManager11getAckCountEi(CommManager *, u32);
}
extern "C" {
void CommPacket_SetAckHeader(void *, void *);
}
extern "C" {
void *_ZN11CommManager15getConfirmedSeqEv(CommManager *);
}
extern "C" {
void func_01ffa314();
}
extern "C" {
void OS_DisableInterrupts();
}
extern "C" {
s32 CommPacket_GetAck(u8 *);
}
extern "C" {
void _ZN11CommManager13addSendCreditEij(CommManager *, u32, s32);
}
extern "C" {
s32 CommPacket_IsControl(u8 *);
}
extern "C" {
s32 CommPacket_GetType(u8 *);
}
extern "C" {
void CommCtrl_Dispatch(u8 *, u32, u32, s32);
}
extern "C" {
void _ZN11CommManager16resetNoAckFramesEi(CommManager *, u32);
}
extern "C" {
u32 _ZN11CommManager16getRecvWriteSlotEi(CommManager *, u32);
}
extern "C" {
void _ZN11CommManager10setRecvLenEijj(CommManager *, u32, u32, u32);
}
extern "C" {
void _ZN11CommManager12pushRecvSlotEi(CommManager *, u32);
}
extern "C" {
void Net_SetRecvBuffer(u32, void *, u32);
}
extern "C" {
void DC_FlushAll(u32);
}
extern "C" {
void func_02078348();
}
extern "C" {
void func_020850e0();
}
extern "C" {
void func_020851e4();
}
extern "C" {
void func_0205267c();
}
extern "C" {
void func_0209c408();
}
extern "C" {
void func_020b1dc0();
}
extern "C" {
void func_0203eb38();
}
extern "C" {
void func_0206f81c();
}
extern "C" {
void *Item_MakeBuilding(u32);
}
extern "C" {
void func_020b1040(void *, u32);
}
extern "C" {
void func_020514a4(u32);
}
extern "C" {
void func_0209c5a0(u32, u32);
}
extern "C" {
void func_02095260(u32);
}
extern "C" {
void ReddPassword_ForgetVisitor();
}
namespace Unk_02073e14_ns {
extern "C" s32 Comm_ResetPeerState(s32);
}
extern "C" s32 Comm_IsSyncFinished(u32);
extern "C" s32 Comm_IsSeqAtOrBefore(s32 a, s32 b);

extern "C" void Comm_ResetPeerState(s32 r4) {
    if (r4 == 4) {
        func_02078348();
        func_020850e0();
        func_020851e4();
    }
    func_0205267c();
    func_0209c408();
    func_020b1dc0();
    func_0203eb38();
    func_0206f81c();
    if (r4 < 0) {
        CommManager *o = gCommManager;
        if (_ZN11CommManager7isMyAidEj(o, 0) != 0 || _ZN11CommManager7isMyAidEj(o, 4) != 0) {
            if (r4 == -4) {
                for (u32 i = 0; i < 0x22; i++) {
                    void *r6 = Item_MakeBuilding(i);
                    func_020b1040(r6, 1);
                    func_020b1040(r6, 2);
                    func_020b1040(r6, 3);
                }
                func_020514a4(1);
                func_020514a4(2);
                func_020514a4(3);
                for (u32 i = 0; i < 0x33; i++) {
                    u32 r6 = (u8)i;
                    func_0209c5a0(r6, 1);
                    func_0209c5a0(r6, 2);
                    func_0209c5a0(r6, 3);
                }
            } else {
                s32 r6 = -r4;
                for (u32 i = 0; i < 0x22; i++) {
                    func_020b1040(Item_MakeBuilding(i), r6);
                }
                func_020514a4(r6);
                for (u32 i = 0; i < 0x33; i++) {
                    func_0209c5a0((u8)i, r6);
                }
            }
        }
    }
    if (r4 < 0) {
        if (r4 == -4) {
            for (u32 i = 0; i < 4; i++) {
                func_02095260(i);
            }
        } else {
            func_02095260(-r4);
        }
    }
    if (r4 == -4) {
        ReddPassword_ForgetVisitor();
    }
    if ((r4 < 0 ? -r4 : r4) < 4) {
        if (r4 < 0) r4 = -r4;
        _ZN11CommManager16resetNoAckFramesEi(gCommManager, r4);
    }
}
extern "C" void Comm_EnterCritical() {
    OS_DisableInterrupts();
}
extern "C" void Comm_LeaveCritical() {
    func_01ffa314();
}
extern "C" void Comm_OnReceive(u32 a, u8 *b, u32 c) {
    DC_FlushAll(a);
    s32 r2 = CommPacket_GetAck(b);
    if (r2 != 0) {
        _ZN11CommManager13addSendCreditEij(gCommManager, a, r2);
    }
    if (CommPacket_IsControl(b) != 0) {
        s32 r3 = CommPacket_GetType(b);
        if (r3 < 0x18) {
            CommCtrl_Dispatch(b + 1, c - 1, a, r3);
        }
    } else {
        _ZN11CommManager16resetNoAckFramesEi(gCommManager, a);
        if (c > 1) {
            CommManager *o = gCommManager;
            _ZN11CommManager10setRecvLenEijj(o, a, _ZN11CommManager16getRecvWriteSlotEi(o, a), c);
            _ZN11CommManager12pushRecvSlotEi(o, a);
            void *r4 = _ZN11CommManager10getRecvBufEii(o, a, _ZN11CommManager16getRecvWriteSlotEi(o, a));
            _Z20NetOverlay_AssertAnyv();
            Net_SetRecvBuffer((u16)a, r4, 0x1000);
        }
    }
}
extern "C" s32 Comm_IsSeqAtOrBefore(s32 a, s32 b) {
    if (b < 0) return 0;
    if (a < 0) return 1;
    s32 d = a - b;
    if (d != 0) {
        if (d > 0x3fff) {
            d -= 0x7fff;
        } else if (d < -0x3fff) {
            d = 0x7fff - d;
        }
        if (d > 0) return 0;
    }
    return 1;
}
extern "C" void Comm_IsSeqConfirmed(s32 a) {
    Comm_IsSeqAtOrBefore(a, (s32)_ZN11CommManager15getConfirmedSeqEv(gCommManager));
}
extern "C" void Comm_WriteAckHeaders() {
    s32 i = 3;
    CommManager *o = gCommManager;
    for (; i >= 0; i--) {
        if (_ZN11CommManager12isSlotActiveEi(o, i)) {
            if (_ZN11CommManager7isMyAidEj(o, i) == 0) {
                void *p = _ZN11CommManager10getSendBufEi(o, i);
                CommPacket_SetAckHeader(p, _ZN11CommManager11getAckCountEi(o, i));
            }
        }
    }
}
extern "C" s32 Comm_WriteSyncVars(u8 *dst, void *src, s32 n) {
    if (src == 0) {
        s32 cnt = 0;
        s32 i = 0x45;
        CommManager *o = gCommManager;
        for (; i >= 0; i--) {
            if (_ZN11CommManager14isSyncVarDirtyEi(o, i)) {
                u8 tmp;
                tmp = i;
                MI_CpuCopy8(&tmp, dst, 1);
                dst++;
                cnt++;
                void *p = _ZN11CommManager10getSyncVarEj(o, i);
                s32 sz = CommSyncVar_GetVarSize(i);
                MI_CpuCopy8(p, dst, sz);
                dst += sz;
                cnt += sz;
            }
        }
        *dst = 0x46;
        return cnt + 1;
    }
    MI_CpuCopy8(src, dst, n);
    return n;
}
extern "C" u32 Comm_CollectRecordsFor(u8 *dst, u32 id) {
    u32 r7 = 0;
    u32 size, l0c, l14;
    CommManager *o;
    u8 a[8];
    o = gCommManager;
    size = _ZN11CommManager15getSendQueueLenEv();
    u8 *r5 = (u8 *)_ZN11CommManager15getSendQueueBufEv(o);
    u32 r6 = 0;
    while (r6 < size) {
        MI_CpuCopy8(r5, a + 3, 5);
        l0c = a[6];
        CommRecord_UnpackSource(a + 7, a, a + 1);
        u32 r4 = CommRecord_GetLength(a + 3);
        func_020b50e8();
        u32 r = NetArea_ResolveRoute(id, l0c, a[0], a + 2);
        if (a[2] != 0) {
            l14 = _ZN11CommManager14getDeferredLenEv(o);
            u8 *d2 = (u8 *)_ZN11CommManager14getDeferredBufEv(o) + l14;
            MI_CpuCopy8(r5, d2, r4 + 5);
            l14 += r4 + 5;
            _ZN11CommManager14setDeferredLenEj(o, l14);
        } else if (r == id) {
            MI_CpuCopy8(r5, dst, r4 + 5);
            dst += r4 + 5;
            r7 += r4 + 5;
        }
        r5 += r4 + 5;
        r6 += r4 + 5;
    }
    return r7;
}
extern "C" s32 Comm_IsSyncFinished(u32 a) {
    u32 v = NetSession_GetSyncState(a);
    if (v - 5 <= 1) return 1;
    return 0;
}
extern "C" s32 Comm_WriteSyncReply(u32 a) {
    s32 r5 = 0;
    if (Comm_IsSyncFinished(a)) {
        u8 *r6 = (u8 *)_ZN11CommManager10getSendBufEi(gCommManager, a);
        CommPacket_SetHeader(r6, r5, 6);
        u32 r4 = NetSession_GetSyncState(a);
        u32 t = Comm_GetMemberMask(r4);
        r6[1] = (r4 & 7) | ((t << 4) & 0xf0);
        r5 += 2;
    }
    return r5;
}
extern "C" void Comm_RemoveMember(s32 a) {
    s32 i = 3;
    CommManager *o = gCommManager;
    for (; i >= 0; i--) {
        if (_ZN11CommManager12isSlotActiveEi(o, i)) {
            if (i == 0) {
                func_020a63bc(0, 0x3f, 1, 0, 2);
            } else {
                func_020a63bc(i, 0x3f, 0, 0, 2);
            }
        }
    }
    func_020a63bc(a, 0x3f, 0, 0, 7);
    o = gCommManager;
    _ZN11CommManager13setSlotActiveEij(o, a, 0);
    _ZN11CommManager14setMemberCountEj(o, (u8)(o->unk_6c - 1));
    _ZN11CommManager15resetSendCreditEi(o, a);
    _ZN11CommManager11setAckCountEij(o, a, 0);
    NetSession_RemoveSlot(a);
    Unk_02073e14_ns::Comm_ResetPeerState(-a);
}
extern "C" void Comm_CreateHeap(u32 a) {
    u32 r5 = 0;
    for (s32 i = 0x45; i >= 0; i--) {
        u32 v = CommSyncVar_GetVarSize(i);
        if (v > r5) r5 = v;
    }
    gCommManager->unk_6d = r5;
    NetHeap_Create(0x4b000, a);
    func_020ebc38();
}
extern "C" void Comm_Start(s32 a, u32 b, u32 c) {
    CommManager *o = gCommManager;
    o->unk_74 = 1;
    CommSyncVar_Init();
    o->unk_70 = NetHeap_Alloc(o->unk_6d, 4);
    _ZN11CommManager11setSendBufsEPh(o, NetHeap_Alloc(0x3000, 4));
    _ZN11CommManager11setRecvBufsEPh(o, NetHeap_Alloc(0x9000, 4));
    _ZN11CommManager12setRecordBufEPh(o, NetHeap_Alloc(0x92e, 4));
    _ZN11CommManager15setSendQueueBufEPh(o, NetHeap_Alloc(0x92e, 4));
    _ZN11CommManager14setDeferredBufEPh(o, NetHeap_Alloc(0x92e, 4));
    _ZN11CommManager10setHeldBufEPh(o, NetHeap_Alloc(0x92e, 4));
    _ZN11CommManager14setLoopbackBufEPh(o, NetHeap_Alloc(0x92e, 4));
    _ZN11CommManager10setAuxBufAEj(o, NetHeap_Alloc(0xc00, 4));
    _ZN11CommManager10setAuxBufBEj(o, NetHeap_Alloc(0xc00, 4));
    _Z20NetOverlay_AssertAnyv();
    Net_Init(0x41444d45, 0x400040, 1, 0x4fe752, b, (void *)NetHeap_Alloc, (void *)NetHeap_Free);
    if ((u8)(a + 0xff) <= 1) {
        _Z25NetOverlay_AssertWirelessv();
        Net_StartLocal(a, (void *)Comm_OnReceive);
    } else {
        CommManager *p = gCommManager;
        u8 *r5 = (u8 *)_ZN11CommManager17getWifiFriendListEv(p);
        u8 *r6 = (u8 *)_ZN11CommManager15getWifiUserDataEv(p);
        MI_CpuFill8(r5, 0, 0x3e0);
        MI_CpuFill8(r6, 0, 0x50);
        u32 l18 = PlayerData_GetCurrent();
        _ZN10PlayerData13getFriendListEv();
        u8 *l1c = FriendList_GetEntries();
        for (s32 i = 0; i < 0x20; i++) {
            FriendEntry_GetFriendData(l1c);
            MI_CpuCopy8(DwcFriendData_GetBytes(), r5 + i * 12, 12);
            l1c += 0x1c;
        }
        _ZN10PlayerData11getPlayerIdEv(l18);
        MI_CpuCopy8(_ZN8PlayerId13func_02094104Ev(), r6, 8);
        MI_CpuCopy8(func_02063964((u8 *)((u32)gSaveData + 2)), r6 + 8, 8);
        _ZN10PlayerData15getWifiUserDataEv(l18);
        MI_CpuCopy8(PlayerWifiData_GetDwcUserData(), r6 + 0x10, 0x40);
        _Z21NetOverlay_AssertWifiv();
        Net_StartWifi(a, (void *)Comm_OnReceive, (void *)func_02098e8c, r6, r5);
    }
    _ZN11CommManager12setErrorModeEj(o, c);
}
extern "C" void Comm_StartOv067Mode() {
    gCommManager->unk_74 = 1;
    _Z20NetOverlay_AssertAnyv();
    Net_Init(0x41444d45, 0x400083, 1, 0x4fe752, 2, (void *)NetHeap_Alloc, (void *)NetHeap_Free);
}
extern "C" s32 Comm_End() {
    s32 r5 = 1;
    if (gCommManager->unk_74 != 0) {
        u32 *r4 = gNetHeap;
        u32 r6 = func_020e86fc(r4, 0x8000);
        func_020e86fc(r4, r6 | 0x2000);
        _Z20NetOverlay_AssertAnyv();
        if (Net_Shutdown() == 0) {
            func_020b7870();
            r5 = 0;
        }
        func_020e86fc(r4, r6);
        CommManager *o = gCommManager;
        NetHeap_Free(_ZN11CommManager10getAuxBufBEv(o));
        _ZN11CommManager10setAuxBufBEj(o, 0);
        NetHeap_Free(_ZN11CommManager10getAuxBufAEv(o));
        _ZN11CommManager10setAuxBufAEj(o, 0);
        NetHeap_Free(_ZN11CommManager14getLoopbackBufEv(o));
        _ZN11CommManager14setLoopbackBufEPh(o, 0);
        NetHeap_Free(_ZN11CommManager10getHeldBufEv(o));
        _ZN11CommManager10setHeldBufEPh(o, 0);
        NetHeap_Free(_ZN11CommManager14getDeferredBufEv(o));
        _ZN11CommManager14setDeferredBufEPh(o, 0);
        NetHeap_Free(_ZN11CommManager15getSendQueueBufEv(o));
        _ZN11CommManager15setSendQueueBufEPh(o, 0);
        NetHeap_Free(_ZN11CommManager12getRecordBufEv(o));
        _ZN11CommManager12setRecordBufEPh(o, 0);
        NetHeap_Free(_ZN11CommManager10getRecvBufEii(o, 4, 0));
        _ZN11CommManager11setRecvBufsEPh(o, 0);
        NetHeap_Free(_ZN11CommManager10getSendBufEi(o, 4));
        _ZN11CommManager11setSendBufsEPh(o, 0);
        NetHeap_Free(o->unk_70);
        o->unk_70 = 0;
        NetHeap_Free(_ZN11CommManager13getSyncVarBufEv(o));
        _ZN11CommManager13setSyncVarBufEPh(o, 0);
        _ZN11CommManager5resetEv(o);
        o->unk_74 = 0;
    }
    return r5;
}
extern "C" void Comm_EndOv067Mode() {
    if (gCommManager->unk_74 != 0) {
        u32 *const r5 = gNetHeap;
        u32 r4 = func_020e86fc(r5, 0x8000);
        func_020e86fc(r5, r4 | 0x2000);
        _Z20NetOverlay_AssertAnyv();
        if (Net_Shutdown() == 0) {
            func_020b7870();
        }
        func_020e86fc(r5, r4);
        CommManager *o = gCommManager;
        _ZN11CommManager5resetEv(o);
        o->unk_74 = 0;
    }
}
extern "C" void Comm_DestroyHeap() {
    func_020ebc34();
    NetHeap_Destroy();
}
extern "C" void Comm_ProcessReceived(s32 x) {
    if (x == 0) {
        CommManager *o = gCommManager;
        if (_ZN11CommManager12isSlotActiveEi(o, o->unk_64)) {
            if (_ZN11CommManager7getModeEv(o)) {
                o = gCommManager;
                _ZN11CommManager12dispatchHeldEv(o);
                _ZN11CommManager16dispatchLoopbackEv(o);
                _ZN11CommManager15processReceivedEv(o);
            }
        }
    }
}
}

// ======== new_020733e4.cpp ========
namespace n5 {
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
void _Z20NetOverlay_AssertAnyv();
}
extern "C" {
void _Z21Comm_CountNoAckFramesP11CommManager(CommManager *self);
}
extern "C" {
extern u8 sCommAckPackets[4];
}
extern "C" {
BOOL _Z20Comm_AnyPeerTimedOutv(CommManager *self);
}
extern "C" {
BOOL Comm_QueueRecords(void *unused, u8 *buf, u32 n);
}
extern "C" {
BOOL func_02038178();
}
extern "C" {
BOOL Comm_HasSendCreditAll();
}
extern "C" {
void Comm_WriteAckHeaders();
}
extern "C" {
void func_02133ef8(void *, u32);
}
extern "C" {
s32 Comm_WriteSyncVars(u8 *dst, void *src, s32 n);
}
extern "C" {
u32 Comm_CollectRecordsFor(u8 *dst, u32 id);
}
extern "C" {
u32 Comm_AidToPeerIndex(s32 a);
}
extern "C" {
s32 Comm_WriteSyncReply(u32 a);
}
extern "C" {
s32 Comm_IsSyncFinished(u32 a);
}
extern "C" {
void Comm_EnterCritical();
}
extern "C" {
void Comm_LeaveCritical();
}
extern "C" {
void NetSession_SetSyncState(s32 a, s32 b);
}
extern "C" {
s32 NetArea_GetMoveState();
}
extern "C" {
void NetArea_SetMoveState(s32 a);
}
extern "C" {
s32 CommPacket_GetAck(u8 *p);
}
extern "C" {
BOOL Comm_SendEmpty();
}
extern "C" {
BOOL Net_IsReadyToSend();
}
extern "C" {
void CommPacket_SetHeader(u8 *p, u32 a, u32 b);
}
extern "C" {
u32 Net_GetConnectedMask();
}
extern "C" {
BOOL Net_PollConnected();
}
extern "C" {
void Comm_Update(s32 a);
}

extern "C" void Comm_Update(s32 a) {
    CommManager *g = gCommManager;
    s32 self = g->unk_64;
    u32 mode;
    u32 saved;
    u8 *first;
    s32 flen;
    u8 *p3;
    BOOL ok;
    s32 i;
    u8 *bufs[3];
    u32 lens[3];
    u16 masks[3];
    u8 *bufs2[3];
    u32 lens2[3];
    u16 masks2[3];
    u32 lens3[3];
    u16 masks3[3];
    u8 *bufs3[3];

    if (!g->isSlotActive(self)) {
        return;
    }
    ok = g->isSendReady();
    if (ok) {
        s16 t = g->getSentSeq();
        if (t >= 0) {
            CommManager *o = gCommManager;
            o->setConfirmedSeq(t);
            o->clearSentSeq();
        }
    }
    if (ok) {
        if (g->getPendingMode() == 1) {
            CommManager *o = gCommManager;
            o->setMode(1);
            o->setPendingMode(3);
        }
    }
    mode = g->getMode();
    if (mode != 0) {
        u32 n = g->getRecordLen();
        if (n != 0) {
            CommManager *o = gCommManager;
            u32 fl = o->getErrorFlags();
            if (Comm_QueueRecords(o, o->getRecordBuf(), n)) {
                g->resetRecordBuf();
                if (fl & 2) {
                    if (!func_02038178()) {
                        g->setErrorFlags(fl ^ 2);
                    }
                }
            } else {
                if (!(fl & 2)) {
                    g->setErrorFlags(fl | 2);
                }
            }
        }
    }
    if (ok) {
        if (mode == 2) {
            if (Comm_HasSendCreditAll()) {
                saved = g->getDeferredLen();
                Comm_WriteAckHeaders();
                first = NULL;
                flen = 0;
                func_02133ef8(bufs, 12);
                func_02133ef8(lens, 12);
                func_02133ef8(masks, 6);
                for (i = 3; i >= 0; i--) {
                    if (g->isSlotActive(i)) {
                        if (!g->isMyAid(i)) {
                            u8 *p = g->getSendBuf(i);
                            u32 len = 0;
                            p++;
                            len++;
                            if (first == NULL) {
                                first = p;
                                flen = Comm_WriteSyncVars(p, NULL, 0);
                                p += flen;
                                len += flen;
                            } else {
                                Comm_WriteSyncVars(p, first, flen);
                                p += flen;
                                len += flen;
                            }
                            len += Comm_CollectRecordsFor(p, i);
                            u32 idx = Comm_AidToPeerIndex(i);
                            bufs[idx] = g->getSendBuf(i);
                            lens[idx] = len;
                            masks[idx] = 1 << i;
                        } else {
                            u32 c = g->getLoopbackLen();
                            u32 r = Comm_CollectRecordsFor(g->getLoopbackBuf() + c, i);
                            if (r != 0) {
                                c += r;
                                g->setLoopbackLen(c);
                            }
                        }
                    } else {
                        if (g->isMyAid(0)) {
                            s32 r = Comm_WriteSyncReply(i);
                            if (r != 0) {
                                s32 idx = i - 1;
                                bufs[idx] = g->getSendBuf(i);
                                lens[idx] = r;
                                masks[idx] = 1 << i;
                            }
                        }
                    }
                }
                BOOL sent = g->sendPackets(bufs[0], lens[0], masks[0], bufs[1], lens[1], masks[1], bufs[2], lens[2], masks[2]);
                if (sent || g->unk_6c <= 1) {
                    CommManager *o = gCommManager;
                    o->setSentSeq(o->getSendSeq());
                    o->clearSyncVarDirty();
                    o->resetSendQueueLen();
                    for (i = 3; i >= 0; i--) {
                        if (g->isSlotActive(i)) {
                            if (!g->isMyAid(i)) {
                                Comm_EnterCritical();
                                g->subSendCredit(i, 1);
                                Comm_LeaveCritical();
                                g->setAckCount(i, 0);
                            }
                        } else if (sent) {
                            if (g->isMyAid(0)) {
                                if (Comm_IsSyncFinished(i)) {
                                    NetSession_SetSyncState(i, 7);
                                }
                            }
                        }
                    }
                    if (NetArea_GetMoveState() == 7) {
                        NetArea_SetMoveState(8);
                    }
                } else {
                    g->setDeferredLen(saved);
                }
            } else {
                if (ok) {
                    Comm_WriteAckHeaders();
                    func_02133ef8(bufs2, 12);
                    func_02133ef8(lens2, 12);
                    func_02133ef8(masks2, 6);
                    s32 cnt = 0;
                    for (i = 3; i >= 0; i--) {
                        if (g->isSlotActive(i) && !g->isMyAid(i)) {
                            u8 *p = g->getSendBuf(i);
                            if (CommPacket_GetAck(p)) {
                                bufs2[cnt] = p;
                                lens2[cnt] = 1;
                                masks2[cnt] = 1 << i;
                                cnt++;
                            }
                        }
                    }
                    if (cnt != 0) {
                        if (g->sendPackets(bufs2[0], lens2[0], masks2[0], bufs2[1], lens2[1], masks2[1], bufs2[2], lens2[2], masks2[2]) || g->unk_6c <= 1) {
                            for (i = 3; i >= 0; i--) {
                                if (g->isSlotActive(i) && !g->isMyAid(i)) {
                                    g->setAckCount(i, 0);
                                }
                            }
                        }
                    } else {
                        if (g->isMyAid(0)) {
                            if (g->unk_6c != 4) {
                                Comm_SendEmpty();
                            }
                        }
                    }
                } else {
                    if (g->isMyAid(0)) {
                        if (g->unk_6c != 4) {
                            Comm_SendEmpty();
                        }
                    }
                }
            }
        } else if (mode == 1) {
            if (g->isOnline()) {
                _Z20NetOverlay_AssertAnyv();
                if (Net_IsReadyToSend()) {
                    func_02133ef8(lens3, 12);
                    func_02133ef8(masks3, 6);
                    func_02133ef8(bufs3, 12);
                    for (i = 3; i >= 0; i--) {
                        if (g->isSlotActive(i) && !g->isMyAid(i)) {
                            u32 v = g->getAckCount(i);
                            u32 idx = Comm_AidToPeerIndex(i);
                            if (v != 0) {
                                p3 = &sCommAckPackets[idx];
                                CommPacket_SetHeader(p3, v, 0x18);
                                bufs3[idx] = p3;
                                lens3[idx]++;
                                masks3[idx] = 1 << i;
                            }
                        }
                    }
                    if (g->sendPackets(bufs3[0], lens3[0], masks3[0], bufs3[1], lens3[1], masks3[1], bufs3[2], lens3[2], masks3[2])) {
                        for (i = 3; i >= 0; i--) {
                            if (g->isSlotActive(i) && !g->isMyAid(i)) {
                                g->setAckCount(i, 0);
                            }
                        }
                    }
                }
            }
        }
    }
    if (mode == 2) {
        Comm_EnterCritical();
        CommManager *o = gCommManager;
        _Z21Comm_CountNoAckFramesP11CommManager(o);
        Comm_LeaveCritical();
        Comm_EnterCritical();
        BOOL r = _Z20Comm_AnyPeerTimedOutv(o);
        Comm_LeaveCritical();
        u32 fl = o->getErrorFlags();
        if (r) {
            if (!(fl & 1)) {
                g->setErrorFlags(fl | 1);
            }
        } else {
            if (fl & 1) {
                if (!func_02038178()) {
                    g->setErrorFlags(fl ^ 1);
                }
            }
        }
        if (self == 0) {
            u16 m = 0;
            for (i = 3; i >= 0; i--) {
                if (g->isSlotActive(i) && !g->isMyAid(i)) {
                    m |= 1 << i;
                }
            }
            u32 x = Net_GetConnectedMask();
            if (m != (m & x)) {
                u32 f = g->getErrorFlags();
                if (!(f & 4)) {
                    g->setErrorFlags(f | 4);
                }
            }
        } else {
            _Z20NetOverlay_AssertAnyv();
            if (!Net_PollConnected()) {
                u32 f = g->getErrorFlags();
                if (!(f & 8)) {
                    g->setErrorFlags(f | 8);
                }
            }
        }
    }
    if (a == 0) {
        g->incSendSeq();
    }
}
}

// ======== unk_02072d5c.cpp ========
namespace n3 {
extern "C" {
void _Z20NetOverlay_AssertAnyv();
}
extern "C" {
u32 Comm_AidToPeerIndex(s32 a);
}
extern "C" {
void CommPacket_IsControl(u8 *p);
}
extern "C" {
void CommPacket_SetHeader(u8 *p, u32 a, u32 b);
}
extern "C" {
void Comm_IsWifi();
}
extern "C" {
s32 Comm_End();
}
extern "C" {
void NetSession_Reset();
}
extern "C" {
void NetSession_OnBeginHost();
}
extern "C" {
void NetSession_GetSyncState(s32 a);
}
extern "C" {
void NetSession_SetSyncState(s32 a, s32 b);
}
extern "C" {
void func_020a63bc(u32 a, s32 b, u32 c, u32 d, u32 e);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
u32 Net_GetMemberCount();
}
extern "C" {
BOOL Net_IsReadyToSend();
}
extern "C" {
BOOL Net_GetMyAid();
}
extern "C" {
u32 Net_GetConnectedMask();
}
extern "C" {
BOOL Net_PollConnected();
}
extern "C" {
BOOL Net_SendPackets3(u8 *a, u32 b, u32 c, u32 d, u8 *e, u32 f, u16 g, u32 h, u8 *i, u32 j, u16 k, u32 l);
}
extern "C" {
void Net_SetRecvBuffer(u16 a, u8 *p, u32 sz);
}
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
BOOL Comm_IsConnectionLost(s32 a);
}
extern "C" {
void Comm_SetLostFlag();
}
extern "C" {
s32 Comm_Shutdown();
}
extern "C" {
u32 Comm_GetMemberMask();
}
extern "C" {
u32 Comm_GetRemoteMask();
}
extern "C" {
void Comm_ClearSyncState();
}
extern "C" {
void Comm_GetSyncState();
}
extern "C" {
BOOL Comm_RequestSync(u8 a);
}
extern "C" {
void Comm_SetRecvBuffers(u32 a);
}
extern "C" {
void func_02073340();
}
extern "C" {
void Comm_PrepareJoin(u32 a);
}
extern "C" {
void Comm_BeginHostSession();
}
extern "C" {
void Comm_SetRecvBuffersAsHost();
}
extern "C" {
BOOL Comm_SendEmpty();
}

extern "C" BOOL Comm_SendEmpty() { return gCommManager->sendPackets(0, 0, 0, 0, 0, 0, 0, 0, 0); }
extern "C" void Comm_SetRecvBuffersAsHost() { Comm_SetRecvBuffers(0); }
extern "C" void Comm_BeginHostSession() {
    CommManager *o = gCommManager;
    o->setMode(2);
    o->unk_64 = 0;
    o->setSlotActive(o->unk_64, 1);
    Comm_SetRecvBuffers(0);
    NetSession_OnBeginHost();
    func_020a63bc(0, func_020b50e8(), 1, 0, 7);
}
extern "C" void Comm_PrepareJoin(u32 a) {
    gCommManager->setMode(0);
    Comm_SetRecvBuffers(a);
}
extern "C" void func_02073340() { NetSession_Reset(); }
extern "C" void Comm_SetRecvBuffers(u32 a) {
    s32 i = 3;
    CommManager *g = gCommManager;
    for (; i >= 0; i--) {
        if (i < a) {
            u8 *p = g->getRecvBufByPeer(i, 0);
            _Z20NetOverlay_AssertAnyv();
            Net_SetRecvBuffer(i, p, 0x1000);
        } else if (i > a) {
            u8 *p = g->getRecvBufByPeer(i - 1, 0);
            _Z20NetOverlay_AssertAnyv();
            Net_SetRecvBuffer(i, p, 0x1000);
        }
    }
}
extern "C" BOOL Comm_RequestSync(u8 a) {
    u8 tmp;
    CommManager *o = gCommManager;
    s32 idx = o->unk_64;
    if (!o->isSlotActive(idx)) {
        NetSession_SetSyncState(3, 4);
        o = gCommManager;
        u8 *p = o->getSendBuf(4);
        CommPacket_SetHeader(p, 0, 5);
        p[1] = 0;
        return o->sendPackets(o->getSendBuf(4), 2, 1, 0, 0, 0, 0, 0, 0);
    }
    if (o->isMyAid(0)) {
        NetSession_SetSyncState(idx, a);
    } else {
        NetSession_SetSyncState(idx, 4);
        tmp = a;
        o = gCommManager;
        o->beginRecord();
        o->writeRecord(&tmp, 1);
        o->endRecord(0, 0);
    }
    return TRUE;
}
extern "C" void Comm_GetSyncState() {
    s32 a = gCommManager->unk_64;
    if (!gCommManager->isSlotActive(a)) {
        NetSession_GetSyncState(3);
    } else {
        NetSession_GetSyncState(a);
    }
}
extern "C" void Comm_ClearSyncState() {
    s32 a = gCommManager->unk_64;
    if (!gCommManager->isSlotActive(a)) {
        NetSession_SetSyncState(3, 7);
    } else {
        NetSession_SetSyncState(a, 7);
    }
}
extern "C" u32 Comm_GetRemoteMask() {
    u32 r = 0;
    s32 i = 3;
    CommManager *o = gCommManager;
    for (; i >= 0; i--) {
        if (o->isSlotActive(i) && !o->isMyAid(i)) {
            r |= (u8)(1 << i);
        }
    }
    return r;
}
extern "C" u32 Comm_GetMemberMask() {
    u32 r = Comm_GetRemoteMask();
    CommManager *o = gCommManager;
    s32 i = o->unk_64;
    if (i < 4) {
        r |= (u16)(1 << i);
    }
    return r;
}
extern "C" s32 Comm_Shutdown() {
    func_02073340();
    return Comm_End();
}
extern "C" void Comm_SetLostFlag() {
    CommManager *o = gCommManager;
    u32 v = o->getErrorFlags();
    if ((v & 0x40) == 0) {
        o->setErrorFlags(v | 0x40);
    }
}
extern "C" BOOL Comm_IsConnectionLost(s32 a) {
    CommManager *o = gCommManager;
    u32 n = o->getSendRetryLimit();
    if (n != 0) {
        if (o->isSendReady()) {
            o = gCommManager;
            o->setSendRetry(0);
            o->setSendRetryLimit(0);
        } else {
            u32 c = o->getSendRetry();
            if (c >= n) {
                return TRUE;
            }
            o->setSendRetry((u16)(c + 1));
        }
    }
    if (a >= 0) {
        u16 h = a;
        if (Net_GetMyAid()) {
            if (a <= 0) {
                goto zero;
            }
            _Z20NetOverlay_AssertAnyv();
            if (Net_PollConnected()) {
                goto zero;
            }
            return TRUE;
        }
        u32 m = Net_GetConnectedMask();
        if (h == (h & m)) {
            goto zero;
        }
        return TRUE;
    }
    if (Net_GetConnectedMask() != 0) {
        goto zero;
    }
    return TRUE;
zero:
    return FALSE;
}
}
CommManager::CommManager() {
    using namespace n3; init(); }
namespace n3 {
}
CommManager::~CommManager() {
    using namespace n3;}
namespace n3 {
}
void CommManager::init() {
    using namespace n3;
    initLocal();
    reset();
}
namespace n3 {
}
void CommManager::initLocal() {
    using namespace n3;
    unk_68 = 4;
    clearMemberCount();
    setLatchedErrorFlags(0);
    setErrorFlags(0);
}
namespace n3 {
}
void CommManager::reset() {
    using namespace n3;
    clearSlotsActive();
    setMode(0);
    setPendingMode(3);
    resetSendCredits();
    clearAckCounts();
    clearRecvRings();
    unk_64 = 4;
    clearSyncVarDirty();
    resetRecordBuf();
    resetSendQueueLen();
    clearDeferredLen();
    clearHeldLen();
    clearLoopbackLen();
    clearAuxLenA();
    clearAuxLenB();
    clearSentSeq();
    clearConfirmedSeq();
    clearNoAckFrames();
    setSendRetry(0);
    setSendRetryLimit(0);
    setErrorMode(0);
}
namespace n3 {
}
BOOL CommManager::sendPackets(u8 *a1, u32 a2, u32 a3, u8 *s4, u32 s5, u16 s6, u8 *s7, u32 s8, u16 s9) {
    using namespace n3;
    _Z20NetOverlay_AssertAnyv();
    if (Net_SendPackets3(a1, a2, a3, 0, s4, s5, s6, 0, s7, s8, s9, 0)) {
        if (getMode() != 2) {
            if ((a1 != NULL || s4 != NULL || s7 != NULL) && (a2 != 0 || s5 != 0 || s8 != 0)) {
                if (a1 != NULL && a2 != 0) {
                    CommPacket_IsControl(a1);
                }
                if (s4 != NULL && s5 != 0) {
                    CommPacket_IsControl(s4);
                }
                if (s7 != NULL && s8 != 0) {
                    CommPacket_IsControl(s7);
                }
                setSendRetry(0);
                Comm_IsWifi();
                setSendRetryLimit(0x258);
            }
        } else {
            setSendRetry(0);
            setSendRetryLimit(0);
        }
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
BOOL CommManager::isSendReady() {
    using namespace n3;
    s32 n = unk_64;
    if (isSlotActive(n)) {
        if (n == 0) {
            if (Net_GetMemberCount() > 1) {
                _Z20NetOverlay_AssertAnyv();
                if (Net_IsReadyToSend()) {
                    return TRUE;
                }
                return FALSE;
            }
        } else {
            _Z20NetOverlay_AssertAnyv();
            if (Net_IsReadyToSend()) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return TRUE;
}
namespace n3 {
}
void CommManager::setSlotActive(s32 i, u32 v) {
    using namespace n3; unk_00[i] = v; }
namespace n3 {
}
u32 CommManager::isSlotActive(s32 i) {
    using namespace n3;
    if (i < 4) {
        return unk_00[i];
    }
    return 0;
}
namespace n3 {
}
void CommManager::clearSlotsActive() {
    using namespace n3;
    for (s32 i = 3; i >= 0; i--) {
        setSlotActive(i, 0);
    }
}
namespace n3 {
}
BOOL CommManager::isOnline() {
    using namespace n3;
    if (isSlotActive(unk_64) && unk_6c >= 2) {
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
s16 CommManager::getSendSeq() {
    using namespace n3; return (s16)(unk_04 & 0x7fff); }
namespace n3 {
}
void CommManager::incSendSeq() {
    using namespace n3; unk_04 = unk_04 + 1; }
namespace n3 {
}
void CommManager::setMode(u32 v) {
    using namespace n3; unk_06 = v; }
namespace n3 {
}
u8 CommManager::getMode() {
    using namespace n3; return unk_06; }
namespace n3 {
}
void CommManager::setPendingMode(u32 v) {
    using namespace n3; unk_07 = v; }
namespace n3 {
}
u8 CommManager::getPendingMode() {
    using namespace n3; return unk_07; }
namespace n3 {
}
void CommManager::setSendBufs(u8 *p) {
    using namespace n3; unk_08 = p; }
namespace n3 {
}
u8 *CommManager::getSendBuf(s32 i) {
    using namespace n3;
    if (i >= 4) {
        return unk_08;
    }
    if (isMyAid(i)) {
        return NULL;
    }
    if (i < unk_64) {
        return unk_08 + (i << 12);
    }
    return unk_08 + ((i - 1) << 12);
}
namespace n3 {
}
u32 CommManager::getSendCredit(s32 a) {
    using namespace n3; return unk_0c[Comm_AidToPeerIndex(a)]; }
namespace n3 {
}
void CommManager::addSendCredit(s32 a, u32 b) {
    using namespace n3; unk_0c[Comm_AidToPeerIndex(a)] += b; }
namespace n3 {
}
void CommManager::subSendCredit(s32 a, u32 b) {
    using namespace n3; unk_0c[Comm_AidToPeerIndex(a)] -= b; }
namespace n3 {
}
void CommManager::resetSendCredit(s32 a) {
    using namespace n3; unk_0c[Comm_AidToPeerIndex(a)] = 3; }
namespace n3 {
}
void CommManager::resetSendCredits() {
    using namespace n3;
    u32 *p = unk_0c;
    for (s32 i = 2; i >= 0; i--) {
        *p++ = 3;
    }
}
namespace n3 {
}

// ======== unk_02072408.cpp ========
namespace n2 {
extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}
extern "C" {
BOOL _ZN11CommManager8isOnlineEv(void *g);
}
extern "C" {
BOOL _ZN11CommManager12isSlotActiveEi(void *g, u32 i);
}
extern "C" {
s32 CommRecv_Dispatch(u32 x, u32 p, u32 len, u32 b, u32 c, u32 d);
}
extern "C" {
u32 CommRecord_GetLength(u8 *p);
}
extern "C" {
void CommRecord_UnpackSource(u8 *src, u8 *a, u8 *b);
}
extern "C" {
void CommRecord_SetLength(void *out, u16 v);
}
extern "C" {
void CommRecord_PackSource(void *out, u32 a, u32 b);
}
extern "C" {
u32 CommSyncVar_GetVarOffset(u32 a);
}
extern "C" {
u32 CommSyncVar_GetVarSize();
}
extern "C" {
u32 Comm_AidToPeerIndex(s32 a);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
s32 NetArea_FindOwner(u32 a);
}
extern "C" {
BOOL NetArea_IsSlotMoving(u32 a);
}
extern "C" {
BOOL NetArea_IsLocalOwner();
}
extern "C" {
void NetArea_IsUnsharedScene(s32 a);
}
extern "C" {
void Comm_EnterCritical();
}
extern "C" {
void Comm_LeaveCritical();
}
extern "C" {
extern CommManager *gCommManager;
}

}
u32 CommManager::getAckCount(s32 a) {
    using namespace n2; return unk_18[Comm_AidToPeerIndex(a)]; }
namespace n2 {
}
void CommManager::setAckCount(s32 a, u32 v) {
    using namespace n2; unk_18[Comm_AidToPeerIndex(a)] = v; }
namespace n2 {
}
void CommManager::incAckCount(s32 a) {
    using namespace n2; unk_18[Comm_AidToPeerIndex(a)] += 1; }
namespace n2 {
}
void CommManager::clearAckCounts() {
    using namespace n2;
    s32 i;
    u32 *p = unk_18;
    for (i = 2; i >= 0; i--) *p++ = 0;
}
namespace n2 {
}
u8 *CommManager::getRecvBuf(s32 a, s32 b) {
    using namespace n2;
    if (a >= 4) return unk_24;
    if (isMyAid(a)) return 0;
    if (a < unk_64) {
        return unk_24 + ((b + a * 3) << 12);
    }
    return unk_24 + ((b + (a - 1) * 3) << 12);
}
namespace n2 {
}
u8 *CommManager::getRecvBufByPeer(s32 a, s32 b) {
    using namespace n2;
    return unk_24 + ((b + a * 3) << 12);
}
namespace n2 {
}
void CommManager::setRecvBufs(u8 *v) {
    using namespace n2; unk_24 = v; }
namespace n2 {
}
u32 CommManager::getRecvLen(s32 a, u32 b) {
    using namespace n2;
    return unk_28[Comm_AidToPeerIndex(a)].v[b];
}
namespace n2 {
}
void CommManager::setRecvLen(s32 a, u32 b, u32 c) {
    using namespace n2;
    unk_28[Comm_AidToPeerIndex(a)].v[b] = c;
}
namespace n2 {
}
void CommManager::clearRecvLen(s32 a, u32 b) {
    using namespace n2; setRecvLen(a, b, 0); }
namespace n2 {
}
void CommManager::clearRecvRings() {
    using namespace n2;
    u32 *p = (u32 *)&unk_28[0];
    s32 i;
    for (i = 4; i >= 0; i--) {
        *p++ = 0;
    }
    clearRecvRingIndices();
}
namespace n2 {
}
void CommManager::processReceived() {
    using namespace n2;
    s32 outer;
    u32 i;
    u32 x;
    u32 lim;
    s32 cc;
    u32 k;
    u32 bb;
    u32 dbg;
    u32 len;
    CommManager *g;
    u32 rem;
    u32 n;
    u32 t;
    u8 *p;
    u16 j;
    u8 c;
    u8 a, b;
    u8 buf[5];
    outer = 2;
    g = gCommManager;
    do {
        for (i = 0; i < 4; i++) {
            if (isMyAid(i)) continue;
            x = getRecvReadSlot(i);
            if (x >= 3) continue;
            lim = getRecvLen(i, x) - 1;
            p = getRecvBuf(i, x) + 1;
            j = 0;
            do {
                MI_CpuCopy8(p, &c, 1);
                p++;
                j = (u16)(j + 1);
                cc = c;
                if (cc >= 0x46) break;
                n = CommSyncVar_GetVarSize();
                MI_CpuCopy8(p, getSyncVar(cc), n);
                p += n;
                j = (u16)(j + n);
            } while (j < lim);
            k = 0;
            rem = (u16)(lim - j);
            while (k < rem) {
                MI_CpuCopy8(p, buf, 5);
                p += 5;
                k += 5;
                t = buf[3];
                CommRecord_UnpackSource(&buf[4], &a, &b);
                bb = b;
                dbg = func_020b50e8();
                len = CommRecord_GetLength(buf);
                if (NetArea_IsSlotMoving(unk_64) && t == 7 && a != dbg) {
                    t = getHeldLen();
                    u8 *dd = getHeldBuf() + t;
                    MI_CpuCopy8(p - 5, dd, len + 5);
                    u32 nf = t; nf += len + 5; setHeldLen(nf);
                } else {
                    if (NetArea_IsLocalOwner() == 0 && t == 6) {
                    } else if (t == 6 && a != dbg) {
                    } else if (t == 7 && a != dbg) {
                    } else {
                        CommRecv_Dispatch(buf[2], (u32)p, len, t, a, bb);
                    }
                }
                p += len;
                k += len;
            }
            Comm_EnterCritical();
            g->clearRecvLen(i, x);
            g->popRecvSlot(i);
            g->incAckCount(i);
            Comm_LeaveCritical();
        }
        outer--;
    } while (outer >= 0);
}
namespace n2 {
}
void CommManager::clearRecvRingIndices() {
    using namespace n2;
    u32 *p = unk_28t.a4c;
    u32 *q = unk_28t.a58;
    s32 i;
    for (i = 2; i >= 0; i--) {
        *p++ = 0;
        *q++ = 0;
    }
}
namespace n2 {
}
void CommManager::pushRecvSlot(s32 a) {
    using namespace n2;
    u32 i = Comm_AidToPeerIndex(a);
    unk_28t.a58[i] += 1;
}
namespace n2 {
}
void CommManager::popRecvSlot(s32 a) {
    using namespace n2;
    u32 i = Comm_AidToPeerIndex(a);
    unk_28t.a58[i] -= 1;
    u32 t = unk_28t.a4c[i] + 1;
    if (t >= 3) t = 0;
    unk_28t.a4c[i] = t;
}
namespace n2 {
}
u32 CommManager::getRecvReadSlot(s32 a) {
    using namespace n2;
    u32 i = Comm_AidToPeerIndex(a);
    if (unk_28t.a58[i] == 0) return 3;
    return unk_28t.a4c[i];
}
namespace n2 {
}
u32 CommManager::getRecvWriteSlot(s32 a) {
    using namespace n2;
    u32 i = Comm_AidToPeerIndex(a);
    u32 c = unk_28t.a58[i];
    if (c >= 3) {
        return unk_28t.a4c[i];
    }
    u32 r = c + unk_28t.a4c[i];
    if (r >= 3) r -= 3;
    return r;
}
namespace n2 {
}
BOOL CommManager::isMyAid(u32 v) {
    using namespace n2;
    if (v == unk_64) return TRUE;
    return FALSE;
}
namespace n2 {
}
BOOL CommManager::isLocalSlot(u32 v) {
    using namespace n2;
    if (v == unk_68) return TRUE;
    return FALSE;
}
namespace n2 {
}
void CommManager::setMemberCount(u32 v) {
    using namespace n2;
    if (v > 4) {
        unk_6c = 0;
        return;
    }
    unk_6c = v;
}
namespace n2 {
}
void CommManager::clearMemberCount() {
    using namespace n2; setMemberCount(0); }
namespace n2 {
}
u8 *CommManager::getSyncVarBuf() {
    using namespace n2; return unk_78; }
namespace n2 {
}
void CommManager::setSyncVarBuf(u8 *v) {
    using namespace n2; unk_78 = v; }
namespace n2 {
}
u8 *CommManager::getSyncVar(u32 i) {
    using namespace n2;
    u8 *p = getSyncVarBuf();
    if (p == 0) return 0;
    return p + CommSyncVar_GetVarOffset(i);
}
namespace n2 {
}
u32 CommManager::isSyncVarDirty(s32 i) {
    using namespace n2; return unk_7c[i]; }
namespace n2 {
}
void CommManager::setSyncVarDirty(s32 i, u32 v) {
    using namespace n2; unk_7c[i] = v; }
namespace n2 {
}
void CommManager::clearSyncVarDirty() {
    using namespace n2;
    s32 i;
    for (i = 0x45; i >= 0; i--) {
        setSyncVarDirty(i, 0);
    }
}
namespace n2 {
}
u8 *CommManager::getRecordBuf() {
    using namespace n2; return unk_c4; }
namespace n2 {
}
void CommManager::setRecordBuf(u8 *v) {
    using namespace n2;
    unk_c4 = v;
    unk_cc = v;
}
namespace n2 {
}
void CommManager::resetRecordBuf() {
    using namespace n2;
    setRecordLen(0);
    unk_cc = getRecordBuf();
}
namespace n2 {
}
void CommManager::setRecordLen(u32 v) {
    using namespace n2; unk_c8 = v; }
namespace n2 {
}
u32 CommManager::getRecordLen() {
    using namespace n2; return unk_c8; }
namespace n2 {
}
void CommManager::beginRecord() {
    using namespace n2;
    if (_ZN11CommManager8isOnlineEv(this)) {
        unk_d0 = unk_cc;
        unk_d4 = unk_cc + 5;
    }
}
namespace n2 {
}
void CommManager::writeRecord(u8 *p, u32 n) {
    using namespace n2;
    if (_ZN11CommManager8isOnlineEv(this)) {
        MI_CpuCopy8(p, unk_d4, n);
        unk_d4 += n;
    }
}
namespace n2 {
}
void CommManager::endRecord(u32 a, u32 b) {
    using namespace n2;
    u8 buf[8];
    if (_ZN11CommManager8isOnlineEv(this)) {
        if (b - 6 <= 1) {
            NetArea_IsUnsharedScene(func_020b50e8());
        }
        u32 len = unk_d4 - unk_d0;
        CommRecord_SetLength(buf, (u16)(len - 5));
        buf[2] = a;
        buf[3] = b;
        CommRecord_PackSource(buf + 4, func_020b50e8(), (u8)unk_64);
        MI_CpuCopy8(buf, unk_d0, 5);
        unk_c8 += len;
        unk_cc = unk_d4;
    }
}
namespace n2 {
}
u8 *CommManager::getSendQueueBuf() {
    using namespace n2; return unk_d8; }
namespace n2 {
}
void CommManager::setSendQueueBuf(u8 *v) {
    using namespace n2; unk_d8 = v; }
namespace n2 {
}
void CommManager::resetSendQueueLen() {
    using namespace n2; setSendQueueLen(0); }
namespace n2 {
}
void CommManager::setSendQueueLen(u32 v) {
    using namespace n2; unk_dc = v; }
namespace n2 {
}
u32 CommManager::getSendQueueLen() {
    using namespace n2; return unk_dc; }
namespace n2 {
extern "C" BOOL Comm_QueueRecords(void *unused, u8 *buf, u32 n) {
    u32 o = gCommManager->getSendQueueLen();
    if (0x92e - o >= n) {
        CommManager *g = gCommManager;
        MI_CpuCopy8(buf, g->getSendQueueBuf() + o, n);
        g->setSendQueueLen(o + n);
        return TRUE;
    }
    return FALSE;
}
}
void CommManager::setReadPtr(u8 *v) {
    using namespace n2; unk_e0 = v; }
namespace n2 {
}
u8 *CommManager::getReadPtr() {
    using namespace n2; return unk_e0; }
namespace n2 {
}
void CommManager::readRecord(u8 *src, u32 n) {
    using namespace n2;
    u8 *d = getReadPtr();
    MI_CpuCopy8(d, src, n);
    setReadPtr(d + n);
}
namespace n2 {
}
u8 *CommManager::getDeferredBuf() {
    using namespace n2; return unk_e4; }
namespace n2 {
}
void CommManager::setDeferredBuf(u8 *v) {
    using namespace n2; unk_e4 = v; }
namespace n2 {
}
void CommManager::clearDeferredLen() {
    using namespace n2; setDeferredLen(0); }
namespace n2 {
}
void CommManager::setDeferredLen(u32 v) {
    using namespace n2; unk_e8 = v; }
namespace n2 {
}
u32 CommManager::getDeferredLen() {
    using namespace n2; return unk_e8; }
namespace n2 {
}
void CommManager::flushDeferred() {
    using namespace n2;
    Unk_0207264c_Loc l;
    s32 v6 = unk_64;
    if (_ZN11CommManager12isSlotActiveEi(this, v6)) {
        u32 total = getDeferredLen();
        if (total != 0) {
            u8 *p = getDeferredBuf();
            MI_CpuCopy8(p, l.buf, 5);
            CommRecord_UnpackSource(&l.buf[4], &l.a, &l.b);
            s32 v = NetArea_FindOwner(l.a);
            if (v >= 4) return;
            if (v == v6) {
                u32 c6 = getLoopbackLen();
                u8 *dst = getLoopbackBuf() + c6;
                u32 cnt = 0;
                u32 len;
                while (cnt < total) {
                    MI_CpuCopy8(p, l.buf3, 5);
                    len = CommRecord_GetLength(l.buf3);
                    MI_CpuCopy8(p, dst, len + 5);
                    dst += len + 5;
                    c6 += len + 5;
                    p += len + 5;
                    cnt += len + 5;
                }
                setLoopbackLen(c6);
            } else {
                u32 c6 = 0;
                while (c6 < total) {
                    MI_CpuCopy8(p, l.buf2, 5);
                    p += 5;
                    c6 += 5;
                    u32 len = CommRecord_GetLength(l.buf2);
                    beginRecord();
                    writeRecord(p, len);
                    endRecord(l.buf2[2], l.buf2[3]);
                    p += len;
                    c6 += len;
                }
            }
            clearDeferredLen();
        }
    }
}
namespace n2 {
}
u8 *CommManager::getHeldBuf() {
    using namespace n2; return unk_ec; }
namespace n2 {
}
void CommManager::setHeldBuf(u8 *v) {
    using namespace n2; unk_ec = v; }
namespace n2 {
}
void CommManager::clearHeldLen() {
    using namespace n2; setHeldLen(0); }
namespace n2 {
}
void CommManager::setHeldLen(u32 v) {
    using namespace n2; unk_f0 = v; }
namespace n2 {
}
u32 CommManager::getHeldLen() {
    using namespace n2; return unk_f0; }
namespace n2 {
}
void CommManager::dispatchHeld() {
    using namespace n2;
    Unk_020724e0_Loc l;
    u32 size = getHeldLen();
    if (size != 0) {
        u8 *p = getHeldBuf();
        MI_CpuCopy8(p, l.buf, 5);
        CommRecord_UnpackSource(&l.buf[4], &l.a, &l.b);
        if (l.a == func_020b50e8()) {
            u32 pos = 0;
            while (pos < size) {
                MI_CpuCopy8(p, l.buf, 5);
                p += 5;
                pos += 5;
                CommRecord_UnpackSource(&l.buf[4], &l.a, &l.b);
                u32 t = l.b;
                u32 len = CommRecord_GetLength(l.buf);
                CommRecv_Dispatch(l.buf[2], (u32)p, len, l.buf[3], l.a, t);
                p += len;
                pos += len;
            }
            clearHeldLen();
        }
    }
}
namespace n2 {
}
u8 *CommManager::getLoopbackBuf() {
    using namespace n2; return unk_f4; }
namespace n2 {
}
void CommManager::setLoopbackBuf(u8 *v) {
    using namespace n2; unk_f4 = v; }
namespace n2 {
}
void CommManager::clearLoopbackLen() {
    using namespace n2; setLoopbackLen(0); }
namespace n2 {
}
void CommManager::setLoopbackLen(u32 v) {
    using namespace n2; unk_f8 = v; }
namespace n2 {
}
u32 CommManager::getLoopbackLen() {
    using namespace n2; return unk_f8; }
namespace n2 {
}
void CommManager::dispatchLoopback() {
    using namespace n2;
    Unk_020724e0_Loc l;
    u32 size = getLoopbackLen();
    if (size != 0) {
        u32 pos = 0;
        u8 *p = getLoopbackBuf();
        while (pos < size) {
            MI_CpuCopy8(p, l.buf, 5);
            p += 5;
            pos += 5;
            CommRecord_UnpackSource(&l.buf[4], &l.a, &l.b);
            u32 t = l.b;
            u32 len = CommRecord_GetLength(l.buf);
            CommRecv_Dispatch(l.buf[2], (u32)p, len, l.buf[3], l.a, t);
            p += len;
            pos += len;
        }
        clearLoopbackLen();
    }
}
namespace n2 {
}
u32 CommManager::getAuxBufA() {
    using namespace n2; return unk_fc; }
namespace n2 {
}
void CommManager::setAuxBufA(u32 v) {
    using namespace n2; unk_fc = v; }
namespace n2 {
}
void CommManager::clearAuxLenA() {
    using namespace n2; setAuxLenA(0); }
namespace n2 {
}
void CommManager::setAuxLenA(u32 v) {
    using namespace n2; unk_100 = v; }
namespace n2 {
}
u32 CommManager::getAuxLenA() {
    using namespace n2; return unk_100; }
namespace n2 {
}
void CommManager::appendAuxB(u8 *src, u32 n) {
    using namespace n2;
    MI_CpuCopy8(src, unk_104, n);
    unk_104 += n;
}
namespace n2 {
}
u32 CommManager::getAuxBufB() {
    using namespace n2; return unk_108; }
namespace n2 {
}
void CommManager::setAuxBufB(u32 v) {
    using namespace n2; unk_108 = v; }
namespace n2 {
}
void CommManager::clearAuxLenB() {
    using namespace n2; setAuxLenB(0); }
namespace n2 {
}
void CommManager::setAuxLenB(u32 v) {
    using namespace n2; unk_10c = v; }
namespace n2 {
}
u32 CommManager::getAuxLenB() {
    using namespace n2; return unk_10c; }
namespace n2 {
}
void CommManager::setSentSeq(s16 v) {
    using namespace n2; unk_114 = v; }
namespace n2 {
}
void CommManager::setConfirmedSeq(s16 v) {
    using namespace n2; unk_116 = v; }
namespace n2 {
}
s16 CommManager::getSentSeq() {
    using namespace n2; return unk_114; }
namespace n2 {
}
s16 CommManager::getConfirmedSeq() {
    using namespace n2; return unk_116; }
namespace n2 {
}
void CommManager::clearSentSeq() {
    using namespace n2; unk_114 = -1; }
namespace n2 {
}
void CommManager::clearConfirmedSeq() {
    using namespace n2; unk_116 = -1; }
namespace n2 {
}

// ======== unk_02071ae0.cpp ========
namespace n1 {
extern "C" {
extern u32 OVERLAY_65_ID[];
}
extern "C" {
extern u32 OVERLAY_66_ID[];
}
extern "C" {
extern u32 OVERLAY_67_ID[];
}
extern "C" {
extern u16 data_020cb6f4;
}
extern "C" {
extern u16 data_020d03cc;
}
extern "C" {
extern CommManager *gCommManager;
}
extern "C" {
extern Unk_020720f8_Data gOverlayHandle;
}
extern "C" {
void *Mem_Alloc(u32 n);
}
extern "C" {
void Mem_Free(void *p);
}
extern "C" {
void func_020712dc(void *p);
}
extern "C" {
void func_0207131c(void *p);
}
extern "C" {
BOOL func_020712a0(void *t, void *buf, s16 i);
}
extern "C" {
BOOL func_020712e0(void *t, void *buf, s16 i);
}
extern "C" {
void func_020712c4(void *t);
}
extern "C" {
void func_02071304(void *t);
}
extern "C" {
void *func_02071320(void);
}
extern "C" {
void func_02071328(void *t, Unk_02071ed0 *s, s32 id);
}
extern "C" {
Unk_020942c8 *func_0209409c(Unk_020942c8 *p);
}
extern "C" {
void func_02063950(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN8PlayerId13func_02094128Et(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN6TownId13func_02094094EPS_(Unk_020942c8 *a, Unk_020942c8 *b);
}
extern "C" {
s32 memcmp(void *a, void *b, u32 n);
}
extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}
extern "C" {
s32 Comm_AidToPeerIndex(s32 i);
}
extern "C" {
s32 Comm_IsWifi();
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
void *func_020716cc();
}
extern "C" {
void _ZN12Unk_020718a413func_020716d4Ei(void *p, u32 v);
}
extern "C" {
s32 Fatal_Trap();
}
extern "C" {
void _ZN13EncodedString13fromMsgStringEP9MsgString(EncodedString16Buf *o, void *x);
}
extern "C" {
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *dst, EncodedString16Buf *o, u32 a, u32 b);
}

}
void CommManager::setControlLen(u32 v) {
    using namespace n1; unk_118 = v; }
namespace n1 {
}
u32 CommManager::getControlLen() {
    using namespace n1; return unk_118; }
namespace n1 {
}
void CommManager::clearControlLen() {
    using namespace n1; unk_118 = 0; }
namespace n1 {
}
void CommManager::appendControl(void *src, u32 n) {
    using namespace n1;
    u8 *d = getSendBuf(4);
    d = d + unk_118;
    MI_CpuCopy8(src, d, n);
    unk_118 += n;
}
namespace n1 {
}
void CommManager::setLatchedErrorFlags(u32 v) {
    using namespace n1; unk_11c = v; }
namespace n1 {
}
u32 CommManager::getLatchedErrorFlags() {
    using namespace n1; return unk_11c; }
namespace n1 {
}
void CommManager::setErrorFlags(u32 v) {
    using namespace n1; unk_120 = v; }
namespace n1 {
}
u32 CommManager::getErrorFlags() {
    using namespace n1; return unk_120; }
namespace n1 {
}
void CommManager::setErrorMode(u32 v) {
    using namespace n1; unk_124 = v; }
namespace n1 {
}
u32 CommManager::getErrorMode() {
    using namespace n1; return unk_124; }
namespace n1 {
}
void Comm_CountNoAckFrames(CommManager *self) {
    using namespace n1;
    s32 i;
    CommManager *g;
    i = 3;
    g = gCommManager;
    for (; i >= 0; i--) {
        if (g->isSlotActive(i) && !g->isMyAid(i)) {
            s32 idx = Comm_AidToPeerIndex(i);
            u32 v = g->getNoAckFrames(i);
            Comm_IsWifi();
            if (v <= 0x258) self->unk_128[idx]++;
        }
    }
}
namespace n1 {
}
u32 CommManager::getNoAckFrames(s32 i) {
    using namespace n1;
    return unk_128[Comm_AidToPeerIndex(i)];
}
namespace n1 {
}
BOOL Comm_AnyPeerTimedOut() {
    using namespace n1;
    s32 i;
    CommManager *g;
    i = 3;
    g = gCommManager;
    for (; i >= 0; i--) {
        if (g->isSlotActive(i) && !g->isMyAid(i)) {
            Comm_AidToPeerIndex(i);
            u32 v = g->getNoAckFrames(i);
            Comm_IsWifi();
            if (v > 0x258) return TRUE;
        }
    }
    return FALSE;
}
namespace n1 {
}
void CommManager::resetNoAckFrames(s32 i) {
    using namespace n1;
    unk_128[Comm_AidToPeerIndex(i)] = 0;
}
namespace n1 {
}
void CommManager::clearNoAckFrames() {
    using namespace n1;
    u16 *p = unk_128;
    for (s32 i = 2; i >= 0; i--) *p++ = 0;
}
namespace n1 {
}
void CommManager::setSendRetry(u32 v) {
    using namespace n1; unk_12e = v; }
namespace n1 {
}
u32 CommManager::getSendRetry() {
    using namespace n1; return unk_12e; }
namespace n1 {
}
void CommManager::setSendRetryLimit(u32 v) {
    using namespace n1; unk_130 = v; }
namespace n1 {
}
u32 CommManager::getSendRetryLimit() {
    using namespace n1; return unk_130; }
namespace n1 {
}
void CommManager::func_02072204(u32 v) {
    using namespace n1; unk_132 = v; }
namespace n1 {
}
u8 *CommManager::getWifiFriendList() {
    using namespace n1; return unk_134; }
namespace n1 {
}
u8 *CommManager::getWifiUserData() {
    using namespace n1; return (u8 *)this + 0x514; }
namespace n1 {
}
void NetOverlay_AssertWifi() {
    using namespace n1;
    u32 x;
    if (gOverlayHandle.f) x = (u32)-1; else x = gOverlayHandle.v;
    BOOL ok;
    if ((u32)OVERLAY_65_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) Fatal_Trap();
}
namespace n1 {
}
void NetOverlay_AssertWireless() {
    using namespace n1;
    u32 x;
    if (gOverlayHandle.f) x = (u32)-1; else x = gOverlayHandle.v;
    BOOL ok;
    if ((u32)OVERLAY_66_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) Fatal_Trap();
}
namespace n1 {
}
void NetOverlay_AssertOv067() {
    using namespace n1;
    u32 x;
    if (gOverlayHandle.f) x = (u32)-1; else x = gOverlayHandle.v;
    BOOL ok;
    if ((u32)OVERLAY_67_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) Fatal_Trap();
}
namespace n1 {
}
void NetOverlay_AssertAny() {
    using namespace n1;
    u32 x;
    if (gOverlayHandle.f) x = (u32)-1; else x = gOverlayHandle.v;
    BOOL ok;
    Unk_020720f8_Id a = (Unk_020720f8_Id)(u32)OVERLAY_65_ID;
    Unk_020720f8_Id b = (Unk_020720f8_Id)(u32)OVERLAY_66_ID;
    Unk_020720f8_Id c = (Unk_020720f8_Id)(u32)OVERLAY_67_ID;
    if (x == a || x == b || x == c) ok = TRUE; else ok = FALSE;
    if (!ok) Fatal_Trap();
}
namespace n1 {
}

// ======== data ========
u8 sCommAckPackets[4];

CommManager gCommManagerInstance;

// The pointer is a constant (.rodata) that every user loads from memory: the users see it as a plain
// `CommManager *`, so the definition has its own declaration scope.
namespace U126_def {
extern "C" {
extern CommManager *const gCommManager;
CommManager *const gCommManager = &gCommManagerInstance;
}
}
