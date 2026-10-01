// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)

struct Unk_ov065_0227c538_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227c538_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_0227c538_Node {
    s32 unk_00;
    s32 unk_04;
    Unk_ov065_0227c538_Sub *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_0227c538_Node *unk_20;
};

struct Unk_ov065_0227c538_Ctx {
    u8 unk_000;
    u8 pad_001[0xff];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10c;
    u8 unk_110;
    u8 pad_111[0x1e];
    u8 unk_12f;
    u8 pad_130[0x14];
    u8 unk_144;
    u8 pad_145[0x53];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    Unk_ov065_0227c538_Pair unk_1a4[6];
    s32 unk_1d4;
    s32 unk_1d8;
    char *unk_1dc;
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    char *unk_1ec;
    s32 unk_1f0;
    char *unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
    s32 unk_204;
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    u8 unk_218;
    u8 pad_219[0xff];
    u8 unk_318;
    u8 pad_319[0xff];
    s32 unk_418;
    s32 unk_41c;
    s32 unk_420;
    Unk_ov065_0227c538_Node *unk_424;
    void *unk_428;
    s32 unk_42c;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43c;
    char *unk_440;
    s32 unk_444;
    s32 unk_448;
    s32 unk_44c;
    char *unk_450;
    s32 unk_454;
    s32 unk_458;
    s32 unk_45c;
    char *unk_460;
    s32 unk_464;
    s32 unk_468;
    s32 unk_46c;
    s32 unk_470;
    u8 pad_474[0x1c];
};

typedef Unk_ov065_0227c538_Ctx Ctx0227;
extern "C" {
extern s32 data_ov065_02290fa0;

struct Unk_ov065_0227c564_Z {
    s32 x;
    s32 y;
};

typedef s32 (*Unk_ov065_0227c564_Fn)(Ctx0227 **, void *, s32);

void func_ov065_0227e1c8(Ctx0227 **, s32);
void func_ov065_02283460(Ctx0227 **, const char *);
s32 func_ov065_0227ee64(Ctx0227 **, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, Unk_ov065_0227c564_Fn, s32);
s32 func_ov065_0227e3d0(Ctx0227 **);
void func_ov065_0227913c(s32);
s32 func_ov065_022808dc(Ctx0227 **, Unk_ov065_0227c538_Node **, s32);
s32 func_ov065_0227df0c(Ctx0227 **, s32);
s32 func_ov065_02280f5c(Ctx0227 **);
s32 func_ov065_02281b20(Ctx0227 **);
void func_ov065_02280a2c(Ctx0227 **, Unk_ov065_0227c538_Node *);
void func_ov065_0228090c(Ctx0227 **, Unk_ov065_0227c538_Node *);
void func_ov065_0227fef0(Ctx0227 **, char **);
s32 func_ov065_0227da7c(Ctx0227 **, s32, char **, s32 *, s32, const char *);
s32 func_ov065_0227db18(Ctx0227 **, s32, char **, s32 *, s32 *, const char *);
void func_ov065_02283470(Ctx0227 **, s32, const char *);
void func_ov065_0227e160(Ctx0227 **, s32, s32);
void func_ov065_02283720(Ctx0227 **, const char *, ...);
void *func_ov065_02277ad8(void *, s32);
s32 func_ov065_02283684(Ctx0227 **, char *, s32);
s32 func_ov065_0227d040(Ctx0227 **, char *);
s32 func_ov065_022808b4(Ctx0227 **);
s32 func_ov065_02280854(Ctx0227 **, Unk_ov065_0227c538_Node *, char *);
void func_ov065_022817c8(Ctx0227 **, s32 (*)(Ctx0227 **, Unk_ov065_0227c538_Node *, s32), s32);
s32 func_ov065_022818bc(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void func_ov065_0227de10(Ctx0227 **, char **, const char *);
void func_ov065_0227dde8(Ctx0227 **, char **, s32);
s32 func_ov065_0228176c(Unk_ov065_0227c538_Node *);
void func_ov065_02281880(Ctx0227 **, Unk_ov065_0227c538_Node *);
s32 func_ov065_02281a5c(Ctx0227 **);
void func_ov065_02279138();
void func_ov065_02279144();
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
void func_ov065_022788f0(void *);

char *func_02129f1c(const char *, const char *);
void func_02128a00(void *, const void *, s32);
void func_021289b4(void *, void *, u32);
s32 func_0212b770(const char *);
s32 func_0212a15c(const char *, const char *, u32);
void func_0212899c(void *, s32, u32);
void func_02128c60();

s32 func_ov065_0227ca28(Ctx0227 **h);
s32 func_ov065_0227cbdc(Ctx0227 **h);
s32 func_ov065_0227cc1c(Ctx0227 **h, s32 a, s32 b);
s32 func_ov065_0227c6f0(Ctx0227 **h, s32 a);
s32 func_ov065_0227c7dc(Ctx0227 **h);
s32 func_ov065_0227cbcc(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
s32 func_ov065_0227ce30(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
}

extern "C" {
s32 func_ov065_0227cc1c(Ctx0227 **h, s32 a, s32 b) {
    Ctx0227 *c;
    *h = 0;
    c = (Ctx0227 *)func_ov065_02277af0(0x490);
    if (c == NULL) {
        return 1;
    }
    func_0212899c(c, 0, 0x490);
    c->unk_000 = 0;
    c->unk_418 = 0;
    c->unk_100 = 1;
    c->unk_104 = 0;
    c->unk_108 = 0;
    c->unk_10c = 0;
    c->unk_46c = a;
    c->unk_470 = b;
    if (func_ov065_02281a5c(&c) == 0) {
        func_ov065_02277ac8(c);
        c = 0;
        return 1;
    }
    c->unk_420 = 0;
    {
        s32 i;
        for (i = 0; i < 6; i++) {
            c->unk_1a4[i].unk_00 = 0;
            c->unk_1a4[i].unk_04 = 0;
        }
    }
    c->unk_460 = 0;
    func_ov065_02283720(&c, "\n\n\n\n\n*************\ngpiInitialize\n");
    {
        s32 r = func_ov065_0227ca28(&c);
        if (r != 0) {
            func_ov065_0227cbdc(&c);
            return r;
        }
    }
    func_ov065_02279138();
    func_ov065_02279144();
    func_02128c60();
    *h = c;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227cbdc(Ctx0227 **h) {
    Ctx0227 *c = *h;
    func_ov065_0227e1c8(h, 1);
    func_ov065_02277ac8(c->unk_460);
    c->unk_460 = 0;
    func_ov065_022788f0(c->unk_428);
    func_ov065_02277ac8(c);
    *h = 0;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227cbcc(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m) {
    n->unk_08 = 0;
    n->unk_10 = 0;
    n->unk_14 = 0;
    n->unk_18 = 0;
    return 1;
}
}

extern "C" {
s32 func_ov065_0227ca28(Ctx0227 **h) {
    Ctx0227 *c = *h;
    Unk_ov065_0227c538_Node *n;
    c->unk_110 = 0;
    c->unk_12f = 0;
    c->unk_144 = 0;
    c->unk_1d4 = -1;
    c->unk_1d8 = 0;
    c->unk_1e4 = 0;
    c->unk_1e8 = 0;
    c->unk_1e0 = 0;
    func_ov065_02277ac8(c->unk_1dc);
    c->unk_1dc = 0;
    c->unk_1dc = 0;
    c->unk_1f0 = 0;
    func_ov065_02277ac8(c->unk_1ec);
    c->unk_1ec = 0;
    c->unk_1ec = 0;
    c->unk_1fc = 0;
    c->unk_200 = 0;
    c->unk_1f8 = 0;
    func_ov065_02277ac8(c->unk_1f4);
    c->unk_1f4 = 0;
    c->unk_1f4 = 0;
    c->unk_448 = 0;
    c->unk_44c = 0;
    c->unk_444 = 0;
    func_ov065_02277ac8(c->unk_440);
    c->unk_440 = 0;
    c->unk_440 = 0;
    c->unk_458 = 0;
    c->unk_45c = 0;
    c->unk_454 = 0;
    func_ov065_02277ac8(c->unk_450);
    c->unk_450 = 0;
    c->unk_450 = 0;
    c->unk_204 = -1;
    c->unk_20c = 2;
    n = c->unk_424;
    while (n != NULL) {
        func_ov065_0228090c(h, n);
        n = c->unk_424;
    }
    c->unk_424 = 0;
    c->unk_430 = 0;
    func_ov065_022817c8(h, func_ov065_0227cbcc, 0);
    c->unk_19c = 0;
    c->unk_1a0 = 0;
    c->unk_198 = 0;
    c->unk_210 = 0;
    c->unk_41c = 0;
    c->unk_434 = 0;
    c->unk_214 = -1;
    c->unk_218 = 0;
    c->unk_318 = 0;
    return 0;
}
}

extern "C" {
s32 func_ov065_0227c7dc(Ctx0227 **h) {
    Unk_ov065_0227c538_Node *rec;
    s32 len;
    s32 flag = 0;
    Ctx0227 *c = *h;
    char *p;
    s32 r;
    for (;;) {
        func_ov065_0227fef0(h, &c->unk_1f4);
        r = func_ov065_0227da7c(h, c->unk_1d4, &c->unk_1f4, &flag, 1, "CM");
        if (r != 0) {
            return r;
        }
        r = func_ov065_0227db18(h, c->unk_1d4, &c->unk_1dc, &len, &flag, "CM");
        if (r != 0) {
            if (r == 3) {
                func_ov065_02283470(h, 5, "There was an error reading from the server.");
                func_ov065_0227e160(h, 3, 1);
                return 3;
            }
            return r;
        }
        p = func_02129f1c(c->unk_1dc, "\\final\\");
        if (p != NULL) {
            do {
                *p = 0;
                func_ov065_02283720(h, "CMD: %s\n", c->unk_1dc);
                len = p - c->unk_1dc;
                if (len > c->unk_1f0) {
                    s32 n = len;
                    if (n < 0x800) {
                        n = 0x800;
                    }
                    c->unk_1f0 = c->unk_1f0 + n;
                    void *np = func_ov065_02277ad8(c->unk_1ec, c->unk_1f0 + 1);
                    if (np == NULL) {
                        func_ov065_02283460(h, "Out of memory.");
                        return 1;
                    }
                    c->unk_1ec = (char *)np;
                }
                func_02128a00(c->unk_1ec, c->unk_1dc, len + 1);
                c->unk_1e4 = c->unk_1e4 - ((p + 7) - c->unk_1dc);
                func_021289b4(c->unk_1dc, p + 7, c->unk_1e4 + 1);
                char *q = c->unk_1ec;
                char *f = func_02129f1c(q, "\\id\\");
                if (f != NULL) {
                    q = (char *)func_0212b770(f + 4);
                    if (func_ov065_022808dc(h, &rec, (s32)q) == 0) {
                        func_ov065_02283720(h, "No matching operation found for id %d\n", q);
                    } else {
                        r = func_ov065_02280854(h, rec, c->unk_1ec);
                        if (r != 0) {
                            return r;
                        }
                    }
                } else {
                    if (func_ov065_02283684(h, q, 1) != 0) {
                        return 4;
                    }
                    q = c->unk_1ec;
                    if (func_0212a15c(q, "\\bm\\", 4) == 0) {
                        r = func_ov065_0227d040(h, q);
                        if (r != 0) {
                            return r;
                        }
                    } else if (func_0212a15c(q, "\\ka\\", 10) != 0) {
                        func_ov065_02283720(h, "Received an unrecognized, unsolicited message.\n");
                    }
                }
                p = func_02129f1c(c->unk_1dc, "\\final\\");
            } while (p != NULL);
        }
        if (flag != 0) {
            c->unk_1d8 = 4;
            func_ov065_02283470(h, 7, "The server has closed the connection.");
            func_ov065_0227e160(h, 3, 1);
            return 0;
        }
        r = func_ov065_022808b4(h);
        if (r != 0) {
            func_ov065_0227913c(10);
        }
        if (r == 0) {
            return 0;
        }
    }
}
}

extern "C" {
s32 func_ov065_0227c6f0(Ctx0227 **h, s32 arg) {
    Ctx0227 *c = *h;
    s32 r = 0;
    Unk_ov065_0227c538_Node *rec;
    if (c->unk_1d8 == 1) {
        s32 zero = 0;
        s32 k;
        do {
            r = func_ov065_0227e3d0(h);
            if (r == 0 && arg != 0 && c->unk_1d8 == 1) {
                k = 1;
            } else {
                k = zero;
            }
            if (k != 0) {
                func_ov065_0227913c(10);
            }
        } while (k != 0);
        if (r != 0) {
            if (func_ov065_022808dc(h, &rec, 1) != 0) {
                rec->unk_1c = 4;
            }
        }
    }
    if ((u32)(c->unk_1d8 - 2) <= 1) {
        if (r == 0) {
            r = func_ov065_0227c7dc(h);
        }
        if (r == 0) {
            r = func_ov065_02280f5c(h);
        }
    }
    if (r == 0) {
        r = func_ov065_02281b20(h);
    }
    rec = c->unk_424;
    if (rec != NULL) {
        do {
            if (rec->unk_1c != 0) {
                func_ov065_02280a2c(h, rec);
                Unk_ov065_0227c538_Node *o = rec;
                rec = rec->unk_20;
                func_ov065_0228090c(h, o);
            } else {
                rec = rec->unk_20;
            }
        } while (rec != NULL);
    }
    {
        s32 t = func_ov065_0227df0c(h, arg);
        if (t == 0) {
            if (c->unk_41c != 0) {
                func_ov065_0227e1c8(h, 0);
            }
            t = r;
        }
        return t;
    }
}
}
