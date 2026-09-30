// mwcc-flags: -O4,p
#include "types.h"

// ov065_051: DWC/GameSpy-like response parser (0x0227e350..0x0227eb60)

struct Unk_ov065_0227e350_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_0227e350_Pair2 {
    Unk_ov065_0227e350_Pair p;
};

struct Unk_ov065_0227e350_Sub {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
};

struct Unk_ov065_0227e350_Node {
    s32 unk_00;
    void *unk_04;
    Unk_ov065_0227e350_Sub *unk_08;
    Unk_ov065_0227e350_Pair2 unk_0c;
    s32 unk_14;
    s32 unk_18;
};

struct Unk_ov065_0227e350_Ctx {
    u8 unk_000;
    u8 pad_001[0xff];
    s32 unk_100;
    s32 unk_104;
    s32 unk_108;
    s32 unk_10c;
    char unk_110[0x1f];
    char unk_12f[0x15];
    char unk_144[0x33];
    char unk_177[0x21];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    u8 pad_1a4[0x30];
    s32 unk_1d4;
    s32 unk_1d8;
    u8 pad_1dc[0x18];
    char unk_1f4[0x14];
    s32 unk_208;
    u8 pad_20c[0x20c];
    s32 unk_418;
    u8 pad_41c[0x50];
    s32 unk_46c;
    s32 unk_470;
    char unk_474[0x1c];
};

struct Unk_ov065_0227e438_Req {
    u8 pad_00[0x80];
    char unk_80[0x21];
    char unk_a1[0x21];
    char unk_c2[0x100];
    char unk_1c2[0x100];
    char unk_2c2[0x42];
    s32 unk_304;
};

typedef Unk_ov065_0227e350_Ctx Ctx0227;
typedef Unk_ov065_0227e350_Node Node0227;
typedef Unk_ov065_0227e438_Req Req0227;

extern char data_ov065_0228d234[];
extern char data_ov065_0228d23c[];
extern char data_ov065_0228d244[];
extern char data_ov065_0228d274[];
extern char data_ov065_0228d280[];
extern char data_ov065_0228d288[];
extern char data_ov065_0228d294[];
extern char data_ov065_0228d2c4[];
extern char data_ov065_0228d2d0[];
extern char data_ov065_0228d2d8[];
extern char data_ov065_0228d2e4[];
extern char data_ov065_0228d2f4[];
extern char data_ov065_0228d2fc[];
extern char data_ov065_0228d304[];
extern char data_ov065_0228d314[];
extern char data_ov065_0228d348[];
extern char data_ov065_0228d350[];
extern char data_ov065_0228d370[];
extern char data_ov065_0228d380[];
extern char data_ov065_0228d38c[];
extern char data_ov065_0228d394[];
extern char data_ov065_0228d39c[];
extern char data_ov065_0228d3ac[];
extern char data_ov065_0228d3b8[];
extern char data_ov065_0228d3c4[];
extern char data_ov065_0228d3d4[];
extern char data_ov065_0228d3e0[];
extern char data_ov065_0228d3e8[];
extern char data_ov065_0228d3f0[];
extern char data_ov065_0228d3fc[];
extern char data_ov065_0228d404[];
extern char data_ov065_0228d408[];
extern char data_ov065_0228d414[];
extern char data_ov065_0228d420[];
extern char data_ov065_0228d22c[];
extern char data_ov065_0228d3d0[];
extern char data_ov065_0228d1f8[];
extern char data_ov065_0228d204[];
extern char data_ov065_02290fe4[];

extern "C" {

s32 func_0212a15c(const char *, const char *, s32);
char *func_02129f1c(const char *, const char *);
s32 func_0212b770(const char *);
s32 func_021277d4(const char *);
s32 func_021130d0(char *, const char *, ...);
s32 func_02128930(const void *, const void *, s32);
void *func_0212899c(void *, s32, s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(s32);
void func_ov065_02278b44(u32);
s32 func_ov065_02278b24(s32, s32);
void func_ov065_0227899c(char *, s32, char *);
void func_ov065_022789fc(char *, char *, s32, s32);
s32 func_ov065_0227de10(Ctx0227 **, char *, const char *);
s32 func_ov065_0227dde8(Ctx0227 **, char *, s32);
void func_ov065_0227e160(Ctx0227 **, s32, s32);
s32 func_ov065_0227e0e8(Ctx0227 **, Unk_ov065_0227e350_Pair, void *, Node0227 *, s32);
void func_ov065_0227f270(void *, s32);
void func_ov065_02281814(Ctx0227 **, char *, char *, u32 **);
void func_ov065_02281880(Ctx0227 **, Node0227 *);
void func_ov065_02281894(Ctx0227 **);
u32 *func_ov065_022818f4(Ctx0227 **, s32);
void func_ov065_0228090c(Ctx0227 **, Node0227 *);
void func_ov065_02283460(Ctx0227 **, const char *);
void func_ov065_02283470(Ctx0227 **, s32, const void *);
s32 func_ov065_02283590(Ctx0227 **, s32, s32 *);
s32 func_ov065_02283630(char *, const char *, char *, s32);
s32 func_ov065_02283684(Ctx0227 **, char *, s32);
void func_ov065_02283728(void *, char *, s32);
s32 func_ov065_0227e964(Ctx0227 **, Req0227 *);
s32 func_ov065_0227eb60(Ctx0227 **, Req0227 *);

s32 func_ov065_0227e350(Ctx0227 **h, Node0227 *n) {
    Ctx0227 *c = *h;
    if (n->unk_08 != NULL) {
        if (c->unk_104 == 0) {
            func_ov065_02277ac8(n->unk_08->unk_08);
            n->unk_08->unk_08 = NULL;
            func_ov065_02277ac8(n->unk_08->unk_0c);
            n->unk_08->unk_0c = NULL;
            func_ov065_02277ac8(n->unk_08);
            n->unk_08 = NULL;
        }
    }
    func_ov065_02277ac8((void *)n->unk_0c.p.unk_04);
    n->unk_0c.p.unk_04 = 0;
    func_ov065_02277ac8((void *)n->unk_18);
    n->unk_18 = 0;
    n->unk_14 = 0;
    if (n->unk_0c.p.unk_00 == 0 || (c->unk_104 == 1 && n->unk_08 == NULL)) {
        func_ov065_02281880(h, n);
        return 0;
    }
    return 1;
}

s32 func_ov065_0227e3d0(Ctx0227 **h) {
    Ctx0227 *c = *h;
    s32 out;
    s32 r = func_ov065_02283590(h, c->unk_1d4, &out);
    if (r == 0) {
        if (out == 4) {
            func_ov065_02283470(h, 0x107, data_ov065_0228d204);
            func_ov065_0227e160(h, 4, 1);
            return 4;
        }
        if (out == 0) {
            return 0;
        }
        c->unk_1d8 = 2;
        return 0;
    }
    return r;
}

s32 func_ov065_0227e438(Ctx0227 **h, Node0227 *n, char *line) {
    Ctx0227 *c = *h;
    Req0227 *req;
    Unk_ov065_0227e350_Pair2 pr;
    char b1[0x21];
    char b2[0x15];
    char b3[0x200];
    char b4[0x50];
    char *p;
    s32 t;
    if (func_ov065_02283684(h, line, 0) != 0) {
        t = c->unk_418;
        if (t == 0x106 && c->unk_1a0 != 0) {
            func_ov065_02281894(h);
            c->unk_19c = 0;
            c->unk_1a0 = 0;
        } else if (t == 0x201) {
            if (func_ov065_02283630(line, data_ov065_0228d22c, b3, 0x200) != 0) {
                c->unk_1a0 = func_0212b770(b3);
            }
        }
        if (func_02129f1c(line, data_ov065_0228d234) != 0) {
            func_ov065_02283470(h, c->unk_418, c);
            func_ov065_0227e160(h, 4, 1);
            return 4;
        }
        func_ov065_02283470(h, c->unk_418, c);
        func_ov065_0227e160(h, 4, 0);
        return 4;
    }
    req = (Req0227 *)n->unk_04;
    switch (n->unk_14) {
    case 1:
        if (func_0212a15c(line, data_ov065_0228d23c, 5) != 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d244);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_ov065_02283630(line, data_ov065_0228d274, (char *)req, 0x80) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d244);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (req->unk_304 != 0) {
            t = func_ov065_0227e964(h, req);
            if (t != 0) {
                return t;
            }
            n->unk_14 = 3;
        } else {
            t = func_ov065_0227eb60(h, req);
            if (t != 0) {
                return t;
            }
            n->unk_14 = 2;
        }
        break;
    case 3:
        if (func_0212a15c(line, data_ov065_0228d280, 5) != 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d244);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_ov065_02283630(line, data_ov065_0228d288, b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d294);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_19c = func_0212b770(b3);
        if (func_ov065_02283630(line, data_ov065_0228d2c4, b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d294);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_1a0 = func_0212b770(b3);
        t = func_ov065_0227eb60(h, req);
        if (t != 0) {
            return t;
        }
        n->unk_14 = 2;
        break;
    case 2:
        if (func_0212a15c(line, data_ov065_0228d2d0, 5) != 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d244);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_ov065_02283630(line, data_ov065_0228d2d8, b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d294);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_198 = func_0212b770(b3);
        if (func_ov065_02283630(line, data_ov065_0228d288, b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d294);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_19c = func_0212b770(b3);
        if (func_ov065_02283630(line, data_ov065_0228d2c4, b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d294);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        c->unk_1a0 = func_0212b770(b3);
        if (func_ov065_02283630(line, data_ov065_0228d2e4, b2, 0x15) == 0) {
            b2[0] = 0;
        }
        if (func_ov065_02283630(line, data_ov065_0228d2f4, c->unk_474, 0x19) == 0) {
            c->unk_474[0] = 0;
        }
        if (req->unk_c2[0] != 0) {
            p = req->unk_c2;
        } else if (c->unk_12f[0] != 0) {
            p = c->unk_12f;
        } else {
            func_021130d0(b4, data_ov065_0228d2fc, c->unk_110, c->unk_144);
            p = b4;
        }
        func_021130d0(b3, data_ov065_0228d304, req->unk_a1, data_ov065_0228d314, p, req, req->unk_80, req->unk_a1);
        func_ov065_0227899c(b3, func_021277d4(b3), b1);
        if (func_ov065_02283630(line, data_ov065_0228d348, b3, 0x200) == 0) {
            func_ov065_02283470(h, 1, data_ov065_0228d294);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (func_02128930(b1, b3, 0x20) != 0) {
            func_ov065_02283470(h, 0x108, data_ov065_0228d350);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
        if (c->unk_100 != 0) {
            u32 *e = func_ov065_022818f4(h, c->unk_1a0);
            e[0] = c->unk_1a0;
            e[1] = c->unk_19c;
        }
        c->unk_1d8 = 3;
        pr = n->unk_0c;
        if (pr.p.unk_00 != 0) {
            u32 *q = (u32 *)func_ov065_02277af0(0x20);
            if (q == NULL) {
                func_ov065_02283460(h, data_ov065_0228d370);
                return 1;
            }
            func_0212899c(q, 0, 0x20);
            q[1] = c->unk_1a0;
            q[0] = 0;
            func_ov065_02283728(q + 2, b2, 0x15);
            t = func_ov065_0227e0e8(h, pr.p, q, n, 0);
            if (t != 0) {
                return t;
            }
        }
        func_ov065_0228090c(h, n);
        break;
    }
    return 0;
}

s32 func_ov065_0227e964(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    char a1[0x1f];
    char b1[0x2d];
    char a2[0x41];
    char b2[0x5f];
    volatile s32 z0;
    volatile s32 z1;
    u32 len;
    u32 i;
    len = func_021277d4(c->unk_177);
    func_ov065_02278b44(0x79707367);
    i = 0;
    if (i < len) {
        char *p = a1;
        z0 = i;
        do {
            s8 r = func_ov065_02278b24(z0, 0xff);
            *p++ = r ^ c->unk_177[i];
        } while (++i < len);
    }
    a1[i] = 0;
    func_ov065_022789fc(a1, b1, len, 1);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d380);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d38c);
    func_ov065_0227de10(h, c->unk_1f4, c->unk_144);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d394);
    func_ov065_0227de10(h, c->unk_1f4, c->unk_110);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d39c);
    func_ov065_0227de10(h, c->unk_1f4, b1);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3ac);
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_46c);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3b8);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_02290fe4);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3c4);
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_470);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d2e4);
    func_ov065_0227de10(h, c->unk_1f4, c->unk_12f);
    if (req->unk_2c2[0] != 0) {
        len = func_021277d4(req->unk_2c2);
        func_ov065_02278b44(0x79707367);
        i = 0;
        if (i < len) {
            char *p = a2;
            z1 = i;
            do {
                s8 r = func_ov065_02278b24(z1, 0xff);
                *p++ = r ^ req->unk_2c2[i];
            } while (++i < len);
        }
        a2[i] = 0;
        func_ov065_022789fc(a2, b2, len, 1);
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3d4);
        func_ov065_0227de10(h, c->unk_1f4, b2);
    }
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3e0);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d1f8);
    return 0;
}

s32 func_ov065_0227eb60(Ctx0227 **h, Req0227 *req) {
    Ctx0227 *c = *h;
    u32 *out;
    char b1[0x21];
    char b2[0x200];
    char b3[0x50];
    char *p;
    char *q;
    func_ov065_0227f270(req->unk_80, 0x20);
    if (req->unk_1c2[0] != 0) {
        p = req->unk_1c2;
    } else {
        p = c->unk_177;
    }
    func_ov065_0227899c(p, func_021277d4(p), req->unk_a1);
    if (req->unk_c2[0] != 0) {
        q = req->unk_c2;
    } else if (c->unk_12f[0] != 0) {
        q = c->unk_12f;
    } else {
        func_021130d0(b3, data_ov065_0228d2fc, c->unk_110, c->unk_144);
        q = b3;
    }
    func_021130d0(b2, data_ov065_0228d304, req->unk_a1, data_ov065_0228d314, q, req->unk_80, req, req->unk_a1);
    func_ov065_0227899c(b2, func_021277d4(b2), b1);
    if (c->unk_100 != 0) {
        func_ov065_02281814(h, c->unk_110, c->unk_144, &out);
        if (out != NULL) {
            c->unk_19c = out[1];
            c->unk_1a0 = out[0];
        }
    }
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3e8);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d274);
    func_ov065_0227de10(h, c->unk_1f4, req->unk_80);
    if (req->unk_c2[0] != 0) {
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3f0);
        func_ov065_0227de10(h, c->unk_1f4, req->unk_c2);
    } else if (c->unk_12f[0] != 0) {
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d2e4);
        func_ov065_0227de10(h, c->unk_1f4, c->unk_12f);
    } else {
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3fc);
        func_ov065_0227de10(h, c->unk_1f4, c->unk_110);
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d404);
        func_ov065_0227de10(h, c->unk_1f4, c->unk_144);
    }
    if (c->unk_19c != 0) {
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d288);
        func_ov065_0227dde8(h, c->unk_1f4, c->unk_19c);
    }
    if (c->unk_1a0 != 0) {
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d2c4);
        func_ov065_0227dde8(h, c->unk_1f4, c->unk_1a0);
    }
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d408);
    func_ov065_0227de10(h, c->unk_1f4, b1);
    if (c->unk_10c == 1) {
        func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d414);
    }
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d420);
    {
        s32 t = (u16)c->unk_208;
        s32 sw = (s16)(u16)(((t >> 8) & 0xff) | ((t << 8) & 0xff00));
        func_ov065_0227dde8(h, c->unk_1f4, sw);
    }
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3ac);
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_46c);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3b8);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_02290fe4);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3c4);
    func_ov065_0227dde8(h, c->unk_1f4, c->unk_470);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d3e0);
    func_ov065_0227de10(h, c->unk_1f4, data_ov065_0228d1f8);
    return 0;
}

}
