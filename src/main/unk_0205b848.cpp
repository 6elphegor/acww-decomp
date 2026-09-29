#include "types.h"

#define ALIGN4(x) (((x) + 3) & ~3)
static inline u32 AL(u32 v, u32 a) {
    return (v + a - 1) & ~(a - 1);
}

struct Unk_0205b848_Cfg { u8 pad[0x6c]; u8 unk_6c; };

extern "C" {
extern void *data_021c619c;
extern void *data_021c61a0;
extern void *data_021c61a4;
extern void *data_021c61a8;
extern void *data_021c61ac;
extern void *data_021c61b0;
extern void *data_021c61b4;
extern void *data_021c61b8;
extern void *data_021c61bc;
extern void *data_021c61c0;
extern void *data_021c61c4;
extern void *data_021c61c8;
extern void *data_021c61cc;
extern void *data_021c61d0;
extern void *data_021c61d4;
extern void *data_021c61d8;
extern void *data_021c61dc;
extern void *data_021c61e0;
extern void *data_021c61e4;
extern void *data_021c61e8;
extern void *data_021c61ec;
extern void *data_021c61f0;
extern void *data_021c61f4;
extern void *data_021c61f8;
extern void *data_021c61fc;
extern void *data_021c6200;
extern void *data_021c6204;
extern void *data_021c6208;
extern u8 data_020e416c;
extern u32 data_020cbf94, data_020cbf98, data_020cbf9c, data_020cbfa0, data_020cbfa4;
extern Unk_0205b848_Cfg *data_020cbb18;
void func_020e8c88(void *heap);
void *func_020e8e7c(u32 size, void *parent);
void *func_020e8da0(u32 size, void *parent);
u32 func_02094340(void);
u32 func_0209433c(void);
s32 func_020812f4(void);
void *func_020b50e8(void);
s32 func_020b491c(void *);
s32 func_020b4928(void *);
s32 func_02084fbc(void);
u32 func_02077e28(void);
u32 func_02077e20(void);
u32 func_0205ffbc(void);
u32 func_0205ecfc(void);
u32 func_0205eec0(void);
u32 func_0205d2fc(void);
u32 func_0205ed04(void);
u32 func_0205d770(void);
u32 func_0205f018(void);
u32 func_0205ddc0(void);
u32 func_0205c8c8(void);
u32 func_0205d178(void);
u32 func_0205d418(void);
u32 func_0203c6c0(void);
u32 func_0205c604(void);
u32 func_0205c5fc(void);
u32 func_0205c5f4(void);

void func_0205b848(void) {
    func_020e8c88(data_021c619c);
    data_021c619c = NULL;
}

void func_0205b864(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_02094340());
    u32 a = func_0209433c();
    s += AL(16, a);
    t += s * 4;
    data_021c619c = func_020e8e7c(t, parent);
}

void func_0205b8a0(void) {
    if (data_021c61a0) {
        func_020e8c88(data_021c61a0);
    }
    data_021c61a0 = NULL;
}

void *func_0205b8c0(void *parent) {
    u32 t = 0;
    s32 n;
    if (data_020e416c == 0 ? TRUE : FALSE) {
        n = func_020812f4();
    } else {
        n = func_020b491c(func_020b50e8()) - func_020b4928(func_020b50e8());
    }
    s32 m = func_02084fbc();
    u32 x = ALIGN4(ALIGN4(func_02077e28()) + 0x48);
    t += x * n;
    x = ALIGN4(ALIGN4(func_02077e20()) + 0x48);
    u32 size = t + x * m;
    if (size != 0) {
        data_021c61a0 = func_020e8da0(size, parent);
    }
    return data_021c61a0;
}

void func_0205b944(void) {
    func_020e8c88(data_021c61a4);
    data_021c61a4 = NULL;
}

void func_0205b960(void *parent) {
    u32 n = func_02084fbc();
    u32 t = 0;
    u32 m = data_020cbf94 - 1;
    u32 k = ~m;
    u32 v = (data_020cbf98 + m) & k;
    v = (v + 0x48 + m) & k;
    t += v * n;
    data_021c61a4 = func_020e8da0(t, parent);
}

void func_0205b9a4(void) {
    func_020e8c88(data_021c61a8);
    data_021c61a8 = NULL;
}

void func_0205b9c0(void *parent) {
    u32 t = 0;
    u32 m = data_020cbf9c - 1;
    u32 k = ~m;
    u32 v = (data_020cbfa0 + m) & k;
    v = (v + 0x48 + m) & k;
    t += v * 8;
    data_021c61a8 = func_020e8da0(t, parent);
}

void func_0205ba00(void) {
    func_020e8c88(data_021c61ac);
    data_021c61ac = NULL;
}

void func_0205ba1c(void *parent) {
    s32 n;
    if (data_020e416c == 0 ? TRUE : FALSE) {
        n = func_020812f4();
    } else {
        n = func_020b491c(func_020b50e8()) - func_020b4928(func_020b50e8());
    }
    n += func_02084fbc();
    u32 s = 0, t = 0;
    s += ALIGN4(data_020cbfa4);
    t += s * n;
    data_021c61ac = func_020e8da0(t, parent);
}

void func_0205ba88(void) {
    func_020e8c88(data_021c61b0);
    data_021c61b0 = NULL;
}

void func_0205baa4(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ffbc());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d);
    data_021c61b0 = func_020e8da0(t, parent);
}

void func_0205bae4(void) {
    func_020e8c88(data_021c61b4);
    data_021c61b4 = NULL;
}

void func_0205bb00(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ecfc());
    s32 c = func_020b491c(func_020b50e8());
    s32 e = c + func_02084fbc();
    t += ALIGN4(s + 0x48) * e;
    data_021c61b4 = func_020e8da0(t, parent);
}

void func_0205bb48(void) {
    func_020e8c88(data_021c61b8);
    data_021c61b8 = NULL;
}

void func_0205bb64(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205eec0());
    t += ALIGN4(s + 0x48) * n;
    data_021c61b8 = func_020e8da0(t, parent);
}

void func_0205bba0(void) {
    func_020e8c88(data_021c61bc);
    data_021c61bc = NULL;
}

void func_0205bbbc(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d2fc());
    s32 c = func_020b491c(func_020b50e8());
    s32 e = c + func_02084fbc();
    t += ALIGN4(s + 0x48) * e;
    data_021c61bc = func_020e8da0(t, parent);
}

void func_0205bc04(void) {
    func_020e8c88(data_021c61c0);
    data_021c61c0 = NULL;
}

void func_0205bc20(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ed04());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d);
    data_021c61c0 = func_020e8da0(t, parent);
}

void func_0205bc60(void) {
    func_020e8c88(data_021c61c4);
    data_021c61c4 = NULL;
}

void func_0205bc7c(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d770());
    t += s * n;
    data_021c61c4 = func_020e8da0(t, parent);
}

void func_0205bcb4(void) {
    func_020e8c88(data_021c61c8);
    data_021c61c8 = NULL;
}

void func_0205bcd0(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += func_0205f018();
    t += s * n;
    data_021c61c8 = func_020e8da0(t, parent);
}

void func_0205bd00(void) {
    func_020e8c88(data_021c61cc);
    data_021c61cc = NULL;
}

void func_0205bd1c(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ddc0());
    t += s * n;
    data_021c61cc = func_020e8da0(t, parent);
}

void func_0205bd54(void) {
    func_020e8c88(data_021c61d0);
    data_021c61d0 = NULL;
}

void func_0205bd70(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205c8c8());
    t += s * n;
    data_021c61d0 = func_020e8da0(t, parent);
}

void func_0205bda8(void) {
    func_020e8c88(data_021c61d4);
    data_021c61d4 = NULL;
}

void func_0205bdc4(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d178());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d);
    data_021c61d4 = func_020e8da0(t, parent);
}

void func_0205be04(void) {
    func_020e8c88(data_021c61d8);
    data_021c61d8 = NULL;
}

void func_0205be20(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d418());
    t += s * n;
    data_021c61d8 = func_020e8da0(t, parent);
}

void func_0205be58(void) {
    func_020e8c88(data_021c61dc);
    data_021c61dc = NULL;
}

void func_0205be74(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0203c6c0());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d + 1);
    data_021c61dc = func_020e8da0(t, parent);
}

void func_0205beb8(void) {
    func_020e8c88(data_021c61e0);
    data_021c61e0 = NULL;
}

void func_0205bed4(void *parent) {
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 n = data_020cbb18->unk_6c;
    u32 a = func_020b4928(func_020b50e8());
    if (n < a) {
        a = n;
    }
    u32 r = a != 0 ? a : 1;
    u32 c = func_020b491c(func_020b50e8());
    r = c + func_02084fbc() - r;
    s0 += ALIGN4(func_0205c604());
    s1 += ALIGN4(func_0205c5fc());
    s2 += ALIGN4(func_0205c5f4());
    u32 m = a + r;
    s3 += s0 * m;
    s3 += s1 * m;
    s3 += s2 * r;
    data_021c61e0 = func_020e8da0(s3, parent);
}

void func_0205bf68(void) {
    func_020e8c88(data_021c61e4);
    data_021c61e4 = NULL;
}

void func_0205bf84(u32 size, void *parent) {
    data_021c61e4 = func_020e8e7c(size, parent);
}

void func_0205bf9c(void) {
    func_020e8c88(data_021c61e8);
    data_021c61e8 = NULL;
}

void func_0205bfb8(u32 size, void *parent) {
    data_021c61e8 = func_020e8e7c(size, parent);
}

void func_0205bfd0(void) {
    func_020e8c88(data_021c61ec);
    data_021c61ec = NULL;
}

void func_0205bfec(u32 size, void *parent) {
    data_021c61ec = func_020e8e7c(size, parent);
}

void func_0205c004(void) {
    func_020e8c88(data_021c61f0);
    data_021c61f0 = NULL;
}

void func_0205c020(u32 size, void *parent) {
    data_021c61f0 = func_020e8e7c(size, parent);
}

void func_0205c038(void) {
    func_020e8c88(data_021c61f4);
    data_021c61f4 = NULL;
}

void func_0205c054(u32 size, void *parent) {
    data_021c61f4 = func_020e8e7c(size, parent);
}

void func_0205c06c(void) {
    func_020e8c88(data_021c61f8);
    data_021c61f8 = NULL;
}

void func_0205c088(u32 size, void *parent) {
    data_021c61f8 = func_020e8e7c(size, parent);
}

void func_0205c0a0(void) {
    func_020e8c88(data_021c61fc);
    data_021c61fc = NULL;
}

void func_0205c0bc(u32 size, void *parent) {
    data_021c61fc = func_020e8e7c(size, parent);
}

void func_0205c0d4(void) {
    func_020e8c88(data_021c6200);
    data_021c6200 = NULL;
}

void func_0205c0f0(u32 size, void *parent) {
    data_021c6200 = func_020e8e7c(size, parent);
}

void func_0205c108(void) {
    func_020e8c88(data_021c6204);
    data_021c6204 = NULL;
}

void func_0205c124(u32 size, void *parent) {
    data_021c6204 = func_020e8da0(size, parent);
}

void func_0205c13c(void) {
    func_020e8c88(data_021c6208);
    data_021c6208 = NULL;
}

}
