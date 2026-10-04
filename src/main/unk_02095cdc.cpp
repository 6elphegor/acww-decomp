#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "game/Unk_02095774_Ent.h"
#include "save/MotherLetterState.h"
#include "item/Letter.h"
#include "item/LetterView.h"
#include "item/PlayerMailbox.h"
#include "item/LetterStorage.h"
#include "item/LetterOutbox.h"
#include "item/FutureLetter.h"
#include "item/BottleLetterRecord.h"





struct ItemPickSpec {
    void set(s32 a, s32 b);
    s32 listIndex;
    s32 itemClass;
};



struct Unk_02096354_Arg {
    u32 year;
    u32 month;
    u32 day;
};

struct Unk_020966f8_Rec {
    union { struct { u32 a; u32 b; }; struct { u8 d0, d1, d2, d3, d4, d5, d6, d7; }; };
};

struct Unk_02096484_Base {
    union { struct { u32 a; u32 b; }; struct { u8 d0, d1, d2, d3, d4, d5, d6, d7; }; };
    Unk_02096484_Base() { a = 0; b = 0; }
};
struct Unk_02096484_Rec : Unk_02096484_Base {
    Unk_02096484_Rec() { a = 0; b = 0; }
};









inline BOOL Unk_0209579c_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

inline u16 Unk_02095f38_F(u32 v) {
    if (v < 5) return (u16)(v + 0x1518);
    return 0x1518;
}
extern CommManager *gCommManager;
extern u32 sPlayerPosSyncVars[];
extern u32 sPlayerAngleSyncVars[];
extern u32 sPlayerStateSyncVars[];
extern const u8 sThrownBottleReturnOdds[];
extern u8 gPlayerSessionTable[];
extern u8 data_021e7f8c[];
extern u8 data_021eceac[];
extern u8 gU8None[];
extern Unk_02095f38_G data_021ed150;
extern u8 sMotherMonthLetterCount[];
extern u8 sMotherMonthLetterFirst[];
extern u8 data_021ecfa8[];
extern const u32 sSeasonLetterPaperCounts[];
extern const u8 *sSeasonLetterPapers[];
extern const u32 sPersonalityLetterPaperCounts[];
extern const u8 *sPersonalityLetterPapers[];
extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];
extern u8 gSaveTownId[];
extern u8 data_020e1dfc[];
extern u8 data_020e1e00[];
extern u8 data_020e1e04[];
extern u8 data_020e1e08[];
extern u8 data_020e1e0c[];
extern u8 data_020e1e10[];
extern u8 data_020e1df8[];
extern LetterOutbox data_021eb98c;
extern PlayerMailbox data_021e935c[];

extern "C" {
Unk_0209579c_Rec *func_02002d3c(s32 a, s32 b);
void VillagerId_Destruct(void *);
void VillagerId_Construct(void *);
void VillagerId_CopyFrom(void *, void *);
void Catalog_SetItem(void *a, u16 *b, s32 c, s32 d);
void MailText_SetSlot(s32, void *);
void Town_GetUpdater();
s32 Town_WashUpBottle();
Unk_02095dcc_Grid *TownBlockMap_Get();
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void ItemPick_FromRange(u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void ItemPickSpec_Destruct(ItemPickSpec *o);
void func_0206338c(s32 a, s32 b);
void func_02063870(void *);
void func_02063888(void *);
void TownId_GetNameString(void *, void *);
s32 Random_GlobalBelow(u32 n);
s32 _ZN10LetterView8getStateEv(void *p);
void _ZN10LetterView10setPresentEtj(void *, u32, s32);
void *Letter_GetRecipientVillager(void);
void *Letter_GetRecipientPlayer(void);
void Letter_ComposeBottleMail(void *a, void *b, void *c);
s32 Letter_ComposeFromMail(void *, void *, u8 *, void *, void *, void *);
void Letter_MarkReceived(void *);
void Letter_MarkSent(void *p);
void Letter_SetRecipientResident(void *, void *);
void Letter_Clear(void *p);
void _ZN6LetterD1Ev(void *);
void _ZN6LetterC1Ev(void *);
void Letter_Copy(void *p, void *q);
s32 MenuCtrl_IsClockMovedForward(void);
void CommSub_Send(s32 a, s32 b);
u32 func_02072970(CommManager *p, u32 v);
BOOL func_020729bc(CommManager *p, s32 v);
u32 func_020729cc(CommManager *p, s32 v);
BOOL _ZN11CommManager8isOnlineEv(CommManager *p);
u32 func_02072e88(CommManager *p, s32 v);
void CommSyncVar_SetVar(s32 a, void *b, s32 c, s32 d);
void NetBuf_UnpackPair20(u32 a, s32 *x, s32 *y);
void CommRecord_UnpackSource(u32 a, u8 *b, s32 c);
void SaveVillagers_DeliverLetter(void *, void *);
s32 SaveVillagers_FindIndex(void *, void *);
s32 SaveVillagers_IsValidIndex(s32);
void *ReceivedLetter_GetLetter(void *);
s32 ReceivedLetter_HasLetter(void *);
void *ReceivedLetter_Clear(void *);
void *TownExchange_GetLetter(void *p);
s32 _ZN18TownExchangeRecord10getCounterEv(void *p);
void _ZN18TownExchangeRecord12resetCounterEv(void *p);
s32 _ZN18TownExchangeRecord10getUnkFlagEv(void *p);
s32 _ZN18TownExchangeRecord7isValidEv(void *p);
void _ZN8PlayerId8copyFromEPS_(void *, void *);
void _ZN8PlayerIdC1Ev(void *);
void _ZN8PlayerIdC1EPv(void *);
void PlayerActor_Spawn(s32 idx, void *pos, void *rot, u32 flags);
s32 PlayerActor_GetLocalSessionSlot();
void PlayerSession_RemovePitfallOnClimbOut(s32 *idx, u8 *b, s32 *v, s32 *c, s32 *d, s32 *e);
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
Unk_02095774_Ent *PlayerActor_GetActor(s32 idx);
u32 PlayerSession_FindFreeGfxSlot();
void PlayerSession_SetGfxSlot(s32 idx, u32 v);
s16 *PlayerSession_GetLastAngle(s32 idx);
s32 *PlayerSession_GetLastPos(s32 idx);
u8 *PlayerSession_GetLastScene(s32 idx);
s32 *PlayerSession_GetLastAction(s32 idx);
s32 PlayerSessionTable_GetActor(void *p, s32 i);
BOOL PlayerActor_GetSlotAction(s32 *out, s32 a, s32 idx);
BOOL PlayerActor_GetSlotAngle(s16 *out, s32 a, s32 idx);
BOOL PlayerActor_GetSlotPosXZ(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx);
u32 PlayerActor_GetNetStateVar(s32 idx);
u32 PlayerActor_GetNetPosVar(s32 idx);
Unk_02095774_Ent *PlayerActor_Get(s32 idx);
void BottleLetter_WashUpThrownBottle();
void BottleLetter_OnNewDay(s32 a);
s32 BottleLetter_IsBottleInTown();
s32 BottleLetter_PlaceBottle();
s32 BottleLetter_CreateGameLetter(u8 *p);
s32 BottleLetter_Open();
u8 MotherLetter_GetMsgIndex(s32 x);
u16 MotherLetter_GetPresent(s32 code);
u8 *MotherLetter_GetFileName(s32 a);
s32 MotherLetter_Send(s32 a, s32 b);
s32 MotherLetter_SendRandomUnsent(s32 a, s32 b, s32 c, s32 d);
void MotherLetter_ClearSent(s32 a, s32 n);
s32 MotherLetter_GetNthUnsent(s32 a, s32 n, s32 k);
s32 MotherLetter_CountUnsent(s32 a, s32 n);
void MotherLetter_ResetOtherMonths(s32 x);
u8 MotherLetter_GetMonthCount(u8 v);
u32 MotherLetter_GetMonthFirst(u8 v);
s32 MotherLetter_TrySendRandom(Unk_02096354_Arg *p);
s32 MotherLetter_TrySendHoliday(Unk_02096354_Arg *p);
s32 MotherLetter_TrySendBirthday(Unk_02096354_Arg *p);
void MotherLetter_OnNewDay(Unk_02096354_Arg *p, s32 n);
void LetterDelivery_DeliverReceivedLetter(void);
u8 LetterPaper_PickForMonth(u32 x);
u8 LetterPaper_PickForPersonality(u32 i);
u8 LetterPaper_PickRandom(u32 a, u32 b);
void LetterDelivery_Update(void);
s32 LetterDelivery_HasFreeOutgoingSlot(void);
s32 LetterDelivery_HasFutureLetter(void *p);
void func_020968e0(void);
s32 LetterList_CountUsed(void *base, s32 n);
s32 LetterList_Compact(void *base, s32 n);
s32 LetterDelivery_FindAddresseeVillager(Letter *);
s32 LetterDelivery_FindAddresseePlayer(Letter *);
BOOL LetterDelivery_HasKnownAddressee(Letter *e);
BOOL LetterDelivery_QueueOutgoing(Letter *e, BOOL flag);
void LetterDelivery_SendToVillager(Letter *e);
BOOL LetterDelivery_PutInAddresseeMailbox(Letter *e);
BOOL LetterDelivery_PutInMailbox(Letter *e, s32 idx, u32 flag);
BOOL LetterDelivery_IsMailboxFull(s32 idx);
s32 LetterDelivery_DeliverOutgoing(void);
void func_02096c58(u32 mask);
void func_02096c68(u32 mask);
BOOL func_02096c78(u32 mask);
void func_02096c8c();
void _ZN17MotherLetterState21setBirthdayLetterYearEj(void *, u32);
u32 _ZN17MotherLetterState21getBirthdayLetterYearEv(void *);
s32 _ZN17MotherLetterState6isSentEi(void *, s32);
void _ZN17MotherLetterState9clearSentEi(void *, s32);
void _ZN17MotherLetterState7setSentEi(void *, s32);
BOOL func_02096d8c(u32 mask);
void func_02096d9c(u32 mask);
void _ZN17MotherLetterState11setLastDateEPi(void *, void *);
s32 _ZN17MotherLetterState13checkLastDateEPi(void *, void *);
void func_02096e00();
void _ZN12FutureLetter17clearFutureLetterEv(void *);
u8 *_ZN12FutureLetter15getDeliveryDateEv(void *);
LetterView *FutureLetter_GetLetter(void *);
s32 _ZN18BottleLetterRecord17pickUnusedMessageEv(void *p);
void func_02096ed4();
void _ZN18BottleLetterRecord14setMessageUsedEi(void *p, s32 v);
void *BottleLetterRecord_GetLetter(void *p);
s32 _ZN12LetterOutbox8testFlagEj(void *, u32);
void _ZN12LetterOutbox7setFlagEj(void *, u32);
u8 *_ZN12LetterOutbox19getLastDeliveryTimeEv(void *);
void *_ZN12LetterOutbox9getLetterEi(void *, s32);
s32 PlayerBank_SetBalance(s32, s32);
s32 PlayerBank_GetBalance(s32);
void *PlayerData_GetCurrent();
s32 PlayerDataArray_FindById(void *, void *);
u8 *PlayerData_GetResident(void *, s32);
s32 PlayerDataArray_IsUsed(void *, s32);
s32 PlayerData_IsResidentIndex(s32);
void *PlayerData_GetMotherLetterState(void *);
void *PlayerData_GetFutureLetter(void *);
s32 func_02097ff4(s32, s32);
s32 func_0209801c(s32, s32);
s32 func_02098044(s32, s32);
u8 *_ZN12Unk_02097ff411getBirthdayEv(void *);
s32 func_02098320(s32);
void *_ZN10PlayerData10getCatalogEv(void *a);
void *_ZN10PlayerData8getIndexEv(void *);
void *_ZN10PlayerData11getPlayerIdEv(void *);
void *Inventory_GetEmptyLetter();
u32 Date_GetNthWeekdayDay(u32, u32, u32, u32);
void DateTime_AddDays(void *, s32);
s32 DateTime_Compare(void *, void *, u32);
void Clock_GetDateTime(void *);
s32 func_020a03f0();
s32 Net_GetJoiningAid();
s32 NetSession_GetLastSyncSlot();
u8 NetArea_GetSlotScene(s32 idx);
void String_FormatNumber(void *, s32, s32, s32, s32, s32);
void func_020b413c(void *);
void func_020b4154(void *);
s32 Scene_GetCurrent();
s32 Scene_AllowsLetterDelivery(void);
void ProcBase_RequestDelete(void *p);
void MI_CpuCopy8(void *, void *, u32);
s32 func_02133150(s32, s32);
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern const u8 sAutumnLetterPapers[0x4];
extern const u8 sWinterLetterPapers[0x4];
extern const u8 sSpringLetterPapers[0x4];
extern const u8 sSummerLetterPapers[0x4];
extern const u8 sThrownBottleReturnOdds[0x8];
extern const u32 sSeasonLetterPaperCounts[4];
extern const u32 sPersonalityLetterPaperCounts[6];
extern const u8 sLetterPapersPersonality1[0x1c];
extern const u8 sLetterPapersPersonality2[0x20];
extern const u8 sLetterPapersPersonality4[0x24];
extern const u8 sLetterPapersPersonality0[0x24];
extern const u8 sLetterPapersPersonality3[0x24];
extern const u8 sLetterPapersPersonality5[0x24];

extern "C" s32 LetterDelivery_DeliverOutgoing(void) {
    Letter *base = data_021eb98c.getLetter(0);
    s32 n = LetterList_Compact(base, 10);
    s32 i;
    volatile s32 flag = 0;
    volatile s32 zero = 0;
    for (i = 0; i < n; i++) {
        Letter *p = &base[i];
        if (((LetterView *)p)->getState() != 0) {
            s32 idx = LetterDelivery_FindAddresseePlayer(p);
            if (idx == -2) {
                Letter_Clear(p);
            } else if (idx != ~zero) {
                if (LetterDelivery_PutInMailbox(p, idx, flag) != 0) {
                    Letter_Clear(p);
                }
            } else {
                if (LetterDelivery_FindAddresseeVillager(p) < 0) {
                    Letter_Clear(p);
                } else {
                    LetterDelivery_SendToVillager(p);
                    Letter_Clear(p);
                }
            }
        }
    }
    return LetterList_Compact(base, 10);
}

extern "C" BOOL LetterDelivery_IsMailboxFull(s32 idx) {
    if (idx == -1) {
        idx = (s32)_ZN10PlayerData8getIndexEv(PlayerData_GetCurrent());
    }
    Letter *p = data_021e935c[idx].getLetter(0);
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (((LetterView *)p)->getState() == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL LetterDelivery_PutInMailbox(Letter *e, s32 idx, u32 flag) {
    Letter *p = data_021e935c[idx].getLetter(0);
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (((LetterView *)p)->getState() == 0) {
            Letter_Copy(p, e);
            if (flag) {
                Letter_MarkSent(p);
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL LetterDelivery_PutInAddresseeMailbox(Letter *e) {
    s32 i = LetterDelivery_FindAddresseePlayer(e);
    if (i < 0) {
        return FALSE;
    }
    return LetterDelivery_PutInMailbox(e, i, 0);
}

extern "C" void LetterDelivery_SendToVillager(Letter *e) {
    SaveVillagers_DeliverLetter(gSaveVillagers, e);
}

extern "C" BOOL LetterDelivery_QueueOutgoing(Letter *e, BOOL flag) {
    s32 i;
    Letter *p = data_021eb98c.getLetter(0);
    for (i = 0; i < 10; p++, i++) {
        if (((LetterView *)p)->getState() == 0) {
            Letter_Copy(p, e);
            if (flag) {
                Letter_MarkSent(p);
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL LetterDelivery_HasKnownAddressee(Letter *e) {
    s32 r = LetterDelivery_FindAddresseePlayer(e);
    if (r == -2) {
        return FALSE;
    }
    if (r == -1) {
        r = LetterDelivery_FindAddresseeVillager(e);
        if (r == -2) {
            return FALSE;
        }
        if (r == -1) {
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" s32 LetterDelivery_FindAddresseePlayer(Letter *) {
    void *r4 = Letter_GetRecipientPlayer();
    u8 tmp[0x18];
    s32 res;
    if (r4 == 0) return -1;
    _ZN8PlayerIdC1EPv(tmp);
    _ZN8PlayerId8copyFromEPS_(tmp, r4);
    res = PlayerDataArray_FindById(gSavePlayers, tmp);
    if (PlayerData_IsResidentIndex(res)) {
        _ZN8PlayerIdC1Ev(tmp);
        return res;
    }
    _ZN8PlayerIdC1Ev(tmp);
    return -2;
}

extern "C" s32 LetterDelivery_FindAddresseeVillager(Letter *) {
    void *r5 = gSaveVillagers;
    void *r4 = Letter_GetRecipientVillager();
    u8 tmp[12];
    s32 res;
    if (r4 == 0) return -1;
    VillagerId_Construct(tmp);
    VillagerId_CopyFrom(tmp, r4);
    res = SaveVillagers_FindIndex(r5, tmp);
    if (SaveVillagers_IsValidIndex(res)) {
        VillagerId_Destruct(tmp);
        return res;
    }
    VillagerId_Destruct(tmp);
    return -2;
}

extern "C" s32 LetterList_Compact(void *base, s32 n) {
    s32 i = 0, j = i;
    for (; i < n; i++) {
        u8 *e = (u8 *)base + i * 0xf4;
        if (((LetterView *)e)->getState()) {
            if (i != j) {
                Letter_Copy((u8 *)base + j * 0xf4, e);
                Letter_Clear(e);
            }
            j++;
        }
    }
    return j;
}

extern "C" s32 LetterList_CountUsed(void *base, s32 n) {
    s32 i, cnt;
    cnt = 0;
    i = cnt;
    for (; i < n; i++) {
        if (((LetterView *)((u8 *)base + i * 0xf4))->getState()) cnt++;
    }
    return cnt;
}

extern "C" void func_020968e0(void) {}

extern "C" s32 LetterDelivery_HasFutureLetter(void *p) {
    if (p == 0) p = PlayerData_GetCurrent();
    if (FutureLetter_GetLetter(PlayerData_GetFutureLetter(p))->getState() != 0) return 1;
    return 0;
}

extern "C" s32 LetterDelivery_HasFreeOutgoingSlot(void) {
    s32 i;
    u8 *p = (u8 *)_ZN12LetterOutbox9getLetterEi(&data_021eb98c, 0);
    for (i = 0; i < 10; p += 0xf4, i++) {
        if (((LetterView *)p)->getState() == 0) return 1;
    }
    return 0;
}

extern "C" void LetterDelivery_Update(void) {
    u8 *r5;
    if (_ZN11CommManager8isOnlineEv(gCommManager)) return;
    u8 *const g = (u8 *)&data_021eb98c;
    r5 = _ZN12LetterOutbox19getLastDeliveryTimeEv(g);
    Unk_020966f8_Rec A;
    Unk_020966f8_Rec Y, Z;
    s32 z0, z1, z2;
    s32 i;
    u8 *r6;
    void *s0;
    LetterView *s4;
    A.a = 0; A.b = 0;
    Clock_GetDateTime(&A);
    Y.a = 0; Y.b = 0; Z.a = 0; Z.b = 0;
    if (_ZN12LetterOutbox8testFlagEj(g, 1)) {
        Y.a = 0; Y.b = 0;
        Y.d5 = r5[2];
        Y.d4 = r5[1];
        Y.d3 = r5[0];
        MI_CpuCopy8(&Y, &Z, 8);
        if (r5[3] < 9) {
            r5[3] = 9;
            Z.d2 = 0x11;
        } else if (r5[3] < 0x11) {
            r5[3] = 0x11;
            Z.d2 = 9;
            DateTime_AddDays(&Z, 1);
        } else {
            r5[3] = 9;
            DateTime_AddDays(&Y, 1);
            Z.d2 = 0x11;
            DateTime_AddDays(&Z, 1);
        }
        Y.d2 = r5[3];
        if (DateTime_Compare(&A, &Y, 0x3c) != -1) {
            LetterDelivery_DeliverOutgoing();
            if (DateTime_Compare(&A, &Z, 0x3c) != -1) LetterDelivery_DeliverOutgoing();
        }
    } else {
        _ZN12LetterOutbox7setFlagEj(g, 1);
    }
    z2 = 0; z1 = 0; z0 = 0;
    for (i = 0; i < 4; i++) {
        if (PlayerDataArray_IsUsed(gSavePlayers, i)) {
            s0 = PlayerData_GetResident(gSavePlayers, i);
            r6 = _ZN12FutureLetter15getDeliveryDateEv(PlayerData_GetFutureLetter(s0));
            s4 = FutureLetter_GetLetter(PlayerData_GetFutureLetter(s0));
            if (((LetterView *)s4)->getState()) {
                Y.a = z0; Y.b = z0;
                Y.d5 = r6[2];
                Y.d4 = r6[1];
                Y.d3 = r6[0];
                Y.d2 = 9;
                if (DateTime_Compare(&A, &Y, 0x3c) != ~z2) {
                    if (LetterDelivery_PutInMailbox((Letter *)s4, i, z1)) _ZN12FutureLetter17clearFutureLetterEv(PlayerData_GetFutureLetter(s0));
                }
            }
        }
    }
    r5[2] = A.d5;
    r5[1] = A.d4;
    r5[0] = A.d3;
    r5[3] = A.d2;
}

extern "C" u8 LetterPaper_PickRandom(u32 a, u32 b) {
    if (Random_GlobalBelow(10) < 3) return LetterPaper_PickForMonth(b);
    return LetterPaper_PickForPersonality(a);
}

extern "C" u8 LetterPaper_PickForPersonality(u32 i) {
    return sPersonalityLetterPapers[i][Random_GlobalBelow(sPersonalityLetterPaperCounts[i])];
}

extern "C" u8 LetterPaper_PickForMonth(u32 x) {
    s32 i;
    if (x <= 2 || x == 12) i = 3;
    else if (x <= 5) i = 0;
    else if (x <= 8) i = 1;
    else i = 2;
    return sSeasonLetterPapers[i][Random_GlobalBelow(sSeasonLetterPaperCounts[i])];
}

extern "C" void LetterDelivery_DeliverReceivedLetter(void) {
    void *r6 = data_021ecfa8;
    if (ReceivedLetter_HasLetter(r6) != 0) {
        if (LetterDelivery_IsMailboxFull(-1) == 0) {
            void *r5 = ReceivedLetter_GetLetter(r6);
            void *r4 = _ZN10PlayerData8getIndexEv(PlayerData_GetCurrent());
            Letter_SetRecipientResident(r5, r4);
            Letter_MarkReceived(r5);
            if (LetterDelivery_PutInMailbox((Letter *)r5, (s32)r4, 0) != 0) ReceivedLetter_Clear(r6);
        }
    }
}

extern "C" void MotherLetter_OnNewDay(Unk_02096354_Arg *p, s32 n) {
    void *r6 = PlayerData_GetCurrent();
    void *r4;
    if (r6 == 0) return;
    if (n < 1) return;
    if (LetterDelivery_HasFreeOutgoingSlot() == 0) {
        if (LetterDelivery_IsMailboxFull(-1) == 1) return;
    }
    r4 = PlayerData_GetMotherLetterState(r6);
    MotherLetter_ResetOtherMonths((u8)p->month);
    if (_ZN17MotherLetterState13checkLastDateEPi(r4, p) != 0) return;
    if (MotherLetter_TrySendBirthday(p) != 0) {
        _ZN17MotherLetterState21setBirthdayLetterYearEj(r4, (u8)p->year);
        _ZN17MotherLetterState11setLastDateEPi(r4, p);
        return;
    }
    if (MotherLetter_TrySendHoliday(p) != 0) {
        _ZN17MotherLetterState11setLastDateEPi(r4, p);
        return;
    }
    if (Random_GlobalBelow(10) < 2) {
        if (MotherLetter_TrySendRandom(p) != 0) {
            _ZN17MotherLetterState11setLastDateEPi(r4, p);
            return;
        }
    }
    _ZN17MotherLetterState11setLastDateEPi(r4, p);
}

extern "C" s32 MotherLetter_TrySendBirthday(Unk_02096354_Arg *p) {
    void *r5 = PlayerData_GetCurrent();
    void *r6 = PlayerData_GetMotherLetterState(r5);
    u8 *q = _ZN12Unk_02097ff411getBirthdayEv(r5);
    if (*(u16 *)q == 0) return 0;
    if (p->year == _ZN17MotherLetterState21getBirthdayLetterYearEv(r6)) return 0;
    s32 r;
    Unk_02096484_Rec A;
    A.d5 = p->year;
    A.d4 = q[1];
    A.d3 = q[0];
    Unk_02096484_Rec B;
    B.d5 = p->year;
    B.d4 = p->month;
    B.d3 = p->day;
    Unk_02096484_Base C;
    MI_CpuCopy8(&A, &C, 8);
    DateTime_AddDays(&C, 7);
    r = 0;
    if (C.d5 != A.d5) {
        C.d5 = A.d5;
        if (DateTime_Compare(&B, &C, 0x38) == 1) {
            if (DateTime_Compare(&B, &A, 0x38) == -1) goto end;
        }
        r = 1;
    } else {
        if (DateTime_Compare(&B, &C, 0x38) == 1) goto end;
        if (DateTime_Compare(&B, &A, 0x38) == -1) goto end;
        r = 1;
    }
end:
    if (r) r = MotherLetter_SendRandomUnsent(0x20, 2, (u8)p->month, 1);
    return r;
}

extern "C" s32 MotherLetter_TrySendHoliday(Unk_02096354_Arg *p) {
    s32 c = p->day;
    s32 b = p->month;
    if (b == c) return MotherLetter_SendRandomUnsent(c * 2 - 2, 2, (u8)b, 1);
    if (b == 4 && c == 1) return MotherLetter_SendRandomUnsent(0x1c, 2, (u8)b, 1);
    if (b == 12 && c == 0x18) return MotherLetter_SendRandomUnsent(0x1e, 2, (u8)b, 1);
    if (b == 6) {
        if (p->day == Date_GetNthWeekdayDay((u8)p->year, (u8)b, 0, 3))
            return MotherLetter_SendRandomUnsent(0x1a, 2, (u8)p->month, 1);
    }
    if (p->month == 5) {
        if (p->day == Date_GetNthWeekdayDay((u8)p->year, (u8)p->month, 0, 2))
            return MotherLetter_SendRandomUnsent(0x18, 2, (u8)p->month, 1);
    }
    return 0;
}

extern "C" s32 MotherLetter_TrySendRandom(Unk_02096354_Arg *p) {
    s32 r6 = MotherLetter_GetMonthFirst((u8)p->month);
    s32 r7 = MotherLetter_GetMonthCount((u8)p->month);
    s32 r4 = MotherLetter_CountUnsent(r6, r7);
    if (r4 == r7) {
        return MotherLetter_SendRandomUnsent(r6, r7, (u8)p->month, 0);
    }
    if (Random_GlobalBelow(r4 + MotherLetter_CountUnsent(0x22, 0x38)) < r4) {
        return MotherLetter_SendRandomUnsent(r6, r7, (u8)p->month, 0);
    }
    return MotherLetter_SendRandomUnsent(0x22, 0x38, (u8)p->month, 1);
}

extern "C" u32 MotherLetter_GetMonthFirst(u8 v) { return sMotherMonthLetterFirst[v - 1] + 0x5a; }

extern "C" u8 MotherLetter_GetMonthCount(u8 v) { return sMotherMonthLetterCount[v - 1]; }

extern "C" void MotherLetter_ResetOtherMonths(s32 x) {
    s32 i;
    for (i = 1; i <= 12; i++) {
        if (i != x) {
            s32 t = MotherLetter_GetMonthFirst((u8)i);
            MotherLetter_ClearSent(t, MotherLetter_GetMonthCount((u8)i));
        }
    }
}

extern "C" s32 MotherLetter_CountUnsent(s32 a, s32 n) {
    void *g = PlayerData_GetMotherLetterState(PlayerData_GetCurrent());
    s32 cnt = 0, i = cnt;
    for (; i < n; a++, i++) {
        if (_ZN17MotherLetterState6isSentEi(g, a) == 0) cnt++;
    }
    return cnt;
}

extern "C" s32 MotherLetter_GetNthUnsent(s32 a, s32 n, s32 k) {
    void *g = PlayerData_GetMotherLetterState(PlayerData_GetCurrent());
    s32 cnt = 0, idx = a, i = cnt;
    for (; i < n; idx++, i++) {
        if (_ZN17MotherLetterState6isSentEi(g, idx) == 0) {
            if (cnt == k) return idx;
            cnt++;
        }
    }
    return a;
}

extern "C" void MotherLetter_ClearSent(s32 a, s32 n) {
    void *g = PlayerData_GetMotherLetterState(PlayerData_GetCurrent());
    s32 i;
    for (i = 0; i < n; a++, i++) _ZN17MotherLetterState9clearSentEi(g, a);
}

extern "C" s32 MotherLetter_SendRandomUnsent(s32 a, s32 b, s32 c, s32 d) {
    void *g;
    s32 v8, vc;
    s32 r7;
    g = PlayerData_GetMotherLetterState(PlayerData_GetCurrent());
    r7 = MotherLetter_CountUnsent(a, b);
    if (r7 == 0) {
        if (d == 0) return 0;
        r7 = b;
        MotherLetter_ClearSent(a, b);
        d = 0;
    }
    v8 = MotherLetter_GetNthUnsent(a, b, Random_GlobalBelow(r7));
    vc = MotherLetter_Send(v8, c);
    if (vc != 0) {
        if (r7 == 1 && d == 1) MotherLetter_ClearSent(a, b);
        else _ZN17MotherLetterState7setSentEi(g, v8);
    }
    return vc;
}

extern "C" s32 MotherLetter_Send(s32 a, s32 b) {
    u8 rec[3];
    u32 buf[0xf4 / 4];
    s32 r4;
    _ZN6LetterC1Ev(buf);
    Letter_Clear(buf);
    r4 = (s32)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
    rec[0] = gU8None[0];
    rec[0] = MotherLetter_GetMsgIndex(a);
    rec[1] = 1;
    if (a == 0x1a) rec[1] = 0x12;
    rec[2] = LetterPaper_PickRandom(3, b);
    Letter_ComposeFromMail(buf, rec, MotherLetter_GetFileName(a), rec + 1, rec + 2, (void *)r4);
    u32 t = MotherLetter_GetPresent(a);
    if (t != 0xfff1) _ZN10LetterView10setPresentEtj(buf, t, 1);
    if (LetterDelivery_PutInAddresseeMailbox((Letter *)buf)) {
        _ZN6LetterD1Ev(buf);
        return 1;
    }
    if (LetterDelivery_QueueOutgoing((Letter *)buf, 0)) {
        _ZN6LetterD1Ev(buf);
        return 1;
    }
    _ZN6LetterD1Ev(buf);
    return 0;
}

extern "C" u8 *MotherLetter_GetFileName(s32 a) {
    if (a >= 0 && a < 0x22) return (u8 *)"mother_day";
    if (a >= 0x22 && a < 0x5a) return (u8 *)"mother_always";
    return (u8 *)"mother_season";
}

extern "C" u16 MotherLetter_GetPresent(s32 code) {
    u16 buf[4];
    ItemPickSpec o1;
    ItemPickSpec o2;
    buf[0] = 0xfff1;
    switch (code) {
    case 0x23:
    case 0x32:
    case 0x5f:
    case 0x73:
        o1.set(2, 0);
        ItemPick_One(&buf[1], &o1, 0, 0, 1, 1, 0);
        buf[0] = buf[1];
        ItemPickSpec_Destruct(&o1);
        return buf[0];
    case 0x4a:
        ItemPick_FromRange(&buf[2], 0x1380, 0x20, 0, 0, 0, 1, 10, 0, 1);
        buf[0] = buf[2];
        return buf[0];
    case 0x1e:
    case 0x1f:
        o2.set(0, 0);
        ItemPick_One(&buf[3], &o2, 0, 0, 1, 1, 0);
        buf[0] = buf[3];
        ItemPickSpec_Destruct(&o2);
        return buf[0];
    case 0x25:
    case 0x37:
    case 0x38:
    case 0x51: {
        u16 r4 = Unk_02095f38_F(data_021ed150.unk_58);
        s32 n = Random_GlobalBelow(4);
        u32 j;
        for (j = 0; j < 5; j++) {
            u16 k = Unk_02095f38_F(j);
            if (k == r4) continue;
            if (n > 0) {
                n--;
            } else {
                return k;
            }
        }
        return 0x1518;
    }
    case 0x2e:
        return 0x149b;
    case 0:
    case 1:
        return 0x14a4;
    case 0x6e:
    case 0x6f:
        return 0x1542;
    case 0x72:
        return 0x1518;
    case 0x48:
        return 0x3648;
    case 0x47:
        return 0x3420;
    }
    return 0xfff1;
}

extern "C" u8 MotherLetter_GetMsgIndex(s32 x) {
    if (x >= 0 && x < 0x22) return x;
    if (x >= 0x22 && x < 0x5a) return x - 0x22;
    return x - 0x5a;
}

extern "C" s32 BottleLetter_Open() {
    void *r5 = Inventory_GetEmptyLetter();
    if (r5 == NULL) return FALSE;
    void *o = BottleLetterRecord_GetLetter(data_021eceac);
    if (!_ZN10LetterView8getStateEv(o)) {
        Letter_Clear(o);
        return TRUE;
    }
    void *t = PlayerData_GetCurrent();
    u16 buf = 0x1033;
    Catalog_SetItem(_ZN10PlayerData10getCatalogEv(t), &buf, 0, 1);
    Letter_Copy(r5, o);
    Letter_Clear(o);
    CommManager *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) && g->myAid != 0) CommSub_Send(7, 0);
    return TRUE;
}

extern "C" s32 BottleLetter_CreateGameLetter(u8 *p) {
    void *o = BottleLetterRecord_GetLetter(data_021eceac);
    if (_ZN10LetterView8getStateEv(o)) return FALSE;
    if (BottleLetter_PlaceBottle() == 0) return FALSE;
    Letter_ComposeBottleMail(o, p, (void *)"ev_bottle");
    return TRUE;
}

extern "C" s32 BottleLetter_PlaceBottle() {
    Town_GetUpdater();
    Town_WashUpBottle();
}

extern "C" s32 BottleLetter_IsBottleInTown() {
    Unk_02095dcc_Grid *g = TownBlockMap_Get();
    s32 y, x, hx, hy;
    u16 *c;
    for (y = 0; y < g->unitsZ; y++) {
        x = 0;
        goto test0;
    loop0:
        hx = x >> 4;
        hy = y >> 4;
        c = (u16 *)BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c) {
            if (Unk_02095dcc_R(c, 0x1520, 0x1520)) return TRUE;
        }
        x++;
        hy = y;
        y = hy;
    test0:
        if (x < g->unitsX) goto loop0;
    }
    return FALSE;
}

extern "C" void BottleLetter_OnNewDay(s32 a) {
    if (a > 0) {
        if (BottleLetter_IsBottleInTown() == 0) {
            void *const o = data_021eceac;
            if (_ZN10LetterView8getStateEv(BottleLetterRecord_GetLetter(o))) {
                BottleLetter_PlaceBottle();
            } else if (Random_GlobalBelow(10) == 7) {
                u8 v = gU8None[0];
                s32 r = _ZN18BottleLetterRecord17pickUnusedMessageEv(o);
                v = r;
                if (BottleLetter_CreateGameLetter(&v)) _ZN18BottleLetterRecord14setMessageUsedEi(o, r);
            }
        }
    }
}

extern "C" void BottleLetter_WashUpThrownBottle() {
    void *const o = data_021e7f8c;
    if (_ZN18TownExchangeRecord7isValidEv(o)) {
        void *r4 = TownExchange_GetLetter(o);
        if (_ZN10LetterView8getStateEv(r4)) {
            s32 t = _ZN18TownExchangeRecord10getUnkFlagEv(o);
            switch (t) {
            case 0: {
                s32 u = _ZN18TownExchangeRecord10getCounterEv(o);
                if (u == 0) return;
                if (u < 5) {
                    if (Random_GlobalBelow(sThrownBottleReturnOdds[u]) != 1) return;
                }
                break;
            }
            case 1:
                break;
            }
            _ZN18TownExchangeRecord12resetCounterEv(o);
            Letter_MarkSent(r4);
            Letter_Copy(BottleLetterRecord_GetLetter(data_021eceac), r4);
            Letter_Clear(r4);
            if (BottleLetter_IsBottleInTown() == 0) BottleLetter_PlaceBottle();
        }
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern u8 sMotherMonthLetterCount[0xc];
extern const u8 sWinterLetterPapers[0x4];
extern const s32 data_020d0428;
extern const u8 sSpringLetterPapers[0x4];
extern const u8 sAutumnLetterPapers[0x4];
extern const u8 sSummerLetterPapers[0x4];
extern const u8 sThrownBottleReturnOdds[0x8];
extern const u32 sSeasonLetterPaperCounts[4];
extern const u32 sPersonalityLetterPaperCounts[6];
extern const u8 sLetterPapersPersonality1[0x1c];
extern const u8 sLetterPapersPersonality2[0x20];
extern const u8 sLetterPapersPersonality4[0x24];
extern const u8 sLetterPapersPersonality0[0x24];
extern const u8 sLetterPapersPersonality3[0x24];
extern const u8 sLetterPapersPersonality5[0x24];
extern u8 sMotherMonthLetterFirst[0xc];
extern const u8 *sSeasonLetterPapers[4];
extern const u8 *sPersonalityLetterPapers[6];

u8 sMotherMonthLetterCount[0xc] = {0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x08, 0x02, 0x02, 0x02, 0x02};

// 0x020d0428: first .rodata object of this file; read by the previous unit (0x02095130, src/main/unk_02094810.cpp)
const s32 data_020d0428 = 0x2000;

const u8 sSpringLetterPapers[0x4] = {0x00, 0x05, 0x1b, 0x00};

const u8 sAutumnLetterPapers[0x4] = {0x07, 0x2d, 0x00, 0x00};

const u8 sSummerLetterPapers[0x4] = {0x00, 0x04, 0x1b, 0x2b};

const u8 sThrownBottleReturnOdds[0x8] = {0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00};

const u32 sSeasonLetterPaperCounts[4] = {0x3, 0x4, 0x2, 0x2};

const u8 sWinterLetterPapers[0x4] = {0x06, 0x0e, 0x00, 0x00};

const u32 sPersonalityLetterPaperCounts[6] = {0x22, 0x1b, 0x1d, 0x23, 0x22, 0x24};

const u8 sLetterPapersPersonality1[0x1c] = {0x08, 0x09, 0x0f, 0x13, 0x14, 0x15, 0x16, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x38, 0x39, 0x3b, 0x3c, 0x3f, 0x00};

const u8 sLetterPapersPersonality2[0x20] = {0x08, 0x09, 0x0f, 0x12, 0x13, 0x14, 0x15, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2e, 0x30, 0x31, 0x33, 0x34, 0x36, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x00, 0x00};

const u8 sLetterPapersPersonality4[0x24] = {0x08, 0x09, 0x0a, 0x0b, 0x0d, 0x0f, 0x14, 0x17, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x3b, 0x3c, 0x3d, 0x3f, 0x00, 0x00};

const u8 sLetterPapersPersonality0[0x24] = {0x08, 0x09, 0x0b, 0x0d, 0x0f, 0x14, 0x15, 0x16, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x00};

const u8 sLetterPapersPersonality3[0x24] = {0x08, 0x09, 0x0a, 0x0b, 0x0d, 0x03, 0x0f, 0x14, 0x17, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2c, 0x2e, 0x2f, 0x30, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x3a, 0x3c, 0x3d, 0x3e, 0x3f, 0x00};

const u8 sLetterPapersPersonality5[0x24] = {0x08, 0x09, 0x0a, 0x0d, 0x03, 0x0f, 0x12, 0x13, 0x17, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x3a, 0x3c, 0x3d, 0x3e, 0x3f};

u8 sMotherMonthLetterFirst[0xc] = {0x1a, 0x1c, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0a, 0x12, 0x14, 0x16, 0x18};

const u8 *sSeasonLetterPapers[4] = {sSpringLetterPapers, sSummerLetterPapers, sAutumnLetterPapers, sWinterLetterPapers};

const u8 *sPersonalityLetterPapers[6] = {sLetterPapersPersonality0, sLetterPapersPersonality1, sLetterPapersPersonality2, sLetterPapersPersonality3, sLetterPapersPersonality4, sLetterPapersPersonality5};
