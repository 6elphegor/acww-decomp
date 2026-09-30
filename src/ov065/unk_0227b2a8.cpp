// mwcc-flags: -O4,p
#include "types.h"

// ov065_046: HTTP client object (GameSpy-style) request/response state machine (0x0227b2a8..0x0227bb5c)

struct Unk_ov065_0227b2a8_Obj;

struct Unk_ov065_0227b2a8_Buf {
    Unk_ov065_0227b2a8_Obj *unk_00;
    char *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
};

struct Unk_ov065_0227b2a8_Obj {
    u8 pad_00[0x0c];
    s32 unk_0c;
    s32 unk_10;
    char *unk_14;
    char *unk_18;
    s32 unk_1c;
    u16 unk_20;
    char *unk_24;
    char *unk_28;
    u8 pad_2c[8];
    s32 unk_34;
    s32 unk_38;
    u8 pad_3c[0x0c];
    s32 unk_48;
    s32 unk_4c;
    Unk_ov065_0227b2a8_Buf unk_50;
    Unk_ov065_0227b2a8_Buf unk_74;
    Unk_ov065_0227b2a8_Buf unk_98;
    Unk_ov065_0227b2a8_Buf unk_bc;
    u8 pad_e0[4];
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    u8 pad_f4[4];
    s32 unk_f8;
    s32 unk_fc;
    s32 unk_100;
    s32 unk_104;
    u8 pad_108[8];
    s32 unk_110;
    char unk_114[12];
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    u8 pad_12c[4];
    s32 unk_130;
    s32 unk_134;
    u8 pad_138[4];
    s32 unk_13c;
    u8 pad_140[8];
    s32 unk_148;
    s32 unk_14c;
    u8 pad_150[12];
    char *unk_15c;
    u16 unk_160;
    s32 unk_164;
    s32 unk_168;
    s32 unk_16c;
    s32 unk_170;
    s32 (*unk_174)(Unk_ov065_0227b2a8_Obj *, void *);
};

struct Unk_ov065_0227b9c4_Addr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02261408_Hostent {
    u8 pad_00[0x0c];
    u32 **unk_0c;
};

extern "C" {
extern char data_ov065_0228ccb8[];
extern char data_ov065_0228ccbc[];
extern char data_ov065_0228ccc0[];
extern char data_ov065_0228ccd0[];
extern char data_ov065_0228ccd8[];
extern char data_ov065_0228cce0[];
extern char data_ov065_0228cce8[];
extern char data_ov065_0228ccf4[];
extern char data_ov065_0228ccfc[];
extern char data_ov065_0228cd04[];
extern char data_ov065_0228cd10[];
extern char data_ov065_0228cd20[];
extern char data_ov065_0228cd2c[];
extern char data_ov065_0228cd38[];
extern char data_ov065_0228cd40[];
extern char data_ov065_0228cd44[];
extern char data_ov065_0228cd54[];
extern char data_ov065_0228cd64[];
extern s32 data_ov065_0228ca50;
extern char *data_ov065_022910c4;
extern u16 data_ov065_022910c0;
extern u16 data_0213a510[];

char *func_0212a120(const char *, s32);
void func_02128a00(void *, const void *, s32);
s32 func_02128ca4(const char *, const char *, ...);
char *func_02129f1c(const char *hay, const char *needle);
s32 func_0212a15c(const char *, const char *, u32);
s32 func_021130d0(char *buf, const char *fmt, ...);

s32 func_ov065_02278be8(s32);
s32 func_ov065_02278bf4(char *);
s32 func_ov065_02278d34(s32 a, void *src, u32 len);
s32 func_ov065_02278dd4(s32 a, s32 b);
s32 func_ov065_02278f0c(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 func_ov065_0227905c(s32 sock, s32 val);
s32 func_ov065_0227908c(s32 sock, s32 flag);
s32 func_ov065_02279138();
s32 func_ov065_022791c0(Unk_ov065_0227b2a8_Obj *);
s32 func_ov065_0227924c(void *);
s32 func_ov065_02279258(Unk_ov065_0227b2a8_Buf *, s32);
s32 func_ov065_02279280(Unk_ov065_0227b2a8_Buf *, s32);
s32 func_ov065_022792a4(Unk_ov065_0227b2a8_Buf *, const char *, const char *);
s32 func_ov065_0227931c(void *, const char *, s32);
s32 func_ov065_02279588(Unk_ov065_0227b2a8_Obj *);
s32 func_ov065_022795d4(Unk_ov065_0227b2a8_Obj *, s32, s32);
s32 func_ov065_02279714(Unk_ov065_0227b2a8_Obj *, char *, s32 *);
s32 func_ov065_0227a3f4(Unk_ov065_0227b2a8_Obj *);
s32 func_ov065_0227a884(Unk_ov065_0227b2a8_Obj *);
char *func_ov065_0227ac08(Unk_ov065_0227b2a8_Obj *);
Unk_ov065_02261408_Hostent *func_ov065_02261408(char *);
s32 func_ov065_0227bbf4(Unk_ov065_0227b2a8_Obj *);

void func_ov065_0227b404(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 func_ov065_0227b450(Unk_ov065_0227b2a8_Obj *self);
s32 func_ov065_0227b480(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 func_ov065_0227b5d4(Unk_ov065_0227b2a8_Obj *self);
}

#define HTONS(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

static inline s32 Unk_ov065_0227b5d4_Chk(char *s, s32 i) {
    BOOL bad = TRUE;
    s32 v;
    s32 ch = s[i];
    if (ch >= 0 && ch < 0x80) {
        bad = FALSE;
    }
    if (bad) {
        v = 0;
    } else {
        v = data_0213a510[ch] & 0x100;
    }
    return v;
}

extern "C" {

s32 func_ov065_0227b2a8(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    if (self->unk_110 != 0) {
        while (n > 0) {
            if (self->unk_128 == 0) {
                char *nl = func_0212a120(p, 10);
                if (nl != 0) {
                    func_ov065_0227b404(self, p, nl - p);
                    s32 k = nl + 1 - p;
                    n -= k;
                    p = nl + 1;
                    self->unk_124 = func_ov065_0227b450(self);
                    s32 t = self->unk_124;
                    if (t == -1) {
                        self->unk_fc = 1;
                        self->unk_38 = 7;
                        return 0;
                    }
                    if (t == 0) {
                        self->unk_128 = 3;
                    } else {
                        self->unk_128 = 1;
                    }
                } else {
                    func_ov065_0227b404(self, p, n);
                    return 1;
                }
            } else if (self->unk_128 == 1) {
                s32 c = self->unk_124;
                if (c >= n) {
                    c = n;
                }
                if (func_ov065_0227b480(self, p, c) == 0) {
                    return 0;
                }
                p += c;
                n -= c;
                self->unk_124 = self->unk_124 - c;
                if (self->unk_124 == 0) {
                    self->unk_128 = 2;
                }
            } else if (self->unk_128 == 2) {
                char *nl = func_0212a120(p, 10);
                if (nl == 0) {
                    return 1;
                }
                nl = nl + 1;
                n -= nl - p;
                p = nl;
                self->unk_114[0] = 0;
                self->unk_120 = 0;
                self->unk_124 = 0;
                self->unk_128 = 0;
            } else if (self->unk_128 == 3) {
                self->unk_fc = 1;
                return 1;
            } else {
                return 0;
            }
        }
        return 1;
    }
    return func_ov065_0227b480(self, p, n);
}

void func_ov065_0227b404(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    if (n != 0 && self->unk_120 < 10) {
        s32 l = 10 - self->unk_120;
        if (l >= n) {
            l = n;
        }
        func_02128a00(self->unk_114 + self->unk_120, p, l);
        self->unk_120 += l;
        self->unk_114[self->unk_120] = 0;
    }
}

s32 func_ov065_0227b450(Unk_ov065_0227b2a8_Obj *self) {
    s32 v;
    if (func_02128ca4(self->unk_114, data_ov065_0228ccb8, &v) != 1) {
        return -1;
    }
    return v;
}

s32 func_ov065_0227b480(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    char *a = 0;
    s32 b = 0;
    self->unk_100 += n;
    if (self->unk_100 == self->unk_104 || self->unk_130 != 0) {
        self->unk_fc = 1;
    }
    if (self->unk_0c == 0) {
        if (func_ov065_0227931c(&self->unk_bc, p, n) == 0) {
            return 0;
        }
        a = self->unk_bc.unk_04;
        b = self->unk_bc.unk_0c;
    } else if (self->unk_0c == 1) {
        if (n != 0) {
            self->unk_fc = 1;
            self->unk_38 = 13;
            return 0;
        }
        a = p;
        b = n;
    } else if (self->unk_0c == 2) {
        a = p;
        b = n;
    }
    func_ov065_022795d4(self, (s32)a, b);
    return 1;
}

void func_ov065_0227b51c(Unk_ov065_0227b2a8_Obj *self) {
    s32 len;
    char buf[0x400];
    s32 r;
    len = 0x400;
    r = func_ov065_02279714(self, buf, &len);
    if (r == 3) {
        return;
    }
    if (r == 1) {
        if (self->unk_74.unk_10 == self->unk_74.unk_0c) {
            return;
        }
    }
    if (r == 0) {
        if (func_ov065_0227931c(&self->unk_74, buf, len) == 0) {
            return;
        }
    }
    char *e = func_02129f1c(self->unk_74.unk_04, data_ov065_0228ccbc);
    if (e != 0) {
        s32 d;
        *e = 0;
        d = e - self->unk_74.unk_04;
        self->unk_f8 = d + 1;
        if (func_ov065_0227b5d4(self) == 0) {
            return;
        }
        self->unk_74.unk_10 = d + 2;
        self->unk_10 = 7;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (r == 2) {
        self->unk_fc = 1;
        self->unk_38 = 7;
        self->unk_4c = func_ov065_02278be8(self->unk_48);
    }
}

s32 func_ov065_0227b5d4(Unk_ov065_0227b2a8_Obj *self) {
    s32 a, b, c, d;
    s32 r;
    r = func_02128ca4(self->unk_74.unk_04, data_ov065_0228ccc0, &a, &b, &c, &d);
    while (self->unk_74.unk_04[d] != 0 && Unk_ov065_0227b5d4_Chk(self->unk_74.unk_04, d) != 0) {
        d++;
    }
    if (r != 3 || a < 1 || c < 100 || c >= 0x258) {
        self->unk_fc = 1;
        self->unk_38 = 7;
        return 0;
    }
    self->unk_e4 = a;
    self->unk_e8 = b;
    self->unk_ec = c;
    self->unk_f0 = d;
    return 1;
}

void func_ov065_0227b68c(Unk_ov065_0227b2a8_Obj *self) {
    s32 v[2];
    if (func_ov065_02278f0c(self->unk_48, v, 0, 0) == -1) {
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = func_ov065_02278be8(self->unk_48);
        return;
    }
    if (v[0] != 0) {
        self->unk_10 = 6;
        func_ov065_022795d4(self, 0, 0);
    }
}

void func_ov065_0227b6dc(Unk_ov065_0227b2a8_Obj *self) {
    s32 old = self->unk_148;
    s32 r = func_ov065_0227a3f4(self);
    if (r == 0) {
        func_ov065_0227a884(self);
        return;
    }
    if (old != self->unk_148) {
        func_ov065_02279588(self);
    }
    if (r == 1) {
        func_ov065_0227a884(self);
        self->unk_10 = 5;
        func_ov065_022795d4(self, 0, 0);
    }
}

void func_ov065_0227b72c(Unk_ov065_0227b2a8_Obj *self) {
    Unk_ov065_0227b2a8_Buf *b;
    char tmp[0x14];
    if (self->unk_50.unk_0c == 0) {
        b = &self->unk_50;
        const char *m;
        if (self->unk_13c != 0) {
            m = data_ov065_0228ccd0;
        } else if (self->unk_0c == 3) {
            m = data_ov065_0228ccd8;
        } else {
            m = data_ov065_0228cce0;
        }
        func_ov065_0227931c(b, m, 0);
        if (self->unk_15c != 0 || data_ov065_022910c4 != 0) {
            func_ov065_0227931c(b, self->unk_14, 0);
        } else {
            func_ov065_0227931c(b, self->unk_24, 0);
        }
        func_ov065_0227931c(b, data_ov065_0228cce8, 0);
        if (self->unk_20 == 0x50) {
            func_ov065_022792a4(b, data_ov065_0228ccf4, self->unk_18);
        } else {
            func_ov065_0227931c(b, data_ov065_0228ccfc, 0);
            func_ov065_0227931c(b, self->unk_18, 0);
            func_ov065_02279280(b, 0x3a);
            func_ov065_02279258(b, self->unk_20);
            func_ov065_0227931c(b, data_ov065_0228ccbc, 2);
        }
        if (self->unk_28 == 0 || func_02129f1c(self->unk_28, data_ov065_0228cd04) == 0) {
            func_ov065_022792a4(b, data_ov065_0228cd04, data_ov065_0228cd10);
        }
        if (self->unk_34 != 0) {
            func_ov065_022792a4(b, data_ov065_0228cd20, data_ov065_0228cd2c);
        } else {
            func_ov065_022792a4(b, data_ov065_0228cd20, data_ov065_0228cd38);
        }
        if (self->unk_13c != 0) {
            func_021130d0(tmp, data_ov065_0228cd40, self->unk_14c);
            func_ov065_022792a4(b, data_ov065_0228cd44, tmp);
            func_ov065_022792a4(b, data_ov065_0228cd54, func_ov065_0227ac08(self));
        }
        if (self->unk_28 != 0) {
            func_ov065_0227931c(b, self->unk_28, 0);
        }
        func_ov065_0227931c(b, data_ov065_0228ccbc, 2);
        if (b != &self->unk_50) {
            func_ov065_0227931c(&self->unk_50, b->unk_04, b->unk_0c);
        }
    }
    if (func_ov065_022791c0(self) != 0 && self->unk_50.unk_10 >= self->unk_50.unk_0c) {
        func_ov065_0227924c(&self->unk_50);
        if (self->unk_13c != 0) {
            self->unk_10 = 4;
        } else {
            self->unk_10 = 5;
        }
        func_ov065_022795d4(self, 0, 0);
    }
}

void func_ov065_0227b8e4(Unk_ov065_0227b2a8_Obj *self) {
    s32 len;
    char buf[0x400];
    if (self->unk_168 == 0) {
        if (func_0212a15c(self->unk_14, data_ov065_0228cd64, 8) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 0x11;
            return;
        }
        self->unk_10 = 3;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (self->unk_170 != 0) {
        self->unk_10 = 3;
        func_ov065_022795d4(self, 0, 0);
        return;
    }
    if (self->unk_16c == 0) {
        if (self->unk_174(self, &self->unk_164) == 3) {
            return;
        }
    }
    if (self->unk_50.unk_10 < self->unk_50.unk_0c) {
        if (func_ov065_022791c0(self) == 0) {
            return;
        }
        if (self->unk_50.unk_10 < self->unk_50.unk_0c) {
            return;
        }
        func_ov065_0227924c(&self->unk_50);
    }
    len = 0x400;
    func_ov065_02279714(self, buf, &len);
}

void func_ov065_0227b9c4(Unk_ov065_0227b2a8_Obj *self) {
    Unk_ov065_0227b9c4_Addr sa;
    s32 r;
    s32 w[2];
    if (self->unk_48 == -1) {
        self->unk_48 = func_ov065_02278dd4(2, 1);
        if (self->unk_48 == -1) {
            self->unk_fc = 1;
            self->unk_38 = 5;
            self->unk_4c = func_ov065_02278be8(self->unk_48);
            return;
        }
        if (func_ov065_0227908c(self->unk_48, 0) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 5;
            self->unk_4c = func_ov065_02278be8(self->unk_48);
            return;
        }
        if (self->unk_134 != 0) {
            func_ov065_0227905c(self->unk_48, data_ov065_0228ca50);
        }
        u32 *z = (u32 *)&sa;
        z[0] = 0;
        z[1] = 0;
        sa.family = 2;
        if (self->unk_15c != 0) {
            sa.port = HTONS(self->unk_160);
        } else if (data_ov065_022910c4 != 0) {
            sa.port = HTONS(data_ov065_022910c0);
        } else {
            sa.port = HTONS(self->unk_20);
        }
        sa.addr = self->unk_1c;
        r = func_ov065_02278d34(self->unk_48, &sa, 8);
        if (r == -1) {
            s32 e = func_ov065_02278be8(self->unk_48);
            if (e != -6 && e != -26 && e != -76) {
                self->unk_fc = 1;
                self->unk_38 = 6;
                self->unk_4c = e;
                return;
            }
        }
    }
    r = func_ov065_02278f0c(self->unk_48, 0, &w[0], &w[1]) > 0 ? 1 : 0;
    if (r == -1 || w[1] != 0) {
        self->unk_fc = 1;
        self->unk_38 = 6;
        if (r == 0) {
            self->unk_4c = func_ov065_02278be8(self->unk_48);
        }
        return;
    }
    if (w[0] != 0) {
        self->unk_10 = 2;
        func_ov065_022795d4(self, 0, 0);
    }
}

void func_ov065_0227bb5c(Unk_ov065_0227b2a8_Obj *self) {
    char *h;
    func_ov065_022795d4(self, 0, 0);
    func_ov065_02279138();
    if (func_ov065_0227bbf4(self) == 0) {
        self->unk_fc = 1;
        self->unk_38 = 3;
        return;
    }
    h = self->unk_15c;
    if (h == 0) {
        h = data_ov065_022910c4;
        if (h == 0) {
            h = self->unk_18;
        }
    }
    self->unk_1c = func_ov065_02278bf4(h);
    if (self->unk_1c == -1) {
        Unk_ov065_02261408_Hostent *he = func_ov065_02261408(h);
        if (he == 0) {
            self->unk_fc = 1;
            self->unk_38 = 4;
            return;
        }
        self->unk_1c = **he->unk_0c;
    }
    self->unk_10 = 1;
    func_ov065_022795d4(self, 0, 0);
}

}
