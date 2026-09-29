#include "types.h"

// ---- Classes defined in other files (declarations only) ----

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    void func_020a8b1c();
    void func_020a8b34(Unk_020e2a08 *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 func_020a7a0c(Unk_020e2a78 *other);
    u8 func_020a7a28(u8 *str);
    u8 func_020a7bd8(Unk_020e2a78 *other);
    u8 func_020a7c04(u8 *str);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e2a48 : public Unk_020e2a78 {
public:
    Unk_020e2a48();
    virtual ~Unk_020e2a48();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[8];
};

// 0x34 bytes
class Unk_020aa8e0 : public Unk_020e2a78 {
public:
    Unk_020aa8e0();
    virtual ~Unk_020aa8e0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[8];
};

// 0x2c bytes (ctor func_020b4154, dtor func_020b413c)
class Unk_020b4154 : public Unk_020e2a78 {
public:
    Unk_020b4154();
    virtual ~Unk_020b4154();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[6];
};

// 0x20-byte entry of the table at data_021ef0b8
class Unk_021ef0b8 : public Unk_020e2a78 {
public:
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[2];
    /* 0x1c */ u8 unk_1c;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// BMG message file reader
class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;

    BOOL func_020a8950(u8 *arg1);
    void func_020a89f0();
    u8 func_020a8a20(const char *path);

    /* 0x04 */ u8 unk_04[0xa0];
};

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a8368(u8 *p);
    void func_020a84bc();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_020e2b4c : public Unk_020e2b08 {
public:
    Unk_020e2b4c() {}
    virtual ~Unk_020e2b4c() {}
    virtual BOOL vfunc_18();
    u8 *func_020a82ec(BOOL arg);
};

// ---- Classes of this file ----

// Vtable at 0x020e3f14
class Unk_020e3f14 : public Unk_020e2b4c {
public:
    Unk_020e3f14();
    virtual ~Unk_020e3f14();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    /* 0x24 */ u32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u32 unk_2c;
};

// Class whose vtable is at 0x020e3f38 (defined in the next file); only func_020b36d4 is here
class Unk_020e3f38 : public Unk_020e2b4c {
public:
    u8 func_020b36d4(u8 c);

    /* 0x24 */ u32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ Unk_020e2a78 *unk_2c;
};

// Load request, 0x2c bytes (ctor func_020b2c98, dtor func_020b2c80)
class Unk_020b2c98 : public Unk_020e2a30 {
public:
    Unk_020b2c98();
    virtual ~Unk_020b2c98();
    virtual const char *vfunc_0c();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ Unk_020e2a78 *unk_24;
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 unk_29;
};

// Object at 0xb3c of the text loader (methods in another file)
struct Unk_020b3784 {
    u8 unk_00[0x34];
};

struct Unk_021ef00c {
    u8 unk_00[0x38];
    u32 unk_38;
};

// BMG reader as embedded in the text loader, 0x4a4 bytes
class Unk_020b3fa0 : public Unk_020e2a18 {
public:
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();

    /* 0xa4 */ u8 unk_a4[0x400];
};

struct Empty {
    Empty() {}
    ~Empty() {}
};

class Unk_020b2df0;

extern "C" {
// Other files
u32 func_020501e8(u32 c);
s32 func_01ffcac0(s32 v, s32 *out);
s32 func_02133150(s32 a, s32 b);
void func_02133ef8(void *p, u32 n);
void func_02115fb4(void *dst, u32 value, u32 size);
int func_020639e8(char *dst, const char *fmt, ...);
char *func_020a6b9c(char *p, u32 n);
void func_020b37dc(Unk_020b3784 *o);
char *func_020b3784(Unk_020b3784 *o);
void func_020b37a4(Unk_020b3784 *o);
void func_020b37c0(Unk_020b3784 *o, s32 n);
void func_020b37f4(Unk_020b3784 *o, Unk_020e2a78 *b);
void func_020b37f8(Unk_020b3784 *o, Unk_020e2a78 *b);
void func_020b3810(Unk_020b3784 *o);
BOOL func_020b3e74(Unk_020b2df0 *t, u8 a, u8 b);
void func_020b3fa0(Unk_020b3fa0 *r);
Unk_020e2a78 *func_020b406c(void);

extern u8 data_020d0bd0[];
extern u8 data_020d0bd4[];
extern u8 data_020d0be4[];
extern u8 data_020d0bf0[];
extern u8 data_020d0bfc[];
extern Unk_021ef00c data_021ef00c;
extern Unk_021ef0b8 data_021ef0b8[16];
extern Unk_020aa8e0 data_021eee08[];

// This file
BOOL func_020b3270(Unk_020e2a78 *out, s32 val, s32 width, s32 mode, s32 kind, s32 unused);
BOOL func_020b3324(Unk_020e2a78 *out, s32 val, s32 kind);
void func_020b33d8(char *s, u32 size);
void func_020b3404(char *s, u32 size, s32 minRun);
void func_020b3460(char *s, u32 size, s32 width);
void func_020b3480(char *s, u32 size, s32 width);
void func_020b34a0(char *s, u32 size, s32 width);
void func_020b34d0(char *s, u32 size, s32 n, s32 maxDigits);
void func_020b3510(char *s, u32 size, s32 start, s32 shift);
s32 func_020b3530(const char *s, u32 max);
BOOL func_020b35ac(Unk_020e2a78 *buf, u8 *key, const char *name);
BOOL func_020b35f8(Unk_020e2a78 *buf, u8 *key, const char *name);
}

// Text loader, global at 0x021ee50c
class Unk_020b2df0 {
public:
    s32 func_020b2df0();
    BOOL func_020b2e6c();
    BOOL func_020b2ef4(Unk_020e2a78 *buf);
    BOOL func_020b2f98(Unk_020b2c98 *req);
    void func_020b3048();

    /* 0x000 */ u8 unk_00[0x4c];
    /* 0x04c */ Unk_020b3fa0 unk_4c;
    /* 0x4f0 */ Unk_020e2a08 unk_4f0;
    /* 0x4fc */ u8 unk_4fc[0x400];
    /* 0x8fc */ u8 unk_8fc[0x240];
    /* 0xb3c */ Unk_020b3784 unk_b3c;
    /* 0xb70 */ u8 unk_b70;
    /* 0xb71 */ u8 unk_b71[0xb];
    /* 0xb7c */ Unk_020e3f14 unk_b7c;
};

extern "C" {
extern Unk_020b2df0 data_021ee50c;
}

// ---- Functions ----

extern "C" {

BOOL func_020b2dcc(u32 a, u32 b) {
    BOOL r = FALSE;
    if (a == b) {
        r = TRUE;
    } else {
        u32 c = func_020501e8(a);
        if (c == b) {
            r = TRUE;
        }
    }
    return r;
}
}

s32 Unk_020b2df0::func_020b2df0() {
    s32 count = 0;
    func_020b37dc(&unk_b3c);
    unk_b7c.func_020a84bc();
    unk_b7c.func_020a8368((u8 *)unk_b7c.unk_24);
    for (;;) {
        unk_b7c.unk_28 = 1;
        unk_b7c.unk_2c = 0;
        unk_b7c.func_020a82ec(FALSE);
        u32 c = unk_b7c.unk_2c;
        if (c == 0xa || c == 0) {
            break;
        }
        if (func_020b2dcc((u32)func_020b3784(&unk_b3c), c)) {
            count++;
        } else {
            count = 0;
            break;
        }
    }
    return count;
}

BOOL Unk_020b2df0::func_020b2e6c() {
    BOOL result = FALSE;
    func_020b37dc(&unk_b3c);
    u8 *start = unk_4fc;
    while (unk_b70 == 0) {
        char *s = (char *)start;
        s32 n = 0;
        for (; s != NULL && *s != 0xa; s = func_020a6b9c(s, 1)) {
            unk_b7c.unk_24 = (u32)s;
            n = func_020b2df0();
            if (n > 0) {
                break;
            }
        }
        func_020b37dc(&unk_b3c);
        if (n > 0) {
            func_020b37c0(&unk_b3c, n);
            result = TRUE;
        } else {
            func_020b37a4(&unk_b3c);
        }
    }
    return result;
}

BOOL Unk_020b2df0::func_020b2ef4(Unk_020e2a78 *buf) {
    Empty e;
    Unk_020b2c98 req;
    req.func_020a710c("st_taboo");
    req.unk_1e = 0;
    func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    if (r) {
        func_020b406c()->func_020a7bd8(buf);
        buf->func_020a7c3c();
        func_020b3810(&unk_b3c);
        func_020b37f8(&unk_b3c, func_020b406c());
        func_020b37f4(&unk_b3c, buf);
        unk_b7c.unk_24 = 0;
        unk_b7c.unk_28 = 0;
        unk_b7c.unk_2c = 0;
        unk_b7c.func_020a84bc();
    }
    return r;
}

BOOL Unk_020b2df0::func_020b2f98(Unk_020b2c98 *req) {
    char path[0x44];
    func_020639e8(path, "%s/%s.bmg", req->vfunc_0c(), req->unk_04);
    BOOL ok = unk_4c.func_020a8a20(path);
    BOOL t = ok ? unk_4c.func_020a8950(&req->unk_1e) : FALSE;
    ok = ok & t;
    if (ok) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    unk_4c.func_020a89f0();
    if (ok) {
        Unk_020e2a78 *dst = req->unk_24;
        ok &= func_020b3e74(this, req->unk_28, req->unk_29);
        if (ok) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
        if (dst) {
            ok &= dst->func_020a7c04(unk_4fc);
            if (ok) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
            dst->unk_08.func_020a8b34(&unk_4f0);
        }
    }
    return ok;
}

void Unk_020b2df0::func_020b3048() {
    func_020b3fa0(&unk_4c);
    unk_4f0.func_020a8b1c();
    func_02115fb4(unk_4fc, 0, 0x400);
}

extern "C" {

Unk_021ef0b8 *func_020b3078(u8 *key) {
    Unk_021ef0b8 *r = NULL;
    s32 i = *key;
    if (i < 0x10) {
        Unk_021ef0b8 *e = &data_021ef0b8[i];
        if (e->unk_1c != 0) {
            r = e;
        } else if (func_020b35f8(e, key, "st_article")) {
            e->unk_1c = 1;
            r = e;
        }
    }
    return r;
}

BOOL func_020b30bc(Unk_020e2a78 *buf) {
    BOOL r = FALSE;
    if (data_021ee50c.func_020b2ef4(buf)) {
        r = data_021ee50c.func_020b2e6c();
    }
    return r;
}

BOOL func_020b30e0(Unk_020e2a78 *buf, u32 x, u8 *key) {
    Unk_020b2c98 req;
    req.func_020a710c("st_nickname");
    req.unk_1e = *key;
    req.unk_24 = buf;
    req.unk_29 = 1;
    data_021ef00c.unk_38 = x;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    data_021ef00c.unk_38 = 0;
    return r;
}

BOOL func_020b313c(Unk_020e2a78 *buf, u8 v) {
    u8 c = v + 0xc;
    return func_020b35f8(buf, &c, "st_day_month");
}

BOOL func_020b3158(Unk_020e2a78 *buf, u8 v) {
    u8 c = v - 1;
    return func_020b35f8(buf, &c, "st_day_month");
}

BOOL func_020b3174(Unk_020e2a78 *buf, u32 idx, BOOL flag) {
    u8 c = data_020d0bd4[idx];
    const char *name = "st_general";
    BOOL r;
    if (flag) {
        r = func_020b35ac(buf, &c, name);
    } else {
        r = func_020b35f8(buf, &c, name);
    }
    return r;
}

BOOL func_020b31a8(Unk_020e2a78 *out, s32 val, s32 digits) {
    BOOL ok;
    s32 i;
    BOOL r1;
    s32 frac;
    s32 ip;
    BOOL res;
    s32 ipart;
    frac = func_01ffcac0(val, &ip);
    for (i = 0; i < digits; i++) {
        frac *= 10;
    }
    ipart = ip >> 12;
    Unk_020b4154 a, b;
    Unk_020e2a48 c;
    r1 = func_020b3270(&a, ipart, 10, 0, 0, 0);
    ok = TRUE;
    if (!(r1 & ok)) {
        ok = FALSE;
    }
    ok &= func_020b3270(&b, frac >> 12, 10, 0, 0, 0);
    if (ok) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->func_020a7bd8(&a);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->func_020a7a28(data_020d0bd0);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->func_020a7a0c(&b);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    return res;
}

BOOL func_020b3270(Unk_020e2a78 *out, s32 val, s32 width, s32 mode, s32 kind, s32 unused) {
    char tmp[0xe];
    func_02115fb4(tmp, 0, 0xe);
    func_020b34d0(tmp, 0xe, val, width);
    switch (mode) {
    case 2:
    case 3:
        func_020b34a0(tmp, 0xe, width);
    }
    switch (mode) {
    case 4:
    case 5:
        func_020b3480(tmp, 0xe, width);
    }
    switch (mode) {
    case 6:
    case 7:
        func_020b3460(tmp, 0xe, width);
    }
    BOOL c = FALSE;
    u32 m = mode - 1;
    if (m <= 6 && ((1 << m) & 0x55)) {
        c = TRUE;
    }
    if (c) {
        func_020b3404(tmp, 0xe, 3);
    }
    func_020b33d8(tmp, 0xe);
    BOOL r = out->func_020a7c04((u8 *)tmp);
    if (kind != 0) {
        r &= func_020b3324(out, val, kind);
        if (r) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

BOOL func_020b3324(Unk_020e2a78 *out, s32 val, s32 kind) {
    Unk_020e2a48 tmp;
    u8 v = 0;
    s32 rem = val % 10;
    if (kind == 1) {
    } else if (kind == 2) {
        v = 1;
    } else if (kind == 3) {
        v = data_020d0bfc[rem];
    } else if (kind == 4) {
        v = 5;
    } else if (kind == 5) {
        v = 6;
    } else if (kind == 6) {
        v = data_020d0be4[rem];
    } else if (kind == 7) {
        v = 0xa;
    } else if (kind == 8) {
        v = 0xb;
    } else if (kind == 9) {
        v = data_020d0bf0[rem];
    } else if (kind == 10) {
        v = 0xe;
    }
    u8 c = v;
    BOOL r = func_020b35f8(&tmp, &c, "st_unit");
    if (r) {
        r &= out->func_020a7a0c(&tmp);
        if (r) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void func_020b33d8(char *s, u32 size) {
    u32 len = func_020b3530(s, size);
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

void func_020b3404(char *s, u32 size, s32 minRun) {
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
                        func_020b3510(s, size, i, 1);
                        *p = ',';
                    }
                }
            }
        }
        i++;
    }
}

void func_020b3460(char *s, u32 size, s32 width) {
    s32 len = func_020b3530(s, size);
    for (; len < width; len++) {
        s[len] = '0';
    }
}

void func_020b3480(char *s, u32 size, s32 width) {
    s32 len = func_020b3530(s, size);
    for (; len < width; len++) {
        s[len] = ' ';
    }
}

void func_020b34a0(char *s, u32 size, s32 width) {
    s32 n = width - func_020b3530(s, size);
    func_020b3510(s, size, 0, n);
    for (s32 i = n - 1; i >= 0; i--) {
        s[i] = ' ';
    }
}

void func_020b34d0(char *s, u32 size, s32 n, s32 maxDigits) {
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

void func_020b3510(char *s, u32 size, s32 start, s32 shift) {
    if (shift != 0) {
        s32 i = size - shift - 1;
        char *d = s + shift;
        for (; i >= start; i--) {
            d[i] = s[i];
        }
    }
}

s32 func_020b3530(const char *s, u32 max) {
    u32 i = 0;
    while (i < max) {
        if (s[i] == 0) {
            break;
        }
        i++;
    }
    return i;
}

u8 func_020b3544(u32 idx, Unk_020e2a78 *other) {
    return data_021eee08[idx].func_020a7bd8(other);
}

BOOL func_020b3558(Unk_020e2a78 *buf, u8 *key, const char *name) {
    if (name == NULL) {
        name = "2d_menu";
    }
    Unk_020b2c98 req;
    req.unk_20 = 1;
    req.func_020a710c(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    return r;
}

BOOL func_020b35ac(Unk_020e2a78 *buf, u8 *key, const char *name) {
    Unk_020b2c98 req;
    req.func_020a710c(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    req.unk_28 = 1;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    return r;
}

BOOL func_020b35f8(Unk_020e2a78 *buf, u8 *key, const char *name) {
    Unk_020b2c98 req;
    req.func_020a710c(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    return r;
}
}

BOOL Unk_020e3f14::vfunc_18() {
    return unk_28 > 0;
}

void Unk_020e3f14::vfunc_14(u8 *p) {}

void Unk_020e3f14::vfunc_10(u32 c) {
    unk_2c = c;
    unk_28--;
}

void Unk_020e3f14::vfunc_0c() {}

void Unk_020e3f14::vfunc_08() {}

Unk_020e3f14::Unk_020e3f14() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

Unk_020e3f14::~Unk_020e3f14() {}

u8 Unk_020e3f38::func_020b36d4(u8 c) {
    u8 buf[3];
    func_02133ef8(buf, 3);
    buf[0] = c;
    return unk_2c->func_020a7a28(buf);
}
