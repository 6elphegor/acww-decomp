#include "types.h"
#include "Unk_020d8c7c.h"
#include "save/MotherLetterState.h"
#include "item/Letter.h"
#include "item/PlayerMailbox.h"
#include "item/LetterStorage.h"
#include "item/LetterOutbox.h"
#include "item/FutureLetter.h"
#include "item/BottleLetterRecord.h"








// Vtable at 0x020e1db0.
class LetterDeliveryProc : public GameProc {
public:
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void clearProcFlag(u32 mask);
    void setProcFlag(u32 mask);
    BOOL testProcFlag(u32 mask);
    void deliverLetters();

    /* 0x50 */ u16 deliveryFlags;
    /* 0x52 */ u16 pad_52;
};

extern "C" {
void LetterDelivery_Update(void *);
s32 Scene_AllowsLetterDelivery(void);
s32 Random_GlobalBelow(s32);
void Letter_Clear(void *);
void _ZN6LetterD1Ev(void *);
void _ZN6LetterC1Ev(void *);
}

PlayerMailbox::PlayerMailbox() {}

PlayerMailbox::~PlayerMailbox() {}

Letter *PlayerMailbox::getLetter(s32 i) {
    if (i >= 0 && i < 10) {
        return &unk_00[i];
    }
    return NULL;
}

void PlayerMailbox::clear() {
    s32 i;
    for (i = 0; i < 10; i++) {
        Letter_Clear(&unk_00[i]);
    }
    lastWifiMailId = 0;
}

u32 PlayerMailbox::getLastWifiMailId() {
    return lastWifiMailId;
}

void PlayerMailbox::setLastWifiMailId(u32 v) {
    lastWifiMailId = v;
}

LetterOutbox::LetterOutbox() {}

LetterOutbox::~LetterOutbox() {}

Letter *LetterOutbox::getLetter(s32 i) {
    if (i >= 0 && i < 10) {
        return &unk_00[i];
    }
    return NULL;
}

void LetterOutbox::clear() {
    s32 i;
    for (i = 0; i < 10; i++) {
        Letter_Clear(&unk_00[i]);
    }
    flags = 0;
    lastDeliveryDay = 1;
    lastDeliveryMonth = 1;
    lastDeliveryYear = 0;
    lastDeliveryHour = 0;
}

u8 *LetterOutbox::getLastDeliveryTime() {
    return &lastDeliveryDay;
}

void LetterOutbox::setFlag(u32 mask) {
    flags = flags | mask;
}

BOOL LetterOutbox::testFlag(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

Letter *LetterStorage::getPage(s32 i) {
    if (i >= 0 && i < 3) {
        return &letters[i * 25];
    }
    return NULL;
}

void LetterStorage::clear() {
    s32 i;
    for (i = 0; i < 75; i++) {
        Letter_Clear(&letters[i]);
    }
}

extern "C" Letter *BottleLetterRecord_Construct(Letter *p) {
    _ZN6LetterC1Ev(p);
    return p;
}

extern "C" Letter *BottleLetterRecord_Destruct(Letter *p) {
    _ZN6LetterD1Ev(p);
    return p;
}

extern "C" void BottleLetterRecord_GetLetter() {}

void BottleLetterRecord::clearRecord() {
    Letter_Clear(this);
    clearUsedMessages();
}

void BottleLetterRecord::setMessageUsed(s32 i) {
    u8 *p = unk_f4;
    s32 k = i >> 3;
    p[k] |= (1 << (i & 7));
}

BOOL BottleLetterRecord::isMessageUsed(s32 i) {
    BOOL r = TRUE;
    if (((r << (i & 7)) & unk_f4[i >> 3]) == 0) {
        r = FALSE;
    }
    return r;
}

void BottleLetterRecord::clearUsedMessages() {
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_f4[i] = 0;
    }
}

s32 BottleLetterRecord::pickUnusedMessage() {
    s32 i;
    s32 cnt = 0;
    i = cnt;
    for (; i < 0x28; i++) {
        if (isMessageUsed(i) == 0) {
            cnt++;
        }
    }
    if (cnt == 0) {
        clearUsedMessages();
        cnt = 0x28;
    }
    s32 r = Random_GlobalBelow(cnt);
    for (cnt = 0; cnt < 0x28; cnt++) {
        if (isMessageUsed(cnt) == 0) {
            if (r > 0) {
                r--;
            } else {
                return cnt;
            }
        }
    }
    return 0;
}

extern "C" Letter *FutureLetter_Construct(Letter *p) {
    _ZN6LetterC1Ev(p);
    return p;
}

extern "C" Letter *FutureLetter_Destruct(Letter *p) {
    _ZN6LetterD1Ev(p);
    return p;
}

extern "C" void FutureLetter_GetLetter() {}

u8 *FutureLetter::getDeliveryDate() {
    return &deliveryDay;
}

void FutureLetter::clearFutureLetter() {
    Letter_Clear(this);
    deliveryDay = 1;
    deliveryMonth = 1;
    deliveryYear = 0;
    unk_f7 = 0;
}

extern "C" void func_02096e24() {}

extern "C" void func_02096e20() {}

void MotherLetterState::clear() {
    s32 i;
    lastDay = 1;
    lastMonth = 1;
    lastYear = 0;
    birthdayYearFlags = 0;
    for (i = 0; i < 15; i++) {
        unk_04[i] = 0;
    }
    birthdayYearFlags = 100;
}

BOOL MotherLetterState::checkLastDate(s32 *v) {
    if (testFlag(0x80)) {
        if (lastYear == v[0] && lastMonth == v[1] && lastDay == v[2]) {
            return TRUE;
        }
        return FALSE;
    }
    setLastDate(v);
    return TRUE;
}

void MotherLetterState::setLastDate(s32 *v) {
    lastYear = v[0];
    lastMonth = v[1];
    lastDay = v[2];
    setFlag(0x80);
}

void MotherLetterState::setFlag(u32 mask) {
    birthdayYearFlags = birthdayYearFlags | mask;
}

BOOL MotherLetterState::testFlag(u32 mask) {
    if (birthdayYearFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void MotherLetterState::setSent(s32 i) {
    u8 *p = unk_04;
    s32 k = i >> 3;
    p[k] |= (1 << (i & 7));
}

void MotherLetterState::clearSent(s32 i) {
    u8 *p = unk_04;
    s32 k = i >> 3;
    p[k] &= ~(1 << (i & 7));
}

BOOL MotherLetterState::isSent(s32 i) {
    BOOL r = TRUE;
    if (((r << (i & 7)) & unk_04[i >> 3]) == 0) {
        r = FALSE;
    }
    return r;
}

u8 MotherLetterState::getBirthdayLetterYear() {
    return birthdayYearFlags & 0x7f;
}

void MotherLetterState::setBirthdayLetterYear(u32 v) {
    birthdayYearFlags = v | (birthdayYearFlags & 0x80);
}

extern "C" LetterDeliveryProc *LetterDeliveryProc_Create() {
    return new LetterDeliveryProc();
}

BOOL LetterDeliveryProc::onCreate() {
    deliveryFlags = 0;
    setProcFlag(1);
    return TRUE;
}

BOOL LetterDeliveryProc::onExecute() {
    if (testProcFlag(1)) {
        if (Scene_AllowsLetterDelivery()) {
            deliverLetters();
        }
        clearProcFlag(1);
    }
    return TRUE;
}

BOOL LetterDeliveryProc::onDraw() {
    return TRUE;
}

BOOL LetterDeliveryProc::onDelete() {
    return TRUE;
}

void LetterDeliveryProc::deliverLetters() {
    LetterDelivery_Update(this);
}

BOOL LetterDeliveryProc::testProcFlag(u32 mask) {
    if (deliveryFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void LetterDeliveryProc::setProcFlag(u32 mask) {
    deliveryFlags = deliveryFlags | mask;
}

void LetterDeliveryProc::clearProcFlag(u32 mask) {
    deliveryFlags = deliveryFlags & ~mask;
}

