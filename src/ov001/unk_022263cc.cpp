// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222df54 {
    u8 pad_00[0x30];
    u16 unk_30;
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
};

struct Unk_ov001_02226778_Node {
    Unk_ov001_02226778_Node *unk_00;
    Unk_ov001_02226778_Node *unk_04;
};

struct Unk_ov001_022269e0_Node {
    Unk_ov001_022269e0_Node *unk_00;
    Unk_ov001_022269e0_Node *unk_04;
    u16 unk_08;
    u16 unk_0a;
};

struct Unk_ov001_022269e0_Rec {
    u8 pad_000[0x180];
    Unk_ov001_022269e0_Node unk_180;
    Unk_ov001_022269e0_Node unk_18c;
    Unk_ov001_02226778_Node *unk_198;
    void *unk_19c;
};

struct Unk_ov001_0222df74 {
    Unk_ov001_022269e0_Rec unk_00[2];
};

struct Unk_ov001_0222df70 {
    u8 pad_000[0x800];
    void *unk_800[2];
    void *unk_808;
};

extern "C" {
extern Unk_ov001_0222df54 *data_ov001_0222df54;
extern u8 data_ov001_0222df58[];
extern u32 data_ov001_0222df68;
extern u32 data_ov001_0222df6c;
extern Unk_ov001_0222df70 *data_ov001_0222df70;
extern Unk_ov001_0222df74 *data_ov001_0222df74;
extern u8 data_027e0000[];

void func_ov001_02226214();
s32 func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);
void *func_ov001_02225dd8(s32, s32);
void *func_ov001_02224ca0(void *);
void *func_ov001_02224d84(s32, void *, s32);
void func_ov001_02224cfc(void *, void *);
void func_ov001_02226fd0(s32, void *);
void func_ov001_022270b4(s32);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_0206d49c();
s32 func_01ff80e0(s32);
s32 func_01ff8128(s32);
void func_01ff8228(u32);
void func_01ff81a8(s32);
s32 func_01ffa328(s32);
void func_01ffa404(s32, void *);
void func_01ffa314(s32);
void func_0211bb24();
void func_0211b6a0(s32);
s32 func_0211b68c(s32);
s32 func_0211be24(void *);
void func_0211bcdc(void *);
void func_0211bbc8(s32, s32, void *, s32);
void func_0211c3b4(s32);
s32 func_0211c328(u32 *);
void func_021145cc(void *, u32);
void func_02111d34(void *, s32, u32);
void func_02111ccc(void *, s32, u32);
void func_02115e78(void *, void *, u32);
void func_02115ea8(u32, void *, u32);
void func_0210f9ac(u32);
s32 func_0210f554();

#pragma thumb off
void func_ov001_022263cc()
{
    Unk_ov001_0222df54 *p;
    s32 i;
    u8 *cnt;
    u16 cur;
    u32 v;
    p = data_ov001_0222df54;
    v = *(volatile u16 *)0x4000130 | *(volatile u16 *)0x27fffa8;
    cur = ((v ^ 0x2fff) & 0x2fff);
    cnt = data_ov001_0222df58;
    p->unk_32 = (p->unk_30 ^ cur) & cur;
    data_ov001_0222df54->unk_36 = p->unk_30 & (p->unk_30 ^ cur);
    data_ov001_0222df54->unk_30 = cur;
    data_ov001_0222df54->unk_34 = data_ov001_0222df54->unk_32;
    for (i = 0; i < 14; i++, cnt++) {
        u16 bit = 1 << i;
        if ((cur & bit) == 0) {
            *cnt = 0;
        } else {
            (*cnt)++;
            if (*cnt == 0x28) {
                data_ov001_0222df54->unk_34 |= bit;
            } else if (*cnt == 0x2f) {
                data_ov001_0222df54->unk_34 |= bit;
                *cnt = 0x28;
            }
        }
    }
}

void func_ov001_022264d8()
{
    func_ov001_022263cc();
    func_ov001_02226214();
}

void func_ov001_022264f4()
{
    do {
        func_0211bb24();
        func_0211b6a0(4);
    } while (func_0211b68c(4) != 0);
    func_ov001_02225d58(&data_ov001_0222df54);
}

void func_ov001_0222652c()
{
    u32 buf[3];
    data_ov001_0222df54 = (Unk_ov001_0222df54 *)func_ov001_02225db0(0x3a, 4);
    if (func_0211be24(buf) == 0) func_0206d49c();
    func_0211bcdc(buf);
    func_0211bbc8(0, 4, data_ov001_0222df54, 5);
    func_0211b6a0(2);
    if (func_0211b68c(2) != 0) func_0206d49c();
    func_ov001_022264d8();
}

void func_ov001_022265ac()
{
    func_ov001_022270b4(1);
    u32 *g = (u32 *)data_027e0000;
    g += 0xc00;
    g[0x3fe] |= 1;
}

void func_ov001_022265e0()
{
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 0;
    func_01ff8228(data_ov001_0222df6c);
    func_01ffa404(1, (void *)data_ov001_0222df68);
}

void func_ov001_0222662c()
{
    data_ov001_0222df6c = *(volatile u32 *)0x4000210;
    func_01ff8228(0x40018);
    func_01ff8128(1);
    data_ov001_0222df68 = func_01ffa328(1);
    func_01ffa404(1, (void *)func_ov001_022265ac);
    func_01ff81a8(1);
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 1;
    func_01ffa314(1);
}

void func_ov001_022266d0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node);

void func_ov001_022266b0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node)
{
    func_ov001_022266d0(head->unk_04, node);
}

void func_ov001_022266c0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node)
{
    func_ov001_022266d0(head + 1, node);
}

void func_ov001_022266d0(Unk_ov001_02226778_Node *head, Unk_ov001_02226778_Node *node)
{
    s32 old = func_01ff80e0(1);
    head->unk_00->unk_04 = node;
    node->unk_00 = head->unk_00;
    node->unk_04 = head;
    head->unk_00 = node;
    func_01ff8128(old);
}

void func_ov001_02226710(Unk_ov001_02226778_Node *node)
{
    s32 old = func_01ff80e0(1);
    node->unk_00->unk_04 = node->unk_04;
    node->unk_04->unk_00 = node->unk_00;
    node->unk_00 = node->unk_04 = 0;
    func_01ff8128(old);
}

void func_ov001_02226754(void *a, ...)
{
    func_ov001_02225d58(&a);
}

Unk_ov001_02226778_Node *func_ov001_02226778()
{
    Unk_ov001_02226778_Node *n = (Unk_ov001_02226778_Node *)func_ov001_02225dd8(0x10, 4);
    n[0].unk_00 = 0;
    n[0].unk_04 = &n[1];
    n[1].unk_00 = n;
    n[1].unk_04 = 0;
    return n;
}

u8 *func_ov001_022267b0(s32 a, s32 b)
{
    return (u8 *)data_ov001_0222df70 + (a << 10) + (b << 3);
}

void func_ov001_022267c8(u32 *p)
{
    s32 z = 0;
    *p = (*p & 0xc1fffcff) | 0x200;
    if ((u32)p >= (u32)data_ov001_0222df70 + 0x400) z = 1;
    func_ov001_02224cfc(data_ov001_0222df70->unk_800[z], p);
}

void *func_ov001_02226814(s32 idx, void *dst)
{
    void *r = func_ov001_02224ca0(data_ov001_0222df70->unk_800[idx]);
    func_02115e78(dst, r, 8);
    return r;
}

void func_ov001_0222685c()
{
    func_ov001_02226fd0(1, data_ov001_0222df70->unk_808);
    func_ov001_02225d58(&data_ov001_0222df70);
}

void func_ov001_02226890()
{
    func_021145cc(data_ov001_0222df70, 0x800);
    func_02111d34(data_ov001_0222df70, 0, 0x400);
    func_02111ccc((u8 *)data_ov001_0222df70 + 0x400, 0, 0x400);
}

void func_ov001_022268e4()
{
    volatile u32 v;
    Unk_ov001_0222df70 *b = (Unk_ov001_0222df70 *)func_ov001_02225dd8(0x80c, 4);
    s32 i;
    data_ov001_0222df70 = b;
    v = 0x200;
    func_02115ea8(v, b, 0x800);
    for (i = 0; i < 2; i++) {
        data_ov001_0222df70->unk_800[i] = func_ov001_02224d84(0x40, (u8 *)data_ov001_0222df70 + i * 0x400, 8);
    }
    data_ov001_0222df70->unk_808 = func_ov001_02227094(1, (void *)func_ov001_02226890, 0, 0xc8);
}

void func_ov001_02226994(Unk_ov001_02226778_Node *p)
{
    s32 z = 0;
    func_ov001_02226710(p);
    Unk_ov001_0222df74 *b = data_ov001_0222df74;
    if ((u32)p >= (u32)b + 0x1a0) z = 1;
    func_ov001_02224cfc(b->unk_00[z].unk_19c, p);
}

Unk_ov001_022269e0_Node *func_ov001_022269e0(s32 idx, s32 size, s32 flag, u32 *out)
{
    Unk_ov001_022269e0_Node *blk;
    Unk_ov001_022269e0_Node *cur;
    Unk_ov001_022269e0_Node *end;
    Unk_ov001_0222df74 *base;
    s32 words;
    s32 old;
    s32 start;
    u32 off = idx * 0x1a0;
    blk = (Unk_ov001_022269e0_Node *)func_ov001_02224ca0(((Unk_ov001_022269e0_Rec *)((u8 *)data_ov001_0222df74 + off))->unk_19c);
    words = (size + 3) & ~3;
    words >>= 2;
    blk->unk_0a = words;
    old = func_01ff80e0(1);
    if (flag != 0) {
        base = data_ov001_0222df74;
        cur = &base->unk_00[idx].unk_180;
        if (cur != &base->unk_00[idx].unk_18c) {
            do {
                Unk_ov001_022269e0_Node *nx = cur->unk_04;
                start = cur->unk_08 + cur->unk_0a;
                if (start + words <= nx->unk_08) {
                    blk->unk_08 = start;
                    func_ov001_022266d0((Unk_ov001_02226778_Node *)nx, (Unk_ov001_02226778_Node *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (Unk_ov001_022269e0_Node *)((u8 *)base + off + 0x18c));
        }
        if (cur == (Unk_ov001_022269e0_Node *)((u8 *)data_ov001_0222df74 + off + 0x18c)) func_0206d49c();
    } else {
        base = data_ov001_0222df74;
        cur = &base->unk_00[idx].unk_18c;
        if (cur != &base->unk_00[idx].unk_180) {
            do {
                Unk_ov001_022269e0_Node *nx = cur->unk_00;
                start = cur->unk_08 - words;
                if (start >= nx->unk_08 + nx->unk_0a) {
                    blk->unk_08 = start;
                    func_ov001_022266d0((Unk_ov001_02226778_Node *)cur, (Unk_ov001_02226778_Node *)blk);
                    break;
                }
                cur = nx;
            } while (cur != (Unk_ov001_022269e0_Node *)((u8 *)base + off + 0x180));
        }
        if (cur == (Unk_ov001_022269e0_Node *)((u8 *)data_ov001_0222df74 + off + 0x180)) func_0206d49c();
    }
    *out = blk->unk_08;
    func_01ff8128(old);
    return blk;
}

void func_ov001_02226b60()
{
#define Unk_ov001_02226b60_R (*(Unk_ov001_022269e0_Rec *)((u8 *)data_ov001_0222df74 + off))
    s32 i;
    u32 off;
    data_ov001_0222df74 = (Unk_ov001_0222df74 *)func_ov001_02225db0(0x340, 4);
    for (i = 0, off = 0; i < 2; i++, off += 0x1a0) {
        Unk_ov001_02226b60_R.unk_19c = func_ov001_02224d84(0x20, &Unk_ov001_02226b60_R, 0xc);
        Unk_ov001_02226b60_R.unk_198 = func_ov001_02226778();
        Unk_ov001_02226b60_R.unk_180.unk_08 = 0x300;
        Unk_ov001_02226b60_R.unk_18c.unk_08 = 0x400;
        func_ov001_022266b0(Unk_ov001_02226b60_R.unk_198, (Unk_ov001_02226778_Node *)&Unk_ov001_02226b60_R.unk_180);
        func_ov001_022266c0(Unk_ov001_02226b60_R.unk_198, (Unk_ov001_02226778_Node *)&Unk_ov001_02226b60_R.unk_18c);
    }
#undef Unk_ov001_02226b60_R
}

s32 func_ov001_02226c24(u8 *s, s32 n)
{
    s32 i = 0;
    if (n > 0) {
        do {
            if (s[i] == 0) break;
            i++;
        } while (i < n);
    }
    return i;
}

void func_ov001_02226c50()
{
    func_0211c3b4(1);
}

void func_ov001_02226c60()
{
    u32 v;
    if (func_0211c328(&v) != 0) return;
    if (v == 0xf) return;
    func_0211c3b4(0xf);
}

void func_ov001_02226ca8()
{
    volatile u32 a, b, c, d, e, f;
    func_0210f9ac(0x1f3);
    c = 0;
    func_02115ea8(c, (void *)0x6800000, 0x40000);
    d = 0;
    func_02115ea8(d, (void *)0x6880000, 0x24000);
    func_0210f554();
    a = 0x200;
    func_02115ea8(a, (void *)0x7000000, 0x400);
    e = 0;
    func_02115ea8(e, (void *)0x5000000, 0x400);
    b = 0x200;
    func_02115ea8(b, (void *)0x7000400, 0x400);
    f = 0;
    func_02115ea8(f, (void *)0x5000400, 0x400);
}
#pragma thumb reset
}
