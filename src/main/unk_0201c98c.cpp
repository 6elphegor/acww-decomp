#include "types.h"

struct Unk_020d8938_Fc {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0206cbbc { Unk_0206cbbc(); ~Unk_0206cbbc(); u32 pad[0x2c / 4]; };
struct Unk_0206cb5c { Unk_0206cb5c(); ~Unk_0206cb5c(); u32 pad[0x98 / 4]; };
struct Unk_0206cafc { Unk_0206cafc(); ~Unk_0206cafc(); u32 pad[0x34 / 4]; };

class Unk_020d8938;
typedef s32 (Unk_020d8938::*Unk_020d8938_Fn)();
typedef void (Unk_020d8938::*Unk_020d8938_FnArg)(u32);
typedef void (Unk_020d8938::*Unk_020d8938_FnV)();

extern "C" {
void func_0200402c();
Unk_020d8938_Fc *func_0201c7f8(Unk_020d8938_Fc *p);
void func_0207d0f4(void *a, void *b, u32 c);
s32 func_02080b40(void *p);
void func_0207790c(void *a, s32 b, s32 c);
void func_0207c55c(void *a, u32 b);
s32 func_0209750c();
u8 *func_02098308();
u32 func_02081328(u32 a, u32 b);
void func_0202d33c(Unk_020d8938 *p, Unk_020d8938_FnV f);
void func_0203cb80(u32 a);
void func_0203ca94();
s32 func_02098750();
s32 func_02097edc();
void func_02097f30(s32 a, void *b, s32 c, ...);
s32 func_020986c8(s32 a);
void func_0203c42c(s32 a, void *b, u32 c, u32 d);
void func_0207cf10(void *a, void *b);
void func_02026968(u16 *out, s32 v);
void func_02067a78(void *p);
void func_0207cfb8(void *p);
void func_02080b78(void *a, void *b);
s32 func_02098eb0(void *p);
void func_02097a48(s32 a, s32 b, u32 c);
void *func_020805ac(void *p);
s32 func_020805c4(void *p);
u8 func_02080acc(void *p);
void func_0203cfb8(void *a, void *b, void *c, void *d, void *e, void *f);
void func_02065818(void *a, void *b, void *c, void *d, u32 e, void *f, s32 g, s32 h);
extern u8 data_021edb60;
extern u8 data_021edb5c;
extern u8 data_020d8a88[];
extern u8 data_020d8a9c[];
extern u8 data_020d785c[];
extern u8 data_021beee0[];
}

static inline BOOL Unk_020d8938_IsSet(u16 *p)
{
    return *p != 0xfff1;
}

class Unk_020d8938 {
public:
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);

    s32 func_0201cb48(u32 idx);
    s32 func_0201cc44();
    s32 func_0201cc78();
    s32 func_0201ccac();
    s32 func_0201cce0();
    s32 func_0201cd14();
    void func_0201cd48();
    s32 func_0201cd9c();
    s32 func_0201cdc8();
    s32 func_0201cde0();
    s32 func_0201cdf8();
    void func_0201ce84();
    s32 func_0201cec0();
    void func_0201cf74();
    s32 func_0201cfd8();
    void func_0201d060();
    s32 func_0201d0c4();
    s32 func_0201d160();
    s32 func_0201d184();
    s32 func_0201d250();
    void func_02015878(u32 a, u32 b);
    void func_02015848(u32 a, u32 b);
    void func_0201577c(u32 a, void *b, void *c, void *d);
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
    void func_02015144(void *a, u32 b);
    void func_02014e60(u16 *a, u32 b, u32 c, u32 d);
    void func_02014ce4(u16 *a, u32 b, u32 c, u32 d);
    void func_02014578(void *a);

    u8 pad_04[0x38];
    void *unk_3c;
    u8 pad_40[0xb4 - 0x40];
    Unk_020d8938_FnArg unk_b4;
    Unk_020d8938_FnArg unk_bc;
    Unk_020d8938_FnArg unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_020d8938_Fc *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    void *unk_128;
    u8 pad_12c[4];
    void *unk_130;
    u8 *unk_134;
    u8 pad_138[0x156 - 0x138];
    u16 unk_156;
    u8 pad_158[0x168 - 0x158];
    Unk_020d8938_Fn unk_168;
    Unk_020d8938_Fn unk_170;
    Unk_020d8938_Fn unk_178;
    Unk_020d8938_Fn unk_180;
    Unk_020d8938_Fn unk_188;
    u8 pad_190[0x198 - 0x190];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    s32 unk_19c;
};

void Unk_020d8938::vfunc_14(u32 a)
{
    volatile u8 v = *((u8 *)unk_3c + 0x19f7);
    if (func_0201cb48(a) == 0) {
        if (unk_156 != 0) {
            func_0200402c();
            unk_156 = 0;
        }
        u8 w = v;
        if (w == data_021edb60) {
            if (unk_bc != 0) {
                (this->*unk_bc)(a);
            }
        } else if (w == data_021edb5c) {
            if (unk_c4 != 0) {
                (this->*unk_c4)(a);
                unk_c4 = 0;
            }
        }
    }
    if (v == data_021edb5c) {
        if (unk_128 != NULL) {
            func_0207d0f4(unk_fc->unk_82c, unk_128, 0);
            if (unk_124 != -1) {
                func_0207790c(unk_fc->unk_82c, unk_124, func_02080b40(unk_128));
            }
            if (unk_fc->unk_82c != NULL) {
                func_0207c55c(unk_fc->unk_82c, 0);
            }
        }
        if (unk_130 != NULL) {
            if (func_0201c7f8(unk_fc) != NULL) {
                func_0207d0f4(func_0201c7f8(unk_fc)->unk_82c, unk_130, 0);
            }
        }
    }
}

void Unk_020d8938::vfunc_10(u32 a)
{
    if (func_0201cb48(a) == 0) {
        if (unk_b4 != 0) {
            (this->*unk_b4)(a);
            unk_b4 = 0;
        }
    }
}

s32 Unk_020d8938::func_0201cb48(u32 idx)
{
    static Unk_020d8938_Fn tbl[17] = {
        0, &Unk_020d8938::func_0201d250, 0, 0, 0, 0, 0, &Unk_020d8938::func_0201cd9c,
        0, 0, 0, 0, &Unk_020d8938::func_0201cd14, &Unk_020d8938::func_0201cce0, &Unk_020d8938::func_0201ccac,
        &Unk_020d8938::func_0201cc78, &Unk_020d8938::func_0201cc44};
    if (idx < 17) {
        if (tbl[idx] != 0) {
            return (this->*tbl[idx])();
        }
    }
    return 0;
}

s32 Unk_020d8938::func_0201cc44()
{
    if (unk_188 != 0) {
        return (this->*unk_188)();
    }
    return 0;
}

s32 Unk_020d8938::func_0201cc78()
{
    if (unk_180 != 0) {
        return (this->*unk_180)();
    }
    return 0;
}

s32 Unk_020d8938::func_0201ccac()
{
    if (unk_178 != 0) {
        return (this->*unk_178)();
    }
    return 0;
}

s32 Unk_020d8938::func_0201cce0()
{
    if (unk_170 != 0) {
        return (this->*unk_170)();
    }
    return 0;
}

s32 Unk_020d8938::func_0201cd14()
{
    if (unk_168 != 0) {
        return (this->*unk_168)();
    }
    return 0;
}

void Unk_020d8938::func_0201cd48()
{
    u8 buf[2];
    func_0209750c();
    u8 *p = func_02098308();
    u32 r = func_02081328(p[1], p[0]);
    func_02015878(p[1], 0);
    func_02015848(p[0], 1);
    buf[0] = r;
    buf[1] = 0;
    func_0201577c(2, buf, data_020d8a88, buf + 1);
}

s32 Unk_020d8938::func_0201cd9c()
{
    func_02015170(0x32, 0);
    func_020151d0(2);
    func_0202d33c(this, &Unk_020d8938::func_0201cd48);
    return 1;
}

s32 Unk_020d8938::func_0201cdc8()
{
    func_0203cb80(0);
    func_0203ca94();
    return 1;
}

s32 Unk_020d8938::func_0201cde0()
{
    func_0203cb80(1);
    func_0203ca94();
    return 1;
}

s32 Unk_020d8938::func_0201cdf8()
{
    if (unk_198 != 0xfff1) {
        s32 r4 = func_0209750c();
        s32 r6 = func_02098750();
        s32 r2 = func_02097edc();
        if (r2 >= 0) {
            func_02097f30(r6, &unk_198, r2, 0);
            func_0203c42c(func_020986c8(r4), &unk_198, 0, 1);
            if (unk_19a == 1) {
                func_0207cf10(unk_fc->unk_82c, &unk_198);
            }
            func_02014e60(&unk_198, 0, 5, 0);
            return 1;
        }
    }
    return 0;
}

void Unk_020d8938::func_0201ce84()
{
    u16 tmp;
    func_02026968(&tmp, unk_19c);
    unk_120 = tmp;
    func_02014ce4(&unk_120, 0, 5, 0);
    func_02067a78(unk_3c);
}

s32 Unk_020d8938::func_0201cec0()
{
    if (unk_19c > 0 && unk_198 != 0xfff1) {
        s32 r6 = func_0209750c();
        s32 r4 = func_02098750();
        s32 r2 = func_02097edc();
        if (r2 >= 0) {
            func_02097f30(r4, &unk_198, r2, 0);
            func_0203c42c(func_020986c8(r6), &unk_198, 0, 1);
            if (unk_19a == 1) {
                func_0207cf10(unk_fc->unk_82c, &unk_198);
            }
            func_02097a48(r4, -unk_19c, 1);
            func_02014e60(&unk_198, 0, 5, 0);
            func_0202d33c(this, &Unk_020d8938::func_0201ce84);
            return 1;
        }
    }
    return 0;
}

void Unk_020d8938::func_0201cf74()
{
    void *r4 = unk_fc->unk_82c;
    func_02014ce4(&unk_120, 0, 5, 0);
    u16 *q = &unk_120;
    if (r4 != NULL) {
        if (*q != 0xfff1) {
            func_0207cfb8(r4);
            if (unk_128 != NULL) {
                func_02080b78(unk_128, &unk_120);
            }
        }
    }
    func_02067a78(unk_3c);
}

s32 Unk_020d8938::func_0201cfd8()
{
    if (unk_198 != 0xfff1 && unk_120 != 0xfff1) {
        s32 r4 = func_0209750c();
        s32 r6 = func_02098750();
        s32 r2 = func_02098eb0(&unk_120);
        if (r2 >= 0) {
            func_02097f30(r6, &unk_198, r2, 0);
            func_0203c42c(func_020986c8(r4), &unk_198, 0, 1);
            func_02014e60(&unk_198, 0, 5, 0);
            func_0202d33c(this, &Unk_020d8938::func_0201d060);
            return 1;
        }
    }
    return 0;
}

void Unk_020d8938::func_0201d060()
{
    void *r4 = unk_fc->unk_82c;
    func_02014ce4(&unk_120, 0, 5, 0);
    u16 *q = &unk_120;
    if (r4 != NULL) {
        if (*q != 0xfff1) {
            func_0207cfb8(r4);
            if (unk_128 != NULL) {
                func_02080b78(unk_128, &unk_120);
            }
        }
    }
    func_02067a78(unk_3c);
}

s32 Unk_020d8938::func_0201d0c4()
{
    if (unk_19c > 0 && unk_120 != 0xfff1) {
        func_0209750c();
        s32 r4 = func_02098750();
        s32 r2 = func_02098eb0(&unk_120);
        if (r2 >= 0) {
            u16 buf[2];
            buf[0] = 0xfff1;
            func_02097f30(r4, buf, r2, 0);
            func_02097a48(r4, unk_19c, 1);
            func_02026968(&buf[1], unk_19c);
            unk_198 = buf[1];
            func_02014e60(&unk_198, 0, 5, 0);
            func_0202d33c(this, &Unk_020d8938::func_0201d060);
            return 1;
        }
    }
    return 0;
}

s32 Unk_020d8938::func_0201d160()
{
    if (unk_134 != NULL) {
        func_02014578(unk_134 + 0x5c);
        return 1;
    }
    return 0;
}

s32 Unk_020d8938::func_0201d184()
{
    void *r4;
    if (unk_134 != NULL) {
        r4 = func_020805ac(unk_fc->unk_82c);
    } else {
        s32 r6 = func_020805c4(unk_fc->unk_82c);
        Unk_0206cbbc l18;
        Unk_0206cb5c l78;
        Unk_0206cafc l44;
        u8 v = 0;
        u8 b;
        u32 x14;
        r4 = data_021beee0;
        if (unk_128 != NULL) {
            v = func_02080acc(unk_128);
        }
        b = v;
        func_0203cfb8(&l18, &l78, &l44, &x14, &b, data_020d8a9c);
        func_02065818(r4, &l18, &l78, &l44, x14, data_020d785c, r6, r6);
    }
    func_02015144(r4, 0);
    func_020151d0(5);
    return 1;
}

s32 Unk_020d8938::func_0201d250()
{
    u16 buf = unk_120;
    if (unk_198 != 0xfff1) {
        buf = unk_198;
    }
    if (buf != 0xfff1) {
        s32 r4 = func_0209750c();
        s32 r6 = func_02098750();
        s32 r2 = func_02097edc();
        if (r2 != -1) {
            func_02097f30(r6, &buf, r2, 0);
            func_0203c42c(func_020986c8(r4), &buf, 0, 1);
            func_02014e60(&buf, 0, 5, 0);
            return 1;
        }
    }
    return 0;
}
