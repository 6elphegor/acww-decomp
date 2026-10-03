// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
u32 Text_ToUpper(u32 key);
u8 *Text_GetSpecialCharStr10(void);
u8 *Text_GetSpecialCharStr9(void);
u8 *Text_GetSpecialCharStr5(void);
u32 Msg_GetCharFromEnd(u32 a, u32 b);
u32 Msg_GetCharAt(u32 a, u32 b);
int strcmp(const u8 *a, const u8 *b);
void MI_CpuFill8(void *dst, u32 value, u32 size);
s32 FX_Modf(s32 v, s32 *out);
int func_020639e8(char *dst, const char *fmt, ...);
char *Msg_SkipLines(char *p, u32 n);
void func_02133ef8(void *p, u32 n);
}

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgStringBase {
public:
    virtual ~MsgStringBase();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    u8 appendString(MsgString *other);
    u8 append(u8 *str);
    u8 copy(MsgString *other);
    u8 set(u8 *str);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class MsgString33 : public MsgString {
public:
    MsgString33();
    virtual ~MsgString33();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u32 unk_14[8];
};

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;

    BOOL loadMessage(u8 *arg1);
    void close();
    u8 open(const char *path);

    /* 0x04 */ u8 unk_04[0xa0];
};

class MsgTag {
public:
    MsgTag();
    s32 getSlotIndex();
    BOOL isSlotTag();
    void getAltTextArgs(u32 *a, char **b, char **c);
    void getArgs3(u8 *a, u8 *b, u8 *c);
    void parse(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ char *unk_10;
};

class MsgParser {
public:
    MsgParser();
    virtual ~MsgParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    void pushText(u8 *p);
    void begin(u8 *p);
    void skip(s32 n);
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

class StringBank;

class Unk_Buf {
public:
    virtual ~Unk_Buf();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
};

extern "C" {
BOOL String_CharEqualsIgnoreCase(u32 a, u32 b);
BOOL String_FormatNumber(MsgString *out, s32 val, s32 width, s32 mode, s32 kind, s32 unused);
BOOL String_AppendUnitSuffix(MsgString *out, s32 val, s32 kind);
void Str_Reverse(char *s, u32 size);
void Str_InsertThousandsSeparators(char *s, u32 size, s32 minRun);
void Str_PadBackZeros(char *s, u32 size, s32 width);
void Str_PadBackSpaces(char *s, u32 size, s32 width);
void Str_PadFrontSpaces(char *s, u32 size, s32 width);
void Str_WriteDigitsReversed(char *s, u32 size, s32 n, s32 maxDigits);
void Str_ShiftRight(char *s, u32 size, s32 start, s32 shift);
s32 Str_LenN(const char *s, u32 max);
BOOL String_LoadResolveAltText(MsgString *buf, u8 *key, const char *name);
BOOL String_Load(MsgString *buf, u8 *key, const char *name);
}

// ---- classes of this unit, declared in reverse order of their vtables in .data ----

class StringExpander : public MsgWalker {
public:
    StringExpander(StringBank *owner);
    virtual ~StringExpander();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    void setCapitalizeNext();
    BOOL differsFromName();
    BOOL canCheckName();
    BOOL differsFromLast(s32 c);
    void setAttr();
    void insertSlot();
    void handleTagFF02();
    void insertGlyphTag10();
    void insertGlyphTag9();
    void insertGlyphTag6();
    void insertNameLast2();
    void insertNameChar2();
    void insertNameChar1();
    void insertNameChar0();
    void appendTagTail();
    void appendRawTag();
    void appendChar();
    u8 expand(u8 a, u8 b);

    /* 0x24 */ StringBank *unk_24;
    /* 0x28 */ MsgTag unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x46 */ u8 unk_46;
    /* 0x47 */ u8 unk_47;
    /* 0x48 */ u8 unk_48;
};

class TabooCensorWriter : public MsgWalker {
public:
    TabooCensorWriter();
    virtual ~TabooCensorWriter();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    u8 appendChar(u32 c);
    s32 readChar();
    void copyChar();
    void censorChars(s32 n);
    void restartScan();
    void setDest(MsgString *p);
    void setSource(MsgString *p);
    void resetWriter();

    /* 0x24 */ s32 unk_24;
    /* 0x28 */ MsgString *unk_28;
    /* 0x2c */ MsgString *unk_2c;
    /* 0x30 */ u8 *unk_30;
    /* 0x34 */ u8 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
};

class MsgCharReader : public MsgWalker {
public:
    MsgCharReader();
    virtual ~MsgCharReader();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    /* 0x24 */ u32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u32 unk_2c;
};

class MsgString25 : public MsgString {
public:
    MsgString25();
    virtual ~MsgString25();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u32 unk_14[6];
};

class BmgReader1K : public BmgReader {
public:
    BmgReader1K();
    virtual ~BmgReader1K();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
    void clearBuffer();

    /* 0xa4 */ u8 unk_a4[0x400];
};

class StringMsgRequest : public MsgRequest {
public:
    StringMsgRequest();
    virtual ~StringMsgRequest();
    virtual u32 vfunc_0c();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ MsgString *unk_24;
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 unk_29;
};

class MsgString256 : public MsgString {
public:
    MsgString256();
    virtual ~MsgString256();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u8 unk_14[0x100];
};

class ArticleCacheEntry : public MsgString {
public:
    ArticleCacheEntry();
    virtual ~ArticleCacheEntry();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u8 unk_1c;
};

// text loader, global at 0x021ee50c
class StringBank {
public:
    StringBank();
    ~StringBank();

    s32 matchTabooWord();
    BOOL censorTaboo();
    BOOL beginTabooCheck(MsgString *buf);
    BOOL load(StringMsgRequest *req);
    void reset();

    /* 0x000 */ StringExpander unk_000;
    /* 0x04c */ BmgReader1K unk_04c;
    /* 0x4f0 */ MsgStringAttr unk_4f0;
    /* 0x4fc */ u8 unk_4fc[0x400];
    /* 0x8fc */ MsgString33 unk_8fc[11];
    /* 0xb38 */ Unk_Buf *unk_b38;
    /* 0xb3c */ TabooCensorWriter unk_b3c;
    /* 0xb7c */ MsgCharReader unk_b7c;
    /* 0xbac */ ArticleCacheEntry unk_bac[16];
};

struct Empty {
    Empty() {}
    ~Empty() {}
};

extern StringBank gStringBank;
extern "C" MsgString256 *String_GetTabooScratch(void);
extern "C" BOOL String_IsNonNullChar(u32 x);

StringBank gStringBank;

MsgString25::MsgString25() { clear(); }

MsgString25::~MsgString25() {}

u32 MsgString25::capacity() { return 0x19; }

u8 *MsgString25::data() { return (u8 *)this + 0x12; }

MsgString256::MsgString256() { clear(); }

MsgString256::~MsgString256() {}

u32 MsgString256::capacity() { return 0x100; }

u8 *MsgString256::data() { return (u8 *)this + 0x12; }

extern "C" MsgString256 *String_GetTabooScratch(void) {
    static MsgString256 inst;
    return &inst;
}

ArticleCacheEntry::ArticleCacheEntry() : unk_1c(0) { clear(); }

ArticleCacheEntry::~ArticleCacheEntry() {}

u32 ArticleCacheEntry::capacity() {
    return 10;
}

u8 *ArticleCacheEntry::data() {
    return (u8 *)this + 0x12;
}

BmgReader1K::BmgReader1K() : BmgReader(0) {}

BmgReader1K::~BmgReader1K() {}

void BmgReader1K::clearBuffer() {
    MI_CpuFill8(unk_a4, 0, 0x400);
}

u32 BmgReader1K::getBuffer() {
    return (u32)unk_a4;
}

u32 BmgReader1K::getBufferSize() {
    return 0x400;
}

StringExpander::StringExpander(StringBank *owner) : unk_24(owner) {
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_45 = 1;
    unk_46 = 0;
    unk_47 = 0;
    unk_48 = 0;
}

StringExpander::~StringExpander() {}

u8 StringExpander::expand(u8 a, u8 b) {
    unk_45 = 1;
    unk_40 = 0;
    unk_46 = a;
    unk_47 = b;
    unk_48 = 0;
    unk_3c = 0;
    reset();
    begin((u8 *)unk_24->unk_04c.getBuffer());
    run(FALSE);
    if (unk_45 && unk_47) {
        if (!canCheckName() || !differsFromName()) {
            unk_45 = 0;
        }
    }
    return unk_45;
}

void StringExpander::onBegin() {}

void StringExpander::onEnd() {}

void StringExpander::onChar(u32 c) {
    if (unk_48) {
        c = Text_ToUpper(c);
        unk_48 = 0;
    }
    if (unk_47 && unk_44) {
        if (!differsFromLast(c)) {
            unk_45 = 0;
        }
        unk_44 = 0;
    }
    if (unk_45) {
        unk_3c = c;
        appendChar();
    }
}

void StringExpander::onTag(u8 *cmd) {
    typedef void (StringExpander::*Fn)();
    unk_28.parse(cmd);
    s32 a = unk_28.unk_00;
    s32 b = unk_28.unk_04;
    Fn fn = 0;
    if (a == 0 && b == 2) {
        fn = &StringExpander::insertNameChar0;
    } else if (a == 0 && b == 3) {
        fn = &StringExpander::insertNameChar1;
    } else if (a == 0 && b == 4) {
        fn = &StringExpander::insertNameChar2;
    } else if (a == 0 && b == 5) {
        fn = &StringExpander::insertNameLast2;
    } else if (a == 0 && b == 6) {
        fn = &StringExpander::insertGlyphTag6;
    } else if (a == 0 && b == 9) {
        fn = &StringExpander::insertGlyphTag9;
    } else if (a == 0 && b == 10) {
        fn = &StringExpander::insertGlyphTag10;
    } else if (a == 0xff && b == 2) {
        fn = &StringExpander::handleTagFF02;
    } else if (a == 4 && unk_28.isSlotTag()) {
        fn = &StringExpander::insertSlot;
    } else if (a == 0xb && b == 0) {
        fn = &StringExpander::setAttr;
    } else if (a == 0xb && b == 3) {
        fn = &StringExpander::setCapitalizeNext;
    }
    if (fn) {
        (this->*fn)();
    } else {
        unk_45 = 0;
    }
}

BOOL StringExpander::canContinue() {
    return unk_45;
}

void StringExpander::appendChar() {
    s8 c = unk_3c;
    if (0x400 - unk_40 > 1) {
        u32 i = unk_40++;
        unk_24->unk_4fc[i] = c;
    } else {
        unk_45 = 0;
    }
}

void StringExpander::appendRawTag() {
    char *p = unk_28.unk_10;
    u32 n = unk_28.unk_08 + 5;
    if (0x400 - unk_40 > n) {
        for (u32 i = 0; i < n; i++) {
            (unk_24->unk_4fc + unk_40)[i] = p[i];
        }
        unk_40 += n;
    } else {
        unk_45 = 0;
    }
}

void StringExpander::appendTagTail() {
    u32 a;
    char *b, *c;
    unk_28.getAltTextArgs(&a, &b, &c);
    u32 n = unk_28.unk_08 - 1;
    BOOL ok = 0x400 - unk_40 > n;
    skip(a * 2);
    if (ok) {
        for (u32 i = 0; i < n; i++) {
            (unk_24->unk_4fc + unk_40)[i] = c[i];
        }
        unk_40 += n;
    } else {
        unk_45 = 0;
    }
}

void StringExpander::insertNameChar0() {
    if (unk_47) {
        u32 a = Msg_GetCharAt(unk_24->unk_b38->vfunc_0c(), 0);
        if (unk_48) {
            a = Text_ToUpper(a);
            unk_48 = 0;
        }
        if (String_IsNonNullChar(a)) {
            unk_3c = a;
            appendChar();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void StringExpander::insertNameChar1() {
    if (unk_47) {
        u32 a = Msg_GetCharAt(unk_24->unk_b38->vfunc_0c(), 1);
        if (unk_48) {
            a = Text_ToUpper(a);
            unk_48 = 0;
        }
        if (String_IsNonNullChar(a)) {
            unk_3c = a;
            appendChar();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void StringExpander::insertNameChar2() {
    if (unk_47) {
        u32 a = Msg_GetCharAt(unk_24->unk_b38->vfunc_0c(), 2);
        if (unk_48) {
            a = Text_ToUpper(a);
            unk_48 = 0;
        }
        if (String_IsNonNullChar(a)) {
            unk_3c = a;
            appendChar();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void StringExpander::insertNameLast2() {
    if (unk_47) {
        u32 v, b, a;
        v = unk_24->unk_b38->vfunc_0c();
        a = Msg_GetCharFromEnd(v, 0);
        b = Msg_GetCharFromEnd(v, 1);
        if (unk_48) {
            a = Text_ToUpper(a);
            unk_48 = 0;
        }
        if (unk_48) {
            b = Text_ToUpper(b);
            unk_48 = 0;
        }
        if (String_IsNonNullChar(a) && String_IsNonNullChar(b)) {
            unk_3c = b;
            appendChar();
            unk_3c = a;
            appendChar();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void StringExpander::insertGlyphTag6() {
    pushText(Text_GetSpecialCharStr5());
}

void StringExpander::insertGlyphTag9() {
    pushText(Text_GetSpecialCharStr9());
}

void StringExpander::insertGlyphTag10() {
    pushText(Text_GetSpecialCharStr10());
}

void StringExpander::handleTagFF02() {
    if (unk_46) {
        appendTagTail();
    } else {
        appendRawTag();
    }
}

void StringExpander::insertSlot() {
    pushText(unk_24->unk_8fc[unk_28.getSlotIndex()].data());
}

void StringExpander::setAttr() {
    u8 a, b, c;
    unk_28.getArgs3(&a, &b, &c);
    MsgStringAttr *p = &unk_24->unk_4f0;
    s32 v = a;
    if (a >= 3) {
        v = -1;
    }
    p->unk_04 = v;
    p->unk_08 = b;
    p->unk_09 = c;
}

void StringExpander::setCapitalizeNext() {
    unk_48 = 1;
}

extern "C" BOOL String_IsNonNullChar(u32 x) {
    BOOL r = TRUE;
    if (x == 0) {
        r = FALSE;
    }
    return r;
}

BOOL StringExpander::differsFromLast(s32 c) {
    BOOL r = TRUE;
    if (unk_3c == c) {
        r = FALSE;
    }
    return r;
}

BOOL StringExpander::canCheckName() {
    return TRUE;
}

BOOL StringExpander::differsFromName() {
    u8 *p = (u8 *)unk_24->unk_b38->vfunc_0c();
    return strcmp(p, (u8 *)unk_24->unk_4fc) != 0;
}

TabooCensorWriter::TabooCensorWriter() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
}

TabooCensorWriter::~TabooCensorWriter() {}

void TabooCensorWriter::resetWriter() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    reset();
}

void TabooCensorWriter::setSource(MsgString *p) {
    unk_28 = p;
    unk_30 = p->data();
}

void TabooCensorWriter::setDest(MsgString *p) {
    unk_2c = p;
}

void TabooCensorWriter::restartScan() {
    reset();
    begin(unk_30);
}

void TabooCensorWriter::censorChars(s32 n) {
    unk_24 = 2;
    unk_3c = n;
    run(FALSE);
    unk_24 = 0;
}

void TabooCensorWriter::copyChar() {
    unk_24 = 1;
    unk_3c = 1;
    run(FALSE);
    unk_24 = 0;
}

s32 TabooCensorWriter::readChar() {
    unk_24 = 3;
    unk_3c = 1;
    unk_38 = 0;
    run(FALSE);
    unk_24 = 0;
    return unk_38;
}

void TabooCensorWriter::onBegin() {}

void TabooCensorWriter::onEnd() {
    if (unk_24 == 1 || unk_24 == 2) {
        unk_34 = 1;
    }
}

void TabooCensorWriter::onChar(u32 c) {
    unk_38 = c;
    if (unk_24 == 1) {
        appendChar(c);
        if (c != 10) {
            unk_3c--;
        }
    } else if (unk_24 == 2) {
        if (c == 10) {
            appendChar(10);
        } else {
            appendChar(0x20);
            unk_3c--;
        }
    } else if (unk_24 == 3) {
        if (c != 10) {
            unk_3c--;
        }
    }
}

void TabooCensorWriter::onTag(u8 *p) {}

BOOL TabooCensorWriter::canContinue() {
    BOOL r = unk_3c > 0;
    if ((unk_24 == 1 || unk_24 == 2) && !r) {
        unk_30 = unk_04;
    }
    return r;
}

u8 TabooCensorWriter::appendChar(u32 c) {
    u8 buf[3];
    func_02133ef8(buf, 3);
    buf[0] = c;
    return unk_2c->append(buf);
}

MsgCharReader::MsgCharReader() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

MsgCharReader::~MsgCharReader() {}

void MsgCharReader::onBegin() {}

void MsgCharReader::onEnd() {}

void MsgCharReader::onChar(u32 c) {
    unk_2c = c;
    unk_28--;
}

void MsgCharReader::onTag(u8 *p) {}

BOOL MsgCharReader::canContinue() {
    return unk_28 > 0;
}

extern "C" BOOL String_Load(MsgString *buf, u8 *key, const char *name) {
    StringMsgRequest req;
    req.setFileName(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    gStringBank.reset();
    BOOL r = gStringBank.load(&req);
    return r;
}

extern "C" BOOL String_LoadResolveAltText(MsgString *buf, u8 *key, const char *name) {
    StringMsgRequest req;
    req.setFileName(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    req.unk_28 = 1;
    gStringBank.reset();
    BOOL r = gStringBank.load(&req);
    return r;
}

extern "C" BOOL String_Load2d(MsgString *buf, u8 *key, const char *name) {
    if (name == NULL) {
        name = "2d_menu";
    }
    StringMsgRequest req;
    req.unk_20 = 1;
    req.setFileName(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    gStringBank.reset();
    BOOL r = gStringBank.load(&req);
    return r;
}

extern "C" u8 String_SetSlot(u32 idx, MsgString *other) {
    return gStringBank.unk_8fc[idx].copy(other);
}

extern "C" s32 Str_LenN(const char *s, u32 max) {
    u32 i = 0;
    while (i < max) {
        if (s[i] == 0) {
            break;
        }
        i++;
    }
    return i;
}

extern "C" void Str_ShiftRight(char *s, u32 size, s32 start, s32 shift) {
    if (shift != 0) {
        s32 i = size - shift - 1;
        char *d = s + shift;
        for (; i >= start; i--) {
            d[i] = s[i];
        }
    }
}

extern "C" void Str_WriteDigitsReversed(char *s, u32 size, s32 n, s32 maxDigits) {
    if (n == 0) {
        s[0] = '0';
    } else {
        for (s32 i = 0; i < maxDigits && n != 0; i++) {
            s32 q = n / 10;
            s[i] = n - q * 10 + '0';
            n = q;
        }
    }
}

extern "C" void Str_PadFrontSpaces(char *s, u32 size, s32 width) {
    s32 n = width - Str_LenN(s, size);
    Str_ShiftRight(s, size, 0, n);
    for (s32 i = n - 1; i >= 0; i--) {
        s[i] = ' ';
    }
}

extern "C" void Str_PadBackSpaces(char *s, u32 size, s32 width) {
    s32 len = Str_LenN(s, size);
    for (; len < width; len++) {
        s[len] = ' ';
    }
}

extern "C" void Str_PadBackZeros(char *s, u32 size, s32 width) {
    s32 len = Str_LenN(s, size);
    for (; len < width; len++) {
        s[len] = '0';
    }
}

extern "C" void Str_InsertThousandsSeparators(char *s, u32 size, s32 minRun) {
    s32 i = 0;
    s32 run = 0;
    while (s[i] != 0) {
        char c = s[i];
        if (c >= '0' && c <= '9') {
            run++;
            if (run >= minRun) {
                run = 0;
                u32 j = i + 1;
                if (j < size) {
                    char *p = s + j;
                    char d = s[j];
                    if (d >= '0' && d <= '9') {
                        Str_ShiftRight(s, size, i, 1);
                        *p = ',';
                    }
                }
            }
        }
        i++;
    }
}

extern "C" void Str_Reverse(char *s, u32 size) {
    u32 len = Str_LenN(s, size);
    u32 half = len >> 1;
    u32 i = 0;
    s32 j = len - 1;
    for (; i < half; i++, j--) {
        char a = s[i];
        char b = s[j];
        s[i] = b;
        s[j] = a;
    }
}

extern "C" BOOL String_AppendUnitSuffix(MsgString *out, s32 val, s32 kind) {
    static const u8 t6[10] = {9, 9, 7, 8, 7, 7, 9, 7, 7, 7};
    static const u8 t9[10] = {0xd, 0xd, 0xc, 0xd, 0xc, 0xc, 0xd, 0xc, 0xd, 0xc};
    static const u8 t3[10] = {3, 3, 2, 4, 2, 2, 3, 2, 3, 3};
    MsgString33 tmp;
    u8 v = 0;
    s32 rem = val % 10;
    if (kind == 1) {
    } else if (kind == 2) {
        v = 1;
    } else if (kind == 3) {
        v = t3[rem];
    } else if (kind == 4) {
        v = 5;
    } else if (kind == 5) {
        v = 6;
    } else if (kind == 6) {
        v = t6[rem];
    } else if (kind == 7) {
        v = 0xa;
    } else if (kind == 8) {
        v = 0xb;
    } else if (kind == 9) {
        v = t9[rem];
    } else if (kind == 10) {
        v = 0xe;
    }
    u8 c = v;
    BOOL r = String_Load(&tmp, &c, "st_unit");
    if (r) {
        r &= out->appendString(&tmp);
        if (r) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" BOOL String_FormatNumber(MsgString *out, s32 val, s32 width, s32 mode, s32 kind, s32 unused) {
    char tmp[0xe];
    MI_CpuFill8(tmp, 0, 0xe);
    Str_WriteDigitsReversed(tmp, 0xe, val, width);
    switch (mode) {
    case 2:
    case 3:
        Str_PadFrontSpaces(tmp, 0xe, width);
    }
    switch (mode) {
    case 4:
    case 5:
        Str_PadBackSpaces(tmp, 0xe, width);
    }
    switch (mode) {
    case 6:
    case 7:
        Str_PadBackZeros(tmp, 0xe, width);
    }
    BOOL c = FALSE;
    u32 m = mode - 1;
    if (m <= 6 && ((1 << m) & 0x55)) {
        c = TRUE;
    }
    if (c) {
        Str_InsertThousandsSeparators(tmp, 0xe, 3);
    }
    Str_Reverse(tmp, 0xe);
    BOOL r = out->set((u8 *)tmp);
    if (kind != 0) {
        r &= String_AppendUnitSuffix(out, val, kind);
        if (r) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" BOOL String_FormatFixedPoint(MsgString *out, s32 val, s32 digits) {
    static const u8 dot[2] = {0x2e, 0};
    BOOL ok;
    s32 i;
    BOOL r1;
    s32 frac;
    s32 ip;
    BOOL res;
    s32 ipart;
    frac = FX_Modf(val, &ip);
    for (i = 0; i < digits; i++) {
        frac *= 10;
    }
    ipart = ip >> 12;
    MsgString25 a, b;
    MsgString33 c;
    r1 = String_FormatNumber(&a, ipart, 10, 0, 0, 0);
    ok = TRUE;
    if (!(r1 & ok)) {
        ok = FALSE;
    }
    ok &= String_FormatNumber(&b, frac >> 12, 10, 0, 0, 0);
    if (ok) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->copy(&a);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->append((u8 *)dot);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->appendString(&b);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    return res;
}

extern "C" BOOL String_GetWeekdayName(MsgString *buf, u32 idx, BOOL flag) {
    static const u8 tbl[8] = {0x17, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0};
    u8 c = tbl[idx];
    const char *name = "st_general";
    BOOL r;
    if (flag) {
        r = String_LoadResolveAltText(buf, &c, name);
    } else {
        r = String_Load(buf, &c, name);
    }
    return r;
}

extern "C" BOOL String_GetMonthName(MsgString *buf, u8 v) {
    u8 c = v - 1;
    return String_Load(buf, &c, "st_day_month");
}

extern "C" BOOL String_GetDayOrdinal(MsgString *buf, u8 v) {
    u8 c = v + 0xc;
    return String_Load(buf, &c, "st_day_month");
}

extern "C" BOOL String_MakeNickname(MsgString *buf, u32 x, u8 *key) {
    StringMsgRequest req;
    req.setFileName("st_nickn");
    req.unk_1e = *key;
    req.unk_24 = buf;
    req.unk_29 = 1;
    gStringBank.unk_b38 = (Unk_Buf *)x;
    gStringBank.reset();
    BOOL r = gStringBank.load(&req);
    gStringBank.unk_b38 = 0;
    return r;
}

extern "C" BOOL String_CensorTaboo(MsgString *buf) {
    BOOL r = FALSE;
    if (gStringBank.beginTabooCheck(buf)) {
        r = gStringBank.censorTaboo();
    }
    return r;
}

extern "C" ArticleCacheEntry *String_GetArticle(u8 *key) {
    ArticleCacheEntry *r = NULL;
    s32 i = *key;
    if (i < 0x10) {
        ArticleCacheEntry *e = &gStringBank.unk_bac[i];
        if (e->unk_1c != 0) {
            r = e;
        } else if (String_Load(e, key, "st_article")) {
            e->unk_1c = 1;
            r = e;
        }
    }
    return r;
}

void StringBank::reset() {
    unk_04c.clearBuffer();
    unk_4f0.reset();
    MI_CpuFill8(unk_4fc, 0, 0x400);
}

BOOL StringBank::load(StringMsgRequest *req) {
    char path[0x44];
    func_020639e8(path, "%s/%s.bmg", req->vfunc_0c(), req->unk_04);
    BOOL ok = unk_04c.open(path);
    BOOL t = ok ? unk_04c.loadMessage(&req->unk_1e) : FALSE;
    ok = ok & t;
    if (ok) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    unk_04c.close();
    if (ok) {
        MsgString *dst = req->unk_24;
        ok &= unk_000.expand(req->unk_28, req->unk_29);
        if (ok) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
        if (dst) {
            ok &= dst->set(unk_4fc);
            if (ok) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
            dst->unk_08.copyFrom(&unk_4f0);
        }
    }
    return ok;
}

BOOL StringBank::beginTabooCheck(MsgString *buf) {
    Empty e;
    StringMsgRequest req;
    req.setFileName("st_taboo");
    req.unk_1e = 0;
    reset();
    BOOL r = gStringBank.load(&req);
    if (r) {
        String_GetTabooScratch()->copy(buf);
        buf->clear();
        unk_b3c.resetWriter();
        unk_b3c.setSource(String_GetTabooScratch());
        unk_b3c.setDest(buf);
        unk_b7c.unk_24 = 0;
        unk_b7c.unk_28 = 0;
        unk_b7c.unk_2c = 0;
        unk_b7c.reset();
    }
    return r;
}

BOOL StringBank::censorTaboo() {
    BOOL result = FALSE;
    unk_b3c.restartScan();
    u8 *start = unk_4fc;
    while (unk_b3c.unk_34 == 0) {
        char *s = (char *)start;
        s32 n = 0;
        for (; s != NULL && *s != 0xa; s = Msg_SkipLines(s, 1)) {
            unk_b7c.unk_24 = (u32)s;
            n = matchTabooWord();
            if (n > 0) {
                break;
            }
        }
        unk_b3c.restartScan();
        if (n > 0) {
            unk_b3c.censorChars(n);
            result = TRUE;
        } else {
            unk_b3c.copyChar();
        }
    }
    return result;
}

s32 StringBank::matchTabooWord() {
    s32 count = 0;
    unk_b3c.restartScan();
    unk_b7c.reset();
    unk_b7c.begin((u8 *)unk_b7c.unk_24);
    for (;;) {
        unk_b7c.unk_28 = 1;
        unk_b7c.unk_2c = 0;
        unk_b7c.run(FALSE);
        u32 c = unk_b7c.unk_2c;
        if (c == 0xa || c == 0) {
            break;
        }
        if (String_CharEqualsIgnoreCase((u32)unk_b3c.readChar(), c)) {
            count++;
        } else {
            count = 0;
            break;
        }
    }
    return count;
}

extern "C" BOOL String_CharEqualsIgnoreCase(u32 a, u32 b) {
    BOOL r = FALSE;
    if (a == b) {
        r = TRUE;
    } else {
        u32 c = Text_ToUpper(a);
        if (c == b) {
            r = TRUE;
        }
    }
    return r;
}

StringBank::StringBank() : unk_000(this), unk_b38(0) {
    MI_CpuFill8(unk_4fc, 0, 0x400);
}

StringBank::~StringBank() {}

StringMsgRequest::StringMsgRequest() : unk_20(0), unk_24(0), unk_28(0), unk_29(0) {}

StringMsgRequest::~StringMsgRequest() {}

u32 StringMsgRequest::vfunc_0c() {
    static const char *const tbl[2] = {"/script/ENG/string", "/script/ENG/2d"};
    return (u32)tbl[unk_20];
}

