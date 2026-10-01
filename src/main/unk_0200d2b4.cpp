#include "types.h"

struct Unk_0200d560 {
    u32 unk_00;
    u8 unk_04;
    void func_0200d560(u32 v);
};

struct Unk_0200d5b4 {
    u32 unk_00;
    void func_0200d5b4(u32 v);
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 unk_00[0xc];
    Unk_0200d5b4 unk_0c;
    u8 unk_10[0x1c - 0x10];
};

struct Unk_0200d53c_Item {
    u8 pad_00[0xc];
    u32 unk_0c;
};

struct Unk_0200d64c_Xyz { s32 x, y, z; Unk_0200d64c_Xyz() {} };
class Unk_020d6df4;

extern "C" {
void func_0205c384(void *p, u32 v);
void *func_0205c694(void *p);
BOOL func_0205c6a8(void *p);
void func_02054b70(void *p, void *v);
void func_02054b38(void *p, void *v);
void func_02053f8c(void *p, void *v);
void func_02054710(void *p);
void func_020554a0(void *p, void (*f)(void *), u32 a, u32 b, void *c, u32 d);
void func_02055df0(void *p);
s32 func_0209522c(s32 a);
void func_0205ee10(void *p, u32 v);
void *func_0205edfc(void *p);
void func_02005264(void *p);
BOOL func_020729bc(void *a, s32 b);
s32 func_020b50e8();
s32 func_02095670(u16 *a, s32 *b, s32 *c, s32 d, s32 e);
BOOL func_020955e8(u16 *a, s32 b, s32 c);
s32 func_02097520(s32 a);
u16 *func_02098744();
void func_0205e24c(void *p, u16 *q, s32 r);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_0205e120(void *p);
s32 func_02063c18(s16 a);
s32 func_02063c54(s16 a);
s32 func_0203bc68(void *p);
s32 func_020b4880();
void func_020b78b8();
s32 func_020eaf18();
void func_020e9b70();
void func_0203d76c();
BOOL func_0203d4d4();
BOOL func_0203d978();
u8 *func_020b50b4();
s32 func_020b60b0(u8 *obj, Unk_0200d64c_Xyz *out);
BOOL func_020b6080(u8 *obj, Unk_0200d64c_Xyz *out, s32 *a, u8 *b);
s32 func_020b6048(u8 *obj, s32 *pa, u8 *pb);
u16 *func_0204eba0(void *a, Unk_0200d64c_Xyz *b, u32 c);
void func_0204ee10(s32 *x, s32 *y, Unk_0200d64c_Xyz *v);
void func_0204edd8(Unk_0200d64c_Xyz *a, Unk_0200d64c_Xyz *b);
s32 func_0203bc7c(void *p);
void func_0203a124(s32 *a, s32 *b);
s32 func_020e9688(Unk_0200d64c_Xyz *v);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffc538(s32 a);
struct Unk_0200d64c_Keys { u16 a; u16 b; s16 c; };
extern Unk_0200d64c_Keys data_021f47d8;
extern u16 data_021f4778;
extern u16 data_021f477c;
extern u8 data_021c3cc0;
extern s32 data_021c5384;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern void *data_021c47c4;
extern u8 data_020d5e50[];
extern u8 data_020d5e34[];
extern u8 data_020d5e48[];
extern s16 data_02135f44[];
extern u8 data_020c6190[];
extern u8 data_020c61b8[];
extern u8 data_020c61b9[];
extern void *data_020cbb18;
extern void *data_021c3070;
}

class Unk_020d6df4 {
public:
    typedef Unk_0200d64c_Xyz Xyz;
    BOOL func_0200d2b4();
    void func_0200d3f0(u32 a);
    void func_0200d64c();
    Xyz func_0200f3ec(Xyz *a, s16 *b, void *c);
    BOOL func_0200f5b0();
    BOOL func_0200e764();
    void func_0200ec1c(s32 id);
    void func_0200d538();
    void func_0200d53c(Unk_0200d53c_Item *item);
    BOOL func_0200d568(u32 a, u32 b, u32 c);
    u8 func_0200d5b8();
    s32 func_0200d5c4();
    s32 func_0200d5e0();
    s16 func_0200d5fc();
    s16 func_0200d634();
    s32 func_0200d640();

    BOOL func_0200ec44(s32 id);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_020105ec();
    void func_02010a58(u16 *p);
    u32 func_0200e248(Unk_0200e2c0 *p);

    u8 pad_000[0x5c];
    Xyz unk_5c;
    Xyz unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x130 - 0x90];
    s32 unk_130;
    s16 unk_134;
    u8 unk_136;
    u8 unk_137;
    s32 unk_138;
    u8 unk_13c;
    u8 unk_13d;
    u8 pad_13e[2];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    Xyz unk_154;
    u8 pad_160[9];
    u8 unk_169;
    u8 pad_16a[2];
    s32 unk_16c;
    u8 pad_170[0x230 - 0x170];
    u8 unk_230[0x384 - 0x230];
    u8 unk_384;
    u8 unk_385;
    u8 pad_386[0x59c - 0x386];
    u8 unk_59c[0x6f0 - 0x59c];
    Xyz unk_6f0;
    u8 unk_6fc;
    u8 unk_6fd;
    u8 pad_6fe[0x70c - 0x6fe];

    u8 unk_70c[0x738 - 0x70c];
    u8 unk_738;
    u8 pad_739[0x7d0 - 0x739];
    Unk_0200d560 unk_7d0;
    u8 pad_7d8[0x7ec - 0x7d8];
    s32 unk_7ec;
    s32 unk_7f0;
    s32 unk_7f4;
    u8 pad_7f8[4];
    s32 unk_7fc;
    u8 pad_800[0xc88 - 0x800];
    s32 unk_c88;
    u8 pad_c8c[4];
    s32 unk_c90;
};

void Unk_0200d560::func_0200d560(u32 v) {
    unk_00 = v;
    unk_04 = 0;
}

void Unk_0200d5b4::func_0200d5b4(u32 v) {
    unk_00 = v;
}

BOOL Unk_020d6df4::func_0200d2b4() {
    BOOL result = FALSE;
    Unk_0200d560 *p = &unk_7d0;
    if (p->unk_04 == 0) {
        BOOL a = func_0205c6a8(&unk_385);
        BOOL b = unk_c90 == 2;
        BOOL c = unk_c88 == 2;
        if (a && b && c) {
            func_02054b70(unk_230, func_0205c694(&unk_385));
            func_0205ee10(&unk_384, data_020c6190[func_0209522c(unk_7fc)]);
            func_02053f8c(unk_230, func_0205edfc(&unk_384));
            func_02054b38(unk_230, func_0205edfc(&unk_384));
            func_020105ec();
            s32 i = func_0209522c(unk_7fc) * 2;
            func_0205c384(&unk_6fc, data_020c61b8[i]);
            func_0205c384(&unk_6fd, data_020c61b9[i]);
            func_020103b4(0, 0, 0);
            func_02054710(unk_230);
            func_020554a0(unk_230, func_02005264, 6, 1, this, 0);
            func_02055df0(unk_70c);
            func_02055df0(&unk_738);
            result = TRUE;
            p->unk_04++;
        }
    }
    return result;
}

void Unk_020d6df4::func_0200d3f0(u32 a) {
    void *r6 = data_020cbb18;
    u16 arr[4];
    s32 vx, vz;
    if (func_020729bc(r6, unk_7fc) || (a != 2 && a != 0x8b)) {
        unk_7f4 = 1;
    }
    if (!func_020729bc(r6, unk_7fc)) {
        s32 t = func_020b50e8();
        if (!func_0200ec44(0x10) && t != 0x2e && t != 0xd && t != 0xe && t != 0xc && t != 0x2f) {
            if (func_02095670(arr, &vx, &vz, -1, unk_7fc)) {
                s32 *e = (s32 *)&unk_5c;
                s32 *d = (s32 *)&unk_68;
                d[0] = vx;
                e[0] = d[0];
                d[2] = vz;
                e[2] = d[2];
            }
            if (func_020955e8(&arr[1], -1, unk_7fc)) {
                func_02010a58(&arr[1]);
            }
        }
    }
    if (func_0200ec44(0)) {
        s32 t = func_02097520(unk_7fc);
        arr[2] = *func_02098744();
        func_0205e24c(unk_59c, &arr[2], t);
        BOOL ok;
        if (func_0204b2d4(&arr[2])) {
            arr[3] = 0xfff1;
            ok = func_0204b25c(&arr[2]) == func_0204b25c(&arr[3]);
        } else {
            ok = arr[2] == 0xfff1;
        }
        if (!ok) {
            func_020103b4(0, 0, 0);
            func_0205e120(unk_59c);
        }
    }
}

void Unk_020d6df4::func_0200d538() {
}

void Unk_020d6df4::func_0200d53c(Unk_0200d53c_Item *item) {
    unk_7d0.func_0200d560(item->unk_0c);
    unk_7f4 = 0;
}

BOOL Unk_020d6df4::func_0200d568(u32 a, u32 b, u32 c) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(0, b, c);
    m.unk_0c.func_0200d5b4(a);
    unk_7f0 = 0;
    u32 r = func_0200e248(&m);
    return r;
}

u8 Unk_020d6df4::func_0200d5b8() {
    return unk_137;
}

s32 Unk_020d6df4::func_0200d5c4() {
    return func_02063c18((s16)(func_0200d5fc() - unk_8e));
}

s32 Unk_020d6df4::func_0200d5e0() {
    return func_02063c54((s16)(func_0200d5fc() - unk_8e));
}

s16 Unk_020d6df4::func_0200d5fc() {
    s16 r = func_0200d634();
    if (unk_16c != 2 && data_021c3070) {
        r = r + func_0203bc68(data_021c3070);
    }
    return r;
}

s16 Unk_020d6df4::func_0200d634() {
    return unk_134;
}

s32 Unk_020d6df4::func_0200d640() {
    return unk_130;
}

static inline BOOL Unk_0200d64c_InRange(u16 h) {
    if (h >= 0xfc && h <= 0xfd) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_0200d64c_IsTwo() {
    return data_021c3cc0 == 2;
}

static inline BOOL Unk_0200d64c_Both() {
    return data_021ef5d0 && data_021ef5cc;
}

void Unk_020d6df4::func_0200d64c() {
    s32 flag = 0;
    s32 mode = unk_16c;
    s32 v4 = 0;
    s32 v8 = 0;
    s32 vc = 0;
    s32 v10 = unk_13d;
    s32 v14 = 0;
    s32 sp18, sp1c;
    u32 sp20;
    s32 sp24, sp28, sp2c;
    u8 sp30;
    s32 sp34;
    s32 ax, ay, bx, by;
    s32 sp48, sp4c, len;
    Xyz p50;
    Xyz r5c = func_0200f3ec(&unk_5c, &unk_8e, data_020d5e50);
    Xyz p68;
    Xyz pv[4];
    BOOL got = FALSE;
    unk_13c = 0;
    unk_140 = 0;
    unk_169 = 0xff;
    if (Unk_0200d64c_IsTwo()) {
    if (func_0200ec44(0xb) || func_0200ec44(0x1b)) {
        unk_130 = 0;
        unk_136 = 0;
        unk_137 = 0;
        unk_138 = 0;
        unk_13d = 0;
        unk_144 = 0;
        unk_154 = r5c;
        if (func_0200ec44(0x1b)) {
            if (func_020b4880() == 1) {
                if (!func_0200e764()) {
                    func_0200ec1c(0x1b);
                    func_020b78b8();
                    if (*(s32 *)((u8 *)data_020cbb18 + 0x64) == 0) {
                        if ((u8)(func_020eaf18() + 0xfd) <= 1) {
                            func_020e9b70();
                        }
                    }
                    if (unk_7ec == 2 || unk_7ec == 0x83 || unk_7ec == 0x28 || unk_7ec == 8) {
                        func_0203d76c();
                    }
                }
            }
        }
    } else {
    if (data_021c5384 == 0) {
        vc = func_020b60b0(func_020b50b4(), &p50);
        if (func_020b6080(func_020b50b4(), &p68, &sp34, &sp30)) {
            got = TRUE;
            {
                switch (sp34) {
                case 0:
                    break;
                case 1:
                    if (Unk_0200d64c_Both()) {
                        flag = 1;
                        r5c = p50;
                    }
                    break;
                case 2: case 3: case 6: case 7: case 9: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
                    if (Unk_0200d64c_Both()) {
                        v4 = 1;
                        v8 = func_020b6048(func_020b50b4(), 0, 0);
                        r5c = p50;
                    }
                    break;
                case 5:
                    if (Unk_0200d64c_Both()) {
                        unk_140 = 1;
                        if (func_0200f5b0() != 1) {
                            {
                                s32 tx = *(volatile s32 *)&p68.x;
                                Xyz *q = (Xyz *)&unk_148;
                                q->x = tx;
                                unk_14c = p68.y;
                                unk_150 = p68.z;
                                r5c = *q;
                            }
                        } else {
                            u16 *hp = func_0204eba0(data_021c47c4, &p68, 0);
                            BOOL is = FALSE;
                            u16 h = *hp;
                            if (h < 0xfc || h > 0xfd) {
                            } else {
                                is = TRUE;
                            }
                            if (is) {
                                ax = 0; ay = 0; bx = 0; by = 0;
                                func_0204ee10(&ax, &ay, &unk_5c);
                                func_0204ee10(&bx, &by, &p50);
                                if (ax != bx || ay != by) {
                                    {
                                        s32 tx = *(volatile s32 *)&p50.x;
                                        Xyz *q = (Xyz *)&unk_148;
                                        q->x = tx;
                                        unk_14c = p50.y;
                                        unk_150 = p50.z;
                                        r5c = *q;
                                    }
                                } else {
                                    {
                                        s32 tx = *(volatile s32 *)&p68.x;
                                        Xyz *q = (Xyz *)&unk_148;
                                        q->x = tx;
                                        unk_14c = p68.y;
                                        unk_150 = p68.z;
                                        r5c = *q;
                                    }
                                }
                            } else {
                                {
                                    s32 tx = *(volatile s32 *)&p68.x;
                                    Xyz *q = (Xyz *)&unk_148;
                                    q->x = tx;
                                    unk_14c = p68.y;
                                    unk_150 = p68.z;
                                    r5c = *q;
                                }
                            }
                        }
                    }
                    break;
                case 4:
                    if (Unk_0200d64c_Both()) {
                        unk_140 = 2;
                        {
                            s32 tx = *(volatile s32 *)&p68.x;
                            Xyz *q = (Xyz *)&unk_148;
                            q->x = tx;
                            unk_14c = p68.y;
                            unk_150 = p68.z;
                            r5c = *q;
                        }
                    }
                    break;
                case 8:
                case 10:
                    if (Unk_0200d64c_Both()) {
                        v14 = 1;
                        func_0204edd8(&p68, &p68);
                        r5c = p68;
                    }
                    unk_169 = sp30;
                    break;
                }
            }
        }
    }
    if (flag != 0 || (func_0203d4d4() && vc == 0)) {
        unk_130 = 0;
        unk_136 = 0;
        v10 = 1;
        unk_13c = 1;
        r5c = func_0200f3ec(&unk_5c, &unk_8e, data_020d5e34);
        mode = 2;
    } else {
        unk_13c = flag;
        if (unk_16c == 2) {
            mode = vc ? 2 : 1;
        } else if (data_021f47d8.a & 0x2ff3) {
            mode = 1;
        } else if (vc) {
            mode = 2;
        }
        if (mode == 2) {
            if (unk_7ec >= 0x1d && unk_7ec <= 0x23) {
                sp20 = (u32)data_021c3070;
                pv[1].x = unk_6f0.x;
                pv[1].y = unk_6f0.y;
                pv[1].z = unk_6f0.z;
                sp24 = ((u16)(s16)(0x4000 - func_0203bc7c((void*)sp20)) >> 4) * 2;
                sp2c = func_01ffc5a4(func_01ffcb0c(0x1266, data_02135f44[sp24]), data_02135f44[sp24 + 1]);
                sp28 = ((u16)func_0203bc68((void*)sp20) >> 4) * 2;
                pv[2].x = pv[1].x - func_01ffcb0c(sp2c, data_02135f44[sp28]);
                s32 t = func_01ffcb0c(sp2c, data_02135f44[sp28 + 1]);
                pv[2].z = pv[1].z - t;
                pv[0].x = p50.x - pv[2].x;
                pv[0].z = p50.z - pv[2].z;
                len = func_020e9688(&pv[0]);
            } else {
                Xyz *q6 = &unk_6f0;
                pv[0].x = p50.x - q6->x;
                pv[0].z = p50.z - unk_6f0.z;
                func_0203a124(&sp48, &sp4c);
                sp48 += 0x80;
                sp4c += 0x60;
                pv[3].x = ((u8)data_021f4778 - sp48) << 8;
                pv[3].y = 0;
                pv[3].z = ((u8)data_021f477c - sp4c) << 8;
                len = func_020e9688(&pv[3]);
            }
            s32 res = func_01ffcb0c(len, 0x4f4);
            if (res >= 0x1000) {
                res = 0x1000;
            } else if (res <= 0x19a) {
                res = 0;
            } else {
                s32 t = func_01ffc538(func_01ffc5a4((res + 0x39a) << 12, 0x139a) >> 12);
                sp18 = t << 12;
                for (sp1c = 0; sp1c < 3; sp1c++) {
                    t = func_01ffcb0c(t, sp18) >> 12;
                }
                res = t;
                if (res > 0x1000) {
                    res = 0x1000;
                } else if (res < 0) {
                    res = 0;
                }
            }
            unk_130 = res;
            if (res > 0xc32) {
                flag = 1;
            }
            if (res > 0) {
                unk_134 = func_020e7b98(pv[0].x, pv[0].z);
            }
            if (!got) {
                if (Unk_0200d64c_Both()) {
                    v14 = 1;
                    r5c = p50;
                }
            }
        } else {
            s32 keymask;
            if (func_0203d978() || func_0200ec44(0x13)) {
                keymask = 0x2fff;
            } else {
                keymask = 0x2ff3;
            }
            u32 keys = data_021f47d8.a;
            if (keymask & keys) {
                mode = 1;
            } else {
                mode = unk_16c;
            }
            if ((keys & 2) || (keys & 0x100) || (keys & 0x200)) {
                flag = 1;
            } else {
                flag = 0;
            }
            u32 kb = *(volatile u16 *)&data_021f47d8.b;
            v4 = 1;
            if (!(kb & 1)) {
                v4 = 0;
            }
            unk_13c = v4;
            if (data_021f47d8.a & 1) {
                v10 = 1;
            } else {
                v10 = 0;
                if (data_021f47d8.b & 2) {
                    v14 = 1;
                    r5c = func_0200f3ec(&unk_5c, &unk_8e, data_020d5e48);
                }
            }
            keys = data_021f47d8.a;
            if ((keys & 0x80) || (keys & 0x40) || (keys & 0x10) || (keys & 0x20)) {
                if (flag) {
                    unk_130 = 0x1000;
                } else {
                    unk_130 = 0xc32;
                }
                unk_134 = data_021f47d8.c;
            } else {
                unk_130 = 0;
            }
        }
        unk_136 = flag;
    }
    unk_137 = v4;
    unk_138 = v8;
    unk_13d = v10;
    unk_144 = v14;
    unk_154 = r5c;
    unk_16c = mode;
    }
    }
}
