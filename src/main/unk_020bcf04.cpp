#include "types.h"

extern "C" {
void* __cxa_vec_ctor(void* array, u32 count, u32 size, void* (*ctor)(void*), void* (*dtor)(void*, s32));
}

struct Unk_020bd058_Member {
    u8 unk_00[4];
    ~Unk_020bd058_Member();
};

// 0x74-byte element of the 60-element array at the start of Unk_020bcf04
struct Unk_020bd058 {
    u8 unk_00[0x10];
    Unk_020bd058_Member unk_10;
    u8 unk_14[0x74 - 0x14];
    Unk_020bd058();
    ~Unk_020bd058();
};

// 0xc-byte element (5 of them at 0x1b30)
struct Unk_020bda7c {
    u8 unk_00[0xc];
    Unk_020bda7c();
};

struct Unk_020bdcbc {
    u8 unk_00[0x134c];
    void func_020bdcbc();
};

struct Unk_020bd8f8 {
    u8 unk_00[0x48];
    Unk_020bd8f8();
};

struct Unk_020bd054 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    Unk_020bd054();
    ~Unk_020bd054();
    void func_020bd6dc();
    void func_020bd6f0(s32 a, s32* p, u8 b);
};

struct Unk_0213b91c {
    virtual void vfunc_00();
    u32 unk_04;
};

struct Unk_0213b970 : Unk_0213b91c {
    virtual void vfunc_00();
    u32 unk_08;
    void func_02003c30();
    void func_02003c40(s32 a);
    void func_02003c50(s32 a);
    void func_02003c60(void* p);
    void func_02003cbc();
};

struct Unk_02000c98 {
    s32 x, y, z;
    Unk_02000c98();
    ~Unk_02000c98();
};

struct Unk_020bd0a4_Vec3 {
    s32 x, y, z;
};

struct Unk_020bd06c {
    Unk_0213b970 unk_00[8];
    Unk_02000c98 unk_60[8];
    u8 unk_c0;

    Unk_020bd06c();
    void func_020bd06c();
    void func_020bd0a4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p);
    void func_020bd0d4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p);
    void func_020bd104();
    void func_020bd12c();
};

extern Unk_020bd06c data_021f44ac;

extern "C" {
void func_020e7530(s16* p, s32 target, s32 step);
void func_02094574(s32 a, s32 b, s32 c);
void* func_020947f0(s32 a);
void func_020bffc0(s32* out, void* p);
s32 func_01ffc5a4(s32 a, s32 b);
void func_020850e0();
s32 func_02085174();
void func_02086c04(s32 a, void* p, u8 b);
void func_ov003_02212140();
void func_0203a5ac();
void func_0203a5ec(s32 a);
void func_020bddbc(Unk_020bd0a4_Vec3* out, s32 a, s32 b, s32 c);
void* func_02097868(void* a, s32 i);
s32 func_02098a48(void* p);
void* func_02098698(void* p);
void func_020877e0(void* p, s32 a);
void func_02086284(void* p);
void func_02040974(s32 a, s32 b, s32 c);
s32 func_ov003_02219654(s32 a, s32 b);
void func_ov003_02212190(s32 a, s32 b);
void* func_0209750c();
u32 func_020981b8(void* p);
void func_020981ac(void* p, u8 v);
s32 func_02094348();
s32 func_02063b8c(s32 a);
BOOL func_020bd4e0();
void func_020bd4fc();
}

extern u8 data_021d735c[];
extern u8 data_021e58a6[];
extern u8 data_020d0e60[];
extern s8 data_020d18c8[];
struct Unk_020bd774_Entry {
    u8 unk_00[0xc];
    s8 unk_0c;
    s8 unk_0d;
    u8 unk_0e[2];
};
extern Unk_020bd774_Entry data_020d16e8[];

struct Unk_020bd1b0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    s16 unk_1a;
    s16 unk_1c;
    u8 unk_1e;
    u8 unk_1f;
    u8 unk_20;
    u8 unk_21;

    Unk_020bd1b0();
    void func_020bd1b0(s32 a, s32 b);
    void func_020bd1e8();
    void func_020bd25c();
    void func_020bd288();
    void func_020bd2d8();
    void func_020bd32c();
    void func_020bd334();
    void func_020bd3ac();
    void func_020bd400();
    void func_020bd408();
    void func_020bd4b4();
    void func_020bd4bc();
    void func_020bd520();
    void func_020bd604(s32 a, s32 b, s32 c, u8 d);
    void func_020bd618();
    void func_020bd624();
    void func_020bd640();
    void func_020bd64c();
    void func_020bd668();
    void func_020bd67c(u8 a);
    void func_020bd69c(s32 a);
    void func_020bd6a8(s32 a);
};

struct Unk_020bd718 {
    s32 unk_00;
    s8 unk_04[4];
    u16 unk_08;
    u16 unk_0a[15];
    u16 unk_28[16];

    void func_020bd718(s32 idx, u16* p);
    BOOL func_020bd744(s32 idx);
    void func_020bd758(s32 idx);
    void func_020bd764(s32 a, s32 b);
    BOOL func_020bd774(s32 idx);
    void func_020bd7a8(s32 idx);
    void func_020bd7c0(s32 v);
    void func_020bd7e4();
    BOOL func_020bd808(s32 v);
};

struct Unk_020bcf04 {
    Unk_020bd058 unk_0000[60];
    Unk_020bda7c unk_1b30[5];
    Unk_020bdcbc unk_1b6c;
    Unk_020bd8f8 unk_2eb8;
    u32 unk_2f00;
    u32 unk_2f04;
    u32 unk_2f08;
    u32 unk_2f0c;
    u32 unk_2f10;
    u32 unk_2f14;
    u8 unk_2f18[0xc];
    u8 unk_2f24;
    u8 unk_2f25;
    u8 unk_2f26;
    u8 unk_2f27;
    u8 unk_2f28;
    u8 unk_2f29;
    u8 unk_2f2a[2];
    u32 unk_2f2c;
    u32 unk_2f30;
    u32 unk_2f34;
    u32 unk_2f38;
    u32 unk_2f3c;
    u32 unk_2f40;
    u32 unk_2f44;
    u32 unk_2f48;
    u32 unk_2f4c;
    u8 unk_2f50;
    u8 unk_2f51;
    u8 unk_2f52[2];
    u32 unk_2f54;
    Unk_020bd054 unk_2f58[4];
    Unk_020bd1b0 unk_2fa8;
    Unk_020bd06c unk_2fcc;

    Unk_020bcf04();
};

Unk_020bcf04::Unk_020bcf04() {
    unk_2f00 = 0;
    unk_2f04 = 0;
    unk_2f08 = 0;
    unk_2f0c = 0;
    unk_2f10 = 0;
    unk_2f14 = 0;
    unk_2f24 = 0;
    unk_2f25 = 0;
    unk_2f26 = 0;
    unk_2f27 = 0;
    unk_2f28 = 0;
    unk_2f29 = 0;
    unk_2f2c = 0;
    unk_2f30 = 0;
    unk_2f34 = 0;
    unk_2f38 = 0;
    unk_2f3c = 0;
    unk_2f40 = 0;
    unk_2f44 = 0;
    unk_2f48 = 0;
    unk_2f4c = 0;
    unk_2f50 = 0;
    unk_2f51 = 0;
    unk_2f54 = 0;
    unk_1b6c.func_020bdcbc();
}

Unk_020bd058::~Unk_020bd058() {}

Unk_020bd054::~Unk_020bd054() {}

Unk_020bd054::Unk_020bd054() {
    func_020bd6dc();
}

void Unk_020bd054::func_020bd6dc() {
    unk_00 = 4;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
}

void Unk_020bd054::func_020bd6f0(s32 a, s32* p, u8 b) {
    unk_00 = a;
    unk_04 = p[0];
    unk_08 = p[1];
    unk_0c = p[2];
    unk_10 = b;
    unk_11 = 1;
}

void Unk_020bd06c::func_020bd06c() {
    if (unk_c0) {
        Unk_0213b970* a = unk_00;
        Unk_02000c98* b = unk_60;
        for (s32 i = 0; i < 8; i++, a++, b++) {
            a->func_02003c60(i == 7 ? NULL : b);
        }
    }
}

void Unk_020bd06c::func_020bd0a4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p) {
    if (unk_c0) {
        unk_00[idx].func_02003c40(a);
        unk_60[idx].x = p->x;
        unk_60[idx].y = p->y;
        unk_60[idx].z = p->z;
    }
}

void Unk_020bd06c::func_020bd0d4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p) {
    if (unk_c0) {
        unk_00[idx].func_02003c50(a);
        unk_60[idx].x = p->x;
        unk_60[idx].y = p->y;
        unk_60[idx].z = p->z;
    }
}

void Unk_020bd06c::func_020bd104() {
    unk_c0 = 0;
    for (Unk_0213b970* e = &unk_00[7]; e >= unk_00; e--) {
        e->func_02003c30();
    }
}

void Unk_020bd06c::func_020bd12c() {
    for (Unk_0213b970* e = unk_00; e < (Unk_0213b970*)unk_60; e++) {
        e->func_02003cbc();
    }
    unk_c0 = 1;
}

Unk_020bd06c::Unk_020bd06c() {
    unk_c0 = 0;
    for (Unk_02000c98* p = unk_60; p < (Unk_02000c98*)&unk_c0; p++) {
        p->x = 0;
        p->y = 0;
        p->z = 0;
    }
}

void Unk_020bd1b0::func_020bd1b0(s32 a, s32 b) {
    func_020e7530(&unk_1a, 0, a);
    func_020e7530(&unk_1c, 0, b);
    func_02094574(unk_1a, unk_1c, 4);
}

void Unk_020bd1b0::func_020bd1e8() {
    void* p = func_020947f0(4);
    s32 x = 0x80000;
    if (p) {
        func_020bffc0(&x, p);
    }
    s32 t = (func_01ffc5a4(unk_0c - x, 0x100000) * -10000) >> 12;
    if (t < -5000) {
        t = -5000;
    } else if (t > 5000) {
        t = 5000;
    }
    s16 v = t;
    func_02094574(4000, v, 4);
    unk_1a = 4000;
    unk_1c = v;
}

void Unk_020bd1b0::func_020bd25c() {
    unk_00 = 0;
    unk_04 = 4;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0x1000;
    unk_18 = 0;
    unk_1a = 0;
    unk_1c = 0;
    unk_1e = 0;
    unk_1f = 0;
    unk_20 = 0;
    unk_21 = 0;
}

void Unk_020bd1b0::func_020bd288() {
    func_020bd1b0(0x190, 0x190);
    unk_08--;
    if (unk_08 <= 0) {
        void* p = func_020947f0(unk_04);
        if (p) {
            func_020850e0();
            func_02086c04(func_02085174(), p, unk_18);
        }
        func_ov003_02212140();
        func_0203a5ac();
        func_020bd25c();
    }
}

void Unk_020bd1b0::func_020bd2d8() {
    func_020bd1b0(0x50, 0);
    if (unk_08 > 0) {
        unk_08--;
    } else {
        Unk_020bd0a4_Vec3 v;
        func_0203a5ec(0x5c3);
        func_020bddbc(&v, unk_0c, unk_10, unk_14);
        data_021f44ac.func_020bd0d4(0, 0x800, &v);
        unk_08 = 0x1e;
        unk_00 = 9;
    }
}

void Unk_020bd1b0::func_020bd32c() {
    func_020bd1e8();
}

void Unk_020bd1b0::func_020bd334() {
    func_020bd1b0(0x190, 0x190);
    unk_08--;
    if (unk_08 <= 0) {
        func_ov003_02212140();
        func_0203a5ac();
        for (s32 i = 0; i < 4; i++) {
            void* p = func_02097868(data_021d735c, i);
            if (p && func_02098a48(p)) {
                func_020877e0(func_02098698(p), 0x14);
            }
        }
        func_02086284(data_021e58a6);
        func_02040974(0x44, 0x63, 0);
        func_020bd25c();
    }
}

void Unk_020bd1b0::func_020bd3ac() {
    func_020bd1b0(0x50, 0);
    unk_08--;
    if (unk_08 <= 0) {
        Unk_020bd0a4_Vec3 v;
        func_0203a5ec(0xa3d);
        func_020bddbc(&v, unk_0c, unk_10, unk_14);
        data_021f44ac.func_020bd0d4(0, 0x7fd, &v);
        unk_08 = 0x32;
        unk_00 = 6;
    }
}

void Unk_020bd1b0::func_020bd400() {
    func_020bd1e8();
}

void Unk_020bd1b0::func_020bd408() {
    func_020bd1b0(0x190, 0x190);
    if (unk_08 > 0) {
        unk_08--;
        if (unk_08 == 0) {
            if (func_ov003_02219654(unk_21 != 0 ? 1 : 0, ((unk_0c + 0x800) >> 12) - 0x80) == 0) {
                unk_1e = 1;
            }
        }
    }
    if (unk_1f != 0 || unk_20 != 0) {
        s32 id = unk_1f != 0 ? 0x7f9 : 0x7fa;
        Unk_020bd0a4_Vec3 v;
        func_020bddbc(&v, unk_0c, unk_10, unk_14);
        data_021f44ac.func_020bd0d4(0, id, &v);
        unk_1f = 0;
        unk_20 = 0;
    }
    if (unk_1e != 0) {
        func_ov003_02212140();
        func_020bd25c();
    }
}

void Unk_020bd1b0::func_020bd4b4() {
    func_020bd1e8();
}

void Unk_020bd1b0::func_020bd4bc() {
    unk_08--;
    if (unk_08 <= 0) {
        func_020bd69c(unk_04);
        func_020bd25c();
    }
}

extern "C" BOOL func_020bd4e0() {
    return func_020981b8(func_0209750c()) >= 0x10;
}

extern "C" void func_020bd4fc() {
    void* p = func_0209750c();
    u32 n = func_020981b8(p);
    if (n < 0x10) {
        func_020981ac(p, n + 1);
    }
}

typedef void (Unk_020bd1b0::*Unk_020bd520_Fn)();

void Unk_020bd1b0::func_020bd520() {
    static Unk_020bd520_Fn tbl[10] = {
        0,
        &Unk_020bd1b0::func_020bd4bc,
        &Unk_020bd1b0::func_020bd4b4,
        &Unk_020bd1b0::func_020bd408,
        &Unk_020bd1b0::func_020bd400,
        &Unk_020bd1b0::func_020bd3ac,
        &Unk_020bd1b0::func_020bd334,
        &Unk_020bd1b0::func_020bd32c,
        &Unk_020bd1b0::func_020bd2d8,
        &Unk_020bd1b0::func_020bd288,
    };
    Unk_020bd520_Fn f = tbl[unk_00];
    if (f) {
        (this->*f)();
    }
}

void Unk_020bd1b0::func_020bd604(s32 a, s32 b, s32 c, u8 d) {
    unk_0c = a;
    unk_10 = b;
    unk_14 = c;
    unk_18 = d;
}

void Unk_020bd1b0::func_020bd618() {
    unk_00 = 8;
    unk_08 = 0x14;
}

void Unk_020bd1b0::func_020bd624() {
    unk_00 = 7;
    func_ov003_02212190(1, unk_04);
    func_020bd4fc();
}

void Unk_020bd1b0::func_020bd640() {
    unk_00 = 5;
    unk_08 = 0x1e;
}

void Unk_020bd1b0::func_020bd64c() {
    unk_00 = 4;
    func_ov003_02212190(1, unk_04);
    func_020bd4fc();
}

void Unk_020bd1b0::func_020bd668() {
    unk_00 = 3;
    unk_08 = 2;
    unk_1e = 0;
    unk_1f = 0;
    unk_20 = 0;
}

void Unk_020bd1b0::func_020bd67c(u8 a) {
    unk_21 = a;
    unk_00 = 2;
    func_ov003_02212190(1, unk_04);
    func_020bd4fc();
}

void Unk_020bd1b0::func_020bd69c(s32 a) {
    func_ov003_02212190(0, a);
}

void Unk_020bd1b0::func_020bd6a8(s32 a) {
    if (a == func_02094348()) {
        unk_00 = 1;
        unk_04 = a;
        unk_08 = 0x2b;
    }
}

Unk_020bd1b0::Unk_020bd1b0() {
    func_020bd25c();
}

static inline void Unk_020bd718_Copy(u16 *dst, u16 *src) {
    *dst = *src;
}

void Unk_020bd718::func_020bd718(s32 idx, u16* p) {
    unk_08 |= 1 << idx;
    Unk_020bd718_Copy(&unk_0a[idx], p);
    func_020bd7c0((data_020d0e60[idx] >> 4) & 0xf);
}

BOOL Unk_020bd718::func_020bd744(s32 idx) {
    if (unk_08 & (1 << idx)) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020bd718::func_020bd758(s32 idx) {
    unk_08 &= ~(1 << idx);
}

void Unk_020bd718::func_020bd764(s32 a, s32 b) {
    if (a >= 0 && b >= 0) {
        unk_04[a - 12] = b;
    }
}

BOOL Unk_020bd718::func_020bd774(s32 idx) {
    Unk_020bd774_Entry* e = &data_020d16e8[idx];
    s32 y = e->unk_0d;
    s32 x = e->unk_0c;
    BOOL result = TRUE;
    if (y >= 0 && x >= 0) {
        if (x != unk_04[y - 12]) {
            result = FALSE;
        }
    }
    return result;
}

void Unk_020bd718::func_020bd7a8(s32 idx) {
    Unk_020bd774_Entry* e = &data_020d16e8[idx];
    func_020bd7c0(e->unk_0d);
}

void Unk_020bd718::func_020bd7c0(s32 v) {
    if (v < 0) {
        for (s32 i = 0; (u32)i < 4; i++) {
            unk_04[i] = -1;
        }
    } else {
        unk_04[v - 12] = -1;
    }
}

void Unk_020bd718::func_020bd7e4() {
    unk_00 = func_02063b8c(5);
    func_020bd7c0(data_020d18c8[0x1d]);
}

BOOL Unk_020bd718::func_020bd808(s32 v) {
    BOOL result = FALSE;
    if (unk_08 != 0) {
        for (s32 i = 0; i < 15; i++) {
            BOOL has = func_020bd744(i);
            s32 s = data_020d0e60[i];
            BOOL match = ((s >> 4) & 0xf) == v;
            if (has && match) {
                unk_28[s & 0xf] = unk_0a[i];
                result = TRUE;
            }
        }
    }
    return result;
}
