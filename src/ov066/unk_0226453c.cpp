// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_0226453c_Node {
    u32 unk_00;
    struct Unk_ov066_0226453c_Node *unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
};

struct Unk_ov066_02264574_Node {
    struct Unk_ov066_02264574_Node *unk_00;
    struct Unk_ov066_02264574_Node *unk_04;
    u8 pad_08[0x20 - 0x08];
    u8 unk_20;
};

struct Unk_ov066_0226460c_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    s32 f8 : 1;
    s32 f9 : 1;
    s32 rest : 22;
};

struct Unk_ov066_0226460c_A {
    u32 unk_00;
    u8 pad_04[0x08 - 0x04];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 pad_0d[0x14 - 0x0d];
    u8 unk_14;
    u8 pad_15[2];
    u8 unk_17;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u8 pad_26[0x28 - 0x26];
    u32 unk_28;
    u8 pad_2c[0x3c - 0x2c];
    Unk_ov066_0226460c_Bits unk_3c;
};

struct Unk_ov066_0226460c_In {
    u32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
};

extern "C" {
extern Unk_ov066_0226460c_A *data_ov066_022647ac;
void *func_ov066_0225f2c8(u32 a, u32 b);
void func_02115fb4(void *p, u32 v, u32 n);

#pragma thumb off
void func_ov066_0226453c(Unk_ov066_0226453c_Node *p, s32 n) {
    u16 i;
    for (i = 0; (s32)i < n; ) {
        i++;
        p->unk_08 = 0;
        p->unk_0a = 0;
        p->unk_0c = 0;
        p = p->unk_04;
    }
}

void func_ov066_02264574(s32 n) {
    u32 sz = (data_ov066_022647ac->unk_1a + 0x43) & ~0x1f;
    u32 tot = sz * n;
    Unk_ov066_02264574_Node *p = (Unk_ov066_02264574_Node *)func_ov066_0225f2c8(tot, 0x20);
    u16 i;
    func_02115fb4(p, 0, tot);
    s32 last = n - 1;
    Unk_ov066_02264574_Node *head = p;
    for (i = 0; (s32)i < last; ) {
        Unk_ov066_02264574_Node *q;
        i++;
        p->unk_20 = 0;
        q = p;
        p->unk_04 = (Unk_ov066_02264574_Node *)((u8 *)p + sz);
        p = p->unk_04;
        p->unk_00 = q;
    }
    p->unk_20 = last;
    p->unk_04 = head;
    head->unk_00 = p;
}

void func_ov066_0226460c(Unk_ov066_0226460c_In *in) {
    u8 w = in->unk_06;
    u32 sz = w * in->unk_04;
    u16 t = sz + 4;
    data_ov066_022647ac->unk_28 = in->unk_00;
    data_ov066_022647ac->unk_3c.f3 = 0;
    data_ov066_022647ac->unk_3c.f0 = 0;
    data_ov066_022647ac->unk_3c.f5 = -1;
    data_ov066_022647ac->unk_3c.f6 = -1;
    data_ov066_022647ac->unk_3c.f7 = -1;
    data_ov066_022647ac->unk_3c.f9 = 0;
    data_ov066_022647ac->unk_3c.f8 = 0;
    data_ov066_022647ac->unk_3c.f2 = -1;
    data_ov066_022647ac->unk_3c.f1 = -1;
    data_ov066_022647ac->unk_17 = in->unk_07;
    data_ov066_022647ac->unk_08 = 0xfe;
    data_ov066_022647ac->unk_09 = 1;
    data_ov066_022647ac->unk_0a = in->unk_04 - 1;
    data_ov066_022647ac->unk_0b = in->unk_04;
    data_ov066_022647ac->unk_0c = in->unk_05;
    data_ov066_022647ac->unk_18 = w;
    data_ov066_022647ac->unk_1a = t;
    data_ov066_022647ac->unk_1c = t;
    data_ov066_022647ac->unk_1e = w;
    data_ov066_022647ac->unk_22 = 0x1e;
    data_ov066_022647ac->unk_20 = 0x5a;
    data_ov066_022647ac->unk_24 = 0xc8;
    data_ov066_022647ac->unk_14 = 4;
}
#pragma thumb reset
}
