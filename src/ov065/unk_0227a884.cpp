// mwcc-flags: -O4,p
#include "types.h"

// ov065_045: HTTP request task list / response header parsing (0x0227a884..0x0227ae94)

typedef void (*Unk_ov065_02278740_Dtor)(void *);

struct Unk_ov065_022786bc_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    Unk_ov065_02278740_Dtor unk_10;
    u8 *unk_14;
};

// entry of the request-part vector (type 0/1/2)
struct Unk_ov065_0227a884_Rec {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
};

// runtime item built from a Rec
struct Unk_ov065_0227a8ec_Item {
    Unk_ov065_0227a884_Rec *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;

};

struct Unk_ov065_0227acfc_Task {
    Unk_ov065_022786bc_Vec *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};

struct Unk_ov065_0227a884_Obj {
    u8 unk_00[0xc];
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14[4];
    char *unk_18;
    u8 unk_1c[4];
    u16 unk_20;
    u8 unk_22[0x38 - 0x22];
    s32 unk_38;
    u8 unk_3c[0x48 - 0x3c];
    s32 unk_48;
    s32 unk_4c;
    u8 unk_50[0x74 - 0x50];
    s32 unk_74;
    u8 *unk_78;
    u8 unk_7c[4];
    s32 unk_80;
    s32 unk_84;
    u8 unk_88[0xec - 0x88];
    s32 unk_ec;
    u8 unk_f0[4];
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    s32 unk_100;
    s32 unk_104;
    char *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u8 unk_114;
    u8 unk_115[0x120 - 0x115];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    u8 unk_12c[0x13c - 0x12c];
    Unk_ov065_0227acfc_Task *unk_13c;
    Unk_ov065_022786bc_Vec *unk_140;
    s32 unk_144;
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    s32 unk_154;
    u32 unk_158;
};

struct Unk_ov065_0227ae94_Blk {
    char b[11];
};

extern "C" {
extern volatile s32 data_ov065_022910e8;
extern volatile s32 data_ov065_022910e4;
extern volatile s32 data_ov065_022910e0;
extern volatile s32 data_ov065_022910dc;
extern char data_ov065_0228cbc4[];
extern char data_ov065_0228cbec[];
extern char data_ov065_0228cbf0[];
extern char data_ov065_0228cc34[];
extern char data_ov065_0228cb6c[];
extern char data_ov065_0228cc64[];
extern char data_ov065_0228cc6c[];
extern char data_ov065_0228cc70[];
extern char data_ov065_0228cc7c[];
extern char data_ov065_0228cc8c[];
extern char data_ov065_0228cc9c[];
extern char data_ov065_0228cc58[];
extern u16 data_0213a510[];

s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
void func_ov065_02278688(Unk_ov065_022786bc_Vec *);
void func_ov065_02278658(Unk_ov065_022786bc_Vec *, void *);
Unk_ov065_022786bc_Vec *func_ov065_022786bc(s32, s32, Unk_ov065_02278740_Dtor);
void *func_ov065_02277af0(s32);
void func_ov065_02277ac8(void *);
char *func_ov065_02279100(const char *);
s32 func_ov065_02279144(void);
s32 func_ov065_02279714(void *, u8 *, s32 *);
s32 func_ov065_0227931c(void *, u8 *, s32);
void func_ov065_0227924c(void *);
void func_ov065_022795d4(void *, u32, u32);
s32 func_ov065_02278be8(s32);
s32 func_ov065_0227b2a8(void *, u8 *, s32);
u32 func_021277d4(const char *);
void func_02128250(s32);
s32 func_02128318(s32, s32, s32);
s32 func_02128650(s32);
void func_021282f0(s32);
s32 func_02133150(s32, s32);
void func_021289b4(void *, void *, s32);
char *func_02129f1c(char *, char *);
u32 func_0212a060(char *, char *);
char *func_0212a120(char *, s32);
s32 func_0212a15c(char *, char *, s32);
s32 func_0212b770(char *);
s32 func_021130d0(char *, char *, ...);

s32 func_ov065_0227aa74(Unk_ov065_0227a884_Obj *self);
void func_ov065_0227a9ec(Unk_ov065_0227a8ec_Item *it);
s32 func_ov065_0227aa10(Unk_ov065_0227a8ec_Item *it);
s32 func_ov065_0227aaa8(Unk_ov065_0227a884_Obj *self);
s32 func_ov065_0227aba8(Unk_ov065_0227a884_Obj *self);
void func_ov065_0227ace0(Unk_ov065_0227acfc_Task *t);
void func_ov065_0227ad54(Unk_ov065_0227a884_Rec *r);
}

extern "C" {

void func_ov065_0227a884(Unk_ov065_0227a884_Obj *self) {
    if (self->unk_140 != NULL) {
        s32 n = func_ov065_02278684(self->unk_140);
        s32 i = 0;
        if (i < n) {
            do {
                func_ov065_0227a9ec((Unk_ov065_0227a8ec_Item *)func_ov065_0227866c(self->unk_140, i));
                i++;
            } while (i < n);
        }
        func_ov065_02278688(self->unk_140);
        self->unk_140 = NULL;
    }
    if (self->unk_13c != NULL) {
        if (self->unk_13c->unk_10 != 0) {
            func_ov065_0227ace0(self->unk_13c);
            self->unk_13c = NULL;
        }
    }
}

s32 func_ov065_0227a8ec(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227a8ec_Item item;
    s32 n;
    s32 i;
    if (self->unk_13c == NULL) {
        return 0;
    }
    self->unk_144 = 0;
    self->unk_148 = 0;
    self->unk_14c = 0;
    self->unk_150 = self->unk_13c->unk_04;
    self->unk_154 = self->unk_13c->unk_08;
    n = func_ov065_02278684(self->unk_13c->unk_00);
    self->unk_140 = func_ov065_022786bc(0x10, n, NULL);
    if (self->unk_140 == NULL) {
        return 0;
    }
    i = 0;
    if (i < n) {
        Unk_ov065_0227a8ec_Item *pi = &item;
        volatile s32 z = 0;
        do {
            Unk_ov065_0227a884_Rec *rec = (Unk_ov065_0227a884_Rec *)func_ov065_0227866c(self->unk_13c->unk_00, i);
            s32 t = z;
            pi->unk_00 = (Unk_ov065_0227a884_Rec *)t;
            pi->unk_04 = t;
            pi->unk_08 = t;
            pi->unk_0c = t;
            item.unk_00 = rec;
            if (func_ov065_0227aa10(pi) == 0) {
                for (i--; i >= 0; i--) {
                    func_ov065_0227a9ec((Unk_ov065_0227a8ec_Item *)func_ov065_0227866c(self->unk_140, i));
                }
                func_ov065_02278688(self->unk_140);
                self->unk_140 = NULL;
                return 0;
            }
            func_ov065_02278658(self->unk_140, pi);
            i++;
        } while (i < n);
    }
    self->unk_14c = func_ov065_0227aa74(self);
    return 1;
}

void func_ov065_0227a9ec(Unk_ov065_0227a8ec_Item *it) {
    switch (it->unk_00->unk_00) {
    case 0:
        break;
    case 1:
        if (it->unk_08 != 0) {
            func_02128250(it->unk_08);
        }
        it->unk_08 = 0;
        break;
    }
}

s32 func_ov065_0227aa10(Unk_ov065_0227a8ec_Item *it) {
    s32 t = it->unk_00->unk_00;
    s32 z = 0;
    it->unk_04 = -1;
    if (t == 0) {
    } else if (t == 1) {
        if (it->unk_08 == 0) {
            return z;
        }
        if (func_02128318(it->unk_08, z, 2) != 0) {
            return 0;
        }
        it->unk_0c = func_02128650(it->unk_08);
        if (it->unk_0c == -1) {
            return 0;
        }
        func_021282f0(it->unk_08);
    } else if (t == 2) {
    } else {
        return z;
    }
    return 1;
}

s32 func_ov065_0227aa74(Unk_ov065_0227a884_Obj *self) {
    if (self->unk_13c == NULL) {
        return 0;
    }
    if (self->unk_13c->unk_0c != 0) {
        return func_ov065_0227aaa8(self);
    }
    return func_ov065_0227aba8(self);
}

s32 func_ov065_0227aaa8(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227acfc_Task *t = self->unk_13c;
    s32 sum = 0;
    s32 n;
    s32 i;
    if (data_ov065_022910e8 == 0) {
        s32 l = func_021277d4(data_ov065_0228cbc4);
        data_ov065_022910e8 = l;
        data_ov065_022910e4 = l + 0x2f;
        data_ov065_022910e0 = l + 0x4c;
        data_ov065_022910dc = l + 4;
    }
    n = func_ov065_02278684(t->unk_00);
    for (i = 0; i < n; i++) {
        Unk_ov065_0227a884_Rec *r = (Unk_ov065_0227a884_Rec *)func_ov065_0227866c(t->unk_00, i);
        if (r->unk_00 == 0) {
            sum += data_ov065_022910e4;
            sum += func_021277d4(r->unk_04);
            sum += (s32)r->unk_0c;
        } else if (r->unk_00 == 1) {
            sum += data_ov065_022910e0;
            sum += func_021277d4(r->unk_04);
            sum += func_021277d4(r->unk_0c);
            sum += func_021277d4(r->unk_10);
            sum += (s32)((Unk_ov065_0227a884_Rec *)func_ov065_0227866c(self->unk_140, i))->unk_0c;
        } else if (r->unk_00 == 2) {
            sum += data_ov065_022910e0;
            sum += func_021277d4(r->unk_04);
            sum += func_021277d4(r->unk_10);
            sum += func_021277d4(r->unk_14);
            sum += (s32)r->unk_0c;
        } else {
            return 0;
        }
    }
    return sum + data_ov065_022910dc;
}

s32 func_ov065_0227aba8(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227acfc_Task *t = self->unk_13c;
    s32 sum = 0;
    s32 n;
    s32 i;
    n = func_ov065_02278684(t->unk_00);
    if (n == 0) {
        return sum;
    }
    i = sum;
    if (i < n) {
        do {
            Unk_ov065_0227a884_Rec *r = (Unk_ov065_0227a884_Rec *)func_ov065_0227866c(t->unk_00, i);
            s32 l = func_021277d4(r->unk_04);
            s32 t = sum + l;
            s32 u = t + (s32)r->unk_0c;
            sum = u + (s32)r->unk_14 * 2 + 1;
            i++;
        } while (i < n);
    }
    return sum + (n - 1);
}

char *func_ov065_0227ac08(Unk_ov065_0227a884_Obj *self) {
    if (self->unk_13c == NULL) {
        return data_ov065_0228cbec;
    }
    if (self->unk_13c->unk_0c != 0) {
        return data_ov065_0228cbf0;
    }
    return data_ov065_0228cc34;
}

struct Unk_ov065_0227ac34_Item {
    s32 unk_00;
    char *unk_04;
    char *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

s32 func_ov065_0227ac34(Unk_ov065_0227acfc_Task *self, char *a, char *b) {
    s32 len;
    s32 cnt;
    s32 i;
    s32 c;
    a = func_ov065_02279100(a);
    b = func_ov065_02279100(b);
    if (a == NULL || b == NULL) {
        func_ov065_02277ac8(a);
        func_ov065_02277ac8(b);
        return 0;
    }
    Unk_ov065_0227ac34_Item item = {0, 0, 0, 0, 0, 0};
    item.unk_00 = 0;
    item.unk_04 = a;
    item.unk_08 = b;
    len = func_021277d4(b);
    item.unk_0c = len;
    item.unk_10 = 0;
    c = func_0212a060(b, data_ov065_0228cb6c);
    if (c != len) {
        cnt = 0;
        item.unk_10 = 1;
        for (i = 0; b[i] != 0; i++) {
            c = b[i];
            if (func_0212a120(data_ov065_0228cb6c, c) == NULL && c != 0x20) {
                cnt++;
            }
        }
        item.unk_14 = cnt;
    }
    func_ov065_02278658(self->unk_00, &item);
    return 1;
}

void func_ov065_0227ace0(Unk_ov065_0227acfc_Task *t) {
    func_ov065_02278688(t->unk_00);
    func_ov065_02277ac8(t);
}

s32 func_ov065_0227acf8(Unk_ov065_0227acfc_Task *t) {
    return t->unk_10;
}

// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_0227acfc_Z { Unk_ov065_0227acfc_Z_0 = 0, Unk_ov065_0227acfc_Z_FF = 0xff };
#pragma enumsalwaysint reset

Unk_ov065_0227acfc_Task *func_ov065_0227acfc(void) {
    Unk_ov065_0227acfc_Task *t = (Unk_ov065_0227acfc_Task *)func_ov065_02277af0(0x14);
    u8 *p;
    u32 i;
    u8 *q;
    u8 *k;
    Unk_ov065_0227acfc_Z z;
    if (t == NULL) {
        return NULL;
    }
    q = (u8 *)t;
    k = (u8 *)0x14;
    z = Unk_ov065_0227acfc_Z_0;
    do {
        *q++ = z;
        k--;
    } while (k != NULL);
    t->unk_10 = 1;
    t->unk_00 = func_ov065_022786bc(0x18, 0, (Unk_ov065_02278740_Dtor)func_ov065_0227ad54);
    if (t->unk_00 == NULL) {
        func_ov065_02277ac8(t);
        return NULL;
    }
    return t;
}

void func_ov065_0227ad54(Unk_ov065_0227a884_Rec *r) {
    func_ov065_02277ac8(r->unk_04);
    if (r->unk_00 == 0) {
        func_ov065_02277ac8(r->unk_08);
    } else if (r->unk_00 == 1) {
        func_ov065_02277ac8(r->unk_08);
        func_ov065_02277ac8(r->unk_0c);
        func_ov065_02277ac8(r->unk_10);
    } else if (r->unk_00 == 2) {
        func_ov065_02277ac8(r->unk_10);
        func_ov065_02277ac8(r->unk_14);
    }
}

void func_ov065_0227ada4(Unk_ov065_0227a884_Obj *self) {
    s32 len;
    u8 buf[0x2000];
    s32 start = func_ov065_02279144();
    u32 elapsed = 0;
    s32 r;
    while (self->unk_fc == 0 && elapsed < self->unk_158) {
        len = 0x2000;
        r = func_ov065_02279714(self, buf, &len);
        if (r == 3 || r == 1) {
            break;
        }
        if (r == 2) {
            self->unk_fc = 1;
            if (self->unk_104 > 0 && self->unk_100 < self->unk_104) {
                self->unk_38 = 0xf;
                return;
            }
            break;
        }
        if (func_ov065_0227b2a8(self, buf, len) == 0) {
            break;
        }
        elapsed = func_ov065_02279144() - start;
    }
}

void func_ov065_0227ae94(Unk_ov065_0227a884_Obj *self) {
    s32 len;
    u8 buf[0x1000];
    s32 r4;
    s32 off;
    u8 *p;
    u8 *rest;
    s32 rem;
    char *q;
    char *digits;
    s32 st;
    char *e;
    len = 0x1000;
    r4 = func_ov065_02279714(self, buf, &len);
    if (r4 == 3) {
        return;
    }
    if (r4 == 1 && self->unk_84 == self->unk_80) {
        return;
    }
    if (r4 == 0 && func_ov065_0227931c(&self->unk_74, buf, len) == 0) {
        return;
    }
    off = self->unk_84;
    p = self->unk_78 + off;
    self->unk_f4 = off;
    q = func_02129f1c((char *)p, data_ov065_0228cc64);
    if (q == NULL) {
        q = func_02129f1c((char *)p, data_ov065_0228cc6c);
    }
    if (q == NULL) {
        goto nomatch;
    }
    q[2] = 0;
    rest = (u8 *)q + 4;
    rem = self->unk_80 - (rest - self->unk_78);
    self->unk_80 = (u8 *)(q + 2) - self->unk_78;
    self->unk_f8 = (u8 *)(q + 2) - self->unk_78;
    self->unk_84 = self->unk_f8;
    st = func_02133150(self->unk_ec, 100);
    if (st == 1) {
        if (rem != 0) {
            func_021289b4(self->unk_78, rest, rem + 1);
            self->unk_80 = rem;
            self->unk_84 = 0;
        } else {
            func_ov065_0227924c(&self->unk_74);
        }
        self->unk_10 = 6;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (st == 3) {
        if (self->unk_10c > 10) {
            self->unk_fc = 1;
            self->unk_38 = 0xb;
            return;
        }
        q = func_02129f1c((char *)p, data_ov065_0228cc70);
        if (q != NULL) {
            char *d = q + 9;
            s32 c;
            s32 v;
            goto t1;
        l1:
            d++;
        t1:
            c = *d;
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v != 0) {
                goto l1;
            }
            e = d;
            goto t2;
        l2:
            e++;
        t2:
            c = *e;
            if (c == 0) {
                goto d2;
            }
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v == 0) {
                goto l2;
            }
        d2:
            *e = 0;
            if (*d == '/') {
                s32 l = func_021277d4(self->unk_18);
                s32 m = func_021277d4(d);
                self->unk_108 = (char *)func_ov065_02277af0(l + 0xe + m);
                if (self->unk_108 == NULL) {
                    self->unk_fc = 1;
                    self->unk_38 = 1;
                }
                func_021130d0(self->unk_108, data_ov065_0228cc7c, self->unk_18, self->unk_20, d);
                return;
            }
            self->unk_108 = func_ov065_02279100(d);
            if (self->unk_108 != NULL) {
                return;
            }
            self->unk_fc = 1;
            self->unk_38 = 1;
            return;
        }
    }
    q = func_02129f1c((char *)p, data_ov065_0228cc8c);
    if (q != NULL) {
        s32 n;
        char *d0;
        s32 dl;
        char *t;
        Unk_ov065_0227ae94_Blk hb = *(Unk_ov065_0227ae94_Blk *)data_ov065_0228cc58;
        char *hdr = hb.b;
        e = q + 0x10;
        t = e;
        n = func_021277d4(hdr);
        while (t != NULL && *t != 0 && *t != 10 && *t != 13 && *t != 0x20) {
            t++;
        }
        dl = t - e;
        if (dl > n) {
            self->unk_fc = 1;
            self->unk_38 = 0x10;
            return;
        }
        if (n == dl) {
            if (func_0212a15c(e, hdr, dl) >= 0) {
                self->unk_fc = 1;
                self->unk_38 = 0x10;
                return;
            }
        }
        self->unk_104 = func_0212b770(e);
    }
    self->unk_110 = func_02129f1c((char *)p, data_ov065_0228cc9c) != NULL ? 1 : 0;
    if (self->unk_110 != 0) {
        self->unk_114 = 0;
        self->unk_120 = 0;
        self->unk_124 = 0;
        self->unk_128 = 0;
    }
    if ((u32)(self->unk_0c - 3) <= 1) {
        self->unk_fc = 1;
        return;
    }
    self->unk_10 = 8;
    if (q != NULL) {
        if (self->unk_104 == 0) {
            self->unk_fc = 1;
            return;
        }
    }
    if (rem > 0) {
        func_ov065_0227b2a8(self, rest, rem);
    }
    return;
nomatch:
    if (r4 == 2) {
        self->unk_fc = 1;
        self->unk_38 = 7;
        self->unk_4c = func_ov065_02278be8(self->unk_48);
    }
}

}
