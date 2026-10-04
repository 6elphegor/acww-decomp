#include "types.h"
#include "game/Unk_0203ce24_Elem.h"
#include "talk/MsgTag.h"
#include "talk/BmgReader.h"
#include "talk/MsgParser.h"
#include "talk/MailTextBuilder.h"
#include "talk/MsgRequest.h"
#include "talk/MsgWalker.h"
#include "talk/MailMsgRequest.h"
#include "talk/MsgString.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes of other units







extern "C" {
void MI_CpuFill8(void *dst, u32 value, u32 size);
void *__cxa_vec_ctor(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *__cxa_vec_cleanup(void *p, u32 n, u32 size, void *dtor);
void _ZN11MsgString33D1Ev(void *);
void _ZN11MsgString33C1Ev(void *);
s32 func_020639e8(char *buf, const char *fmt, ...);
void String_GetDayOrdinal(void *, s32);
void String_GetMonthName(void *, s32);
s32 _ZN9MsgString4copyEPS_(void *, void *);
u8 *Text_GetSpecialCharStr6(void);
u8 *Text_GetSpecialCharStr7(void);
u8 *Text_GetSpecialCharStr4(void);
u8 *Text_GetSpecialCharStr1(void);
s32 Text_ToUpper(s32 v);
BOOL PlayerData_GetCurrent(void);
s32 _ZN10PlayerData11getPlayerIdEv(void);
BOOL _ZN8PlayerId9getGenderEv(void);
void _ZN12BmgReader512D1Ev(void *);
void _ZN16MailTextExpanderD1Ev(void *);
void _ZN16MailTextExpanderC1EP18Unk_020d94e8_Owner(void *, void *);
void _ZN12BmgReader512C1Ev(void *);
}

extern char data_020d9434[];
extern char data_020d9438[];
extern char data_020d943c[];
extern char data_020d9440[];
extern char data_020d9448[];
extern char data_020d9450[];
extern char data_020d9458[];
extern char data_020d9478[];
extern char data_020d9488[];
extern char data_020d949c[];
extern "C" {
BOOL _ZN16MailTextExpander6expandEh(void *self, BOOL b);
void _ZN16MailTextExpander10insertSlotEv();
void _ZN16MailTextExpander16handleGrammarTagEv();
void _ZN16MailTextExpander14insertGlyphTagEv();
}
extern const u32 sMailFolderDirs[3];
extern const u32 sMailPartDirs[8];

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x020d94b8 (message request), derived from MsgRequest


// Buffer reader (vtable 0x020d94d0, derived from BmgReader)
class BmgReader512 : public BmgReader {
public:
    BmgReader512();
    virtual ~BmgReader512();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
    void clearBuffer();

    /* 0xa4 */ u8 buffer[0x200];
};

// Script interpreter (vtable 0x020d94e8)
struct Unk_020d94e8_Entry {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    u32 unk_04;
    u32 unk_08;
    s32 form;
    u8 unk_10[0x24];
};

struct Unk_020d94e8_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual u8 *vfunc_08();
};

struct Unk_020d94e8_Owner {
    /* 0x000 */ u8 unk_000[0x5c];
    /* 0x05c */ u8 unk_05c[0x2a4];
    /* 0x300 */ s8 output[0x200];
    /* 0x500 */ u32 namePos;
    /* 0x504 */ Unk_020d94e8_Entry slots[11];
};

class MailTextExpander;
typedef void (MailTextExpander::*Unk_020d94e8_Fn)();
extern void *data_020d9460[2];
extern void *data_020d9468[2];
extern void *data_020d9470[2];

class MailTextExpander : public MsgWalker {
public:
    MailTextExpander(Unk_020d94e8_Owner *owner);
    virtual ~MailTextExpander();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 v);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    void selectBySlotForm(Unk_020d94e8_Entry *e);
    void selectByUnkCondition(s32 sel);
    void setCapitalizeNext(s32 sel);
    void setUnkMode2(s32 sel);
    void setUnkMode1(s32 sel);
    void handleGrammarTag();
    void insertGlyphTag();
    void insertSlot();
    void appendChar();
    u8 expand(u8 flag);

    /* 0x24 */ Unk_020d94e8_Owner *builder;
    /* 0x28 */ MsgTag tag;
    /* 0x3c */ s32 curChar;
    /* 0x40 */ s32 outLen;
    /* 0x44 */ u8 success;
    /* 0x45 */ u8 capitalizeNext;
    /* 0x48 */ u8 *selectEnd;
    /* 0x4c */ s32 articleMode;
    /* 0x50 */ u8 trackNamePos;
    /* 0x54 */ s32 charCount;
    /* 0x58 */ s32 newlineCount;
};


// ---- container singleton at 0x021c3280 (a MailTextExpander at +0, a BmgReader512 at +0x5c)

extern MailTextBuilder gMailTextBuilder;

enum Unk_0203d134_E { Unk_0203d134_E0 = 0, Unk_0203d134_E15 = 15 };

extern "C" s32 func_0203d4d4(void) { return 0; }

extern "C" void Main_PreTaskStub(void) {}

extern "C" void Main_PostTaskStub(void) {}

extern "C" void ScreenLayers_AcquireStub(void) {}

extern "C" void ScreenLayers_ReleaseStub(void) {}

extern "C" void Scene_PostCreateStub(void) {}

BmgReader512::BmgReader512() : BmgReader(0) {}

BmgReader512::~BmgReader512() {}

void BmgReader512::clearBuffer() {
    MI_CpuFill8(buffer, 0, 0x200);
}

u32 BmgReader512::getBuffer() {
    return (u32)buffer;
}

u32 BmgReader512::getBufferSize() {
    return 0x200;
}

MailTextExpander::MailTextExpander(Unk_020d94e8_Owner *owner) : builder(owner) {
    curChar = 0;
    outLen = 0;
    success = 1;
    capitalizeNext = 0;
    selectEnd = 0;
    articleMode = 0;
    trackNamePos = 0;
    charCount = 0;
    newlineCount = 0;
}

MailTextExpander::~MailTextExpander() {}

u8 MailTextExpander::expand(u8 flag) {
    success = 1;
    outLen = 0;
    trackNamePos = flag;
    charCount = 0;
    newlineCount = 0;
    reset();
    begin(((Unk_020d94e8_Sub *)(builder->unk_05c))->vfunc_08());
    run(FALSE);
    return success;
}

void MailTextExpander::onBegin() {
    capitalizeNext = 0;
    selectEnd = 0;
    articleMode = 0;
}

void MailTextExpander::onEnd() {}

void MailTextExpander::onChar(u32 v) {
    if (capitalizeNext) {
        curChar = Text_ToUpper(v);
        capitalizeNext = 0;
    } else {
        curChar = v;
    }
    appendChar();
    if ((u32)cursor == (u32)selectEnd) {
        selectEnd = 0;
        popText();
    }
}

void MailTextExpander::onTag(u8 *p) {
    tag.parse(p);
    s32 r4 = tag.group;
    Unk_020d94e8_Fn fn = 0;
    if (r4 == 4 && tag.isSlotTag()) {
        fn = *(Unk_020d94e8_Fn *)data_020d9460;
    } else if (r4 == 0) {
        fn = *(Unk_020d94e8_Fn *)data_020d9470;
    } else if (r4 == 0xb) {
        fn = *(Unk_020d94e8_Fn *)data_020d9468;
    }
    if (fn) {
        (this->*fn)();
    } else {
        success = 0;
    }
}

BOOL MailTextExpander::canContinue() {
    return TRUE;
}

void MailTextExpander::appendChar() {
    s32 t = curChar;
    s8 c = (s8)t;
    s32 idx = outLen;
    if ((u32)(0x200 - idx) > 1) {
        if (t == 10 && trackNamePos != 0) {
            newlineCount++;
            if (newlineCount == 1) {
                builder->namePos = charCount;
            }
        } else {
            outLen++;
            builder->output[idx] = c;
            if (trackNamePos != 0) {
                charCount++;
            }
        }
    } else {
        success = 0;
    }
}

void MailTextExpander::insertSlot() {
    s32 i = tag.getSlotIndex();
    Unk_020d94e8_Entry *e = &builder->slots[i];
    pushText(e->vfunc_0c());
    articleMode = 0;
}

void MailTextExpander::insertGlyphTag() {
    s32 sel = tag.id;
    if (sel == 0) {
        pushText(Text_GetSpecialCharStr6());
    } else if (sel == 1) {
        pushText(Text_GetSpecialCharStr7());
    } else if (sel == 7) {
        pushText(Text_GetSpecialCharStr4());
    } else if (sel == 8) {
        pushText(Text_GetSpecialCharStr1());
    }
}

void MailTextExpander::handleGrammarTag() {
    s32 sel = tag.id;
    s32 n;
    if (sel == 1) {
        setUnkMode1(sel);
    } else if (sel == 2) {
        setUnkMode2(sel);
    } else if (sel == 3) {
        setCapitalizeNext(sel);
    } else if (sel == 4) {
        selectByUnkCondition(sel);
    } else if (sel >= 5 && sel <= 15) {
        Unk_0203d134_E en = (Unk_0203d134_E)(sel - 5);
        Unk_020d94e8_Owner *o = builder;
        selectBySlotForm(&o->slots[en]);
    }
}

void MailTextExpander::setUnkMode1(s32 sel) {
    articleMode = 1;
}

void MailTextExpander::setUnkMode2(s32 sel) {
    articleMode = 2;
}

void MailTextExpander::setCapitalizeNext(s32 sel) {
    capitalizeNext = 1;
}

void MailTextExpander::selectByUnkCondition(s32 sel) {
    char *a, *b;
    tag.getStrings2(&a, &b);
    if (PlayerData_GetCurrent()) {
        _ZN10PlayerData11getPlayerIdEv();
        if (_ZN8PlayerId9getGenderEv() == 0) {
            if (a != 0) {
                pushText((u8 *)a);
            }
        } else if (b != 0) {
            selectEnd = cursor;
            pushText((u8 *)b);
        }
    }
}

void MailTextExpander::selectBySlotForm(Unk_020d94e8_Entry *e) {
    char *a, *b, *c;
    tag.getStrings3(&a, &b, &c);
    s32 m = e->form;
    if (m == 0) {
        if (a != 0) {
            pushText((u8 *)a);
        }
    } else if (m == 1) {
        if (b != 0) {
            pushText((u8 *)b);
        }
    } else if (m == 2) {
        if (c != 0) {
            selectEnd = cursor;
            pushText((u8 *)c);
        }
    }
}

extern "C" BOOL MailText_LoadLetter(MsgString *a, MsgString *b, MsgString *c, u32 *d, const u8 *e, const char *f) {
    MailMsgRequest obj;
    obj.setFolder(0);
    obj.setFileName(f);
    obj.msgIndex = *e;
    obj.setDest(a);
    obj.setNamePosOut(d);
    obj.setPart(1);
    gMailTextBuilder.reset();
    u32 r5 = gMailTextBuilder.load(&obj);
    obj.setNamePosOut(0);
    obj.setDest(b);
    obj.setPart(2);
    gMailTextBuilder.reset();
    u32 r4 = gMailTextBuilder.load(&obj);
    obj.setDest(c);
    obj.setPart(3);
    gMailTextBuilder.reset();
    u32 r0 = gMailTextBuilder.load(&obj);
    BOOL result;
    if (r5 != 0 && r4 != 0 && r0 != 0) {
        result = TRUE;
    } else {
        result = FALSE;
    }
    return result;
}

extern "C" BOOL MailText_LoadLetterZ(MsgString *a, MsgString *b, MsgString *c, u32 *d, u8 *e1, u8 *e2, u8 *e3, u8 *e4, const char *name) {
    MailMsgRequest l;
    BOOL r5, r6, r4, r0, ok;
    l.setFolder(1);
    l.setFileName(name);
    l.setDest(a);
    l.setNamePosOut(d);
    l.msgIndex = *e1;
    l.setPart(4);
    gMailTextBuilder.reset();
    r5 = gMailTextBuilder.load(&l);
    l.setNamePosOut(0);
    l.setDest(b);
    l.msgIndex = *e2;
    l.setPart(5);
    gMailTextBuilder.reset();
    r6 = gMailTextBuilder.load(&l);
    l.setDest(b);
    l.msgIndex = *e3;
    l.setPart(6);
    gMailTextBuilder.reset();
    r4 = gMailTextBuilder.load(&l);
    l.setDest(c);
    l.msgIndex = *e4;
    l.setPart(7);
    gMailTextBuilder.reset();
    r0 = gMailTextBuilder.load(&l);
    if (r5 && r6 && r4 && r0) ok = TRUE; else ok = FALSE;
    return ok;
}

extern "C" BOOL MailText_LoadBbs(MsgString *a, u8 *p, const char *name) {
    MailMsgRequest l;
    l.setFolder(2);
    l.setFileName(name);
    l.setDest(a);
    l.msgIndex = *p;
    l.setPart(0);
    gMailTextBuilder.reset();
    BOOL r = gMailTextBuilder.load(&l);
    return r;
}

extern "C" s32 MailText_SetSlot(s32 i, void *x) { return _ZN9MsgString4copyEPS_(&gMailTextBuilder.slots[i], x); }

extern "C" void MailText_SetSlotMonth(s32 i, s32 x) { String_GetMonthName(&gMailTextBuilder.slots[i], x); }

extern "C" void MailText_SetSlotDayOrdinal(s32 i, s32 x) { String_GetDayOrdinal(&gMailTextBuilder.slots[i], x); }

MailTextBuilder::MailTextBuilder() {
    _ZN16MailTextExpanderC1EP18Unk_020d94e8_Owner(this, this);
    _ZN12BmgReader512C1Ev(&reader);
    namePos = -1;
    __cxa_vec_ctor(slots, 11, 0x34, (void *)_ZN11MsgString33C1Ev, (void *)_ZN11MsgString33D1Ev);
    MI_CpuFill8(output, 0, 0x200);
}

MailTextBuilder::~MailTextBuilder() {
    __cxa_vec_cleanup(slots, 11, 0x34, (void *)_ZN11MsgString33D1Ev);
    _ZN12BmgReader512D1Ev(&reader);
    _ZN16MailTextExpanderD1Ev(this);
}

void MailTextBuilder::reset() {
    ((BmgReader512 *)reader)->clearBuffer();
    MI_CpuFill8(output, 0, 0x200);
    namePos = -1;
}

BOOL MailTextBuilder::load(MailMsgRequest *p) {
    char buf[0x44];
    u32 s = p->getPartDir();
    if (s != 0) {
        func_020639e8(buf, "%s/%s/%s.bmg", p->getMsgDir(), s, (char *)p + 4);
    } else {
        func_020639e8(buf, "%s/%s.bmg", p->getMsgDir(), (char *)p + 4);
    }
    BOOL a = ((BmgReader *)reader)->open(buf);
    BOOL b = a ? ((BmgReader *)reader)->loadMessage(&p->msgIndex) : 0;
    bool ok = a & b;
    ((BmgReader *)reader)->close();
    if (ok) {
        MsgString *q = p->getDest();
        u32 *out = p->getNamePosOut();
        BOOL m = p->isAppendPart();
        ok &= _ZN16MailTextExpander6expandEh(this, out != 0 ? TRUE : FALSE);
        if (m) {
            ok &= (BOOL)q->append(output);
        } else {
            ok &= (BOOL)q->set(output);
        }
        if (out) *out = namePos;
    }
    return ok;
}

MailMsgRequest::MailMsgRequest() : folder(0), part(0), dest(0), namePosOut(0) {}

MailMsgRequest::~MailMsgRequest() {}

const char *MailMsgRequest::getMsgDir() { return (const char *)sMailFolderDirs[folder]; }

BOOL MailMsgRequest::isAppendPart() {
    if (part == 6) return TRUE;
    return FALSE;
}

u32 MailMsgRequest::getPartDir() { return sMailPartDirs[part]; }

void MailMsgRequest::setFolder(u32 v) { folder = v; }

void MailMsgRequest::setPart(u32 v) { part = v; }

void MailMsgRequest::setDest(MsgString *v) { dest = v; }

void MailMsgRequest::setNamePosOut(u32 *v) { namePosOut = v; }

MsgString *MailMsgRequest::getDest() { return dest; }

// ---------------------------------------------------------------------------------------------------------------------

u32 *MailMsgRequest::getNamePosOut() { return namePosOut; }

// Declarations for data defined further down (definition order sets the data layout)
extern const u32 sMailPartDirs[8];
extern char data_020d943c[];
extern const u32 sMailFolderDirs[3];
extern char data_020d9440[];
extern char data_020d9448[];
extern char data_020d9450[];
extern char data_020d9458[];
extern void *data_020d9460[2];
extern void *data_020d9468[2];
extern void *data_020d9470[2];
extern char data_020d9438[];
extern char data_020d9478[];
extern char data_020d9488[];
extern char data_020d949c[];
extern char data_020d9434[];
extern MailTextBuilder gMailTextBuilder;

const u32 sMailPartDirs[8] = {0, (u32)data_020d9450, (u32)data_020d943c, (u32)data_020d9434, (u32)data_020d9458, (u32)data_020d9448, (u32)data_020d9440, (u32)data_020d9438};

char data_020d943c[] = "msg";

// ---- data
const u32 sMailFolderDirs[3] = {(u32)data_020d9488, (u32)data_020d949c, (u32)data_020d9478};

char data_020d9440[] = "msgb";

char data_020d9448[] = "msga";

char data_020d9450[] = "super";

char data_020d9458[] = "superz";

void *data_020d9460[2] = {(void *)_ZN16MailTextExpander10insertSlotEv, 0};

void *data_020d9468[2] = {(void *)_ZN16MailTextExpander16handleGrammarTagEv, 0};

void *data_020d9470[2] = {(void *)_ZN16MailTextExpander14insertGlyphTagEv, 0};

char data_020d9438[] = "psz";

char data_020d9478[] = "/script/ENG/bbs";

char data_020d9488[] = "/script/ENG/mail";

char data_020d949c[] = "/script/ENG/mailz";

char data_020d9434[] = "ps";

MailTextBuilder gMailTextBuilder;
