#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
extern u8 data_021caabc[];
}

extern "C" {
extern s16 data_021ca9c8[];
}

extern "C" {
extern u8 data_021ca9fc[];
}

extern "C" {
extern u8 data_020cbae8[];
}

extern "C" {
extern char data_020ddee4[];
}

extern "C" {
s32 func_02051268(void *src, void *dst, s32 n);
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
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
}

extern "C" {
void func_020a7fd8(Unk_02050288 *obj);
}

extern "C" {
BOOL func_020027b4(u32 x);
}

extern "C" {
s32 func_02002778(u32 n);
}

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78;

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;

    /* 0x04 */ u8 unk_04;
};

extern "C" BOOL func_020b35f8(Unk_020e2a78 *buf, u8 *key, const char *name);

// ---------------------------------------------------------------------------------------------------------------------

class Unk_020ddc4c : public Unk_020e2a18 {
public:
    Unk_020ddc4c();
    virtual ~Unk_020ddc4c();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
};

// 0x200-byte destination buffer at +0xe
class Unk_020ddebc : public Unk_020e2a60 {
public:
    Unk_020ddebc();
    virtual ~Unk_020ddebc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[0x200];
};

// 0x28-byte destination buffer at +0xe
class Unk_020ddf5c : public Unk_020e2a60 {
public:
    Unk_020ddf5c();
    virtual ~Unk_020ddf5c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[0x28];
};

class Unk_020dded4 : public Unk_020e2a78 {
public:
    Unk_020dded4();
    virtual ~Unk_020dded4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[513];
};

class Unk_020ddf14 : public Unk_020e2a78 {
public:
    Unk_020ddf14();
    virtual ~Unk_020ddf14();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[33];
};

class Unk_020ddefc : public Unk_020e2a78 {
public:
    Unk_020ddefc();
    virtual ~Unk_020ddefc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[129];
};

class Unk_020ddf2c : public Unk_020e2a78 {
public:
    Unk_020ddf2c();
    virtual ~Unk_020ddf2c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[25];
};

class Unk_020ddf44 : public Unk_020e2a78 {
public:
    Unk_020ddf44();
    virtual ~Unk_020ddf44();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206cc14(u8 a, u8 b);
    void func_0206cc20(u8 a, u8 b, u32 c);
    void func_0206cc38();
    void func_0206cc6c(Unk_020e2a60 *src, BOOL b);
    void func_0206cc84(Unk_020e2a60 *src);
    void func_0206cc9c(BOOL b);
    void func_0206cce0();
    void func_0206cdb0();
    void func_0206cdcc(u16 v, u32 x);

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
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

extern "C" BOOL func_0206ca40(Unk_020e2a78 *buf, const char *name, u32 key);

Unk_020ddefc::Unk_020ddefc() { func_020a7c3c(); }

Unk_020ddefc::~Unk_020ddefc() {}

u32 Unk_020ddefc::vfunc_08() { return 0x81; }

u8 *Unk_020ddefc::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020ddf14::Unk_020ddf14() { func_020a7c3c(); }

Unk_020ddf14::~Unk_020ddf14() {}

u32 Unk_020ddf14::vfunc_08() { return 0x21; }

u8 *Unk_020ddf14::vfunc_0c() { return (u8 *)this + 0x12; }

