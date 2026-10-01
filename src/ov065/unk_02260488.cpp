// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov065_02260488_Q68;
struct Unk_ov065_02260488_Q64;

struct Unk_ov065_02260488_File {
    u8 pad_00[0x0a];
    u16 unk_0a;
    u8 pad_0c[0x64 - 0x0c];
    Unk_ov065_02260488_Q64 *unk_64;
    Unk_ov065_02260488_Q68 *unk_68;
    u8 pad_6c[4];
    s16 unk_70;
    s8 unk_72;
    s8 unk_73;
    u16 unk_74;
    u16 unk_76;
    u32 unk_78;
    Unk_ov065_02260488_File *unk_7c;
};

struct Unk_ov065_02260488_Q68 {
    u8 pad_00[0x20];
    u8 unk_20[0xc0];
    u8 unk_e0[0x18];
    s32 unk_f8;
    u8 *unk_fc;
    u16 unk_100;
    u16 unk_102;
    u8 unk_104[8];
    u32 unk_10c;
};

struct Unk_ov065_02260488_Q64 {
    u8 pad_00[0x100];
    s32 unk_100;
    u32 unk_104;
    u16 unk_108;
    u8 pad_10a[2];
    u8 unk_10c[4];
};

struct Unk_ov065_02260488_Node {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c;
    u8 unk_0d;
    u8 pad_0e[2];
    u8 *unk_10;
    s32 unk_14;
    u8 *unk_18;
    s32 unk_1c;
    u16 unk_20;
    u8 pad_22[2];
    u16 unk_24;
    u16 unk_26;
    u32 unk_28;
};

struct Unk_ov065_02260488_Msg {
    Unk_ov065_02260488_Msg *unk_00;
    Unk_ov065_02260488_File *unk_04;
    u32 unk_08;
};

struct Unk_ov065_02260488_Alloc {
    u8 pad_00[0x18];
    void *(*unk_18)(u32);
    void (*unk_1c)(void *);
    u8 pad_20[8];
    s32 unk_28;
};

typedef Unk_ov065_02260488_File File;
typedef Unk_ov065_02260488_Q68 Q68;
typedef Unk_ov065_02260488_Q64 Q64;
typedef Unk_ov065_02260488_Node Node;
typedef Unk_ov065_02260488_Alloc Alloc;

extern "C" {
u32 func_01ffa2ec();
void func_01ffa3d4(u32);
s32 func_01ffa3b4();
void func_02116048(void *, void *, u32);
void func_02115fb4(void *, s32, u32);
void func_02113720(void *);
void func_02113788(void *);
void func_02113254();
void func_0211321c();
void func_02113554();
s32 func_02114188(void *, void *, s32);
void func_02114234(void *, s32, s32);
void func_021136a0(void *);
void func_021132e0(s32);
s32 func_02114354(void *);
void func_02114480(void *);
void func_02114410(void *);

void func_ov065_022603bc();
Node *func_ov065_0225f4d4(void *, u32, s32);
s32 func_ov065_0225f3f8(u32, Node *);
void func_ov065_0225f4b8(void *);
void func_ov065_0225f46c(void *, s32);
void func_ov065_0225f458(void *, void *);
s32 func_ov065_0225f524();
s32 func_ov065_02261638(void *);
s32 func_ov065_02262a80();
void func_ov065_02262a44(void *);
void func_ov065_02262a34();
void func_ov065_022627d4();
void func_ov065_02262788();
void func_ov065_02262998();
void func_ov065_022649b8();
void func_ov065_022649fc(s32);
s32 func_ov065_02264a08();
void func_ov065_0226ab40(s32);
s32 func_ov065_02260ee0(s32);
s32 func_ov065_02260f04(void *);
void func_ov065_02260f2c(void *);
void func_ov065_02260f6c(void *);
void func_ov065_02260f7c(void *);

extern File *data_ov065_0228ea14;
extern File *data_ov065_0228ea10;
extern File *data_ov065_0228e9b0;
extern Alloc *data_ov065_0228e9a0;
extern u32 data_ov065_0228e9a8;
extern u32 data_ov065_0228e9ac;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228e9b4[];
extern u32 data_ov065_0228ebfc[2];

s32 func_ov065_02260488(File *self, u8 *buf, s32 len, s32 off, u32 a5, u32 a6, s32 wait);
s32 func_ov065_02260598(File *self);
s32 func_ov065_022605bc(File *self, s32 max, s32 want, s32 *out, s32 wait);
s32 func_ov065_02260628(File *self, u8 *buf, s32 len, s32 a4, u32 a5, s32 wait);
s32 func_ov065_022606e8(File *self, u8 *buf, s32 len, s32 a4, u32 a5, u32 a6);
s32 func_ov065_022607c4(Unk_ov065_02260488_Msg *m);
s32 func_ov065_022607ec(File *self);
void func_ov065_022608a4();
void func_ov065_022608d4(void *q);
void func_ov065_02260944(File *self);
s32 func_ov065_02260a00(Unk_ov065_02260488_Msg *m);
s32 func_ov065_02260a84(File *self);
s32 func_ov065_02260b3c(File *self);
s32 func_ov065_02260b68();
s32 func_ov065_02260bc4();
s32 func_ov065_02260c40();
s32 func_ov065_02260cb4();
s32 func_ov065_02260cfc(u32 a, u32 b);
s32 func_ov065_02260d2c(void *x);
s32 func_ov065_02260d68(void *x);
}

static inline BOOL Unk_ov065_02260488_Valid(File *p) {
    BOOL r = FALSE;
    if (p == NULL || (p->unk_70 & 1) == 0) {
    } else {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov065_02260488_Local(File *p) {
    BOOL r = TRUE;
    s32 t = p->unk_73;
    if (t != 0 && t != 4) {
        r = FALSE;
    }
    return r;
}

extern "C" {

s32 func_ov065_02260488(File *self, u8 *buf, s32 len, s32 off, u32 a5, u32 a6, s32 wait) {
    Q68 *q = self->unk_68;
    Node *n = func_ov065_0225f4d4((void *)func_ov065_022603bc, q->unk_10c, wait);
    if (n == NULL) {
        return -0x21;
    }
    n->unk_0d = 0;
    u8 *base = q->unk_fc;
    s32 size = q->unk_f8;
    s32 end = off + len;
    if (end < size) {
        n->unk_10 = base + off;
        n->unk_14 = len;
        n->unk_18 = 0;
        n->unk_1c = 0;
        off = end;
    } else {
        n->unk_10 = base + off;
        n->unk_14 = size - off;
        n->unk_18 = base;
        n->unk_1c = len - n->unk_14;
        off = n->unk_1c;
        func_02116048(buf + n->unk_14, n->unk_18, off);
    }
    func_02116048(buf, n->unk_10, n->unk_14);
    u16 *p = &q->unk_100;
    u32 saved = *p;
    n->unk_20 = off;
    *p = n->unk_20;
    if (self->unk_73 == 1) {
        if (self->unk_74 == 0) {
            self->unk_74 = func_ov065_02262a80();
            self->unk_0a = self->unk_74;
        }
        n->unk_24 = self->unk_74;
        u32 w = self->unk_78;
        if (w == 0 || a6 != 0) {
            n->unk_28 = a6;
            n->unk_26 = *(u16 *)&a5;
        } else {
            n->unk_28 = w;
            n->unk_26 = self->unk_76;
        }
    } else {
        n->unk_28 = 0;
    }
    if (func_ov065_0225f3f8(q->unk_10c, n)) {
        q->unk_100 = saved;
        len = 0;
    }
    return len;
}

s32 func_ov065_02260598(File *self) {
    Q68 *q = self->unk_68;
    s32 size = q->unk_f8;
    s32 a = *(volatile u16 *)&q->unk_100;
    s32 b = *(volatile u16 *)&q->unk_102;
    s32 r = b - a - 1;
    if (r < 0) {
        r += size;
    }
    return r;
}

s32 func_ov065_022605bc(File *self, s32 max, s32 want, s32 *out, s32 wait) {
    Q68 *q = self->unk_68;
    s32 avail;
    if (want > max) {
        want = max;
    }
    u32 irq = func_01ffa2ec();
    for (;;) {
        avail = func_ov065_02260598(self);
        if (avail >= want) {
            if (avail >= max) {
                avail = max;
            }
            *out = q->unk_100;
            break;
        }
        if (wait == 0) {
            avail = 0;
            break;
        }
        func_02113720(q->unk_104);
    }
    func_01ffa3d4(irq);
    return avail;
}

s32 func_ov065_02260628(File *self, u8 *buf, s32 len, s32 a4, u32 a5, s32 wait) {
    s32 lim, total, off;
    total = 0;
    lim = self->unk_68->unk_10c;
    lim = ((u32 *)lim)[0x48 / 4];
    if (self->unk_73 == 1) {
        lim -= 0x2a;
        if (len > lim) {
            return -0x23;
        }
        lim = len;
    } else {
        lim -= 0x36;
        if (len <= lim) {
            lim = len;
        }
    }
    if (len > 0) {
        for (;;) {
            s32 n = func_ov065_022605bc(self, len, lim, &off, wait);
            if (n > 0) {
                if (func_ov065_02260488(self, buf, n, off, a4, a5, wait) <= 0) {
                    return -6;
                }
                buf += n;
                len -= n;
                total += n;
            }
            if (wait == 0) {
                if (n > 0) {
                    break;
                }
                return -6;
            }
            if (len <= 0) {
                break;
            }
        }
    }
    return total;
}


s32 func_ov065_022606e8(File *self, u8 *buf, s32 len, s32 a4, u32 a5, u32 a6) {
    Q68 *q;
    s32 flag;
    if (func_ov065_02260f04(self)) {
        return -0x1c;
    }
    BOOL v = Unk_ov065_02260488_Valid(self);
    if (!v) {
        return -0x27;
    }
    if (Unk_ov065_02260488_Local(self)) {
        if ((*(volatile s16 *)&self->unk_70 & 4) == 0 || (*(volatile s16 *)&self->unk_70 & 8) != 0) {
            return -0x38;
        }
    }
    q = self->unk_68;
    if ((a6 & 4) != 0 || self->unk_72 == 0) {
        if (!func_02114354(q->unk_e0)) {
            return -6;
        }
        flag = 0;
    } else {
        func_02114480(q->unk_e0);
        flag = 1;
    }
    s32 r = func_ov065_02260628(self, buf, len, a4, a5, flag);
    func_02114410(q->unk_e0);
    return r;
}

s32 func_ov065_022607c4(Unk_ov065_02260488_Msg *m) {
    if (Unk_ov065_02260488_Local(m->unk_04)) {
        func_ov065_022627d4();
    }
    return 0;
}

s32 func_ov065_022607ec(File *self) {
    if (func_ov065_02260f04(self)) {
        return -0x1c;
    }
    BOOL v = Unk_ov065_02260488_Valid(self);
    if (!v) {
        return -0x27;
    }
    if ((*(volatile s16 *)&self->unk_70 & 4) == 0 || (*(volatile s16 *)&self->unk_70 & 8) != 0) {
        return -0x38;
    }
    self->unk_70 = self->unk_70 | 8;
    Q68 *q = self->unk_68;
    if (q != NULL && q->unk_10c != 0) {
        Node *n = func_ov065_0225f4d4((void *)func_ov065_022607c4, q->unk_10c, self->unk_72);
        if (n == NULL) {
            return -0x21;
        }
        return func_ov065_0225f3f8(q->unk_10c, n);
    }
    return 0;
}

void func_ov065_022608a4() {
    u32 irq = func_01ffa2ec();
    File *p = data_ov065_0228ea14;
    if (p != NULL) {
        do {
            func_ov065_02260944(p);
            p = data_ov065_0228ea14;
        } while (p != NULL);
    }
    func_01ffa3d4(irq);
}

void func_ov065_022608d4(void *q) {
    if (q != NULL) {
        void *msg;
        func_02113788((u8 *)q + 0x20);
        u32 irq = func_01ffa2ec();
        func_02113254();
        if (func_02114188(q, &msg, 0)) {
            do {
                if (msg != NULL) {
                    if (((Unk_ov065_02260488_Msg *)msg)->unk_08 != 0) {
                        func_02114234((void *)((Unk_ov065_02260488_Msg *)msg)->unk_08, -0xb, 0);
                    }
                    func_ov065_0225f4b8(msg);
                }
            } while (func_02114188(q, &msg, 0));
        }
        func_0211321c();
        func_01ffa3d4(irq);
        func_02113554();
    }
}

void func_ov065_02260944(File *self) {
    if (self != NULL) {
        self->unk_70 = 0;
        BOOL local = Unk_ov065_02260488_Local(self);
        if (local) {
            func_ov065_022608d4(self->unk_68);
            func_ov065_022608d4(self->unk_64);
        } else if (self->unk_73 == 1) {
            Unk_ov065_02260488_Msg *p = (Unk_ov065_02260488_Msg *)self->unk_64->unk_104;
            if (p != NULL) {
                do {
                    Unk_ov065_02260488_Msg *next = p->unk_00;
                    data_ov065_0228e9a0->unk_1c(p);
                    p = next;
                } while (p != NULL);
            }
            self->unk_64->unk_108 = 0;
            self->unk_64->unk_100 = 0;
            self->unk_64->unk_104 = 0;
            func_021136a0(self->unk_64->unk_10c);
            func_ov065_022608d4(self->unk_64);
        } else if (self->unk_73 == 2) {
            func_ov065_022608d4(self->unk_68);
        }
        u32 irq = func_01ffa2ec();
        func_ov065_02260f6c(self);
        func_ov065_02260f2c(self);
        data_ov065_0228e9a0->unk_1c(self);
        func_01ffa3d4(irq);
    }
}

s32 func_ov065_02260a00(Unk_ov065_02260488_Msg *m) {
    File *f = m->unk_04;
    if (Unk_ov065_02260488_Local(f)) {
        func_02113788(f->unk_68->unk_20);
        func_ov065_022627d4();
        func_ov065_02262788();
        func_ov065_02262998();
    }
    func_ov065_02262a34();
    f->unk_70 = f->unk_70 & ~6;
    void *x;
    if (f->unk_73 == 2) {
        x = f->unk_68;
    } else {
        x = f->unk_64;
    }
    func_ov065_0225f46c(x, 0);
    u32 irq = func_01ffa2ec();
    func_ov065_02260f6c(f);
    func_ov065_02260f7c(f);
    func_01ffa3d4(irq);
    f->unk_70 = f->unk_70 | 0x20;
    return 0;
}

s32 func_ov065_02260a84(File *self) {
    if ((s32)self <= 0) {
        return -0x1c;
    }
    if (func_ov065_02260ee0((s32)self)) {
        return -0x1a;
    }
    if (func_ov065_02260f04(self)) {
        return 0;
    }
    if (!Unk_ov065_02260488_Valid(self)) {
        return -0x27;
    }
    if ((*(volatile s16 *)&self->unk_70 & 0x10) != 0) {
        return -0x1a;
    }
    self->unk_70 = *(volatile s16 *)&self->unk_70 | 0x18;
    if (Unk_ov065_02260488_Local(self)) {
        func_ov065_0225f46c(self->unk_68, 0);
    }
    Node *n = func_ov065_0225f4d4((void *)func_ov065_02260a00, (u32)self, 1);
    s32 z = 0;
    n->unk_08 = z;
    func_ov065_0225f458(self, n);
    return z;
}

s32 func_ov065_02260b3c(File *self) {
    if ((s32)self >= 0 && func_ov065_02260f04(self) != 0 && func_ov065_02260ee0((s32)self) == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov065_02260b68() {
    s32 r;
    if (data_ov065_0228e9b0 != NULL) {
        r = func_ov065_02260bc4();
        if (r == 0) {
            func_ov065_02260a84(data_ov065_0228e9b0);
            if (func_ov065_02260b3c(data_ov065_0228e9b0)) {
                data_ov065_0228e9b0 = NULL;
            }
            r = -0x1a;
        }
        func_ov065_022608a4();
    } else {
        if (func_ov065_02264a08()) {
            func_ov065_0226ab40(0);
            r = 0;
        } else {
            r = -0x1a;
        }
    }
    return r;
}

s32 func_ov065_02260bc4() {
    File *p;
    for (;;) {
        u32 irq = func_01ffa2ec();
        p = data_ov065_0228ea10;
        if (p != NULL) {
            File *g = data_ov065_0228e9b0;
            do {
                if (p != g && (p->unk_70 & 0x10) == 0) {
                    break;
                }
                p = p->unk_7c;
            } while (p != NULL);
        }
        func_01ffa3d4(irq);
        if (p == NULL) {
            break;
        }
        func_ov065_02260a84(p);
    }
    File *q = data_ov065_0228ea10;
    if (q != NULL) {
        if (q != data_ov065_0228e9b0) {
            goto fail;
        }
        if (q->unk_7c != NULL) {
            goto fail;
        }
    }
    if (data_ov065_0228ea14 == NULL) {
        return 0;
    }
fail:
    return -0x1a;
}

s32 func_ov065_02260c40() {
    if (data_ov065_0228e9a8 == 0) {
        data_ov065_0228e9a8 = data_ov065_0228ebd8;
    }
    s32 r = func_ov065_02260b68();
    if (r == -0x1a) {
        do {
            func_021132e0(100);
        } while (func_ov065_02260b68() == -0x1a);
    }
    r = func_ov065_0225f524();
    if (r >= 0) {
        func_ov065_022649b8();
        func_ov065_022649fc(0);
        Alloc *a = data_ov065_0228e9a0;
        if (a->unk_28 == 0) {
            a->unk_1c((void *)data_ov065_0228e9b4[7]);
        }
        data_ov065_0228e9a0 = NULL;
    }
    return r;
}

s32 func_ov065_02260cb4() {
    u32 v = data_ov065_0228ebd8;
    if (v == 0) {
        if ((data_ov065_0228e9ac & 3) == 1) {
            if (func_01ffa3b4() != 0x12) {
                func_021132e0(10);
            }
        }
    } else if (data_ov065_0228e9a8 == 0) {
        data_ov065_0228e9a8 = v;
    }
    return data_ov065_0228ebd8;
}

s32 func_ov065_02260cfc(u32 a, u32 b) {
    if (func_ov065_02260cb4() == 0) {
        return -0x27;
    }
    data_ov065_0228ebfc[0] = a;
    data_ov065_0228ebfc[1] = b;
    return 0;
}

s32 func_ov065_02260d2c(void *x) {
    u32 irq = func_01ffa2ec();
    u32 a = data_ov065_0228ebfc[0];
    u32 b = data_ov065_0228ebfc[1];
    data_ov065_0228ebfc[0] = 0;
    data_ov065_0228ebfc[1] = 0;
    s32 r = func_ov065_02261638(x);
    data_ov065_0228ebfc[0] = a;
    data_ov065_0228ebfc[1] = b;
    func_01ffa3d4(irq);
    return r;
}

s32 func_ov065_02260d68(void *x) {
    u32 buf[0x64 / 4];
    if (x == NULL) {
        return 0;
    }
    void *p = data_ov065_0228e9a0->unk_18(0x1154);
    if (p == NULL) {
        return 0;
    }
    func_02115fb4(buf, 0, 0x64);
    buf[0x40 / 4] = (u32)p;
    buf[0x3c / 4] = 0xb68;
    buf[0x4c / 4] = (u32)p + 0xb68;
    buf[0x48 / 4] = 0x5ea;
    func_ov065_02262a44(buf);
    s32 r = func_ov065_02261638(x);
    func_ov065_02262a34();
    data_ov065_0228e9a0->unk_1c(p);
    return r;
}

}
