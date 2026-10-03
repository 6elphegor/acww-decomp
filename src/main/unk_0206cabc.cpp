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
BOOL func_020027b4(u32 x);
}

extern "C" {
s32 func_02002778(u32 n);
}

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

class Unk_020dded4 : public MsgString {
public:
    Unk_020dded4();
    virtual ~Unk_020dded4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[513];
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

Unk_020ddefc::Unk_020ddefc() { clear(); }

Unk_020ddefc::~Unk_020ddefc() {}

u32 Unk_020ddefc::vfunc_08() { return 0x81; }

u8 *Unk_020ddefc::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020ddf14::Unk_020ddf14() { clear(); }

Unk_020ddf14::~Unk_020ddf14() {}

u32 Unk_020ddf14::vfunc_08() { return 0x21; }

u8 *Unk_020ddf14::vfunc_0c() { return (u8 *)this + 0x12; }

