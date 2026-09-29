#include "types.h"

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020660f8 {
public:
    void func_020674b8();

    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    u8 pad_08[0x16dc - 0x8];
    /* 0x16dc */ u8 unk_16dc[0x19f7 - 0x16dc];
};

class Unk_020ddc24 {
public:
    void func_02068244();
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();

    void func_02065f70(Unk_020e2a78 *p, u32 v);
    void func_02065f14(Unk_020e2a78 *p, u32 v);

    u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

void Unk_020ddcf0::func_02065f14(Unk_020e2a78 *p, u32 v) {
    Unk_020660f8 *o = (Unk_020660f8 *)unk_3c;
    s32 t = o->unk_04;
    BOOL five = (t == 5);
    func_02065f70(p, v);
    if (t != 0 && !five) {
        ((Unk_020660f8 *)unk_3c)->func_020674b8();
        ((Unk_020ddc24 *)(((Unk_020660f8 *)unk_3c)->unk_16dc))->func_02068244();
    }
}
