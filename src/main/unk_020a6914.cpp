#include "types.h"
#include "text/Unk_02050288.h"
#include "Unk_020d8c7c.h"

inline void *operator new(unsigned long, void *p) { return p; }

extern "C" {
// Other files
BOOL func_0205026c(u8 *out, const u8 *c);
BOOL func_02050278(char *out, u32 index);
const char *func_0205020c(void);
const char *func_02050214(void);
u8 *func_02050204(void);
u8 *func_02050208(void);
u8 *func_0205021c(void);
u8 *func_02050224(void);
u8 *func_0205022c(void);
u8 *func_02050234(void);
u8 *func_0205023c(void);
BOOL func_02050f7c(StrBuf *buf, const void *src, s32 len);
void func_0205113c(StrBuf *buf);
void func_02002ab8(void);
void func_020014e4(u32 arg);
void func_020014f4(u32 arg);
void func_02011868(void);
void func_02011874(void);
void func_0201195c(void);
void func_02063d18(void *file, void *buf, u32 size, u32 offset);
BOOL func_0206774c(void);
void func_02067844(void);
void func_02067874(void);
void func_020678a4(void);
void func_020678d4(void);
u8 func_020682a8(u32 x);
void func_02076b08(void *p, int a, int b);
void func_0208efd0(void);
void func_0208efe0(void);
void func_0208eff0(void);
void func_0208f000(void);
BOOL func_0208f024(void);
void func_0208f038(void);
void func_0208f044(void);
void func_020b7798(void);
void func_020b77a8(void);
void func_020b77b8(void);
void func_020b77c8(void);
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *ptr);
void func_02100260(void *list, void *obj);
void func_021003b0(void *list, void *obj);
void func_02115fb4(void *dst, u32 value, u32 size);
void func_02116048(const void *src, void *dst, u32 size);
void func_021199e0(void *file);
void func_02119d78(void *file);
BOOL func_02119a28(void *file, const char *path);
char *func_0212a120(char *s, s32 c);
int func_0212a190(const u8 *a, const u8 *b);
char *func_0212a2ec(char *dst, const char *src, u32 n);
char *func_0212a360(char *dst, const char *src);
u32 func_0212a438(const char *s);

// Script stack helpers (another file)
void func_020a8c9c(void *list);
void func_020a8cb0(void *list);
BOOL func_020a8cb4(void *list);
void func_020a8cc4(void *list, u8 **p);
u8 **func_020a8cd8(void *list);
void func_020a8ce4(void *list);

// This file
BOOL func_020a69ac(u8 *out, const u8 *src);
BOOL func_020a69b4(char *out, u8 c);
u32 func_020a6c40(u32 a, u32 b);
BOOL func_020a6d54(void);
BOOL func_020a6d74(void);
void func_020a6dd8(void);
u16 func_020a77c0(u8 *p, u32 i);
u8 func_020a77e0(u8 *p, u32 i);
u8 func_020a8af4(void *p);
u16 func_020a8af8(void *p);
u32 func_020a8afc(void *p);
u32 func_020a8b00(void *p);
void func_020a8b88(void);
void func_020a8b94(void);

extern void *data_021c489c;
extern u8 data_021c48c4[];
extern u32 data_020d0800[];
extern u32 data_020d0864[];
extern u32 data_020d08c8[];
extern u8 data_020d07b8[][7];
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[2];

extern u8 data_021edb64;
extern u8 data_021edb68;
extern u8 data_021edb6c;
extern u8 data_021edd14;
}

class Unk_020e2a78;

// Script command token, 0x14 bytes
class Unk_020a72b0 {
public:
    Unk_020a72b0();
    u8 func_020a72b0();
    void func_020a72c4(u32 *a, char **b, char **c);
    void func_020a72f0(char **a, char **b, char **c);
    void func_020a7338(char **a, char **b);
    s32 func_020a736c();
    BOOL func_020a7374();
    u32 func_020a7388(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, Unk_020e2a78 *s5,
                      Unk_020e2a78 *s6);
    u32 func_020a7404();
    u32 func_020a7478(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2, u8 *s3,
                      Unk_020e2a78 *s4, u8 *s5, Unk_020e2a78 *s6);
    u32 func_020a74fc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2, u8 *s3,
                      Unk_020e2a78 *s4);
    u32 func_020a7574(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2);
    u32 func_020a75dc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0);
    void func_020a7634(u16 *out);
    void func_020a7648(u8 *buf, s32 n);
    void func_020a7670(u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
    void func_020a76bc(u8 *a, u8 *b, u8 *c, u8 *d);
    void func_020a76fc(u8 *a, u8 *b, u8 *c);
    void func_020a7730(u8 *a, u8 *b);
    void func_020a7754(u8 *a);
    void func_020a777c(u8 *p);

    void eq(s32 x, s32 y, u8 *f) {
        if (x == unk_00 && y == unk_04) *f = 1;
    }

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

// 0x020e2a08: small state object (position + two bytes)
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

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

// buffer interface (destination-side, member at +4)
class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

// buffer interface with write position at +4 and member at +8
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7940(u8 *start, u8 *end);
    BOOL func_020a798c(u8 *start, u8 *end);
    BOOL func_020a79dc(Unk_020e2a78 *other);
    u8 func_020a7a0c(Unk_020e2a78 *other);
    u8 func_020a7a28(u8 *str);
    u8 func_020a7a64(u8 *str);
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
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
    void func_020a7188();
};

// Buffer defined in another file (ctor func_020aa8e0, dtor func_020aa8c8), 0x34 bytes
class Unk_020aa8e0 : public Unk_020e2a78 {
public:
    Unk_020aa8e0();
    virtual ~Unk_020aa8e0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x20];
};

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020a7238 {
    u32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

// Script interpreter root
class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a832c();
    void func_020a8348(u8 *p);
    void func_020a8368(u8 *p);
    BOOL func_020a837c(u32 arg);
    BOOL func_020a83f0(u32 c);
    void func_020a83f4(u8 *p);
    void func_020a8400(s32 n);
    void func_020a840c();
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

class Unk_020e2b28 : public Unk_020e2b4c {
public:
    Unk_020e2b28();
    virtual ~Unk_020e2b28();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u8 *cmd);
    virtual BOOL vfunc_18();

    void func_020a69bc();
    void func_020a69d4();
    void func_020a69f0();
    void func_020a69f8();
    void func_020a6a0c();

    /* 0x24 */ u32 unk_24;
    /* 0x28 */ Unk_020a72b0 unk_28;
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u32 unk_48;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u8 unk_58;
};

class Unk_020e2ac8;

// Text drawn by running a script through Unk_020e2ac8
class Unk_020e2a90 : public Unk_02050288 {
public:
    Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3);
    Unk_020e2a90(u32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_020e2a90();
    virtual void func_08();
    virtual u32 func_0c();

    void func_020a7e6c(u8 *p);
    void func_020a7eac(u32 c);
    void func_020a7ecc();
    void func_020a7eec();
    void func_020a7f0c(Unk_020e2ac8 *v);

    /* 0x7c */ u32 unk_7c;
    /* 0x80 */ Unk_020e2ac8 *unk_80;
};

class Unk_020e2ac8 : public Unk_020e2b08 {
public:
    Unk_020e2ac8(u8 flag);
    virtual ~Unk_020e2ac8();

    void func_020a8224();
    void func_020a822c();
    void func_020a8234();
    void func_020a823c(Unk_020e2a90 *p);
    u32 func_020a8240(u8 *p);

    /* 0x24 */ Unk_020e2a90 *unk_24;
    /* 0x28 */ u8 unk_28;
};

class Unk_020e2aa8 : public Unk_020e2ac8 {
public:
    Unk_020e2aa8();
    virtual ~Unk_020e2aa8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    /* 0x2c */ u32 unk_2c;
};

class Unk_020e2ae8 : public Unk_020e2ac8 {
public:
    Unk_020e2ae8();
    virtual ~Unk_020e2ae8();
    virtual void vfunc_0c();
    u8 func_020a7d28();
    void func_020a7d30();
    void func_020a7d40(Unk_020e2a78 *s, u8 *str, u32 mode, u8 flag);

    /* 0x2c */ Unk_020e2a78 *unk_2c;
    /* 0x30 */ u8 *unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38;
};

class Unk_020a84e0 {
public:
    Unk_020a84e0(Unk_020e2b4c *obj);
    void func_020a84e0(u8 *p);
    BOOL func_020a84f0();
    void func_020a8520();

    /* 0x00 */ Unk_020e2b4c *unk_00;
    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 *unk_08;
};

// BMG message file reader
class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;

    BOOL func_020a8558();
    BOOL func_020a85a4();
    BOOL func_020a8694();
    BOOL func_020a8720();
    BOOL func_020a876c();
    BOOL func_020a8844();
    void func_020a88fc();
    BOOL func_020a8950(u8 *arg1);
    void func_020a89f0();
    u8 func_020a8a20(const char *path);

    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05[0x3f];
    /* 0x44 */ u8 unk_44[0x48];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x90 */ u32 unk_90[3];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
};

class Unk_020e2b70 : public Unk_020d8c7c {
public:
    Unk_020e2b70();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e2b70();
};

struct Unk_g4_Ent {
    u32 unk_00;
    u8 unk_04[6];
};

struct Unk_021edbcc_t {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e;
};

struct Unk_021edba8_t {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_021edbe0_t {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 pad[0xb];
    u32 unk_1c;
};

struct Flag18 {
    u8 pad[0x18];
    u8 flag;
};

extern "C" {
extern Unk_021edbcc_t data_021edbcc;
extern Unk_021edba8_t data_021edba8;
extern Unk_021edbe0_t data_021edbe0;
}

extern Unk_020e2ac8 data_021edc50;
extern Unk_020e2ae8 data_021edc80;
extern Unk_020e2b28 data_021edcbc;
extern Flag18 data_021edcfc;

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

// ---- Unk_020e2b70
extern "C" Unk_020e2b70 *func_020a8c84(void) {
    return new Unk_020e2b70;
}

Unk_020e2b70::Unk_020e2b70() {}

Unk_020e2b70::~Unk_020e2b70() {}

BOOL Unk_020e2b70::vfunc_00() {
    func_0208f000();
    func_020a6dd8();
    func_02002ab8();
    func_0201195c();
    func_02011874();
    func_020678d4();
    func_020b77c8();
    func_020a8b94();
    return TRUE;
}

BOOL Unk_020e2b70::vfunc_0c() {
    func_020a8b88();
    func_020b77b8();
    func_020678a4();
    func_02011868();
    func_0208eff0();
    return TRUE;
}

BOOL Unk_020e2b70::vfunc_18() {
    func_0208efe0();
    func_02067874();
    func_020b77a8();
    return TRUE;
}

BOOL Unk_020e2b70::vfunc_24() {
    func_020b7798();
    func_02067844();
    func_0208efd0();
    return TRUE;
}

extern "C" {
void func_020a8b94() { func_020014f4(0x10); }
void func_020a8b88() { func_020014e4(0x10); }
}

// ---- Unk_020e2a08
Unk_020e2a08::Unk_020e2a08() {
    unk_04 = -1;
    unk_08 = data_021edb68;
    unk_09 = data_021edb68;
}

Unk_020e2a08::~Unk_020e2a08() {}

void Unk_020e2a08::func_020a8b34(Unk_020e2a08 *other) {
    unk_04 = other->unk_04;
    unk_08 = other->unk_08;
    unk_09 = other->unk_09;
}

void Unk_020e2a08::func_020a8b1c() {
    unk_04 = -1;
    unk_08 = data_021edb68;
    unk_09 = data_021edb68;
}

extern "C" {
u32 func_020a8b00(void *p) {
    u8 tmp[8];
    u8 *src, *dst;
    dst = tmp;
    src = (u8 *)p + 4;
    while (src != p) {
        src--;
        *dst = *src;
        dst++;
    }
    return *(u32 *)tmp;
}
u32 func_020a8afc(void *p) { return *(u32 *)p; }
u16 func_020a8af8(void *p) { return *(u16 *)p; }
u8 func_020a8af4(void *p) { return *(u8 *)p; }
}

// ---- Unk_020e2a18
Unk_020e2a18::Unk_020e2a18(u8 arg1) {
    unk_04 = arg1;
    unk_8c = 0;
    unk_8d = data_021edb68;
    unk_9c = 0;
    unk_a0 = 0;
    func_02119d78(unk_44);
    func_02115fb4(&unk_05, 0, 0x3f);
}

Unk_020e2a18::~Unk_020e2a18() {
    func_020a89f0();
}

u8 Unk_020e2a18::func_020a8a20(const char *path) {
    func_0212a2ec((char *)unk_05, path, 0x3e);
    unk_8c = func_02119a28(unk_44, path) ? 1 : 0;
    return unk_8c;
}

void Unk_020e2a18::func_020a89f0() {
    if (unk_8c != 0) {
        func_021199e0(unk_44);
        unk_8c = 0;
        unk_8d = data_021edb68;
    }
}

BOOL Unk_020e2a18::func_020a8950(u8 *arg1) {
    BOOL ok;
    func_020a88fc();
    unk_8d = *arg1;
    BOOL r = func_020a8844();
    ok = TRUE;
    if (!(r & ok)) {
        ok = FALSE;
    }
    if (ok) {
        ok &= func_020a876c();
        if (ok) ok = TRUE; else ok = FALSE;
    }
    if (ok) {
        ok &= func_020a8720();
        if (ok) ok = TRUE; else ok = FALSE;
    }
    if (ok) {
        if (unk_04 != 0) {
            ok &= func_020a85a4();
            if (ok) ok = TRUE; else ok = FALSE;
        } else {
            ok &= func_020a8694();
            if (ok) ok = TRUE; else ok = FALSE;
        }
    }
    if (ok) {
        ok &= func_020a8558();
        if (ok) ok = TRUE; else ok = FALSE;
    }
    return ok;
}

void Unk_020e2a18::func_020a88fc() {
    unk_8d = 0;
    func_02115fb4(unk_90, 0, 12);
    unk_9c = 0;
    unk_a0 = 0;
    func_02115fb4(&data_021edbe0, 0, 0x20);
    func_02115fb4(&data_021edbcc, 0, 0x14);
    func_02115fb4(&data_021edba8, 0, 0xc);
}

BOOL Unk_020e2a18::func_020a8844() {
    func_02063d18(unk_44, &data_021edbe0, 0x20, 0);
    data_021edbe0.unk_00 = func_020a8b00(&data_021edbe0);
    data_021edbe0.unk_04 = func_020a8b00(&data_021edbe0.unk_04);
    data_021edbe0.unk_08 = func_020a8afc(&data_021edbe0.unk_08);
    data_021edbe0.unk_0c = func_020a8afc(&data_021edbe0.unk_0c);
    data_021edbe0.unk_10 = func_020a8af4(&data_021edbe0.unk_10);
    data_021edbe0.unk_1c = func_020a8afc(&data_021edbe0.unk_1c);
    BOOL c1 = data_021edbe0.unk_04 == 0x626d6731;
    BOOL c2 = data_021edbe0.unk_08 != 0;
    BOOL c3 = data_021edbe0.unk_0c == 2;
    if (data_021edbe0.unk_00 == 0x4d455347 && c1 && c2 && c3) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e2a18::func_020a876c() {
    func_02063d18(unk_44, &data_021edbcc, 0x14, 0x20);
    data_021edbcc.unk_00 = func_020a8b00(&data_021edbcc);
    data_021edbcc.unk_04 = func_020a8afc(&data_021edbcc.unk_04);
    data_021edbcc.unk_08 = func_020a8af8(&data_021edbcc.unk_08);
    data_021edbcc.unk_0a = func_020a8af8(&data_021edbcc.unk_0a);
    data_021edbcc.unk_0c = func_020a8af8(&data_021edbcc.unk_0c);
    data_021edbcc.unk_0e = func_020a8af4(&data_021edbcc.unk_0e);
    BOOL c1 = data_021edbcc.unk_00 == 0x494e4631;
    u16 n = data_021edbcc.unk_08;
    BOOL c2 = FALSE;
    if (n <= 0x100 && unk_8d < n) {
        c2 = TRUE;
    }
    BOOL c3 = data_021edbcc.unk_0a == (unk_04 ? 12 : 4);
    BOOL c4 = data_021edbcc.unk_0c == 0;
    if (c1 && c2 && c3 && c4) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e2a18::func_020a8720() {
    func_02063d18(unk_44, &data_021edba8, 12, data_021edbcc.unk_04 + 0x20);
    data_021edba8.unk_00 = func_020a8b00(&data_021edba8);
    data_021edba8.unk_04 = func_020a8afc(&data_021edba8.unk_04 + 0);
    return data_021edba8.unk_00 == 0x44415431;
}

BOOL Unk_020e2a18::func_020a8694() {
    u32 buf[2];
    u32 off = unk_8d * 4 + 0x10;
    BOOL last = (u32)(data_021edbcc.unk_08 - 1) == unk_8d;
    func_02063d18(unk_44, buf, last ? 4 : 8, off + 0x20);
    unk_9c = func_020a8afc(&buf[0]);
    if (last) {
        unk_a0 = data_021edba8.unk_04 - (unk_9c + 8);
    } else {
        unk_a0 = func_020a8afc(&buf[1]) - unk_9c;
    }
    unk_90[0] = unk_9c;
    return TRUE;
}

BOOL Unk_020e2a18::func_020a85a4() {
    Unk_g4_Ent buf[2];
    s32 count;
    s32 i;
    u32 off = unk_8d * 12 + 0x10;
    BOOL last = (u32)(data_021edbcc.unk_08 - 1) == unk_8d;
    func_02063d18(unk_44, buf, last ? 12 : 24, off + 0x20);
    if (last) {
        count = 1;
    } else {
        count = 2;
    }
    for (i = 0; i < count; i++) {
        Unk_g4_Ent *p = &buf[i];
        p->unk_00 = func_020a8afc(&p->unk_00);
        p->unk_04[0] = func_020a8af4(&p->unk_04[0]);
        p->unk_04[1] = func_020a8af4(&p->unk_04[1]);
        p->unk_04[2] = func_020a8af4(&p->unk_04[2]);
        p->unk_04[3] = func_020a8af4(&p->unk_04[3]);
        p->unk_04[4] = func_020a8af4(&p->unk_04[4]);
        p->unk_04[5] = func_020a8af4(&p->unk_04[5]);
    }
    unk_9c = buf[0].unk_00;
    if (last) {
        unk_a0 = data_021edba8.unk_04 - (unk_9c + 8);
    } else {
        unk_a0 = buf[1].unk_00 - unk_9c;
    }
    func_02116048(buf, unk_90, 12);
    return TRUE;
}

BOOL Unk_020e2a18::func_020a8558() {
    u32 a = vfunc_08();
    u32 b = vfunc_0c();
    u32 off = unk_9c + 8;
    if (b >= unk_a0) {
        b = unk_a0;
    }
    func_02063d18(unk_44, (void *)a, b, data_021edbcc.unk_04 + 0x20 + off);
    return TRUE;
}

// ---- Unk_020a84e0
extern "C" u8 *func_020a8548(u8 *p) {
    u8 *r = NULL;
    if (p[4] != 0) {
        r = p + 0x90;
    }
    return r;
}

Unk_020a84e0::Unk_020a84e0(Unk_020e2b4c *obj) {
    unk_00 = obj;
    unk_04 = NULL;
    unk_08 = NULL;
}

extern "C" void func_020a8538(void) {}

void Unk_020a84e0::func_020a8520() {
    unk_00->func_020a84bc();
    unk_04 = NULL;
    unk_08 = NULL;
}

BOOL Unk_020a84e0::func_020a84f0() {
    BOOL r = FALSE;
    if (unk_04 != NULL) {
        unk_08 = unk_00->func_020a82ec(FALSE);
        if (unk_08 != NULL) {
            r = TRUE;
        } else {
            unk_04 = NULL;
        }
    }
    return r;
}

void Unk_020a84e0::func_020a84e0(u8 *p) {
    unk_04 = p;
    unk_08 = p;
    unk_00->func_020a8368(p);
}

// ---- Unk_020e2b08
void Unk_020e2b08::func_020a84bc() {
    unk_04 = NULL;
    while (!func_020a8cb4(&unk_08)) {
        func_020a8ce4(&unk_08);
    }
}

Unk_020e2b08::Unk_020e2b08() {
    unk_04 = NULL;
    func_020a8c9c(&unk_08);
}

Unk_020e2b08::~Unk_020e2b08() {
    func_020a84bc();
    func_020a8cb0(&unk_08);
}

void Unk_020e2b08::vfunc_08() {}
void Unk_020e2b08::vfunc_0c() {}
void Unk_020e2b08::vfunc_10(u32 c) {}
void Unk_020e2b08::vfunc_14(u8 *p) {}

void Unk_020e2b08::func_020a840c() {
    u8 *p = unk_04;
    unk_04 = p + p[1];
    vfunc_14(p);
}

void Unk_020e2b08::func_020a8400(s32 n) {
    if (unk_04 != NULL) {
        unk_04 = unk_04 + n;
    }
}

void Unk_020e2b08::func_020a83f4(u8 *p) {
    unk_04 = unk_04 - p[1];
}

BOOL Unk_020e2b08::func_020a83f0(u32 c) {
    return FALSE;
}

BOOL Unk_020e2b08::func_020a837c(u32 arg) {
    u32 c = *unk_04;
    BOOL r = TRUE;
    if (c == 0 || (arg != 0 && c == 0xa)) {
        if (func_020a8cb4(&unk_08)) {
            vfunc_0c();
            r = FALSE;
        } else {
            func_020a832c();
        }
    } else if (c == 0x1a) {
        func_020a840c();
    } else {
        if (func_020a83f0(c)) {
            c = c << 8;
            unk_04 = unk_04 + 1;
            c |= *unk_04;
        }
        unk_04 = unk_04 + 1;
        vfunc_10(c);
    }
    return r;
}

void Unk_020e2b08::func_020a8368(u8 *p) {
    unk_04 = p;
    vfunc_08();
}

void Unk_020e2b08::func_020a8348(u8 *p) {
    if (p != NULL) {
        func_020a8cc4(&unk_08, &unk_04);
        unk_04 = p;
    }
}

void Unk_020e2b08::func_020a832c() {
    unk_04 = *func_020a8cd8(&unk_08);
    func_020a8ce4(&unk_08);
}

// ---- Unk_020e2b4c
BOOL Unk_020e2b4c::vfunc_18() {
    return TRUE;
}

u8 *Unk_020e2b4c::func_020a82ec(BOOL arg) {
    u8 *r = NULL;
    for (;;) {
        if (unk_04 == (u8 *)arg) {
            vfunc_0c();
            break;
        }
        if (!vfunc_18()) {
            r = unk_04;
            break;
        }
        if (!func_020a837c((u32)r)) {
            break;
        }
    }
    return r;
}

// ---- Unk_020e2ac8
Unk_020e2ac8::Unk_020e2ac8(u8 flag) {
    unk_24 = NULL;
    unk_28 = flag;
}

Unk_020e2ac8::~Unk_020e2ac8() {}

u32 Unk_020e2ac8::func_020a8240(u8 *p) {
    for (;;) {
        if (unk_04 == p) {
            vfunc_0c();
            break;
        }
        if (!func_020a837c(unk_28)) {
            break;
        }
    }
    return 0;
}

void Unk_020e2ac8::func_020a823c(Unk_020e2a90 *p) { unk_24 = p; }
void Unk_020e2ac8::func_020a8234() { unk_24 = NULL; }
void Unk_020e2ac8::func_020a822c() { unk_28 = 1; }
void Unk_020e2ac8::func_020a8224() { unk_28 = 0; }

// ---- Unk_020e2aa8
Unk_020e2aa8::Unk_020e2aa8() : Unk_020e2ac8(1) {
    unk_2c = 0;
}

Unk_020e2aa8::~Unk_020e2aa8() {}

void Unk_020e2aa8::vfunc_08() {
    if (unk_24 != NULL) {
        unk_24->func_020a7eec();
    }
}

void Unk_020e2aa8::vfunc_0c() {
    if (unk_24 != NULL) {
        unk_24->func_020a7ecc();
    }
}

void Unk_020e2aa8::vfunc_10(u32 c) {
    if (unk_24 != NULL) {
        unk_24->func_020a7eac(c);
    }
    if (unk_2c != 0 && (u8 *)unk_04 == (u8 *)unk_2c) {
        unk_2c = 0;
        func_020a832c();
    }
}

void Unk_020e2aa8::vfunc_14(u8 *p) {
    Unk_020a72b0 s;
    s.func_020a777c(p);
    u32 a = s.unk_00;
    u32 b = s.unk_04;
    if (a == 2) {
        func_020a8400(s.func_020a7404());
    } else if (a == 0xff) {
        if (b == 2) {
            u32 x;
            char *y, *z;
            s.func_020a72c4(&x, &y, &z);
            if (!func_0206774c()) {
                func_020a8400(x * 2);
                func_020a8348((u8 *)z);
                unk_2c = (u32)y;
            }
        }
    } else if (a == 0) {
        u8 *r = NULL;
        if (b == 0) {
            r = func_0205022c();
        } else if (b == 1) {
            r = func_02050224();
        } else if (b == 6) {
            r = func_0205021c();
        } else if (b == 7) {
            r = func_02050234();
        } else if (b == 8) {
            r = func_0205023c();
        } else if (b == 9) {
            r = func_02050208();
        } else if (b == 10) {
            r = func_02050204();
        }
        if (r != NULL) {
            func_020a8348(r);
        }
    }
    if (unk_24 != NULL) {
        unk_24->func_020a7e6c(p);
    }
}

// ---- Unk_020e2a90
extern "C" Unk_020e2a90 *func_020a8054(u32 a, s32 b, s32 c) {
    BOOL ok = FALSE;
    void *mem = func_020e8608(data_021c489c, 0x84);
    Unk_020e2a90 *obj = NULL;
    if (mem != NULL) {
        obj = new (mem) Unk_020e2a90(a, b, c);
        ok = TRUE;
    }
    if (ok) {
        func_021003b0(data_021c48c4, obj);
    }
    return obj;
}

extern "C" Unk_020e2a90 *func_020a8008(s32 a, s32 b, s32 c) {
    BOOL ok = FALSE;
    void *mem = func_020e8608(data_021c489c, 0x84);
    Unk_020e2a90 *obj = NULL;
    if (mem != NULL) {
        obj = new (mem) Unk_020e2a90(a, b, c);
        ok = TRUE;
    }
    if (ok) {
        func_021003b0(data_021c48c4, obj);
    }
    return obj;
}

extern "C" void func_020a7fd8(Unk_020e2a90 *obj) {
    if (obj != NULL) {
        func_02100260(data_021c48c4, obj);
        obj->~Unk_020e2a90();
        func_020e85fc(data_021c489c, obj);
    }
}

extern "C" u32 func_020a7fa8(u32 arg) {
    u32 r = 0;
    Unk_020e2a90 *obj = func_020a8054(0, 1, 2);
    if (obj != NULL) {
        obj->unk_10 = arg;
        r = obj->func_0c();
    }
    func_020a7fd8(obj);
    return r;
}

extern "C" u32 func_020a7f94(Unk_02050288 *obj) {
    return func_020a7fa8(obj->func_0c());
}

Unk_020e2a90::Unk_020e2a90(u32 arg1, s32 arg2, s32 arg3) : Unk_02050288(arg1, arg2, arg3) {
    unk_7c = 0;
    unk_80 = NULL;
}

Unk_020e2a90::Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3) : Unk_02050288(arg1, arg2, arg3) {
    unk_7c = 0;
    unk_80 = NULL;
}

Unk_020e2a90::~Unk_020e2a90() {}

void Unk_020e2a90::func_020a7f0c(Unk_020e2ac8 *v) { unk_80 = v; }

void Unk_020e2a90::func_020a7eec() {
    if (unk_7c == 1) {
        func_0205091c();
    } else if (unk_7c == 2) {
        func_02050ba8();
    }
}

void Unk_020e2a90::func_020a7ecc() {
    if (unk_7c == 1) {
        func_020507d8();
    } else if (unk_7c == 2) {
        func_02050b68();
    }
}

void Unk_020e2a90::func_020a7eac(u32 c) {
    if (unk_7c == 1) {
        func_020508b4(c);
    } else if (unk_7c == 2) {
        func_02050b6c(c);
    }
}

void Unk_020e2a90::func_020a7e6c(u8 *p) {
    if (unk_7c == 1) {
        Unk_020a72b0 s;
        s.func_020a777c(p);
        u32 a = s.unk_00;
        u32 b = s.unk_04;
        if (a == 0xff) {
            if (b == 0) {
                unk_38 = func_020682a8(s.func_020a72b0());
            }
        }
    }
}

void Unk_020e2a90::func_08() {
    Unk_020e2ac8 *p = unk_80;
    if (p == NULL) {
        p = &data_021edc50;
    }
    unk_7c = 1;
    p->func_020a823c(this);
    p->func_020a84bc();
    p->func_020a8368((u8 *)unk_10);
    p->func_020a8240((u8 *)unk_14);
    p->func_020a8234();
    unk_7c = 0;
}

u32 Unk_020e2a90::func_0c() {
    Unk_020e2ac8 *p = unk_80;
    if (p == NULL) {
        p = &data_021edc50;
    }
    unk_7c = 2;
    p->func_020a823c(this);
    p->func_020a84bc();
    p->func_020a8368((u8 *)unk_10);
    p->func_020a8240((u8 *)unk_14);
    p->func_020a8234();
    unk_7c = 0;
    return unk_68;
}

// ---- Unk_020e2ae8
Unk_020e2ae8::Unk_020e2ae8() : Unk_020e2ac8(1) {
    unk_2c = NULL;
    unk_30 = NULL;
    unk_34 = 0;
    unk_38 = 0;
}

Unk_020e2ae8::~Unk_020e2ae8() {}

void Unk_020e2ae8::func_020a7d40(Unk_020e2a78 *s, u8 *str, u32 mode, u8 flag) {
    unk_2c = s;
    unk_30 = str;
    unk_34 = mode;
    unk_38 = 0;
    if (flag) {
        func_020a822c();
    } else {
        func_020a8224();
    }
    func_020a8368(str);
}

void Unk_020e2ae8::func_020a7d30() {
    unk_2c = NULL;
    unk_30 = NULL;
    unk_34 = 0;
    unk_38 = 0;
}

u8 Unk_020e2ae8::func_020a7d28() {
    return unk_38;
}

void Unk_020e2ae8::vfunc_0c() {
    if (unk_2c != NULL) {
        if (unk_34 == 0) {
            unk_38 = unk_2c->func_020a798c(unk_30, unk_04);
        } else if (unk_34 == 1) {
            unk_38 = unk_2c->func_020a7940(unk_30, unk_04);
        }
    }
}

// ---- Unk_020e2a78
Unk_020e2a78::Unk_020e2a78() : unk_04(0) {}

Unk_020e2a78::~Unk_020e2a78() {}

void Unk_020e2a78::func_020a7c3c() {
    func_0205113c((StrBuf *)this);
    unk_04 = 0;
    unk_08.func_020a8b1c();
}

u8 Unk_020e2a78::func_020a7c04(u8 *str) {
    data_021edc80.func_020a7d40(this, str, 0, 0);
    data_021edc80.func_020a8240(NULL);
    u8 r = data_021edc80.func_020a7d28();
    data_021edc80.func_020a7d30();
    return r;
}

u8 Unk_020e2a78::func_020a7bd8(Unk_020e2a78 *other) {
    u8 r = func_020a7c04(other->vfunc_0c());
    unk_08.func_020a8b34(&other->unk_08);
    return r;
}

BOOL Unk_020e2a78::func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b) {
    s32 srcSize = src->vfunc_08();
    u8 *srcPtr = src->vfunc_0c();
    u8 *dst = vfunc_0c();
    u32 dstSize = vfunc_08();
    u32 pos = 0;
    BOOL over = FALSE;
    BOOL done = FALSE;
    s32 i = 0;
    for (; i < srcSize;) {
        u8 *out = dst + pos;
        char tmp[8];
        u32 n = func_020a69b4(tmp, *srcPtr);
        if (pos + n > dstSize) {
            over = TRUE;
        }
        if (!over) {
            if (n == 1) {
                s8 c = tmp[0];
                if (c == 0) {
                    done = TRUE;
                    if (b) {
                        func_0212a360(tmp, func_0205020c());
                        n = func_0212a438(tmp);
                        if (pos + n > dstSize) {
                            over = done;
                        }
                    }
                } else if (a) {
                    if (c == 0xa) {
                        func_0212a360(tmp, func_02050214());
                        n = func_0212a438(tmp);
                        if (pos + n > dstSize) {
                            over = TRUE;
                        }
                    }
                }
            }
            if (!over) {
                for (u32 j = 0; j < n; j++) {
                    out[j] = tmp[j];
                }
            }
        }
        if (over) {
            break;
        }
        pos += n;
        if (done) {
            break;
        }
        i++;
        srcPtr++;
    }
    if (!over && pos < dstSize) {
        done = TRUE;
        while (pos < dstSize) {
            dst[pos] = 0;
            pos++;
        }
    }
    if (!done) {
        *(dst + dstSize - 1) = 0;
    }
    unk_08.func_020a8b34(&src->unk_04);
    if (!over && done) {
        return TRUE;
    }
    return FALSE;
}

u8 Unk_020e2a78::func_020a7a64(u8 *str) {
    data_021edc80.func_020a7d40(this, str, 0, 1);
    data_021edc80.func_020a8240(NULL);
    u8 r = data_021edc80.func_020a7d28();
    data_021edc80.func_020a7d30();
    return r;
}

u8 Unk_020e2a78::func_020a7a28(u8 *str) {
    data_021edc80.func_020a7d40(this, str, 1, 0);
    data_021edc80.func_020a8240(NULL);
    u8 r = data_021edc80.func_020a7d28();
    data_021edc80.func_020a7d30();
    return r;
}

u8 Unk_020e2a78::func_020a7a0c(Unk_020e2a78 *other) {
    return func_020a7a28(other->vfunc_0c());
}

BOOL Unk_020e2a78::func_020a79dc(Unk_020e2a78 *other) {
    u8 *o = other->vfunc_0c();
    return func_0212a190(vfunc_0c(), o) == 0;
}

BOOL Unk_020e2a78::func_020a798c(u8 *start, u8 *end) {
    func_020a7c3c();
    u8 *buf = vfunc_0c();
    u32 cap = vfunc_08();
    s32 len = end - start;
    BOOL ok;
    if ((u32)(len + 1) <= cap) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        unk_04 = len;
    } else {
        unk_04 = cap - 1;
    }
    func_02116048(start, buf, unk_04);
    return ok;
}

BOOL Unk_020e2a78::func_020a7940(u8 *start, u8 *end) {
    u8 *buf = vfunc_0c();
    u32 cap = vfunc_08();
    buf += unk_04;
    cap -= unk_04;
    s32 len = end - start;
    BOOL ok;
    if ((u32)(len + 1) <= cap) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (!ok) {
        len = cap - 1;
    }
    func_02116048(start, buf, len);
    unk_04 += len;
    return ok;
}

// ---- Unk_020e2a60
Unk_020e2a60::Unk_020e2a60() {}

Unk_020e2a60::~Unk_020e2a60() {}

extern "C" BOOL func_020a78a4(StrBuf *buf, const void *src, s32 len) {
    return func_02050f7c(buf, src, len);
}

BOOL Unk_020e2a60::func_020a77f8(Unk_020e2a78 *src) {
    u8 *sp = src->vfunc_0c();
    u32 srcSize = src->vfunc_08();
    u32 consumed = 0;
    u8 *dp = vfunc_0c();
    u32 dstSize = vfunc_08();
    u32 count = 0;
    BOOL ok = TRUE;
    while (consumed < srcSize && count < dstSize) {
        u8 c;
        if (*sp == 0) {
            break;
        }
        u32 n = func_020a69ac(&c, sp);
        if (n == 0) {
            n = 1;
            ok = FALSE;
        } else {
            *dp = c;
            dp++;
            count++;
        }
        sp += n;
        consumed += n;
    }
    if (count >= dstSize && *sp != 0) {
        ok = FALSE;
    }
    while (count < dstSize) {
        *dp = 0;
        count++;
        dp++;
    }
    unk_04.func_020a8b34(&src->unk_08);
    return ok;
}

// ---- Unk_020a72b0
extern "C" {
u8 func_020a77e0(u8 *p, u32 i) {
    u8 t = p[i];
    return func_020a8af4(&t);
}

u16 func_020a77c0(u8 *p, u32 i) {
    u8 *q = p + i;
    u16 t = q[0] | (q[1] << 8);
    return func_020a8af8(&t);
}
}

void Unk_020a72b0::func_020a777c(u8 *p) {
    u8 a = func_020a77e0(p, 0);
    u8 b = func_020a77e0(p, 1);
    u8 c = func_020a77e0(p, 2);
    u16 d = func_020a77c0(p, 3);
    unk_00 = c;
    unk_04 = d;
    unk_08 = b - 5;
    unk_0c = (char *)(p + 5);
    unk_10 = p;
}

Unk_020a72b0::Unk_020a72b0() {
    unk_00 = -1;
    unk_04 = -1;
    unk_08 = 0;
    unk_0c = NULL;
}

extern "C" void func_020a7768() {}

void Unk_020a72b0::func_020a7754(u8 *a) {
    *a = func_020a77e0((u8 *)unk_0c, 0);
}

void Unk_020a72b0::func_020a7730(u8 *a, u8 *b) {
    *a = func_020a77e0((u8 *)unk_0c, 0);
    *b = func_020a77e0((u8 *)unk_0c, 1);
}

void Unk_020a72b0::func_020a76fc(u8 *a, u8 *b, u8 *c) {
    *a = func_020a77e0((u8 *)unk_0c, 0);
    *b = func_020a77e0((u8 *)unk_0c, 1);
    *c = func_020a77e0((u8 *)unk_0c, 2);
}

void Unk_020a72b0::func_020a76bc(u8 *a, u8 *b, u8 *c, u8 *d) {
    *a = func_020a77e0((u8 *)unk_0c, 0);
    *b = func_020a77e0((u8 *)unk_0c, 1);
    *c = func_020a77e0((u8 *)unk_0c, 2);
    *d = func_020a77e0((u8 *)unk_0c, 3);
}

void Unk_020a72b0::func_020a7670(u8 *a, u8 *b, u8 *c, u8 *d, u8 *e) {
    *a = func_020a77e0((u8 *)unk_0c, 0);
    *b = func_020a77e0((u8 *)unk_0c, 1);
    *c = func_020a77e0((u8 *)unk_0c, 2);
    *d = func_020a77e0((u8 *)unk_0c, 3);
    *e = func_020a77e0((u8 *)unk_0c, 4);
}

void Unk_020a72b0::func_020a7648(u8 *buf, s32 n) {
    for (s32 i = 0; i < n; i++) buf[i] = func_020a77e0((u8 *)unk_0c, i);
}

void Unk_020a72b0::func_020a7634(u16 *out) { *out = func_020a77c0((u8 *)unk_0c, 0); }

u32 Unk_020a72b0::func_020a75dc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0) {
    u8 buf[2];
    Unk_020e2a78 *arr[2];
    func_020a7730(&buf[0], &buf[1]);
    *a1 = buf[0];
    *a3 = buf[1];
    arr[0] = a2;
    arr[1] = s0;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (u32 i = 0; i < 2; i++) {
        Unk_020e2a78 *t = arr[i];
        t->func_020a7a64((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 Unk_020a72b0::func_020a7574(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2) {
    u8 buf[8];
    Unk_020e2a78 *arr[3];
    func_020a76fc(&buf[0], &buf[1], &buf[2]);
    *a1 = buf[0];
    *a3 = buf[1];
    *s1 = buf[2];
    arr[0] = a2;
    arr[1] = s0;
    arr[2] = s2;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (s32 i = 0; i < 3; i++) {
        Unk_020e2a78 *t = arr[i];
        t->func_020a7a64((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 Unk_020a72b0::func_020a74fc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2,
                                u8 *s3, Unk_020e2a78 *s4) {
    u8 buf[8];
    Unk_020e2a78 *arr[4];
    func_020a76bc(&buf[0], &buf[1], &buf[2], &buf[3]);
    *a1 = buf[0];
    *a3 = buf[1];
    *s1 = buf[2];
    *s3 = buf[3];
    arr[0] = a2;
    arr[1] = s0;
    arr[2] = s2;
    arr[3] = s4;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (s32 i = 0; i < 4; i++) {
        Unk_020e2a78 *t = arr[i];
        t->func_020a7a64((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 Unk_020a72b0::func_020a7478(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2,
                                u8 *s3, Unk_020e2a78 *s4, u8 *s5, Unk_020e2a78 *s6) {
    u8 buf[12];
    Unk_020e2a78 *arr[5];
    func_020a7670(&buf[0], &buf[1], &buf[2], &buf[3], &buf[4]);
    *a1 = buf[0];
    *a3 = buf[1];
    *s1 = buf[2];
    *s3 = buf[3];
    *s5 = buf[4];
    arr[0] = a2;
    arr[1] = s0;
    arr[2] = s2;
    arr[3] = s4;
    arr[4] = s6;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (s32 i = 0; i < 5; i++) {
        Unk_020e2a78 *t = arr[i];
        t->func_020a7a64((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 Unk_020a72b0::func_020a7404() {
    s32 k = unk_04;
    u32 n = 0;
    if (k == 0 || k == 4) {
        n = 2;
    } else if (k == 1 || k == 5) {
        n = 3;
    } else if (k == 2 || k == 6) {
        n = 4;
    } else if (k == 3 || k == 7) {
        n = 5;
    }
    Unk_020aa8e0 t;
    u32 total = 1;
    char *p = unk_0c + unk_08 + 1;
    for (u32 i = 0; i < n; i++) {
        t.func_020a7a64((u8 *)p);
        u32 m = t.unk_04 + 1;
        total += m;
        p += m;
    }
    return total;
}

u32 Unk_020a72b0::func_020a7388(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, Unk_020e2a78 *s5,
                                Unk_020e2a78 *s6) {
    struct {
        u32 pad;
        u8 buf[8];
        Unk_020e2a78 *arr[2];
    } L;
    func_020a7648(L.buf, 8);
    *a1 = L.buf[0];
    *a3 = L.buf[2];
    *s1 = L.buf[4];
    *s3 = L.buf[6];
    *a2 = L.buf[1];
    *s0 = L.buf[3];
    *s2 = L.buf[5];
    *s4 = L.buf[7];
    L.arr[0] = s5;
    L.arr[1] = s6;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (u32 i = 0; i < 2; i++) {
        Unk_020e2a78 *t = *(Unk_020e2a78 **)((u8 *)L.arr + i * 4);
        t->func_020a7a64((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

BOOL Unk_020a72b0::func_020a7374() {
    if (unk_04 >= 15 && unk_04 <= 25) return TRUE;
    return FALSE;
}

s32 Unk_020a72b0::func_020a736c() { return unk_04 - 15; }

void Unk_020a72b0::func_020a7338(char **a, char **b) {
    char *s;
    char *p;
    *a = NULL;
    *b = NULL;
    s = unk_0c;
    if (s[0] != 0) *a = s;
    p = func_0212a120(s, 0);
    p++;
    if ((u32)(p - unk_0c) < unk_08) *b = p;
}

void Unk_020a72b0::func_020a72f0(char **a, char **b, char **c) {
    char *s;
    char *p;
    char *q;
    *a = NULL;
    *b = NULL;
    *c = NULL;
    s = unk_0c;
    if (s[0] != 0) *a = s;
    p = func_0212a120(s, 0);
    if (p[1] != 0) *b = p + 1;
    q = func_0212a120(p + 1, 0);
    q++;
    if ((u32)(q - unk_0c) < unk_08) *c = q;
}

void Unk_020a72b0::func_020a72c4(u32 *a, char **b, char **c) {
    *a = func_020a77e0((u8 *)unk_0c, 0);
    *b = unk_0c + unk_08;
    *c = unk_0c + 1;
}

u8 Unk_020a72b0::func_020a72b0() {
    u8 v;
    func_020a7754(&v);
    return v;
}

// ---- Unk_020a7238
extern "C" {
u8 *func_020a72a0(s32 i) { return data_020d07b8[i]; }
void func_020a7258(Unk_020a7238 *s);
Unk_020a7238 *func_020a7290(Unk_020a7238 *s) {
    func_020a7258(s);
    return s;
}
void func_020a728c() {}
void func_020a7264(Unk_020a7238 *d, Unk_020a7238 *s) {
    d->unk_00 = s->unk_00;
    d->unk_04 = s->unk_04;
    d->unk_05 = s->unk_05;
    d->unk_06 = s->unk_06;
    d->unk_07 = s->unk_07;
    d->unk_08 = s->unk_08;
    d->unk_09 = s->unk_09;
    d->unk_0a = s->unk_0a;
    d->unk_0b = s->unk_0b;
}
void func_020a7258(Unk_020a7238 *s) { func_02115fb4(s, 0, 0xc); }
void func_020a7254() {}
u8 func_020a7250(Unk_020a7238 *s) { return s->unk_04; }
u8 func_020a724c(Unk_020a7238 *s) { return s->unk_05; }
u8 func_020a7248(Unk_020a7238 *s) { return s->unk_06; }
u8 func_020a7244(Unk_020a7238 *s) { return s->unk_07; }
u8 func_020a7240(Unk_020a7238 *s) { return s->unk_09; }
void func_020a7238(u8 *out, Unk_020a7238 *s) { *out = s->unk_08; }
u32 func_020a7220(Unk_020a7238 *s) { return data_020d0800[func_020a7250(s)]; }
u32 func_020a7208(Unk_020a7238 *s) { return data_020d0864[func_020a7250(s)]; }
u32 func_020a71f0(Unk_020a7238 *s) { return data_020d08c8[func_020a7250(s)]; }
}

// ---- Unk_020e2a48
Unk_020e2a48::Unk_020e2a48() { func_020a7188(); }
Unk_020e2a48::~Unk_020e2a48() {}
u32 Unk_020e2a48::vfunc_08() { return 0x21; }
u8 *Unk_020e2a48::vfunc_0c() { return (u8 *)this + 0x12; }
void Unk_020e2a48::func_020a7188() { func_020a7c3c(); }

// ---- Unk_020e2a30
Unk_020e2a30::Unk_020e2a30() {
    unk_1e = data_021edb68;
    func_02115fb4(unk_04, 0, 0x1a);
}

Unk_020e2a30::~Unk_020e2a30() {}

void Unk_020e2a30::vfunc_08() {
    unk_1e = data_021edb68;
    func_02115fb4(unk_04, 0, 0x1a);
}

void Unk_020e2a30::func_020a710c(const char *src) {
    func_0212a2ec(unk_04, src, 0x19);
}

// ---- Touch input
static inline BOOL IsTouching() {
    return data_021f4770 != 0 && data_021f4774 != 0;
}

extern "C" BOOL func_020a70d4() {
    BOOL r = FALSE;
    if (!func_020a6d54() && IsTouching()) r = TRUE;
    return r;
}

extern "C" BOOL func_020a706c(s32 x0, s32 x1, s32 y0, s32 y1) {
    BOOL r = FALSE;
    if (!func_020a6d54() && IsTouching()) {
        s32 x = data_021ef5f8;
        s32 y = data_021ef5f4;
        if (x >= x0 && x < x1 && y >= y0 && y < y1) r = TRUE;
    }
    return r;
}

extern "C" BOOL func_020a7014(u32 *x, u32 *y) {
    BOOL r = FALSE;
    if (!func_020a6d54() && IsTouching()) {
        u32 a = data_021ef5f8;
        u32 b = data_021ef5f4;
        if (x != NULL) *x = a;
        if (y != NULL) *y = b;
        r = TRUE;
    }
    return r;
}

extern "C" {
BOOL func_020a6fd0(u32 *a, u32 *b) {
    BOOL r = FALSE;
    if (!func_020a6d54() && data_021f4770) {
        u8 x = data_021ef5f0;
        u8 y = data_021ef5ec;
        if (a) {
            *a = x;
        }
        if (b) {
            *b = y;
        }
        r = TRUE;
    }
    return r;
}

BOOL func_020a6fa4(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[1] & 0xfff)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6f7c(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[1] & 0x1)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6f54(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[1] & 0x2)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6f2c(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[1] & 0x40)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6f04(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[1] & 0x80)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6edc(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[1] & 0x8)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6eb4(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[0] & 0x1)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6e8c(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[0] & 0x2)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6e64(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[0] & 0x40)) {
        r = TRUE;
    }
    return r;
}

BOOL func_020a6e3c(void) {
    BOOL r = FALSE;
    if (!func_020a6d74() && (data_021f47d8[0] & 0x80)) {
        r = TRUE;
    }
    return r;
}

void func_020a6e30(void) { data_021edb6c = 1; }
void func_020a6e24(void) { data_021edb6c = 0; }
void func_020a6e18(void) { data_021edb64 = 0; }
void func_020a6e0c(void) { data_021edb64 = 1; }

BOOL func_020a6df8(void) {
    if (!data_021edb64) {
        return TRUE;
    }
    return FALSE;
}

u8 func_020a6dec(void) {
    return data_021edb64;
}

void func_020a6dd8(void) {
    data_021edb6c = 0;
    data_021edb64 = 0;
}

void func_020a6db4(void) {
    if (func_0208f024()) {
        data_021edb64 = 1;
    } else {
        data_021edb64 = 0;
    }
}

void func_020a6d94(void) {
    if (data_021edb64) {
        func_0208f044();
    } else {
        func_0208f038();
    }
}

BOOL func_020a6d74(void) {
    if (data_021edb6c && !data_021edb64) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_020a6d54(void) {
    if (data_021edb6c && data_021edb64) {
        return TRUE;
    }
    return FALSE;
}
}

// ---- Unk_020e2b28
// Unk_020a72b0::Unk_020a72b0(), which func_020a6a0c calls to re-construct its token in place. A placement new adds a
// null check, and C++ has no other way to call a constructor on an existing object.
extern "C" void func_020a776c(Unk_020a72b0 *token);

Unk_020e2b28::Unk_020e2b28() : unk_24(0) {
    unk_3c = 0;
    unk_40 = -1;
    unk_44 = -1;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_58 = 0;
}

Unk_020e2b28::~Unk_020e2b28() {}

extern "C" {
u32 func_020a6c84(u32 a, s32 b, s32 c) {
    data_021edcbc.func_020a6a0c();
    data_021edcbc.unk_24 = 0;
    data_021edcbc.unk_40 = b;
    data_021edcbc.unk_44 = c;
    data_021edcbc.func_020a8368((u8 *)a);
    data_021edcbc.func_020a82ec(FALSE);
    if (data_021edcfc.flag) {
        return (u32)data_021edcbc.unk_28.unk_10;
    }
    return 0;
}

u32 func_020a6c40(u32 a, u32 b) {
    data_021edcbc.func_020a6a0c();
    data_021edcbc.unk_24 = 1;
    data_021edcbc.unk_48 = b;
    data_021edcbc.func_020a8368((u8 *)a);
    data_021edcbc.func_020a82ec(FALSE);
    if (data_021edcfc.flag) {
        return data_021edcbc.unk_3c;
    }
    return 0;
}

u32 func_020a6be0(u32 a);

u32 func_020a6c1c(u32 a, u32 b) {
    s32 n = func_020a6be0(a) - b - 1;
    u32 r = 0;
    if (n >= 0) {
        r = func_020a6c40(a, n);
    }
    return r;
}

u32 func_020a6be0(u32 a) {
    data_021edcbc.func_020a6a0c();
    data_021edcbc.unk_24 = 3;
    data_021edcbc.func_020a8368((u8 *)a);
    data_021edcbc.func_020a82ec(FALSE);
    if (data_021edcfc.flag) {
        return data_021edcbc.unk_4c;
    }
    return 0;
}

u32 func_020a6b9c(u32 a, u32 b) {
    data_021edcbc.func_020a6a0c();
    data_021edcbc.unk_24 = 4;
    data_021edcbc.unk_50 = b;
    data_021edcbc.func_020a8368((u8 *)a);
    data_021edcbc.func_020a82ec(FALSE);
    if (data_021edcfc.flag) {
        return (u32)data_021edcbc.unk_04;
    }
    return 0;
}
}

void Unk_020e2b28::vfunc_08() {
    if (unk_24 == 4 && unk_50 == 0) {
        unk_58 = 1;
    }
}

void Unk_020e2b28::vfunc_0c() {
    if (unk_24 == 3) {
        unk_58 = 1;
    }
}

void Unk_020e2b28::vfunc_10(u32 v) {
    unk_3c = v;
    static void (Unk_020e2b28::*tbl[5])() = {0, &Unk_020e2b28::func_020a69f8, 0, &Unk_020e2b28::func_020a69f0,
                                             &Unk_020e2b28::func_020a69d4};
    void (Unk_020e2b28::*fn)() = tbl[unk_24];
    if (fn) {
        (this->*fn)();
    }
}

void Unk_020e2b28::vfunc_14(u8 *cmd) {
    unk_28.func_020a777c(cmd);
    static void (Unk_020e2b28::*tbl[5])() = {&Unk_020e2b28::func_020a69bc, 0, 0, 0, 0};
    void (Unk_020e2b28::*fn)() = tbl[unk_24];
    if (fn) {
        (this->*fn)();
    }
}

BOOL Unk_020e2b28::vfunc_18() {
    return unk_58 == 0;
}

void Unk_020e2b28::func_020a6a0c() {
    unk_24 = 0;
    func_020a776c(&unk_28);
    unk_3c = 0;
    unk_40 = -1;
    unk_44 = -1;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_58 = 0;
    func_020a84bc();
}

void Unk_020e2b28::func_020a69f8() {
    if (unk_4c++ == unk_48) {
        unk_58 = 1;
    }
}

void Unk_020e2b28::func_020a69f0() {
    unk_4c++;
}

void Unk_020e2b28::func_020a69d4() {
    if (unk_3c == 10) {
        unk_54++;
        if (unk_54 == unk_50) {
            unk_58 = 1;
        }
    }
}

void Unk_020e2b28::func_020a69bc() {
    unk_28.eq(unk_40, unk_44, &unk_58);
}

extern "C" {
BOOL func_020a69b4(char *out, u8 c) { return func_02050278(out, c); }
BOOL func_020a69ac(u8 *out, const u8 *src) { return func_0205026c(out, src); }
void func_020a6970(void) {}
void func_020a696c(void) {}
void func_020a6968(u8 *a, u8 b) { *a = b; }
void func_020a6960(u8 *a, u8 *b) { *b = *a; }
void func_020a695c(void) {}
void func_020a6958(void) {}

void func_020a6914(u8 *p, int a, int b, int c, u8 d, int e) {
    u8 flags = 0;
    if (c) flags |= 1;
    if (d) flags |= 2;
    func_02076b08(p, b, flags);
    p[1] = e;
    p[1] |= (a << 6) & 0xc0;
}
}
