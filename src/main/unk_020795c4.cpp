#include "types.h"

extern "C" {
void func_02003110(void *dst, void *src);
void func_02003100(void *);
s32 func_020030b4(void *);
void func_020942d8(void *, void *);
void func_020942c8(void *);
s32 func_02094218(void *);
void *func_02065634(void *);
void *func_0206561c(void *);
void *func_0209788c(void *, void *);
void *func_0209865c(void *);
void func_020999c0(void *, void *);
void *func_0207bf38(void *, void *);
void func_020801fc(void *, void *, void *);
s32 func_020804d0(void *, void *);
void *func_0207bf60(void *, s32);
void *func_020805c4(void *);
s32 func_0207f854(void *, void *);
void func_02116048(void *src, void *dst, u32 size);
s32 func_0209cdc0(void *, void *);
s32 func_0209cd00(void *, void *);
void func_0207824c(s32);
s32 func_020b50e8();
void *func_0209750c();
s32 func_02098044(void *, s32);
void *func_02098750(void *);
s32 func_02097edc(void *);
void *func_0209888c(void *);
u8 *func_02098308(void *);
void func_0209d498(void *);
s32 func_020982d0(void *);
s32 func_0207c014(s32);
void func_02079228(void *);
s32 func_0207e1f0(void *);
void *func_0207e310(void *);
s32 func_02080dd8(void *);
s32 func_0207bcfc(u32, s32, s32);
s32 func_0207821c(s32);
s32 func_02080950(void *);
s32 func_02080940(void *);
s32 func_02078580(void *);
s32 func_02078294();
s32 func_02078264();
s32 func_020785ec(void *);
void func_020785a8(void *);
void func_020785e8(void *, s32);
void func_020782ac(s32);
void func_0207827c(s32);
s32 func_02079ab0(void *, void *);
s32 func_02079b34(void *, s32);
s32 func_0207f9e0(void *);
s32 func_0207a484(void *);
void func_02099790(void *);
s32 func_0203f508(void *, void *);
s32 func_020789cc(void *, s32, s32);
void *func_02097868(void *, s32);
s32 func_0207fa50(void *, s32, void *);
s32 func_02098198(void *, s32);
void func_02098188(void *, s32, s32);
s32 func_0205989c(void *, void *);
void func_02078568(void *, s32);
void func_0207854c(void *, s32);
void func_0205b124(void *);
void func_0205b120(void *);
s32 func_0205af28(void *, s32, u16 *, s32 *, s32 *, s32 *);
void func_02079ce8(void *, s32);
void func_02079da0(void *, void *);
void func_02079edc(void *);
s32 func_02072e44(void *);
s32 func_02072e88(void *, s32);
void func_0207c1e8(void *);
s32 func_0207980c(void *, void *);
s32 func_020798b8(void *);
}

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; };
extern "C" {
extern u8 data_021d735c[];
extern Unk_020cbb18 *data_020cbb18;
}

struct Unk_020795c4_Buf {
    u32 v[5];
    Unk_020795c4_Buf(void *p) { func_020942d8(this, p); }
    ~Unk_020795c4_Buf() { func_020942c8(this); }
};

struct Unk_020795c4_Str {
    u16 pad;
    u8 v[12];
    Unk_020795c4_Str(void *p) { func_02003110(v, p); }
    ~Unk_020795c4_Str() { func_02003100(v); }
};

struct Unk_020796d4_Obj {
    u8 pad_00[0x38c0];
    u8 unk_38c0[4];
};

extern "C" s32 func_020795c4(void *self, void *p) {
    if (p != NULL) {
        void *t = func_02065634(p);
        if (t != NULL) {
            Unk_020795c4_Buf b(t);
            if (func_02094218(&b) != 0) {
                void *q = func_0209788c(data_021d735c, &b);
                void *name = func_0206561c(p);
                if (q != NULL) {
                    func_020999c0(func_0209865c(q), p);
                }
                if (name != NULL) {
                    Unk_020795c4_Str s(name);
                    if (func_020030b4(s.v) != 0) {
                        void *o = func_0207bf38(self, s.v);
                        if (o != NULL) {
                            func_020801fc(o, q, p);
                            return func_020804d0(o, p);
                        }
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL func_02079678(u8 *self, void *p) {
    if (func_02094218(p) != 0) {
        u8 *s = (u8 *)func_0207bf60(self, 0);
        u32 i;
        for (i = 0; (s32)i < 8; s += 0x700, i++) {
            if (func_020030b4(func_020805c4(s)) != 0) {
                if (func_0207f854(s, p) == 0) {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020796d4(Unk_020796d4_Obj *self, void *p) {
    func_02116048(p, self->unk_38c0, 4);
    self->unk_38c0[3] = 1;
}

extern "C" BOOL func_020796f8(Unk_020796d4_Obj *self, void *p) {
    BOOL r = TRUE;
    if (self->unk_38c0[3] != 0) {
        if (func_0209cdc0(p, self->unk_38c0) != 0) {
            if (func_0209cd00(p, self->unk_38c0) < 14) {
                r = FALSE;
            }
        } else {
            if (func_0209cd00(self->unk_38c0, p) < 14) {
                r = FALSE;
            }
        }
    }
    return r;
}

struct Unk_02079748_B {
    u8 b[8];
};

extern "C" void func_02079748(u8 *self, void *p) {
    func_0207824c(-1);
    if (func_020b50e8() == 6) {
        if (p == NULL) {
            p = func_0209750c();
        }
        if (p != NULL) {
            if (func_02098044(p, 1) == 0) {
                if (func_02097edc(func_02098750(p)) != -1) {
                    void *a = func_0209888c(p);
                    u8 *r4 = func_02098308(p);
                    if (*(u16 *)r4 != 0) {
                        if (func_02094218(a) != 0) {
                            Unk_02079748_B bb;
                            *(u32 *)&bb.b[0] = 0;
                            *(u32 *)&bb.b[4] = 0;
                            func_0209d498(&bb);
                            u32 r7 = bb.b[5];
                            s32 tt = func_020982d0(p);
                            if (tt != r7) {
                                if (r4[1] == bb.b[4]) {
                                    if (r4[0] == bb.b[3]) {
                                        if (bb.b[2] >= 6) {
                                            s32 s = func_0207980c(self, a);
                                            if (func_0207c014(s) != 0) {
                                                func_02079228(self + 0x381c);
                                            }
                                            func_0207824c((s8)s);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" s32 func_0207980c(void *self0, void *p) {
    u8 *self = (u8 *)self0;
    if (func_02094218(p) != 0) {
        s32 best = -128;
        s32 cnt, i;
        u8 mask;
        mask = 0;
        cnt = 0;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (func_020030b4(func_020805c4(self)) != 0) {
                if (func_0207e1f0(self) == 3) {
                    void *o = (void *)func_0207f854(self, p);
                    if (o != NULL) {
                        s32 v = func_02080dd8(o);
                        if (v == best) {
                            mask |= (1 << i);
                            cnt++;
                        } else if (v > best) {
                            best = v;
                            mask = (u8)(1 << i);
                            cnt = 1;
                        }
                    }
                }
            }
        }
        return func_0207bcfc(mask, cnt, 8);
    }
    return -1;
}

extern "C" void func_020798a0(void *self) {
    func_0207821c((s8)func_020798b8(self));
}

extern "C" s32 func_020798b8(void *self0) {
    u8 *self = (u8 *)self0;
    void *r0 = func_0209750c();
    void *p;
    if (r0 != NULL) {
        p = func_0209888c(r0);
    } else {
        p = NULL;
    }
    if (p != NULL && func_02094218(p) != 0) {
        u8 mask = 0;
        s32 cnt = 0;
        s32 i;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (func_020030b4(func_020805c4(self)) != 0) {
                if (func_0207f854(self, p) != 0) {
                    if (func_02080950((void *)func_0207f854(self, p)) == 0) {
                        if (func_02078580(func_0207e310(self)) == 0) {
                            mask |= (1 << i);
                            cnt++;
                        }
                    }
                }
            }
        }
        return func_0207bcfc(mask, cnt, 8);
    }
    return -1;
}

extern "C" void func_02079954(u8 *self) {
    s32 r7 = func_02078294();
    s32 w = func_02078264();
    u8 *s = self;
    s32 i;
    for (i = 0; i < 8; s += 0x700, i++) {
        if (func_020030b4(func_020805c4(s)) != 0) {
            if (func_020785ec(func_0207e310(s)) == 3) {
                func_020785a8(func_0207e310(s));
            }
        }
    }
    if (r7 != -1) {
        void *o = func_0207bf60(self, r7);
        if (o != NULL && func_020030b4(func_020805c4(o)) != 0) {
            func_020785e8(func_0207e310(o), 0);
            o = func_0207bf60(self, w);
            if (o != NULL) {
                if (func_020030b4(func_020805c4(o)) != 0) {
                    func_020785e8(func_0207e310(o), 3);
                }
            }
        } else {
            func_020782ac(-1);
            func_0207827c(-1);
        }
    }
}

extern "C" void func_02079a0c(u8 *self) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    s32 r6 = func_02078294();
    func_0209d498(buf);
    s32 r4 = func_02079ab0(self, buf);
    if (r4 == -1) {
        func_020782ac(-1);
        func_0207827c(-1);
    } else if (r4 == r6) {
        void *o = func_0207bf60(self, func_02078264());
        if (o == NULL || func_0207f9e0(o) == 0) {
            func_0207827c((s8)func_02079b34(self, r6));
        }
    } else if (r4 != r6) {
        r6 = func_02079b34(self, r4);
        func_020782ac((s8)r4);
        func_0207827c((s8)r6);
        if (r4 == func_0207a484(self)) {
            func_02099790(self + 0x3830);
        }
    }
}

extern "C" s32 func_02079ab0(void *self0, void *p0) {
    u8 *self = (u8 *)self0;
    u8 *p = (u8 *)p0;
    struct { u8 v[8]; } b;
    u8 out[0x54];
    void *r0 = func_0209750c();
    if (r0 != NULL && func_02098044(r0, 1) == 0 && p[2] >= 6) {
        func_02116048(p, &b, 8);
        s32 n = func_0203f508(out, &b);
        u32 i;
        for (i = 0; (s32)i < 8; self += 0x700, i++) {
            if (func_020030b4(func_020805c4(self)) != 0) {
                if (func_0207e1f0(self) == 3) {
                    u8 *e = out;
                    s32 j;
                    for (j = 0; j < n; e += 12, j++) {
                        if (*(u16 *)e == i) {
                            return i;
                        }
                    }
                }
            }
        }
    }
    return -1;
}

extern "C" s32 func_02079b34(void *self0, s32 x) {
    u8 *self = (u8 *)self0;
    u8 *s = self;
    s32 best = -100000;
    s32 cnt, i;
    u8 mask;
    mask = 0;
    cnt = 0;
    for (i = 0; i < 8; s += 0x700, i++) {
        if (i != x && func_0207f9e0(s) != 0) {
            s32 v = func_020789cc(self + 0x3800, x, i);
            if (v > best) {
                best = v;
                mask = (u8)(1 << i);
                cnt = 1;
            } else if (v == best) {
                mask |= (1 << i);
                cnt++;
            }
        }
    }
    return func_0207bcfc(mask, cnt, 8);
}

extern "C" void func_02079bb4(u8 *self) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    func_0209d498(buf);
    s32 i = 0;
    for (; i < 8; self += 0x700, i++) {
        void *o = func_020805c4(self);
        if (func_020030b4(o) != 0) {
            if (func_0207e1f0(self) == 3) {
                s32 j;
                for (j = 0; j < 4; j++) {
                    void *r7 = func_02097868(data_021d735c, j);
                    if (r7 != NULL) {
                        void *a = func_0209888c(r7);
                        if (func_02094218(a) != 0) {
                            if (func_02098044(r7, 1) == 0) {
                                s32 t = func_0207fa50(self, 7, buf);
                                if (t != -1) {
                                    s32 c = func_02098198(r7, i);
                                    if (c != t) {
                                        if (func_0205989c(a, o) != 0) {
                                            func_02098188(r7, i, (u8)t);
                                        }
                                    }
                                } else {
                                    func_02098188(r7, i, 0xff);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" void func_02079c7c(u8 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u8 *s = self + i * 0x700;
        if (func_020030b4(func_020805c4(s)) != 0) {
            func_02078568(func_0207e310(s), 0);
            func_0207854c(func_0207e310(s), 0);
        }
    }
}

extern "C" void func_02079cc8(void *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        func_02079ce8(self, i);
    }
}

struct Unk_02079ce8_Obj {
    u8 pad_00[0x20];
    s32 unk_20;
    u16 unk_24;
};

extern "C" void func_02079ce8(void *self, s32 idx) {
    void *o = func_0207bf60(self, idx);
    if (o != NULL) {
        if (func_020030b4(func_020805c4(o)) != 0) {
            s32 v5 = 5;
            s32 z1 = 0;
            s32 z2 = 0;
            u16 h = 0;
            if (func_020030b4(func_020805c4(o)) != 0) {
                Unk_02079ce8_Obj *r5 = (Unk_02079ce8_Obj *)func_0207e310(o);
                if (r5 != NULL) {
                    u32 x[4];
                    func_0205b124(x);
                    h = 0;
                    r5->unk_20 = func_0205af28(x, idx, &h, &v5, &z1, &z2);
                    r5->unk_24 = h;
                    func_0205b120(x);
                }
            }
        }
    }
}

extern "C" void func_02079d64(void *self, void *p) {
    if (func_02072e44(data_020cbb18) == 0) {
        func_02079da0(self, p);
    }
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        func_02079edc(self);
    }
}

extern "C" void func_02079da0(void *self0, void *p) {
    u8 *self = (u8 *)self0;
    if (func_02094218(p) != 0) {
        u8 *s = self;
        u8 mask = 0;
        s32 cnt = 0;
        s32 i;
        for (i = 0; i < 8; s += 0x700, i++) {
            if (func_020030b4(func_020805c4(s)) != 0) {
                if (func_02078580(func_0207e310(s)) == 0) {
                    if (func_0207f854(s, p) != 0) {
                        mask |= (1 << i);
                        cnt++;
                    }
                }
            }
        }
        s32 r4 = func_0207bcfc(mask, cnt, 8);
        if (func_0207c014(r4) == 0) {
            mask = 0;
            cnt = 0;
            s = self;
            for (i = 0; i < 8; s += 0x700, i++) {
                if (func_020030b4(func_020805c4(s)) != 0) {
                    if (func_0207e1f0(s) == 3) {
                        if (i != func_0207a484(self)) {
                            if (func_0207f854(s, p) != 0) {
                                mask |= (1 << i);
                                cnt++;
                            }
                        }
                    }
                }
            }
            r4 = func_0207bcfc(mask, cnt, 8);
        }
        void *o = func_0207bf60(self, r4);
        if (o != NULL) {
            if (func_020030b4(func_020805c4(o)) != 0) {
                void *q = (void *)func_0207f854(o, p);
                if (q != NULL) {
                    func_02080940(q);
                }
            }
        }
    }
}

extern "C" void func_02079e9c(void *self0) {
    u8 *self = (u8 *)self0;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        s32 i;
        for (i = 0; i < 8; self += 0x700, i++) {
            if (func_020030b4(func_020805c4(self)) != 0) {
                func_0207c1e8(self);
            }
        }
    }
}
