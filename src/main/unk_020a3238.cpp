#include "types.h"

struct Unk_020a3238_Vec {
    s32 x, y, z;
};

class Unk_020660f8 {
public:
    u32 unk_00;
    u32 unk_04;
    s32 func_02067a3c(s32 idx, void *p);
    void func_02067958();
};

class Unk_020a3238;

extern "C" {
extern u8 data_021c3cc0;
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u32 data_021ed3c4;
extern u32 data_020e2948[];
extern u32 data_020e295c[];
extern Unk_020a3238_Vec data_020d0788;
extern Unk_020a3238_Vec data_020d0770;
extern u8 data_021dfd8c[];

Unk_020660f8 *func_02067918(s32 i);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_020b50e8();
s32 func_0204da0c();
void func_0204d5d8(s32 a, Unk_020a3238_Vec *v, s32 b, s32 c);
void func_020b4f18(s32 a, s32 b, Unk_020a3238_Vec *v, s32 c, s32 d, s32 e, s32 f);
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
s32 func_0209e170(void *p, s32 n);
void func_020a034c();
void func_020a0340();
void func_020a042c();
s32 func_020a4414(s32 a, s32 b, s32 c, s32 d);
s32 func_020a0cd8();
void func_0209df9c(void *p);
void func_02097564();
void func_02078370();
void func_0209d70c(void *p, s32 n);
void func_0209d624(void *p);
void func_0207835c();
void func_0209f2d4(void *p, s32 n);
s32 func_020b013c();
s32 func_0209750c(void *p);
void func_02097ff4(s32 a, s32 b);
void func_0209cfe4();
void func_0207ae84(void *p, s32 n);
s32 func_0204198c();
s32 func_02041960();
void func_02041ac0();
s32 func_02097868(void *p, u32 n);
void func_02094030(void *p);
void func_02094018(void *p);
s32 func_0209888c(...);
void func_020940d0(s32 a, void *p);
void func_02098a58(s32 a);
void func_0209df30(void *p, u32 n);
s32 func_020978a4(void *p);
}

class Unk_020a3238 {
public:
    u8 pad_00[0x9d];
    u8 unk_9d;
    u8 pad_9e[0x10a - 0x9e];
    u8 unk_10a;

    void func_020a3238();
    void func_020a324c();
    void func_020a32e0();
    void func_020a32fc();
    void func_020a3390();
    void func_020a3398();
    void func_020a33c4();
    void func_020a33c8();
    void func_020a3408();
    void func_020a340c();
    void func_020a3478();
    void func_020a347c();
    void func_020a34e0();
    void func_020a34e4();
    void func_020a3514();
    void func_020a3518();
    void func_020a3584();
    void func_020a3588();
    void func_020a35b8();
    void func_020a35bc();
    void func_020a3614();
    void func_020a3618();
    void func_020a3670();
    void func_020a3674();
    void func_020a36a0();
    void func_020a36a4();
    void func_020a3768();
    void func_020a3784();
    void func_020a3868();
    void func_020a38f4();
    void func_020a39c8();
    void func_020a39e4();
    void func_020a3ac8();
    void func_020a3ad0();

    s32 func_020a13c4();
    s32 func_020a1158(u32 n);
    s32 func_020a15c8(u32 n);
    void func_020a15f8();
    void func_020a1648();
    void func_020a3ebc(u32 n);
    void func_020a0990(void *p, u32 n);
    s32 func_020a0664();
    s32 func_020a0d28(u32 n);
};

static inline BOOL Unk_020a3238_Z(Unk_020660f8 *o) {
    u32 t = o->unk_04;
    if (t == 0) return TRUE;
    return FALSE;
}

static inline BOOL Unk_020a3238_Is2(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

void Unk_020a3238::func_020a3238() {
    func_0209f2d4(this, 1);
    func_020b013c();
}

void Unk_020a3238::func_020a324c() {
    switch (unk_9d) {
    case 0: {
        s32 r = func_020a13c4();
        if (r == 1) {
            unk_9d = 3;
        } else if (r != 3) {
            unk_9d = 1;
        }
        break;
    }
    case 1: {
        s32 r = func_020a1158((u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a1158(2);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 3:
        break;
    default:
        func_020a3ebc(0);
        break;
    }
}

void Unk_020a3238::func_020a32e0() {
    func_02097ff4(func_0209750c(this), 2);
    unk_9d = 0;
}

void Unk_020a3238::func_020a32fc() {
    switch (unk_9d) {
    case 0: {
        s32 r = func_020a13c4();
        if (r == 1) {
            unk_9d = 3;
        } else if (r != 3) {
            unk_9d = 1;
        }
        break;
    }
    case 1: {
        s32 r = func_020a1158((u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a1158(2);
        if (r == 1) {
            unk_9d = 3;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 3:
        break;
    default:
        func_020a3ebc(0);
        break;
    }
}

void Unk_020a3238::func_020a3390() {
    unk_9d = 0;
}

void Unk_020a3238::func_020a3398() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        func_020b4bbc(func_020b4934(), 2);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a33c4() {}

void Unk_020a3238::func_020a33c8() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        if (func_020b50e8() == 6) {
            func_020b4bbc(func_020b4934(), 2);
        } else {
            func_020b4bbc(func_020b4934(), 0);
        }
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a3408() {}

void Unk_020a3238::func_020a340c() {
    Unk_020a3238_Vec v;
    Unk_020660f8 *o = func_02067918(0);
    if (Unk_020a3238_Is2(data_021c3cc0)) {
        if (o->unk_04 == 0) {
            o->func_02067958();
            func_0204d5d8(func_0204da0c(), &v, 0, 0);
            func_020b4f18(func_020b4934(), 0, &v, 0x400000, -0x8000, 3, 2);
            func_020a3ebc(0);
        }
    }
}

void Unk_020a3238::func_020a3478() {}

void Unk_020a3238::func_020a347c() {
    Unk_020660f8 *o = func_02067918(0);
    if (Unk_020a3238_Is2(data_021c3cc0)) {
        if (o->unk_04 == 0) {
            o->func_02067958();
            if (func_0209e170(data_021d7350, 0x12) != 0) {
                func_020a034c();
            } else {
                func_020a0340();
            }
            func_020a042c();
            func_020b4f58(func_020b4934(), 0x2d, 3, 0);
            func_020a3ebc(0);
        }
    }
}

void Unk_020a3238::func_020a34e0() {}

void Unk_020a3238::func_020a34e4() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        func_020a4414(2, 3, 0, 0);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a3514() {}

void Unk_020a3238::func_020a3518() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        s32 r = func_020a0cd8();
        if (r == 4 || r == 1) {
            func_0209df9c(data_021d7350);
            func_02097564();
            func_02078370();
            func_0209d70c(data_021d7350, 3);
        } else {
            func_0209d70c(data_021d7350, 4);
        }
        func_0209d624(data_021d7350);
        func_0207835c();
        func_020b4f58(func_020b4934(), 0x2c, 3, 2);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a3584() {}

void Unk_020a3238::func_020a3588() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        func_020b4f58(func_020b4934(), 0x2f, 3, 2);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a35b8() {}

void Unk_020a3238::func_020a35bc() {
    Unk_020a3238_Vec v;
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        v.x = data_020d0788.x;
        v.y = data_020d0788.y;
        v.z = data_020d0788.z;
        func_020b4f18(func_020b4934(), 0xe, &v, 0x800000, 0, 3, 2);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a3614() {}

void Unk_020a3238::func_020a3618() {
    Unk_020a3238_Vec v;
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        v.x = data_020d0770.x;
        v.y = data_020d0770.y;
        v.z = data_020d0770.z;
        func_020b4f18(func_020b4934(), 0xd, &v, 0x800000, 0, 3, 2);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a3670() {}

void Unk_020a3238::func_020a3674() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        func_020b4bbc(func_020b4934(), 1);
        func_020a3ebc(0);
    }
}

void Unk_020a3238::func_020a36a0() {}

void Unk_020a3238::func_020a36a4() {
    switch (unk_9d) {
    case 0:
        if (func_020a15c8(0) != 0) {
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = func_020a13c4();
        if (r == 1) {
            unk_9d = 4;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a1158((u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = func_020a1158((u32)(unk_10a << 28) >> 28);
        if (r == 1) {
            unk_9d = 4;
        } else if (r == 0) {
            unk_9d = 6;
        }
        break;
    }
    case 4:
        func_020a1648();
        unk_9d = 5;
        break;
    case 5:
        break;
    default:
        func_020a15f8();
        func_020a3ebc(0xf);
        break;
    }
}

void Unk_020a3238::func_020a3768() {
    func_020a0990(data_020e295c, 0x27);
    unk_9d = 0;
}

void Unk_020a3238::func_020a3784() {
    switch (unk_9d) {
    case 0:
        if (func_020a15c8(0) != 0) {
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = func_020a13c4();
        if (r == 1) {
            unk_9d = 5;
        } else if (r != 3) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a1158((u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = func_020a1158((u32)(unk_10a << 28) >> 28);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 4: {
        s32 r = func_020a1158(2);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 7;
        }
        break;
    }
    case 5:
        func_020a1648();
        unk_9d = 6;
        break;
    case 6:
        break;
    default:
        func_020a15f8();
        func_020a3ebc(0xc);
        break;
    }
}

void Unk_020a3238::func_020a3868() {
    Unk_020660f8 *o = func_02067918(0);
    u8 *d = data_021d7350;
    u8 buf[0x1c];
    s32 h = func_02097868(data_021d735c, data_021ed3c4);
    func_02094030(buf);
    func_020940d0(func_0209888c(h), buf);
    o->func_02067a3c(0, buf);
    func_02098a58(h);
    func_0209df30(d, data_021ed3c4);
    func_020a0990(data_020e2948, 7);
    if (func_020978a4(data_021d735c) == 0) {
        *(u8 *)(d + 0x15e76) = 0;
    }
    unk_9d = 0;
    func_02094018(buf);
}

void Unk_020a3238::func_020a38f4() {
    switch (unk_9d) {
    case 0:
        if (func_020a15c8(0) != 0) {
            unk_9d = 1;
        }
        break;
    case 1: {
        s32 r = func_020a0664();
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 2;
        }
        break;
    }
    case 2: {
        s32 r = func_020a0d28(0);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 3;
        }
        break;
    }
    case 3: {
        s32 r = func_020a0d28(1);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 4;
        }
        break;
    }
    case 4: {
        s32 r = func_020a0d28(2);
        if (r == 1) {
            unk_9d = 5;
        } else if (r == 0) {
            unk_9d = 7;
        }
        break;
    }
    case 5:
        func_020a1648();
        unk_9d = 6;
        break;
    case 6:
        break;
    default:
        func_020a15f8();
        func_020a3ebc(0xc);
        break;
    }
}

void Unk_020a3238::func_020a39c8() {
    func_020a0990(data_020e2948, 0xc);
    unk_9d = 0;
}

void Unk_020a3238::func_020a39e4() {
    switch (unk_9d) {
    case 0:
        unk_9d = 1;
        break;
    case 1:
        if (func_0204198c() != 0) {
            unk_9d = 2;
        } else {
            unk_9d = 3;
        }
        break;
    case 2:
        if (func_02041960() != 0) {
            unk_9d = 3;
        }
        break;
    case 3: {
        s32 r = func_020a13c4();
        if (r == 1) {
            unk_9d = 6;
        } else if (r != 3) {
            unk_9d = 4;
        }
        break;
    }
    case 4: {
        s32 r = func_020a1158((u32)(unk_10a << 24) >> 28);
        if (r == 1) {
            unk_9d = 6;
        } else if (r == 0) {
            unk_9d = 5;
        }
        break;
    }
    case 5: {
        s32 r = func_020a1158((u32)(unk_10a << 28) >> 28);
        if (r == 1) {
            unk_9d = 6;
        } else if (r == 0) {
            unk_9d = 8;
        }
        break;
    }
    case 6:
        func_020a1648();
        unk_9d = 7;
        break;
    case 7:
        break;
    default:
        func_020a15f8();
        func_020a3ebc(0x10);
        break;
    }
}

void Unk_020a3238::func_020a3ac8() {
    unk_9d = 0;
}

void Unk_020a3238::func_020a3ad0() {
    switch (unk_9d) {
    case 0:
        if (func_020a15c8(0) != 0) {
            func_0209cfe4();
            unk_9d = unk_9d + 1;
        }
        break;
    case 1:
        func_0207ae84(data_021dfd8c, 0);
        unk_9d = unk_9d + 1;
        break;
    case 2:
        func_0209d70c(data_021d7350, 2);
        unk_9d = unk_9d + 1;
        break;
    case 3:
        func_02041ac0();
        unk_9d = unk_9d + 1;
        break;
    case 4:
        func_0209d624(data_021d7350);
        unk_9d = unk_9d + 1;
        break;
    default:
        func_020a3ebc(4);
        break;
    }
}
