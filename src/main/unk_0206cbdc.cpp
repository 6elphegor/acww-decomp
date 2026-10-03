#include "types.h"
#include "text/Unk_02050288.h"

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

class MsgStringBase {
public:
    virtual ~MsgStringBase();
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    s32 form;
    u8 attrA;
    u8 attrB;
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

    /* 0x0e */ u8 unk_0e[0x28];
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
    void highlightBodyRange(u32 a, u32 b, u32 c);

    /* 0x000 */ u8 unk_000[0x98];
    /* 0x098 */ u8 unk_098[4][0x4c];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
};

struct Unk_0206d0a0_Pad {
    s32 v[1];
    Unk_0206d0a0_Pad() {}
    ~Unk_0206d0a0_Pad() {}
};

struct Unk_0206d1d4_Src {
    u8 pad_00[0x34];
    u8 name[0x18];
    u8 pad_4c[0xa0];
    u8 cnt;
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

    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
};

extern "C" s32 LetterLayout_SplitBody(void *unused, u8 *a, s32 *b, s32 *c);

// ---- LetterRenderer
void LetterRenderer::setLayer(s32 v) {
    s32 i;
    ((LetterTextLine *)this)->setTarget(0x75, v);
    ((LetterTextLine *)unk_000 + 1)->setTarget(0x180, v);
    for (i = 0; i < 4; i++) {
        ((LetterTextLine *)unk_098[i])->setTarget(i * 0x28 + 0x9d, v);
    }
    unk_208 = 0;
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
    return unk_208;
}

void LetterRenderer::loadRecipientName(void *src) {
    Mem_Clear(unk_1c8, 0x28);
    Letter_GetRecipientNameBytes(src, unk_1c8);
    unk_208 = Text_GetLength(unk_1c8, 0x28);
    unk_20c = Text_MeasureWidth(unk_1c8, 0x28);
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
    while (k < unk_208) {
        out[n] = unk_1c8[k];
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
    if (unk_208 > 0) {
        ((LetterTextLine *)this)->setNameHighlight(src->cnt, unk_208);
    }
    EncodedString40 buf;
    EncodedString_SetRaw(&buf, out, 0x28);
    ((LetterTextLine *)this)->setText(&buf);
}

void LetterRenderer::setBody(u8 *src, BOOL flag) {
    LetterLayout_SplitBody(this, src, unk_1f0, &unk_204);
    EncodedString40 buf;
    u8 z[0x28];
    s32 i;
    s32 zero;
    i = 0;
    z[0] = 0;
    zero = 0;
    for (; i < 4; i++) {
        s32 diff = unk_1f0[i + 1] - unk_1f0[i];
        LetterTextLine *cell = (LetterTextLine *)unk_098[i];
        cell->clearText();
        if (diff != 0) {
            EncodedString_SetRaw(&buf, src + unk_1f0[i], diff);
            if (flag) {
                cell->setTextWithMarks(&buf, i == unk_204 ? 1 : zero);
            } else {
                cell->setText(&buf);
            }
        } else if (flag && i == unk_204) {
            EncodedString_SetRaw(&buf, z, 1);
            cell->setTextWithMarks(&buf, 1);
        } else {
            cell->clearText();
        }
    }
}

void LetterRenderer::setSignature(u8 *data) {
    EncodedString40 buf;
    ((LetterTextLine *)unk_000 + 1)->clearText();
    EncodedString_SetRaw(&buf, data, 0x20);
    ((LetterTextLine *)unk_000 + 1)->setText(&buf);
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
        len = unk_1f0[i + 1] - unk_1f0[i];
        if (len == 0) break;
        if (a >= pos) {
            end = pos + len;
            if (a < end) {
                if (end > a + b) cnt = b;
                else cnt = len - (a - pos);
                ((LetterTextLine *)unk_098[i])->setHighlight(a - pos, cnt, c);
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

u8 *LetterLayout::getBodyLineStarts() { return (u8 *)unk_1f0; }
s32 LetterLayout::getBodyLineCount() { return unk_204; }

s32 LetterLayout::getBodyLineOfPos(s32 v) {
    s32 n, i;
    for (i = 0, n = unk_204; i < n; i++) {
        if (v < unk_1f0[i + 1]) return i;
    }
    if (n >= 4) n = 3;
    return n;
}

void LetterLayout::freeAllLabels() {
    s32 i;
    ((LetterTextLine *)this)->freeLabel();
    ((LetterTextLine *)((u8 *)this + 0x4c))->freeLabel();
    for (i = 0; i < 4; i++) {
        ((LetterTextLine *)unk_098[i])->freeLabel();
    }
}

void LetterLayout::redrawAll() {
    s32 i;
    ((LetterTextLine *)this)->redrawIfDirty(0);
    ((LetterTextLine *)((u8 *)this + 0x4c))->redrawIfDirty(1);
    for (i = 0; i < 4; i++) {
        ((LetterTextLine *)unk_098[i])->redrawIfDirty(0);
    }
}

u32 EncodedString40::capacity() { return 0x28; }
u8 *EncodedString40::data() { return (u8 *)this + 0xe; }

LetterTextLine::LetterTextLine() {
    clear();
    unk_3c = NULL;
    unk_40 = 0;
    unk_45 = 0;
    unk_46 = 0;
    unk_48 = 0;
    unk_49 = 0;
}

LetterTextLine::~LetterTextLine() { freeLabel(); }

u32 LetterTextLine::capacity() { return 0x29; }

void LetterTextLine::setTarget(u16 v, u32 x) {
    unk_40 = v;
    unk_44 = 0;
    unk_43 = Gfx2d_IsMainScreenLayer(x) == 0 ? 1 : 0;
    unk_42 = Gfx2d_GetLayerBgIndex(x);
}

u8 *LetterTextLine::data() { return (u8 *)this + 0x12; }

void LetterTextLine::freeLabel() {
    if (unk_3c != NULL) {
        MsgTextLabel_Destroy(unk_3c);
        unk_3c = NULL;
    }
}

void LetterTextLine::createLabel() {
    if (unk_3c == NULL) {
        unk_3c = MsgTextLabel_CreateVram(unk_40, 0x14, 2);
        if (unk_3c != NULL) {
            u8 a, b;
            unk_3c->vramLoader = unk_42;
            if (unk_43) unk_3c->copyMode = 1;
            else unk_3c->copyMode = 2;
            unk_3c->rowStride1K = 0;
            unk_3c->bgColor = 0;
            unk_3c->fgColor = 0xf;
            if (unk_47) {
                a = 0xb;
                b = 0;
            } else {
                a = 0xe;
                b = 0xd;
            }
            if (unk_46) {
                if (unk_49) {
                    unk_3c->setHighlights(a, b, unk_45, unk_46, 0xc, 0, unk_48, unk_49);
                } else {
                    unk_3c->setHighlight(a, b, unk_45, unk_46);
                }
            } else if (unk_49) {
                unk_3c->setHighlight(0xc, 0, unk_48, unk_49);
            }
        }
    }
}

void LetterTextLine::redrawIfDirty(BOOL b) {
    if (unk_44) {
        createLabel();
        if (unk_3c) {
            TextLabel *t;
            unk_44 = 0;
            t = unk_3c;
            t->textStart = (u32)data();
            if (b) unk_3c->alignRight();
            unk_3c->requestRedraw();
        }
    }
}

void LetterTextLine::setText(EncodedString *src) {
    fromEncoded(src, 0, 0);
    unk_44 = 1;
}

void LetterTextLine::setTextWithMarks(EncodedString *src, BOOL b) {
    fromEncoded(src, 1, b);
    unk_44 = 1;
}

void LetterTextLine::clearText() {
    clear();
    unk_45 = 0;
    unk_46 = 0;
    unk_47 = 0;
    unk_48 = 0;
    unk_49 = 0;
    unk_44 = 1;
}

void LetterTextLine::setHighlight(u8 a, u8 b, u32 c) {
    unk_45 = a;
    unk_46 = b;
    unk_47 = c;
}

void LetterTextLine::setNameHighlight(u8 a, u8 b) {
    unk_48 = a;
    unk_49 = b;
}
