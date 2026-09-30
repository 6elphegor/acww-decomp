// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02226d68_Regs {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20, unk_24, unk_28, unk_2c, unk_30;
};

struct Unk_ov001_02226f80_Node {
    void *unk_00;
    Unk_ov001_02226f80_Node *unk_04;
    void (*unk_08)(Unk_ov001_02226f80_Node *, void *);
    void *unk_0c;
    u8 unk_10;
    u8 unk_11;
};

struct Unk_ov001_02226f80_Slot {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    Unk_ov001_02226f80_Node *unk_10;
    u8 pad_14[8];
    u8 unk_1c;
    u8 pad_1d[3];
    u8 unk_20[0x10];
    u8 unk_30;
    u8 pad_31[3];
    s32 unk_34;
    u8 unk_38;
    u8 pad_39[3];
    void *unk_3c;
};

extern "C" {
extern Unk_ov001_02226d68_Regs data_ov001_0222df78;
extern Unk_ov001_02226f80_Slot *data_ov001_0222dfac;
extern u8 data_ov001_0222a468[];

u32 func_0210f614();
u32 func_0210f600();
u32 func_0210f5dc();
u32 func_0210f5b8();
u32 func_0210f5a4();
u32 func_0210f590();
u32 func_0210f57c();
u32 func_0210f540();
u32 func_0210f52c();
u32 func_0210f504();
u32 func_0210f4dc();
u32 func_0210f568();
u32 func_0210f554();
void func_021101f4(u32);
void func_02110088(u32);
void func_0210ff74(u32);
void func_0210febc(u32);
void func_0210fcb8(u32);
void func_0210fbc4(u32);
void func_0210fa84(u32);
void func_0210f900(u32);
void func_0210f884(u32);
void func_0210f7f8(u32);
void func_0210f76c(u32);
void func_0210f9ac(u32);
void func_0210f9cc(u32);
void func_0211c460(s32);
s32 func_01ff80e0(s32);
void func_01ff8128(s32);
void func_ov001_02226ca8();
void func_ov001_02225d58(void *);
void func_ov001_02226710(void *);
void func_ov001_02224cfc(void *, void *);
void *func_ov001_02224ca0(void *);
void func_ov001_022266d0(void *, void *);
void func_ov001_02226754(void *);
void func_ov001_02224d60(void *);
void *func_ov001_02225dd8(s32, s32);
void *func_ov001_02224d84(s32, void *, s32);
void *func_ov001_02224dc8(s32);
void *func_ov001_02226778();
void func_ov001_022266b0(void *, void *);
void func_ov001_022266c0(void *, void *);
}

extern "C" {

void func_ov001_02226d68() {
    func_0210f614();
    func_0210f600();
    func_0210f540();
    func_0210f52c();
    func_ov001_02226ca8();
    func_021101f4(data_ov001_0222df78.unk_00);
    func_02110088(data_ov001_0222df78.unk_04);
    func_0210ff74(data_ov001_0222df78.unk_08);
    func_0210febc(data_ov001_0222df78.unk_0c);
    func_0210fcb8(data_ov001_0222df78.unk_10);
    func_0210fbc4(data_ov001_0222df78.unk_14);
    func_0210fa84(data_ov001_0222df78.unk_18);
    func_0210f900(data_ov001_0222df78.unk_1c);
    func_0210f884(data_ov001_0222df78.unk_20);
    func_0210f7f8(data_ov001_0222df78.unk_24);
    func_0210f76c(data_ov001_0222df78.unk_28);
    func_0210f9ac(data_ov001_0222df78.unk_30);
    *(volatile u16 *)0x4000050 = 0;
    *(volatile u16 *)0x4001050 = 0;
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000014 = 0;
    *(volatile u32 *)0x4000018 = 0;
    *(volatile u32 *)0x400001c = 0;
    *(volatile u32 *)0x4001010 = 0;
    *(volatile u32 *)0x4001014 = 0;
    *(volatile u32 *)0x4001018 = 0;
    *(volatile u32 *)0x400101c = 0;
    func_0211c460(1);
}

void func_ov001_02226ea8() {
    data_ov001_0222df78.unk_00 = func_0210f614();
    data_ov001_0222df78.unk_04 = func_0210f600();
    data_ov001_0222df78.unk_08 = func_0210f5dc();
    data_ov001_0222df78.unk_0c = func_0210f5b8();
    data_ov001_0222df78.unk_10 = func_0210f5a4();
    data_ov001_0222df78.unk_14 = func_0210f590();
    data_ov001_0222df78.unk_18 = func_0210f57c();
    data_ov001_0222df78.unk_1c = func_0210f540();
    data_ov001_0222df78.unk_20 = func_0210f52c();
    data_ov001_0222df78.unk_24 = func_0210f504();
    data_ov001_0222df78.unk_28 = func_0210f4dc();
    data_ov001_0222df78.unk_2c = func_0210f568();
    data_ov001_0222df78.unk_30 = func_0210f554();
    func_0210f9cc(data_ov001_0222df78.unk_2c);
    func_ov001_02226ca8();
}

void func_ov001_02226f68(u32 i, u32 v) {
    data_ov001_0222dfac[i].unk_38 = v;
}

void func_ov001_02226f80(u32 i, void *p) {
    Unk_ov001_02226f80_Node *n = (Unk_ov001_02226f80_Node *)p;
    if (n->unk_11 != 0) {
        func_ov001_02225d58(&n->unk_0c);
    }
    func_ov001_02226710(n);
    func_ov001_02224cfc(data_ov001_0222dfac[i].unk_00, n);
}

void func_ov001_02226fd0(u32 i, void *p) {
    func_ov001_02226f80(i, p);
}

void func_ov001_02226fdc(u32 i, void *p) {
    func_ov001_02224cfc(data_ov001_0222dfac[i].unk_04, p);
}

void func_ov001_02226ffc(Unk_ov001_02226f80_Node *n, void *v) {
    n->unk_08 = (void (*)(Unk_ov001_02226f80_Node *, void *))v;
}

void *func_ov001_02227004(u32 i, void *a, void *b, u32 c, u8 d) {
    Unk_ov001_02226f80_Node *n = (Unk_ov001_02226f80_Node *)func_ov001_02224ca0(data_ov001_0222dfac[i].unk_00);
    n->unk_08 = (void (*)(Unk_ov001_02226f80_Node *, void *))a;
    n->unk_0c = b;
    n->unk_10 = c;
    n->unk_11 = d;
    s32 irq = func_01ff80e0(1);
    Unk_ov001_02226f80_Node *q = data_ov001_0222dfac[i].unk_10;
loop:
    if (c >= q->unk_10) goto next;
    func_ov001_022266d0(q, n);
    goto done;
next:
    q = q->unk_04;
    goto loop;
done:
    func_01ff8128(irq);
    return n;
}

void *func_ov001_02227094(u32 i, void *a, void *b, u32 c) {
    return func_ov001_02227004(i, a, b, c, 0);
}

void func_ov001_022270b4(u32 i) {
    Unk_ov001_02226f80_Slot *s = &data_ov001_0222dfac[i];
    if (s->unk_38 == 0) return;
    Unk_ov001_02226f80_Node *n = s->unk_10;
    if (n != (Unk_ov001_02226f80_Node *)s->unk_20) {
        do {
            n->unk_08(n, n->unk_0c);
            n = n->unk_04;
        } while (n != (Unk_ov001_02226f80_Node *)data_ov001_0222dfac[i].unk_20);
    }
    s32 k = 0;
    if (data_ov001_0222dfac[i].unk_34 > 0) {
        do {
            void *e = func_ov001_02224ca0(data_ov001_0222dfac[i].unk_04);
            if (e == 0) return;
            func_ov001_02226f80(i, e);
            k++;
        } while (k < data_ov001_0222dfac[i].unk_34);
    }
}

void func_ov001_0222718c() {
    s32 i = 0;
    do {
        func_ov001_02226754(data_ov001_0222dfac[i].unk_08);
        func_ov001_02224d60(data_ov001_0222dfac[i].unk_00);
        i++;
    } while (i < 2);
    func_ov001_02225d58(&data_ov001_0222dfac);
}

void func_ov001_022271dc() {
    s32 i;
    u8 *pa;
    data_ov001_0222dfac = (Unk_ov001_02226f80_Slot *)func_ov001_02225dd8(0x80, 4);
    pa = data_ov001_0222a468;
    for (i = 0; i < 2; i++) {
        data_ov001_0222dfac[i].unk_34 = *pa;
        data_ov001_0222dfac[i].unk_3c = func_ov001_02225dd8(*pa * 0x14, 4);
        data_ov001_0222dfac[i].unk_00 = func_ov001_02224d84(*pa, data_ov001_0222dfac[i].unk_3c, 0x14);
        data_ov001_0222dfac[i].unk_04 = func_ov001_02224dc8(*pa);
        data_ov001_0222dfac[i].unk_08 = func_ov001_02226778();
        data_ov001_0222dfac[i].unk_1c = 0;
        data_ov001_0222dfac[i].unk_30 = 0xff;
        func_ov001_022266b0(data_ov001_0222dfac[i].unk_08, &data_ov001_0222dfac[i].unk_0c);
        func_ov001_022266c0(data_ov001_0222dfac[i].unk_08, &data_ov001_0222dfac[i].unk_20);
        data_ov001_0222dfac[i].unk_38 = 1;
        pa++;
    }
}

}
