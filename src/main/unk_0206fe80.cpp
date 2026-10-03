#include "types.h"

struct Unk_020dd38c {
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    u32 pad[6];
};
struct Letter {
    Letter();
    virtual ~Letter();
    u8 d[0xf0];
};

extern u32 data_020e0498;
extern u32 data_020e049c;

extern "C" {
extern u8 gSavePlayers[];
extern u16 gSaveTownId[];
extern u8 gSaveData[];
extern u32 sAblePatternTexKeys[];
extern u32 sPlayerPatternTexKeys[8][8];
extern u8 *sAblePatternTexWork;
extern u8 *sAblePatternVramTasks;
extern u8 *sPlayerPatternTexWork;
extern u8 *sPlayerPatternVramTasks;
extern u8 gSaveAbleSistersPatterns[];
extern u8 gSaveGameStats[];
extern u8 gSaveVillagers[];
extern u8 gSaveTownFlag[];
extern s32 (*sPatternSourceGetters[])(s32);

s32 FX_Div(s32 a, s32 b);
void *PlayerData_GetResident(void *a, s32 i);
s32 _ZN10PlayerData11getPlayerIdEv(void *p);
void _ZN8PlayerId13func_020940d0EP9MsgString(s32 a, s32 b);
s32 PlayerData_GetCurrentIndex();
s32 func_020978fc(s32 t);
void Clock_GetDateTime(void *p);
s32 _ZN8SaveData8testFlagEj(void *p, s32 i);
void _ZN8SaveData7setFlagEj(void *p, s32 i);
s32 _ZN10PlayerData13func_02098a48Ev(void *p);
s32 LetterDelivery_PutInAddresseeMailbox(void *p);
void func_020638d0(void *a, void *b);
void MailText_SetSlot(s32 i, void *p);
void _ZN12Unk_0206555410setPresentEtj(void *p, u32 a, s32 b);
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, s32 f);
void PatternSrc_Swap(u32 a, u8 b, u32 c, u8 d, s32 e);
void PatternSrc_Copy(u32 a, u8 b, u32 c, u8 d, s32 e);
s32 func_02071b00(void *p, s32 i);
void func_0203c6f8(void *p, s32 v);
s32 func_0203c6c8(void *p);
void func_02056e88(void *a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void *func_020986d4(void *p);
void *func_02071c88(void *p, s32 i);
void *PlayerData_GetCurrent();
s32 func_02087298(void *p);
s32 PresetPatternBuffer_Get();
s32 func_020718e8(s32 t, s32 x);
s32 func_020718e4(s32 t);
void *SaveVillagers_Get(void *a, s32 x);
s32 func_020805b8(void *p);
s32 func_020b23a0(void *p);
void func_020b249c(s32 p);
}

struct Unk_020702ec_Date {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};
struct Unk_0206fe80_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
};

class MuseumData {
public:
    s32 getDonationPercent();
    BOOL isFishComplete();
    BOOL isPaintingsComplete();
    BOOL isFossilsComplete();
    BOOL isInsectsComplete();
    BOOL isComplete();
    BOOL getDonorName(s32 x, u16 *id);
    void releasePlayerDonations(u32 v);
    void donate(u16 *id);
    BOOL sendCompletionLetters();
    void checkCompletionLetters();
    BOOL isDonated(u16 *id);
    u32 getDonationState(u16 *id);
    u32 getDonor(u16 *id);
    u8 *getEntry(u16 *id, s32 *out);
    void markFormerResident(u16 *id);
    void clearEntry(u16 *id);
    void clear();
    void func_0207054c();
    MuseumData *func_02070550();

    u8 unk_00[0x1b];
    u8 unk_1b[0x1d];
    u8 unk_38[0x1d];
    u8 unk_55[0xb];
    u8 unk_60;
    u8 unk_61;
    u8 unk_62;
    u8 unk_63;
};

static inline BOOL Unk_020703d8_R(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

MuseumData *MuseumData::func_02070550() {
    clear();
    return this;
}

void MuseumData::func_0207054c() {}

void MuseumData::clear() {
    u32 i;
    for (i = 0; i < 0x1b; i++) unk_00[i] = 0;
    for (i = 0; i < 0x1d; i++) unk_1b[i] = 0;
    for (i = 0; i < 0x1d; i++) unk_38[i] = 0;
    for (i = 0; i < 0xb; i++) unk_55[i] = 0;
}

void MuseumData::clearEntry(u16 *id) {
    s32 idx;
    u8 *p = getEntry(id, &idx);
    if (p) {
        p[idx >> 1] &= ~(0xf << ((idx & 1) * 4));
    }
}

void MuseumData::markFormerResident(u16 *id) {
    s32 idx;
    u8 *p = getEntry(id, &idx);
    if (p) {
        s32 s = (idx & 1) * 4;
        s32 h = idx >> 1;
        p[h] &= ~(0xf << s);
        p[h] |= 5 << s;
    }
}

u8 *MuseumData::getEntry(u16 *id, s32 *out) {
    BOOL in = FALSE;
    u16 v = *id;
    if (v >= 0x450c && v <= 0x45db) in = TRUE;
    if (in) {
        if (out) *out = (v >= 0x450c && v <= 0x45db) ? (v - 0x450c) >> 2 : -1;
        return (u8 *)this;
    }
    if (v >= 0x3894 && v <= 0x38e3) {
        if (out) *out = (v >= 0x3894 && v <= 0x38e3) ? (v - 0x3894) >> 2 : -1;
        return (u8 *)this + 0x55;
    }
    if (v >= 0x12b0 && v <= 0x12e7) {
        if (out) *out = (v >= 0x12b0 && v <= 0x12e7) ? v - 0x12b0 : -1;
        return (u8 *)this + 0x38;
    }
    if (v >= 0x12e8 && v <= 0x131f) {
        if (out) *out = (v >= 0x12e8 && v <= 0x131f) ? v - 0x12e8 : -1;
        return (u8 *)this + 0x1b;
    }
    return 0;
}

u32 MuseumData::getDonor(u16 *id) {
    s32 idx;
    u8 *p = getEntry(id, &idx);
    if (p) return (p[idx >> 1] >> ((idx & 1) * 4)) & 0xf;
    return 0;
}

u32 MuseumData::getDonationState(u16 *id) {
    u32 v = getDonor(id);
    if (v == 0) return 3;
    if (v == 5) return 2;
    s32 t = PlayerData_GetCurrentIndex();
    if (func_020978fc(t) == 1 && v == t + 1) return 0;
    return 1;
}

BOOL MuseumData::isDonated(u16 *id) {
    if (getDonor(id)) return TRUE;
    return FALSE;
}

void MuseumData::checkCompletionLetters() {
    if (_ZN8SaveData8testFlagEj(gSaveData, 3) == 0) {
        if (isComplete()) {
            Unk_020702ec_Date t;
            ((u32 *)&t)[0] = 0;
            ((u32 *)&t)[1] = 0;
            Clock_GetDateTime(&t);
            if (unk_62 != t.b5 || unk_61 != t.b4 || unk_60 != t.b3) {
                if (sendCompletionLetters()) _ZN8SaveData7setFlagEj(gSaveData, 3);
            }
        }
    }
}

BOOL MuseumData::sendCompletionLetters() {
    Unk_020dd38c str;
    func_020638d0(gSaveTownId, &str);
    MailText_SetSlot(2, &str);
    BOOL r = FALSE;
    s32 i = 0;
    u8 b;
    for (; i < 4; i++) {
        void *p = PlayerData_GetResident(gSavePlayers, i);
        if (p && _ZN10PlayerData13func_02098a48Ev(p)) {
            Letter big;
            b = 0;
            Letter_ComposeFromMail(&big, &b, "sp_npc_owl", &data_020e0498, &data_020e049c, _ZN10PlayerData11getPlayerIdEv(p));
            _ZN12Unk_0206555410setPresentEtj(&big, 0x3870, 1);
            if (LetterDelivery_PutInAddresseeMailbox(&big)) r = TRUE;
        }
    }
    return r;
}

void MuseumData::donate(u16 *id) {
    s32 idx;
    u32 t[2];
    clearEntry(id);
    u8 *p = getEntry(id, &idx);
    if (p) {
        u32 e = PlayerData_GetCurrentIndex() & 3;
        p[idx >> 1] |= (e + 1) << ((idx & 1) * 4);
    }
    if (isComplete()) {
        t[0] = 0;
        t[1] = 0;
        Clock_GetDateTime(t);
        unk_62 = ((u8 *)t)[5];
        unk_61 = ((u8 *)t)[4];
        unk_60 = ((u8 *)t)[3];
        unk_63 = 0;
    }
}

void MuseumData::releasePlayerDonations(u32 v) {
    u16 l[4];
    u32 i = 0;
    u32 k = (v & 3) + 1;
    for (; i < 0x34; i++) {
        l[0] = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (k == getDonor(&l[0])) markFormerResident(&l[0]);
    }
    for (i = 0; i < 0x38; i++) {
        l[1] = i < 0x38 ? (u16)(0x12e8 + i) : 0x12e8;
        if (k == getDonor(&l[1])) markFormerResident(&l[1]);
    }
    for (i = 0; i < 0x38; i++) {
        l[2] = i < 0x38 ? (u16)(0x12b0 + i) : 0x12b0;
        if (k == getDonor(&l[2])) markFormerResident(&l[2]);
    }
    for (i = 0; i < 0x14; i++) {
        l[3] = i < 0x14 ? 0x3894 + i * 4 : 0x3894;
        if (k == getDonor(&l[3])) markFormerResident(&l[3]);
    }
}

BOOL MuseumData::getDonorName(s32 x, u16 *id) {
    if (getDonationState(id) <= 1) {
        s32 q = (getDonor(id) - 1) & 3;
        void *p = PlayerData_GetResident(gSavePlayers, q);
        if (p) {
            _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(p), x);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL MuseumData::isComplete() {
    if (!isPaintingsComplete()) return FALSE;
    if (!isFishComplete()) return FALSE;
    if (!isInsectsComplete()) return FALSE;
    if (isFossilsComplete()) return TRUE;
    return FALSE;
}

BOOL MuseumData::isInsectsComplete() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x38; i++) {
        v = (u32)i < 0x38 ? (u16)(0x12b0 + i) : 0x12b0;
        if (!isDonated(&v)) return FALSE;
    }
    return TRUE;
}

BOOL MuseumData::isFossilsComplete() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x34; i++) {
        v = (u32)i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (!isDonated(&v)) return FALSE;
    }
    return TRUE;
}

BOOL MuseumData::isPaintingsComplete() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x14; i++) {
        v = (u32)i < 0x14 ? 0x3894 + i * 4 : 0x3894;
        if (!isDonated(&v)) return FALSE;
    }
    return TRUE;
}

BOOL MuseumData::isFishComplete() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x38; i++) {
        v = (u32)i < 0x38 ? (u16)(0x12e8 + i) : 0x12e8;
        if (!isDonated(&v)) return FALSE;
    }
    return TRUE;
}

s32 MuseumData::getDonationPercent() {
    u16 l[4];
    s32 cnt = 0;
    u32 i;
    for (i = 0; i < 0x14; i++) {
        l[0] = i < 0x14 ? 0x3894 + i * 4 : 0x3894;
        if (isDonated(&l[0])) cnt++;
    }
    for (i = 0; i < 0x38; i++) {
        l[1] = i < 0x38 ? (u16)(0x12e8 + i) : 0x12e8;
        if (isDonated(&l[1])) cnt++;
    }
    for (i = 0; i < 0x38; i++) {
        l[2] = i < 0x38 ? (u16)(0x12b0 + i) : 0x12b0;
        if (isDonated(&l[2])) cnt++;
    }
    for (i = 0; i < 0x34; i++) {
        l[3] = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (isDonated(&l[3])) cnt++;
    }
    return FX_Div((cnt * 100) << 12, 0xb8000);
}

u32 data_020e0498 = 4;
u32 data_020e049c = 0x10;
