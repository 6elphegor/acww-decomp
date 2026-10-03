#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
s32 Mem_Copy(void *src, void *dst, s32 n);
}

extern "C" {
s32 func_020512e0(void *p, s32 n);
}

extern "C" {
s32 func_02051320(void *p, s32 n, s32 z);
}

extern "C" {
s32 func_02051270(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
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

extern u8 data_021caabc[0x8fc];
extern s16 data_021ca9c8[0x1a];
extern u8 data_021ca9fc[0xc0];
extern const u8 data_020cbae8[8];

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
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
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

class Unk_020dded4 : public MsgString {
public:
    Unk_020dded4();
    virtual ~Unk_020dded4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[513];
};

// 0x200-byte destination buffer at +0xe
class Unk_020ddebc : public EncodedString {
public:
    Unk_020ddebc();
    virtual ~Unk_020ddebc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[0x200];
};

// 0x28-byte destination buffer at +0xe
class Unk_020ddf5c : public EncodedString {
public:
    Unk_020ddf5c();
    virtual ~Unk_020ddf5c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[0x28];
};

class Unk_020ddf14 : public MsgString {
public:
    Unk_020ddf14();
    virtual ~Unk_020ddf14();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[33];
};

class Unk_020ddefc : public MsgString {
public:
    Unk_020ddefc();
    virtual ~Unk_020ddefc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[129];
};

class Unk_020ddf2c : public MsgString {
public:
    Unk_020ddf2c();
    virtual ~Unk_020ddf2c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[25];
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

    /* 0x000 */ u8 unk_000[0x98];
    /* 0x098 */ u8 unk_098[4][0x4c];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
};

extern "C" BOOL func_0206ca40(MsgString *buf, const char *name, u32 key);
extern "C" BOOL func_0206c858(u32 c);
extern "C" BOOL func_0206c7c8(u8 *p, s32 n);
extern "C" BOOL func_0206c768(u8 *p, s32 n, s32 off);

Unk_020dded4::Unk_020dded4() { clear(); }

// ---- Unk_020dded4
Unk_020dded4::~Unk_020dded4() {}

u32 Unk_020dded4::vfunc_08() { return 0x201; }

u8 *Unk_020dded4::vfunc_0c() { return (u8 *)this + 0x12; }

extern "C" BOOL func_0206ca40(MsgString *buf, const char *name, u32 key) {
    u8 k = key;
    return String_Load(buf, &k, name);
}

Unk_020ddebc::Unk_020ddebc() {}

// ---- Unk_020ddebc
Unk_020ddebc::~Unk_020ddebc() {}

u32 Unk_020ddebc::vfunc_08() { return 0x200; }

u8 *Unk_020ddebc::vfunc_0c() { return (u8 *)this + 0xe; }

extern "C" void func_0206c92c() {
    Unk_020dded4 src;
    Unk_020ddebc dst;
    s32 cnt = 0;
    u8 *out = data_021caabc;
    s32 i = 0;
    s32 z1 = 0, z2 = 0, z0 = 0;
    u8 *p;
    s32 j, n;
    for (; i < 0x1a; i++) {
        func_0206ca40(&src, "st_mailcheck", i);
        dst.fromMsgString(&src);
        p = dst.unk_0e;
        while (*p != 0) {
            n = func_02051320(p, 3, z0);
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
        data_021ca9c8[i] = cnt;
    }
}

extern "C" s32 func_0206c884(u8 *self) {
    u8 buf[0x80];
    s32 cnt, matched, n, i, prev, isSep;
    u8 *p;
    Mem_Copy(self + 0x4c, buf, 0x80);
    cnt = 0;
    matched = 0;
    n = func_020512e0(buf, 0x80);
    for (i = 0; i < 0xc0; i++) data_021ca9fc[i] = 0;
    for (i = 0; i < n; i++) {
        if (buf[i] >= 1 && buf[i] <= 0x1a) buf[i] += 0x1a;
    }
    prev = 1;
    for (i = 0; i < n; i++) {
        p = buf + i;
        isSep = func_0206c858(buf[i]);
        if (prev == 1 && isSep == 0) {
            cnt++;
            if (func_0206c7c8(p, n - i)) matched++;
        }
        prev = isSep;
    }
    if (cnt >= 3) {
        if (((cnt + 3) >> 2) <= matched) return 2;
    }
    if (cnt >= 2) return 1;
    return 0;
}

extern "C" s32 func_0206c878(u8 *self) {
    return func_020512e0(self + 0x4c, 0x80);
}

extern "C" BOOL func_0206c858(u32 c) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (c == data_020cbae8[i]) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0206c7c8(u8 *p, s32 n) {
    u32 c = p[0];
    s32 idx;
    s32 lo, hi, k, off;
    if (c >= 0x1b && c <= 0x34) {
        idx = c - 0x1b;
    } else {
        return FALSE;
    }
    if (idx > 0) lo = data_021ca9c8[idx - 1]; else lo = 0;
    hi = data_021ca9c8[idx];
    k = lo;
    off = lo * 3;
    for (; k < hi; off += 3, k++) {
        if (func_0206c768(p, n, off)) {
            s32 w = k >> 2;
            s32 sh, m, v;
            k &= 3;
            sh = k * 2;
            m = 3 << sh;
            v = (data_021ca9fc[w] & m) >> sh;
            if (v >= 2) return FALSE;
            data_021ca9fc[w] &= ~m;
            data_021ca9fc[w] |= (v + 1) << sh;
            return TRUE;
        }
    }
    return FALSE;
}

// ---- free functions
extern "C" BOOL func_0206c768(u8 *p, s32 n, s32 off) {
    s32 i;
    u8 *t = data_021caabc + off;
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

extern const u8 data_020cbae8[8] = {0x85, 0x86, 0x87, 0x9b, 0x94, 0x92, 0, 0};
u8 data_021caabc[0x8fc];
s16 data_021ca9c8[0x1a];
u8 data_021ca9fc[0xc0];
