#include "types.h"

struct Unk_ov004_0222eb30_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 pad_05[0x11 - 5];
};

struct Unk_ov004_0222eb30_V3 {
    s32 x, y, z;
};

class Unk_ov004_0222eb30_Ent {
public:
    typedef void (Unk_ov004_0222eb30_Ent::*Fn)();
    struct Pair {
        Fn a;
        Fn b;
    };
    virtual void vfunc_00();
    virtual void vfunc_04();
    u8 pad_04[0x4c - 4];
    Unk_ov004_0222eb30_Ent *unk_4c;
    Unk_ov004_0222eb30_Ent *unk_50;
    u8 pad_54[0x158 - 0x54];
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[4];
    u8 unk_164;
    u8 pad_165[0x1a8 - 0x165];
    Unk_ov004_0222eb30_V3 unk_1a8;
    u8 pad_1b4[0x1c0 - 0x1b4];
    s16 unk_1c0;
    s16 unk_1c2;
    u16 unk_1c4;
    u8 unk_1c6;
    u8 unk_1c7;
    u8 unk_1c8;
    u8 pad_1c9;
    s8 unk_1ca;
    u8 pad_1cb;
    s32 unk_1cc;
    u8 pad_1d0[0x1e8 - 0x1d0];
    u8 unk_1e8;
    u8 unk_1e9;
    u8 pad_1ea;
    u8 unk_1eb;
    u8 pad_1ec[2];
    u8 unk_1ee;
    u8 pad_1ef[2];
    u8 unk_1f1;
    u8 pad_1f2[0x1fc - 0x1f2];
    u8 unk_1fc;
    u8 unk_1fd;
    u8 pad_1fe[2];
    s16 unk_200;
    u8 unk_202;
    u8 unk_203;
    u8 unk_204;
    u8 unk_205;
    u8 unk_206;
    u8 unk_207;
    u8 pad_208[4];
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    u8 pad_218[0x228 - 0x218];
    s32 unk_228;
    u8 pad_22c[3];
    u8 unk_22f;
    u16 unk_230;
    u8 pad_232[0x23c - 0x232];
    s32 unk_23c;
    u8 pad_240[0x24c - 0x240];
    s16 unk_24c;
    u8 unk_24e;
    u8 pad_24f[3];
    u8 unk_252;
    u8 unk_253;
    u8 unk_254;
};

struct Unk_ov004_0222ef04_Cb {
    u8 pad_00[4];
    struct Unk_ov004_0222ef04_Own *unk_04;
    u8 pad_08[0x24 - 8];
    void *unk_24;
    u8 pad_28[0x92 - 0x28];
    u8 unk_92;
};

struct Unk_ov004_0222ef04_Own {
    u8 pad_00[0x2c];
    void *unk_2c;
};

typedef Unk_ov004_0222eb30_Ent Ent;
typedef Unk_ov004_0222eb30_Rec Rec;
typedef Unk_ov004_0222eb30_V3 V3;
typedef Unk_ov004_0222ef04_Cb Cb;

extern "C" {
extern u8 data_ov004_02251d60;
extern Ent::Pair data_ov004_02251de4[];
extern Ent::Fn data_ov004_02251e5c[];
extern Ent *data_ov004_02251e94[];
extern Rec data_ov004_022402ec[];
extern u8 data_ov004_022402ef[];
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;

s32 func_ov004_0223257c(void *, s32, s32);
s32 func_ov004_02231e3c(s32, s32);
s32 func_ov004_02231e28(s32, s32);
s32 func_02002bdc(void *, void *);
s32 func_ov004_022321b4(Ent *);
s32 func_020b50b4();
s32 func_020b6080(s32, void *, void *, void *);
s64 func_020e9600(void *, void *);
s32 func_020543b4(void *, void *);
s32 func_02054420(void *, void *);
s32 func_02055488(void *, void *, void *);
s32 func_ov004_02232548(Ent *);
s32 func_ov004_02232130(Ent *);
s32 func_ov004_02231f98(Ent *, s32, s32);
s32 func_ov004_02232068(Ent *);
s32 func_ov004_0222e2f4(Ent *);
s32 func_ov004_0222e288(Ent *, s32);
s32 func_ov004_0222dea8(Ent *);
s32 func_ov004_0222dfbc(Ent *);
s32 func_ov004_0222e820(Ent *);
s32 func_ov004_0222e7a4(Ent *);
s32 func_ov004_0222e61c(Ent *);
s32 func_ov004_022320c8(Ent *);
s32 func_ov004_02231eec(Ent *, s32);
s32 func_ov004_0222e238(Ent *);
s32 func_01ffcb0c(s32, s32);
s32 func_ov004_0223230c(Ent *, s32, s32, s32);
s32 func_ov004_022321e8(Ent *);
s32 func_ov004_0222ede0(Ent *);
void func_ov004_0222ed24(Ent *, V3 *);
s32 func_ov004_0222ee2c(Ent *, V3 *);
void func_ov004_0222ef04(Cb *);
void func_ov004_0222ef24(Cb *);
void func_ov004_0222ef40(Cb *);
}

extern "C" void func_ov004_0222eb30(Ent *e) {
    s32 *p = &e->unk_20c;
    *p = e->unk_214 * e->unk_158;
    func_ov004_0223257c(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c >= e->unk_210) {
        e->unk_158 = 0;
        e->unk_1ee = 4;
    }
}

extern "C" void func_ov004_0222eb8c(Ent *e) {
    e->unk_20c = 0;
    if (e->unk_1fd == 2) {
        e->unk_1c2 = e->unk_1c2 + func_ov004_02231e3c(0xb4, 0x96);
        e->unk_1eb++;
    } else {
        e->unk_1c2 = e->unk_1c2 + func_ov004_02231e3c(e->unk_230, 0);
        e->unk_1eb = 0;
    }
    e->unk_158 = 0;
    e->unk_202 = func_ov004_02231e28(e->unk_205, e->unk_204);
    e->unk_203 = func_ov004_02231e28(e->unk_207, e->unk_206);
    e->unk_23c = 0;
    if (e->unk_1e8 == e->unk_15c) {
        s32 v = e->unk_1a8.y;
        if (v >= e->unk_1cc) {
            e->unk_1ca = -1;
        } else if (v <= e->unk_228) {
            e->unk_1ca = 1;
        } else {
            s32 t = func_ov004_02231e28(0, 2);
            e->unk_1ca = t > 0 ? 1 : -1;
        }
    }
    e->unk_24e = 0;
    e->unk_1ee = 3;
    e->unk_22f = 1;
}

extern "C" void func_ov004_0222ecb4(Ent *e) {
    (e->*data_ov004_02251de4[data_ov004_02251d60].b)();
}

extern "C" void func_ov004_0222ecec(Ent *e) {
    (e->*data_ov004_02251de4[data_ov004_02251d60].a)();
}

extern "C" void func_ov004_0222ed24(Ent *e, V3 *p) {
    if (e->unk_253 == 0) {
        e->unk_1c4 = 0;
        e->unk_1ee = 1;
        e->unk_158 = 0;
        if ((u8)(e->unk_164 + 0xfc) <= 1) {
            if (e->unk_254 >= 0x7d) {
                e->unk_24c = func_02002bdc(p, &e->unk_1a8);
            } else if (e->unk_1c0 >= 0) {
                e->unk_24c = func_ov004_02231e28(0x38e4, 0x471c);
            } else {
                e->unk_24c = -func_ov004_02231e28(0x38e4, 0x471c);
            }
        } else {
            e->unk_24c = func_02002bdc(p, &e->unk_1a8);
        }
        if (e->unk_1fd == 1) {
            func_ov004_022321b4(e);
        }
    }
}

extern "C" BOOL func_ov004_0222ede0(Ent *e) {
    BOOL r = FALSE;
    if (e->unk_253 != 0) {
        if (e->unk_1ee != 1) {
            e->unk_253 = r;
        }
        return FALSE;
    }
    V3 v;
    if (func_ov004_0222ee2c(e, &v)) {
        func_ov004_0222ed24(e, &v);
        r = TRUE;
        e->unk_253 = r;
    }
    return r;
}

static inline BOOL Unk_ov004_0222ee2c_Both() {
    if (data_021ef5d0 && data_021ef5cc) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov004_0222ee2c(Ent *e, V3 *out) {
    BOOL r = FALSE;
    u8 b;
    s32 t;
    V3 v;
    if (func_020b6080(func_020b50b4(), &v, &t, &b)) {
        if (!Unk_ov004_0222ee2c_Both()) {
            if (t == 0x13) {
                if (b == 0) {
                    if (func_020e9600(&e->unk_1a8, &v) <= 0x9000) {
                        s32 d = e->unk_1a8.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                } else if (b == 1) {
                    if (func_020e9600(&e->unk_1a8, &v) <= 0x9000) {
                        s32 d = e->unk_1a8.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern "C" void func_ov004_0222ef04(Cb *c) {
    c->unk_24 = (void *)func_ov004_0222ef40;
    c->unk_92 = 1;
    c->unk_24 = (void *)func_ov004_0222ef24;
    c->unk_92 = 2;
}

extern "C" void func_ov004_0222ef24(Cb *c) {
    void *m = c->unk_04->unk_2c;
    if (m) {
        func_020543b4((u8 *)m + 0x64, c);
    }
}

extern "C" void func_ov004_0222ef40(Cb *c) {
    void *m = c->unk_04->unk_2c;
    if (m) {
        func_02054420((u8 *)m + 0x64, c);
    }
}

extern "C" void func_ov004_0222ef5c(Ent *e) {
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    if (data_ov004_022402ec[e->unk_15c].unk_00 == 0) {
        u8 *p1 = &e->unk_1e8;
        u8 b = *p1;
        if (e->unk_252 != b && b != e->unk_15c) {
            e->unk_252 = b;
            if (e->unk_1ee != 1) {
                func_ov004_0222ed24(e, (V3 *)((u8 *)data_ov004_02251e94[*p1] + 0x1a8));
            }
        }
    }
    func_ov004_02232548(e);
    u8 m = e->unk_1ee;
    if (m == 5) {
        if (e->unk_20c < 0xcd) goto skip;
    }
    if (m == 6) goto skip;
    func_ov004_02232130(e);
    {
        s32 s = e->unk_15c;
        if (s == 0x1d) {
            func_ov004_02231f98(e, 0xe38, 0x4b0);
        } else {
            u32 k = data_ov004_022402ec[s].unk_00;
            if (k == 0) {
                func_ov004_02232068(e);
            } else if (k >= 4) {
                func_ov004_02231f98(e, 0x71c, 0x384);
            } else {
                func_ov004_02231f98(e, 0x1554, 0x384);
            }
        }
    }
    func_ov004_0222e2f4(e);
skip:
    func_ov004_0222e288(e, 0x333);
    e->unk_158++;
    func_ov004_0222ede0(e);
}

extern "C" void func_ov004_0222f090(Ent *e) {
    if (data_ov004_022402ec[e->unk_15c].unk_00 == 0) {
        e->unk_50 = e;
    }
    e->unk_1e8 = e->unk_15c;
    func_ov004_0222dea8(e);
    if (e->unk_1c6) {
        func_02055488((u8 *)e + 0x64, (void *)func_ov004_0222ef04, e);
    }
}

extern "C" void func_ov004_0222f0e4(Ent *e) {
    func_ov004_0222dfbc(e);
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    {
        s32 s = e->unk_15c;
        if (s != 0x2e && s != 0x2d) {
            if (s == 0x29 || s == 0x37 || s == 0x2b) {
                func_ov004_0222e820(e);
            }
            func_ov004_0222e7a4(e);
            func_ov004_0222e61c(e);
        } else {
            if (e->unk_1a8.z > 0x13dc2) {
                e->unk_1a8.z = 0x13dc2;
            }
        }
    }
    if (e->unk_1ee != 2 && e->unk_1ee != 6) {
        if (e->unk_15c == 0x2b || e->unk_15c == 0x37) {
            func_ov004_022320c8(e);
            func_ov004_02231eec(e, 0x71c);
        } else {
            func_ov004_022320c8(e);
            func_ov004_02231eec(e, 0xe38);
        }
        func_ov004_0222e2f4(e);
    }
    func_ov004_0222e288(e, 0x333);
    func_ov004_0222e238(e);
    e->unk_158++;
    func_ov004_0222ede0(e);
}

extern "C" void func_ov004_0222f1d0(Ent *e) {
    e->unk_50 = e;
    s32 s = e->unk_15c;
    if ((u32)(s - 0x2d) <= 1) {
        e->unk_1c8 = 0;
    } else if (s == 0x37) {
        e->unk_1c8 = 2;
    } else {
        e->unk_1c8 = 1;
    }
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    func_ov004_0222dea8(e);
    if (e->unk_1c6) {
        func_02055488((u8 *)e + 0x64, (void *)func_ov004_0222ef04, e);
    }
}

extern "C" void func_ov004_0222f244(Ent *e) {
    e->unk_1c7 = 0;
    e->unk_1a8.x = 0x16f00;
    e->unk_1a8.y = 0xfffff400;
    e->unk_1a8.z = 0x13300;
    e->unk_1c0 = 0;
}

extern "C" void func_ov004_0222f284(Ent *e) {
    s32 c = func_01ffcb0c(0x1800, (s32)(data_ov004_022402ef[e->unk_15c * 0x11] << 12) >> 7);
    s32 a = e->unk_1a8.z + c;
    s32 b = e->unk_1a8.z - c;
    s32 t = e->unk_1a8.x;
    if (t < 0x4000 || t > 0x1e000) goto end;
    if (e->unk_1ee == 1) {
        e->unk_1fc = 0;
        e->unk_1fd = 0;
        goto end;
    }
    {
        s32 w = e->unk_1c0;
        if (w < 0) w = -w;
        w = (s16)w;
        if (a >= 0x15dc2 && e->unk_1fc != 0) goto go;
        if (a <= 0x11000 && e->unk_1fc != 0) goto go;
        if (a >= 0x15dc2 && w < 0x4000 && e->unk_1fc == 0) goto go;
        if (b > 0x11000 || w <= 0x4000 || e->unk_1fc != 0) goto fail2;
    }
go:
    if (e->unk_1f1 != 0) goto fail1;
    if (e->unk_1fd == 0) {
        if (func_ov004_02231e28(0, 0x64) < 0x4b) {
            e->unk_1fd = 1;
        } else {
            e->unk_1fd = 2;
            goto end;
        }
    } else {
        if (e->unk_1eb >= 2) {
            e->unk_1fd = 1;
            e->unk_1fc = 0;
            e->unk_1eb = 0;
        }
    }
    if (e->unk_1fd == 1) {
        if (e->unk_1fc == 0) {
            func_ov004_0223230c(e, 0, 1, 4);
            e->unk_1fc = 1;
            if (e->unk_1a8.x >= 0xb000 && e->unk_1a8.x <= 0x17000) {
                if (func_ov004_02231e28(0, 0x64) < 0x14) {
                    { s16 k = -1; e->unk_200 *= k; }
                }
            }
        }
        e->unk_22f = 0;
        e->unk_1c0 = e->unk_1c0 + e->unk_200;
        if (e->unk_1ee == 5) {
            e->unk_1ee = 4;
            e->unk_158 = 0;
        }
    }
    goto end;
fail1:
    e->unk_1fc = 0;
    e->unk_1fd = 0;
    goto end;
fail2:
    e->unk_1fc = 0;
    e->unk_1fd = 0;
end:;
}
