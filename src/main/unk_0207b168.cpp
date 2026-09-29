#include "types.h"

class Unk_02002fc8 {
public:
    u32 func_020030b4();
    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

struct Unk_0207b168_Slot {
    u32 unk_00[0x700 / 4];
};

struct Unk_0207b168 {
    /* 0x0000 */ Unk_0207b168_Slot unk_0000[8];
    /* 0x3800 */ u32 unk_3800[7];
    /* 0x381c */ u32 unk_381c[42];
    /* 0x38c4 */ u32 unk_38c4[2];
    /* 0x38cc */ u32 unk_38cc[2];
    /* 0x38d4 */ u32 unk_38d4[5];
    /* 0x38e8 */ s8 unk_38e8;
    /* 0x38e9 */ s8 unk_38e9;
    /* 0x38ea */ s8 unk_38ea;
    /* 0x38eb */ u8 unk_38eb[3];
    /* 0x38ee */ u8 unk_38ee[0x20];
};

namespace Unk_0207b238_ns {
extern "C" u8 data_021d7352[];
}
extern "C" {
extern u8 data_021e7f8c[];
extern u8 data_021d7352[];
extern u8 data_021ccb58[];
extern u8 data_021cc8d4[];

s32 func_0207e160(void *);
s32 func_0207e1c0(void *);
void *func_0207e268();
void *func_0209a610(void *);
void *func_0209b010(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_0209d3a4(void *, void *);
s32 func_0209d020();
void func_0209d498(void *);
void func_0209cf88(void *);
void func_02115fb4(void *, s32, u32);
void func_02116048(void *, const void *, u32);
s32 func_02128930(const void *, const void *, u32);
s32 func_02063b8c(s32);
void func_02063990(void *, void *);
s32 func_02063954(void *);
void func_0208f148(void *);
void *func_020789a8();
void *func_020805c4(void *);
u8 func_02002ff8(void *);
u32 func_02003098(void *);
void *func_0207f19c(void *);
void func_0207f118(void *);
void func_0207f18c(void *);
void func_0207fe28(void *);
s32 func_0207f3d0(void *, void *, void *);
s32 func_0207c014(s32);
s32 func_0207bb7c(Unk_0207b168 *);
void func_0207c020(void *);
void func_02080718(void *);
void func_02080704(void *, void *);
void func_020805d0(void *, u32, s32, s32, s32);
s32 func_0207bde8(Unk_0207b168 *);
void *func_0207bf60(Unk_0207b168 *, s32);
s32 func_0207bfb4(Unk_0207b168 *, Unk_02002fc8 *);
void func_0207bb1c(void *, u8);
s32 func_0207bb48(u8, void *);
void func_0207baf0(Unk_0207b168 *, void *, u32);
s32 func_0207bab0(void *);
s32 func_0207bcfc(u32, u32, u32);
void func_0207af88(void *);
void func_0207cc88(void *, void *);
void func_0207dfdc(void *, u8);
void func_0207c6d4(void *);
void func_0207934c(void *, s32);
void func_02078cd8(void *, s32);
void func_02079270(void *, s32);
s32 func_02079268(void *, s32);
void func_02079230(void *, void *);
s32 func_02078580(void *);
s32 func_020785ec(void *);
void func_0207857c(void *, s32);
void *func_0207e310(void *);
s32 func_02081288(u32, void *);
s32 func_020815b4(u8);
void func_02078d6c(void *, void *, s32);

s32 func_0207b208(Unk_0207b168 *);
s32 func_0207b198(Unk_0207b168 *, void *);
void func_0207b3d8(Unk_0207b168 *, void *, void *, s32, void *);
void func_0207b458(Unk_0207b168 *, void *, s32, void *, u8, void *);
void func_0207b540(Unk_0207b168 *, s8);
void *func_0207b54c(Unk_0207b168 *, u32);
s32 func_0207b640(Unk_0207b168 *);
s32 func_0207b68c(Unk_0207b168 *, void *);
u32 func_0207b8c0(Unk_0207b168 *, s32);
s32 func_0207b970(Unk_0207b168 *, u32, s32);
void func_0207ba60(void *, Unk_0207b168 *);

s32 func_0207b168(Unk_0207b168_Slot *p) {
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (func_0207e160(p) != 0) {
            return i;
        }
    }
    return -1;
}

s32 func_0207b198(Unk_0207b168 *self, void *name) {
    s32 idx = func_0207b208(self);
    if (func_0207bf60(self, idx) != 0) {
        void *q = func_0209a610(func_0207e268());
        s32 r = func_0209d3d0(name, func_0209b010(q), 0x3f);
        s32 n = 0;
        if (r == 1) {
            n = func_0209d3a4(func_0209b010(q), name);
        } else if (r == -1) {
            n = func_0209d3a4(name, func_0209b010(q));
        }
        if (n >= 2) {
            return idx;
        }
    }
    return -1;
}

s32 func_0207b208(Unk_0207b168 *self) {
    Unk_0207b168_Slot *p = self->unk_0000;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (func_0207e1c0(p) != 0) {
            return i;
        }
    }
    return -1;
}

void func_0207b238(Unk_0207b168 *self, void *arg) {
    void *r7;
    s32 idx;
    void *r4;

    func_0208f148(data_021e7f8c);
    r7 = func_020789a8();
    idx = func_0207b198(self, arg);
    r4 = func_0207bf60(self, idx);
    if (((Unk_02002fc8 *)func_020805c4(r7))->func_020030b4() == 0) {
        goto nomatch;
    }
    if (func_02063954(func_0207f19c(r7)) == 0) {
        goto nomatch;
    }
    {
        u16 *h = (u16 *)func_0207f19c(r7);
        if (h[0] == *(u16 *)data_021d7352 && func_02128930(h + 1, (u8 *)((u32)Unk_0207b238_ns::data_021d7352 + 2), 8) == 0) {
            if (r4 == 0) {
                return;
            }
            func_0207fe28(r4);
            if (func_0207f3d0(r7, r4, arg) == 0) {
                func_0207b3d8(self, r7, r4, idx, arg);
            } else {
                func_0207b3d8(self, 0, r4, idx, arg);
            }
            return;
        }
    }
    if (func_0207b54c(self, func_02002ff8(func_020805c4(r7))) == 0
        && self->unk_38e8 != func_02002ff8(func_020805c4(r7))) {
        if (r4 == 0) {
            s32 x = func_0207bde8(self);
            r4 = (void *)x;
            if (func_0207c014(x) == 0) {
                return;
            }
            func_0207b458(self, func_0207bf60(self, x), x, r7, 2, arg);
            func_02080718(r7);
            return;
        }
        func_02080718(data_021ccb58);
        func_02080704(data_021ccb58, r7);
        func_0207fe28(r4);
        func_0207b3d8(self, r7, r4, idx, arg);
        func_0207b458(self, r4, idx, data_021ccb58, 2, arg);
        return;
    }
    if (r4 == 0) {
        return;
    }
    func_0207fe28(r4);
    if (func_0207f3d0(r7, r4, arg) == 0) {
        func_0207b3d8(self, r7, r4, idx, arg);
    } else {
        func_0207b3d8(self, 0, r4, idx, arg);
    }
    return;
nomatch:
    if (r4 != 0) {
        func_0207fe28(r4);
        func_0207b3d8(self, r7, r4, idx, arg);
    }
}

void func_0207b3d8(Unk_0207b168 *self, void *a, void *b, s32 idx, void *out) {
    func_0207f118(b);
    func_0207f18c(b);
    func_02063990(func_0207f19c(b), data_021d7352);
    self->unk_38e8 = func_02002ff8(func_020805c4(b));
    func_02079270(self->unk_381c, idx);
    func_02078cd8(self->unk_3800, idx);
    if (a != 0) {
        func_02080704(a, b);
    }
    func_02080718(b);
    func_02116048(out, self->unk_38cc, 8);
}

void func_0207b458(Unk_0207b168 *self, void *a, s32 idx, void *b, u8 c, void *out) {
    func_0207af88(self);
    func_02080704(a, b);
    func_0207cc88(a, out);
    func_0207f18c(a);
    func_0207dfdc(a, c);
    func_0207c6d4(a);
    func_0207934c(self->unk_381c, idx);
    func_02078cd8(self->unk_3800, idx);
    func_0207bb1c(self->unk_38d4, func_02002ff8(func_020805c4(a)));
    func_02116048(out, self->unk_38c4, 8);
    if (*(s64 *)self->unk_38cc != 0) {
        func_02116048(out, self->unk_38cc, 8);
    }
    func_0207b540(self, (s8)idx);
}

void func_0207b508(Unk_0207b168 *self, Unk_02002fc8 *o) {
    if (o->func_020030b4() != 0) {
        s32 i = func_0207bfb4(self, o);
        if (func_0207c014(i) != 0) {
            func_0207b540(self, (s8)i);
        }
    }
}

void *func_0207b54c(Unk_0207b168 *self, u32 id) {
    Unk_0207b168_Slot *p = self->unk_0000;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        Unk_02002fc8 *o = (Unk_02002fc8 *)func_020805c4(p);
        if (o->func_020030b4() != 0 && id == func_02002ff8(o)) {
            return p;
        }
    }
    return 0;
}

void func_0207b590(Unk_0207b168 *self, void *out) {
    if (func_0207b68c(self, out) != 0) {
        s32 x = func_0207bde8(self);
        void *r7 = func_0207bf60(self, x);
        if (r7 != 0) {
            s32 idx;
            func_02080718(r7);
            func_0207ba60(self->unk_38d4, self);
            idx = func_0207b640(self);
            if (idx != -1) {
                func_02080718(data_021ccb58);
                func_020805d0(data_021ccb58, (u8)idx, 1, 0, 0);
                func_0207b458(self, r7, x, data_021ccb58, 1, out);
            }
        }
        func_02116048(out, self->unk_38c4, 8);
        if (*(s64 *)self->unk_38cc != 0) {
            func_02116048(out, self->unk_38cc, 8);
        }
    }
}

s32 func_0207b640(Unk_0207b168 *self) {
    u8 mask = 0;
    s32 i = 0;
    for (; i < 6; i++) {
        u32 v = func_0207b8c0(self, mask);
        s32 t;
        if (v >= 6) {
            break;
        }
        t = func_0207b970(self, v, 0);
        if (t != -1) {
            return t;
        }
        mask = mask | (1 << v);
    }
    return -1;
}

s32 func_0207b68c(Unk_0207b168 *self, void *p) {
    if (func_0207bb7c(self) < 8) {
        if (*(s64 *)self->unk_38cc == 0) {
            s64 *q = (s64 *)self->unk_38c4;
            if (*q == 0 || func_0209d020() != 0) {
                return TRUE;
            }
            if (func_0209d3d0(p, self->unk_38c4, 0x3f) == 1) {
                if (func_0209d3a4(self->unk_38c4, p) >= 1) {
                    return TRUE;
                }
            }
            return FALSE;
        } else {
            if (func_0209d3d0(p, self->unk_38cc, 0x3f) == 1) {
                s32 n = func_0209d3a4(self->unk_38cc, p);
                if (n > 0) {
                    BOOL t;
                    if (n >= 8) {
                        t = TRUE;
                    } else if (func_02063b8c(8 - n) == 0) {
                        t = TRUE;
                    } else {
                        t = FALSE;
                    }
                    if (t != 0) {
                        return TRUE;
                    }
                    return FALSE;
                }
            }
            return FALSE;
        }
    }
    return FALSE;
}

void func_0207b74c(Unk_0207b168 *self) {
    struct {
        u32 v[2];
    } buf;
    Unk_0207b168_Slot *p = self->unk_0000;
    s32 i;
    buf.v[0] = 0;
    buf.v[1] = 0;
    func_0209d498(&buf);
    for (i = 0; i < 8; p++, i++) {
        void *o = func_020805c4(p);
        if (((Unk_02002fc8 *)o)->func_020030b4() != 0) {
            void *q = func_0207e310(p);
            if (func_02078580(q) == 2 && func_020785ec(q) == 0 && func_02079268(self->unk_381c, i) == -1
                && func_02081288(func_02003098(o), &buf) == 0) {
                func_0207857c(q, 1);
            }
        }
    }
}

s32 func_0207b7d4(Unk_0207b168 *self, Unk_02002fc8 *o) {
    s32 t = func_02079268(self->unk_381c, func_0207bfb4(self, o));
    s32 r = 0;
    if (t != -1) {
        r = 1;
    }
    return r;
}

void func_0207b7fc(Unk_0207b168 *self, s32 x) {
    func_02078d6c(self->unk_381c, self, x);
}

void func_0207b814(Unk_0207b168 *self) {
    u8 mask = 0;
    s32 i;
    struct {
        u32 v[2];
    } z;
    func_0207c020(self);
    for (i = 0; i < 3; i++) {
        u32 v = func_0207b8c0(self, mask);
        if (v < 6) {
            s32 t = func_0207b970(self, v, 1);
            if (t != -1) {
                func_020805d0(&self->unk_0000[i], (u8)t, 0, 0, 1);
                func_0207bb1c(self->unk_38d4, (u8)t);
                mask = mask | (1 << v);
            }
        }
    }
    func_0209d498(self->unk_38c4);
    func_02079230(self->unk_381c, self);
    func_0209cf88(self->unk_38ee);
    self->unk_38ea = -1;
}

u32 func_0207b8c0(Unk_0207b168 *self, s32 mask) {
    Unk_0207b168_Slot *p = self->unk_0000;
    u8 counts[6];
    u8 best = 0;
    s32 n = 0;
    s32 bc = 9;
    s32 i;
    s32 j;
    u32 r;
    func_02115fb4(counts, 0, 6);
    for (i = 0; i < 8; p++, i++) {
        void *o = func_020805c4(p);
        if (((Unk_02002fc8 *)o)->func_020030b4() != 0) {
            if (func_02003098(o) < 6) {
                u32 t = func_02003098(o);
                counts[t] = counts[t] + 1;
            }
        }
    }
    for (j = 0; j < 6; j++) {
        if (((mask >> j) & 1) == 0) {
            s32 c = counts[j];
            if (c < bc) {
                best = 1 << j;
                n = 1;
                bc = c;
            } else if (c == bc) {
                best = best | (1 << j);
                n++;
            }
        }
    }
    r = func_0207bcfc(best, n, 6);
    return r < 6 ? (u8)r : 0;
}

s32 func_0207b970(Unk_0207b168 *self, u32 idx, s32 flag) {
    s32 cnt = 0;
    void *bits = self->unk_38d4;
    s32 i;
    Unk_0207b168_Slot *p;
    func_02115fb4(data_021cc8d4, 0, 0x14);
    for (i = 0; i < 0x96; i++) {
        if (func_0207bb48(i, bits) == 0) {
            u8 *e = (u8 *)func_020815b4(i);
            u32 b = e[0x4b];
            if (b < 2) {
                if (flag == 0 || b == 0) {
                    if (e[0x4a] == idx) {
                        func_0207bb1c(data_021cc8d4, i);
                        cnt++;
                    }
                }
            }
        }
    }
    if (cnt > 0) {
        s32 k;
        p = self->unk_0000;
        for (k = 0; k < 8; p++, k++) {
            void *o = func_020805c4(p);
            if (((Unk_02002fc8 *)o)->func_020030b4() != 0) {
                u8 id = func_02002ff8(o);
                if (func_0207bb48(id, data_021cc8d4) != 0) {
                    func_0207baf0(self, data_021cc8d4, id);
                    cnt--;
                    if (cnt == 0) {
                        break;
                    }
                }
            }
        }
    }
    if (cnt > 0) {
        s32 r = func_02063b8c(cnt);
        for (i = 0; i < 0x96; i++) {
            if (func_0207bb48(i, data_021cc8d4) != 0) {
                if (r == 0) {
                    return i;
                }
                r--;
            }
        }
    }
    return -1;
}

void func_0207ba60(void *bits, Unk_0207b168 *p0) {
    Unk_0207b168_Slot *p = (Unk_0207b168_Slot *)p0;
    s32 i;
    if (func_0207bab0(bits) != 0) {
        func_02115fb4(bits, 0, 0x14);
        for (i = 0; i < 8; p++, i++) {
            void *o = func_020805c4(p);
            if (((Unk_02002fc8 *)o)->func_020030b4() != 0) {
                func_0207bb1c(bits, func_02002ff8(o));
            }
        }
    }
}

void func_0207b540(Unk_0207b168 *self, s8 v) {
    self->unk_38e9 = v;
}

}
