#include "types.h"

struct Unk_ov048_0225a370_Owner {
    u8 pad_00[0x14];
    s32 unk_14;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u32 data_ov048_0225c6e0[];
extern u8 data_ov048_0225c324[];
extern u8 data_ov048_0225cd0c[];

BOOL func_0209eedc();
s32 func_020720f8();
s32 func_020eb650(s32 a);
s32 func_020721b4();
s32 func_020ea574(s32 a);
BOOL func_020a032c();
s32 func_020aa514(void *p);
void *func_020679b4(void *p);
void func_02067a84(void *o, void *buf, u32 id);
s32 func_ov004_02225ebc();
s32 func_02073340();
s32 func_020eaf18();
void *func_0209750c();
s32 func_02098044(void *h, s32 v);
s32 func_02072e44(void *g);
s32 func_020729cc(void *g, s32 v);
s32 func_02072e88(void *g, s32 v);
s32 func_0209f1e4();
s32 func_0209f1c4();
void *func_02098680(void *h);
void *func_02076c80(void *p);
void func_02076c9c(void *p);
s32 func_020e9d94(void *p);
s32 func_020ea3dc(void *p);
s64 func_020ea3c4(void *p);

s32 func_ov048_02259868(void *self);
u32 func_ov048_022593bc(void *self);
u32 func_ov048_022593e4(void *self);
s32 func_ov048_0225b018(void *self);
s32 func_ov048_0225af0c(void *self);
s32 func_ov048_0225af48(void *self, s32 a, s32 b);
void func_ov048_0225bfb4(void *actor, s32 v);
}

class Unk_ov048_0225cbc8;
typedef void (Unk_ov048_0225cbc8::*Unk_ov048_0225cbc8_Fn)();
typedef void (Unk_ov048_0225cbc8::*Unk_ov048_0225cbc8_ArgFn)(s32);

// Dialog-state base (ctor func_0202e2bc), size 0xac.
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
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
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();

    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_ov048_0225a370_Owner *unk_3c;
    u8 pad_40[0x6a];
    u8 unk_aa;
    u8 pad_ab;
};

struct Unk_ov048_0225cd04_Ent {
    Unk_ov048_0225cbc8_Fn f;
    u8 flag;
};

struct Unk_ov048_0225a108_Row {
    u32 id;
    Unk_ov048_0225cbc8_ArgFn f;
};

struct Unk_ov048_0225a8d4_Row {
    u32 id;
    Unk_ov048_0225cbc8_Fn f;
};

extern "C" Unk_ov048_0225cd04_Ent data_ov048_0225cd04[];

class Unk_ov048_0225cbc8 : public Unk_0202e2bc {
public:
    Unk_ov048_0225cbc8();
    virtual ~Unk_ov048_0225cbc8();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov048_0225a000();
    void func_ov048_0225a02c();
    void func_ov048_0225a078(s32 s);
    void func_ov048_0225a32c(s32 p);
    void func_ov048_0225a36c(s32 p);
    void func_ov048_0225a370(s32 p);
    void func_ov048_0225a3b0(s32 p);
    void func_ov048_0225a3d4(s32 p);
    void func_ov048_0225a3f8(s32 p);
    void func_ov048_0225a448(s32 p, s32 id);
    void func_ov048_0225a4b8(s32 p);
    void func_ov048_0225a4c4(s32 p);
    void func_ov048_0225a4d0(s32 p);
    void func_ov048_0225a4dc(s32 p);
    void func_ov048_0225a4e8(s32 p);
    void func_ov048_0225a514(s32 p);
    void func_ov048_0225a5a8(s32 p);
    void func_ov048_0225a6a4(s32 p);
    void func_ov048_0225a6c8();
    void func_ov048_0225a79c(s32 p);
    void func_ov048_0225a7dc(s32 p);
    void func_ov048_0225a81c(s32 p);
    void func_ov048_0225a838(s32 p);
    void func_ov048_0225a890(s32 p);
    void func_ov048_0225a8a4(s32 p);

    // out of range
    void func_ov048_0225aad4();
    void func_ov048_0225aafc();
    void func_ov048_0225ab60();
    void func_ov048_0225ab88();
    void func_ov048_0225ab98();
    void func_ov048_0225aba8();
    void func_ov048_0225ac0c();
    void func_ov048_0225ac58();
    void func_ov048_0225ac7c();
    void func_ov048_0225acac();
    void func_ov048_0225ace0();
    void func_ov048_0225ad18();
    void func_ov048_0225ad28();
    void func_ov048_0225ad78();
    void func_ov048_0225adb0();
    void func_ov048_0225adec();

    u8 pad_ac[4];
    s32 unk_b0;
    void *unk_b4;
    u8 pad_b8[0x7e0 - 0xb8];
    u8 unk_7e0;
    u8 unk_7e1;
    u8 unk_7e2;
    u8 unk_7e3;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov048_0225cbc8::func_ov048_0225a000() {
    if (func_0209eedc()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a02c() {
    func_020eb650(func_020720f8());
    if (func_ov048_02259868(this) == 0) {
        if (func_020ea574(func_020721b4()) != 0) {
            if (unk_7e3 == 0) {
                func_ov048_0225a078(0x13);
            } else {
                func_ov048_0225a078(unk_b0 + 1);
            }
        }
    }
}

void Unk_ov048_0225cbc8::vfunc_84() {
    if (((u8 *)data_ov048_0225cd0c)[unk_b0 * 12] == 0) {
        if (data_ov048_0225cd04[unk_b0].f) {
            (this->*data_ov048_0225cd04[unk_b0].f)();
        }
    }
}

void Unk_ov048_0225cbc8::vfunc_80() {
    if (((u8 *)data_ov048_0225cd0c)[unk_b0 * 12] != 0) {
        if (data_ov048_0225cd04[unk_b0].f) {
            (this->*data_ov048_0225cd04[unk_b0].f)();
        }
    }
}

void Unk_ov048_0225cbc8::vfunc_18() {
    if (func_020a032c() == 0) {
        static Unk_ov048_0225a108_Row tbl[29] = {
            {0x15, &Unk_ov048_0225cbc8::func_ov048_0225a4dc},
            {0x41, &Unk_ov048_0225cbc8::func_ov048_0225a4d0},
            {0x14, &Unk_ov048_0225cbc8::func_ov048_0225a4c4},
            {0x7f, &Unk_ov048_0225cbc8::func_ov048_0225a4b8},
            {0x24, &Unk_ov048_0225cbc8::func_ov048_0225a4e8},
            {0x56, &Unk_ov048_0225cbc8::func_ov048_0225a4e8},
            {0x0a, &Unk_ov048_0225cbc8::func_ov048_0225a6a4},
            {0x10, &Unk_ov048_0225cbc8::func_ov048_0225a514},
            {0x21, &Unk_ov048_0225cbc8::func_ov048_0225a514},
            {0x0f, &Unk_ov048_0225cbc8::func_ov048_0225a5a8},
            {0x22, &Unk_ov048_0225cbc8::func_ov048_0225a5a8},
            {0x51, &Unk_ov048_0225cbc8::func_ov048_0225a3f8},
            {0x63, &Unk_ov048_0225cbc8::func_ov048_0225a3d4},
            {0x65, &Unk_ov048_0225cbc8::func_ov048_0225a3d4},
            {0x7d, &Unk_ov048_0225cbc8::func_ov048_0225a3b0},
            {0x7e, &Unk_ov048_0225cbc8::func_ov048_0225a3b0},
            {0x80, &Unk_ov048_0225cbc8::func_ov048_0225a3b0},
            {0x82, &Unk_ov048_0225cbc8::func_ov048_0225a3b0},
            {0x2c, &Unk_ov048_0225cbc8::func_ov048_0225a370},
            {0x6b, &Unk_ov048_0225cbc8::func_ov048_0225a36c},
            {0x5f, &Unk_ov048_0225cbc8::func_ov048_0225a32c},
            {0x23, &Unk_ov048_0225cbc8::func_ov048_0225a81c},
            {0x28, &Unk_ov048_0225cbc8::func_ov048_0225a81c},
            {0x2f, &Unk_ov048_0225cbc8::func_ov048_0225a81c},
            {0x52, &Unk_ov048_0225cbc8::func_ov048_0225a7dc},
            {0x3d, &Unk_ov048_0225cbc8::func_ov048_0225a79c},
            {0x71, &Unk_ov048_0225cbc8::func_ov048_0225a838},
            {0x74, &Unk_ov048_0225cbc8::func_ov048_0225a8a4},
            {0x57, &Unk_ov048_0225cbc8::func_ov048_0225a890},
        };
        s32 i = 0;
        u8 *p = &unk_1e;
        for (; (u32)i < 0x1d; i++) {
            u32 off = i * 12;
            u32 a = *(u32 *)((u8 *)tbl + off);
            u32 b = *p;
            if (a == b) {
                s32 arg = func_020aa514(func_020679b4(unk_3c));
                Unk_ov048_0225a108_Row *r = (Unk_ov048_0225a108_Row *)((u32)tbl + off);
                (this->*r->f)(arg);
            }
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a32c(s32 p) {
    switch (p) {
    case 0:
        func_ov048_0225a078(0x14);
        break;
    case 1: {
        u8 v = 0x6c;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
        break;
    }
    case 2:
        func_ov048_0225a078(0x14);
        break;
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a36c(s32 p) {}

void Unk_ov048_0225cbc8::func_ov048_0225a370(s32 p) {
    Unk_ov048_0225a370_Owner *o = unk_3c;
    if (p == 0) {
        o->unk_14 = 0;
        func_ov048_0225bfb4(unk_b4, 0xe);
    } else if (p == 1) {
        u8 v = func_ov048_022593bc(this);
        func_02067a84(o, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a3b0(s32 p) {
    if (p == 0) {
        u8 v = 0x62;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a3d4(s32 p) {
    if (p == 0) {
        u8 v = 0x59;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a3f8(s32 p) {
    if (p == 0) {
        u8 v = 0x52;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
        func_ov004_02225ebc();
        func_02073340();
        if (func_020eaf18() == 3 || func_020eaf18() == 4) {
            func_ov048_0225a078(0x14);
        } else {
            func_ov048_0225b018(this);
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a448(s32 p, s32 id) {
    u8 v0;
    u8 v1;
    u8 v2;
    if (p == 0) {
        unk_aa = id;
        if (unk_7e1 != 0) {
            v0 = unk_aa;
            func_02067a84(unk_3c, &v0, data_ov048_0225c6e0[0]);
        } else {
            v1 = 0x6a;
            func_02067a84(unk_3c, &v1, data_ov048_0225c6e0[0]);
        }
    }
    if (p == 1) {
        v2 = func_ov048_022593bc(this);
        func_02067a84(unk_3c, &v2, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a4b8(s32 p) { func_ov048_0225a448(p, 0x5b); }
void Unk_ov048_0225cbc8::func_ov048_0225a4c4(s32 p) { func_ov048_0225a448(p, 0x54); }
void Unk_ov048_0225cbc8::func_ov048_0225a4d0(s32 p) { func_ov048_0225a448(p, 0x3e); }
void Unk_ov048_0225cbc8::func_ov048_0225a4dc(s32 p) { func_ov048_0225a448(p, 0x46); }

void Unk_ov048_0225cbc8::func_ov048_0225a4e8(s32 p) {
    if (p == 1) {
        u8 v = func_ov048_022593bc(this);
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a514(s32 p) {
    void *h = func_0209750c();
    u32 id = 0xff;
    switch (p) {
    case 0:
        if (func_02098044(h, 1)) {
            id = 8;
        } else {
            Unk_020cbb18 *g = data_020cbb18;
            if (func_02072e44(g) && func_020729cc(g, 0)) {
                id = 0x50;
            } else if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (func_02098044(h, 1)) {
            id = 0xe;
        } else {
            id = func_ov048_022593e4(this);
        }
        break;
    }
    if (id != 0xff) {
        u8 v = id;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a5a8(s32 p) {
    void *h = func_0209750c();
    u32 id = 0xff;
    switch (p) {
    case 0:
        if (func_02098044(h, 1)) {
            id = 8;
        } else {
            Unk_020cbb18 *g = data_020cbb18;
            if (func_02072e44(g) && func_020729cc(g, 0)) {
                id = 0x50;
            } else if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (func_02098044(h, 1)) {
            id = 0xe;
        } else {
            id = func_ov048_022593e4(this);
        }
        break;
    case 2:
        if (func_020729cc(data_020cbb18, 0) == 0) {
            if (func_02098044(h, 1)) {
                id = 8;
            } else {
                void *s;
                func_0209f1e4();
                s = func_02076c80(func_02098680(h));
                if (func_020e9d94(s)) {
                    if (func_020ea3dc(s)) {
                        id = 0x29;
                        s64 t = func_020ea3c4(s);
                        func_ov048_0225af48(this, (s32)t, (s32)(t >> 32));
                    } else {
                        id = 0x23;
                    }
                } else {
                    id = 0x2f;
                }
                func_0209f1c4();
            }
        }
        break;
    }
    if (id != 0xff) {
        u8 v = id;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a6a4(s32 p) {
    if (p == 0) {
        u8 v = 0x19;
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a6c8() {
    u8 v0, v1, v2, v3, v4;
    if (unk_7e3 != 0 && func_ov048_0225af0c(this) == 0) {
        if (unk_7e3 == 2) {
            v0 = 0x6f;
            func_02067a84(unk_3c, &v0, data_ov048_0225c6e0[0]);
        } else {
            v1 = 0x70;
            func_02067a84(unk_3c, &v1, data_ov048_0225c6e0[0]);
        }
        return;
    }
    void *s = func_02076c80(func_02098680(func_0209750c()));
    func_0209f1e4();
    if (func_020ea3dc(s)) {
        if (func_020e9d94(s)) {
            v2 = data_ov048_0225c324[unk_7e3];
            func_02067a84(unk_3c, &v2, data_ov048_0225c6e0[0]);
        } else {
            unk_7e0 = 1;
            v3 = 0x72;
            func_02067a84(unk_3c, &v3, data_ov048_0225c6e0[0]);
        }
    } else {
        v4 = 0x71;
        func_02067a84(unk_3c, &v4, data_ov048_0225c6e0[0]);
    }
    func_0209f1c4();
}

void Unk_ov048_0225cbc8::func_ov048_0225a79c(s32 p) {
    if (p == 1) {
        unk_7e3 = 1;
        func_ov048_0225a6c8();
    } else if (p == 2) {
        u8 v = func_ov048_022593bc(this);
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a7dc(s32 p) {
    if (p == 1) {
        unk_7e3 = 2;
        func_ov048_0225a6c8();
    } else if (p == 2) {
        u8 v = func_ov048_022593bc(this);
        func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a81c(s32 p) {
    if (p == 0) {
        unk_7e3 = 0;
        func_ov048_0225a6c8();
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a838(s32 p) {
    if (p == 0) {
        u32 id = 0xff;
        switch (unk_7e3) {
        case 2:
            unk_aa = 0x5b;
            id = 0x6a;
            break;
        case 1:
            unk_aa = 0x3e;
            id = 0x6a;
            break;
        case 0:
            id = 0x25;
            break;
        }
        if (id != 0xff) {
            u8 v = id;
            func_02067a84(unk_3c, &v, data_ov048_0225c6e0[0]);
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a890(s32 p) {
    if (p == 2) {
        func_ov048_0225b018(this);
    }
}

void Unk_ov048_0225cbc8::func_ov048_0225a8a4(s32 p) {
    if (p == 0) {
        func_0209f1e4();
        func_02076c9c(func_02098680(func_0209750c()));
        func_0209f1c4();
    }
    func_ov048_0225a838(p);
}

void Unk_ov048_0225cbc8::vfunc_14() {
    static Unk_ov048_0225a8d4_Row tbl[28] = {
        {0x00, &Unk_ov048_0225cbc8::func_ov048_0225adb0},
        {0x04, &Unk_ov048_0225cbc8::func_ov048_0225adb0},
        {0x05, &Unk_ov048_0225cbc8::func_ov048_0225adb0},
        {0x06, &Unk_ov048_0225cbc8::func_ov048_0225adb0},
        {0x07, &Unk_ov048_0225cbc8::func_ov048_0225adb0},
        {0x38, &Unk_ov048_0225cbc8::func_ov048_0225ad78},
        {0x46, &Unk_ov048_0225cbc8::func_ov048_0225ad18},
        {0x54, &Unk_ov048_0225cbc8::func_ov048_0225acac},
        {0x3e, &Unk_ov048_0225cbc8::func_ov048_0225ace0},
        {0x5b, &Unk_ov048_0225cbc8::func_ov048_0225ace0},
        {0x6c, &Unk_ov048_0225cbc8::func_ov048_0225ad18},
        {0x47, &Unk_ov048_0225cbc8::func_ov048_0225ad28},
        {0x48, &Unk_ov048_0225cbc8::func_ov048_0225ad28},
        {0x49, &Unk_ov048_0225cbc8::func_ov048_0225ad28},
        {0x25, &Unk_ov048_0225cbc8::func_ov048_0225ace0},
        {0x55, &Unk_ov048_0225cbc8::func_ov048_0225ac7c},
        {0x5d, &Unk_ov048_0225cbc8::func_ov048_0225ac58},
        {0x6d, &Unk_ov048_0225cbc8::func_ov048_0225ac58},
        {0x62, &Unk_ov048_0225cbc8::func_ov048_0225aba8},
        {0x59, &Unk_ov048_0225cbc8::func_ov048_0225ac0c},
        {0x68, &Unk_ov048_0225cbc8::func_ov048_0225ab98},
        {0x0d, &Unk_ov048_0225cbc8::func_ov048_0225ab88},
        {0x11, &Unk_ov048_0225cbc8::func_ov048_0225ab60},
        {0x58, &Unk_ov048_0225cbc8::func_ov048_0225ab60},
        {0x61, &Unk_ov048_0225cbc8::func_ov048_0225ab60},
        {0x75, &Unk_ov048_0225cbc8::func_ov048_0225aafc},
        {0x12, &Unk_ov048_0225cbc8::func_ov048_0225aad4},
        {0x6a, &Unk_ov048_0225cbc8::func_ov048_0225adec},
    };
    s32 i = 0;
    u8 *p = &unk_1e;
    for (; (u32)i < 0x1c; i++) {
        u32 a = *(u32 *)((u8 *)tbl + i * 12);
        u32 b = *p;
        if (a == b) {
            (this->*tbl[i].f)();
        }
    }
}

// Tiny setter last so it is not inlined into callers.
void Unk_ov048_0225cbc8::func_ov048_0225a078(s32 s) { unk_b0 = s; }
