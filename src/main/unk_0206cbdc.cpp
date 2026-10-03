#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
s32 func_020512e0(void *p, s32 n);
s32 func_02051270(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
void MsgTextLabel_Destroy(TextLabel *obj);
BOOL Gfx2d_IsMainScreenLayer(u32 x);
s32 Gfx2d_GetLayerBgIndex(u32 n);
s32 func_020a78a4(void *buf, const void *src, s32 len);
void Gfx2d_HideLayer(void *p);
void Gfx2d_SetLayerPriority(void *p, s32 v);
void Gfx2d_SetLayerControl(void *p, s32 a, s32 b, s32 c);
void Gfx2d_SetLayerOffset(void *p, s32 a, s32 b);
void *func_02065c8c(void *p);
void Menu_LoadPaperBg(void *a, void *b);
void Mem_Clear(void *p, s32 n);
void func_02065604(void *dst, void *src);
s32 func_02051348(void *p, s32 n);
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
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

    MsgStringAttr unk_04;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    u32 unk_04;
    MsgStringAttr unk_08;
};

// 0x28-byte destination buffer at +0xe
class Unk_020ddf5c : public EncodedString {
public:
    Unk_020ddf5c() {}
    virtual ~Unk_020ddf5c() {}
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 unk_0e[0x28];
};

class Unk_020ddf44 : public MsgString {
public:
    Unk_020ddf44();
    virtual ~Unk_020ddf44();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206cc14(u8 a, u8 b);
    void func_0206cc20(u8 a, u8 b, u32 c);
    void func_0206cc38();
    void func_0206cc6c(EncodedString *src, BOOL b);
    void func_0206cc84(EncodedString *src);
    void func_0206cc9c(BOOL b);
    void func_0206cce0();
    void func_0206cdb0();
    void func_0206cdcc(u16 v, u32 x);

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

class Unk_0206ce98 {
public:
    void func_0206ce98();
    void func_0206ced0();
    s32 func_0206cefc(s32 v);
    s32 func_0206cf34();
    u8 *func_0206cf40();
    void func_0206d018(u32 a, u32 b, u32 c);

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

class Unk_0206d0a0 : public Unk_0206ce98 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d0a0(u32 a, u32 b);
    void func_0206d0b8(u8 *data);
    void func_0206d0fc(u8 *src, BOOL flag);
    void func_0206d1d4(Unk_0206d1d4_Src *src, u8 *out);
    void func_0206d288(void *src);
    s32 func_0206d2d4();
    void func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void func_0206d380();
    void func_0206d394();
    void func_0206d39c(s32 v);
    void func_0206d3f4(u32 v);

    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
};

extern "C" s32 func_0206cfdc(void *unused, u8 *a, s32 *b, s32 *c);

// ---- Unk_0206d0a0
void Unk_0206d0a0::func_0206d39c(s32 v) {
    s32 i;
    ((Unk_020ddf44 *)this)->func_0206cdcc(0x75, v);
    ((Unk_020ddf44 *)unk_000 + 1)->func_0206cdcc(0x180, v);
    for (i = 0; i < 4; i++) {
        ((Unk_020ddf44 *)unk_098[i])->func_0206cdcc(i * 0x28 + 0x9d, v);
    }
    unk_208 = 0;
}

void Unk_0206d0a0::func_0206d394() {
    func_0206ced0();
}

void Unk_0206d0a0::func_0206d380() {
    func_0206ced0();
    func_0206ce98();
}

void Unk_0206d0a0::func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c) {
    Gfx2d_HideLayer(b);
    Gfx2d_SetLayerPriority(b, 1);
    Gfx2d_SetLayerControl(b, 0, 0, 0);
    Menu_LoadPaperBg(func_02065c8c(src), b);
    Gfx2d_SetLayerOffset(b, 0, 0);
    Gfx2d_HideLayer(a);
    Gfx2d_SetLayerPriority(a, c);
    Gfx2d_SetLayerControl(a, 0, 0, 0);
    func_0206d288(src);
    func_0206d1d4(src, 0);
    func_0206d0fc((u8 *)src + 0x4c, 0);
    func_0206d0b8((u8 *)src + 0xcc);
    func_0206d3f4((u32)a);
    func_0206d380();
    Gfx2d_SetLayerOffset(a, 0, 0);
}

s32 Unk_0206d0a0::func_0206d2d4() {
    return unk_208;
}

void Unk_0206d0a0::func_0206d288(void *src) {
    Mem_Clear(unk_1c8, 0x28);
    func_02065604(src, unk_1c8);
    unk_208 = func_020512e0(unk_1c8, 0x28);
    unk_20c = func_02051348(unk_1c8, 0x28);
}

void Unk_0206d0a0::func_0206d1d4(Unk_0206d1d4_Src *src, u8 *out) {
    u8 tmp[0x28];
    s32 n, j, k;
    ((Unk_020ddf44 *)this)->func_0206cc38();
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
        ((Unk_020ddf44 *)this)->func_0206cc14(src->cnt, unk_208);
    }
    Unk_020ddf5c buf;
    func_020a78a4(&buf, out, 0x28);
    ((Unk_020ddf44 *)this)->func_0206cc84(&buf);
}

void Unk_0206d0a0::func_0206d0fc(u8 *src, BOOL flag) {
    func_0206cfdc(this, src, unk_1f0, &unk_204);
    Unk_020ddf5c buf;
    u8 z[0x28];
    s32 i;
    s32 zero;
    i = 0;
    z[0] = 0;
    zero = 0;
    for (; i < 4; i++) {
        s32 diff = unk_1f0[i + 1] - unk_1f0[i];
        Unk_020ddf44 *cell = (Unk_020ddf44 *)unk_098[i];
        cell->func_0206cc38();
        if (diff != 0) {
            func_020a78a4(&buf, src + unk_1f0[i], diff);
            if (flag) {
                cell->func_0206cc6c(&buf, i == unk_204 ? 1 : zero);
            } else {
                cell->func_0206cc84(&buf);
            }
        } else if (flag && i == unk_204) {
            func_020a78a4(&buf, z, 1);
            cell->func_0206cc6c(&buf, 1);
        } else {
            cell->func_0206cc38();
        }
    }
}

void Unk_0206d0a0::func_0206d0b8(u8 *data) {
    Unk_020ddf5c buf;
    ((Unk_020ddf44 *)unk_000 + 1)->func_0206cc38();
    func_020a78a4(&buf, data, 0x20);
    ((Unk_020ddf44 *)unk_000 + 1)->func_0206cc84(&buf);
}

void Unk_0206d0a0::func_0206d0a0(u32 a, u32 b) {
    Unk_0206d0a0_Pad pad;
    u32 u;
    ((Unk_020ddf44 *)this)->func_0206cc20(a, b, u);
}

void Unk_0206ce98::func_0206d018(u32 a, u32 b, u32 c) {
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
                ((Unk_020ddf44 *)unk_098[i])->func_0206cc20(a - pos, cnt, c);
                a = (u8)end;
                b -= cnt;
                if (b == 0) break;
            }
        }
        pos += len;
    }
}

extern "C" void func_0206d000(u8 *self, u32 a, u32 b) {
    u32 u;
    ((Unk_020ddf44 *)(self + 0x4c))->func_0206cc20(a, b, u);
}

extern "C" s32 func_0206cf4c(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);

extern "C" s32 func_0206cfdc(void *unused, u8 *a, s32 *b, s32 *c) {
    return func_0206cf4c(a, b, c, 0x80, 0x28, 0x96, 4);
}

extern "C" s32 func_0206cf4c(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines) {
    s32 pos = 0;
    s32 w = maxw;
    s32 i;
    s32 outLen;
    *cnt = 0;
    for (i = 0; i < maxLines; i++) {
        s32 rem = len - pos;
        s32 r;
        if (w > rem) w = rem;
        r = func_02051270(str + pos, w, pxw, &outLen, 1);
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

u8 *Unk_0206ce98::func_0206cf40() { return (u8 *)unk_1f0; }
s32 Unk_0206ce98::func_0206cf34() { return unk_204; }

s32 Unk_0206ce98::func_0206cefc(s32 v) {
    s32 n, i;
    for (i = 0, n = unk_204; i < n; i++) {
        if (v < unk_1f0[i + 1]) return i;
    }
    if (n >= 4) n = 3;
    return n;
}

void Unk_0206ce98::func_0206ced0() {
    s32 i;
    ((Unk_020ddf44 *)this)->func_0206cdb0();
    ((Unk_020ddf44 *)((u8 *)this + 0x4c))->func_0206cdb0();
    for (i = 0; i < 4; i++) {
        ((Unk_020ddf44 *)unk_098[i])->func_0206cdb0();
    }
}

void Unk_0206ce98::func_0206ce98() {
    s32 i;
    ((Unk_020ddf44 *)this)->func_0206cc9c(0);
    ((Unk_020ddf44 *)((u8 *)this + 0x4c))->func_0206cc9c(1);
    for (i = 0; i < 4; i++) {
        ((Unk_020ddf44 *)unk_098[i])->func_0206cc9c(0);
    }
}

u32 Unk_020ddf5c::capacity() { return 0x28; }
u8 *Unk_020ddf5c::data() { return (u8 *)this + 0xe; }

Unk_020ddf44::Unk_020ddf44() {
    clear();
    unk_3c = NULL;
    unk_40 = 0;
    unk_45 = 0;
    unk_46 = 0;
    unk_48 = 0;
    unk_49 = 0;
}

Unk_020ddf44::~Unk_020ddf44() { func_0206cdb0(); }

u32 Unk_020ddf44::vfunc_08() { return 0x29; }

void Unk_020ddf44::func_0206cdcc(u16 v, u32 x) {
    unk_40 = v;
    unk_44 = 0;
    unk_43 = Gfx2d_IsMainScreenLayer(x) == 0 ? 1 : 0;
    unk_42 = Gfx2d_GetLayerBgIndex(x);
}

u8 *Unk_020ddf44::vfunc_0c() { return (u8 *)this + 0x12; }

void Unk_020ddf44::func_0206cdb0() {
    if (unk_3c != NULL) {
        MsgTextLabel_Destroy(unk_3c);
        unk_3c = NULL;
    }
}

void Unk_020ddf44::func_0206cce0() {
    if (unk_3c == NULL) {
        unk_3c = MsgTextLabel_CreateVram(unk_40, 0x14, 2);
        if (unk_3c != NULL) {
            u8 a, b;
            unk_3c->unk_2c = unk_42;
            if (unk_43) unk_3c->unk_50 = 1;
            else unk_3c->unk_50 = 2;
            unk_3c->unk_55 = 0;
            unk_3c->unk_39 = 0;
            unk_3c->unk_38 = 0xf;
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

void Unk_020ddf44::func_0206cc9c(BOOL b) {
    if (unk_44) {
        func_0206cce0();
        if (unk_3c) {
            TextLabel *t;
            unk_44 = 0;
            t = unk_3c;
            t->unk_10 = (u32)vfunc_0c();
            if (b) unk_3c->alignRight();
            unk_3c->requestRedraw();
        }
    }
}

void Unk_020ddf44::func_0206cc84(EncodedString *src) {
    fromEncoded(src, 0, 0);
    unk_44 = 1;
}

void Unk_020ddf44::func_0206cc6c(EncodedString *src, BOOL b) {
    fromEncoded(src, 1, b);
    unk_44 = 1;
}

void Unk_020ddf44::func_0206cc38() {
    clear();
    unk_45 = 0;
    unk_46 = 0;
    unk_47 = 0;
    unk_48 = 0;
    unk_49 = 0;
    unk_44 = 1;
}

void Unk_020ddf44::func_0206cc20(u8 a, u8 b, u32 c) {
    unk_45 = a;
    unk_46 = b;
    unk_47 = c;
}

void Unk_020ddf44::func_0206cc14(u8 a, u8 b) {
    unk_48 = a;
    unk_49 = b;
}
