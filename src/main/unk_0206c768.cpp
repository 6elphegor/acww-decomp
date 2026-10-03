#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
s32 Mem_Copy(void *src, void *dst, s32 n);
}

extern "C" {
s32 Text_GetLength(void *p, s32 n);
}

extern "C" {
s32 Text_GetLineEnd(void *p, s32 n, s32 z);
}

extern "C" {
s32 Text_FitToWidth(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
BOOL Gfx2d_IsMainScreenLayer(u32 x);
}

extern "C" {
s32 Gfx2d_GetLayerBgIndex(u32 n);
}

extern u8 sMailCheckWords[0x8fc];
extern s16 sMailCheckWordEnds[0x1a];
extern u8 sMailCheckWordUses[0xc0];
extern const u8 sMailCheckSeparators[8];

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr unk_04;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;

    /* 0x04 */ u8 unk_04;
};

extern "C" BOOL String_Load(MsgString *buf, u8 *key, const char *name);

// ---------------------------------------------------------------------------------------------------------------------

class TalkBmgReader : public BmgReader {
public:
    TalkBmgReader();
    virtual ~TalkBmgReader();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
};

class MsgString513 : public MsgString {
public:
    MsgString513();
    virtual ~MsgString513();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[513];
};

// 0x200-byte destination buffer at +0xe
class EncodedString512 : public EncodedString {
public:
    EncodedString512();
    virtual ~EncodedString512();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 unk_0e[0x200];
};

// 0x28-byte destination buffer at +0xe
class EncodedString40 : public EncodedString {
public:
    EncodedString40();
    virtual ~EncodedString40();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 unk_0e[0x28];
};

class MsgString33B : public MsgString {
public:
    MsgString33B();
    virtual ~MsgString33B();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[33];
};

class MsgString129 : public MsgString {
public:
    MsgString129();
    virtual ~MsgString129();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[129];
};

class MsgString25B : public MsgString {
public:
    MsgString25B();
    virtual ~MsgString25B();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[25];
};

class LetterTextLine : public MsgString {
public:
    LetterTextLine();
    virtual ~LetterTextLine();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void setNameHighlight(u8 a, u8 b);
    void setHighlight(u8 a, u8 b, u32 c);
    void clearText();
    void setTextWithMarks(EncodedString *src, BOOL b);
    void setText(EncodedString *src);
    void redrawIfDirty(BOOL b);
    void createLabel();
    void freeLabel();
    void setTarget(u16 v, u32 x);

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
    /* 0x40 */ u16 unk_40;
    /* 0x42 */ u8 unk_42;
    /* 0x43 */ u8 unk_43;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x46 */ u8 unk_46;
    /* 0x47 */ u8 unk_47;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
};

class LetterLayout {
public:
    void redrawAll();
    void freeAllLabels();
    s32 getBodyLineOfPos(s32 v);
    s32 getBodyLineCount();
    u8 *getBodyLineStarts();

    /* 0x000 */ u8 unk_000[0x98];
    /* 0x098 */ u8 unk_098[4][0x4c];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
};

extern "C" BOOL String_LoadByIndexB(MsgString *buf, const char *name, u32 key);
extern "C" BOOL MailCheck_IsSeparator(u32 c);
extern "C" BOOL MailCheck_MatchWord(u8 *p, s32 n);
extern "C" BOOL MailCheck_MatchWordAt(u8 *p, s32 n, s32 off);

MsgString513::MsgString513() { clear(); }

// ---- MsgString513
MsgString513::~MsgString513() {}

u32 MsgString513::vfunc_08() { return 0x201; }

u8 *MsgString513::vfunc_0c() { return (u8 *)this + 0x12; }

extern "C" BOOL String_LoadByIndexB(MsgString *buf, const char *name, u32 key) {
    u8 k = key;
    return String_Load(buf, &k, name);
}

EncodedString512::EncodedString512() {}

// ---- EncodedString512
EncodedString512::~EncodedString512() {}

u32 EncodedString512::capacity() { return 0x200; }

u8 *EncodedString512::data() { return (u8 *)this + 0xe; }

extern "C" void MailCheck_LoadWordList() {
    MsgString513 src;
    EncodedString512 dst;
    s32 cnt = 0;
    u8 *out = sMailCheckWords;
    s32 i = 0;
    s32 z1 = 0, z2 = 0, z0 = 0;
    u8 *p;
    s32 j, n;
    for (; i < 0x1a; i++) {
        String_LoadByIndexB(&src, "st_mailcheck", i);
        dst.fromMsgString(&src);
        p = dst.unk_0e;
        while (*p != 0) {
            n = Text_GetLineEnd(p, 3, z0);
            if (n != 0) {
                if (cnt < 0x2fe) {
                    for (j = z1; j < n; j++) {
                        if (p[j] == 0x8d) p[j] = 0xb1;
                        out[j] = p[j];
                    }
                    for (; j < 3; j++) out[j] = z2;
                    out += 3;
                }
                cnt++;
            }
            p += n + 1;
        }
        sMailCheckWordEnds[i] = cnt;
    }
}

extern "C" s32 MailCheck_GradeLetter(u8 *self) {
    u8 buf[0x80];
    s32 cnt, matched, n, i, prev, isSep;
    u8 *p;
    Mem_Copy(self + 0x4c, buf, 0x80);
    cnt = 0;
    matched = 0;
    n = Text_GetLength(buf, 0x80);
    for (i = 0; i < 0xc0; i++) sMailCheckWordUses[i] = 0;
    for (i = 0; i < n; i++) {
        if (buf[i] >= 1 && buf[i] <= 0x1a) buf[i] += 0x1a;
    }
    prev = 1;
    for (i = 0; i < n; i++) {
        p = buf + i;
        isSep = MailCheck_IsSeparator(buf[i]);
        if (prev == 1 && isSep == 0) {
            cnt++;
            if (MailCheck_MatchWord(p, n - i)) matched++;
        }
        prev = isSep;
    }
    if (cnt >= 3) {
        if (((cnt + 3) >> 2) <= matched) return 2;
    }
    if (cnt >= 2) return 1;
    return 0;
}

extern "C" s32 Letter_GetBodyLength(u8 *self) {
    return Text_GetLength(self + 0x4c, 0x80);
}

extern "C" BOOL MailCheck_IsSeparator(u32 c) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (c == sMailCheckSeparators[i]) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MailCheck_MatchWord(u8 *p, s32 n) {
    u32 c = p[0];
    s32 idx;
    s32 lo, hi, k, off;
    if (c >= 0x1b && c <= 0x34) {
        idx = c - 0x1b;
    } else {
        return FALSE;
    }
    if (idx > 0) lo = sMailCheckWordEnds[idx - 1]; else lo = 0;
    hi = sMailCheckWordEnds[idx];
    k = lo;
    off = lo * 3;
    for (; k < hi; off += 3, k++) {
        if (MailCheck_MatchWordAt(p, n, off)) {
            s32 w = k >> 2;
            s32 sh, m, v;
            k &= 3;
            sh = k * 2;
            m = 3 << sh;
            v = (sMailCheckWordUses[w] & m) >> sh;
            if (v >= 2) return FALSE;
            sMailCheckWordUses[w] &= ~m;
            sMailCheckWordUses[w] |= (v + 1) << sh;
            return TRUE;
        }
    }
    return FALSE;
}

// ---- free functions
extern "C" BOOL MailCheck_MatchWordAt(u8 *p, s32 n, s32 off) {
    s32 i;
    u8 *t = sMailCheckWords + off;
    for (i = 0; i < 3; i++) {
        if (i >= n) {
            u32 c = t[i];
            if (c == 0x85 || c == 0) return TRUE;
            return FALSE;
        }
        u32 a = t[i];
        u32 b = p[i];
        if (b != a) {
            if (a == 0x85 || a == 0) {
                if (b == 0x86 || b == 0) return TRUE;
            }
            return FALSE;
        }
        if (b == 0x85) return TRUE;
    }
    return TRUE;
}

extern const u8 sMailCheckSeparators[8] = {0x85, 0x86, 0x87, 0x9b, 0x94, 0x92, 0, 0};
u8 sMailCheckWords[0x8fc];
s16 sMailCheckWordEnds[0x1a];
u8 sMailCheckWordUses[0xc0];
