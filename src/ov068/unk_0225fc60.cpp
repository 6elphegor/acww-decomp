#include "types.h"

// Owner object (actor-like, vtable slots up to 0x64).
class Unk_ov068_Owner {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual BOOL vfunc_48(s32 a);
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual BOOL vfunc_64();
};

extern "C" {
extern s16 data_ov068_02270c20;
extern s16 data_020c6cc0;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];

s32 func_ov068_0226594c(void *);
s32 func_ov068_022655a4(void *, s32);
s32 func_ov068_02264a64(void *);
s32 func_ov068_022656a8(void *, void *, s32);
s32 func_ov068_022656a4(void *, s32);
s32 func_ov068_02263738(void *, void *, s32, s32, s32);
void func_ov068_02265994(void *);
void func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);

s32 func_0202d8c0(void *);
void func_0202d8d4(void *);
s32 func_0201bcf8(void *, s32, s32);
s32 func_0203e574(void *, s32, s32, s32);
s32 func_02014220(void *);
void *func_020951ec(s32);
s32 func_0201bc58(void *, void *);
s32 func_020197a8(void *);
s32 func_020197a0(void *);
s32 func_02019790(void *);
void func_02019614(void *, s32, u32);
void func_02019638(void *, s32, s32, u32);
void func_02015ec4(void *, s32);
s32 func_02015e48(void *, s32);
void *func_02015aac(void *);
void func_020135c4(void *);
s32 func_02013464(void *);
s32 func_0201bc70(void *, s32);
s32 func_0201bcbc(void *, void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201c564(void *);
void func_0201c804(void *, s32);
void func_0201c7ec(void *, s32);
void func_0203e450(void *);
void func_0203d67c(void *);
void func_0203d704(void *, s32);
void func_0203e42c(void *);
void func_0207c1e8(s32);
void func_020141b4(void *, s32, s32, s32);
}

class Unk_ov068_0225fd54 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0x14];
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;
    /* 0x3c */ u8 pad_3c[0xe0 - 0x3c];
    /* 0xe0 */ u8 unk_e0;
    /* 0xe1 */ u8 pad_e1[0xf4 - 0xe1];
    /* 0xf4 */ u32 unk_f4;

    s32 func_ov068_0225fd54(Unk_ov068_Owner *o);
    void func_ov068_0225fdc0(Unk_ov068_Owner *o);
    void func_ov068_0225fe28(Unk_ov068_Owner *o);
    BOOL func_ov068_0225fe70(Unk_ov068_Owner *o);
    s32 func_ov068_0225ff18(Unk_ov068_Owner *o);
    void func_ov068_0225ff84(Unk_ov068_Owner *o);
    void func_ov068_0225ff88(Unk_ov068_Owner *o);
    BOOL func_ov068_0225fff4(Unk_ov068_Owner *o);
    s32 func_ov068_02260068(Unk_ov068_Owner *o);
    void func_ov068_022600e4(Unk_ov068_Owner *o);
    void func_ov068_022600e8(Unk_ov068_Owner *o);
    void func_ov068_02260160(Unk_ov068_Owner *o);
    BOOL func_ov068_022601f0(Unk_ov068_Owner *o);
    s32 func_ov068_02260290(Unk_ov068_Owner *o);
    void func_ov068_022602fc(Unk_ov068_Owner *o);
    void func_ov068_02260324(Unk_ov068_Owner *o);
    BOOL func_ov068_02260374(Unk_ov068_Owner *o);
    s32 func_ov068_02260450(Unk_ov068_Owner *o);
    void func_ov068_022604cc(Unk_ov068_Owner *o);
    void func_ov068_022604fc(Unk_ov068_Owner *o);
    void func_ov068_0226054c(Unk_ov068_Owner *o);
};

extern "C" {

BOOL func_ov068_0225fc60(Unk_ov068_Owner *o, s32 x) {
    s16 k = data_ov068_02270c20;
    u32 v = func_ov068_0226594c(o);
    BOOL r = FALSE;
    if (o->vfunc_48(x) != 0 && func_0202d8c0(o) == 0 && func_ov068_022655a4((u8 *)o + 0x8b4, r) != 0 && v <= 1 &&
        func_0201bcf8(o, x, 0x5000) == 0 && func_0201bcf8(o, x, 0xe000) != 0 && func_0203e574(o, x, (s16)-k, k) != 0) {
        r = TRUE;
    }
    return r;
}

BOOL func_ov068_0225fcf0(u8 *o) {
    if (func_02014220(o + 0x618) != 0 || func_0202d8c0(o) != 0) {
        return FALSE;
    }
    if (o[0xa00] != 0) {
        void *p = func_020951ec(4);
        if (p != 0) {
            s32 v = func_0201bc58(o, p);
            if (v < 0) {
                v = (s16)-v;
            }
            if (v > data_020c6cc0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

}

s32 Unk_ov068_0225fd54::func_ov068_0225fd54(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_0225fe28,
                                                                     &Unk_ov068_0225fd54::func_ov068_0225fdc0};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_0225fdc0(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 8 && func_020197a0((u8 *)o + 0x564) == 0x1a && unk_20 == 0 &&
        func_ov068_02264a64(this) == 0 && ((*(u32 *)((u8 *)o + 0x190) << 4) >> 16) == 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        func_ov068_022656a8(this, o, 0);
    }
}

void Unk_ov068_0225fd54::func_ov068_0225fe28(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019638((u8 *)o + 0x564, 1, 0x1a, data_020c6cc8);
        unk_20 = 0x14;
        unk_1c = 1;
    }
}

BOOL Unk_ov068_0225fd54::func_ov068_0225fe70(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_0202d8d4(o);
    func_020135c4((u8 *)o + 0x558);
    s32 t = func_0201bc70(o, 4);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    func_0201c564((u8 *)o + 0x838);
    unk_1c = 0;
    unk_e0 = 1;
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_0225ff18(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_0225ff88,
                                                                     &Unk_ov068_0225fd54::func_ov068_0225ff84};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_0225ff84(Unk_ov068_Owner *o) {}

void Unk_ov068_0225fd54::func_ov068_0225ff88(Unk_ov068_Owner *o) {
    if (func_02014220((u8 *)o + 0x618) == 0) {
        func_ov068_02263738(this, o, 4, 1, 1);
        func_0203e450(o);
        func_0203d67c(o);
        func_0201c804(o, 0);
        func_ov068_022656a4(this, 0);
        func_0201c7ec(o, 0);
        *(s32 *)((u8 *)o + 0xa08) = 3;
        unk_f4 = 0x4b0;
        unk_1c = 1;
    }
}

BOOL Unk_ov068_0225fd54::func_ov068_0225fff4(Unk_ov068_Owner *o) {
    void *p = func_02015aac((u8 *)o + 0x680);
    s32 v = 0;
    func_02013464(o);
    if (p != 0) {
        v = func_0201bcbc(o, p);
    }
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_020141b4((u8 *)o + 0x618, 0, v, 0);
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_02260068(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[3])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_02260160,
                                                                     &Unk_ov068_0225fd54::func_ov068_022600e8,
                                                                     &Unk_ov068_0225fd54::func_ov068_022600e4};
    if (unk_1c < 3) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_022600e4(Unk_ov068_Owner *o) {}

void Unk_ov068_0225fd54::func_ov068_022600e8(Unk_ov068_Owner *o) {
    if (func_02014220((u8 *)o + 0x618) == 0) {
        func_ov068_02263738(this, o, 4, 1, 1);
        func_0203e450(o);
        func_0203d67c(o);
        func_0201c804(o, 0);
        func_0201c7ec(o, 0);
        func_ov068_022656a4(this, 0);
        unk_38 = 0;
        unk_3a = 0;
        *(s32 *)((u8 *)o + 0xa08) = 3;
        unk_f4 = 0x4b0;
        unk_1c = 2;
    }
}

void Unk_ov068_0225fd54::func_ov068_02260160(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) != 0xec || func_02019790((u8 *)o + 0x564) != 0) {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = func_0201bcbc(o, p);
        }
        func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        func_020141b4((u8 *)o + 0x618, 0, v, 0);
        unk_1c = 1;
    }
}

BOOL Unk_ov068_0225fd54::func_ov068_022601f0(Unk_ov068_Owner *o) {
    func_02013464(o);
    if (func_02015e48((u8 *)o + 0x334, 0) != 0xec || func_02019790((u8 *)o + 0x564) != 0) {
        void *p = func_02015aac((u8 *)o + 0x680);
        s32 v = 0;
        if (p != 0) {
            v = func_0201bcbc(o, p);
        }
        func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        func_020141b4((u8 *)o + 0x618, 0, v, 0);
        unk_1c = 1;
    } else {
        unk_1c = 0;
    }
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_02260290(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[2])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_02260324,
                                                                     &Unk_ov068_0225fd54::func_ov068_022602fc};
    if (unk_1c < 2) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_022602fc(Unk_ov068_Owner *o) {
    if (unk_20 == 0) {
        func_ov068_022656a8(this, o, 0);
        func_0203e450(o);
    } else {
        func_0203d704(o, 0);
    }
}

void Unk_ov068_0225fd54::func_ov068_02260324(Unk_ov068_Owner *o) {
    func_0203d704(o, 0);
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_20 = 0x28;
        unk_1c = 1;
    }
}

BOOL Unk_ov068_0225fd54::func_ov068_02260374(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_0202d8d4(o);
    func_020135c4((u8 *)o + 0x558);
    s32 t = func_0201bc70(o, 4);
    func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    *(u16 *)((u8 *)o + 0xa02) = 0;
    func_0203d704(o, 0);
    *(s32 *)((u8 *)o + 0xa08) = 2;
    func_0203e42c(o);
    unk_1c = 0;
    func_0201c564((u8 *)o + 0x838);
    if (o->vfunc_64() != 0) {
        func_0207c1e8(o->vfunc_64());
    }
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_02260450(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[3])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_0226054c,
                                                                     &Unk_ov068_0225fd54::func_ov068_022604fc,
                                                                     &Unk_ov068_0225fd54::func_ov068_022604cc};
    if (unk_1c < 3) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_022604cc(Unk_ov068_Owner *o) {
    if (unk_20 == 0) {
        unk_3a = 0x4b0;
        func_ov068_022656a8(this, o, 0);
        func_0203e450(o);
    } else {
        func_0203d704(o, 0);
    }
}

void Unk_ov068_0225fd54::func_ov068_022604fc(Unk_ov068_Owner *o) {
    func_0203d704(o, 0);
    if (func_020197a8((u8 *)o + 0x564) == 3 && func_02019790((u8 *)o + 0x564) != 0) {
        func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
        unk_20 = 0x28;
        unk_1c = 2;
    }
}

void Unk_ov068_0225fd54::func_ov068_0226054c(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0xeb || func_02015e48((u8 *)o + 0x334, 0) == 0xec) {
        if (unk_38 >= 3) {
            func_0203d704(o, 0);
        }
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (unk_38 >= 3) {
                s32 t = func_0201bc70(o, 4);
                func_020196b4((u8 *)o + 0x564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
                unk_1c = 1;
            } else {
                func_0203e450(o);
                func_ov068_022656a8(this, o, 0);
                unk_3a = 0x4b0;
            }
        }
    }
}
