// mwcc-flags: -O4,p
#include "types.h"

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
s32 func_01ff80e0(s32);
void func_01ff8128(s32);
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
void func_ov001_02226f68(u32 i, u32 v);
void func_ov001_02226f80(u32 i, void *p);
void func_ov001_02226fd0(u32 i, void *p);
void func_ov001_02226fdc(u32 i, void *p);
void func_ov001_02226ffc(Unk_ov001_02226f80_Node *n, void *v);
void *func_ov001_02227004(u32 i, void *a, void *b, u32 c, u8 d);
void *func_ov001_02227094(u32 i, void *a, void *b, u32 c);
void func_ov001_022270b4(u32 i);
void func_ov001_0222718c();
void func_ov001_022271dc();
}

extern "C" const u8 data_ov001_0222a468[2] = {0x80, 0x20};
extern "C" Unk_ov001_02226f80_Slot *data_ov001_0222dfac = 0;

#pragma thumb off

void func_ov001_022271dc() {
    s32 i;
    const u8 *pa;
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

void func_ov001_0222718c() {
    s32 i = 0;
    do {
        func_ov001_02226754(data_ov001_0222dfac[i].unk_08);
        func_ov001_02224d60(data_ov001_0222dfac[i].unk_00);
        i++;
    } while (i < 2);
    func_ov001_02225d58(&data_ov001_0222dfac);
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

void *func_ov001_02227094(u32 i, void *a, void *b, u32 c) {
    return func_ov001_02227004(i, a, b, c, 0);
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

void func_ov001_02226ffc(Unk_ov001_02226f80_Node *n, void *v) {
    n->unk_08 = (void (*)(Unk_ov001_02226f80_Node *, void *))v;
}

void func_ov001_02226fdc(u32 i, void *p) {
    func_ov001_02224cfc(data_ov001_0222dfac[i].unk_04, p);
}

void func_ov001_02226fd0(u32 i, void *p) {
    func_ov001_02226f80(i, p);
}

void func_ov001_02226f80(u32 i, void *p) {
    Unk_ov001_02226f80_Node *n = (Unk_ov001_02226f80_Node *)p;
    if (n->unk_11 != 0) {
        func_ov001_02225d58(&n->unk_0c);
    }
    func_ov001_02226710(n);
    func_ov001_02224cfc(data_ov001_0222dfac[i].unk_00, n);
}

void func_ov001_02226f68(u32 i, u32 v) {
    data_ov001_0222dfac[i].unk_38 = v;
}

