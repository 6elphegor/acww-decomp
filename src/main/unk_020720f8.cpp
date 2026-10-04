#include "types.h"

// U126: communication manager CommManager (singleton gCommManagerInstance, reached through the constant pointer
// gCommManager) and its helpers, 0x020720f8-0x020742f4

#include "net/CommManager.h"
#include "save/PatternOrder.h"
#include "net/Unk_020720f8_Data.h"
#include "save/Unk_020942c8.h"

// ======== types of unk_02071ae0.cpp ========
class EncodedString16Buf {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void capacity();
    virtual void data();
    EncodedString16Buf();
    virtual ~EncodedString16Buf();
    void copyTo(u8 *dst, s32 n);
    void StrBuf_SetBytes(u8 *src, s32 n);
    u8 unk_04[0x20];
};
class PatternInfo : public Unk_020942c8 {
public:
    PatternInfo();
    ~PatternInfo();
    Unk_02071b10_Id16 title;
    struct {
        u8 lo : 4;
        u8 hi : 4;
    } tastePalette;
    u8 pad_27;

    void setTaste(u32 v);
    u8 getTaste();
    void setTitleRaw(u8 *src);
    void setTitleEncoded(EncodedString16Buf *o);
    void setTitle(void *x);
    void getTitleRaw(u8 *dst);
    void getTitleEncoded(EncodedString16Buf *o);
    void getTitle(void *x);
    Unk_020942c8 *getAuthor();
    void setAuthor(Unk_020942c8 *src);
    void setAuthorToCurrentPlayer();
    void setPalette(u32 v);
    u8 getPalette();
    void getPaletteData();
    BOOL infoEquals(PatternInfo *o);
};
class Pattern {
public:
    Pattern();
    ~Pattern();
    u8 pixels[0x200];
    PatternInfo info;

    PatternInfo *getInfo();
    void fill(u32 v);
    void setPixels(void *dst);
    u8 *getPixels();
    BOOL equals(Pattern *o);
};
class TownFlagPattern : public Pattern {
public:
    TownFlagPattern();
    ~TownFlagPattern();
};
class AbleSistersPatterns {
public:
    AbleSistersPatterns();
    ~AbleSistersPatterns();
    Pattern patterns[8];

    Pattern *getPattern(u8 i);
    void initDefaultPatterns();
};
class PlayerPatterns {
public:
    PlayerPatterns();
    ~PlayerPatterns();
    Pattern patterns[8];
    PatternOrder patternOrder;

    PatternOrder *getPatternOrder();
    Pattern *getPatternByOrder(u32 i);
    Pattern *getPattern(u8 i);
    void replaceAuthorTown(Unk_020942c8 *a, Unk_020942c8 *b);
    void initDefaultPatterns(Unk_020942c8 *a);
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
void *_ZN8PlayerId7getNameEv();
}
extern "C" {
void *TownId_GetName(void *);
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
void Comm_OnFriendDeletedNop();
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
void NetArea_SetSlotStatus(u32, u32, u32, u32, u32);
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
void Scene_GetCurrent();
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
void VillagerStates_ResetRuntime();
}
extern "C" {
void TownSessionState_Get();
}
extern "C" {
void TownSessionState_Reset();
}
extern "C" {
void RoomFtrState_ResetAll();
}
extern "C" {
void RoomObjSync_Reset();
}
extern "C" {
void BuildingStates_Reset();
}
extern "C" {
void CharInteractSync_Reset();
}
extern "C" {
void CommSub_ResetPostReply();
}
extern "C" {
void *Item_MakeBuilding(u32);
}
extern "C" {
void BuildingOccupancy_Leave(void *, u32);
}
extern "C" {
void SpotSync_Release(u32);
}
extern "C" {
void RoomEntry_Leave(u32, u32);
}
extern "C" {
void PlayerSession_ResetLastState(u32);
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
        VillagerStates_ResetRuntime();
        TownSessionState_Get();
        TownSessionState_Reset();
    }
    RoomFtrState_ResetAll();
    RoomObjSync_Reset();
    BuildingStates_Reset();
    CharInteractSync_Reset();
    CommSub_ResetPostReply();
    if (r4 < 0) {
        CommManager *o = gCommManager;
        if (_ZN11CommManager7isMyAidEj(o, 0) != 0 || _ZN11CommManager7isMyAidEj(o, 4) != 0) {
            if (r4 == -4) {
                for (u32 i = 0; i < 0x22; i++) {
                    void *r6 = Item_MakeBuilding(i);
                    BuildingOccupancy_Leave(r6, 1);
                    BuildingOccupancy_Leave(r6, 2);
                    BuildingOccupancy_Leave(r6, 3);
                }
                SpotSync_Release(1);
                SpotSync_Release(2);
                SpotSync_Release(3);
                for (u32 i = 0; i < 0x33; i++) {
                    u32 r6 = (u8)i;
                    RoomEntry_Leave(r6, 1);
                    RoomEntry_Leave(r6, 2);
                    RoomEntry_Leave(r6, 3);
                }
            } else {
                s32 r6 = -r4;
                for (u32 i = 0; i < 0x22; i++) {
                    BuildingOccupancy_Leave(Item_MakeBuilding(i), r6);
                }
                SpotSync_Release(r6);
                for (u32 i = 0; i < 0x33; i++) {
                    RoomEntry_Leave((u8)i, r6);
                }
            }
        }
    }
    if (r4 < 0) {
        if (r4 == -4) {
            for (u32 i = 0; i < 4; i++) {
                PlayerSession_ResetLastState(i);
            }
        } else {
            PlayerSession_ResetLastState(-r4);
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
        Scene_GetCurrent();
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
                NetArea_SetSlotStatus(0, 0x3f, 1, 0, 2);
            } else {
                NetArea_SetSlotStatus(i, 0x3f, 0, 0, 2);
            }
        }
    }
    NetArea_SetSlotStatus(a, 0x3f, 0, 0, 7);
    o = gCommManager;
    _ZN11CommManager13setSlotActiveEij(o, a, 0);
    _ZN11CommManager14setMemberCountEj(o, (u8)(o->memberCount - 1));
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
    gCommManager->maxSyncVarSize = r5;
    NetHeap_Create(0x4b000, a);
    func_020ebc38();
}
extern "C" void Comm_Start(s32 a, u32 b, u32 c) {
    CommManager *o = gCommManager;
    o->started = 1;
    CommSyncVar_Init();
    o->syncCompareBuf = NetHeap_Alloc(o->maxSyncVarSize, 4);
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
        MI_CpuCopy8(_ZN8PlayerId7getNameEv(), r6, 8);
        MI_CpuCopy8(TownId_GetName((u8 *)((u32)gSaveData + 2)), r6 + 8, 8);
        _ZN10PlayerData15getWifiUserDataEv(l18);
        MI_CpuCopy8(PlayerWifiData_GetDwcUserData(), r6 + 0x10, 0x40);
        _Z21NetOverlay_AssertWifiv();
        Net_StartWifi(a, (void *)Comm_OnReceive, (void *)Comm_OnFriendDeletedNop, r6, r5);
    }
    _ZN11CommManager12setErrorModeEj(o, c);
}
extern "C" void Comm_StartOv067Mode() {
    gCommManager->started = 1;
    _Z20NetOverlay_AssertAnyv();
    Net_Init(0x41444d45, 0x400083, 1, 0x4fe752, 2, (void *)NetHeap_Alloc, (void *)NetHeap_Free);
}
extern "C" s32 Comm_End() {
    s32 r5 = 1;
    if (gCommManager->started != 0) {
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
        NetHeap_Free(o->syncCompareBuf);
        o->syncCompareBuf = 0;
        NetHeap_Free(_ZN11CommManager13getSyncVarBufEv(o));
        _ZN11CommManager13setSyncVarBufEPh(o, 0);
        _ZN11CommManager5resetEv(o);
        o->started = 0;
    }
    return r5;
}
extern "C" void Comm_EndOv067Mode() {
    if (gCommManager->started != 0) {
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
        o->started = 0;
    }
}
extern "C" void Comm_DestroyHeap() {
    func_020ebc34();
    NetHeap_Destroy();
}
extern "C" void Comm_ProcessReceived(s32 x) {
    if (x == 0) {
        CommManager *o = gCommManager;
        if (_ZN11CommManager12isSlotActiveEi(o, o->myAid)) {
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
BOOL CommCaution_IsShutDown();
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
    s32 self = g->myAid;
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
                    if (!CommCaution_IsShutDown()) {
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
                if (sent || g->memberCount <= 1) {
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
                        if (g->sendPackets(bufs2[0], lens2[0], masks2[0], bufs2[1], lens2[1], masks2[1], bufs2[2], lens2[2], masks2[2]) || g->memberCount <= 1) {
                            for (i = 3; i >= 0; i--) {
                                if (g->isSlotActive(i) && !g->isMyAid(i)) {
                                    g->setAckCount(i, 0);
                                }
                            }
                        }
                    } else {
                        if (g->isMyAid(0)) {
                            if (g->memberCount != 4) {
                                Comm_SendEmpty();
                            }
                        }
                    }
                } else {
                    if (g->isMyAid(0)) {
                        if (g->memberCount != 4) {
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
                if (!CommCaution_IsShutDown()) {
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
void NetArea_SetSlotStatus(u32 a, s32 b, u32 c, u32 d, u32 e);
}
extern "C" {
s32 Scene_GetCurrent();
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
void Comm_ResetNetSession();
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
    o->myAid = 0;
    o->setSlotActive(o->myAid, 1);
    Comm_SetRecvBuffers(0);
    NetSession_OnBeginHost();
    NetArea_SetSlotStatus(0, Scene_GetCurrent(), 1, 0, 7);
}
extern "C" void Comm_PrepareJoin(u32 a) {
    gCommManager->setMode(0);
    Comm_SetRecvBuffers(a);
}
extern "C" void Comm_ResetNetSession() { NetSession_Reset(); }
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
    s32 idx = o->myAid;
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
    s32 a = gCommManager->myAid;
    if (!gCommManager->isSlotActive(a)) {
        NetSession_GetSyncState(3);
    } else {
        NetSession_GetSyncState(a);
    }
}
extern "C" void Comm_ClearSyncState() {
    s32 a = gCommManager->myAid;
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
    s32 i = o->myAid;
    if (i < 4) {
        r |= (u16)(1 << i);
    }
    return r;
}
extern "C" s32 Comm_Shutdown() {
    Comm_ResetNetSession();
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
    localSlot = 4;
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
    myAid = 4;
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
    s32 n = myAid;
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
    using namespace n3; slotActive[i] = v; }
namespace n3 {
}
u32 CommManager::isSlotActive(s32 i) {
    using namespace n3;
    if (i < 4) {
        return slotActive[i];
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
    if (isSlotActive(myAid) && memberCount >= 2) {
        return TRUE;
    }
    return FALSE;
}
namespace n3 {
}
s16 CommManager::getSendSeq() {
    using namespace n3; return (s16)(sendSeq & 0x7fff); }
namespace n3 {
}
void CommManager::incSendSeq() {
    using namespace n3; sendSeq = sendSeq + 1; }
namespace n3 {
}
void CommManager::setMode(u32 v) {
    using namespace n3; mode = v; }
namespace n3 {
}
u8 CommManager::getMode() {
    using namespace n3; return mode; }
namespace n3 {
}
void CommManager::setPendingMode(u32 v) {
    using namespace n3; pendingMode = v; }
namespace n3 {
}
u8 CommManager::getPendingMode() {
    using namespace n3; return pendingMode; }
namespace n3 {
}
void CommManager::setSendBufs(u8 *p) {
    using namespace n3; sendBufs = p; }
namespace n3 {
}
u8 *CommManager::getSendBuf(s32 i) {
    using namespace n3;
    if (i >= 4) {
        return sendBufs;
    }
    if (isMyAid(i)) {
        return NULL;
    }
    if (i < myAid) {
        return sendBufs + (i << 12);
    }
    return sendBufs + ((i - 1) << 12);
}
namespace n3 {
}
u32 CommManager::getSendCredit(s32 a) {
    using namespace n3; return sendCredits[Comm_AidToPeerIndex(a)]; }
namespace n3 {
}
void CommManager::addSendCredit(s32 a, u32 b) {
    using namespace n3; sendCredits[Comm_AidToPeerIndex(a)] += b; }
namespace n3 {
}
void CommManager::subSendCredit(s32 a, u32 b) {
    using namespace n3; sendCredits[Comm_AidToPeerIndex(a)] -= b; }
namespace n3 {
}
void CommManager::resetSendCredit(s32 a) {
    using namespace n3; sendCredits[Comm_AidToPeerIndex(a)] = 3; }
namespace n3 {
}
void CommManager::resetSendCredits() {
    using namespace n3;
    u32 *p = sendCredits;
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
s32 Scene_GetCurrent();
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
    using namespace n2; return ackCounts[Comm_AidToPeerIndex(a)]; }
namespace n2 {
}
void CommManager::setAckCount(s32 a, u32 v) {
    using namespace n2; ackCounts[Comm_AidToPeerIndex(a)] = v; }
namespace n2 {
}
void CommManager::incAckCount(s32 a) {
    using namespace n2; ackCounts[Comm_AidToPeerIndex(a)] += 1; }
namespace n2 {
}
void CommManager::clearAckCounts() {
    using namespace n2;
    s32 i;
    u32 *p = ackCounts;
    for (i = 2; i >= 0; i--) *p++ = 0;
}
namespace n2 {
}
u8 *CommManager::getRecvBuf(s32 a, s32 b) {
    using namespace n2;
    if (a >= 4) return recvBufs;
    if (isMyAid(a)) return 0;
    if (a < myAid) {
        return recvBufs + ((b + a * 3) << 12);
    }
    return recvBufs + ((b + (a - 1) * 3) << 12);
}
namespace n2 {
}
u8 *CommManager::getRecvBufByPeer(s32 a, s32 b) {
    using namespace n2;
    return recvBufs + ((b + a * 3) << 12);
}
namespace n2 {
}
void CommManager::setRecvBufs(u8 *v) {
    using namespace n2; recvBufs = v; }
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
                dbg = Scene_GetCurrent();
                len = CommRecord_GetLength(buf);
                if (NetArea_IsSlotMoving(myAid) && t == 7 && a != dbg) {
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
    if (v == myAid) return TRUE;
    return FALSE;
}
namespace n2 {
}
BOOL CommManager::isLocalSlot(u32 v) {
    using namespace n2;
    if (v == localSlot) return TRUE;
    return FALSE;
}
namespace n2 {
}
void CommManager::setMemberCount(u32 v) {
    using namespace n2;
    if (v > 4) {
        memberCount = 0;
        return;
    }
    memberCount = v;
}
namespace n2 {
}
void CommManager::clearMemberCount() {
    using namespace n2; setMemberCount(0); }
namespace n2 {
}
u8 *CommManager::getSyncVarBuf() {
    using namespace n2; return syncVarBuf; }
namespace n2 {
}
void CommManager::setSyncVarBuf(u8 *v) {
    using namespace n2; syncVarBuf = v; }
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
    using namespace n2; return syncVarDirty[i]; }
namespace n2 {
}
void CommManager::setSyncVarDirty(s32 i, u32 v) {
    using namespace n2; syncVarDirty[i] = v; }
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
    using namespace n2; return recordBuf; }
namespace n2 {
}
void CommManager::setRecordBuf(u8 *v) {
    using namespace n2;
    recordBuf = v;
    recordWritePtr = v;
}
namespace n2 {
}
void CommManager::resetRecordBuf() {
    using namespace n2;
    setRecordLen(0);
    recordWritePtr = getRecordBuf();
}
namespace n2 {
}
void CommManager::setRecordLen(u32 v) {
    using namespace n2; recordLen = v; }
namespace n2 {
}
u32 CommManager::getRecordLen() {
    using namespace n2; return recordLen; }
namespace n2 {
}
void CommManager::beginRecord() {
    using namespace n2;
    if (_ZN11CommManager8isOnlineEv(this)) {
        curRecordStart = recordWritePtr;
        curRecordEnd = recordWritePtr + 5;
    }
}
namespace n2 {
}
void CommManager::writeRecord(u8 *p, u32 n) {
    using namespace n2;
    if (_ZN11CommManager8isOnlineEv(this)) {
        MI_CpuCopy8(p, curRecordEnd, n);
        curRecordEnd += n;
    }
}
namespace n2 {
}
void CommManager::endRecord(u32 a, u32 b) {
    using namespace n2;
    u8 buf[8];
    if (_ZN11CommManager8isOnlineEv(this)) {
        if (b - 6 <= 1) {
            NetArea_IsUnsharedScene(Scene_GetCurrent());
        }
        u32 len = curRecordEnd - curRecordStart;
        CommRecord_SetLength(buf, (u16)(len - 5));
        buf[2] = a;
        buf[3] = b;
        CommRecord_PackSource(buf + 4, Scene_GetCurrent(), (u8)myAid);
        MI_CpuCopy8(buf, curRecordStart, 5);
        recordLen += len;
        recordWritePtr = curRecordEnd;
    }
}
namespace n2 {
}
u8 *CommManager::getSendQueueBuf() {
    using namespace n2; return sendQueueBuf; }
namespace n2 {
}
void CommManager::setSendQueueBuf(u8 *v) {
    using namespace n2; sendQueueBuf = v; }
namespace n2 {
}
void CommManager::resetSendQueueLen() {
    using namespace n2; setSendQueueLen(0); }
namespace n2 {
}
void CommManager::setSendQueueLen(u32 v) {
    using namespace n2; sendQueueLen = v; }
namespace n2 {
}
u32 CommManager::getSendQueueLen() {
    using namespace n2; return sendQueueLen; }
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
    using namespace n2; readPtr = v; }
namespace n2 {
}
u8 *CommManager::getReadPtr() {
    using namespace n2; return readPtr; }
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
    using namespace n2; return deferredBuf; }
namespace n2 {
}
void CommManager::setDeferredBuf(u8 *v) {
    using namespace n2; deferredBuf = v; }
namespace n2 {
}
void CommManager::clearDeferredLen() {
    using namespace n2; setDeferredLen(0); }
namespace n2 {
}
void CommManager::setDeferredLen(u32 v) {
    using namespace n2; deferredLen = v; }
namespace n2 {
}
u32 CommManager::getDeferredLen() {
    using namespace n2; return deferredLen; }
namespace n2 {
}
void CommManager::flushDeferred() {
    using namespace n2;
    Unk_0207264c_Loc l;
    s32 v6 = myAid;
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
    using namespace n2; return heldBuf; }
namespace n2 {
}
void CommManager::setHeldBuf(u8 *v) {
    using namespace n2; heldBuf = v; }
namespace n2 {
}
void CommManager::clearHeldLen() {
    using namespace n2; setHeldLen(0); }
namespace n2 {
}
void CommManager::setHeldLen(u32 v) {
    using namespace n2; heldLen = v; }
namespace n2 {
}
u32 CommManager::getHeldLen() {
    using namespace n2; return heldLen; }
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
        if (l.a == Scene_GetCurrent()) {
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
    using namespace n2; return loopbackBuf; }
namespace n2 {
}
void CommManager::setLoopbackBuf(u8 *v) {
    using namespace n2; loopbackBuf = v; }
namespace n2 {
}
void CommManager::clearLoopbackLen() {
    using namespace n2; setLoopbackLen(0); }
namespace n2 {
}
void CommManager::setLoopbackLen(u32 v) {
    using namespace n2; loopbackLen = v; }
namespace n2 {
}
u32 CommManager::getLoopbackLen() {
    using namespace n2; return loopbackLen; }
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
    using namespace n2; return auxBufA; }
namespace n2 {
}
void CommManager::setAuxBufA(u32 v) {
    using namespace n2; auxBufA = v; }
namespace n2 {
}
void CommManager::clearAuxLenA() {
    using namespace n2; setAuxLenA(0); }
namespace n2 {
}
void CommManager::setAuxLenA(u32 v) {
    using namespace n2; auxLenA = v; }
namespace n2 {
}
u32 CommManager::getAuxLenA() {
    using namespace n2; return auxLenA; }
namespace n2 {
}
void CommManager::appendAuxB(u8 *src, u32 n) {
    using namespace n2;
    MI_CpuCopy8(src, auxWritePtrA, n);
    auxWritePtrA += n;
}
namespace n2 {
}
u32 CommManager::getAuxBufB() {
    using namespace n2; return auxBufB; }
namespace n2 {
}
void CommManager::setAuxBufB(u32 v) {
    using namespace n2; auxBufB = v; }
namespace n2 {
}
void CommManager::clearAuxLenB() {
    using namespace n2; setAuxLenB(0); }
namespace n2 {
}
void CommManager::setAuxLenB(u32 v) {
    using namespace n2; auxLenB = v; }
namespace n2 {
}
u32 CommManager::getAuxLenB() {
    using namespace n2; return auxLenB; }
namespace n2 {
}
void CommManager::setSentSeq(s16 v) {
    using namespace n2; sentSeq = v; }
namespace n2 {
}
void CommManager::setConfirmedSeq(s16 v) {
    using namespace n2; confirmedSeq = v; }
namespace n2 {
}
s16 CommManager::getSentSeq() {
    using namespace n2; return sentSeq; }
namespace n2 {
}
s16 CommManager::getConfirmedSeq() {
    using namespace n2; return confirmedSeq; }
namespace n2 {
}
void CommManager::clearSentSeq() {
    using namespace n2; sentSeq = -1; }
namespace n2 {
}
void CommManager::clearConfirmedSeq() {
    using namespace n2; confirmedSeq = -1; }
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
void AblePatternDefaults_Ctor(void *p);
}
extern "C" {
void PlayerPatternDefaults_Ctor(void *p);
}
extern "C" {
BOOL AblePatternDefaults_Extract(void *t, void *buf, s16 i);
}
extern "C" {
BOOL PlayerPatternDefaults_Extract(void *t, void *buf, s16 i);
}
extern "C" {
void AblePatternDefaults_Load(void *t);
}
extern "C" {
void PlayerPatternDefaults_Load(void *t);
}
extern "C" {
void *PatternPresetInfo_Get(void);
}
extern "C" {
void PatternPresetInfo_Apply(void *t, PatternInfo *s, s32 id);
}
extern "C" {
Unk_020942c8 *PlayerId_GetTownId(Unk_020942c8 *p);
}
extern "C" {
void TownId_SetId(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN8PlayerId5setIdEt(Unk_020942c8 *p, u32 v);
}
extern "C" {
void _ZN6TownId7setTownEPS_(Unk_020942c8 *a, Unk_020942c8 *b);
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
void *PatternTexCache_Get();
}
extern "C" {
void _ZN15PatternTexCache10getPaletteEi(void *p, u32 v);
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
    using namespace n1; controlLen = v; }
namespace n1 {
}
u32 CommManager::getControlLen() {
    using namespace n1; return controlLen; }
namespace n1 {
}
void CommManager::clearControlLen() {
    using namespace n1; controlLen = 0; }
namespace n1 {
}
void CommManager::appendControl(void *src, u32 n) {
    using namespace n1;
    u8 *d = getSendBuf(4);
    d = d + controlLen;
    MI_CpuCopy8(src, d, n);
    controlLen += n;
}
namespace n1 {
}
void CommManager::setLatchedErrorFlags(u32 v) {
    using namespace n1; latchedErrorFlags = v; }
namespace n1 {
}
u32 CommManager::getLatchedErrorFlags() {
    using namespace n1; return latchedErrorFlags; }
namespace n1 {
}
void CommManager::setErrorFlags(u32 v) {
    using namespace n1; errorFlags = v; }
namespace n1 {
}
u32 CommManager::getErrorFlags() {
    using namespace n1; return errorFlags; }
namespace n1 {
}
void CommManager::setErrorMode(u32 v) {
    using namespace n1; errorMode = v; }
namespace n1 {
}
u32 CommManager::getErrorMode() {
    using namespace n1; return errorMode; }
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
            if (v <= 0x258) self->noAckFrames[idx]++;
        }
    }
}
namespace n1 {
}
u32 CommManager::getNoAckFrames(s32 i) {
    using namespace n1;
    return noAckFrames[Comm_AidToPeerIndex(i)];
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
    noAckFrames[Comm_AidToPeerIndex(i)] = 0;
}
namespace n1 {
}
void CommManager::clearNoAckFrames() {
    using namespace n1;
    u16 *p = noAckFrames;
    for (s32 i = 2; i >= 0; i--) *p++ = 0;
}
namespace n1 {
}
void CommManager::setSendRetry(u32 v) {
    using namespace n1; sendRetry = v; }
namespace n1 {
}
u32 CommManager::getSendRetry() {
    using namespace n1; return sendRetry; }
namespace n1 {
}
void CommManager::setSendRetryLimit(u32 v) {
    using namespace n1; sendRetryLimit = v; }
namespace n1 {
}
u32 CommManager::getSendRetryLimit() {
    using namespace n1; return sendRetryLimit; }
namespace n1 {
}
void CommManager::setSessionMemberMask(u32 v) {
    using namespace n1; sessionMemberMask = v; }
namespace n1 {
}
u8 *CommManager::getWifiFriendList() {
    using namespace n1; return wifiFriendList; }
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
