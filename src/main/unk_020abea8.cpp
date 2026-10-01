// mwcc-flags: -str reuse
#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct Vec3Z2 {
    s32 x, y, z;
    Vec3Z2() {
        x = 0;
        y = 0;
        z = 0x1000;
    }
    ~Vec3Z2();
};

struct Unk_020d094c {
    char *unk_00;
    u8 unk_04, unk_05, unk_06, unk_07;
};

struct Vec3Z {
    s32 x, y, z;
    Vec3Z() {
        x = 0;
        y = 0;
        z = 0;
    }
    ~Vec3Z();
};

struct Col {
    u16 v;
};

struct RGB {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};

struct Unk_020ac0c4_Entry {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15[3];
};

struct Unk_02033914 {
    u8 unk_00[0x40];
};

struct Mtx43 {
    s32 m[12];
};

struct Unk_021ede90 {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10;
};

class Unk_020abea8 {
public:
    void func_020abea8(s32 heap);
    void func_020abed4(Vec3 *pos);
    BOOL func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    Unk_020abea8();
    ~Unk_020abea8();

    /* 0x00 */ Vec3 unk_00;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 *unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 *unk_28;
    /* 0x2c */ Vec3 *unk_2c;
    /* 0x30 */ Unk_020ac0c4_Entry *unk_30;
};

struct Pack {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

struct Bits {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ff8ccc(void);
void func_02110be8(void *p);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
u32 _s32_div_f(u32 a, u32 b);
void *func_020e8608(s32 heap, u32 size);
void func_020e85fc(s32 heap, void *p);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e84f8(void *m, s32 a, s32 b, s32 c);
void func_01ffb94c(void *a, void *b, void *c);
void func_01ffc714(void *a, void *b);
s32 func_02030814(s32 a);
void func_0203eeac(Vec3 *out, Vec3 *in);
Col func_02064cc4(void);
RGB func_02064f2c(void);
s32 func_02064c84(s32 a);
void func_0209cf18(void *p);
extern s32 data_021f482c;
extern s32 data_021c620c;
extern u8 data_021f47e0[];
void *func_020641d8(void *p);
u8 *func_0210629c(void *p);
void func_02055724(void *p, s32 a);
u8 *func_0205588c(void *p, s32 heap);
void func_020e8558(void *p);
void func_020639e8(char *buf, const void *fmt, ...);
u32 _ZN12Unk_02056fd813func_02057100Ei(u8 *base, char *name);
u32 _ZN12Unk_02056fd813func_02057078Ei(u8 *base, char *name);
extern s32 data_021c3070;
extern Vec3 data_021c309c;
extern u8 data_0213c7e0[];
void func_020ac724(void *a, void *b);
u8 func_020ac2e8(Vec3 *p, s32 q, u8 c);
u8 func_020ac2c8(Vec3 *p, s32 q);
u8 func_020ac2d8(Vec3 *p, s32 q);
}

#define REG(a) (*(volatile u32 *)(a))

extern const s32 data_020d0964;
extern const Unk_020d094c data_020d094c[];
extern char data_020e2dec[];
extern char data_020e2df8[];
extern char data_020e2e04[];
extern u8 data_020e2de4;
extern u8 data_020e2de8;

extern s32 data_021edf44;
extern u8 data_021edfbc[];
extern u8 data_021edfe0[];
extern Unk_020ac0c4_Entry data_021ee114[];
extern Unk_020abea8 data_021ee078;
extern Unk_020abea8 data_021ee0ac;
extern Unk_020abea8 data_021ee0e0;
extern Unk_020abea8 data_021ee010;
extern Unk_020abea8 data_021ee044;

struct Unk_020ac500_DictHdr {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
};
struct Unk_020ac500_Dict {
    u8 rev;
    u8 num;
    u16 size;
    u16 pad;
    u16 ofsEntry;
};
struct Unk_020ac500_Tex {
    u8 pad_00[8];
    u32 texKey;
    u8 pad_0c[0x20];
    u32 plttKey;
    u8 pad_30[4];
    u16 ofsPlttDict;
    u8 pad_36[6];
    Unk_020ac500_Dict dict;
};
struct Unk_020ac500_Pltt {
    u16 offset;
    u16 flag;
};
static inline void *Unk_020ac500_Data(const Unk_020ac500_Dict *dict, u32 idx) {
    Unk_020ac500_DictHdr *hdr = (Unk_020ac500_DictHdr *)((u8 *)dict + dict->ofsEntry);
    return &hdr->data[hdr->sizeUnit * idx];
}
static inline u32 *Unk_020ac500_TexData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (u32 *)Unk_020ac500_Data(&tex->dict, idx);
}
static inline Unk_020ac500_Pltt *Unk_020ac500_PlttData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (Unk_020ac500_Pltt *)Unk_020ac500_Data((const Unk_020ac500_Dict *)((u8 *)tex + tex->ofsPlttDict), idx);
}

struct Unk_020ac2e8_V : Vec3 {
    Unk_020ac2e8_V() {}
    ~Unk_020ac2e8_V() {}
};

extern "C" void func_020ac724(void *a, void *b) {
    func_01ffc714(a, b);
    func_01ffc714((u8 *)a + 12, (u8 *)b + 12);
    func_01ffc714((u8 *)a + 24, (u8 *)b + 24);
}

extern "C" void func_020ac500(void *arg) {
    u32 *texData;
    s32 heap = data_021c620c;
    if (arg != 0) {
        data_021edf44 = 0;
        Unk_020ac0c4_Entry *e = data_021ee114;
        void *file = func_020641d8((void *)"/shadow/tex_shadow.nsbtx");
        u8 *res = func_0210629c(file);
        func_02055724(res, 0);
        res = func_0205588c(res, heap);
        func_020e8558(file);
        u32 i;
        for (i = 0; i < 3; i++) {
            char *name = data_020d094c[i].unk_00;
            char buf[36];
            func_020639e8(buf, "%s_pl", name);
            e->unk_00 = 0;
            e->unk_04 = 0;
            e->unk_08 = 0;
            e->unk_00 = res;
            e->unk_14 = data_020d094c[i].unk_06;
            u32 idx1 = _ZN12Unk_02056fd813func_02057100Ei(e->unk_00, name);
            u32 idx2 = _ZN12Unk_02056fd813func_02057078Ei(e->unk_00, buf);
            Unk_020ac500_Tex *tex = (Unk_020ac500_Tex *)e->unk_00;
            texData = Unk_020ac500_TexData(tex, idx1);
            u32 plttOfs = Unk_020ac500_PlttData(tex, idx2)->offset;
            u32 plttKey = (u16)tex->plttKey;
            u32 texParam = *texData;
            u32 texKey = (u16)tex->texKey;
            e->unk_04 = texParam + texKey;
            e->unk_08 = plttOfs + plttKey;
            e->unk_04 |= data_020d094c[i].unk_04 << 18;
            e->unk_04 |= data_020d094c[i].unk_05 << 16;
            e->unk_10 = (*texData >> 26) & 7;
            if (e->unk_10 != 2) {
                e->unk_08 >>= 1;
            }
            e->unk_0c = 1 << (((*texData >> 20) & 7) + 3);
            e->unk_0e = 1 << (((*texData >> 23) & 7) + 3);
            e++;
        }
        static Vec3Z2 v;
        data_021ee078.func_020ac0c4((Vec3 *)&v, 0x119a, 0x119a, 2, 0x2000, 0, heap);
        data_021ee0ac.func_020ac0c4((Vec3 *)&v, 0x1666, 0x1666, 2, 0x2000, 0, heap);
        data_021ee0e0.func_020ac0c4((Vec3 *)&v, 0x2000, 0x2000, 2, 0x2000, 0, heap);
        data_021ee010.func_020ac0c4((Vec3 *)&v, 0x1ccc, 0x1ccc, 0, 0, 0, heap);
        data_021ee044.func_020ac0c4((Vec3 *)&v, 0x555, 0x1000, 0, 0, 0, heap);
    }
}

char data_020e2dec[] = "obj_sdw_fc";
Unk_020abea8 data_021ee078;
Unk_020ac0c4_Entry data_021ee114[3];
u8 data_020e2de8 = 0xe;
Unk_020abea8 data_021ee0ac;
Unk_020abea8 data_021ee0e0;
Unk_020abea8 data_021ee010;
Unk_020abea8 data_021ee044;

extern "C" void func_020ac40c() {
    struct {
        u8 a, b;
    } t;
    func_0209cf18(&t);
    s32 x = (t.a + ((t.b + 6) % 12) * 60) << 12;
    x = func_01ffc5a4(x, 0x2d0000);
    data_021edf44 = func_01ffcb0c((x - 0x800) << 1, 0x1000);
    func_020e8388(data_021f47e0, 0, 0, 0);
    func_020e84f8(data_021f47e0, 0x20000, 0x20000, 0x20000);
    func_01ffb94c(data_021f47e0, data_0213c7e0, data_021edfe0);
    func_020ac724(data_021edfe0, data_021edfbc);
    RGB c1 = func_02064f2c();
    u8 s = c1.b + (c1.r + c1.g);
    u8 r4 = func_01ffcb0c(0x10000, func_01ffc5a4(s << 12, 0x5d000)) >> 12;
    s32 base = func_02064c84(0);
    u8 v = base + r4;
    if (v > 0x1f) {
        v = 0x1f;
    }
    data_020e2de8 = v;
    data_020e2de4 = v;
}

extern "C" void func_020ac3a4() {
    data_021edf44 = 0;
    Unk_020ac0c4_Entry *e = data_021ee114;
    u32 i;
    for (i = 0; i < 3; i++) {
        e->unk_00 = 0;
        e++;
    }
    s32 heap = data_021c620c;
    data_021ee078.func_020abea8(heap);
    data_021ee0ac.func_020abea8(heap);
    data_021ee0e0.func_020abea8(heap);
    data_021ee010.func_020abea8(heap);
    data_021ee044.func_020abea8(heap);
}

extern "C" u8 func_020ac2e8(Vec3 *p, s32 q, u8 r4) {
    if (data_021c3070 != 0) {
        Unk_020ac2e8_V v;
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        s32 d, e;
        s32 pz = p->z;
        if (v.z > pz) {
            d = v.z - pz;
            if (0xb000 < d) {
                r4 = r4 >> 5;
            } else {
                static s32 inv = func_01ffc5a4(0xf80, 0xb000);
                r4 = r4 - (u8)(func_01ffcb0c(func_01ffcb0c(r4 << 12, inv), d) >> 12);
            }
        } else {
            d = pz - v.z;
            if (d > q + 0xc000) {
                return 0;
            }
            e = p->x - v.x;
            if (e < 0) {
                e = -e;
            }
            if (e > q + 0xf000) {
                return 0;
            }
        }
    }
    return r4;
}

char data_020e2df8[] = "obj_sdw_tr";
const Unk_020d094c data_020d094c[3] = {
    {data_020e2e04, 0, 1, 0x3d, 0},
    {data_020e2dec, 0, 1, 0x3a, 0},
    {data_020e2df8, 1, 1, 0x3a, 0},
};
char data_020e2e04[] = "obj_sdw_gr";
s32 data_021edf44;
u8 data_020e2de4 = 0x12;
u8 data_021edfbc[0x24];
u8 data_021edfe0[0x30];

extern "C" u8 func_020ac2d8(Vec3 *p, s32 q) {
    return func_020ac2e8(p, q, data_020e2de8);
}

extern "C" u8 func_020ac2c8(Vec3 *p, s32 q) {
    return func_020ac2e8(p, q, data_020e2de4);
}

extern "C" void func_020ac23c(Vec3 *p, u32 n) {
    if (n >= 2) {
        static Vec3Z v;
        Vec3 out;
        func_01ffd070(&out, p, (Vec3 *)&v);
        if (n == 2) {
            data_021ee078.func_020abed4(&out);
        } else if (n == 3) {
            data_021ee0ac.func_020abed4(&out);
        } else if (n == 4) {
            data_021ee0e0.func_020abed4(&out);
        }
    }
}

extern "C" void func_020ac22c(Vec3 *p) {
    data_021ee010.func_020abed4(p);
}

extern "C" void func_020ac1f8(Vec3 *p) {
    Vec3 local;
    Vec3 out;
    local.x = 0x166;
    local.y = 0;
    local.z = 0xc80;
    func_01ffd070(&out, p, &local);
    data_021ee044.func_020abed4(&out);
}

Unk_020abea8::Unk_020abea8() {
    unk_00.x = 0;
    unk_00.y = 0;
    unk_00.z = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_1c = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
}

Unk_020abea8::~Unk_020abea8() {}

BOOL Unk_020abea8::func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap) {
    u32 i;
    if (heap == 0) {
        heap = data_021f482c;
    }
    unk_30 = &data_021ee114[idx];
    unk_00 = *pos;
    unk_0c = size >> 1;
    s32 v = unk_0c;
    if ((v >> shift) == 0) {
        v = shift;
    }
    unk_10 = v;
    unk_18 = 0;
    unk_14 = _s32_div_f(shift - 0x200, 0x2000) + 2;
    u32 n4 = unk_14 << 2;
    unk_1c = (s32 *)func_020e8608(heap, (n4 << 1) + unk_14 * 12);
    unk_28 = (s32 *)((u8 *)unk_1c + n4);
    unk_2c = (Vec3 *)((u8 *)unk_28 + n4);
    for (i = 0; i < unk_14; i++) {
        if (i == unk_14 - 1) {
            unk_1c[i] = shift;
        } else {
            unk_1c[i] = i << 13;
        }
    }
    if (a == 0 && b == 0) {
        unk_20 = 0;
        unk_24 = unk_30->unk_0c << 12;
    } else {
        unk_20 = func_01ffcb0c(unk_30->unk_0c << 12, a);
        unk_24 = func_01ffcb0c(unk_30->unk_0c << 12, b);
    }
    s32 *p6 = unk_1c;
    s32 *p7 = unk_28;
    for (i = 0; i < unk_14; i++) {
        *p7++ = func_01ffcb0c(0x1000 - func_01ffc5a4(*p6, shift), unk_30->unk_0e << 12);
        p6++;
    }
    return TRUE;
}

void Unk_020abea8::func_020abed4(Vec3 *pos) {
    Vec3 tmp;
    Col c0, c1;
    if (unk_30 != 0 && unk_30->unk_00 != 0) {
        u8 lvl = func_020ac2d8(pos, unk_10);
        if (lvl > 1) {
            func_01ff8ccc();
            REG(0x40004a8) = unk_30->unk_04;
            REG(0x40004ac) = unk_30->unk_08;
            REG(0x4000440) = 1;
            func_02110be8(data_021edfe0);
            REG(0x40004a4) = (lvl << 16) | ((unk_30->unk_14 << 24) | 0x8080);
            s32 *p7 = unk_1c;
            s32 *p28 = unk_28;
            Vec3 *vp = unk_2c;
            REG(0x4000500) = 3;
            s32 e1 = unk_1c[1];
            u32 i = 0;
            s32 lo, hi, neg;
            s32 shift = data_020d0964;
            s32 z1 = i;
            s32 z2 = i;
            for (; i < unk_14; i++) {
                s32 v;
                if (i != 0) {
                    v = e1;
                } else {
                    v = *p7;
                }
                s32 t = func_01ffcb0c(data_021edf44, v);
                lo = t + (pos->x - unk_0c);
                hi = t + (pos->x + unk_0c);
                if (pos->z != unk_18) {
                    neg = -*p7;
                    s32 y = func_02030814(z1);
                    tmp.x = z2;
                    tmp.y = y;
                    tmp.z = neg;
                    tmp.z = neg + pos->z;
                    func_0203eeac(vp, &tmp);
                    vp->y >>= shift;
                    vp->z >>= shift;
                }
                c0 = func_02064cc4();
                c1 = c0;
                REG(0x4000480) = c1.v;
                REG(0x4000488) = (u16)((unk_20 << 8) >> 16) | ((u16)((*p28 << 8) >> 16) << 16);
                s16 zz = vp->z;
                REG(0x400048c) = (u16)((lo << 11) >> 16) | ((u16)(s16)vp->y << 16);
                REG(0x400048c) = (u16)zz;
                REG(0x4000488) = (u16)((unk_24 << 8) >> 16) | ((u16)((*p28 << 8) >> 16) << 16);
                zz = vp->z;
                REG(0x400048c) = (u16)((hi << 11) >> 16) | ((u16)(s16)vp->y << 16);
                REG(0x400048c) = (u16)zz;
                p7++;
                p28++;
                vp++;
            }
            REG(0x4000504) = 0;
            REG(0x4000448) = 1;
            unk_18 = pos->z;
        }
    }
}

void Unk_020abea8::func_020abea8(s32 heap) {
    if (heap == 0) {
        heap = data_021f482c;
    }
    if (unk_1c != 0) {
        func_020e85fc(heap, unk_1c);
        unk_1c = 0;
    }
    unk_30 = 0;
}


