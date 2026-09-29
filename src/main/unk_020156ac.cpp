#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// External declarations

void operator delete(void *p);

extern "C" {
extern u32 data_021f4880;
extern u16 data_020c6cc8;
extern u8 data_020d784c[];

s32 func_020b50e8(void);
s32 func_020a0414(void);
s32 func_02094348(void);
s32 func_02067a1c(u32 a, u32 b, u32 c, u32 d);
s32 func_020679ec(u32 a, u32 b, void *c, u32 d);
s32 func_02067a3c(u32 a, u32 b, void *c);
u32 func_020679b4(u32 a);
void func_02002fc8(u32 a, void *b);
void func_020940d0(u32 a, void *b);
void func_020638d0(u32 a, void *b);
void func_020b313c(void *a, u32 b);
void func_020b3158(void *a, u32 b);
void func_020b31a8(void *a, s32 b, s32 c);
void func_020b3270(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020b35f8(void *a, u8 *b, u8 *c);
void func_020a7a0c(void *a, void *b);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0208149c(void *p);
s32 func_020151f4(void *p);
void func_02015398(void *p);
void func_0201a160(void *p, s32 a);
s32 func_0201a15c(void *p);
s32 func_0201a164(void *p);
s32 func_0201a140(void);
s32 func_020197a8(void *p);
void func_02019638(void *p, u32 a, u8 b, u32 c);
s32 func_020538f0(void *p);
void func_020538a8(void *p, u32 a, u32 b);
void func_02053900(void *p, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3);
void func_02053878(void *p, u32 a, u32 b);
s32 *func_0201a8cc(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_020820a0(void *p, u32 idx);
s32 func_0208211c(void *p);
s32 func_0205c240(void *p);
s32 func_0205c254(void *p);
s32 func_0205c2dc(void *p, u32 a, u32 b, u32 c);
s32 func_0205c57c(u32 a);
s32 func_0205c5d0(void);
u32 func_0205c5ac(s32 a, u32 b);
u32 func_0205c588(s32 a, u32 b);
s32 func_02056654(void *p);
s32 func_0201610c(void *a, void *b, u32 c, u32 d, u32 s0, u32 s1, u32 s2, u32 s3);
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------
// Local object types, named after their constructors

struct Unk_02062650 { Unk_02062650(); ~Unk_02062650(); u32 pad[0x28 / 4]; };
struct Unk_02094030 { Unk_02094030(); ~Unk_02094030(); u32 pad[0x20 / 4]; };
struct Unk_02063888 { Unk_02063888(); ~Unk_02063888(); u32 pad[0x20 / 4]; };
struct Unk_020a71d0 { Unk_020a71d0(); ~Unk_020a71d0(); u32 pad[0x38 / 4]; };
struct Unk_020b4154 { Unk_020b4154(); ~Unk_020b4154(); u32 pad[0x2c / 4]; };

// Opaque scene object (big object with a member at +0xec and the state at +0x18c..0x198 and +0x350..0x564)
class Unk_02015b8c_Scene {
public:
    virtual ~Unk_02015b8c_Scene();
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
    virtual void vfunc_8c();
};

// Base of the object below (vtable 0x020ddcf0); out-of-line ctor/dtor
class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual void vfunc_38(u32 a);
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
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020d7714 : public Unk_020ddcf0 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual s32 vfunc_6c();
    virtual void vfunc_78() = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 func_02015708();
    Unk_02015b8c_Scene *func_02015710();
    Unk_02015b8c_Scene *func_02015720(u32 idx);
    Unk_02015b8c_Scene *func_02015738();
    Unk_02015b8c_Scene *func_02015748(u32 idx);
    void func_0201577c(u32 a, u32 b, u32 c);
    void func_0201578c(u32 a, u32 b, u32 c);
    void func_020157b8(u32 a, u32 b);
    void func_020157e8(u32 a, u32 b);
    void func_02015818(u32 a, u32 b);
    void func_02015848(u32 a, u32 b);
    void func_02015878(u32 a, u32 b);
    void func_020158a8(s32 a, u32 b, s32 c);
    void func_020158e0(s32 a, u32 b, s32 c, u8 d, s32 e, s32 f);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    BOOL func_0201599c();
    void func_020159ac();
    void func_020159b4();
    void func_020159cc(u32 a, u32 b);
    s32 func_02015a5c();
    void func_02015a78(Unk_02015b8c_Scene *p);
    Unk_02015b8c_Scene *func_02015a7c();
    void func_02015a80(Unk_02015b8c_Scene *p);
    u32 func_02015aac();
    void func_02015ab0(u32 a);
    void func_02015ab8();

    /* 0x44 */ u32 unk_44;
    /* 0x48 */ Unk_02015b8c_Scene *unk_48;
    /* 0x4c */ Unk_02015b8c_Scene *unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 unk_51;
    /* 0x52 */ u8 pad_52[6];
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ u8 unk_5c;
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ u8 pad_64[0x16];
    /* 0x7a */ u16 unk_7a;
};

// State object of the scene: transitions, sits at unk_?; named after its first function
class Unk_02015b8c {
public:
    void func_02015b8c(Unk_02015b8c_Scene *scene);
    void func_02015d2c(Unk_02015b8c_Scene *scene);
    s32 func_02015dd8(u32 k);
    s32 func_02015de4(u32 k);
    void func_02015df0(Unk_02015b8c_Scene *scene);
    s32 func_02015e48(u32 idx);
    BOOL func_02015e74(Unk_02015b8c_Scene *scene);
    void func_02015e94(Unk_02015b8c_Scene *scene, u32 c, u32 d, u32 e);
    void func_02015ec4(u8 v);
    void func_02015ec8(Unk_02015b8c_Scene *scene);
    void func_02015ed8(Unk_02015b8c_Scene *scene, u32 a, u32 b);
    u32 func_02015f64();
    void func_02015f9c();
    BOOL func_02015fc0();
    s32 func_02015d24();

    /* 0x00 */ u32 pad_00[2];
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

extern "C" Unk_020d7714 *func_0201bc1c(void);

#define SCENE_AT(s, off) ((void *)((u8 *)(s) + (off)))

// ---------------------------------------------------------------------------------------------------------------------

extern "C" s32 func_020156ec(void) {
    if (func_020b50e8() == 0x2f) {
        return func_020a0414();
    }
    return func_02094348();
}

void Unk_020d7714::vfunc_48() {
    Unk_02015b8c_Scene *p = func_02015748(unk_50);
    if (p != NULL) {
        func_0201a6c0(SCENE_AT(p, 0x3b0), 4, 0, 0, (s32)&data_021f4880, func_020156ec(), 0, 0);
    }
}

u8 Unk_020d7714::func_02015708() {
    return unk_51;
}

Unk_02015b8c_Scene *Unk_020d7714::func_02015710() {
    return func_02015720(unk_51);
}

Unk_02015b8c_Scene *Unk_020d7714::func_02015720(u32 idx) {
    switch (idx) {
    case 0:
        return unk_48;
    case 1:
        return unk_4c;
    }
    return NULL;
}

Unk_02015b8c_Scene *Unk_020d7714::func_02015738() {
    return func_02015748(unk_50);
}

Unk_02015b8c_Scene *Unk_020d7714::func_02015748(u32 idx) {
    switch (idx) {
    case 0:
        return unk_48;
    case 1:
        return unk_4c;
    }
    return NULL;
}

void Unk_020d7714::vfunc_44() {
    unk_50 = 1;
}

void Unk_020d7714::vfunc_40() {
    unk_50 = 0;
}

void Unk_020d7714::vfunc_3c() {
    unk_50 = 2;
}

void Unk_020d7714::vfunc_34() {
}

void Unk_020d7714::func_0201577c(u32 a, u32 b, u32 c) {
    func_02067a1c(unk_3c, a, b, c);
}

void Unk_020d7714::func_0201578c(u32 a, u32 b, u32 c) {
    Unk_02062650 local;
    func_020679ec(unk_3c, b, &local, c);
}

void Unk_020d7714::func_020157b8(u32 a, u32 b) {
    Unk_02094030 local;
    func_02002fc8(a, &local);
    func_02067a3c(unk_3c, b, &local);
}

void Unk_020d7714::func_020157e8(u32 a, u32 b) {
    Unk_02094030 local;
    func_020940d0(a, &local);
    func_02067a3c(unk_3c, b, &local);
}

void Unk_020d7714::func_02015818(u32 a, u32 b) {
    Unk_02063888 local;
    func_020638d0(a, &local);
    func_02067a3c(unk_3c, b, &local);
}

void Unk_020d7714::func_02015848(u32 a, u32 b) {
    Unk_020a71d0 local;
    func_020b313c(&local, a);
    func_02067a3c(unk_3c, b, &local);
}

void Unk_020d7714::func_02015878(u32 a, u32 b) {
    Unk_020a71d0 local;
    func_020b3158(&local, a);
    func_02067a3c(unk_3c, b, &local);
}

void Unk_020d7714::func_020158a8(s32 a, u32 b, s32 c) {
    if (a >= 0) {
        Unk_020b4154 local;
        func_020b31a8(&local, a, c);
        func_02067a3c(unk_3c, b, &local);
    }
}

void Unk_020d7714::func_020158e0(s32 a, u32 b, s32 c, u8 d, s32 e, s32 f) {
    if (a >= 0) {
        Unk_020b4154 loc;
        u32 flag = 7;
        func_020b3270(&loc, a, c, e, f, 0);
        if (d != 0) {
            Unk_020a71d0 str;
            u8 ch = 0x1c;
            func_020b35f8(&str, &ch, data_020d784c);
            func_020a7a0c(&loc, &str);
            flag = 0;
        }
        func_020679ec(unk_3c, b, &loc, flag);
    }
}

void Unk_020d7714::func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e) {
    if (a >= 0) {
        Unk_020b4154 loc;
        func_020b3270(&loc, a, c, d, e, 0);
        func_02067a3c(unk_3c, b, &loc);
    }
}

BOOL Unk_020d7714::func_0201599c() {
    if (unk_5c == 1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020d7714::func_020159ac() {
    unk_5c = 0;
}

void Unk_020d7714::func_020159b4() {
    unk_5c = 1;
}

void Unk_020d7714::vfunc_38(u32 a) {
    func_020159cc(a, unk_50);
}

void Unk_020d7714::func_020159cc(u32 a, u32 b) {
    Unk_02015b8c_Scene *o = func_02015748(b);
    if (o != NULL) {
        Unk_020d7714 *p = func_0201bc1c();
        if (p != NULL) {
            if (!p->func_0201599c()) {
                if (p->unk_58 == a) {
                    if (func_020197a8(SCENE_AT(o, 0x564)) == 8) {
                        return;
                    }
                }
                func_02019638(SCENE_AT(o, 0x564), 2, a, data_020c6cc8);
                p->unk_58 = a;
            }
        }
    }
}

s32 Unk_020d7714::vfunc_6c() {
    switch (unk_51) {
    case 0:
        if (unk_48 != NULL) {
            return func_0208149c(SCENE_AT(unk_48, 0xea));
        }
        break;
    case 1:
        if (unk_4c != NULL) {
            return func_0208149c(SCENE_AT(unk_4c, 0xea));
        }
        break;
    }
    return 5;
}

s32 Unk_020d7714::func_02015a5c() {
    s32 r = 0;
    if (unk_3c != 0) {
        r = func_020679b4(unk_3c);
    }
    return r;
}

void Unk_020d7714::func_02015a78(Unk_02015b8c_Scene *p) {
    unk_48 = p;
}

Unk_02015b8c_Scene *Unk_020d7714::func_02015a7c() {
    return unk_4c;
}

void Unk_020d7714::func_02015a80(Unk_02015b8c_Scene *p) {
    unk_4c = p;
    if (unk_4c != NULL) {
        Unk_020d7714 *q = func_0201bc1c();
        if (q != NULL) {
            q->vfunc_08();
            unk_4c->vfunc_8c();
        }
    }
}

u32 Unk_020d7714::func_02015aac() {
    return unk_44;
}

void Unk_020d7714::func_02015ab0(u32 a) {
    unk_44 = a;
}

void Unk_020d7714::vfunc_7c() {
}

void Unk_020d7714::func_02015ab8() {
    vfunc_80();
    func_020151f4(this);
}

void Unk_020d7714::vfunc_80() {
}

void Unk_020d7714::vfunc_08() {
    Unk_020ddcf0::vfunc_08();
    unk_44 = 0;
    unk_4c = NULL;
    unk_50 = 0;
    unk_51 = 0;
    unk_58 = 0;
    func_020159ac();
    func_02015398(this);
}

Unk_020d7714::~Unk_020d7714() {
}

Unk_020d7714::Unk_020d7714() {
    unk_7a = 0xfff1;
    unk_44 = 0;
    unk_48 = NULL;
    unk_4c = NULL;
    unk_58 = 0;
    unk_60 = 0xc;
    func_02015398(this);
}

// ---------------------------------------------------------------------------------------------------------------------

void Unk_02015b8c::func_02015b8c(Unk_02015b8c_Scene *scene) {
    s32 r = func_02015e48(0);
    s32 k = 0;
    switch (r) {
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x51:
    case 0x53:
    case 0x55:
    case 0x57:
    case 0x59:
    case 0x5b:
    case 0x5d:
    case 0x5f:
    case 0x61:
    case 0x63:
    case 0x65:
    case 0x67:
    case 0x69:
    case 0x6e:
    case 0x70:
    case 0x72:
    case 0x75:
    case 0x77:
    case 0x79:
    case 0x7b:
    case 0x7c:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x84:
    case 0x86:
    case 0x88:
    case 0x8a:
    case 0x8c:
    case 0x8d:
    case 0x8f:
    case 0x91:
    case 0x93:
    case 0x94:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9c:
    case 0x9f:
    case 0xa1:
    case 0xa3:
    case 0xa5:
    case 0xa7:

    case 0x144:
        k = 2;
        break;
    case 0x46:
    case 0x48:
    case 0x4c:
    case 0x4e:
    case 0x50:
    case 0x52:
    case 0x54:
    case 0x56:
    case 0x5a:
    case 0x60:
    case 0x62:
    case 0x64:
    case 0x68:
    case 0x6c:
    case 0x6d:
    case 0x71:
    case 0x76:
    case 0x78:
    case 0x83:
    case 0x85:
    case 0x87:
    case 0x8b:
    case 0x96:
    case 0x9b:
    case 0x9d:
    case 0x9e:
    case 0xa0:
    case 0xa2:
    case 0xa4:
    case 0xa8:
    case 0xe6:
    case 0xea:
        k = 1;
        break;
    }
    func_0201a160(SCENE_AT(scene, 0x418), k);
}

void Unk_02015b8c::func_02015d2c(Unk_02015b8c_Scene *scene) {
    if (func_02015fc0()) {
        if (func_0201a15c(SCENE_AT(scene, 0x418)) < 2) {
            if (func_0201a164(SCENE_AT(scene, 0x418))) {
                if (unk_10 != 0) {
                    if (func_020538f0(SCENE_AT(scene, 0xec)) == 0) {
                        goto tail;
                    }
                }
                unk_0c = func_0201a140();
                s32 a = func_02015de4(unk_0c);
                s32 b = func_02015dd8(unk_0c);
                func_02015ed8(scene, a, b);
                unk_10 = 1;
            } else if (unk_10 == 1) {
                if (func_020538f0(SCENE_AT(scene, 0xec)) != 0) {
                    func_02015ec8(scene);
                    unk_10 = 0;
                }
            }
        } else if (unk_10 == 1) {
            func_02015ec8(scene);
            unk_10 = 0;
        }
    }
tail:
    if (unk_18 == 0) {
        func_02015df0(scene);
    }
}

s32 Unk_02015b8c::func_02015dd8(u32 k) {
    s32 r = 7;
    if (k == 1) {
        r = 0xc;
    }
    return r;
}

s32 Unk_02015b8c::func_02015de4(u32 k) {
    s32 r = 0;
    if (k == 1) {
        r = 6;
    }
    return r;
}

void Unk_02015b8c::func_02015df0(Unk_02015b8c_Scene *scene) {
    s32 v = *(s32 *)SCENE_AT(scene, 0x98);
    if (v == 0) {
        unk_08 = 0x1000;
    } else if (*func_0201a8cc(SCENE_AT(scene, 0x350)) == 0) {
        unk_08 = 0x1000;
    } else {
        unk_08 = func_01ffcb0c(v, unk_14);
    }
    if (unk_08 <= *(s32 *)SCENE_AT(scene, 0x18c)) {
        *(s32 *)SCENE_AT(scene, 0x198) = unk_08;
    }
}

s32 Unk_02015b8c::func_02015e48(u32 idx) {
    if (func_020820a0(this, idx) != NULL) {
        return func_0205c240(func_020820a0(this, idx));
    }
    return 0x144;
}

BOOL Unk_02015b8c::func_02015e74(Unk_02015b8c_Scene *scene) {
    if (func_02056654(SCENE_AT(scene, 0x188)) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02015b8c::func_02015e94(Unk_02015b8c_Scene *scene, u32 c, u32 d, u32 e) {
    func_0201610c(this, scene, c, d, 0, *(u32 *)SCENE_AT(scene, 0x198), (*(u32 *)SCENE_AT(scene, 0x190) << 4) >> 16, e);
}

void Unk_02015b8c::func_02015ec4(u8 v) {
    unk_18 = v;
}

void Unk_02015b8c::func_02015ec8(Unk_02015b8c_Scene *scene) {
    func_020538a8(SCENE_AT(scene, 0xec), 0, 0);
}

void Unk_02015b8c::func_02015ed8(Unk_02015b8c_Scene *scene, u32 a, u32 b) {
    u32 r1 = func_02015f64();
    if (r1 != 0) {
        func_02053900(SCENE_AT(scene, 0xec), r1, 0, 1, 0x1000, a, b, 0);
        s32 t = func_0205c57c(0x143);
        if (t < 4) {
            u32 n = func_0205c5d0();
            for (u32 i = 0; i < n; i++) {
                u32 x = func_0205c5ac(t, i);
                func_02053878(SCENE_AT(scene, 0xec), x, func_0205c588(t, i));
            }
        } else {
            func_02015ec8(scene);
        }
    } else {
        func_02015ec8(scene);
    }
}

u32 Unk_02015b8c::func_02015f64() {
    u32 r = 0;
    if (func_02015fc0()) {
        void *p = func_020820a0(this, 2);
        if (p != NULL) {
            r = func_021065f8(func_021065dc(func_0205c254(p)), r);
        }
    }
    return r;
}

void Unk_02015b8c::func_02015f9c() {
    void *p = func_020820a0(this, 2);
    if (p != NULL) {
        func_0205c2dc(p, 0x143, 0, 0);
    }
}

BOOL Unk_02015b8c::func_02015fc0() {
    if (func_02015e48(2) == 0x143) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02015b8c::func_02015d24() {
    return func_0208211c(this);
}
