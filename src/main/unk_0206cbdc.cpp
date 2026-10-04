#include "types.h"
#include "text/Unk_02050288.h"
#include "game/Unk_0206d0a0_Pad.h"
#include "game/Unk_0206d1d4_Src.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"

extern "C" {
s32 Text_GetLength(void *p, s32 n);
s32 Text_FitToWidth(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
void MsgTextLabel_Destroy(TextLabel *obj);
BOOL Gfx2d_IsMainScreenLayer(u32 x);
s32 Gfx2d_GetLayerBgIndex(u32 n);
s32 EncodedString_SetRaw(void *buf, const void *src, s32 len);
void Gfx2d_HideLayer(void *p);
void Gfx2d_SetLayerPriority(void *p, s32 v);
void Gfx2d_SetLayerControl(void *p, s32 a, s32 b, s32 c);
void Gfx2d_SetLayerOffset(void *p, s32 a, s32 b);
void *Letter_GetPaper(void *p);
void Menu_LoadPaperBg(void *a, void *b);
void Mem_Clear(void *p, s32 n);
void Letter_GetRecipientNameBytes(void *dst, void *src);
s32 Text_MeasureWidth(void *p, s32 n);
}

class EncodedStringBase {
public:
    virtual ~EncodedStringBase();
};



class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

    MsgStringAttr attr;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    u32 length;
    MsgStringAttr attr;
};

// 0x28-byte destination buffer at +0xe
class EncodedString40 : public EncodedString {
public:
    EncodedString40() {}
    virtual ~EncodedString40() {}
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x28];
};

class LetterTextLine : public MsgString {
public:
    LetterTextLine();
    virtual ~LetterTextLine();
    virtual u32 capacity();
    virtual u8 *data();

    void setNameHighlight(u8 a, u8 b);
    void setHighlight(u8 a, u8 b, u32 c);
    void clearText();
    void setTextWithMarks(EncodedString *src, BOOL b);
    void setText(EncodedString *src);
    void redrawIfDirty(BOOL b);
    void createLabel();
    void freeLabel();
    void setTarget(u16 v, u32 x);

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ TextLabel *textLabel;
    /* 0x40 */ u16 charBase;
    /* 0x42 */ u8 bgIndex;
    /* 0x43 */ u8 isSubScreen;
    /* 0x44 */ u8 isDirty;
    /* 0x45 */ u8 highlightStart;
    /* 0x46 */ u8 highlightLength;
    /* 0x47 */ u8 highlightAlt;
    /* 0x48 */ u8 nameHighlightStart;
    /* 0x49 */ u8 nameHighlightLength;
};

class LetterLayout {
public:
    void redrawAll();
    void freeAllLabels();
    s32 getBodyLineOfPos(s32 v);
    s32 getBodyLineCount();
    u8 *getBodyLineStarts();
    void highlightBodyRange(u32 a, u32 b, u32 c);

    /* 0x000 */ u8 headerLines[0x98];
    /* 0x098 */ u8 bodyLines[4][0x4c];
    /* 0x1c8 */ u8 recipientName[0x28];
    /* 0x1f0 */ s32 bodyLineStarts[5];
    /* 0x204 */ s32 bodyLineCount;
};



class LetterRenderer : public LetterLayout {
public:
    LetterRenderer();
    ~LetterRenderer();
    void highlightGreeting(u32 a, u32 b);
    void setSignature(u8 *data);
    void setBody(u8 *src, BOOL flag);
    void setGreeting(Unk_0206d1d4_Src *src, u8 *out);
    void loadRecipientName(void *src);
    s32 getRecipientNameLength();
    void show(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void redraw();
    void release();
    void setLayer(s32 v);
    void loadLetterScreen(u32 v);

    /* 0x208 */ s32 recipientNameLength;
    /* 0x20c */ s32 recipientNameWidth;
};

extern "C" s32 LetterLayout_SplitBody(void *unused, u8 *a, s32 *b, s32 *c);

// ---- LetterRenderer
void LetterRenderer::setLayer(s32 v) {
    s32 i;
    ((LetterTextLine *)this)->setTarget(0x75, v);
    ((LetterTextLine *)headerLines + 1)->setTarget(0x180, v);
    for (i = 0; i < 4; i++) {
        ((LetterTextLine *)bodyLines[i])->setTarget(i * 0x28 + 0x9d, v);
    }
    recipientNameLength = 0;
}

void LetterRenderer::release() {
    freeAllLabels();
}

void LetterRenderer::redraw() {
    freeAllLabels();
    redrawAll();
}

void LetterRenderer::show(Unk_0206d1d4_Src *src, void *a, void *b, s32 c) {
    Gfx2d_HideLayer(b);
    Gfx2d_SetLayerPriority(b, 1);
    Gfx2d_SetLayerControl(b, 0, 0, 0);
    Menu_LoadPaperBg(Letter_GetPaper(src), b);
    Gfx2d_SetLayerOffset(b, 0, 0);
    Gfx2d_HideLayer(a);
    Gfx2d_SetLayerPriority(a, c);
    Gfx2d_SetLayerControl(a, 0, 0, 0);
    loadRecipientName(src);
    setGreeting(src, 0);
    setBody((u8 *)src + 0x4c, 0);
    setSignature((u8 *)src + 0xcc);
    loadLetterScreen((u32)a);
    redraw();
    Gfx2d_SetLayerOffset(a, 0, 0);
}

s32 LetterRenderer::getRecipientNameLength() {
    return recipientNameLength;
}

void LetterRenderer::loadRecipientName(void *src) {
    Mem_Clear(recipientName, 0x28);
    Letter_GetRecipientNameBytes(src, recipientName);
    recipientNameLength = Text_GetLength(recipientName, 0x28);
    recipientNameWidth = Text_MeasureWidth(recipientName, 0x28);
}

void LetterRenderer::setGreeting(Unk_0206d1d4_Src *src, u8 *out) {
    u8 tmp[0x28];
    s32 n, j, k;
    ((LetterTextLine *)this)->clearText();
    if (out == 0) {
        out = tmp;
    }
    n = 0;
    j = n;
    while (n < src->cnt) {
        out[n] = src->name[j];
        n++;
        j++;
    }
    k = 0;
    while (k < recipientNameLength) {
        out[n] = recipientName[k];
        n++;
        k++;
    }
    k = 0;
    while (n < 0x28) {
        if (j < 0x18) {
            out[n] = src->name[j];
        } else {
            out[n] = k;
        }
        n++;
        j++;
    }
    if (recipientNameLength > 0) {
        ((LetterTextLine *)this)->setNameHighlight(src->cnt, recipientNameLength);
    }
    EncodedString40 buf;
    EncodedString_SetRaw(&buf, out, 0x28);
    ((LetterTextLine *)this)->setText(&buf);
}

void LetterRenderer::setBody(u8 *src, BOOL flag) {
    LetterLayout_SplitBody(this, src, bodyLineStarts, &bodyLineCount);
    EncodedString40 buf;
    u8 z[0x28];
    s32 i;
    s32 zero;
    i = 0;
    z[0] = 0;
    zero = 0;
    for (; i < 4; i++) {
        s32 diff = bodyLineStarts[i + 1] - bodyLineStarts[i];
        LetterTextLine *cell = (LetterTextLine *)bodyLines[i];
        cell->clearText();
        if (diff != 0) {
            EncodedString_SetRaw(&buf, src + bodyLineStarts[i], diff);
            if (flag) {
                cell->setTextWithMarks(&buf, i == bodyLineCount ? 1 : zero);
            } else {
                cell->setText(&buf);
            }
        } else if (flag && i == bodyLineCount) {
            EncodedString_SetRaw(&buf, z, 1);
            cell->setTextWithMarks(&buf, 1);
        } else {
            cell->clearText();
        }
    }
}

void LetterRenderer::setSignature(u8 *data) {
    EncodedString40 buf;
    ((LetterTextLine *)headerLines + 1)->clearText();
    EncodedString_SetRaw(&buf, data, 0x20);
    ((LetterTextLine *)headerLines + 1)->setText(&buf);
}

void LetterRenderer::highlightGreeting(u32 a, u32 b) {
    Unk_0206d0a0_Pad pad;
    u32 u;
    ((LetterTextLine *)this)->setHighlight(a, b, u);
}

void LetterLayout::highlightBodyRange(u32 a, u32 b, u32 c) {
    s32 i;
    u32 pos, cnt, end, len;
    pos = 0;
    for (i = 0; i < 4; i++) {
        len = bodyLineStarts[i + 1] - bodyLineStarts[i];
        if (len == 0) break;
        if (a >= pos) {
            end = pos + len;
            if (a < end) {
                if (end > a + b) cnt = b;
                else cnt = len - (a - pos);
                ((LetterTextLine *)bodyLines[i])->setHighlight(a - pos, cnt, c);
                a = (u8)end;
                b -= cnt;
                if (b == 0) break;
            }
        }
        pos += len;
    }
}

extern "C" void LetterLayout_HighlightSignature(u8 *self, u32 a, u32 b) {
    u32 u;
    ((LetterTextLine *)(self + 0x4c))->setHighlight(a, b, u);
}

extern "C" s32 Text_SplitLines(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);

extern "C" s32 LetterLayout_SplitBody(void *unused, u8 *a, s32 *b, s32 *c) {
    return Text_SplitLines(a, b, c, 0x80, 0x28, 0x96, 4);
}

extern "C" s32 Text_SplitLines(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines) {
    s32 pos = 0;
    s32 w = maxw;
    s32 i;
    s32 outLen;
    *cnt = 0;
    for (i = 0; i < maxLines; i++) {
        s32 rem = len - pos;
        s32 r;
        if (w > rem) w = rem;
        r = Text_FitToWidth(str + pos, w, pxw, &outLen, 1);
        starts[i] = pos;
        pos += outLen;
        if (r != 0) {
            if (r == 3 && i == maxLines - 1) {
                starts[i + 1] = pos;
                return 0;
            }
            (*cnt)++;
        }
    }
    starts[i] = pos;
    if (pos == len || str[pos] == 0) return 1;
    return 0;
}

u8 *LetterLayout::getBodyLineStarts() { return (u8 *)bodyLineStarts; }
s32 LetterLayout::getBodyLineCount() { return bodyLineCount; }

s32 LetterLayout::getBodyLineOfPos(s32 v) {
    s32 n, i;
    for (i = 0, n = bodyLineCount; i < n; i++) {
        if (v < bodyLineStarts[i + 1]) return i;
    }
    if (n >= 4) n = 3;
    return n;
}

void LetterLayout::freeAllLabels() {
    s32 i;
    ((LetterTextLine *)this)->freeLabel();
    ((LetterTextLine *)((u8 *)this + 0x4c))->freeLabel();
    for (i = 0; i < 4; i++) {
        ((LetterTextLine *)bodyLines[i])->freeLabel();
    }
}

void LetterLayout::redrawAll() {
    s32 i;
    ((LetterTextLine *)this)->redrawIfDirty(0);
    ((LetterTextLine *)((u8 *)this + 0x4c))->redrawIfDirty(1);
    for (i = 0; i < 4; i++) {
        ((LetterTextLine *)bodyLines[i])->redrawIfDirty(0);
    }
}

u32 EncodedString40::capacity() { return 0x28; }
u8 *EncodedString40::data() { return (u8 *)this + 0xe; }

LetterTextLine::LetterTextLine() {
    clear();
    textLabel = NULL;
    charBase = 0;
    highlightStart = 0;
    highlightLength = 0;
    nameHighlightStart = 0;
    nameHighlightLength = 0;
}

LetterTextLine::~LetterTextLine() { freeLabel(); }

u32 LetterTextLine::capacity() { return 0x29; }

void LetterTextLine::setTarget(u16 v, u32 x) {
    charBase = v;
    isDirty = 0;
    isSubScreen = Gfx2d_IsMainScreenLayer(x) == 0 ? 1 : 0;
    bgIndex = Gfx2d_GetLayerBgIndex(x);
}

u8 *LetterTextLine::data() { return (u8 *)this + 0x12; }

void LetterTextLine::freeLabel() {
    if (textLabel != NULL) {
        MsgTextLabel_Destroy(textLabel);
        textLabel = NULL;
    }
}

void LetterTextLine::createLabel() {
    if (textLabel == NULL) {
        textLabel = MsgTextLabel_CreateVram(charBase, 0x14, 2);
        if (textLabel != NULL) {
            u8 a, b;
            textLabel->vramLoader = bgIndex;
            if (isSubScreen) textLabel->copyMode = 1;
            else textLabel->copyMode = 2;
            textLabel->rowStride1K = 0;
            textLabel->bgColor = 0;
            textLabel->fgColor = 0xf;
            if (highlightAlt) {
                a = 0xb;
                b = 0;
            } else {
                a = 0xe;
                b = 0xd;
            }
            if (highlightLength) {
                if (nameHighlightLength) {
                    textLabel->setHighlights(a, b, highlightStart, highlightLength, 0xc, 0, nameHighlightStart, nameHighlightLength);
                } else {
                    textLabel->setHighlight(a, b, highlightStart, highlightLength);
                }
            } else if (nameHighlightLength) {
                textLabel->setHighlight(0xc, 0, nameHighlightStart, nameHighlightLength);
            }
        }
    }
}

void LetterTextLine::redrawIfDirty(BOOL b) {
    if (isDirty) {
        createLabel();
        if (textLabel) {
            TextLabel *t;
            isDirty = 0;
            t = textLabel;
            t->textStart = (u32)data();
            if (b) textLabel->alignRight();
            textLabel->requestRedraw();
        }
    }
}

void LetterTextLine::setText(EncodedString *src) {
    fromEncoded(src, 0, 0);
    isDirty = 1;
}

void LetterTextLine::setTextWithMarks(EncodedString *src, BOOL b) {
    fromEncoded(src, 1, b);
    isDirty = 1;
}

void LetterTextLine::clearText() {
    clear();
    highlightStart = 0;
    highlightLength = 0;
    highlightAlt = 0;
    nameHighlightStart = 0;
    nameHighlightLength = 0;
    isDirty = 1;
}

void LetterTextLine::setHighlight(u8 a, u8 b, u32 c) {
    highlightStart = a;
    highlightLength = b;
    highlightAlt = c;
}

void LetterTextLine::setNameHighlight(u8 a, u8 b) {
    nameHighlightStart = a;
    nameHighlightLength = b;
}
