#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203fe18_Date { u8 b0, b1, b2, b3, b4, b5, b6, b7; };
struct Unk_0203fe18_B4Bytes { u8 b0, b1, b2, b3; };
union Unk_0203fe18_B4 { u32 w; Unk_0203fe18_B4Bytes b; };
struct Unk_0203fe18_B3 { u8 b0, b1, b2; };
struct Unk_020400b0_Big { u8 pad[0x15e28]; u8 unk_15e28; u8 unk_15e29; u8 unk_15e2a; };
struct Unk_0203ff20_Entry { u16 unk_00; u8 unk_02, unk_03, unk_04, unk_05; };
struct Unk_0203ff50_Slot { u8 pad[0x10]; u8 unk_10, unk_11; u8 unk_12, unk_13; Unk_0203ff20_Entry ent[5]; long long unk_34; };
class Unk_020ad700 {
public:
    BOOL func_020ad650();
    s32 func_020ad680();
};
class Unk_021ed2c0 {
public:
    Unk_020ad700 *func_020ad3bc();
};
struct Unk_020d96fc_G { u8 b0, b1, b2, b3; };

class Unk_020d96fc : public Unk_020d8c7c {
public:
    Unk_020d96fc() {}
    virtual BOOL vfunc_0c();
};

extern "C" {
extern u8 data_021d7350[];
extern u16 data_021c3c88;
extern u32 data_021c3c8c;
extern u8 data_021ed168[];
extern u8 data_021ed174[];
extern Unk_020d96fc_G data_021ed170;
extern Unk_021ed2c0 data_021ed2c0;
extern u32 data_020c9060[];
extern u32 data_020c907c[];

s32 func_0209d2c0(Unk_0203fe18_Date*, s32);
s32 func_0209d164(Unk_0203fe18_Date*, s32);
void func_0209d498(Unk_0203fe18_Date*);
s32 func_0209cef4(void);
s32 func_0209cd00(Unk_0203fe18_B3*, u8*);
void func_0209d338(Unk_0203fe18_Date*, long long*);
s32 func_020974f8(void);
void func_02116048(const void*, void*, u32);
s32 func_0203f14c(void);
s32 func_0203f31c(u32, Unk_0203fe18_Date*, s32);
s32 func_0203f3a0(u32, Unk_0203fe18_Date*, void*);
s32 func_0203f508(void*, Unk_0203fe18_Date*);
s32 func_020ad194(void);
s32 func_02063b8c(s32);
s32 func_02040754(void*, void*, s32);
s32 func_02040778(void*, void*, s32);
s32 func_020407a8(void*, void*, void*);
}

extern "C" {
Unk_0203ff20_Entry* func_02040030(Unk_0203ff50_Slot*, s32);
s32 func_02040234(Unk_0203ff50_Slot*, u32);
Unk_0203ff20_Entry* func_0203ffe8(Unk_0203ff50_Slot*);
void func_02040050(Unk_0203ff50_Slot*);
void func_02040078(Unk_0203ff50_Slot*);
void func_0203ff10(Unk_0203ff20_Entry*);
void func_0203ff3c(Unk_0203ff20_Entry*);
void func_0203ff20(Unk_0203ff20_Entry*, u8, Unk_0203fe18_Date*);
void func_02040684(Unk_0203ff50_Slot*);
s32 func_020406c4(Unk_0203ff50_Slot*, u8*);
void func_02040410(Unk_0203ff50_Slot*);
void func_020404ac(Unk_0203ff50_Slot*, s32*, s32*, Unk_0203fe18_Date*);
void func_0204056c(Unk_0203ff50_Slot*, s32*, s32*, Unk_0203fe18_Date*);
void func_020405f4(Unk_0203ff50_Slot*, s32*, s32*, u8*, Unk_0203fe18_Date*);
void func_020402f8(Unk_0203ff50_Slot*, s32);
void func_020401d4(Unk_0203fe18_Date*, s32);
BOOL func_020400f8(Unk_0203fe18_B4);
}


#define SLOT ((Unk_0203ff50_Slot *)(data_021d7350 + 0x15e18))

extern "C" {

s32 func_020406c4(Unk_0203ff50_Slot *s, u8 *a) {
    s32 ids[7];
    s32 wts[7];
    s32 i;
    s32 sum;
    s32 k;
    s32 r;
    s32 m;
    s32 res = 0x63;
    s32 j;

    for (i = 0; i < 7; i++) {
        ids[i] = 0x63;
        wts[i] = 0;
    }
    sum = 0;
    k = 0;
    j = 0;
    for (; j < 7; j++) {
        s32 id = data_020c907c[j];
        if (func_02040754(s, a, id) == 0) {
            ids[k] = id;
            wts[k] = data_020c9060[j];
            k++;
            sum += data_020c9060[j];
        }
    }
    if (sum > 0) {
        r = func_02063b8c(sum);
        for (m = 0; m < k; m++) {
            r -= wts[m];
            if (r < 0) {
                res = ids[m];
                break;
            }
        }
    }
    return res;
}

void func_02040684(Unk_0203ff50_Slot *s) {
    Unk_0203ff20_Entry *e = func_02040030(s, 1);
    s32 i;
    for (i = 0; i < 5; e++, i++) func_0203ff3c(e);
    Unk_021ed2c0 *p = &data_021ed2c0;
    for (i = 0; i < 1; i++) {
        p->func_020ad3bc()->func_020ad650();
        p->func_020ad3bc()->func_020ad680();
    }
}

void func_020405f4(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, u8 *a, Unk_0203fe18_Date *pd) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        s32 v = 0x63;
        if (*cnt > 0) {
            s32 r6 = func_02040778(s, arr, *cnt);
            Unk_0203ff20_Entry *e;
            if (r6 >= 0) {
                v = func_020406c4(s, a);
                arr[r6] = z1;
                (*cnt)--;
            }
            e = func_02040030(s, r6 + 1);
            if (e) {
                Unk_0203fe18_Date d1, d2;
                ((s32*)&d1)[0] = z2;
                ((s32*)&d1)[1] = z2;
                func_02116048(pd, &d1, 8);
                func_0209d2c0(&d1, r6 + 1);
                func_02116048(&d1, &d2, 8);
                func_0203ff20(e, v, &d2);
            }
        }
        a[5] = v;
    }
}

void func_0204056c(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        s32 v = 0x63;
        if (*cnt > 0) {
            s32 r6 = func_02040778(s, arr, *cnt);
            Unk_0203ff20_Entry *e;
            if (r6 >= 0) {
                v = 0x45;
                arr[r6] = z1;
                (*cnt)--;
            }
            e = func_02040030(s, r6 + 1);
            if (e) {
                Unk_0203fe18_Date d1, d2;
                ((s32*)&d1)[0] = z2;
                ((s32*)&d1)[1] = z2;
                func_02116048(pd, &d1, 8);
                func_0209d2c0(&d1, r6 + 1);
                func_02116048(&d1, &d2, 8);
                func_0203ff20(e, v, &d2);
            }
        }
    }
}

void func_020404ac(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd) {
    Unk_0203fe18_B4 x;
    Unk_0203fe18_Date c, d, z, cp;
    if (*cnt > 0) {
        u8 *g = data_021d7350;
        s32 o = *cnt ? 0x15e28 : 0x15e28;
        u8 r4 = g[o];
        s32 *r6 = arr - 1 + r4;
        s32 t;
        if (*r6 != 0) {
            ((s32*)&c)[0] = 0;
            ((s32*)&c)[1] = 0;
            ((s32*)&d)[0] = 0;
            ((s32*)&d)[1] = 0;
            func_0209d498(&d);
            func_02116048(&d, &c, 8);
            t = r4 - func_0209cef4();
            if (t >= 0) func_0209d2c0(&c, t);
            else func_0209d164(&c, -t);
            x.b.b3 = c.b4;
            x.b.b2 = c.b3;
            if (!func_020400f8(x)) {
                Unk_0203ff20_Entry *e = func_02040030(s, r4);
                if (e) {
                    ((s32*)&z)[0] = 0;
                    ((s32*)&z)[1] = 0;
                    *r6 = 0;
                    (*cnt)--;
                    func_02116048(pd, &z, 8);
                    func_0209d2c0(&z, r4);
                    func_02116048(&z, &cp, 8);
                    func_0203ff20(e, 0x3d, &cp);
                }
            }
        }
    }
}

void func_02040410(Unk_0203ff50_Slot *s) {
    volatile s32 z;
    Unk_0203fe18_Date d, c1, c2;
    u8 arr[84];
    s32 i, r6;
    ((s32*)&d)[0] = 0;
    ((s32*)&d)[1] = 0;
    i = func_0209cef4();
    func_0209d498(&d);
    func_02040078(s);
    func_02116048(&d, &c1, 8);
    func_0203f508(arr, &c1);
    func_0209d498(&d);
    r6 = i - 1;
    i = 0;
    z = 0;
    for (; i <= r6; i++) {
        Unk_0203ff20_Entry *e = func_02040030(s, i + 1);
        if (e) {
            if (e->unk_02 != 0x63) {
                BOOL ok;
                func_02116048(&d, &c2, 8);
                ok = func_0203f3a0(e->unk_02, &c2, arr) == 0 ? TRUE : z;
                if (ok) {
                    func_0203ff10(e);
                } else if (i != r6 && e->unk_02 == 0x45) {
                    func_0203ff10(e);
                }
            }
        }
    }
}

void func_020402f8(Unk_0203ff50_Slot *s, s32 flag) {
    Unk_0203fe18_Date d;
    long long t;
    u8 a[6];
    s32 cnt;
    Unk_0203fe18_Date c1, c2, c3, c4;
    s32 arr[5];
    s32 r6, i, idx;
    ((s32*)&d)[0] = 0;
    ((s32*)&d)[1] = 0;
    t = 0;
    func_0209d498(&d);
    r6 = func_0209cef4();
    data_021c3c8c = d.b2;
    func_0209d338(&d, &t);
    if (s->unk_34 == 0 || s->unk_34 != t || flag != 0) {
        Unk_0203ff20_Entry *e = func_02040030(s, 1);
        for (i = 0; i < 5; e++, i++) a[i] = e->unk_02;
        a[5] = 0x63;
        func_02040684(s);
        func_02116048(&t, &c1, 8);
        cnt = func_020407a8(s, arr, &c1);
        func_02116048(&t, &c2, 8);
        func_020404ac(s, arr, &cnt, &c2);
        func_02116048(&t, &c3, 8);
        func_020405f4(s, arr, &cnt, a, &c3);
        func_02116048(&t, &c4, 8);
        func_0204056c(s, arr, &cnt, &c4);
        func_02116048(&t, &s->unk_34, 8);
    }
    func_02040410(s);
    idx = func_02040234(s, 0x3d);
    if ((u32)(idx - r6) <= 1) {
        Unk_0203ff20_Entry *e = func_02040030(s, idx);
        if (e) {
            if (e->unk_04 == 0) {
                func_020ad194();
                e->unk_04 = 1;
            }
        }
    }
}

void func_020402e8(void) {
    func_020402f8((Unk_0203ff50_Slot *)data_021ed168, 0);
}

void func_02040264(void) {
    if (func_0203f14c() != 1) {
        u8 *g = data_021d7350;
        Unk_0203fe18_Date d, c;
        Unk_0203ff20_Entry *e;
        u32 t;
        ((s32*)&d)[0] = 0;
        ((s32*)&d)[1] = 0;
        func_0209d498(&d);
        t = d.b2;
        if (data_021c3c8c != t) {
            data_021c3c8c = t;
            e = func_0203ffe8((Unk_0203ff50_Slot *)(g + 0x15e18));
            if (e) {
                u32 id = e->unk_02;
                if (id != 0x63) {
                    s32 r;
                    func_02116048(&d, &c, 8);
                    r = func_0203f31c(id, &c, 0);
                    switch (e->unk_03) {
                    case 0:
                        if (r == 2) e->unk_03 = 1;
                        break;
                    case 1:
                        if (r == 0) func_0203ff10(e);
                        break;
                    }
                }
            }
        }
    }
}

s32 func_02040234(Unk_0203ff50_Slot *s, u32 id) {
    s32 r = 0;
    Unk_0203ff20_Entry *e = func_02040030(s, 1);
    s32 i;
    for (i = 0; i < 5; e++, i++) {
        if (id == e->unk_02) {
            r = i + 1;
            break;
        }
    }
    return r;
}

void func_02040208(u32 id) {
    if (id >= 0x3e && id < 0x46) {
        Unk_0203ff20_Entry *e = func_0203ffe8((Unk_0203ff50_Slot *)data_021ed168);
        if (e) {
            if (id == e->unk_02) e->unk_04 = 1;
        }
    }
}

void func_020401d4(Unk_0203fe18_Date *d, s32 n) {
    func_0209d498(d);
    if (n == 1) {
        s32 t = func_0209cef4() + 1;
        func_0209d164(d, t);
    }
    else {
        s32 t = 7 - func_0209cef4();
        func_0209d2c0(d, t);
    }
}

BOOL func_02040188(Unk_0203fe18_B4 d) {
    BOOL r = FALSE;
    u8 b3 = d.b.b3;
    u8 b2 = d.b.b2;
    u8 *g = (u8 *)&data_021ed170;
    u8 c = g[2];
    if (c != 0 || g[1] != 1 || g[0] != 1) {
        Unk_0203fe18_B3 t;
        s32 n;
        t.b2 = c;
        t.b1 = b3;
        t.b0 = b2;
        n = func_0209cd00(&t, g);
        if (n >= 0 && n < 7) r = TRUE;
    }
    return r;
}

void func_02040144(u32 x, s32 flag) {
    Unk_020d96fc_G *g = &data_021ed170;
    if (flag == 0) {
        g->b0 = 1;
        g->b1 = 1;
        g->b2 = 0;
        g->b3 = 0;
    } else {
        Unk_0203fe18_Date d;
        ((s32*)&d)[0] = 0;
        ((s32*)&d)[1] = 0;
        func_020401d4(&d, x);
        g->b0 = d.b3;
        g->b1 = d.b4;
        g->b2 = d.b5;
    }
}

BOOL func_020400f8(Unk_0203fe18_B4 d) {
    BOOL r = FALSE;
    u8 b3 = d.b.b3;
    u8 b2 = d.b.b2;
    u8 *g = data_021ed174;
    u8 c = g[2];
    if (c != 0 || g[1] != 1 || g[0] != 1) {
        Unk_0203fe18_B3 t;
        s32 n;
        t.b2 = c;
        t.b1 = b3;
        t.b0 = b2;
        n = func_0209cd00(&t, g);
        if (n >= 0 && n < 7) r = TRUE;
    }
    return r;
}

BOOL func_020400b0(u32 id) {
    u8 *g = data_021d7350;
    BOOL r = FALSE;
    s32 o = id ? 0x15e2a : 0x15e2a;
    if (id == g[o]) {
        s32 n = func_020974f8();
        if (n == 7) {
            if (data_021c3c88 == 0xff) r = TRUE;
        } else if (((data_021c3c88 >> n) & 1) != 0) {
            r = TRUE;
        }
    }
    return r;
}

void func_02040078(Unk_0203ff50_Slot *s) {
    s32 r4 = func_0209cef4();
    Unk_0203ff20_Entry *e = func_0203ffe8(s);
    if (e) {
        u8 t = e->unk_02;
        if (r4 != s->unk_13 || t != s->unk_12) {
            s->unk_12 = t;
            s->unk_13 = r4;
        }
        func_02040050(s);
    }
}

void func_02040050(Unk_0203ff50_Slot *s) {
    Unk_0203ff20_Entry *e;
    data_021c3c88 = 0xff;
    e = func_0203ffe8((Unk_0203ff50_Slot *)data_021ed168);
    if (e) data_021c3c88 = e->unk_05;
}

Unk_0203ff20_Entry *func_02040030(Unk_0203ff50_Slot *s, s32 idx) {
    Unk_0203ff20_Entry *r = 0;
    if (idx >= 0 && idx <= 6 && idx != 0 && idx != 6) {
        r = s->ent + (idx - 1);
    }
    return r;
}

Unk_0203ff20_Entry *func_0203ffe8(Unk_0203ff50_Slot *unused) {
    u8 *g = data_021d7350;
    Unk_0203ff20_Entry *r = 0;
    s32 r4 = func_0209cef4();
    if (r4) {
        Unk_0203fe18_Date d;
        ((s32*)&d)[0] = 0;
        ((s32*)&d)[1] = 0;
        func_0209d498(&d);
        if (d.b2 < 6) r4--;
        r = func_02040030((Unk_0203ff50_Slot *)(g + 0x15e18), r4);
    }
    return r;
}

void func_0203ffa4(u32 id) {
    Unk_0203ff50_Slot *s = (Unk_0203ff50_Slot *)data_021ed168;
    Unk_0203ff20_Entry *e = func_02040030(s, func_02040234(s, id));
    if (e) {
        if (id == 0x44) {
            e->unk_05 = 0xff;
        } else {
            u32 m = 1 << func_020974f8();
            e->unk_05 = (e->unk_05 & ~m) | m;
        }
    }
}

BOOL func_0203ff50(u32 id, s32 idx) {
    BOOL r;
    Unk_0203ff20_Entry *e;
    u8 *g;
    if (id == 0x45) return FALSE;
    g = data_021d7350;
    r = FALSE;
    if (id == 0x60) id = 0x40;
    e = func_02040030((Unk_0203ff50_Slot *)(g + 0x15e18), idx);
    if (e) {
        if (id != e->unk_02) {
            r = TRUE;
        } else if ((u8)((e->unk_05 >> func_020974f8()) & 1) != 0) {
            r = TRUE;
        }
    }
    return r;
}

void func_0203ff3c(Unk_0203ff20_Entry *e) {
    e->unk_00 = 1;
    e->unk_02 = 0x63;
    e->unk_03 = 0;
    e->unk_04 = 0;
    e->unk_05 = 0;
}

void func_0203ff20(Unk_0203ff20_Entry *e, u8 id, Unk_0203fe18_Date *d) {
    func_0203ff3c(e);
    ((u8*)e)[1] = d->b4;
    ((u8*)e)[0] = d->b3;
    e->unk_02 = id;
}

void func_0203ff10(Unk_0203ff20_Entry *e) {
    if (e->unk_02 != 0x45) {
        e->unk_05 = 0xff;
        e->unk_03 = 2;
    }
}

void func_0203fed4(Unk_020d96fc_G *g) {
    g->b0 = 1;
    g->b1 = 1;
    g->b2 = 0;
    g->b3 = 0;
}

void func_0203fed0(void) {}

}

extern "C" Unk_020d96fc *func_0203fee4() {
    return new Unk_020d96fc();
}

extern "C" u8 func_0203fe18(u32 *self, u8 w0, Unk_0203fe18_B4 d, s32 type) {
    u8 b7 = d.b.b3;
    u8 b6 = d.b.b2;
    u8 r = 0;
    u32 v = *self;
    u32 nib = (v >> 4) & 0xf;
    u32 mode = (v >> 11) & 3;
    switch (mode) {
    case 0:
        r = nib;
        break;
    case 1:
        if (nib == 0) {
            r = b7;
        } else {
            Unk_0203fe18_Date t;
            s32 n;
            ((u32*)&t)[0] = 0;
            ((u32*)&t)[1] = 0;
            if (type == 0x48) n = -4; else n = self[1];
            ((u32*)&t)[0] = 0;
            ((u32*)&t)[1] = 0;
            t.b5 = w0;
            t.b4 = b7;
            t.b3 = b6;
            if (n < 0) n = -n;
            func_0209d2c0(&t, n);
            r = t.b4;
        }
        switch (type) {
        case 0x29:
        case 0x2a:
        case 0xb:
        case 0x48:
            if (r == 1 || r == 8) r = 2;
        }
        break;
    case 2:
        if (nib == 1) {

            r = (b7 & ~1) + 1;
        } else {
            r = (b7 + 1) & ~1;
        }
        break;
    }
    return r;
}
