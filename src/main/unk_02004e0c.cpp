#include "types.h"

struct Unk_02005294_Vec3 {
    s32 x, y, z;
};

// 0x30-byte record, global copy at data_021cb69c
struct Unk_021cb69c {
    union {
        struct {
            s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20;
            s32 unk_24, unk_28, unk_2c;
        };
        s32 unk_a[12];
    };
};

class Unk_020d6df4;
struct Unk_020050e0;

extern "C" {
void func_0203ee38(Unk_02005294_Vec3 *dst, Unk_02005294_Vec3 *src);
s32 func_0203eeac(Unk_02005294_Vec3 *out, Unk_02005294_Vec3 *in);
s32 func_0203edc0();
s32 func_0203ef38(Unk_02005294_Vec3 *out, Unk_02005294_Vec3 *in);
void func_01ffb498(s32 *out, s32 a, s32 b);
void func_01ffb4b4(s32 *out, s32 a, s32 b);
void func_01ffb56c(s32 *a, s32 *b, s32 *out);
void func_020553f8(void *obj, u8 v);
void func_02053f08(void *obj, u32 v);
void func_020553cc(void *obj, Unk_021cb69c *out, u32 idx);
void func_0205553c(void *obj, void *v);
s32 func_0205d7f8(void *obj, u32 v);
s32 func_0205d494(void *obj);
void func_0205e014(void *a, void *b);
Unk_021cb69c func_0205dfb8(void *obj, u32 mode);
void func_020abbcc(Unk_02005294_Vec3 *pos, s32 a);
void func_0205e120(void *obj);
void func_02010ed8(s32 a);
BOOL func_020729bc(void *a, s32 b);
s32 func_02030814(s32 a);
void func_02003e80(void *a, void *b);
void func_02003df4(void *a, void *b);
void func_02053fcc(void *a, Unk_020050e0 *b);
void func_02054594(void *a, Unk_020050e0 *b, u32 c);
void func_02054628(Unk_020050e0 *a, u32 b);
void func_02054048(void *a, Unk_020050e0 *b);
void func_020050e0(Unk_020050e0 *p);
void func_020050f0(Unk_020050e0 *p);
void func_02005264(Unk_020050e0 *p);
void func_ov003_022053e4(void *);
void func_ov003_02205574(void *);
void func_ov003_022055e4(void *);
void func_ov003_022056c8(void *);
void func_ov003_02205744(void *);
}

extern u8 data_020e416c;
extern s16 data_02135f44[];
extern void *data_020cbb18;
extern Unk_021cb69c data_021cb69c;
extern s16 data_02135f44[];

enum Unk_020d6df4_State { Unk_020d6df4_State_0 = 0 };

class Unk_020d6df4 {
public:
    BOOL func_0200ec44(u32 n);
    s32 func_0200f5b0();
    void func_0200fdb4();
    void func_0200fb04();
    void func_0200d64c();
    BOOL func_0200d640();
    void func_020063a0();
    void func_02005f04();
    void func_02010900();
    void func_02005ee0(s32 a, u32 b);
    void func_02005ea0(s32 a);
    void func_02007c5c();
    void func_0200fdf4();
    void func_0200fb30();
    void func_0200f8c0();
    s32 func_0200f870();
    void func_0200ea4c();

    s32 func_02004e0c(s32 x);
    void func_02004e40();
    void func_020050bc();
    void func_02005294();

    void func_02007c98();
    void func_02007ca4();
    void func_02007cb4();
    void func_02007d6c();
    void func_02007e40();
    void func_02008150();
    void func_02008320();
    void func_0200843c();
    void func_0200863c();
    void func_020087ac();
    void func_02008e94();
    void func_02008fa4();
    void func_02009464();
    void func_02009724();
    void func_02009838();
    void func_020098dc();
    void func_02009994();
    void func_02009c3c();
    void func_02009ce8();
    void func_02009e68();
    void func_0200a0ac();
    void func_0200a73c();
    void func_0200b264();
    void func_0200b7c8();
    void func_0200b8a0();
    void func_0200bad0();
    void func_0200bbb0();
    void func_0200bda4();
    void func_0200c304();
    void func_0200c39c();
    void func_0200c5f4();
    void func_0200cb94();
    void func_0200cedc();
    void func_0200cf3c();
    void func_02205c64();
    void func_02205e9c();
    void func_02206094();
    void func_022062b4();
    void func_022065ac();
    void func_022067a8();
    void func_02206a68();
    void func_02206be8();
    void func_02206fc4();
    void func_022072fc();
    void func_0220743c();
    void func_022077c8();
    void func_022079c4();
    void func_02207c44();
    void func_02207d40();
    void func_02207dd4();
    void func_02207f54();
    void func_02208190();
    void func_02208558();
    void func_022087c8();
    void func_02208ae4();
    void func_02208b50();
    void func_02208d50();
    void func_02209068();
    void func_02209408();
    void func_02209634();
    void func_02209964();
    void func_0220a3b4();
    void func_0220a774();
    void func_0220acd0();
    void func_0220ada8();
    void func_0220ae8c();
    void func_0220b24c();
    void func_0220b6d4();
    void func_0220bbd4();
    void func_0220c4f0();
    void func_0220d084();
    void func_0220d608();
    void func_0220dc48();
    void func_0220dd60();
    void func_0220de98();
    void func_0220e034();
    void func_0220e164();
    void func_0220e5c4();
    void func_0220e6e8();
    void func_0220e924();
    void func_0220eb28();
    void func_0220ee38();
    void func_0220f0c4();
    void func_0220f4e4();
    void func_0220f5c8();
    void func_0220f8b8();
    void func_0220fc90();
    void func_0220fe54();
    void func_0221027c();
    void func_02210704();
    void func_022107e0();
    void func_02210d94();
    void func_02210df8();
    void func_02211100();
    void func_022112ec();
    void func_022116b8();
    void func_022118e4();
    void func_022119bc();
    void func_0221ec64();
    void func_0221ee70();
    void func_0221eff8();
    void func_0221f258();
    void func_0221f648();
    void func_0221f714();
    void func_0221f7fc();
    void func_0221f878();
    void func_0221f9a4();
    void func_0221fb58();
    void func_0221fc1c();
    void func_0221fd30();
    void func_0221fe68();
    void func_0221ffa0();
    void func_02220194();
    void func_022203a0();
    void func_022208d0();
    void func_022209e4();
    void func_02220b38();
    void func_02220ccc();
    void func_02220dd8();
    void func_02221058();
    void func_02221250();
    void func_02221448();
    void func_02221514();
    void func_022215e0();
    void func_02221800();
    void func_02221a48();
    void func_02221c90();
    void func_02221ed8();
    void func_022221a0();
    void func_02222328();
    void func_02222444();
    void func_022225b4();
    void func_02222724();
    void func_02222928();
    void func_02222c54();
    void func_02222eac();
    void func_02223648();
    void func_022236f0();
    void func_02223998();
    void func_02223c50();
    void func_02223df4();
    void func_02223eec();
    void func_022240b4();
    void func_022243ec();
    void func_022245f0();
    void func_0226a794();
    void func_0226a890();

    /* 0x000 */ u8 unk_000[0x5c];
    /* 0x05c */ Unk_02005294_Vec3 unk_5c;
    /* 0x068 */ u8 unk_068[0xb0 - 0x68];
    /* 0x0b0 */ u32 unk_b0;
    /* 0x0b4 */ u8 unk_0b4[0x230 - 0xb4];
    /* 0x230 */ u8 unk_230[0x388 - 0x230];
    /* 0x388 */ u8 unk_388[0x3ec - 0x388];
    /* 0x3ec */ Unk_021cb69c unk_3ec;
    /* 0x41c */ u8 unk_41c[0x424 - 0x41c];
    /* 0x424 */ u8 unk_424[4];
    /* 0x428 */ Unk_021cb69c unk_428;
    /* 0x458 */ s16 unk_458;
    /* 0x45a */ s16 unk_45a;
    /* 0x45c */ u8 unk_45c[4];
    /* 0x460 */ u8 unk_460[0x4c4 - 0x460];
    /* 0x4c4 */ Unk_021cb69c unk_4c4;
    /* 0x4f4 */ u8 unk_4f4[0x4fc - 0x4f4];
    /* 0x4fc */ u8 unk_4fc[0x560 - 0x4fc];
    /* 0x560 */ Unk_021cb69c unk_560;
    /* 0x590 */ u8 unk_590[0x598 - 0x590];
    /* 0x598 */ u8 unk_598[4];
    /* 0x59c */ u8 unk_59c[0x604 - 0x59c];
    /* 0x604 */ Unk_021cb69c unk_604;
    /* 0x634 */ Unk_021cb69c unk_634;
    /* 0x664 */ Unk_021cb69c unk_664;
    /* 0x694 */ Unk_021cb69c unk_694;
    /* 0x6c4 */ Unk_02005294_Vec3 unk_6c4;
    /* 0x6d0 */ Unk_02005294_Vec3 unk_6d0;
    /* 0x6dc */ Unk_02005294_Vec3 unk_6dc;
    /* 0x6e8 */ s32 unk_6e8;
    /* 0x6ec */ s32 unk_6ec;
    /* 0x6f0 */ Unk_02005294_Vec3 unk_6f0;
    /* 0x6fc */ s32 unk_6fc;
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 unk_704[0x7ec - 0x704];
    /* 0x7ec */ Unk_020d6df4_State unk_7ec;
    /* 0x7f0 */ Unk_020d6df4_State unk_7f0;
    /* 0x7f4 */ u8 unk_7f4[0x7fc - 0x7f4];
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 unk_800[0x814 - 0x800];
    /* 0x814 */ s32 unk_814;
    /* 0x818 */ u8 unk_818[0x838 - 0x818];
    /* 0x838 */ u8 unk_838[0x87c - 0x838];
    /* 0x87c */ u8 unk_87c[0x8c0 - 0x87c];
    /* 0x8c0 */ s32 unk_8c0;
    /* 0x8c4 */ s32 unk_8c4;
    /* 0x8c8 */ s32 unk_8c8;
    /* 0x8cc */ u8 unk_8cc[0x8e4 - 0x8cc];
    /* 0x8e4 */ u8 unk_8e4;
    /* 0x8e5 */ u8 unk_8e5;
    /* 0x8e6 */ u8 unk_8e6;
    /* 0x8e7 */ u8 unk_8e7;
    /* 0x8e8 */ u8 unk_8e8;
};

struct Unk_020050e0_P {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

struct Unk_020050e0_Q {
    /* 0x00 */ u8 unk_00[0x2c];
    /* 0x2c */ Unk_020d6df4 *unk_2c;
};

struct Unk_020050e0_R {
    /* 0x00 */ u8 unk_00[0x28];
    /* 0x28 */ s32 unk_28[9];
    /* 0x4c */ Unk_02005294_Vec3 unk_4c;
};

struct Unk_020050e0 {
    /* 0x00 */ Unk_020050e0_P *unk_00;
    /* 0x04 */ Unk_020050e0_Q *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
    /* 0x24 */ void (*unk_24)(Unk_020050e0 *);
    /* 0x28 */ u8 unk_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
    /* 0x93 */ u8 unk_93[0xb4 - 0x93];
    /* 0xb4 */ Unk_020050e0_R *unk_b4;
};

s32 Unk_020d6df4::func_02004e0c(s32 x) {
    BOOL b = (data_020e416c == 0);
    if (b || func_0200ec44(3) == 0) {
        return x;
    }
    return func_02030814(0);
}

void Unk_020d6df4::func_02004e40() {
    Unk_021cb69c a;
    Unk_02005294_Vec3 t;
    Unk_02005294_Vec3 t2;
    Unk_02005294_Vec3 v;
    data_021cb69c = *(Unk_021cb69c *)((u8 *)this + 0x294);
    func_020553f8(unk_230, unk_8e5);
    func_02053f08(unk_230, 0);
    func_020553cc(unk_230, (Unk_021cb69c *)((u8 *)this + 0x428 + 0), 0xf);
    func_020553cc(unk_230, &unk_664, 0xe);
    func_020553cc(unk_230, &unk_694, 0xb);
    func_020553cc(unk_230, &a, 7);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    func_0203ee38(&unk_6c4, &t);
    func_020553cc(unk_230, &a, 4);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    func_0203ee38(&unk_6d0, &t);
    func_020553cc(unk_230, &a, 0x10);
    t.x = a.unk_24;
    t.y = a.unk_28;
    t.z = a.unk_2c;
    func_0203ee38(&unk_6dc, &t);
    unk_3ec = unk_428;
    func_020553f8(unk_388, unk_8e5);
    func_0205553c(unk_388, 0);
    if (func_0205d7f8(unk_424, 1) < 0x9e) {
        unk_4c4 = unk_428;
        func_020553f8(unk_460, unk_8e5);
        func_0205553c(unk_460, 0);
    }
    if (func_0205d494(unk_598) != 0x4b) {
        unk_560 = unk_428;
        func_020553f8(unk_4fc, unk_8e5);
        func_0205553c(unk_4fc, 0);
    }
    if (unk_6ec > 0) {
        func_020553cc(unk_230, &a, 1);
        t2.x = a.unk_24;
        t2.y = a.unk_28;
        t2.z = a.unk_2c;
        func_0203ee38(&v, &t2);
        func_020abbcc(&v, unk_6ec);
    }
    if (func_0200ec44(0)) {
        func_0205e014(unk_59c, &unk_664);
        u32 mode;
        switch (func_0200f5b0()) {
        case 4:
        case 10:
            mode = 2;
            break;
        case 1:
        case 5:
        case 9:
            mode = 1;
            break;
        default:
            mode = 0;
            break;
        }
        unk_604 = func_0205dfb8(unk_59c, mode);
        if (func_0200f5b0() == 4) {
            unk_634 = func_0205dfb8(unk_59c, 3);
        }
    }
}

void Unk_020d6df4::func_020050bc() {
    Unk_02005294_Vec3 *p = &unk_5c;
    unk_6f0 = *p;
}

extern "C" void func_020050e0(Unk_020050e0 *p) {
    p->unk_24 = func_02005264;
    p->unk_92 = 1;
}

extern "C" void func_02005264(Unk_020050e0 *p) {
    Unk_020d6df4 *obj = p->unk_04->unk_2c;
    if (obj) {
        func_02054048(obj->unk_230, p);
    }
    p->unk_24 = func_020050f0;
    p->unk_92 = 2;
}

extern "C" void func_020050f0(Unk_020050e0 *p) {
    s32 *pm;
    s32 m2[9];
    s32 m1[9];
    Unk_02005294_Vec3 v1;
    s32 m3[9];
    Unk_021cb69c c;
    Unk_02005294_Vec3 t3;
    Unk_02005294_Vec3 v2;
    Unk_020d6df4 *o;
    Unk_020d6df4 *r6;
    func_02054628(p, 0);
    o = p->unk_04->unk_2c;
    if (p->unk_00->unk_01 == 0xf && o != 0) {
        s16 a = o->unk_458;
        if (a != 0 || o->unk_45a != 0) {
            pm = p->unk_b4->unk_28;
            s32 i = (u16)a >> 4;
            func_01ffb4b4(m1, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
            func_01ffb56c(pm, m1, pm);
            i = (u16)o->unk_45a >> 4;
            func_01ffb498(m2, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
            func_01ffb56c(pm, m2, pm);
        }
    }
    r6 = p->unk_04->unk_2c;
    if (r6) {
        func_02053fcc(r6->unk_230, p);
        if (p->unk_00->unk_01 == 0) {
            if ((u32)(r6->unk_700 - 0x82) <= 1) {
                Unk_020050e0_R *r = p->unk_b4;
                pm = r->unk_28;
                Unk_02005294_Vec3 *pv = &r->unk_4c;
                v1 = *pv;
                v2 = *pv;
                s32 ang = func_0203eeac(&v1, &v2);
                pv->z = v1.z;
                pv->y = v1.y - func_0203edc0();
                if (ang != 0) {
                    s32 i = (u16)ang >> 4;
                    func_01ffb498(m3, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
                    func_01ffb56c(pm, m3, pm);
                }
            }
            func_02054594(r6->unk_230, p, 0);
            c = data_021cb69c;
            t3.x = c.unk_24;
            t3.y = r6->func_02004e0c(c.unk_28);
            t3.z = c.unk_2c;
            func_0203ee38(&r6->unk_6f0, &t3);
        }
    }
    p->unk_24 = func_020050e0;
    p->unk_92 = 3;
}

void Unk_020d6df4::func_02005294() {
    Unk_02005294_Vec3 v;
    u32 flags = unk_b0;
    BOOL f4 = (flags & 4) != 0;
    if (f4) {
        BOOL f2 = (flags & 2) != 0;
        if (f2) {
            Unk_02005294_Vec3 *p = &unk_5c;
            v = *p;
            unk_6c4 = unk_6d0 = unk_6dc = unk_6f0 = *p;
            func_0203ef38(&v, &v);
            unk_664.unk_24 = unk_694.unk_24 = unk_604.unk_24 = unk_634.unk_24 = v.x;
            unk_664.unk_28 = unk_694.unk_28 = unk_604.unk_28 = unk_634.unk_28 = v.y;
            unk_664.unk_2c = unk_694.unk_2c = unk_604.unk_2c = unk_634.unk_2c = v.z;
        }
    }
    func_0200fdb4();
    func_0200fb04();
    void *game = data_020cbb18;
    if (func_020729bc(game, unk_7fc)) {
        func_0200d64c();
        if (!func_0200d640()) {
            unk_8e6 = 0;
        }
    } else if (!func_0200ec44(0x10)) {
        func_020063a0();
    }
    func_02005f04();
    func_0205e120(unk_59c);
    unk_8c0 = 0;
    unk_8c4 = 0;
    unk_8c8 = 0;
    static void (Unk_020d6df4::*tbl[147])() = {
        &Unk_020d6df4::func_0200cf3c,
        &Unk_020d6df4::func_0200cedc,
        &Unk_020d6df4::func_0200cb94,
        &Unk_020d6df4::func_0200c5f4,
        &Unk_020d6df4::func_0200c39c,
        &Unk_020d6df4::func_0200c304,
        &Unk_020d6df4::func_022119bc,
        &Unk_020d6df4::func_0200bda4,
        &Unk_020d6df4::func_022245f0,
        &Unk_020d6df4::func_022243ec,
        &Unk_020d6df4::func_022240b4,
        &Unk_020d6df4::func_02223eec,
        &Unk_020d6df4::func_02223df4,
        &Unk_020d6df4::func_02223c50,
        &Unk_020d6df4::func_02223998,
        &Unk_020d6df4::func_022236f0,
        &Unk_020d6df4::func_0200bbb0,
        &Unk_020d6df4::func_022118e4,
        &Unk_020d6df4::func_02223648,
        &Unk_020d6df4::func_0200bad0,
        &Unk_020d6df4::func_0200b8a0,
        &Unk_020d6df4::func_0200b7c8,
        &Unk_020d6df4::func_022116b8,
        &Unk_020d6df4::func_022112ec,
        &Unk_020d6df4::func_0200b264,
        &Unk_020d6df4::func_0200a73c,
        &Unk_020d6df4::func_0200a0ac,
        &Unk_020d6df4::func_02009e68,
        &Unk_020d6df4::func_02222eac,
        &Unk_020d6df4::func_02222c54,
        &Unk_020d6df4::func_02222928,
        &Unk_020d6df4::func_02222724,
        &Unk_020d6df4::func_022225b4,
        &Unk_020d6df4::func_02222444,
        &Unk_020d6df4::func_02222328,
        &Unk_020d6df4::func_022221a0,
        &Unk_020d6df4::func_02221ed8,
        &Unk_020d6df4::func_02221c90,
        &Unk_020d6df4::func_02221a48,
        &Unk_020d6df4::func_02221800,
        &Unk_020d6df4::func_022215e0,
        &Unk_020d6df4::func_02221514,
        &Unk_020d6df4::func_02221448,
        &Unk_020d6df4::func_02221250,
        &Unk_020d6df4::func_02221058,
        &Unk_020d6df4::func_02220dd8,
        &Unk_020d6df4::func_02220ccc,
        &Unk_020d6df4::func_02220b38,
        &Unk_020d6df4::func_02009ce8,
        &Unk_020d6df4::func_02009c3c,
        &Unk_020d6df4::func_02009994,
        &Unk_020d6df4::func_020098dc,
        &Unk_020d6df4::func_02009838,
        &Unk_020d6df4::func_02009724,
        &Unk_020d6df4::func_022209e4,
        &Unk_020d6df4::func_022208d0,
        &Unk_020d6df4::func_02211100,
        &Unk_020d6df4::func_02210df8,
        &Unk_020d6df4::func_02210d94,
        &Unk_020d6df4::func_022107e0,
        &Unk_020d6df4::func_02210704,
        &Unk_020d6df4::func_0221027c,
        &Unk_020d6df4::func_0220fe54,
        &Unk_020d6df4::func_02009464,
        &Unk_020d6df4::func_022203a0,
        &Unk_020d6df4::func_02220194,
        &Unk_020d6df4::func_0221ffa0,
        &Unk_020d6df4::func_0221fe68,
        &Unk_020d6df4::func_0221fd30,
        &Unk_020d6df4::func_0220fc90,
        &Unk_020d6df4::func_0220f8b8,
        &Unk_020d6df4::func_0220f5c8,
        &Unk_020d6df4::func_0220f4e4,
        &Unk_020d6df4::func_0220f0c4,
        &Unk_020d6df4::func_0220ee38,
        &Unk_020d6df4::func_0220eb28,
        &Unk_020d6df4::func_0220e924,
        &Unk_020d6df4::func_0220e6e8,
        &Unk_020d6df4::func_0220e5c4,
        &Unk_020d6df4::func_0220e164,
        &Unk_020d6df4::func_0220e034,
        &Unk_020d6df4::func_0220de98,
        &Unk_020d6df4::func_0220dd60,
        &Unk_020d6df4::func_0220dc48,
        &Unk_020d6df4::func_0220d608,
        &Unk_020d6df4::func_0220d084,
        &Unk_020d6df4::func_0220c4f0,
        &Unk_020d6df4::func_0220bbd4,
        &Unk_020d6df4::func_0220b6d4,
        &Unk_020d6df4::func_0220b24c,
        &Unk_020d6df4::func_0220ae8c,
        &Unk_020d6df4::func_0220ada8,
        &Unk_020d6df4::func_0220acd0,
        &Unk_020d6df4::func_0220a774,
        &Unk_020d6df4::func_0220a3b4,
        &Unk_020d6df4::func_02209964,
        &Unk_020d6df4::func_02209634,
        &Unk_020d6df4::func_02209408,
        &Unk_020d6df4::func_02209068,
        &Unk_020d6df4::func_02208d50,
        &Unk_020d6df4::func_02208b50,
        &Unk_020d6df4::func_02208ae4,
        &Unk_020d6df4::func_022087c8,
        &Unk_020d6df4::func_02208558,
        &Unk_020d6df4::func_02208190,
        &Unk_020d6df4::func_02207f54,
        &Unk_020d6df4::func_02207dd4,
        &Unk_020d6df4::func_02207d40,
        &Unk_020d6df4::func_02207c44,
        &Unk_020d6df4::func_022079c4,
        &Unk_020d6df4::func_022077c8,
        &Unk_020d6df4::func_02008fa4,
        &Unk_020d6df4::func_02008e94,
        &Unk_020d6df4::func_0220743c,
        &Unk_020d6df4::func_022072fc,
        &Unk_020d6df4::func_02206fc4,
        &Unk_020d6df4::func_02206be8,
        &Unk_020d6df4::func_02206a68,
        &Unk_020d6df4::func_020087ac,
        &Unk_020d6df4::func_0200863c,
        &Unk_020d6df4::func_022067a8,
        &Unk_020d6df4::func_0200843c,
        &Unk_020d6df4::func_0221fc1c,
        &Unk_020d6df4::func_0221fb58,
        &Unk_020d6df4::func_0221f9a4,
        &Unk_020d6df4::func_0221f878,
        &Unk_020d6df4::func_0221f7fc,
        &Unk_020d6df4::func_0221f714,
        &Unk_020d6df4::func_022065ac,
        &Unk_020d6df4::func_022062b4,
        &Unk_020d6df4::func_02206094,
        &Unk_020d6df4::func_02008320,
        &Unk_020d6df4::func_02008150,
        &Unk_020d6df4::func_02007e40,
        &Unk_020d6df4::func_02007d6c,
        &Unk_020d6df4::func_0226a890,
        &Unk_020d6df4::func_0226a794,
        &Unk_020d6df4::func_02205e9c,
        &Unk_020d6df4::func_0221f648,
        &Unk_020d6df4::func_0221f258,
        &Unk_020d6df4::func_0221eff8,
        &Unk_020d6df4::func_0221ee70,
        &Unk_020d6df4::func_0221ec64,
        &Unk_020d6df4::func_02205c64,
        &Unk_020d6df4::func_02007cb4,
        &Unk_020d6df4::func_02007ca4,
        &Unk_020d6df4::func_02007c98
    };
    void (Unk_020d6df4::*fn)() = tbl[unk_7ec];
    func_02010900();
    (this->*fn)();
    func_02010ed8(unk_7fc);
    s32 state = unk_7ec;
    func_02005ee0(state, 0);
    if (func_020729bc(game, unk_7fc)) {
        func_02005ea0(state);
    }
    func_02007c5c();
    func_0200fdf4();
    func_0200fb30();
    if (func_020729bc(game, unk_7fc)) {
        BOOL z = (data_020e416c == 0);
        if (z) {
            func_ov003_02205744(this);
            func_ov003_022056c8(this);
            func_ov003_022055e4(this);
            func_ov003_022053e4(this);
        }
        if (unk_8e4 != 0) {
            unk_8e4--;
        }
    }
    if (unk_8e8 != 0) {
        unk_8e8--;
    }
    func_0200f8c0();
    unk_814 = func_0200f870();
    if (func_020729bc(game, unk_7fc)) {
        BOOL z = (data_020e416c == 0);
        if (z) {
            func_ov003_02205574(this);
        }
    }
    func_0200ea4c();
    if (func_0200ec44(0xa)) {
        if (unk_8c0 == 0 && unk_8c4 == 0 && unk_8c8 == 0) {
            unk_8c0 = unk_5c.x;
            unk_8c4 = unk_5c.y;
            unk_8c8 = unk_5c.z;
        }
        if (func_0200ec44(0x19)) {
            func_02003e80(unk_838, &unk_8c0);
        } else {
            func_02003df4(unk_87c, &unk_8c0);
        }
    }
    if (unk_7f0 != unk_7ec) {
        unk_7f0 = unk_7ec;
    }
}
