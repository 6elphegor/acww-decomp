#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes of other units

class MsgTag {
public:
    MsgTag();
    void getStrings3(char **a, char **b, char **c);
    void getStrings2(char **a, char **b);
    s32 getSlotIndex();
    BOOL isSlotTag();
    void parse(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class MsgRequest {
public:
    virtual ~MsgRequest();
    virtual void vfunc_08();
    MsgRequest();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Script interpreter root
class MsgParser {
public:
    MsgParser();
    virtual ~MsgParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    void popText();
    void pushText(u8 *p);
    void begin(u8 *p);
    void reset();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class MsgWalker : public MsgParser {
public:
    MsgWalker() {}
    virtual ~MsgWalker() {}
    virtual BOOL canContinue();
    u8 *run(BOOL arg);
};

// BMG message file reader
class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;
    BOOL open(const char *name);
    BOOL loadMessage(u8 *p);
    void close();

    /* 0x04 */ u8 unk_04[0xa0];
};

class MsgString {
public:
    BOOL append(u8 *str);
    BOOL set(u8 *str);
};

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

class MailMsgRequest : public MsgRequest {
public:
    MailMsgRequest();
    virtual ~MailMsgRequest();
    virtual u32 vfunc_0c();
    u32 *getNamePosOut();
    MsgString *getDest();
    void setNamePosOut(u32 *v);
    void setDest(MsgString *v);
    void setPart(u32 v);
    void setFolder(u32 v);
    u32 getPartDir();
    BOOL isAppendPart();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ u32 unk_24;
    /* 0x28 */ MsgString *unk_28;
    /* 0x2c */ u32 *unk_2c;
};

// Buffer reader (vtable 0x020d94d0, derived from BmgReader)
class BmgReader512 : public BmgReader {
public:
    BmgReader512();
    virtual ~BmgReader512();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
    void clearBuffer();

    /* 0xa4 */ u8 unk_a4[0x200];
};

// Script interpreter (vtable 0x020d94e8)
struct Unk_020d94e8_Entry {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    u32 unk_04;
    u32 unk_08;
    s32 unk_0c;
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
    /* 0x300 */ s8 unk_300[0x200];
    /* 0x500 */ u32 unk_500;
    /* 0x504 */ Unk_020d94e8_Entry unk_504[11];
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

    /* 0x24 */ Unk_020d94e8_Owner *unk_24;
    /* 0x28 */ MsgTag unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
};

struct Unk_0203ce24_Elem {
    u8 unk_00[0x34];
};

// ---- container singleton at 0x021c3280 (a MailTextExpander at +0, a BmgReader512 at +0x5c)
class MailTextBuilder {
public:
    MailTextBuilder();
    ~MailTextBuilder();
    BOOL load(MailMsgRequest *p);
    void reset();

    /* 0x000 */ u8 unk_00[0x5c];
    /* 0x05c */ u8 unk_5c[0x2a4];
    /* 0x300 */ u8 unk_300[0x200];
    /* 0x500 */ s32 unk_500;
    /* 0x504 */ Unk_0203ce24_Elem unk_504[11];
};

extern MailTextBuilder gMailTextBuilder;

enum Unk_0203d134_E { Unk_0203d134_E0 = 0, Unk_0203d134_E15 = 15 };

extern "C" s32 func_0203d4d4(void) { return 0; }

extern "C" void func_0203d4d0(void) {}

extern "C" void func_0203d4cc(void) {}

extern "C" void func_0203d4c8(void) {}

extern "C" void func_0203d4c4(void) {}

extern "C" void func_0203d4c0(void) {}

BmgReader512::BmgReader512() : BmgReader(0) {}

BmgReader512::~BmgReader512() {}

void BmgReader512::clearBuffer() {
    MI_CpuFill8(unk_a4, 0, 0x200);
}

u32 BmgReader512::getBuffer() {
    return (u32)unk_a4;
}

u32 BmgReader512::getBufferSize() {
    return 0x200;
}

MailTextExpander::MailTextExpander(Unk_020d94e8_Owner *owner) : unk_24(owner) {
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 1;
    unk_45 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_58 = 0;
}

MailTextExpander::~MailTextExpander() {}

u8 MailTextExpander::expand(u8 flag) {
    unk_44 = 1;
    unk_40 = 0;
    unk_50 = flag;
    unk_54 = 0;
    unk_58 = 0;
    reset();
    begin(((Unk_020d94e8_Sub *)(unk_24->unk_05c))->vfunc_08());
    run(FALSE);
    return unk_44;
}

void MailTextExpander::onBegin() {
    unk_45 = 0;
    unk_48 = 0;
    unk_4c = 0;
}

void MailTextExpander::onEnd() {}

void MailTextExpander::onChar(u32 v) {
    if (unk_45) {
        unk_3c = Text_ToUpper(v);
        unk_45 = 0;
    } else {
        unk_3c = v;
    }
    appendChar();
    if ((u32)unk_04 == (u32)unk_48) {
        unk_48 = 0;
        popText();
    }
}

void MailTextExpander::onTag(u8 *p) {
    unk_28.parse(p);
    s32 r4 = unk_28.unk_00;
    Unk_020d94e8_Fn fn = 0;
    if (r4 == 4 && unk_28.isSlotTag()) {
        fn = *(Unk_020d94e8_Fn *)data_020d9460;
    } else if (r4 == 0) {
        fn = *(Unk_020d94e8_Fn *)data_020d9470;
    } else if (r4 == 0xb) {
        fn = *(Unk_020d94e8_Fn *)data_020d9468;
    }
    if (fn) {
        (this->*fn)();
    } else {
        unk_44 = 0;
    }
}

BOOL MailTextExpander::canContinue() {
    return TRUE;
}

void MailTextExpander::appendChar() {
    s32 t = unk_3c;
    s8 c = (s8)t;
    s32 idx = unk_40;
    if ((u32)(0x200 - idx) > 1) {
        if (t == 10 && unk_50 != 0) {
            unk_58++;
            if (unk_58 == 1) {
                unk_24->unk_500 = unk_54;
            }
        } else {
            unk_40++;
            unk_24->unk_300[idx] = c;
            if (unk_50 != 0) {
                unk_54++;
            }
        }
    } else {
        unk_44 = 0;
    }
}

void MailTextExpander::insertSlot() {
    s32 i = unk_28.getSlotIndex();
    Unk_020d94e8_Entry *e = &unk_24->unk_504[i];
    pushText(e->vfunc_0c());
    unk_4c = 0;
}

void MailTextExpander::insertGlyphTag() {
    s32 sel = unk_28.unk_04;
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
    s32 sel = unk_28.unk_04;
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
        Unk_020d94e8_Owner *o = unk_24;
        selectBySlotForm(&o->unk_504[en]);
    }
}

void MailTextExpander::setUnkMode1(s32 sel) {
    unk_4c = 1;
}

void MailTextExpander::setUnkMode2(s32 sel) {
    unk_4c = 2;
}

void MailTextExpander::setCapitalizeNext(s32 sel) {
    unk_45 = 1;
}

void MailTextExpander::selectByUnkCondition(s32 sel) {
    char *a, *b;
    unk_28.getStrings2(&a, &b);
    if (PlayerData_GetCurrent()) {
        _ZN10PlayerData11getPlayerIdEv();
        if (_ZN8PlayerId9getGenderEv() == 0) {
            if (a != 0) {
                pushText((u8 *)a);
            }
        } else if (b != 0) {
            unk_48 = unk_04;
            pushText((u8 *)b);
        }
    }
}

void MailTextExpander::selectBySlotForm(Unk_020d94e8_Entry *e) {
    char *a, *b, *c;
    unk_28.getStrings3(&a, &b, &c);
    s32 m = e->unk_0c;
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
            unk_48 = unk_04;
            pushText((u8 *)c);
        }
    }
}

extern "C" BOOL MailText_LoadLetter(MsgString *a, MsgString *b, MsgString *c, u32 *d, const u8 *e, const char *f) {
    MailMsgRequest obj;
    obj.setFolder(0);
    obj.setFileName(f);
    obj.unk_1e = *e;
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
    l.unk_1e = *e1;
    l.setPart(4);
    gMailTextBuilder.reset();
    r5 = gMailTextBuilder.load(&l);
    l.setNamePosOut(0);
    l.setDest(b);
    l.unk_1e = *e2;
    l.setPart(5);
    gMailTextBuilder.reset();
    r6 = gMailTextBuilder.load(&l);
    l.setDest(b);
    l.unk_1e = *e3;
    l.setPart(6);
    gMailTextBuilder.reset();
    r4 = gMailTextBuilder.load(&l);
    l.setDest(c);
    l.unk_1e = *e4;
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
    l.unk_1e = *p;
    l.setPart(0);
    gMailTextBuilder.reset();
    BOOL r = gMailTextBuilder.load(&l);
    return r;
}

extern "C" s32 MailText_SetSlot(s32 i, void *x) { return _ZN9MsgString4copyEPS_(&gMailTextBuilder.unk_504[i], x); }

extern "C" void MailText_SetSlotMonth(s32 i, s32 x) { String_GetMonthName(&gMailTextBuilder.unk_504[i], x); }

extern "C" void MailText_SetSlotDayOrdinal(s32 i, s32 x) { String_GetDayOrdinal(&gMailTextBuilder.unk_504[i], x); }

MailTextBuilder::MailTextBuilder() {
    _ZN16MailTextExpanderC1EP18Unk_020d94e8_Owner(this, this);
    _ZN12BmgReader512C1Ev(&unk_5c);
    unk_500 = -1;
    __cxa_vec_ctor(unk_504, 11, 0x34, (void *)_ZN11MsgString33C1Ev, (void *)_ZN11MsgString33D1Ev);
    MI_CpuFill8(unk_300, 0, 0x200);
}

MailTextBuilder::~MailTextBuilder() {
    __cxa_vec_cleanup(unk_504, 11, 0x34, (void *)_ZN11MsgString33D1Ev);
    _ZN12BmgReader512D1Ev(&unk_5c);
    _ZN16MailTextExpanderD1Ev(this);
}

void MailTextBuilder::reset() {
    ((BmgReader512 *)unk_5c)->clearBuffer();
    MI_CpuFill8(unk_300, 0, 0x200);
    unk_500 = -1;
}

BOOL MailTextBuilder::load(MailMsgRequest *p) {
    char buf[0x44];
    u32 s = p->getPartDir();
    if (s != 0) {
        func_020639e8(buf, "%s/%s/%s.bmg", p->vfunc_0c(), s, (char *)p + 4);
    } else {
        func_020639e8(buf, "%s/%s.bmg", p->vfunc_0c(), (char *)p + 4);
    }
    BOOL a = ((BmgReader *)unk_5c)->open(buf);
    BOOL b = a ? ((BmgReader *)unk_5c)->loadMessage(&p->unk_1e) : 0;
    bool ok = a & b;
    ((BmgReader *)unk_5c)->close();
    if (ok) {
        MsgString *q = p->getDest();
        u32 *out = p->getNamePosOut();
        BOOL m = p->isAppendPart();
        ok &= _ZN16MailTextExpander6expandEh(this, out != 0 ? TRUE : FALSE);
        if (m) {
            ok &= q->append(unk_300);
        } else {
            ok &= q->set(unk_300);
        }
        if (out) *out = unk_500;
    }
    return ok;
}

MailMsgRequest::MailMsgRequest() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0) {}

MailMsgRequest::~MailMsgRequest() {}

u32 MailMsgRequest::vfunc_0c() { return sMailFolderDirs[unk_20]; }

BOOL MailMsgRequest::isAppendPart() {
    if (unk_24 == 6) return TRUE;
    return FALSE;
}

u32 MailMsgRequest::getPartDir() { return sMailPartDirs[unk_24]; }

void MailMsgRequest::setFolder(u32 v) { unk_20 = v; }

void MailMsgRequest::setPart(u32 v) { unk_24 = v; }

void MailMsgRequest::setDest(MsgString *v) { unk_28 = v; }

void MailMsgRequest::setNamePosOut(u32 *v) { unk_2c = v; }

MsgString *MailMsgRequest::getDest() { return unk_28; }

// ---------------------------------------------------------------------------------------------------------------------

u32 *MailMsgRequest::getNamePosOut() { return unk_2c; }

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
