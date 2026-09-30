// mwcc-flags: -O4,p
#include "types.h"

// ov065_043: SSL/TCP socket object table (0x02279588..0x02279e04)

struct Unk_ov065_02279c7c;

typedef void (*Unk_ov065_02279588_Cb1)(u32, u32, u32, u32, u32, u32);
typedef void (*Unk_ov065_022795d4_Cb2)(u32, u32, u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_0227960c_Cb3)(u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_022798f8_Cb4)(Unk_ov065_02279c7c *, void *, u8 *, s32 *, u8 *, s32 *);
typedef void (*Unk_ov065_02279a64_Cb5)(Unk_ov065_02279c7c *, void *);

struct Unk_ov065_02279c7c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    Unk_ov065_022795d4_Cb2 unk_3c;
    Unk_ov065_0227960c_Cb3 unk_40;
    u32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u32 unk_50[3];
    u32 unk_5c;
    u32 unk_60[5];
    u32 unk_74;
    u8 *unk_78;
    s32 unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u32 unk_8c[3];
    u32 unk_98;
    u8 *unk_9c;
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    u32 unk_ac[4];
    u32 unk_bc;
    u32 unk_c0;
    u32 unk_c4[5];
    u32 unk_d8;
    u32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
    s32 unk_f0;
    s32 unk_f4;
    s32 unk_f8;
    s32 unk_fc;
    u32 unk_100;
    u32 unk_104;
    void *unk_108;
    s32 unk_10c;
    s32 unk_110;
    u32 unk_114[6];
    s32 unk_12c;
    s32 unk_130;
    u32 unk_134;
    u32 unk_138;
    void *unk_13c;
    u32 unk_140;
    u32 unk_144;
    u32 unk_148;
    u32 unk_14c;
    Unk_ov065_02279588_Cb1 unk_150;
    u32 unk_154;
    u32 unk_158;
    void *unk_15c;
    u16 unk_160;
    u32 unk_164;
    u32 unk_168;
    u32 unk_16c;
    u32 unk_170;
    u32 unk_174;
    Unk_ov065_02279a64_Cb5 unk_178;
    u32 unk_17c;
    Unk_ov065_022798f8_Cb4 unk_180;
};

extern "C" {
extern Unk_ov065_02279c7c **data_ov065_022910d4;
extern s32 data_ov065_022910c8;
extern s32 data_ov065_022910cc;
extern s32 data_ov065_022910d0;
extern u32 data_ov065_0228ca4c;
extern s32 data_ov065_0228ca50;

u32 func_ov065_02278684(u32);
s32 func_ov065_02278ca0(s32, u8 *, s32, s32);
s32 func_ov065_02278ce0(s32, u8 *, s32, s32);
s32 func_ov065_02278be8(s32);
void func_ov065_02278da4(s32, s32);
void func_ov065_02278dbc(s32);
u32 func_ov065_02279144();
BOOL func_ov065_02279168(void *, u8 *, s32 *);
void func_ov065_0227924c(void *);
BOOL func_ov065_0227931c(void *, u8 *, s32);
void func_ov065_0227946c(void *);
BOOL func_ov065_022794d0(void *, void *, s32, s32);
BOOL func_ov065_0227953c(void *, s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277ad8(void *, u32);
void *func_ov065_02277af0(u32);
void func_ov065_0227a884(void *);
BOOL func_ov065_0227acf8(void *);
void func_ov065_0227ace0(void *);
void func_021289b4(void *, void *, u32);
void func_0212899c(void *, s32, u32);

void func_ov065_022799f4();
void func_ov065_022799f8();
BOOL func_ov065_02279b58(Unk_ov065_02279c7c *);
s32 func_ov065_02279e04();
BOOL func_ov065_022798f8(Unk_ov065_02279c7c *);
void func_ov065_02279b08(BOOL (*)(Unk_ov065_02279c7c *));
}

extern "C" {

void func_ov065_02279588(Unk_ov065_02279c7c *self) {
    if (self->unk_150 != 0) {
        u32 a = func_ov065_02278684(self->unk_140);
        self->unk_150(self->unk_04, self->unk_148, self->unk_14c, self->unk_144, a, self->unk_44);
    }
}

void func_ov065_022795d4(Unk_ov065_02279c7c *self, u32 p1, u32 p2) {
    if (self->unk_3c != 0) {
        self->unk_3c(self->unk_04, self->unk_10, p1, p2, self->unk_100, self->unk_104, self->unk_44);
    }
}

void func_ov065_0227960c(Unk_ov065_02279c7c *self) {
    if (self->unk_40 != 0) {
        u32 a;
        u32 b;
        if (self->unk_0c != 0) {
            a = 0;
            b = 0;
        } else {
            a = self->unk_c0;
            b = self->unk_100;
        }
        s32 r = self->unk_40(self->unk_04, self->unk_38, a, b, self->unk_44);
        if (a != 0 && r == 0) {
            self->unk_d8 = 1;
        }
    }
}

s32 func_ov065_022796a8(Unk_ov065_02279c7c *self, u8 *buf, s32 len);

s32 func_ov065_02279654(Unk_ov065_02279c7c *self, u8 *buf, s32 len) {
    s32 r = 0;
    if (self->unk_5c == 0) {
        r = func_ov065_022796a8(self, buf, len);
        if (r == -1) {
            return 0;
        }
        if (r == len) {
            return 1;
        }
    }
    if (func_ov065_0227931c(&self->unk_50, buf + r, len - r) == 0) {
        return 0;
    }
    return 2;
}

s32 func_ov065_022796a8(Unk_ov065_02279c7c *self, u8 *buf, s32 len) {
    s32 r = func_ov065_02278ca0(self->unk_48, buf, len, 0);
    if (r == -1) {
        s32 e = func_ov065_02278be8(self->unk_48);
        if (e == -6 || e == -26 || e == -76) {
            return 0;
        }
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = e;
        return -1;
    }
    if (self->unk_10 == 4) {
        self->unk_148 += r;
    }
    return r;
}

s32 func_ov065_02279714(Unk_ov065_02279c7c *self, u8 *buf, s32 *plen) {
    s32 len;
    s32 n = *plen - 1;
    if (self->unk_134 != 0) {
        u32 t = func_ov065_02279144();
        if (t < self->unk_138 + data_ov065_0228ca4c) {
            return 1;
        }
        self->unk_138 = t;
        if (n >= data_ov065_0228ca50) {
            n = data_ov065_0228ca50;
        }
    }
    if (self->unk_84 < self->unk_80) {
        func_ov065_02279168(&self->unk_74, buf, plen);
        if (self->unk_84 == self->unk_80) {
            self->unk_80 = self->unk_f8;
            self->unk_84 = self->unk_f8;
        }
        return 0;
    }
    len = func_ov065_02278ce0(self->unk_48, buf, n, 0);
    if (len == -1) {
        s32 e = func_ov065_02278be8(self->unk_48);
        if (e == -6 || e == -26 || e == -76) {
            return 1;
        }
        self->unk_fc = 1;
        self->unk_38 = 5;
        self->unk_4c = e;
        self->unk_130 = 1;
        return 3;
    }
    if (len == 0) {
        self->unk_130 = 1;
        return 2;
    }
    if (self->unk_168 != 0) {
        if (func_ov065_0227931c(&self->unk_98, buf, len) == 0) {
            return 3;
        }
        if (func_ov065_022798f8(self) == 0) {
            self->unk_fc = 1;
            self->unk_38 = 0x11;
            return 3;
        }
        if (self->unk_80 - self->unk_84 <= 0) {
            buf[0] = 0;
            *plen = 0;
            return 1;
        }
        len = *plen - 1;
        if (func_ov065_02279168(&self->unk_74, buf, &len) == 0) {
            return 3;
        }
        if (self->unk_84 == self->unk_80) {
            self->unk_80 = self->unk_f8;
            self->unk_84 = self->unk_f8;
        }
        if (len <= 0) {
            return 1;
        }
    }
    s32 r = 0;
    buf[len] = 0;
    *plen = len;
    if (len <= 0) {
        r = 1;
    }
    return r;
}

BOOL func_ov065_022798f8(Unk_ov065_02279c7c *self) {
    s32 inl = 0;
    s32 outl = 0;
    s32 r;
    do {
        s32 pos = self->unk_a8;
        u8 *in = self->unk_9c + pos;
        inl = self->unk_a4 - pos;
        s32 w = self->unk_80;
        u8 *out = self->unk_78 + w;
        outl = self->unk_7c - w;
        r = self->unk_180(self, &self->unk_164, in, &inl, out, &outl);
        if (r == 2 && func_ov065_0227953c(&self->unk_74, self->unk_88) == 0) {
            return FALSE;
        }
    } while (r == 2 && outl == 0);
    self->unk_a8 += inl;
    self->unk_80 += outl;
    if (self->unk_a8 > 0xff) {
        s32 rest = self->unk_a4 - self->unk_a8;
        if (rest == 0) {
            func_ov065_0227924c(&self->unk_98);
        } else {
            func_021289b4(self->unk_9c, self->unk_9c + self->unk_a8, rest);
            self->unk_a8 = 0;
            self->unk_a4 = rest;
        }
    }
    if (r == 3) {
        self->unk_fc = 1;
        self->unk_38 = 0x11;
        return FALSE;
    }
    return TRUE;
}

void func_ov065_02279a04() {
    if (data_ov065_022910d4 != 0) {
        s32 i;
        func_ov065_02279b08(func_ov065_02279b58);
        for (i = 0; i < data_ov065_022910c8; i++) {
            func_ov065_02277ac8(data_ov065_022910d4[i]);
        }
        func_ov065_02277ac8(data_ov065_022910d4);
        data_ov065_022910d4 = 0;
        data_ov065_022910c8 = 0;
        data_ov065_022910cc = 0;
    }
}

void func_ov065_02279a64(Unk_ov065_02279c7c *self) {
    self->unk_10 = 0;
    func_ov065_02277ac8(self->unk_14);
    self->unk_14 = self->unk_108;
    self->unk_108 = 0;
    func_ov065_02277ac8(self->unk_18);
    self->unk_18 = 0;
    self->unk_1c = 0;
    self->unk_20 = 0;
    func_ov065_02277ac8(self->unk_24);
    self->unk_24 = 0;
    func_ov065_02278da4(self->unk_48, 2);
    func_ov065_02278dbc(self->unk_48);
    self->unk_48 = -1;
    func_ov065_0227924c(&self->unk_50);
    func_ov065_0227924c(&self->unk_74);
    func_ov065_0227924c(&self->unk_98);
    self->unk_e4 = 0;
    self->unk_e8 = 0;
    self->unk_ec = 0;
    self->unk_f0 = 0;
    self->unk_f4 = 0;
    self->unk_f8 = 0;
    self->unk_130 = 0;
    self->unk_10c++;
}

void func_ov065_02279b08(BOOL (*cb)(Unk_ov065_02279c7c *)) {
    if (data_ov065_022910cc > 0) {
        s32 i;
        func_ov065_022799f8();
        for (i = 0; i < data_ov065_022910c8; i++) {
            Unk_ov065_02279c7c *s = data_ov065_022910d4[i];
            if (s->unk_00 != 0) {
                cb(s);
            }
        }
        func_ov065_022799f4();
    }
}

BOOL func_ov065_02279b58(Unk_ov065_02279c7c *s) {
    if (s == 0) {
        return FALSE;
    }
    if (s->unk_00 == 0) {
        return FALSE;
    }
    if (s->unk_04 < 0) {
        return FALSE;
    }
    if (s->unk_04 >= data_ov065_022910c8) {
        return FALSE;
    }
    func_ov065_022799f8();
    func_ov065_02277ac8(s->unk_14);
    func_ov065_02277ac8(s->unk_18);
    func_ov065_02277ac8(s->unk_24);
    func_ov065_02277ac8(s->unk_28);
    func_ov065_02277ac8(s->unk_108);
    func_ov065_02277ac8(s->unk_15c);
    if (s->unk_48 != -1) {
        func_ov065_02278da4(s->unk_48, 2);
        func_ov065_02278dbc(s->unk_48);
    }
    func_ov065_0227946c(&s->unk_50);
    func_ov065_0227946c(&s->unk_74);
    func_ov065_0227946c(&s->unk_98);
    func_ov065_0227946c(&s->unk_bc);
    if (s->unk_140 != 0) {
        func_ov065_0227a884(s);
    }
    if (s->unk_13c != 0) {
        if (func_ov065_0227acf8(s->unk_13c) != 0) {
            func_ov065_0227ace0(s->unk_13c);
            s->unk_13c = 0;
        }
    }
    if (s->unk_16c != 0) {
        if (s->unk_178 != 0) {
            s->unk_178(s, &s->unk_164);
        }
        s->unk_16c = 0;
    }
    s->unk_00 = 0;
    data_ov065_022910cc--;
    func_ov065_022799f4();
    return TRUE;
}

Unk_ov065_02279c7c *func_ov065_02279c7c() {
    Unk_ov065_02279c7c *s;
    s32 idx;
    BOOL r;
    func_ov065_022799f8();
    idx = func_ov065_02279e04();
    if (idx == -1) {
        func_ov065_022799f4();
        return 0;
    }
    s = data_ov065_022910d4[idx];
    func_0212899c(s, 0, 0x184);
    s->unk_00 = 1;
    s->unk_04 = idx;
    s->unk_08 = data_ov065_022910d0++;
    s->unk_0c = 0;
    s->unk_10 = 0;
    s->unk_14 = 0;
    s->unk_18 = 0;
    s->unk_1c = 0;
    s->unk_20 = 0;
    s->unk_24 = 0;
    s->unk_28 = 0;
    s->unk_2c = 0;
    s->unk_30 = 0;
    s->unk_34 = 0;
    s->unk_38 = 0;
    s->unk_3c = 0;
    s->unk_40 = 0;
    s->unk_44 = 0;
    s->unk_48 = -1;
    s->unk_4c = 0;
    s->unk_e0 = 0;
    s->unk_e4 = 0;
    s->unk_e8 = 0;
    s->unk_ec = 0;
    s->unk_f0 = 0;
    s->unk_f4 = 0;
    s->unk_f8 = 0;
    s->unk_fc = 0;
    s->unk_100 = 0;
    s->unk_104 = -1;
    s->unk_108 = 0;
    s->unk_10c = 0;
    s->unk_110 = 0;
    s->unk_12c = 0;
    s->unk_134 = 0;
    s->unk_138 = 0;
    s->unk_13c = 0;
    s->unk_158 = 0x1f4;
    s->unk_160 = 0x50;
    s->unk_15c = 0;
    s->unk_164 = 0;
    r = func_ov065_022794d0(s, &s->unk_50, 0x800, 0x1000);
    if (r != 0) {
        r = func_ov065_022794d0(s, &s->unk_74, 0x800, 0x800);
    }
    if (r != 0) {
        r = func_ov065_022794d0(s, &s->unk_98, 0x800, 0x400);
    }
    if (r == 0) {
        func_ov065_02279b58(s);
        func_ov065_022799f4();
        return 0;
    }
    data_ov065_022910cc++;
    func_ov065_022799f4();
    return s;
}

s32 func_ov065_02279e04() {
    s32 i = 0;
    s32 base;
    s32 end;
    for (i = 0; i < data_ov065_022910c8; i++) {
        if (data_ov065_022910d4[i]->unk_00 == 0) {
            return i;
        }
    }
    base = data_ov065_022910c8;
    end = base + 4;
    void *p = func_ov065_02277ad8(data_ov065_022910d4, end * 4);
    if (p == 0) {
        return -1;
    }
    data_ov065_022910d4 = (Unk_ov065_02279c7c **)p;
    i = base;
    for (; i < end; i++) {
        data_ov065_022910d4[i] = (Unk_ov065_02279c7c *)func_ov065_02277af0(0x184);
        if (data_ov065_022910d4[i] == 0) {
            for (i--; i >= base; i--) {
                func_ov065_02277ac8(data_ov065_022910d4[i]);
            }
            return -1;
        }
        data_ov065_022910d4[i]->unk_00 = 0;
    }
    data_ov065_022910c8 = end;
    return base;
}

void func_ov065_022799f4() {}
void func_ov065_022799f8() {}
void func_ov065_022799fc() {}
void func_ov065_02279a00() {}

}

