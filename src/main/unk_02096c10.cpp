#include "types.h"
#include "Unk_020d8c7c.h"

class Letter {
public:
    Letter();
    virtual ~Letter();

    u8 func_02065578();
    u32 func_02065588(u32 v, u32 w);
    void Letter_MarkSent();
    void Letter_Copy(Letter *src);

    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 unk_f0;
    /* 0xf2 */ u16 pad_f2;
};

// Array of ten elements, indexed table getter at 0x02097020.
class LetterOutbox {
public:
    LetterOutbox();
    ~LetterOutbox();
    Letter *getLetter(s32 i);
    void clear();
    BOOL testFlag(u32 mask);
    void setFlag(u32 mask);
    u8 *getLastDeliveryTime();

    /* 0x000 */ Letter unk_00[10];
    /* 0x988 */ u8 unk_988;
    /* 0x989 */ u8 unk_989;
    /* 0x98a */ u8 unk_98a;
    /* 0x98b */ u8 unk_98b;
    /* 0x98c */ u16 unk_98c;
    /* 0x98e */ u16 pad_98e;
};

class PlayerMailbox {
public:
    PlayerMailbox();
    ~PlayerMailbox();
    Letter *getLetter(s32 i);
    void setLastWifiMailId(u32 v);
    u32 getLastWifiMailId();
    void clear();

    /* 0x000 */ Letter unk_00[10];
    /* 0x988 */ u16 unk_988;
    /* 0x98a */ u16 pad_98a;
};

class MotherLetterState {
public:
    void setBirthdayLetterYear(u32 v);
    u8 getBirthdayLetterYear();
    BOOL isSent(s32 i);
    void clearSent(s32 i);
    void setSent(s32 i);
    BOOL testFlag(u32 mask);
    void setFlag(u32 mask);
    void setLastDate(s32 *v);
    BOOL checkLastDate(s32 *v);
    void clear();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04[15];
    /* 0x13 */ u8 pad_13;
};

class FutureLetter : public Letter {
public:
    void clearFutureLetter();
    u8 *getDeliveryDate();

    /* 0xf4 */ u8 unk_f4;
    /* 0xf5 */ u8 unk_f5;
    /* 0xf6 */ u8 unk_f6;
    /* 0xf7 */ u8 unk_f7;
};

class BottleLetterRecord : public Letter {
public:
    s32 pickUnusedMessage();
    void clearUsedMessages();
    BOOL isMessageUsed(s32 i);
    void setMessageUsed(s32 i);
    void clearRecord();

    /* 0xf4 */ u8 unk_f4[5];
};

class LetterStorage {
public:
    void clear();
    Letter *getPage(s32 i);

    /* 0x000 */ Letter unk_00[75];
};

// Vtable at 0x020e1db0.
class LetterDeliveryProc : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void clearProcFlag(u32 mask);
    void setProcFlag(u32 mask);
    BOOL testProcFlag(u32 mask);
    void deliverLetters();

    /* 0x50 */ u16 unk_50;
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
    unk_988 = 0;
}

u32 PlayerMailbox::getLastWifiMailId() {
    return unk_988;
}

void PlayerMailbox::setLastWifiMailId(u32 v) {
    unk_988 = v;
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
    unk_98c = 0;
    unk_988 = 1;
    unk_989 = 1;
    unk_98a = 0;
    unk_98b = 0;
}

u8 *LetterOutbox::getLastDeliveryTime() {
    return &unk_988;
}

void LetterOutbox::setFlag(u32 mask) {
    unk_98c = unk_98c | mask;
}

BOOL LetterOutbox::testFlag(u32 mask) {
    if (unk_98c & mask) {
        return TRUE;
    }
    return FALSE;
}

Letter *LetterStorage::getPage(s32 i) {
    if (i >= 0 && i < 3) {
        return &unk_00[i * 25];
    }
    return NULL;
}

void LetterStorage::clear() {
    s32 i;
    for (i = 0; i < 75; i++) {
        Letter_Clear(&unk_00[i]);
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
    return &unk_f4;
}

void FutureLetter::clearFutureLetter() {
    Letter_Clear(this);
    unk_f4 = 1;
    unk_f5 = 1;
    unk_f6 = 0;
    unk_f7 = 0;
}

extern "C" void func_02096e24() {}

extern "C" void func_02096e20() {}

void MotherLetterState::clear() {
    s32 i;
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
    for (i = 0; i < 15; i++) {
        unk_04[i] = 0;
    }
    unk_03 = 100;
}

BOOL MotherLetterState::checkLastDate(s32 *v) {
    if (testFlag(0x80)) {
        if (unk_02 == v[0] && unk_01 == v[1] && unk_00 == v[2]) {
            return TRUE;
        }
        return FALSE;
    }
    setLastDate(v);
    return TRUE;
}

void MotherLetterState::setLastDate(s32 *v) {
    unk_02 = v[0];
    unk_01 = v[1];
    unk_00 = v[2];
    setFlag(0x80);
}

void MotherLetterState::setFlag(u32 mask) {
    unk_03 = unk_03 | mask;
}

BOOL MotherLetterState::testFlag(u32 mask) {
    if (unk_03 & mask) {
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
    return unk_03 & 0x7f;
}

void MotherLetterState::setBirthdayLetterYear(u32 v) {
    unk_03 = v | (unk_03 & 0x80);
}

extern "C" LetterDeliveryProc *LetterDeliveryProc_Create() {
    return new LetterDeliveryProc();
}

BOOL LetterDeliveryProc::vfunc_00() {
    unk_50 = 0;
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

BOOL LetterDeliveryProc::vfunc_0c() {
    return TRUE;
}

void LetterDeliveryProc::deliverLetters() {
    LetterDelivery_Update(this);
}

BOOL LetterDeliveryProc::testProcFlag(u32 mask) {
    if (unk_50 & mask) {
        return TRUE;
    }
    return FALSE;
}

void LetterDeliveryProc::setProcFlag(u32 mask) {
    unk_50 = unk_50 | mask;
}

void LetterDeliveryProc::clearProcFlag(u32 mask) {
    unk_50 = unk_50 & ~mask;
}

