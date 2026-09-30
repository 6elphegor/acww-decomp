// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_022629cc_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov066_022629cc_V {
    u8 pad[0x8d];
    u8 unk_8d;
    u8 pad2[2];
    u16 unk_90;
    u8 unk_92;
    u8 pad3[0xc0 - 0x93];
    u32 unk_c0;
};

struct Unk_ov066_022629cc_Msg {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04[4];
    u16 unk_08;
    u16 unk_0a;
};

struct Unk_ov066_022629cc_E {
    u32 a;
    u32 b;
    u32 pad[2];
};

struct Unk_ov066_022629cc_G {
    u8 pad[0x1c];
    u16 unk_1c;
    u8 pad2[0x30 - 0x1e];
    Unk_ov066_022629cc_E *unk_30;
};

struct Unk_ov066_022629cc_Ent;

struct Unk_ov066_022629cc_Rec {
    u16 unk_00;
    u8 unk_02[6];
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c[6];
    u8 pad[2];
    Unk_ov066_022629cc_Ent *unk_14;
    u8 pad2[8];
    u8 unk_20[0xc0];
};

struct Unk_ov066_022629cc_Sub {
    u8 pad[0x2c];
};

struct Unk_ov066_022629cc_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 pad;
    Unk_ov066_022629cc_Rec *unk_04;
    Unk_ov066_022629cc_Sub *unk_08;
    void (*unk_0c)(Unk_ov066_022629cc_Rec *);
};

extern "C" {
extern Unk_ov066_022629cc_S *data_ov066_022647ac;
extern Unk_ov066_022629cc_V *data_ov066_022647b4;
extern u8 data_ov066_022647bc;
extern u16 data_ov066_022647c0;
extern u16 data_ov066_022647c4;
extern Unk_ov066_022629cc_G *data_ov066_022647c8;

u32 func_01ffa2ec(void);
s32 func_01ffa3d4(u32);
s32 func_021145b0(void *, s32);
s32 func_02114ef4(u32);
s32 func_02114f74(void *, u32);
s32 func_02115094(void *);
s32 func_0211512c(void *, s64, void *, void *);
s32 func_02115ea8(s32, void *, s32);
s32 func_02115ef4(void *, void *, s32);
s32 func_021152e4(void *);
s32 func_021218d0(void *, s32, s32, u32, s32);
u32 func_0211f800(void);
u32 func_0212741c(void);
void func_ov066_0225f22c(u32 v);
void func_ov066_0225f284(void *p);
void *func_ov066_0225f2c8(u32 a, u32 b);
void func_ov066_0225f5b4(void);
s32 func_ov066_0226292c(void);
s32 func_ov066_02260d74(void *, void *);
void func_ov066_02262dfc(Unk_ov066_022629cc_Rec *r);
void func_ov066_02262a34(Unk_ov066_022629cc_Msg *m);
s32 func_ov066_02262b20(u32 a);
void func_ov066_02262dc4(Unk_ov066_022629cc_Ent *o);
}


#pragma thumb off
extern "C" {

void func_ov066_022629cc(void) {
    data_ov066_022647ac->unk_04 = 5;
    data_ov066_022647bc = 0;
    data_ov066_022647c0 = 0;
    data_ov066_022647c4 = 0x65;
    data_ov066_022647b4->unk_8d = 0;
    func_ov066_0226292c();
}

void func_ov066_02262a34(Unk_ov066_022629cc_Msg *m) {
    if (m->unk_02 == 0) {
        u16 a = m->unk_0a;
        u16 b = m->unk_08;
        if (data_ov066_022647c4 > a) {
            data_ov066_022647c4 = a;
            data_ov066_022647c0 = 1 << (b - 1);
            data_ov066_022647bc = 1;
        } else if (data_ov066_022647c4 == a) {
            data_ov066_022647c0 = data_ov066_022647c0 | (1 << (b - 1));
            data_ov066_022647bc = data_ov066_022647bc + 1;
        }
        if (func_ov066_0226292c() != 0) {
            data_ov066_022647ac->unk_04 = 4;
            if (data_ov066_022647ac->unk_08 == 0xfe) {
                data_ov066_022647b4->unk_c0 &= ~0x80;
            }
            func_ov066_0225f5b4();
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

s32 func_ov066_02262b20(u32 a) {
    s32 r = func_021218d0((void *)func_ov066_02262a34, 3, 0x11, a, 0x1e);
    if (r == 2) {
        return TRUE;
    }
    func_ov066_0225f22c(r);
    return FALSE;
}

u32 func_ov066_02262b70(u32 a) {
    u32 idx = a;
    u32 n = 0;
    do {
        idx = (u16)(idx + 1);
        if (idx > 0xe) {
            idx = 1;
        }
        if (data_ov066_022647b4->unk_90 & (1 << (idx - 1))) {
            return idx;
        }
        n = (u16)(n + 1);
    } while (n < 0xe);
    return a;
}

void func_ov066_02262be4(void) {
    u32 r = func_0211f800();
    if (r == 0) {
        func_ov066_0225f22c(0x41);
        return;
    }
    data_ov066_022647b4->unk_90 = r;
    r = func_0212741c();
    data_ov066_022647b4->unk_92 = r;
}

s32 func_ov066_02262c38(u32 i) {
    if (i < 0xe) {
        do {
            if (data_ov066_022647b4->unk_90 & (1 << i)) {
                if (func_ov066_02262b20((u16)(i + 1)) != 0) {
                    return TRUE;
                }
            }
            i = (u16)(i + 1);
        } while (i < 0xe);
    }
    return FALSE;
}

void func_ov066_02262ca8(Unk_ov066_022629cc_Ent *o, s32 x) {
    s32 i = 0;
    if (i < o->unk_02) {
        s32 q = x * 0x82ea / 64;
        do {
            if (o->unk_04[i].unk_00 == 1) {
                func_02115094(&o->unk_08[i]);
                func_0211512c(&o->unk_08[i], q, (void *)func_ov066_02262dfc, &o->unk_04[i]);
                func_02114f74(&o->unk_08[i], o->unk_00 + 0x80);
            }
            i++;
        } while (i < o->unk_02);
    }
}

void func_ov066_02262d70(Unk_ov066_022629cc_Ent *o) {
    volatile s32 z;
    u32 n;
    func_ov066_02262dc4(o);
    o->unk_01 = 0;
    n = *(volatile u8 *)&o->unk_02;
    z = 0;
    func_02115ea8(z, o->unk_04, n * 0xe0);
    func_021145b0(o->unk_04, o->unk_02 * 0xe0);
}

void func_ov066_02262dc4(Unk_ov066_022629cc_Ent *o) {
    func_02114ef4(o->unk_00 + 0x80);
}

Unk_ov066_022629cc_Rec *func_ov066_02262dd8(Unk_ov066_022629cc_Ent *o, u32 i) {
    if (i < o->unk_02) {
        return &o->unk_04[i];
    }
    return NULL;
}

u32 func_ov066_02262df4(Unk_ov066_022629cc_Ent *o) {
    return o->unk_01;
}

void func_ov066_02262dfc(Unk_ov066_022629cc_Rec *r) {
    Unk_ov066_022629cc_Ent *o = r->unk_14;
    if (r->unk_00 != 1) {
        return;
    }
    o->unk_01 = o->unk_01 - 1;
    r->unk_00 = 0;
    if (o->unk_0c != NULL) {
        o->unk_0c(r);
    }
}

s32 func_ov066_02262e54(Unk_ov066_022629cc_Ent *o, s32 a, u8 *b, u32 c, u16 d, void *e) {
    u8 v8;
    Unk_ov066_022629cc_Rec *r;
    s32 i;
    u32 t;
    u32 v = d;
    s32 i2;
    if (v > 0xff) {
        v = 0xff;
    }
    v8 = v;
    if (o->unk_01 != 0) {
        for (i = 0; i < o->unk_02; i++) {
            Unk_ov066_022629cc_Rec *r = &o->unk_04[i];
            if (r->unk_00 == 1 && func_ov066_02260d74(r->unk_02, b) == 0) {
                s32 j, sum, k;
                u32 soff;
                u8 nw;
                u8 *p;
                func_02115094(&o->unk_08[i]);
                t = func_01ffa2ec();
                o->unk_04[i].unk_08 = c;
                p = &o->unk_04->unk_0b;
                k = (u8)(p[i * 0xe0] + 1);
                nw = k % 6;
                p[i * 0xe0] = nw;
                o->unk_04[i].unk_0c[nw] = v8;
                sum = 0;
                for (j = 0; j < 6; j++) {
                    sum += o->unk_04[i].unk_0c[j];
                }
                o->unk_04[i].unk_0a = sum / 6;
                func_02115ef4(e, o->unk_04[i].unk_20, 0xc0);
                func_021145b0(o->unk_04[i].unk_20, 0xc0);
                func_01ffa3d4(t);
                soff = i * 0x2c;
                func_0211512c((u8 *)o->unk_08 + soff, a * 0x82ea / 64, (void *)func_ov066_02262dfc, &o->unk_04[i]);
                func_02114f74((u8 *)o->unk_08 + soff, o->unk_00 + 0x80);
                return TRUE;
            }
        }
    }
    i2 = 0;
    if (i2 < *(volatile u8 *)&o->unk_02) {
    r = o->unk_04;
    do {
        if (r->unk_00 == 0) {
            s32 j, q;
            u32 off;
            t = func_01ffa2ec();
            o->unk_01 = o->unk_01 + 1;
            r->unk_00 = 1;
            r->unk_02[0] = b[0];
            r->unk_02[1] = b[1];
            r->unk_02[2] = b[2];
            r->unk_02[3] = b[3];
            r->unk_02[4] = b[4];
            r->unk_02[5] = b[5];
            r->unk_08 = c;
            r->unk_14 = o;
            r->unk_0b = 0;
            for (j = 0; j < 6; j++) {
                r->unk_0c[j] = v8;
            }
            r->unk_0a = v8;
            func_02115ef4(e, r->unk_20, 0xc0);
            func_021145b0(r->unk_20, 0xc0);
            func_01ffa3d4(t);
            func_02115094(&o->unk_08[i2]);
            off = i2 * 0xe0;
            func_0211512c(&o->unk_08[i2], a * 0x82ea / 64, (void *)func_ov066_02262dfc, (u8 *)o->unk_04 + off);
            func_02114f74(&o->unk_08[i2], o->unk_00 + 0x80);
            if (o->unk_0c != NULL) {
                o->unk_0c((Unk_ov066_022629cc_Rec *)((u8 *)o->unk_04 + off));
            }
            return TRUE;
        }
        i2++;
        r++;
    } while (i2 < *(volatile u8 *)&o->unk_02);
    }
    return FALSE;
}

void func_ov066_02263198(Unk_ov066_022629cc_Ent *o) {
    o->unk_01 = 0;
    o->unk_02 = 0;
    func_02114ef4(o->unk_00 + 0x80);
    func_ov066_0225f284(o->unk_08);
    func_ov066_0225f284(o->unk_04);
}

void func_ov066_022631d0(Unk_ov066_022629cc_Ent *o, u32 id, s32 n) {
    volatile s32 z;
    s32 i;
    s32 size = n * 0xe0;
    o->unk_00 = id;
    o->unk_01 = 0;
    o->unk_02 = n;
    o->unk_0c = NULL;
    o->unk_04 = (Unk_ov066_022629cc_Rec *)func_ov066_0225f2c8(size, 0x20);
    o->unk_08 = (Unk_ov066_022629cc_Sub *)func_ov066_0225f2c8(n * 0x2c, 0x20);
    z = 0;
    func_02115ea8(z, o->unk_04, size);
    func_021145b0(o->unk_04, size);
    for (i = 0; i < n; i++) {
        func_021152e4(&o->unk_08[i]);
    }
}

s32 func_ov066_02263284(s32 idx, u32 a, u32 b) {
    BOOL r = FALSE;
    u32 t = func_01ffa2ec();
    Unk_ov066_022629cc_G *g = data_ov066_022647c8;
    Unk_ov066_022629cc_E *p;
    if (g != NULL && (p = g->unk_30) != NULL && data_ov066_022647b4 != NULL && idx < (s32)data_ov066_022647ac->unk_0b) {
        if ((g->unk_1c & (1 << idx)) == 0) {
            p[idx].a = a;
            r = TRUE;
            p[idx].b = b;
        }
    }
    func_01ffa3d4(t);
    return r;
}

}
#pragma thumb reset
