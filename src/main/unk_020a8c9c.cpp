#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files

// 0x020e2a08: small state object (position + two bytes), see unk_020a6914.cpp
class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

// Buffer interface with write position at +4, see unk_020a6914.cpp
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0; // size
    virtual u8 *vfunc_0c() = 0; // data
    u8 func_020a7bd8(Unk_020e2a78 *other);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// 0xc-byte record, see unk_020a6914.cpp (whose ctor func_020a7290 and dtor func_020a728c are still C functions there)
struct Unk_020a7238 {
    Unk_020a7238();
    ~Unk_020a7238();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

// 0x33-byte buffer; unk_020a6914.cpp calls this class Unk_020aa8e0 (its constructor)
class Unk_020e2c80 : public Unk_020e2a78 {
public:
    Unk_020e2c80();
    virtual ~Unk_020e2c80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    BOOL func_020aa840(const char *path, void *entry, Unk_020a7238 *out);

    /* 0x14 */ u8 unk_14[0x20];
};

// Buffer used on the stack in func_020aadcc; ctor func_0208e6b8, dtor func_0208e6a0
class Unk_020e1080 : public Unk_020e2a78 {
public:
    Unk_020e1080();
    virtual ~Unk_020e1080();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[8];
};

// BMG message file reader, see unk_020a6914.cpp
class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;

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

// ---------------------------------------------------------------------------------------------------------------------
// Widget classes defined elsewhere

// Widget root (vtable 0x020e0db4)
class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();

    /* 0x00 */ u8 unk_00[0x14];
};

// Vtable 0x020e100c
class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(s32 a);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();
    void func_0208d580(s32 v);
    void func_0208d60c(s32 a, s32 b);

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ Unk_02089270 unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

// Vtable 0x020e1028
class Unk_020e1028 : public Unk_020e0db4 {
public:
    Unk_020e1028(u32 a);
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d9a8();
    s32 func_0208d9d0();
    void func_0208d9d4(s32 a);
    void func_0208da58(s32 *x, s32 *y);
    void func_0208dae4(s32 a);
    void func_0208dae8(s32 a, s32 b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

// Vtable 0x020e1098 (ctor func_0208e590)
class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u8 a, s32 b);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208e110();
    void func_0208e13c(s32 v);
    void func_0208e1fc(s32 *x, s32 *y);
    void func_0208e288(s32 x, s32 y);


    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ Unk_020e1080 unk_4c;
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

// ---------------------------------------------------------------------------------------------------------------------
// Classes of this file

// Vtable 0x020e2cb0: BMG reader over a caller-provided buffer (the global data_021edde4)
class Unk_020e2cb0 : public Unk_020e2a18 {
public:
    Unk_020e2cb0();
    virtual ~Unk_020e2cb0();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();

    void func_020aa910();
    void func_020aa920(u8 *data, u32 size);

    /* 0xa4 */ u8 *unk_a4;
    /* 0xa8 */ u32 unk_a8;
};

// Vtable 0x020e2d14
class Unk_020e2d14 : public Unk_020e100c {
public:
    Unk_020e2d14();
    virtual ~Unk_020e2d14();
};

// Vtable 0x020e2cf8: scroll bar
class Unk_020e2cf8 : public Unk_020e0db4 {
public:
    Unk_020e2cf8();
    virtual ~Unk_020e2cf8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(s32 a, s32 b);

    void func_020aba28();
    void func_020aba34();
    void func_020aba40();
    void func_020aba4c();
    BOOL func_020aba58();
    void func_020aba64(s32 *x, s32 *y);
    s32 func_020aba70();
    s32 func_020aba74();
    s32 func_020aba78();
    s32 func_020aba80();
    s32 func_020aba84();
    void func_020aba98(s32 v);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ Unk_020e1028 unk_10;
};

// Vtable 0x020e2c98: menu window base (BG tile map loaded from a file)
class Unk_020e2c98 {
public:
    Unk_020e2c98();
    virtual ~Unk_020e2c98();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;

    s32 func_020ab14c(s32 x, s32 y);
    void func_020ab35c(s32 idx, u16 val);
    void func_020ab388();
    void func_020ab3a0(s32 a, s32 b);
    void func_020ab3e4();
    void func_020ab3f0();
    void func_020ab3fc();
    void func_020ab428();
    void func_020ab448();
    void func_020ab470(s32 v);
    void func_020ab474(s32 v);
    void func_020ab47c(u32 start, u32 end);
    void func_020ab4f0();
    void func_020ab510();
    void func_020ab58c();
    void func_020ab628();
    void func_020ab720();
    void func_020ab8ac();
    BOOL func_020ab8cc();
    BOOL func_020ab8f4(void *file);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u16 unk_08[5];
    /* 0x12 */ u8 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s16 unk_18;
    /* 0x1a */ s16 unk_1a;
    /* 0x1c */ s16 unk_1c;
    /* 0x1e */ s16 unk_1e;
};

// Vtable 0x020e2cc8
class Unk_020e2cc8 : public Unk_020e2c98 {
public:
    Unk_020e2cc8();
    virtual ~Unk_020e2cc8();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_020aa98c();
    void func_020aa998();
    void func_020aa9b0();
    void func_020aa9cc();
    void func_020aa9f0();
    void func_020aaa0c();
    void func_020aaa28();
    void func_020aaa40();
    void func_020aaa60();
    void func_020aaa90();
    void func_020aaaac();
    void func_020aaaf0();
    void func_020aab0c();
    void func_020aab30();
    void func_020aab4c();
    void func_020aab60();
    void func_020aab7c();
    void func_020aab90();
    void func_020aabbc();
    void func_020aabd0();
    void func_020aabfc();
    void func_020aac40();
    void func_020aac44();
    void func_020aac70(s32 v);
    void func_020aac7c();
    void func_020aac88();
    void func_020aac94();
    void func_020aaca0();
    void func_020aacac();
    void func_020aacb8();
    s32 func_020aacc4();
    BOOL func_020aacd0();
    BOOL func_020aace8();
    s32 func_020aad00();
    s32 func_020aad18();
    s32 func_020aad30();
    s32 func_020aad48();
    void func_020aad60(s32 v);
    void func_020aad6c(u8 v, BOOL flag);
    BOOL func_020aad9c();
    void func_020aadc4();
    void func_020aadcc();

    /* 0x020 */ Unk_020e2d14 unk_20;
    /* 0x06c */ Unk_020e1098 unk_6c;
    /* 0x0dc */ Unk_020e2cf8 unk_dc;
    /* 0x134 */ s32 unk_134;
    /* 0x138 */ u8 unk_138;
    /* 0x139 */ u8 unk_139;
    /* 0x13a */ u8 unk_13a;
    /* 0x13b */ u8 unk_13b;
    /* 0x13c */ u8 unk_13c;
    /* 0x13d */ u8 unk_13d;
};

// Vtable 0x020e2ce0
class Unk_020e2ce0 : public Unk_020e2c98 {
public:
    Unk_020e2ce0();
    virtual ~Unk_020e2ce0();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_020ab120(u8 v, BOOL flag);
    BOOL func_020ab19c(s32 a);
    void func_020ab1c8();
    void func_020ab1d0(s32 v);
    void func_020ab1d4();
    void func_020ab1e0();
    void func_020ab1ec();
    BOOL func_020ab21c();
    BOOL func_020ab244();

    /* 0x20 */ Unk_020e2d14 unk_20;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 unk_74;
};

// List entry, 0x68 bytes
class Unk_020aa72c {
public:
    Unk_020aa72c();
    ~Unk_020aa72c();
    void func_020aa72c();
    void func_020aa760(s32 v);
    void func_020aa764(const char *src);
    void func_020aa778(const u8 *p);
    void func_020aa780(const void *p);
    void func_020aa784(const u8 *p);
    s32 func_020aa78c();
    u8 *func_020aa790();
    Unk_020a7238 *func_020aa794();
    char *func_020aa798();
    u8 *func_020aa79c();
    Unk_020e2c80 *func_020aa7a0();
    void func_020aa7a4();

    /* 0x00 */ u8 unk_00;
    /* 0x04 */ const void *unk_04;
    /* 0x08 */ Unk_020e2c80 unk_08;
    /* 0x3c */ Unk_020a7238 unk_3c;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ char unk_49[0x1a];
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ s32 unk_64;
};

// List of up to five entries plus the selected one
class Unk_020aa3b8 {
public:
    Unk_020aa3b8();
    ~Unk_020aa3b8();
    void func_020aa3b8(s32 arg);
    void func_020aa43c(s32 idx);
    void func_020aa4b8();
    void func_020aa4cc(s32 v);
    Unk_020a7238 *func_020aa4d8();
    Unk_020e2c80 *func_020aa4e4();
    char *func_020aa4f0();
    u8 *func_020aa4fc();
    s32 func_020aa508();
    s32 func_020aa514();
    s32 func_020aa520();
    s32 func_020aa52c();
    Unk_020e2c80 *func_020aa538();
    Unk_020e2c80 *func_020aa54c();
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa568();
    void func_020aa59c();
    void func_020aa5f4();
    void func_020aa608();
    void func_020aa638(s32 idx, const u8 *a, s32 b, const u8 *c, const char *d, s32 e);
    void func_020aa680(s32 a, s32 b);

    /* 0x000 */ Unk_020aa72c unk_00[5];
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ u8 unk_214;
    /* 0x215 */ char unk_215[0x1a];
    /* 0x230 */ Unk_020e2c80 unk_230;
    /* 0x264 */ Unk_020a7238 unk_264;
    /* 0x270 */ s32 unk_270;
};

// List cursor for Unk_020e2ce0 windows, 0x30 bytes
class Unk_020aa0bc {
public:
    Unk_020aa0bc(Unk_020e2c98 *window);
    ~Unk_020aa0bc();
    void func_020a9f00();
    BOOL func_020a9f38();
    BOOL func_020aa0bc();
    BOOL func_020aa10c();
    void func_020aa148();
    void func_020aa170();
    void func_020aa194();
    void func_020aa1b8();
    void func_020aa240();
    void func_020aa248();
    BOOL func_020aa280();
    void func_020aa288();
    void func_020aa2f0();
    void func_020aa30c();
    void func_020aa314();
    void func_020aa31c();
    u32 func_020aa344();
    s32 func_020aa348();
    s32 func_020aa354();
    s32 func_020aa358();
    void func_020aa364(Unk_020aa3b8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_020e2c98 *unk_04;
    /* 0x08 */ Unk_02050288 *unk_08[5];
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ Unk_020aa3b8 *unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
};

// Scrolling cursor for Unk_020e2cc8 windows, 0x38 bytes
class Unk_020a9854 {
public:
    Unk_020a9854(Unk_020e2cc8 *window);
    ~Unk_020a9854();

    void func_020a9854();
    void func_020a9898();
    void func_020a98a0();
    void func_020a99d8();
    BOOL func_020a99e0();
    BOOL func_020a9a14();
    BOOL func_020a9a38();
    BOOL func_020a9a50();
    BOOL func_020a9a6c();
    BOOL func_020a9a8c();
    void func_020a9ad4();
    void func_020a9b60();
    BOOL func_020a9bf8();
    void func_020a9c34();
    void func_020a9c5c();
    void func_020a9c80();
    void func_020a9ca4();
    void func_020a9d20();
    BOOL func_020a9d54();
    BOOL func_020a9d74();
    BOOL func_020a9d94();
    BOOL func_020a9da4();
    void func_020a9db4();
    void func_020a9e2c();
    void func_020a9e48();
    void func_020a9e50();
    void func_020a9e58();
    s32 func_020a9e90();
    u32 func_020a9e9c();
    s32 func_020a9ea0();
    void func_020a9ea4(Unk_020aa3b8 *p);

    /* 0x00 */ Unk_020e2cc8 *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02050288 *unk_14[5];
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x34 */ Unk_020aa3b8 *unk_34;
};

// Vtable 0x020e2d70: common base of the two menu state machines
class Unk_020e2d70 {
public:
    Unk_020e2d70();
    virtual ~Unk_020e2d70();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual BOOL vfunc_10() = 0;
    virtual BOOL vfunc_14() = 0;
    void func_020a980c();

    /* 0x04 */ u8 unk_04;
};

// Vtable 0x020e2d30: menu state machine with a scrolling list
class Unk_020e2d30 : public Unk_020e2d70 {
public:
    Unk_020e2d30();
    virtual ~Unk_020e2d30();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();

    void func_020a8df4();
    void func_020a8e1c();
    void func_020a8ea4();
    void func_020a8ed4();
    void func_020a8fbc();
    void func_020a8fc4();
    void func_020a90b4();
    void func_020a9154();
    void func_020a916c();
    void func_020a92fc(Unk_020aa3b8 *p);

    /* 0x008 */ s32 unk_08;
    /* 0x00c */ Unk_020e2cc8 unk_0c;
    /* 0x14c */ Unk_020a9854 unk_14c;
    /* 0x184 */ s32 unk_184;
    /* 0x188 */ s32 unk_188;
    /* 0x18c */ s32 unk_18c;
    /* 0x190 */ u8 unk_190;
};

// Vtable 0x020e2d50: menu state machine with a short list
class Unk_020e2d50 : public Unk_020e2d70 {
public:
    Unk_020e2d50();
    virtual ~Unk_020e2d50();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();

    void func_020a930c();
    void func_020a9378();
    void func_020a940c();
    void func_020a9438();
    void func_020a94d8();
    void func_020a950c();
    void func_020a95e8();
    void func_020a9678();
    void func_020a9690();
    void func_020a9800(Unk_020aa3b8 *p);

    /* 0x08 */ s32 unk_08;
    /* 0x0c */ Unk_020e2ce0 unk_0c;
    /* 0x84 */ Unk_020aa0bc unk_84;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0;
};

// Holder that runs one of the two state machines
class Unk_020a8cf8 {
public:
    Unk_020a8cf8();
    ~Unk_020a8cf8();
    void func_020a8cf8();
    BOOL func_020a8d10();
    BOOL func_020a8d2c();
    void func_020a8d3c();
    void func_020a8d50();
    void func_020a8dc8(Unk_020aa3b8 *p);
    void func_020a8de0(Unk_020aa3b8 *p);

    /* 0x000 */ Unk_020e2d70 *unk_00;
    /* 0x004 */ Unk_020e2d50 unk_04;
    /* 0x0c8 */ Unk_020e2d30 unk_c8;
    /* 0x25c */ u8 unk_25c;
};

// Fixed-size stack of words
class Unk_020a8c9c {
public:
    Unk_020a8c9c();
    ~Unk_020a8c9c();
    BOOL func_020a8cb4();
    void func_020a8cc4(const u32 &value);
    u32 *func_020a8cd8();
    void func_020a8ce4();

    /* 0x00 */ u32 unk_00[6];
    /* 0x18 */ u32 unk_18;
};

// ---------------------------------------------------------------------------------------------------------------------
// Free functions and globals

extern "C" {
// Other files
void func_020014e4(s32 a);
}

extern "C" {
void func_020014f4(s32 a);
}

extern "C" {
void func_02001824(s32 a, s32 b);
}

extern "C" {
s32 func_0200402c(s32 id);
}

extern "C" {
void func_020639e8(char *buf, const char *fmt, ...);
}

extern "C" {
void func_02087e70(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
}

extern "C" {
s32 func_0209c38c(s32 a, s32 b);
}

extern "C" {
BOOL func_020a6dec(void);
}

extern "C" {
BOOL func_020a6df8(void);
}

extern "C" {
void func_020a6e0c(void);
}

extern "C" {
void func_020a6e18(void);
}

extern "C" {
void func_020a6e24(void);
}

extern "C" {
void func_020a6e30(void);
}

extern "C" {
BOOL func_020a6e3c(void);
}

extern "C" {
BOOL func_020a6e64(void);
}

extern "C" {
BOOL func_020a6eb4(void);
}

extern "C" {
BOOL func_020a6edc(void);
}

extern "C" {
BOOL func_020a6f04(void);
}

extern "C" {
BOOL func_020a6f2c(void);
}

extern "C" {
BOOL func_020a6f7c(void);
}

extern "C" {
BOOL func_020a6fa4(void);
}

extern "C" {
BOOL func_020a6fd0(s32 *x, s32 *y);
}

extern "C" {
BOOL func_020a7014(s32 *x, s32 *y);
}

extern "C" void _ZN12Unk_020e109813func_0208e290Ev(Unk_020e1098 *self, Unk_020e1080 *p);

extern "C" {
BOOL func_020a706c(s32 x0, s32 x1, s32 y0, s32 y1);
}

extern "C" {
BOOL func_020a70d4(void);
}

extern "C" {
Unk_020a7238 *func_020a7254(Unk_020a7238 *p);
}

extern "C" {
void func_020a7258(Unk_020a7238 *p);
}

extern "C" {
void func_020a7264(Unk_020a7238 *dst, Unk_020a7238 *src);
}

extern "C" {
void func_020a7fd8(Unk_02050288 *p);
}

extern "C" {
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
}

extern "C" {
Unk_020a7238 *func_020a8548(Unk_020e2a18 *p);
}

extern "C" {
void func_020b3558(Unk_020e1080 *buf, u8 *str, s32 n);
}

extern "C" {
void *func_020e8594(u32 size);
}

extern "C" {
void func_020e85fc(void *heap, void *ptr);
}

extern "C" {
void func_02111b3c(void *p, u32 a, u32 size);
}

extern "C" {
void func_02111ec8(void *p, u32 a, u32 size);
}

extern "C" {
void func_021145cc(void *p, u32 size);
}

extern "C" {
void func_02115fb4(void *dst, u32 value, u32 size);
}

extern "C" {
void func_02116048(const void *src, void *dst, u32 size);
}

extern "C" {
s32 func_021198b4(void *file, void *buf, u32 size);
}

extern "C" {
s32 func_021199e0(void *file);
}

extern "C" {
s32 func_02119a28(void *file, const char *path);
}

extern "C" {
void func_02119d78(void *file);
}

extern "C" {
char *func_0212a2ec(char *dst, const char *src, u32 n);
}

extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}

extern "C" {
// This file
const void *func_020aa3ac(u32 i);
}

extern "C" {
s32 func_020ab31c(s32 a, s32 mode);
}

extern "C" {
void func_020ab8a0(void *p, u32 n);
}

extern "C" {
extern const u8 data_020d092c[4];
}

extern "C" {
extern const u8 data_020d0930[4];
}

extern "C" {
extern const u8 data_020d0934[4];
}

extern "C" {
extern const void *const data_020d0938[2];
}

extern "C" {
extern const u16 data_020d0940[6];
}

extern "C" {
extern u32 *data_020d467c;
}

extern "C" {
extern u8 data_021edb68;
}

extern "C" {
extern Unk_020e2cb0 data_021edde4;
}

extern "C" {
extern u16 data_021f47d8[2];
}

extern "C" {
extern void *data_021f482c;
}

// ---- data ----
const u8 data_020d092c[4] = {0, 4, 0, 0};
const u8 data_020d0930[4] = {0, 3, 4, 0};
const u8 data_020d0934[4] = {0, 2, 3, 4};
const void *const data_020d0938[2] = {"select", "select2"};
const u16 data_020d0940[6] = {0x7d5f, 0x7d5f, 0x7d5f, 0x7d5f, 0x7d5f, 0};
Unk_020e2cb0 data_021edde4;


// ---------------------------------------------------------------------------------------------------------------------
// Functions, from the highest address to the lowest

Unk_020e2cf8::Unk_020e2cf8() : unk_0c(0x800), unk_10(1) {
    unk_10.func_0208dae4(0);
}

Unk_020e2cf8::~Unk_020e2cf8() {}

void Unk_020e2cf8::vfunc_08() {
    if (unk_10.func_0208d9d0()) {
        unk_10.vfunc_08();
        u32 r = *data_020d467c;
        s32 a = func_02089f64();
        s32 b = func_02089f68();
        func_02087e70(0, r, b, a, -1, 0, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_020e2cf8::vfunc_0c() {
    s32 a = func_020aba80();
    s32 b = func_020aba78();
    unk_10.func_0208dae8(a, b);
    unk_10.vfunc_0c();
}

void Unk_020e2cf8::vfunc_10(s32 a, s32 b) {
    Unk_020e0db4::vfunc_10(a, b);
    unk_10.vfunc_10(a, b);
}

void Unk_020e2cf8::func_020aba98(s32 v) { unk_0c = v; }

s32 Unk_020e2cf8::func_020aba84() { return -((unk_0c - 0x1000) * 32) >> 12; }

s32 Unk_020e2cf8::func_020aba80() { return 6; }

s32 Unk_020e2cf8::func_020aba78() { return func_020aba84(); }

s32 Unk_020e2cf8::func_020aba74() { return 0x20; }

s32 Unk_020e2cf8::func_020aba70() { return 0; }

void Unk_020e2cf8::func_020aba64(s32 *x, s32 *y) { unk_10.func_0208da58(x, y); }

BOOL Unk_020e2cf8::func_020aba58() { return unk_10.func_0208d9a8(); }

void Unk_020e2cf8::func_020aba4c() { unk_10.func_0208d9d4(1); }

void Unk_020e2cf8::func_020aba40() { unk_10.func_0208d9d4(0); }

void Unk_020e2cf8::func_020aba34() { unk_10.func_0208d9d4(2); }

void Unk_020e2cf8::func_020aba28() { unk_10.func_0208d9d4(3); }

Unk_020e2d14::Unk_020e2d14() : Unk_020e100c(1) {
    unk_28 = 0;
}

Unk_020e2d14::~Unk_020e2d14() {}

Unk_020e2c98::Unk_020e2c98() : unk_04(0), unk_12(0), unk_14(0), unk_18(0), unk_1a(0), unk_1c(0), unk_1e(0) {
    u32 i;
    for (i = 0; i < 5; i++) {
        unk_08[i] = 0;
    }
}

Unk_020e2c98::~Unk_020e2c98() {
    func_020ab8ac();
}

BOOL Unk_020e2c98::func_020ab8f4(void *file) {
    s32 opened = func_02119a28(file, "/a_mes/a_mes1a_bg_nsc.bin");
    BOOL ok;
    unk_04 = (u8 *)func_020e8594(0x800);
    if (unk_04) {
        ok = func_021198b4(file, unk_04, 0x800) != -1;
    } else {
        ok = FALSE;
    }
    s32 closed = func_021199e0(file);
    if (opened && ok && closed && unk_04) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e2c98::func_020ab8cc() {
    BOOL r = FALSE;
    u8 file[0x4c];
    func_02119d78(file);
    if (func_020ab8f4(file)) {
        r = TRUE;
    }
    return r;
}

void Unk_020e2c98::func_020ab8ac() {
    if (unk_04) {
        func_020e85fc(data_021f482c, unk_04);
        unk_04 = 0;
    }
}

void func_020ab8a0(void *p, u32 n) {
    func_02115fb4(p, 0x10, n);
}

void Unk_020e2c98::func_020ab720() {
    func_02116048(unk_04 + 0x2a2, unk_04 + 0x3a2, 0x1a);
    func_02116048(unk_04 + 0x2e2, unk_04 + 0x3e2, 0x1a);
    func_02116048(unk_04 + 0x25e, unk_04 + 0x35e, 0x22);
    func_02116048(unk_04 + 0x51e, unk_04 + 0x41e, 0x22);
    *(u16 *)(unk_04 + 0x39e) = *(u16 *)(unk_04 + 0x29e);
    *(u16 *)(unk_04 + 0x3a0) = *(u16 *)(unk_04 + 0x2a0);
    *(u16 *)(unk_04 + 0x3be) = *(u16 *)(unk_04 + 0x2be);
    *(u16 *)(unk_04 + 0x3bc) = *(u16 *)(unk_04 + 0x2bc);
    *(u16 *)(unk_04 + 0x3de) = *(u16 *)(unk_04 + 0x4de);
    *(u16 *)(unk_04 + 0x3e0) = *(u16 *)(unk_04 + 0x4e0);
    *(u16 *)(unk_04 + 0x3fe) = *(u16 *)(unk_04 + 0x4fe);
    *(u16 *)(unk_04 + 0x3fc) = *(u16 *)(unk_04 + 0x4fc);
    func_020ab8a0(unk_04 + 0x25e, 0x22);
    func_020ab8a0(unk_04 + 0x29e, 0x22);
    func_020ab8a0(unk_04 + 0x2de, 0x22);
    func_020ab8a0(unk_04 + 0x31e, 0x22);
    func_020ab8a0(unk_04 + 0x45e, 0x22);
    func_020ab8a0(unk_04 + 0x49e, 0x22);
    func_020ab8a0(unk_04 + 0x4de, 0x22);
    func_020ab8a0(unk_04 + 0x51e, 0x22);
    func_020ab47c(0xd, 0x10);
    func_020ab474(0xd);
    unk_1e = 1;
}

void Unk_020e2c98::func_020ab628() {
    func_02116048(unk_04 + 0x29e, unk_04 + 0x39e, 0x22);
    func_02116048(unk_04 + 0x2de, unk_04 + 0x3de, 0x22);
    func_02116048(unk_04 + 0x25e, unk_04 + 0x35e, 0x22);
    func_02116048(unk_04 + 0x49e, unk_04 + 0x41e, 0x22);
    func_02116048(unk_04 + 0x4de, unk_04 + 0x45e, 0x22);
    func_02116048(unk_04 + 0x51e, unk_04 + 0x49e, 0x22);
    func_020ab8a0(unk_04 + 0x25e, 0x22);
    func_020ab8a0(unk_04 + 0x29e, 0x22);
    func_020ab8a0(unk_04 + 0x2de, 0x22);
    func_020ab8a0(unk_04 + 0x31e, 0x22);
    func_020ab8a0(unk_04 + 0x4de, 0x22);
    func_020ab8a0(unk_04 + 0x51e, 0x22);
    func_020ab47c(0xd, 0x12);
    func_020ab474(0xd);
    unk_1e = 2;
}

void Unk_020e2c98::func_020ab58c() {
    func_02116048(unk_04 + 0x29e, unk_04 + 0x39e, 0x22);
    func_02116048(unk_04 + 0x2de, unk_04 + 0x3de, 0x22);
    func_02116048(unk_04 + 0x25e, unk_04 + 0x35e, 0x22);
    func_020ab8a0(unk_04 + 0x25e, 0x22);
    func_020ab8a0(unk_04 + 0x29e, 0x22);
    func_020ab8a0(unk_04 + 0x2de, 0x22);
    func_020ab8a0(unk_04 + 0x31e, 0x22);
    func_020ab47c(0xd, 0x14);
    func_020ab474(0xd);
    unk_1e = 3;
}

void Unk_020e2c98::func_020ab510() {
    func_02116048(unk_04 + 0x29e, unk_04 + 0x31e, 0x22);
    func_02116048(unk_04 + 0x2de, unk_04 + 0x35e, 0x22);
    func_02116048(unk_04 + 0x25e, unk_04 + 0x2de, 0x22);
    func_020ab8a0(unk_04 + 0x25e, 0x22);
    func_020ab8a0(unk_04 + 0x29e, 0x22);
    func_020ab47c(0xb, 0x14);
    func_020ab474(0xb);
    unk_1e = 4;
}

void Unk_020e2c98::func_020ab4f0() {
    func_020ab47c(9, 0x14);
    func_020ab474(9);
    unk_1e = 5;
}

void Unk_020e2c98::func_020ab47c(u32 start, u32 end) {
    if ((u32)unk_14 < 13) {
        s32 n = 13 - unk_14;
        s32 off1 = (30 - n) * 2;
        s32 off2 = (31 - n) * 2;
        u32 row;
        for (row = start; row <= end; row++) {
            s32 i;
            *(u16 *)(row * 0x40 + (off1 + (u32)unk_04)) = *(u16 *)((unk_04 ? unk_04 : unk_04) + row * 0x40 + 0x3c);
            *(u16 *)(row * 0x40 + (off2 + (u32)unk_04)) = *(u16 *)(unk_04 + row * 0x40 + 0x3e);
            for (i = n - 1; i >= 0; i--) {
                func_020ab8a0(unk_04 + row * 0x40 + (31 - i) * 2, 2);
            }
        }
    }
}

void Unk_020e2c98::func_020ab474(s32 v) {
    unk_1c = (v - 9) << 3;
}

void Unk_020e2c98::func_020ab470(s32 v) {
    unk_14 = v;
}

void Unk_020e2c98::func_020ab448() {
    u16 *reg = (u16 *)0x400000a;
    *reg &= ~3;
    *reg = (*reg & 0x43) | 0x500;
    *reg &= ~0x40;
}

void Unk_020e2c98::func_020ab428() {
    func_021145cc(unk_04, 0x800);
    func_02111b3c(unk_04, 0, 0x800);
}

void Unk_020e2c98::func_020ab3fc() {
    if (unk_12) {
        func_021145cc(unk_08, 10);
        func_02111ec8(unk_08, 0x82, 10);
        unk_12 = 0;
    }
}

void Unk_020e2c98::func_020ab3f0() {
    func_020014f4(2);
}

void Unk_020e2c98::func_020ab3e4() {
    func_020014e4(2);
}

void Unk_020e2c98::func_020ab3a0(s32 a, s32 b) {
    s32 x = func_0209c38c(0x66, 2);
    s32 y = func_0209c38c(0x66, 3) - 8;
    s32 n = 13 - unk_14;
    if (n < 0) {
        n = 0;
    }
    s32 pos = a + (x + y * n);
    func_02001824(pos, b);
    unk_18 = pos;
    unk_1a = b;
}

void Unk_020e2c98::func_020ab388() {
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_08[i] = 12;
    }
    unk_12 = 1;
}

void Unk_020e2c98::func_020ab35c(s32 idx, u16 val) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (i == idx) {
            unk_08[i] = val;
        } else {
            unk_08[i] = 0;
        }
    }
    unk_12 = 1;
}

s32 func_020ab31c(s32 a, s32 mode) {
    s32 r = 0;
    if (mode == 1) {
    } else if (mode == 2) {
        r = data_020d092c[a];
    } else if (mode == 3) {
        r = data_020d0930[a];
    } else if (mode == 4) {
        r = data_020d0934[a];
    } else if (mode == 5) {
        r = a;
    }
    return r * 26 + 0x99;
}

Unk_020e2ce0::Unk_020e2ce0() {
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 0;
}

Unk_020e2ce0::~Unk_020e2ce0() {}

void Unk_020e2ce0::vfunc_08() {
    unk_20.func_0208d60c(5, unk_1c + (unk_6c * 16 - 4));
    unk_20.vfunc_0c();
}

void Unk_020e2ce0::vfunc_0c() {
    if (unk_74) {
        unk_20.vfunc_08();
    }
}

BOOL Unk_020e2ce0::func_020ab244() {
    if (unk_20.func_0208d534() == 7) return TRUE;
    return FALSE;
}

BOOL Unk_020e2ce0::func_020ab21c() {
    if (unk_20.func_0208d534() == 8 && unk_20.func_0208d4fc()) return TRUE;
    return FALSE;
}

void Unk_020e2ce0::func_020ab1ec() {
    unk_6c = 0;
    unk_20.vfunc_10(-unk_18, -unk_1a);
    unk_20.func_0208d580(7);
}

void Unk_020e2ce0::func_020ab1e0() { unk_20.func_0208d580(0); }

void Unk_020e2ce0::func_020ab1d4() { unk_20.func_0208d580(8); }

void Unk_020e2ce0::func_020ab1d0(s32 v) { unk_6c = v; }

void Unk_020e2ce0::func_020ab1c8() { unk_70 = 0; }

BOOL Unk_020e2ce0::func_020ab19c(s32 a) {
    u16 v = data_020d0940[unk_70];
    unk_70++;
    BOOL r;
    if (unk_70 >= 5) r = TRUE; else r = FALSE;
    func_020ab35c(a, v);
    return r;
}

s32 Unk_020e2c98::func_020ab14c(s32 x, s32 y) {
    s32 res = -1;
    s32 i = 0;
    s32 left = 0x88 - unk_18;
    s32 right = left + unk_14 * 8;
    if (x >= left && x < right) {
        s32 top = unk_1c + 0x50 - unk_1a;
        for (; i < unk_1e; i++) {
            s32 bot = top + 0x10;
            if (y >= top && y < bot) {
                res = i;
                break;
            }
            top = bot;
        }
    }
    return res;
}

void Unk_020e2ce0::func_020ab120(u8 v, BOOL flag) {
    if (flag != 0 && unk_74 == 0 && v != 0) func_0200402c(0x3b);
    unk_74 = v;
}

Unk_020e2cc8::Unk_020e2cc8() : unk_6c(1, 0) {
    unk_134 = 0;
    unk_138 = 0;
    unk_139 = 0;
    unk_13a = 0;
    unk_13b = 0;
    unk_13c = 0;
    unk_13d = 0;
}

Unk_020e2cc8::~Unk_020e2cc8() {}

void Unk_020e2cc8::vfunc_08() {
    if (unk_138) { unk_138 = 0; func_020aabfc(); }
    if (unk_13a) { unk_13a = 0; func_020aaaac(); }
    if (unk_13c) { unk_13c = 0; func_020aac44(); }
    static void (Unk_020e2cc8::*table[12])() = {
        &Unk_020e2cc8::func_020aac40, &Unk_020e2cc8::func_020aabd0, &Unk_020e2cc8::func_020aab90,
        &Unk_020e2cc8::func_020aab60, &Unk_020e2cc8::func_020aab30, &Unk_020e2cc8::func_020aaaf0,
        &Unk_020e2cc8::func_020aaa90, &Unk_020e2cc8::func_020aaa40, &Unk_020e2cc8::func_020aaa0c,
        &Unk_020e2cc8::func_020aa9f0, &Unk_020e2cc8::func_020aa9b0, &Unk_020e2cc8::func_020aa98c,
    };
    (this->*table[unk_134])();
    s32 a, b, c, d;
    if (func_020aace8()) {
        unk_dc.func_020aba64(&a, &b);
        s32 e = unk_dc.func_020aba84();
        unk_20.func_0208d60c(a + 0x10, b + 7 + e);
    } else if (func_020aacd0()) {
        unk_6c.func_0208e1fc(&c, &d);
        unk_20.func_0208d60c(c + 0x46, d + 0x4c);
    }
    unk_6c.func_0208e288(0x3c, 0x44);
    unk_20.vfunc_0c();
    unk_6c.vfunc_0c();
    unk_dc.vfunc_0c();
}

void Unk_020e2cc8::vfunc_0c() {
    if (unk_13d) unk_20.vfunc_08();
    unk_6c.vfunc_08();
    unk_dc.vfunc_08();
}

void Unk_020e2cc8::func_020aadcc() {
    s32 y = -unk_1a;
    s32 x = -unk_18;
    unk_20.vfunc_10(x, y);
    unk_6c.vfunc_10(0, y);
    unk_dc.vfunc_10(x, y);
    Unk_020e1080 l;
    u8 v = 0x12;
    func_020b3558(&l, &v, 0);
    _ZN12Unk_020e109813func_0208e290Ev(&unk_6c, &l);
    unk_dc.func_020aba98(0x800);
    func_020aacb8();
}

void Unk_020e2cc8::func_020aadc4() { func_020aac7c(); }

BOOL Unk_020e2cc8::func_020aad9c() {
    if (unk_139 && unk_dc.func_020aba58()) return TRUE;
    return FALSE;
}

void Unk_020e2cc8::func_020aad6c(u8 v, BOOL flag) {
    if (flag != 0 && unk_13d == 0 && v != 0) func_0200402c(0x3b);
    unk_13d = v;
}

void Unk_020e2cc8::func_020aad60(s32 v) { unk_dc.func_020aba98(v); }

s32 Unk_020e2cc8::func_020aad48() { return unk_dc.func_020aba80() + 0x80 - unk_18; }

s32 Unk_020e2cc8::func_020aad30() { return unk_dc.func_020aba78() + 0x60 - unk_1a; }

s32 Unk_020e2cc8::func_020aad18() { return unk_dc.func_020aba70() + 0x60 - unk_1a; }

s32 Unk_020e2cc8::func_020aad00() { return unk_dc.func_020aba74() + 0x60 - unk_1a; }

BOOL Unk_020e2cc8::func_020aace8() {
    if ((u32)(unk_134 - 1) <= 4) return TRUE;
    return FALSE;
}

BOOL Unk_020e2cc8::func_020aacd0() {
    if ((u32)(unk_134 - 6) <= 5) return TRUE;
    return FALSE;
}

s32 Unk_020e2cc8::func_020aacc4() { return unk_134; }

void Unk_020e2cc8::func_020aacb8() { unk_138 = 1; }

void Unk_020e2cc8::func_020aacac() { unk_139 = 1; }

void Unk_020e2cc8::func_020aaca0() { unk_139 = 0; }

void Unk_020e2cc8::func_020aac94() { unk_13a = 1; }

void Unk_020e2cc8::func_020aac88() { unk_13b = 1; }

void Unk_020e2cc8::func_020aac7c() { unk_13c = 1; }

void Unk_020e2cc8::func_020aac70(s32 v) { unk_20.func_0208d580(v); }

void Unk_020e2cc8::func_020aac44() {
    unk_134 = 0;
    func_020aac70(0);
    unk_dc.func_020aba40();
    unk_6c.func_0208e13c(0);
}

void Unk_020e2cc8::func_020aac40() {}

void Unk_020e2cc8::func_020aabfc() {
    unk_134 = 1;
    unk_20.vfunc_10(-unk_18, -unk_1a);
    func_020aac70(1);
    unk_dc.func_020aba4c();
    unk_6c.func_0208e13c(1);
}

void Unk_020e2cc8::func_020aabd0() {
    if (unk_139) func_020aabbc();
    else if (unk_13b) func_020aaa60();
}

void Unk_020e2cc8::func_020aabbc() {
    unk_134 = 2;
    return func_020aac70(2);
}

void Unk_020e2cc8::func_020aab90() {
    if (unk_20.func_0208d4fc()) {
        if (unk_13d) func_0200402c(0x33);
        func_020aab7c();
    }
}

void Unk_020e2cc8::func_020aab7c() {
    unk_134 = 3;
    return unk_dc.func_020aba34();
}

void Unk_020e2cc8::func_020aab60() {
    if (unk_139 == 0) func_020aab4c();
}

void Unk_020e2cc8::func_020aab4c() {
    unk_134 = 4;
    return unk_dc.func_020aba28();
}

void Unk_020e2cc8::func_020aab30() {
    if (unk_dc.func_020aba58()) func_020aab0c();
}

void Unk_020e2cc8::func_020aab0c() {
    unk_134 = 5;
    unk_dc.func_020aba4c();
    func_020aac70(3);
}

void Unk_020e2cc8::func_020aaaf0() {
    if (unk_20.func_0208d4fc()) func_020aabfc();
}

void Unk_020e2cc8::func_020aaaac() {
    unk_134 = 6;
    unk_20.vfunc_10(0, -unk_1a);
    unk_20.func_0208d580(7);
    unk_dc.func_020aba4c();
    unk_6c.func_0208e13c(1);
}

void Unk_020e2cc8::func_020aaa90() {
    if (unk_13b) func_020aaa60();
}

void Unk_020e2cc8::func_020aaa60() {
    unk_134 = 7;
    unk_20.vfunc_10(0, -unk_1a);
    func_020aac70(8);
}

void Unk_020e2cc8::func_020aaa40() {
    if (unk_20.func_0208d4fc()) {
        func_0200402c(0x27);
        func_020aaa28();
    }
}

void Unk_020e2cc8::func_020aaa28() {
    unk_134 = 8;
    return unk_6c.func_0208e13c(2);
}

void Unk_020e2cc8::func_020aaa0c() {
    if (unk_6c.func_0208e110()) func_020aa998();
}

void Unk_020e2cc8::func_020aa9f0() {
    if (unk_6c.func_0208e110()) func_020aa9cc();
}

void Unk_020e2cc8::func_020aa9cc() {
    unk_134 = 10;
    func_020aac70(9);
    unk_6c.func_0208e13c(1);
}

void Unk_020e2cc8::func_020aa9b0() {
    if (unk_20.func_0208d4fc()) func_020aa998();
}

void Unk_020e2cc8::func_020aa998() {
    unk_134 = 11;
    unk_13b = 0;
}

void Unk_020e2cc8::func_020aa98c() { unk_13b = 0; }

Unk_020e2cb0::Unk_020e2cb0() : Unk_020e2a18(1) {
    unk_a4 = 0;
    unk_a8 = 0;
}

Unk_020e2cb0::~Unk_020e2cb0() {}

void Unk_020e2cb0::func_020aa920(u8 *data, u32 size) {
    unk_a4 = data;
    unk_a8 = size;
}

void Unk_020e2cb0::func_020aa910() {
    unk_a4 = 0;
    unk_a8 = 0;
}

u32 Unk_020e2cb0::vfunc_08() { return (u32)unk_a4; }

u32 Unk_020e2cb0::vfunc_0c() { return unk_a8; }

Unk_020e2c80::Unk_020e2c80() { func_020a7c3c(); }

Unk_020e2c80::~Unk_020e2c80() {}

u32 Unk_020e2c80::vfunc_08() { return 0x21; }

u8 *Unk_020e2c80::vfunc_0c() { return (u8 *)this + 0x12; }

BOOL Unk_020e2c80::func_020aa840(const char *path, void *entry, Unk_020a7238 *out) {
    u8 *d = vfunc_0c();
    u32 s = vfunc_08();
    BOOL r;
    data_021edde4.func_020aa920(d, s);
    data_021edde4.func_020a8a20(path);
    r = data_021edde4.func_020a8950((u8 *)entry);
    func_020a7264(out, func_020a8548(&data_021edde4));
    data_021edde4.func_020a89f0();
    data_021edde4.func_020aa910();
    return r;
}

Unk_020aa72c::Unk_020aa72c() : unk_00(data_021edb68), unk_48(data_021edb68) {
    func_020aa7a4();
}

Unk_020aa72c::~Unk_020aa72c() {}

void Unk_020aa72c::func_020aa7a4() {
    unk_00 = data_021edb68;
    unk_04 = NULL;
    unk_08.func_020a7c3c();
    func_020a7258(&unk_3c);
    unk_48 = data_021edb68;
    func_02115fb4(unk_49, 0, 0x1a);
    unk_63 = 0;
    unk_64 = 0;
}

Unk_020e2c80 *Unk_020aa72c::func_020aa7a0() { return &unk_08; }

u8 *Unk_020aa72c::func_020aa79c() { return &unk_48; }

char *Unk_020aa72c::func_020aa798() { return unk_49; }

Unk_020a7238 *Unk_020aa72c::func_020aa794() { return &unk_3c; }

u8 *Unk_020aa72c::func_020aa790() { return &unk_63; }

s32 Unk_020aa72c::func_020aa78c() { return unk_64; }

void Unk_020aa72c::func_020aa784(const u8 *p) { unk_00 = *p; }

void Unk_020aa72c::func_020aa780(const void *p) { unk_04 = p; }

void Unk_020aa72c::func_020aa778(const u8 *p) { unk_48 = *p; }

void Unk_020aa72c::func_020aa764(const char *src) {
    unk_49[0x19] = 0;
    func_0212a2ec(unk_49, src, 0x19);
}

void Unk_020aa72c::func_020aa760(s32 v) { unk_64 = v; }

void Unk_020aa72c::func_020aa72c() {
    char buf[0x40];
    func_020639e8(buf, "/script/%s/select/%s.bmg", unk_04 ? "ENG" : "ENG", unk_04);
    unk_08.func_020aa840(buf, this, &unk_3c);
}

Unk_020aa3b8::Unk_020aa3b8() : unk_214(data_021edb68) {
    func_020aa5f4();
}

Unk_020aa3b8::~Unk_020aa3b8() {}

void Unk_020aa3b8::func_020aa680(s32 a, s32 b) {
    func_020aa5f4();
    unk_208 = a;
    unk_20c = b;
}

void Unk_020aa3b8::func_020aa638(s32 idx, const u8 *a, s32 b, const u8 *c, const char *d, s32 e) {
    Unk_020aa72c *p = &unk_00[idx];
    p->func_020aa784(a);
    p->func_020aa780(func_020aa3ac(b));
    p->func_020aa778(c);
    p->func_020aa760(e);
    if (d) {
        p->func_020aa764(d);
    }
}

void Unk_020aa3b8::func_020aa608() {
    s32 i;
    for (i = 0; i < unk_208; i++) {
        unk_00[i].func_020aa72c();
    }
}

void Unk_020aa3b8::func_020aa5f4() {
    func_020aa59c();
    func_020aa568();
}

void Unk_020aa3b8::func_020aa59c() {
    unk_210 = -1;
    unk_214 = data_021edb68;
    func_02115fb4(unk_215, 0, 0x1a);
    unk_230.func_020a7c3c();
    func_020a7258(&unk_264);
    unk_270 = 0;
}

void Unk_020aa3b8::func_020aa568() {
    s32 i;
    for (i = 0; (u32)i < 5; i++) {
        unk_00[i].func_020aa7a4();
    }
    unk_208 = 0;
    unk_20c = -1;
}

Unk_020aa72c *Unk_020aa3b8::func_020aa560(s32 i) { return &unk_00[i]; }

Unk_020e2c80 *Unk_020aa3b8::func_020aa54c() { return func_020aa560(0)->func_020aa7a0(); }

Unk_020e2c80 *Unk_020aa3b8::func_020aa538() { return func_020aa560(4)->func_020aa7a0(); }

s32 Unk_020aa3b8::func_020aa52c() { return unk_208; }

s32 Unk_020aa3b8::func_020aa520() { return unk_20c; }

s32 Unk_020aa3b8::func_020aa514() { return unk_210; }

s32 Unk_020aa3b8::func_020aa508() { return unk_270; }

u8 *Unk_020aa3b8::func_020aa4fc() { return &unk_214; }

char *Unk_020aa3b8::func_020aa4f0() { return unk_215; }

Unk_020e2c80 *Unk_020aa3b8::func_020aa4e4() { return &unk_230; }

Unk_020a7238 *Unk_020aa3b8::func_020aa4d8() { return &unk_264; }

void Unk_020aa3b8::func_020aa4cc(s32 v) { unk_208 = v; }

void Unk_020aa3b8::func_020aa4b8() { unk_20c = unk_208 - 1; }

void Unk_020aa3b8::func_020aa43c(s32 idx) {
    Unk_020aa72c *e = &unk_00[idx];
    unk_210 = idx;
    unk_214 = *e->func_020aa79c();
    unk_230.func_020a7bd8(e->func_020aa7a0());
    char *src = e->func_020aa798();
    unk_215[0x19] = 0;
    func_0212a2ec(unk_215, src, 0x19);
    func_020a7264(&unk_264, func_020a7254(e->func_020aa794()));
}

void Unk_020aa3b8::func_020aa3b8(s32 arg) {
    u32 i;
    s32 v = (arg << 4) >> 12;
    s32 sum;
    s32 sel;
    Unk_020aa72c *e;
    if (v >= 16) {
        v = 15;
    }
    sum = 0;
    sel = 3;
    for (i = 0; i < 4; i++) {
        sum += *unk_00[i].func_020aa790();
        if (v < sum) {
            sel = i;
            break;
        }
    }
    e = &unk_00[sel];
    unk_210 = sel;
    unk_214 = *e->func_020aa79c();
    func_020a7264(&unk_264, func_020a7254(e->func_020aa794()));
    unk_270 = v;
}

const void *func_020aa3ac(u32 i) { return data_020d0938[i]; }

Unk_020aa0bc::Unk_020aa0bc(Unk_020e2c98 *window) {
    u32 i;
    unk_00 = 0;
    unk_04 = window;
    unk_1c = 0;
    unk_20 = NULL;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    for (i = 0; i < 5; i++) {
        unk_08[i] = NULL;
    }
}

Unk_020aa0bc::~Unk_020aa0bc() { func_020aa148(); }

void Unk_020aa0bc::func_020aa364(Unk_020aa3b8 *p) {
    p->func_020aa52c();
    unk_20 = p;
}

s32 Unk_020aa0bc::func_020aa358() { return unk_20->func_020aa52c(); }

s32 Unk_020aa0bc::func_020aa354() { return unk_00; }

s32 Unk_020aa0bc::func_020aa348() { return unk_20->func_020aa514(); }

u32 Unk_020aa0bc::func_020aa344() { return unk_1c; }

void Unk_020aa0bc::func_020aa31c() {
    unk_20->func_020aa59c();
    func_020aa1b8();
    unk_00 = 0;
    unk_24 = 0;
    func_020aa240();
    func_020aa248();
}

void Unk_020aa0bc::func_020aa314() { func_020aa194(); }

void Unk_020aa0bc::func_020aa30c() { func_020aa170(); }

void Unk_020aa0bc::func_020aa2f0() {
    func_020aa148();
    unk_20->func_020aa568();
    unk_1c = 0;
    unk_20 = NULL;
}

void Unk_020aa0bc::func_020aa288() {
    if (unk_20) {
        if (unk_20->func_020aa514() < 0) {
            if (func_020aa10c()) {
                func_020aa240();
            } else {
                BOOL r = FALSE;
                if (func_020a6df8()) {
                    if (func_020aa0bc()) {
                        r = TRUE;
                    }
                } else if (func_020a6dec()) {
                    if (func_020a9f38()) {
                        r = TRUE;
                    }
                }
                if (r) {
                    unk_20->func_020aa43c(unk_00);
                }
            }
        }
    }
}

BOOL Unk_020aa0bc::func_020aa280() { return func_020a6df8(); }

void Unk_020aa0bc::func_020aa248() {
    u32 count = unk_20->func_020aa52c();
    u32 max = 0;
    u32 i;
    for (i = 0; i < count; i++) {
        if (unk_08[i]) {
            u32 v = unk_08[i]->func_02050bb4();
            if (v > max) {
                max = v;
            }
        }
    }
    unk_1c = max;
}

void Unk_020aa0bc::func_020aa240() {
    unk_28 = 0;
    unk_2c = 0;
}

void Unk_020aa0bc::func_020aa1b8() {
    u32 count = unk_20->func_020aa52c();
    u32 i;
    for (i = 0; i < count; i++) {
        Unk_020aa72c *e = unk_20->func_020aa560(i);
        u32 size = func_020ab31c(i, count);
        Unk_020e2c80 *buf = e->func_020aa7a0();
        Unk_02050288 *t = func_020a8054(size, 0xd, 2);
        if (t) {
            t->unk_2c = 1;
            t->unk_10 = (u32)buf->vfunc_0c();
            t->unk_50 = 2;
            t->unk_39 = 0xe;
            t->unk_38 = i + 1;
            t->unk_58 = 2;
            t->func_02050c68(0);
            t->unk_58 = 0;
            unk_08[i] = t;
        }
    }
}

void Unk_020aa0bc::func_020aa194() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_08[i]) {
            unk_08[i]->func_02050c90();
        }
    }
}

void Unk_020aa0bc::func_020aa170() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_08[i]) {
            unk_08[i]->func_02050c68(0);
        }
    }
}

void Unk_020aa0bc::func_020aa148() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_08[i]) {
            func_020a7fd8(unk_08[i]);
            unk_08[i] = NULL;
        }
    }
}

BOOL Unk_020aa0bc::func_020aa10c() {
    BOOL r = FALSE;
    if (func_020a6df8()) {
        if (func_020a6fa4()) {
            func_020a6e0c();
            r = TRUE;
        }
    } else if (func_020a6dec()) {
        if (func_020a70d4()) {
            func_020a6e18();
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020aa0bc::func_020aa0bc() {
    s32 a, b;
    BOOL r = FALSE;
    if (func_020a7014(&a, &b)) {
        s32 res = unk_04->func_020ab14c(a, b);
        if (res >= 0) {
            unk_00 = res;
            r = TRUE;
            s32 cur = unk_20->func_020aa520();
            if (cur >= 0 && cur == res) {
                func_0200402c(0x2a);
            } else {
                func_020a9f00();
            }
        }
    }
    return r;
}

BOOL Unk_020aa0bc::func_020a9f38() {
    BOOL result = FALSE;
    s32 cur = unk_20->func_020aa520();
    u16 pressed, held;
    if (unk_24 > 0) {
        unk_24--;
        if (unk_24 <= 0) {
            result = TRUE;
            func_020a6e24();
            goto end;
        }
    }
    pressed = data_021f47d8[1];
    if (pressed & 1) {
        if (cur >= 0 && cur == unk_00) {
            func_0200402c(0x2a);
        } else {
            func_020a9f00();
        }
        result = TRUE;
        func_020a6e24();
        goto end;
    }
    if (cur >= 0 && (pressed & 2)) {
        func_0200402c(0x2a);
        unk_00 = unk_20->func_020aa520();
        unk_24 = 1;
        func_020a6e30();
        goto end;
    }
    held = data_021f47d8[0];
    BOOL heldUp = (held & 0x40) != 0;
    BOOL heldDown = (held & 0x80) != 0;
    BOOL pressUp = (pressed & 0x40) != 0;
    BOOL pressDown = (pressed & 0x80) != 0;
    s32 last = unk_20->func_020aa52c() - 1;
    s32 old = unk_00;
    BOOL moved = FALSE;
    s32 state = unk_2c;
    if (state == 0 && (heldUp || heldDown) && (pressUp || pressDown)) {
        moved = TRUE;
        func_020a6e30();
        unk_28 = 9;
        unk_2c = heldUp ? -1 : 1;
    } else if ((state > 0 && heldDown) || (state < 0 && heldUp)) {
        if (unk_28 > 0) {
            unk_28--;
            if (unk_28 <= 0) {
                moved = TRUE;
                unk_28 = 3;
            }
        }
    } else {
        if (state != 0) {
            func_020a6e24();
        }
        unk_2c = 0;
        unk_28 = 0;
    }
    if (moved) {
        unk_00 += unk_2c;
    }
    if (unk_00 < 0) {
        unk_00 = last;
    } else if (unk_00 > last) {
        unk_00 = 0;
    }
    if (old != unk_00) {
        func_0200402c(11);
    }
end:
    return result;
}

void Unk_020aa0bc::func_020a9f00() {
    s32 t = unk_20->func_020aa560(unk_00)->func_020aa78c();
    s32 id = 0x29;
    if (t == 1) {
        id = 0x3a;
    } else if (t == 2) {
        id = 0x6a;
    } else if (t == 3) {
        id = 0x6c;
    }
    func_0200402c(id);
}

Unk_020a9854::Unk_020a9854(Unk_020e2cc8 *window) {
    u32 i;
    unk_00 = window;
    unk_04 = 0;
    unk_08 = 0x800;
    unk_0c = 0x800;
    unk_10 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_31 = 0;
    unk_34 = NULL;
    for (i = 0; i < 5; i++) {
        unk_14[i] = NULL;
    }
}

Unk_020a9854::~Unk_020a9854() {
    func_020a9c34();
}

void Unk_020a9854::func_020a9ea4(Unk_020aa3b8 *p) {
    p->func_020aa52c();
    unk_34 = p;
}

s32 Unk_020a9854::func_020a9ea0() {
    return unk_08;
}

u32 Unk_020a9854::func_020a9e9c() {
    return unk_28;
}

s32 Unk_020a9854::func_020a9e90() {
    return unk_34->func_020aa514();
}

void Unk_020a9854::func_020a9e58() {
    unk_34->func_020aa59c();
    func_020a9ca4();
    unk_04 = 0;
    unk_08 = 0x800;
    unk_0c = 0x800;
    func_020a99d8();
    func_020a9d20();
    unk_31 = 0;
}

void Unk_020a9854::func_020a9e50() {
    func_020a9c80();
}

void Unk_020a9854::func_020a9e48() {
    func_020a9c5c();
}

void Unk_020a9854::func_020a9e2c() {
    func_020a9c34();
    unk_34->func_020aa568();
    unk_28 = 0;
    unk_34 = NULL;
}

void Unk_020a9854::func_020a9db4() {
    if (!func_020a9bf8()) {
        static void (Unk_020a9854::*tbl[2])() = {
            &Unk_020a9854::func_020a98a0,
            &Unk_020a9854::func_020a9854,
        };
        func_020a9ad4();
        func_020a9b60();
        (this->*tbl[unk_2c])();
    }
}

BOOL Unk_020a9854::func_020a9da4() {
    if (unk_2c == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020a9854::func_020a9d94() {
    if (unk_2c == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020a9854::func_020a9d74() {
    if (func_020a9da4() && unk_30) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020a9854::func_020a9d54() {
    if (func_020a6df8() || unk_31) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020a9854::func_020a9d20() {
    u32 m = 0;
    u32 w;
    if (unk_14[4]) {
        w = unk_14[4]->func_02050bb4();
        if (w > m) {
            m = w;
        }
    }
    if (unk_14[0]) {
        w = unk_14[0]->func_02050bb4();
        if (w > m) {
            m = w;
        }
    }
    unk_28 = m;
}

void Unk_020a9854::func_020a9ca4() {
    u32 i;
    s32 zero = 0;
    for (i = 0; i < 5; i++) {
        Unk_020aa72c *a = unk_34->func_020aa560(i);
        s32 font = func_020ab31c(i, 5);
        Unk_020e2c80 *text = a->func_020aa7a0();
        Unk_02050288 *o = func_020a8054(font, 13, 2);
        if (o) {
            o->unk_2c = 1;
            o->unk_10 = (u32)text->vfunc_0c();
            o->unk_50 = 2;
            o->unk_39 = 14;
            o->unk_38 = i + 1;
            o->unk_58 = 2;
            o->func_02050c68(zero);
            o->unk_58 = 0;
            unk_14[i] = o;
        }
    }
}

void Unk_020a9854::func_020a9c80() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_14[i]) {
            unk_14[i]->func_02050c90();
        }
    }
}

void Unk_020a9854::func_020a9c5c() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_14[i]) {
            unk_14[i]->func_02050c68(0);
        }
    }
}

void Unk_020a9854::func_020a9c34() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_14[i]) {
            func_020a7fd8(unk_14[i]);
            unk_14[i] = NULL;
        }
    }
}

BOOL Unk_020a9854::func_020a9bf8() {
    BOOL r = FALSE;
    if (func_020a6df8()) {
        if (func_020a6fa4()) {
            func_020a6e0c();
            r = TRUE;
        }
    } else if (func_020a6dec()) {
        if (func_020a70d4()) {
            func_020a6e18();
            r = TRUE;
        }
    }
    return r;
}

void Unk_020a9854::func_020a9b60() {
    if (func_020a6df8()) {
        if (unk_2c == 0) {
            if (func_020a9a14()) {
                func_020a9898();
            }
        } else if (unk_2c == 1) {
            if (unk_30) {
                func_020a99d8();
            }
        }
    } else if (func_020a6dec()) {
        if (unk_2c == 0) {
            if (!unk_30) {
                BOOL a = func_020a6f04();
                BOOL b = func_020a6edc();
                if (a || b) {
                    if (a) {
                        func_0200402c(11);
                    }
                    func_020a9898();
                }
            }
        } else if (unk_2c == 1) {
            if (func_020a6f2c()) {
                func_0200402c(11);
                func_020a99d8();
            }
        }
    }
}

void Unk_020a9854::func_020a9ad4() {
    BOOL r;
    if (unk_30) {
        r = FALSE;
        if (func_020a6df8()) {
            if (func_020a9a50()) {
                r = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_020a9a38()) {
                r = TRUE;
            }
        }
        if (r) {
            unk_30 = 0;
            func_020a6e24();
        }
    } else {
        r = FALSE;
        if (func_020a6df8()) {
            if (func_020a9a8c()) {
                r = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_020a9a6c()) {
                r = TRUE;
            }
        }
        if (r) {
            unk_30 = 1;
            func_020a6e30();
        }
    }
}

BOOL Unk_020a9854::func_020a9a8c() {
    BOOL r = FALSE;
    s32 a = unk_00->func_020aad48();
    s32 b = unk_00->func_020aad30();
    s32 x, y;
    if (func_020a706c(a - 5, a + 21, b, b + 16)) {
        func_020a7014(&x, &y);
        unk_10 = y - b;
        r = TRUE;
    }
    return r;
}

BOOL Unk_020a9854::func_020a9a6c() {
    if (unk_2c == 0 && func_020a6f7c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020a9854::func_020a9a50() {
    if (func_020a6fd0(0, 0)) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_020a9854::func_020a9a38() {
    if (func_020a6eb4()) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_020a9854::func_020a9a14() {
    BOOL r = FALSE;
    if (func_020a706c(184, 256, 160, 176)) {
        r = TRUE;
    }
    return r;
}

BOOL Unk_020a9854::func_020a99e0() {
    BOOL r = FALSE;
    if (unk_2c == 1) {
        if (func_020a6edc()) {
            r = TRUE;
            unk_31 = TRUE;
        } else if (func_020a6f7c()) {
            r = TRUE;
        }
    }
    return r;
}

void Unk_020a9854::func_020a99d8() {
    unk_2c = 0;
}

void Unk_020a9854::func_020a98a0() {
    s32 x, y, v, hi, lo;
    if (unk_30) {
        if (unk_00->func_020aad9c()) {
            if (func_020a6df8()) {
                if (func_020a6fd0(&x, &y)) {
                    lo = unk_00->func_020aad00();
                    hi = unk_00->func_020aad18();
                    v = y - unk_10;
                    if (v < hi) {
                        v = hi;
                    } else if (v > lo) {
                        v = lo;
                    }
                    unk_08 = _s32_div_f((v - lo) << 12, hi - lo);
                }
                unk_04 = 0;
            } else if (func_020a6dec()) {
                BOOL up = func_020a6e64();
                BOOL down = func_020a6e3c();
                if (!up && !down) {
                    unk_04 = 40;
                } else {
                    unk_04 += 81;
                    s32 sp = unk_04;
                    if (sp < 0) {
                        sp = 0;
                    } else if (sp > 409) {
                        sp = 409;
                    }
                    unk_04 = sp;
                }
                if (up) {
                    unk_08 += unk_04;
                }
                if (down) {
                    unk_08 -= unk_04;
                }
                s32 pos = unk_08;
                if (pos < 0) {
                    pos = 0;
                } else if (pos > 0x1000) {
                    pos = 0x1000;
                }
                unk_08 = pos;
            }
        }
    }
    s32 d = unk_08 - unk_0c;
    if (d < 0) {
        d = -d;
    }
    if (d >= 81) {
        BOOL inc = unk_08 > unk_0c;
        s32 hi = inc ? unk_08 : unk_0c;
        s32 lo = inc ? unk_0c : unk_08;
        BOOL found = FALSE;
        s32 i;
        for (i = 0; i < 10; i++) {
            s32 v = i * 409;
            if (v >= lo && v < hi) {
                found = TRUE;
                break;
            }
        }
        if (hi == 0x1000) {
            found = TRUE;
        }
        if (found) {
            func_0200402c(25);
        }
    }
    unk_0c = unk_08;
}

void Unk_020a9854::func_020a9898() {
    unk_2c = 1;
}

void Unk_020a9854::func_020a9854() {
    if (unk_34) {
        if (unk_34->func_020aa514() < 0) {
            if ((func_020a6df8() && func_020a9a14()) || (func_020a6dec() && func_020a99e0())) {
                unk_34->func_020aa3b8(unk_08);
            }
        }
    }
}

Unk_020e2d70::Unk_020e2d70() {
    unk_04 = 0;
}

Unk_020e2d70::~Unk_020e2d70() {}

void Unk_020e2d70::func_020a980c() {
    unk_04 = 1;
}

void Unk_020e2d50::func_020a9800(Unk_020aa3b8 *p) {
    unk_84.func_020aa364(p);
}

Unk_020e2d50::Unk_020e2d50() : unk_08(0), unk_84(&unk_0c) {
    unk_b4 = 0;
    unk_b8 = 0;
    unk_bc = 0;
    unk_c0 = 0;
}

Unk_020e2d50::~Unk_020e2d50() {}

void Unk_020e2d50::vfunc_08() {
    static void (Unk_020e2d50::*tbl[4])() = {
        &Unk_020e2d50::func_020a9678,
        &Unk_020e2d50::func_020a950c,
        &Unk_020e2d50::func_020a9438,
        &Unk_020e2d50::func_020a9378,
    };
    (this->*tbl[unk_08])();
    unk_0c.vfunc_08();
}

void Unk_020e2d50::vfunc_0c() {
    unk_0c.vfunc_0c();
    unk_0c.func_020ab3fc();
}

BOOL Unk_020e2d50::vfunc_10() {
    if (unk_08 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e2d50::vfunc_14() {
    return unk_c0;
}

void Unk_020e2d50::func_020a9690() {
    unk_08 = 0;
}

void Unk_020e2d50::func_020a9678() {
    if (unk_04) {
        unk_04 = 0;
        func_020a95e8();
    }
}

void Unk_020e2d50::func_020a95e8() {
    unk_08 = 1;
    unk_0c.func_020ab8cc();
    unk_84.func_020aa31c();
    func_020a930c();
    unk_0c.func_020ab448();
    unk_0c.func_020ab428();
    unk_0c.func_020ab3f0();
    unk_0c.func_020ab8ac();
    unk_bc = func_0209c38c(100, 2) + 3;
    unk_b4 = func_0209c38c(100, 4) + 5;
    unk_b8 = func_0209c38c(100, 5) - 5;
    unk_0c.func_020ab3a0(unk_b4, unk_b8);
    unk_0c.func_020ab388();
}

void Unk_020e2d50::func_020a950c() {
    BOOL done;
    if (unk_bc > func_0209c38c(0x64, 3) + 2) {
        unk_b4 += func_0209c38c(0x64, 6) - 6;
        unk_b8 += func_0209c38c(0x64, 7) + 6;
    } else {
        unk_b4 += func_0209c38c(0x64, 8) + 1;
        unk_b8 += func_0209c38c(0x64, 9) - 1;
    }
    done = --unk_bc <= 0;
    if (done) {
        unk_b4 = 0;
        unk_b8 = 0;
    }
    unk_0c.func_020ab3a0(unk_b4, unk_b8);
    if (done) {
        unk_84.func_020aa314();
        func_020a94d8();
    }
}

void Unk_020e2d50::func_020a94d8() {
    unk_08 = 2;
    unk_0c.func_020ab1ec();
    unk_0c.func_020ab120(!unk_84.func_020aa280(), FALSE);
}

void Unk_020e2d50::func_020a9438() {
    s32 v;
    unk_84.func_020aa288();
    unk_0c.func_020ab120(!unk_84.func_020aa280(), TRUE);
    unk_0c.func_020ab1d0(unk_84.func_020aa354());
    v = unk_84.func_020aa348();
    if (v >= 0) {
        if (unk_0c.func_020ab244()) {
            unk_0c.func_020ab1d4();
            unk_0c.func_020ab1c8();
        } else if (unk_0c.func_020ab21c()) {
            if (unk_0c.func_020ab19c(v)) {
                unk_0c.func_020ab1e0();
                unk_84.func_020aa30c();
                func_020a940c();
            }
        }
    }
}

void Unk_020e2d50::func_020a940c() {
    unk_08 = 3;
    unk_c0 = 1;
    unk_bc = func_0209c38c(0x65, 2) + 2;
    func_0200402c(0x14);
}

void Unk_020e2d50::func_020a9378() {
    BOOL done;
    unk_b4 += func_0209c38c(0x65, 3) + 0x11;
    unk_b8 += func_0209c38c(0x65, 4) - 0x11;
    done = --unk_bc <= 0;
    unk_0c.func_020ab3a0(unk_b4, unk_b8);
    unk_c0 = 0;
    if (done) {
        unk_84.func_020aa2f0();
        unk_0c.func_020ab3e4();
        func_020a9690();
    }
}

void Unk_020e2d50::func_020a930c() {
    s32 t = unk_84.func_020aa358();
    unk_0c.func_020ab470(unk_84.func_020aa344());
    if (t == 1) {
        unk_0c.func_020ab720();
    } else if (t == 2) {
        unk_0c.func_020ab628();
    } else if (t == 3) {
        unk_0c.func_020ab58c();
    } else if (t == 4) {
        unk_0c.func_020ab510();
    } else if (t == 5) {
        unk_0c.func_020ab4f0();
    }
}

void Unk_020e2d30::func_020a92fc(Unk_020aa3b8 *p) {
    unk_14c.func_020a9ea4(p);
}

Unk_020e2d30::Unk_020e2d30() : unk_08(0), unk_14c(&unk_0c) {
    unk_184 = 0;
    unk_188 = 0;
    unk_18c = 0;
    unk_190 = 0;
}

Unk_020e2d30::~Unk_020e2d30() {}

void Unk_020e2d30::vfunc_08() {
    static void (Unk_020e2d30::*const table[4])() = {
        &Unk_020e2d30::func_020a9154,
        &Unk_020e2d30::func_020a8fc4,
        &Unk_020e2d30::func_020a8ed4,
        &Unk_020e2d30::func_020a8e1c,
    };
    (this->*table[unk_08])();
    unk_0c.vfunc_08();
}

void Unk_020e2d30::vfunc_0c() {
    unk_0c.vfunc_0c();
    unk_0c.func_020ab3fc();
}

BOOL Unk_020e2d30::vfunc_10() {
    return unk_08 == 0;
}

BOOL Unk_020e2d30::vfunc_14() {
    return unk_190;
}

void Unk_020e2d30::func_020a916c() {
    unk_08 = 0;
    unk_0c.func_020ab3e4();
}

void Unk_020e2d30::func_020a9154() {
    if (unk_04) {
        unk_04 = 0;
        func_020a90b4();
    }
}

void Unk_020e2d30::func_020a90b4() {
    unk_08 = 1;
    unk_0c.func_020ab8cc();
    unk_14c.func_020a9e58();
    func_020a8df4();
    unk_0c.func_020ab448();
    unk_0c.func_020ab428();
    unk_0c.func_020ab3f0();
    unk_0c.func_020ab8ac();
    unk_18c = func_0209c38c(0x64, 2) + 3;
    unk_184 = func_0209c38c(0x64, 4) + 5;
    unk_188 = func_0209c38c(0x64, 5) - 5;
    unk_0c.func_020ab3a0(unk_184, unk_188 + 4);
    unk_0c.func_020ab388();
    func_0200402c(0x13);
}

void Unk_020e2d30::func_020a8fc4() {
    BOOL done;
    if (unk_18c > func_0209c38c(0x64, 3) + 2) {
        unk_184 += func_0209c38c(0x64, 6) - 6;
        unk_188 += func_0209c38c(0x64, 7) + 6;
    } else {
        unk_184 += func_0209c38c(0x64, 8) + 2;
        unk_188 += func_0209c38c(0x64, 9) - 2;
    }
    done = --unk_18c <= 0;
    if (done) {
        unk_184 = 0;
        unk_188 = 0;
    }
    unk_0c.func_020ab3a0(unk_184, unk_188 + 4);
    if (done) {
        unk_0c.func_020aadcc();
        unk_0c.func_020aad6c(!unk_14c.func_020a9d54(), FALSE);
        unk_14c.func_020a9e50();
        func_020a8fbc();
    }
}

void Unk_020e2d30::func_020a8fbc() {
    unk_08 = 2;
}

void Unk_020e2d30::func_020a8ed4() {
    s32 v;
    s32 w;
    unk_14c.func_020a9db4();
    unk_0c.func_020aad6c(!unk_14c.func_020a9d54(), TRUE);
    unk_0c.func_020aad60(unk_14c.func_020a9ea0());
    v = unk_14c.func_020a9e90();
    w = unk_0c.func_020aacc4();
    if (v >= 0) {
        if (w == 0xb) {
            unk_0c.func_020aadc4();
            unk_14c.func_020a9e48();
            func_020a8ea4();
        } else {
            unk_0c.func_020aac88();
        }
    } else if (unk_14c.func_020a9da4()) {
        if (unk_0c.func_020aacd0()) {
            unk_0c.func_020aacb8();
        } else if (unk_14c.func_020a9d74()) {
            unk_0c.func_020aacac();
        } else {
            unk_0c.func_020aaca0();
        }
    } else if (unk_14c.func_020a9d94()) {
        if (unk_0c.func_020aace8()) {
            unk_0c.func_020aac94();
        }
    }
}

void Unk_020e2d30::func_020a8ea4() {
    unk_08 = 3;
    unk_190 = 1;
    unk_18c = func_0209c38c(0x65, 2) + 2;
    func_0200402c(0x14);
}

void Unk_020e2d30::func_020a8e1c() {
    BOOL done;
    unk_190 = 0;
    unk_184 += func_0209c38c(0x65, 3) + 0xb;
    unk_188 += func_0209c38c(0x65, 4) - 0xb;
    done = --unk_18c <= 0;
    unk_0c.func_020ab3a0(unk_184, unk_188);
    if (done) {
        unk_14c.func_020a9e2c();
        func_020a916c();
    }
}

void Unk_020e2d30::func_020a8df4() {
    unk_0c.func_020ab470(unk_14c.func_020a9e9c());
    unk_0c.func_020ab4f0();
}

void Unk_020a8cf8::func_020a8de0(Unk_020aa3b8 *p) {
    unk_04.func_020a9800(p);
    unk_00 = &unk_04;
}

void Unk_020a8cf8::func_020a8dc8(Unk_020aa3b8 *p) {
    unk_c8.func_020a92fc(p);
    unk_00 = &unk_c8;
}

Unk_020a8cf8::Unk_020a8cf8() : unk_00(0) {
    unk_25c = 0;
}

Unk_020a8cf8::~Unk_020a8cf8() {}

void Unk_020a8cf8::func_020a8d50() {
    if (unk_00 != 0) {
        unk_00->vfunc_08();
        if (unk_00->vfunc_10()) {
            unk_00 = 0;
            unk_25c = 1;
        }
    } else {
        unk_25c = 0;
    }
}

void Unk_020a8cf8::func_020a8d3c() {
    if (unk_00 != 0) {
        unk_00->func_020a980c();
    }
}

BOOL Unk_020a8cf8::func_020a8d2c() {
    return unk_00 == 0;
}

BOOL Unk_020a8cf8::func_020a8d10() {
    BOOL r = FALSE;
    if (unk_00 != 0) {
        r = unk_00->vfunc_14();
    }
    return r;
}

void Unk_020a8cf8::func_020a8cf8() {
    if (unk_00 != 0) {
        unk_00->vfunc_0c();
    }
}

void Unk_020a8c9c::func_020a8ce4() {
    if (unk_18 != 0) {
        unk_18--;
        unk_00[unk_18] = 0;
    }
}

u32 *Unk_020a8c9c::func_020a8cd8() {
    return &unk_00[unk_18 - 1];
}

void Unk_020a8c9c::func_020a8cc4(const u32 &value) {
    if (unk_18 < 6) {
        u32 i = unk_18++;
        unk_00[i] = value;
    }
}

BOOL Unk_020a8c9c::func_020a8cb4() {
    return unk_18 == 0;
}

Unk_020a8c9c::~Unk_020a8c9c() {}

Unk_020a8c9c::Unk_020a8c9c() {
    unk_18 = 0;
    for (u32 i = 0; i < 6; i++) {
        unk_00[i] = 0;
    }
}

