#include "types.h"
#include "talk/EncodedString.h"


class EncodedString128 : public EncodedString {
public:
    EncodedString128();
    virtual ~EncodedString128();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x82];
};

class Letter {
public:
    Letter();
    virtual ~Letter();

    /* 0x04 */ u8 unk_04[0x12];
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 pad_17;
};

// Classes of other units (constructed by this unit's __sinit).
class MsgString25B {
public:
    MsgString25B();
    virtual ~MsgString25B();
    /* 0x04 */ u8 unk_04[0x28];
};

class MsgString33B {
public:
    MsgString33B();
    virtual ~MsgString33B();
    /* 0x04 */ u8 unk_04[0x30];
};

class MsgString129 {
public:
    MsgString129();
    virtual ~MsgString129();
    /* 0x04 */ u8 unk_04[0x90];
};

// Object with the byte/halfword state accessed by func_02065554 and friends.
class LetterView {
public:
    void loadDefaultGreeting();
    BOOL isToFutureSelf();
    void setState(u32 v);
    u8 getState();
    u32 setPresent(u16 v, u32 w);
    void setPresentFlags(u32 v);
    u8 getPresentFlags();
    u16 getPresent();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Letter recipient;
    /* 0x1c */ Letter sender;
    /* 0x34 */ u8 greeting[0x18];
    /* 0x4c */ u8 body[0x80];
    /* 0xcc */ u8 signature[0x20];
    /* 0xec */ u8 namePos;
    /* 0xed */ u8 paper;
    /* 0xee */ u8 status;
    /* 0xef */ u8 kind;
    /* 0xf0 */ u16 present;
    /* 0xf2 */ u16 pad_f2;
};

// Object filled by LetterDefaults_Init (0x52 bytes).
struct LetterDefaults {
    /* 0x00 */ u8 greeting[0x18];
    /* 0x18 */ u8 futureSelfGreeting[0x18];
    /* 0x30 */ u8 signature[0x20];
    /* 0x50 */ u8 greetingNamePos;
    /* 0x51 */ u8 futureSelfNamePos;
};

struct Unk_020653cc_Buf {
    /* 0x00 */ u32 unk_00[3];
    /* 0x0c */ u8 unk_0c[2];
    /* 0x0e */ u8 text[0x2e];
};

extern "C" {
void VillagerId_Construct(void *);
void VillagerId_Destruct(void *);
void _ZN8PlayerIdC1EPv(void *);
void _ZN8PlayerIdC1Ev(void *);
void _ZN11MsgString9BC1Ev(void *);
void _ZN11MsgString9BD1Ev(void *);
void _ZN14EncodedString8C1Ev(void *);
void _ZN14EncodedString8D1Ev(void *);
void _ZN11LabelStringC1Ev(void *);
void _ZN11LabelStringD1Ev(void *);
void _ZN15EncodedString41C1Ev(void *);
void _ZN15EncodedString41D1Ev(void *);
}

struct Unk_02065d5c_Str {
    u32 v[3];
    Unk_02065d5c_Str() { VillagerId_Construct(this); }
    ~Unk_02065d5c_Str() { VillagerId_Destruct(this); }
};
struct Unk_02065d5c_Buf18 {
    u32 v[6];
    Unk_02065d5c_Buf18() { _ZN8PlayerIdC1EPv(this); }
    ~Unk_02065d5c_Buf18() { _ZN8PlayerIdC1Ev(this); }
};
struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c() { _ZN11MsgString9BC1Ev(this); }
    ~Unk_02065dc8_Obj1c() { _ZN11MsgString9BD1Ev(this); }
};
struct Unk_02065dc8_Obj18 {
    u32 v[6];
    Unk_02065dc8_Obj18() { _ZN14EncodedString8C1Ev(this); }
    ~Unk_02065dc8_Obj18() { _ZN14EncodedString8D1Ev(this); }
};
struct Unk_02065dc8_Obj44 {
    u32 v[0x11];
    Unk_02065dc8_Obj44() { _ZN11LabelStringC1Ev(this); }
    ~Unk_02065dc8_Obj44() { _ZN11LabelStringD1Ev(this); }
};
struct Unk_02065a1c_Str {
    u8 pad[0xe];
    char text[0x2a];
    Unk_02065a1c_Str() { _ZN15EncodedString41C1Ev(this); }
    ~Unk_02065a1c_Str() { _ZN15EncodedString41D1Ev(this); }
};

extern MsgString25B sMailGreeting;
extern MsgString129 sMailBody;
extern MsgString33B sMailSignature;
extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];

extern "C" {
void *MI_CpuFill8(void *dst, u32 v, u32 n);
void *MI_CpuCopy8(const void *src, void *dst, u32 n);
void Mem_Copy(const void *src, void *dst, u32 n);
void Mem_Clear(void *p, s32 n);
s32 Text_GetLineEnd(void *p, s32 n, s32 z);
s32 Text_GetLength(void *p, s32 n);
s32 MailText_LoadLetter(void *a, void *b, void *c, void *d, void *e, void *f);
s32 MailText_LoadLetterZ(void *a, void *b, void *c, void *d, void *e1, void *e2, void *e3, void *e4, void *name);
void MailText_SetSlot(s32 i, void *x);
void _ZN10VillagerId7getNameEj(void *o, void *x);
void VillagerId_CopyFrom(void *o, void *x);
void _ZN8PlayerId8copyFromEPS_(void *o, void *x);
void _ZN8PlayerId13getNameStringEP9MsgString(void *o, void *x);
void _ZN8PlayerId6copyToEPS_(void *src, void *dst);
void VillagerId_CopyTo(void *src, void *dst);
void VillagerId_Copy(void *o, void *x);
void _ZN13EncodedString13fromMsgStringEP9MsgString(void *o, void *x);
void _ZN14EncodedString86copyToEPvj(void *o, void *x, u32 n);
void _ZN8PlayerId6setRawEPv(void *o, void *x);
void String_Load2dMenu(void *o, u32 x);
void String_ToEncodedBytes(void *o, void *x);
void StrBuf_ClearAlt(void *o);
void String_Load2d(void *dst, void *code, void *z);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *);
void *_ZN10PlayerData12getInventoryEv(void *);
u8 *_ZN15PlayerInventory9getUnk988Ev(void *);
void *PlayerData_GetResident(void *);
void *SaveVillagers_Get(void *);
void *_ZN12VillagerData13getVillagerIdEv(void *);

void LetterDefaults_Init(LetterDefaults *o);
void Letter_LoadTemplate2d(u8 *code, u8 *dst, u8 *lenOut, u8 *extra);
void LetterDefaults_Store(LetterDefaults *a, LetterView *b);
void Letter_SetSignature(LetterView *o, u8 *p);
u32 Letter_IsBottle(LetterView *self);
void Letter_GetSenderNameBytes(LetterView *self, void *out);
void Letter_SetTexts(LetterView *self, s32 *pv, void *a, void *b, void *c);
void Letter_FillBottleMail(LetterView *self, void *a, void *b, void *c, s32 v);
void Letter_FillSystemMail(LetterView *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj);
void Letter_FillVillagerToVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void Letter_FillFromVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void Letter_Clear(LetterView *self);
void Letter_InitDraft(LetterView *self, u32 v);
u32 LetterParty_IsType(Letter *self, u32 t);
void LetterParty_SetType(Letter *self, u32 v);
void LetterParty_SetBottle(Letter *self);
void LetterParty_SetFutureSelf(Letter *self, void *src);
void LetterParty_SetPlayer(Letter *self, void *src);
void LetterParty_SetVillager(Letter *self, void *src);
Letter *LetterParty_AsVillager(Letter *self);
Letter *LetterParty_AsPlayer(Letter *self);
void LetterParty_GetName(Letter *self, void *out);
void LetterParty_GetNameBytes(Letter *self, void *out);
}

extern "C" LetterView *Letter_Copy(LetterView *self, const LetterView *src) {
    MI_CpuCopy8(src, self, 0xf4);
    return self;
}

extern "C" void LetterParty_GetNameBytes(Letter *self, void *out) {
    Unk_02065dc8_Obj1c a;
    Unk_02065dc8_Obj18 b;
    Unk_02065d5c_Str c;
    Unk_02065dc8_Obj44 d;
    switch (self->unk_16) {
    case 0:
    case 4:
    case 5:
    case 6:
        break;
    case 1:
    case 2:
        Mem_Copy((u8 *)self + 0xc, out, 8);
        break;
    case 3:
        VillagerId_CopyFrom(&c, self);
        _ZN10VillagerId7getNameEj(&c, &a);
        _ZN13EncodedString13fromMsgStringEP9MsgString(&b, &a);
        _ZN14EncodedString86copyToEPvj(&b, out, 8);
        break;
    case 7:
        String_Load2dMenu(&d, 0x43);
        String_ToEncodedBytes(&d, out);
        break;
    }
}

extern "C" void LetterParty_GetName(Letter *self, void *out) {
    Unk_02065d5c_Str a;
    Unk_02065d5c_Buf18 b;
    switch (self->unk_16) {
    case 0:
    case 4:
        break;
    case 1:
    case 2:
    case 6:
        _ZN8PlayerId8copyFromEPS_(&b, self);
        _ZN8PlayerId13getNameStringEP9MsgString(&b, out);
        break;
    case 3:
    case 5:
        VillagerId_CopyFrom(&a, self);
        _ZN10VillagerId7getNameEj(&a, out);
        break;
    }
}

extern "C" Letter *LetterParty_AsPlayer(Letter *self) {
    if (self->unk_16 != 1 && self->unk_16 != 2 && self->unk_16 != 6) return 0;
    return self;
}

extern "C" Letter *LetterParty_AsVillager(Letter *self) {
    if (self->unk_16 != 3 && self->unk_16 != 5) return 0;
    return self;
}

extern "C" void LetterParty_SetVillager(Letter *self, void *src) {
    self->unk_16 = 3;
    VillagerId_CopyTo(src, self);
}

extern "C" void LetterParty_SetPlayer(Letter *self, void *src) {
    self->unk_16 = 2;
    _ZN8PlayerId6copyToEPS_(src, self);
}

extern "C" void LetterParty_SetFutureSelf(Letter *self, void *src) {
    self->unk_16 = 1;
    _ZN8PlayerId6copyToEPS_(src, self);
}

extern "C" void LetterParty_SetBottle(Letter *self) { self->unk_16 = 7; }

extern "C" void LetterParty_SetType(Letter *self, u32 v) { self->unk_16 = v; }

extern "C" u32 LetterParty_IsType(Letter *self, u32 t) {
    if (self->unk_16 == t) return TRUE;
    return FALSE;
}

Letter::Letter() {}

Letter::~Letter() {}

extern "C" void Letter_Clear(LetterView *self) {
    MI_CpuFill8(self, 0, 0xf4);
    self->present = 0xfff1;
}

extern "C" u32 Letter_GetPaper(LetterView *self) { return self->paper; }

extern "C" void Letter_InitDraft(LetterView *self, u32 v) {
    void *r = PlayerData_GetCurrent();
    Letter_Clear(self);
    self->paper = v;
    self->kind = 0;
    self->sender.unk_16 = 2;
    _ZN8PlayerId6copyToEPS_(_ZN10PlayerData11getPlayerIdEv(r), &self->sender);
    self->setState(1);
    Letter_SetSignature(self, _ZN15PlayerInventory9getUnk988Ev(_ZN10PlayerData12getInventoryEv(r)) + 0x30);
}

extern "C" void Letter_InitBottleDraft(LetterView *self) {
    u8 c;
    Letter_InitDraft(self, 0xc);
    self->setState(4);
    LetterParty_SetBottle(&self->recipient);
    c = 0x23;
    Letter_LoadTemplate2d(&c, self->greeting, &self->namePos, 0);
}

extern "C" void Letter_SetRecipientVillager(LetterView *self) {
    void *r = _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers));
    self->loadDefaultGreeting();
    LetterParty_SetVillager(&self->recipient, r);
}

extern "C" void Letter_SetRecipientResident(LetterView *self) {
    void *r = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetResident(gSavePlayers));
    self->loadDefaultGreeting();
    LetterParty_SetPlayer(&self->recipient, r);
}

extern "C" void Letter_SetRecipientFutureSelf(LetterView *self) {
    void *a = PlayerData_GetCurrent();
    void *b = _ZN10PlayerData11getPlayerIdEv(a);
    if (self->recipient.unk_16 != 1) {
        u8 *c = _ZN15PlayerInventory9getUnk988Ev(_ZN10PlayerData12getInventoryEv(a));
        Mem_Copy(c + 0x18, self->greeting, 0x18);
        self->namePos = c[0x51];
    }
    LetterParty_SetFutureSelf(&self->recipient, b);
}

extern "C" void Letter_MarkSent(LetterView *self) {
    switch (self->getState()) {
    case 1:
        self->setState(2);
        break;
    case 4:
        self->setState(5);
        break;
    default:
        return;
    }
    self->setPresentFlags(1);
}

extern "C" void Letter_MarkRead(LetterView *self) {
    switch (self->getState()) {
    case 2:
        self->setState(3);
        break;
    case 5:
        self->setState(6);
        break;
    case 7:
        self->setState(8);
        break;
    }
}

extern "C" void Letter_MarkReceived(LetterView *self) {
    self->setState(2);
    self->kind = 0x11;
    if (self->present != 0xfff1) {
        self->setPresentFlags(1);
    }
}

extern "C" void Letter_SetTexts(LetterView *self, s32 *pv, void *a, void *b, void *c) {
    self->namePos = *pv;
    Unk_02065a1c_Str l;
    _ZN13EncodedString13fromMsgStringEP9MsgString(&l, a);
    Mem_Copy(l.text, self->greeting, 0x18);
    static EncodedString128 s;
    StrBuf_ClearAlt(&s);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&s, b);
    Mem_Copy(s.text, self->body, 0x80);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&l, c);
    Mem_Copy(l.text, self->signature, 0x20);
}

extern "C" void Letter_FillFromVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    Unk_02065d5c_Str l1;
    Unk_02065d5c_Buf18 l2;
    VillagerId_Copy(&l1, s1);
    _ZN8PlayerId6setRawEPv(&l2, s2);
    Letter_Clear(self);
    self->paper = *ped;
    self->kind = 0;
    LetterParty_SetVillager(&self->sender, &l1);
    LetterParty_SetPlayer(&self->recipient, &l2);
    if (v < 0) {
        LetterParty_SetType(&self->recipient, 5);
        v = 0;
    }
    self->setState(2);
    Letter_SetTexts(self, &v, a, b, c);
}

extern "C" void Letter_ComposeVillagerMail(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, s32 a6) {
    u32 out;
    if (a6 != 0xb) {
        Unk_02065dc8_Obj1c o;
        _ZN10VillagerId7getNameEj(a4, &o);
        MailText_SetSlot(a6, &o);
    }
    MailText_LoadLetter(&sMailGreeting, &sMailBody, &sMailSignature, &out, a1, a2);
    Letter_FillFromVillager(self, &sMailGreeting, &sMailBody, &sMailSignature, out, (u8 *)a3, a4, a5);
}

extern "C" void Letter_ComposeVillagerMailZ(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        Unk_02065dc8_Obj1c o;
        _ZN10VillagerId7getNameEj(a7, &o);
        MailText_SetSlot(a9, &o);
    }
    MailText_LoadLetterZ(&sMailGreeting, &sMailBody, &sMailSignature, &out, a1, a2, a3, a4, a5);
    Letter_FillFromVillager(self, &sMailGreeting, &sMailBody, &sMailSignature, out, a6, a7, a8);
}

extern "C" void Letter_FillVillagerToVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    Unk_02065d5c_Str l1;
    Unk_02065d5c_Str l2;
    VillagerId_Copy(&l1, s1);
    VillagerId_Copy(&l2, s2);
    Letter_Clear(self);
    self->paper = *ped;
    self->kind = 0;
    LetterParty_SetVillager(&self->sender, &l1);
    LetterParty_SetVillager(&self->recipient, &l2);
    if (v < 0) {
        LetterParty_SetType(&self->recipient, 5);
        v = 0;
    }
    self->setState(7);
    Letter_SetTexts(self, &v, a, b, c);
}

extern "C" void Letter_ComposeVillagerToVillagerZ(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        Unk_02065dc8_Obj1c o;
        _ZN10VillagerId7getNameEj(a7, &o);
        MailText_SetSlot(a9, &o);
    }
    MailText_LoadLetterZ(&sMailGreeting, &sMailBody, &sMailSignature, &out, a1, a2, a3, a4, a5);
    Letter_FillVillagerToVillager(self, &sMailGreeting, &sMailBody, &sMailSignature, out, a6, a7, a8);
}

extern "C" void Letter_FillSystemMail(LetterView *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj) {
    Unk_02065d5c_Buf18 tmp;
    _ZN8PlayerId6setRawEPv(&tmp, obj);
    Letter_Clear(self);
    self->paper = *ped;
    self->kind = *pef;
    LetterParty_SetType(&self->sender, 4);
    LetterParty_SetPlayer(&self->recipient, &tmp);
    if (v < 0) {
        LetterParty_SetType(&self->recipient, 6);
        v = 0;
    }
    self->setState(2);
    Letter_SetTexts(self, &v, a, b, c);
}

extern "C" void Letter_ComposeFromMail(LetterView *self, void *a, void *b, u8 *pef, u8 *ped, void *obj) {
    u32 out;
    MailText_LoadLetter(&sMailGreeting, &sMailBody, &sMailSignature, &out, a, b);
    Letter_FillSystemMail(self, &sMailGreeting, &sMailBody, &sMailSignature, out, pef, ped, obj);
}

extern "C" void Letter_FillBottleMail(LetterView *self, void *a, void *b, void *c, s32 v) {
    Letter_Clear(self);
    self->paper = 0xc;
    self->setState(5);
    LetterParty_SetType(&self->sender, 4);
    LetterParty_SetBottle(&self->recipient);
    if (v < 0) {
        LetterParty_SetType(&self->recipient, 6);
        v = 0;
    }
    self->kind = 0xc;
    Letter_SetTexts(self, &v, a, b, c);
}

extern "C" void Letter_ComposeBottleMail(LetterView *self, void *a, void *b) {
    u32 out;
    MailText_LoadLetter(&sMailGreeting, &sMailBody, &sMailSignature, &out, a, b);
    Letter_FillBottleMail(self, &sMailGreeting, &sMailBody, &sMailSignature, out);
}

extern "C" Letter *Letter_GetSenderPlayer(LetterView *self) { return LetterParty_AsPlayer(&self->sender); }

extern "C" Letter *Letter_GetRecipientPlayer(LetterView *self) { return LetterParty_AsPlayer(&self->recipient); }

extern "C" Letter *Letter_GetRecipientVillager(LetterView *self) { return LetterParty_AsVillager(&self->recipient); }

extern "C" void Letter_GetSenderNameBytes(LetterView *self, void *out) { LetterParty_GetNameBytes(&self->sender, out); }

extern "C" void Letter_GetRecipientNameBytes(LetterView *self, void *out) { LetterParty_GetNameBytes(&self->recipient, out); }

extern "C" u32 Letter_GetKind(LetterView *self) { return self->kind; }

extern "C" void Letter_GetSenderName(LetterView *self, void *out) { LetterParty_GetName(&self->sender, out); }

// ---- free functions
extern "C" void Letter_GetRecipientName(LetterView *self, void *out) { LetterParty_GetName(&self->recipient, out); }

extern "C" u32 Letter_IsBottle(LetterView *self) { return LetterParty_IsType(&self->recipient, 7); }

u16 LetterView::getPresent() {
    return present;
}

u8 LetterView::getPresentFlags() {
    return (u8)((status & 0xc0) >> 6);
}

void LetterView::setPresentFlags(u32 v) {
    status = (status & 0x3f) | (v << 6);
}

u32 LetterView::setPresent(u16 v, u32 w) {
    u16 old = present;
    if (w == 0xff) w = 0;
    present = v;
    setPresentFlags(w);
    return old;
}

u8 LetterView::getState() {
    return status & 0x3f;
}

void LetterView::setState(u32 v) {
    status = (status & 0xc0) | v;
}

BOOL LetterView::isToFutureSelf() {
    if (recipient.unk_16 == 1) return TRUE;
    return FALSE;
}

void LetterView::loadDefaultGreeting() {
    if ((u8)(recipient.unk_16 + 0xfe) <= 1) return;
    u8 *p = (u8 *)_ZN15PlayerInventory9getUnk988Ev(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()));
    Mem_Copy(p, greeting, 0x18);
    namePos = p[0x50];
}

extern "C" void Letter_SetSignature(LetterView *o, u8 *p) {
    u8 buf[0x10];
    if (p[0] != 0) {
        Mem_Copy(p, o->signature, 0x20);
    } else {
        Mem_Clear(buf + 2, 8);
        Letter_GetSenderNameBytes(o, buf + 2);
        buf[0] = 0x24;
        Letter_LoadTemplate2d(buf, o->signature, buf + 1, buf + 2);
    }
}

extern "C" void LetterDefaults_Store(LetterDefaults *a, LetterView *b) {
    Mem_Copy(b->signature, a->signature, 0x20);
    if (Letter_IsBottle(b) == 0) {
        u8 *dst;
        if (b->isToFutureSelf()) {
            dst = a->futureSelfGreeting;
            a->futureSelfNamePos = b->namePos;
        } else {
            dst = a->greeting;
            a->greetingNamePos = b->namePos;
        }
        Mem_Copy(b->greeting, dst, 0x18);
    }
}

extern "C" void Letter_LoadTemplate2d(u8 *code, u8 *dst, u8 *lenOut, u8 *extra) {
    u32 src[16];
    Unk_020653cc_Buf out;
    s32 n;
    s32 m;
    _ZN11LabelStringC1Ev(src);
    _ZN15EncodedString41C1Ev(&out);
    String_Load2d(src, code, NULL);
    _ZN13EncodedString13fromMsgStringEP9MsgString(&out, src);
    n = Text_GetLineEnd(out.text, 0x29, 0);
    *lenOut = n;
    if (n != 0) {
        Mem_Copy(out.text, dst, n);
    }
    m = n;
    if (extra != NULL) {
        s32 t = Text_GetLength(extra, 8);
        Mem_Copy(extra, dst + n, t);
        m = n + t;
    }
    if (out.text[n] == 0x86) {
        s32 off = n + 1;
        u8 *p = out.text + off;
        s32 k = Text_GetLineEnd(p, 0x29 - off, 0);
        if (k != 0) {
            Mem_Copy(p, dst + m, k);
        }
    }
    _ZN15EncodedString41D1Ev(&out);
    _ZN11LabelStringD1Ev(src);
}

extern "C" void LetterDefaults_Init(LetterDefaults *o) {
    u8 code[2];
    MI_CpuFill8(o, 0, 0x52);
    code[0] = 0x23;
    Letter_LoadTemplate2d(&code[0], (u8 *)o, &o->greetingNamePos, NULL);
    code[1] = 0x26;
    Letter_LoadTemplate2d(&code[1], o->futureSelfGreeting, &o->futureSelfNamePos, NULL);
}

EncodedString128::EncodedString128() {
}

EncodedString128::~EncodedString128() {
}

u32 EncodedString128::capacity() {
    return 0x80;
}

// ---- EncodedString128 (vtable owner)

u8 *EncodedString128::data() {
    return (u8 *)this + 0xe;
}

// ---- bss (in __sinit construction order)
MsgString25B sMailGreeting;
MsgString129 sMailBody;
MsgString33B sMailSignature;
