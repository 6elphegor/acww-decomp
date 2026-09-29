#include "types.h"

struct Unk_0207cd94 {
    u8 pad_000[0x6cc];
    u16 unk_6cc[4];
    u8 pad_6d4[0x1d];
    u8 unk_6f1;
};

struct Unk_0207d1bc_Data {
    u32 a;
    u32 b;
    u32 c;
};

struct Unk_0207d164_Entry {
    s8 unk_0;
    u8 pad_1[3];
    BOOL (*unk_4)(u32, u32, u32);
};

extern "C" {
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern u8 data_020e0648[];
extern Unk_0207d164_Entry data_020cc148[];

s32 func_02097868(void *, s32);
s32 func_0209888c(...);
s32 func_02094218(s32);
s32 func_0209865c(s32);
s32 func_0207dff4(u32, s32);
u8 *func_020783f8();
s32 func_020805c4(void *);
s32 func_0207bfb4(void *, s32);
s32 func_020030b4(s32);
s32 func_0204be70(u16 *);
s32 func_02063b8c(s32);
s32 func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
s32 func_02077380(void *, u16 *);
s32 func_0209750c();
s32 func_0207f854(void *, s32);
u32 func_02080b40(s32);
s32 func_020b35f8(void *, void *, void *);
s32 func_02080dd8(s32);
s32 func_0207e310(void *);
s32 func_0207856c(s32);
s32 func_02080b38(s32, s32);
s32 func_0209411c(s32);
void func_0209d498(void *);
s32 func_02094058(s32);
s32 func_020978a4(void *);
s32 func_02098840(u32);
u16 *func_020986fc();
s32 func_02098750();
s32 func_02097d1c(s32, s32);

static inline BOOL Unk_0207d3b0_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

BOOL func_0207cd48(u32 a);
void func_0207cd94(Unk_0207cd94 *self);
u32 func_0207cdb0(Unk_0207cd94 *self);
BOOL func_0207cdbc(void *self);
void func_0207ce00(void *self);
BOOL func_0207ce24(void *self);
void func_0207ce70(u16 *out, Unk_0207cd94 *self);
void func_0207ceb4(u16 *out, Unk_0207cd94 *self);
BOOL func_0207cf10(Unk_0207cd94 *self, u16 *key);
s32 func_0207cf54(Unk_0207cd94 *self, u16 *key);
void func_0207cfb8(Unk_0207cd94 *self, u16 *val);
void func_0207d028(Unk_0207cd94 *self);
u16 *func_0207d074(Unk_0207cd94 *self, u32 idx);
void func_0207d08c(Unk_0207cd94 *self);
void func_0207d0a8(void *self, void *out, s32 p);
u32 func_0207d0f4(void *self, s32 r, s32 p);
u32 func_0207d164(u32 a, u32 b, u32 c);

BOOL func_0207cd48(u32 a) {
    u8 *g = data_021d735c;
    s32 i;
    for (i = 0; i < 4; i++) {
        s32 t = func_02097868(g, i);
        if (func_02094218(func_0209888c())) {
            if (func_0207dff4(a, func_0209865c(t))) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

void func_0207cd94(Unk_0207cd94 *self) {
    self->unk_6f1++;
    if (self->unk_6f1 >= 6) {
        self->unk_6f1 = 0;
    }
}

u32 func_0207cdb0(Unk_0207cd94 *self) {
    return self->unk_6f1;
}

BOOL func_0207cdbc(void *self) {
    s32 a = *(s8 *)(func_020783f8() + 0x161);
    s32 b = func_0207bfb4(data_021dfd8c, func_020805c4(self));
    if (func_020030b4(func_020805c4(self)) && b == a) {
        return TRUE;
    }
    return FALSE;
}

void func_0207ce00(void *self) {
    if (func_0207ce24(self)) {
        *(s8 *)(func_020783f8() + 0x160) = -1;
    }
}

BOOL func_0207ce24(void *self) {
    s32 a = *(s8 *)(func_020783f8() + 0x160);
    s32 b = func_0207bfb4(data_021dfd8c, func_020805c4(self));
    if (func_020030b4(func_020805c4(self)) && a != -1 && b == a) {
        return TRUE;
    }
    return FALSE;
}

void func_0207ce70(u16 *out, Unk_0207cd94 *self) {
    u16 *p;
    s32 best;
    s32 i;
    *out = 0xfff1;
    p = func_0207d074(self, 0);
    best = 0;
    for (i = 0; i < 4; p++, i++) {
        if (*p != 0xfff1) {
            s32 r = func_0204be70(p);
            if (r >= best) {
                *out = *p;
                best = r;
            }
        }
    }
}

void func_0207ceb4(u16 *out, Unk_0207cd94 *self) {
    u16 *p;
    s32 cnt;
    s32 i;
    *out = 0xfff1;
    p = func_0207d074(self, 0);
    cnt = 0;
    for (i = 0; i < 4; i++) {
        if (p[i] != 0xfff1) {
            cnt++;
        }
    }
    if (cnt > 0) {
        cnt = func_02063b8c(cnt);
        for (i = 0; i < 4; p++, i++) {
            if (*p != 0xfff1) {
                if (cnt == 0) {
                    *out = *p;
                    break;
                }
                cnt--;
            }
        }
    }
}

BOOL func_0207cf10(Unk_0207cd94 *self, u16 *key) {
    s32 idx = func_0207cf54(self, key);
    if (idx != -1) {
        self->unk_6cc[idx] = 0xfff1;
        func_0207d028(self);
        func_02077380(self, func_0207d074(self, 0));
        return TRUE;
    }
    return FALSE;
}

s32 func_0207cf54(Unk_0207cd94 *self, u16 *key) {
    u16 *p = func_0207d074(self, 0);
    s32 i;
    BOOL z0 = FALSE;
    BOOL z1 = FALSE;
    for (i = 0; i < 4; p++, i++) {
        BOOL r;
        if (func_0204b2d4(key)) {
            r = (func_0204b25c(key) == func_0204b25c(p)) ? TRUE : z0;
        } else {
            r = (*key == *p) ? TRUE : z1;
        }
        if (r) {
            return i;
        }
    }
    return -1;
}

void func_0207cfb8(Unk_0207cd94 *self, u16 *val) {
    u16 tmp;
    s32 idx;
    func_0207d028(self);
    tmp = 0xfff1;
    idx = func_0207cf54(self, &tmp);
    if (idx != -1) {
        self->unk_6cc[idx] = *val;
    } else {
        s32 i = 0;
        s32 n;
        do {
            n = i + 1;
            self->unk_6cc[i] = self->unk_6cc[n];
            i = n;
        } while (n < 3);
        self->unk_6cc[3] = *val;
    }
    func_02077380(self, func_0207d074(self, 0));
}

void func_0207d028(Unk_0207cd94 *self) {
    s32 i;
    s32 j;
    for (i = 0; i < 3; i++) {
        if (self->unk_6cc[i] == 0xfff1) {
            for (j = i + 1; j < 4; j++) {
                if (self->unk_6cc[j] != 0xfff1) {
                    self->unk_6cc[i] = self->unk_6cc[j];
                    self->unk_6cc[j] = 0xfff1;
                    break;
                }
            }
            if (j == 4) {
                break;
            }
        }
    }
}

u16 *func_0207d074(Unk_0207cd94 *self, u32 idx) {
    if (idx < 4) {
        return &self->unk_6cc[idx];
    }
    return NULL;
}

void func_0207d08c(Unk_0207cd94 *self) {
    u16 *p = self->unk_6cc;
    s32 i;
    for (i = 0; i < 4; p++, i++) {
        *p = 0xfff1;
    }
}

void func_0207d0a8(void *self, void *out, s32 p) {
    s32 r;
    if (p == 0) {
        p = func_0209750c();
    }
    r = 0;
    if (p != 0) {
        r = func_0207f854(self, func_0209888c(p));
    }
    if (r != 0) {
        u32 v = func_02080b40(r);
        if (v < 0x58) {
            u8 b = v;
            func_020b35f8(out, &b, data_020e0648);
        }
    }
}

u32 func_0207d0f4(void *self, s32 r, s32 p) {
    u32 ret = 0x58;
    if (func_020030b4(func_020805c4(self))) {
        if (p == 0) {
            p = func_0209750c();
        }
        if (p != 0 && r == 0) {
            r = func_0207f854(self, func_0209888c(p));
        }
        if (r != 0) {
            ret = func_02080dd8(r);
            ret = func_0207d164(p, ret, func_0207856c(func_0207e310(self)));
            func_02080b38(r, ret);
        }
    }
    return ret;
}

u32 func_0207d164(u32 a, u32 b, u32 c) {
    s32 t = func_0209411c(func_0209888c());
    Unk_0207d164_Entry *e = data_020cc148;
    u32 ret = 0x58;
    s32 i;
    for (i = 0; i < 0x58; e++, i++) {
        if (e->unk_0 == 2 || e->unk_0 == t) {
            if (e->unk_4(a, b, c)) {
                ret = (u8)i;
                break;
            }
        }
    }
    return ret;
}

BOOL func_0207d1b8() {
    return TRUE;
}

BOOL func_0207d1bc() {
    Unk_0207d1bc_Data d;
    u32 v;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    v = *(u8 *)&d.b;
    if (v >= 6 && v <= 8) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d1e4() {
    Unk_0207d1bc_Data d;
    u32 v;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    v = *(u8 *)&d.b;
    if (v >= 9 && v <= 11) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d20c() {
    Unk_0207d1bc_Data d;
    u32 v;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    v = *(u8 *)&d.b;
    if (v == 12 || (v >= 1 && v <= 2)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d238() {
    if (func_02094058(func_0209888c()) == 0 && func_020978a4(data_021d735c) >= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d264() {
    if (func_02094058(func_0209888c()) == 0 && func_020978a4(data_021d735c) == 4) {
        return TRUE;
    }
    return FALSE;
}

#define ROLE(name, lo, hi)                                                      \
    BOOL name(u32 a, u32 b, u32 c) {                                            \
        if (func_02098840(a) == lo || func_02098840(a) == hi) {                 \
            return TRUE;                                                        \
        }                                                                       \
        return FALSE;                                                           \
    }

ROLE(func_0207d290, 7, 15)
ROLE(func_0207d2b4, 6, 14)
ROLE(func_0207d2d8, 5, 13)
ROLE(func_0207d2fc, 4, 12)
ROLE(func_0207d320, 3, 11)
ROLE(func_0207d344, 2, 10)
ROLE(func_0207d368, 1, 9)
ROLE(func_0207d38c, 0, 8)

BOOL func_0207d3b0(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(func_020986fc(), 0x1431, 0x1470)) {
        if (func_0207d38c(a, b, c) || func_0207d368(a, b, c) || func_0207d320(a, b, c) || func_0207d2d8(a, b, c) ||
            func_0207d290(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}

BOOL func_0207d430(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(func_020986fc(), 0x1431, 0x1470)) {
        if (func_0207d344(a, b, c) || func_0207d2fc(a, b, c) || func_0207d2b4(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}

BOOL func_0207d494(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(func_020986fc(), 0x1431, 0x1470)) {
        if (func_0207d344(a, b, c) || func_0207d320(a, b, c) || func_0207d2b4(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}

BOOL func_0207d4f8(u32 a, u32 b, u32 c) {
    BOOL r = FALSE;
    if (Unk_0207d3b0_InRange(func_020986fc(), 0x1431, 0x1470)) {
        if (func_0207d38c(a, b, c) || func_0207d368(a, b, c) || func_0207d2fc(a, b, c) || func_0207d2d8(a, b, c) ||
            func_0207d290(a, b, c)) {
            r = TRUE;
        }
    }
    return r;
}

BOOL func_0207d578() {
    if (func_02097d1c(func_02098750(), 1) >= 60000) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d59c() {
    s32 v = func_02097d1c(func_02098750(), 1);
    if (v >= 40000 && v < 60000) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d5cc() {
    s32 v = func_02097d1c(func_02098750(), 1);
    if (v >= 20000 && v < 40000) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d5fc() {
    s32 v = func_02097d1c(func_02098750(), 1);
    if (v >= 10000 && v < 20000) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d62c() {
    if (func_02097d1c(func_02098750(), 1) <= 1000) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0207d650() {
    if (func_02097d1c(func_02098750(), 1) <= 300) {
        return TRUE;
    }
    return FALSE;
}
}
