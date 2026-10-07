#include "uptr.h"
#include "types.h"
#include "talk/EncodedString.h"
#include "talk/MsgString33B.h"
#include "talk/MsgString129.h"
#include "talk/MsgString25B.h"
#include "talk/EncodedString128.h"
#include "talk/MsgString9B.h"
#include "talk/EncodedString8.h"
#include "talk/EncodedString41.h"
#include "ui/LabelString.h"



#include "item/Letter.h"
#include "item/LetterView.h"
#include "npc/VillagerId.h"
#include "player/PlayerData.h"
#include "player/PlayerId.h"
#include "player/PlayerInventory.h"
#define PROTO_LOCAL_LetterParty_GetName  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_LetterParty_GetNameBytes  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_LetterParty_SetVillager  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_FillFromVillager  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_FillVillagerToVillager  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_LoadTemplate2d  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_SetTexts  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_StrBuf_ClearAlt  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_String_Load2d  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_VillagerId_Construct  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_VillagerId_Copy  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_VillagerId_CopyFrom  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_VillagerId_CopyTo  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_VillagerId_Destruct  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_0203cbc0.h"
#include "proto/main/unk_02051218.h"
#include "proto/main/unk_02065330.h"
#include "proto/main/unk_0206f834.h"
#include "proto/main/unk_02097444.h"

// Object filled by LetterDefaults_Init (0x52 bytes).
struct LetterDefaults {
    /* 0x00 */ u8 greeting[0x18];
    /* 0x18 */ u8 futureSelfGreeting[0x18];
    /* 0x30 */ u8 signature[0x20];
    /* 0x50 */ u8 greetingNamePos;
    /* 0x51 */ u8 futureSelfNamePos;
};

// the object's real size and layout (its vtable pointer and fields move on 64-bit hosts): text through the class
struct EncodedString41Storage {
    u8 raw[sizeof(EncodedString41)] __attribute__((aligned(8)));
};
#define ES41_TEXT(s) (((EncodedString41 *)&(s))->text)

extern "C" {
void VillagerId_Construct(void *);
void VillagerId_Destruct(void *);
void _ZN11MsgString9BC1Ev(void *);
void _ZN11MsgString9BD1Ev(void *);
void _ZN14EncodedString8C1Ev(void *);
void _ZN14EncodedString8D1Ev(void *);
}

struct VillagerIdLocal {
    u32 v[3];
    VillagerIdLocal() { VillagerId_Construct(this); }
    ~VillagerIdLocal() { VillagerId_Destruct(this); }
};
struct PlayerIdLocal {
    u32 v[6];
    PlayerIdLocal() { new (this) PlayerId(0); } // o unused by PlayerId::PlayerId (TownId_Construct is empty)
    ~PlayerIdLocal() { new (this) PlayerId(); }
};

extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];

extern "C" {
void *MI_CpuFill8(void *dst, u32 v, u32 n);
void *MI_CpuCopy8(const void *src, void *dst, u32 n);
void VillagerId_CopyFrom(void *o, void *x);
void VillagerId_CopyTo(void *src, void *dst);
void VillagerId_Copy(void *o, void *x);
void StrBuf_ClearAlt(void *o);
void String_Load2d(void *dst, void *code, void *z);
u8 *_ZN15PlayerInventory9getUnk988Ev(void *);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);

void LetterDefaults_Init(LetterDefaults *o);
void Letter_LoadTemplate2d(u8 *code, u8 *dst, u8 *lenOut, u8 *extra);
void Letter_SetTexts(LetterView *self, s32 *pv, void *a, void *b, void *c);
void Letter_FillVillagerToVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void Letter_FillFromVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
void LetterParty_SetVillager(LetterParty *self, void *src);
void LetterParty_GetName(LetterParty *self, void *out);
void LetterParty_GetNameBytes(LetterParty *self, void *out);
}

extern "C" LetterView *Letter_Copy(LetterView *self, const LetterView *src) {
    MI_CpuCopy8(src, self, 0xf4);
    return self;
}

extern "C" void LetterParty_GetNameBytes(LetterParty *self, void *out) {
    MsgString9B a;
    EncodedString8 b;
    VillagerIdLocal c;
    LabelString d;
    switch (self->partyType) {
    case 0:
    case 4:
    case 5:
    case 6:
        break;
    case 1:
    case 2:
        Mem_Copy(HOST_AT(self, 0xc, unk_04[8], 0), out, 8);
        break;
    case 3:
        VillagerId_CopyFrom(&c, self);
        ((VillagerId *)(&c))->getName((u32)(&a));
        ((EncodedString *)(&b))->fromMsgString((MsgString *)(&a));
        ((EncodedString8 *)(&b))->copyTo(out, 8);
        break;
    case 7:
        String_Load2dMenu(&d, 0x43);
        String_ToEncodedBytes(&d, out);
        break;
    }
}

extern "C" void LetterParty_GetName(LetterParty *self, void *out) {
    VillagerIdLocal a;
    PlayerIdLocal b;
    switch (self->partyType) {
    case 0:
    case 4:
        break;
    case 1:
    case 2:
    case 6:
        ((PlayerId *)(&b))->copyFrom((PlayerId *)(self));
        ((PlayerId *)(&b))->getNameString((MsgString *)(out));
        break;
    case 3:
    case 5:
        VillagerId_CopyFrom(&a, self);
        ((VillagerId *)(&a))->getName((u32)(out));
        break;
    }
}

extern "C" LetterParty *LetterParty_AsPlayer(LetterParty *self) {
    if (self->partyType != 1 && self->partyType != 2 && self->partyType != 6) return 0;
    return self;
}

extern "C" LetterParty *LetterParty_AsVillager(LetterParty *self) {
    if (self->partyType != 3 && self->partyType != 5) return 0;
    return self;
}

extern "C" void LetterParty_SetVillager(LetterParty *self, void *src) {
    self->partyType = 3;
    VillagerId_CopyTo(src, self);
}

extern "C" void LetterParty_SetPlayer(LetterParty *self, void *src) {
    self->partyType = 2;
    ((PlayerId *)(src))->copyTo((PlayerId *)(self));
}

extern "C" void LetterParty_SetFutureSelf(LetterParty *self, void *src) {
    self->partyType = 1;
    ((PlayerId *)(src))->copyTo((PlayerId *)(self));
}

extern "C" void LetterParty_SetBottle(LetterParty *self) { self->partyType = 7; }

extern "C" void LetterParty_SetType(LetterParty *self, u32 v) { self->partyType = v; }

extern "C" u32 LetterParty_IsType(LetterParty *self, u32 t) {
    if (self->partyType == t) return TRUE;
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
    self->sender.partyType = 2;
    ((PlayerId *)(((PlayerData *)(r))->getPlayerId()))->copyTo((PlayerId *)(&self->sender));
    self->setState(1);
    Letter_SetSignature(self, _ZN15PlayerInventory9getUnk988Ev(((PlayerData *)(r))->getInventory()) + 0x30);
}

extern "C" void Letter_InitBottleDraft(LetterView *self) {
    u8 c;
    Letter_InitDraft(self, 0xc);
    self->setState(4);
    LetterParty_SetBottle(&self->recipient);
    c = 0x23;
    Letter_LoadTemplate2d(&c, self->greeting, &self->namePos, 0);
}

extern "C" void Letter_SetRecipientVillager(LetterView *self, s32 idx) {
    void *r = _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, idx));
    self->loadDefaultGreeting();
    LetterParty_SetVillager(&self->recipient, r);
}

extern "C" void Letter_SetRecipientResident(LetterView *self, s32 idx) {
    void *r = ((PlayerData *)(PlayerData_GetResident(gSavePlayers, idx)))->getPlayerId();
    self->loadDefaultGreeting();
    LetterParty_SetPlayer(&self->recipient, r);
}

extern "C" void Letter_SetRecipientFutureSelf(LetterView *self) {
    void *a = PlayerData_GetCurrent();
    void *b = ((PlayerData *)(a))->getPlayerId();
    if (self->recipient.partyType != 1) {
        u8 *c = _ZN15PlayerInventory9getUnk988Ev(((PlayerData *)(a))->getInventory());
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
    EncodedString41 l;
    ((EncodedString *)(&l))->fromMsgString((MsgString *)(a));
    Mem_Copy(l.text, self->greeting, 0x18);
    static EncodedString128 s;
    StrBuf_ClearAlt(&s);
    ((EncodedString *)(&s))->fromMsgString((MsgString *)(b));
    Mem_Copy(s.text, self->body, 0x80);
    ((EncodedString *)(&l))->fromMsgString((MsgString *)(c));
    Mem_Copy(l.text, self->signature, 0x20);
}

extern "C" void Letter_FillFromVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    VillagerIdLocal l1;
    PlayerIdLocal l2;
    VillagerId_Copy(&l1, s1);
    ((PlayerId *)(&l2))->setRaw(s2);
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
        MsgString9B o;
        ((VillagerId *)(a4))->getName((u32)(&o));
        MailText_SetSlot(a6, &o);
    }
    MailText_LoadLetter(&sMailGreeting, &sMailBody, &sMailSignature, &out, a1, a2);
    Letter_FillFromVillager(self, &sMailGreeting, &sMailBody, &sMailSignature, out, (u8 *)a3, a4, a5);
}

extern "C" void Letter_ComposeVillagerMailZ(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9) {
    u32 out;
    if (a9 != 0xb) {
        MsgString9B o;
        ((VillagerId *)(a7))->getName((u32)(&o));
        MailText_SetSlot(a9, &o);
    }
    MailText_LoadLetterZ(&sMailGreeting, &sMailBody, &sMailSignature, &out, a1, a2, a3, a4, a5);
    Letter_FillFromVillager(self, &sMailGreeting, &sMailBody, &sMailSignature, out, a6, a7, a8);
}

extern "C" void Letter_FillVillagerToVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2) {
    VillagerIdLocal l1;
    VillagerIdLocal l2;
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
        MsgString9B o;
        ((VillagerId *)(a7))->getName((u32)(&o));
        MailText_SetSlot(a9, &o);
    }
    MailText_LoadLetterZ(&sMailGreeting, &sMailBody, &sMailSignature, &out, a1, a2, a3, a4, a5);
    Letter_FillVillagerToVillager(self, &sMailGreeting, &sMailBody, &sMailSignature, out, a6, a7, a8);
}

extern "C" void Letter_FillSystemMail(LetterView *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj) {
    PlayerIdLocal tmp;
    ((PlayerId *)(&tmp))->setRaw(obj);
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

extern "C" LetterParty *Letter_GetSenderPlayer(LetterView *self) { return LetterParty_AsPlayer(&self->sender); }

extern "C" LetterParty *Letter_GetRecipientPlayer(LetterView *self) { return LetterParty_AsPlayer(&self->recipient); }

extern "C" LetterParty *Letter_GetRecipientVillager(LetterView *self) { return LetterParty_AsVillager(&self->recipient); }

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
    if (recipient.partyType == 1) return TRUE;
    return FALSE;
}

void LetterView::loadDefaultGreeting() {
    if ((u8)(recipient.partyType + 0xfe) <= 1) return;
    u8 *p = (u8 *)((PlayerInventory *)(PlayerData_GetCurrent()->getInventory()))->getUnk988();
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
    u32 src[HOST_SIZED(0x40, LabelString) / 4] HOST_ALIGN8;
    EncodedString41Storage out;
    s32 n;
    s32 m;
    new (src) LabelString();
    new (&out) EncodedString41();
    String_Load2d(src, code, NULL);
    ((EncodedString *)(&out))->fromMsgString((MsgString *)(src));
    n = Text_GetLineEnd(ES41_TEXT(out), 0x29, 0);
    *lenOut = n;
    if (n != 0) {
        Mem_Copy(ES41_TEXT(out), dst, n);
    }
    m = n;
    if (extra != NULL) {
        s32 t = Text_GetLength(extra, 8);
        Mem_Copy(extra, dst + n, t);
        m = n + t;
    }
    if (ES41_TEXT(out)[n] == 0x86) {
        s32 off = n + 1;
        u8 *p = ES41_TEXT(out) + off;
        s32 k = Text_GetLineEnd(p, 0x29 - off, 0);
        if (k != 0) {
            Mem_Copy(p, dst + m, k);
        }
    }
    ((EncodedString41 *)(&out))->EncodedString41::~EncodedString41();
    ((LabelString *)(src))->LabelString::~LabelString();
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
    return HOST_AT(this, 0xe, text[0], 0);
}

// ---- bss (in __sinit construction order)
MsgString25B sMailGreeting;
MsgString129 sMailBody;
MsgString33B sMailSignature;
