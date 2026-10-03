// mwcc-flags: -O4,p -str reuse

#include "types.h"


extern "C" { s32 data_ov065_02291504; } //@
extern "C" { char data_ov065_02291508[0x2c]; } //@

namespace N02285630 {
extern "C" {


// ov065_061: SSL/TLS-like handshake state machine (0x02285630..0x02285eb8)

struct Unk_ov065_02285630_Item {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
};

struct Unk_ov065_02285630_Item8 {
    u8 pad_00[8];
    u16 unk_08;
};

struct Unk_ov065_02285630_Peer {
    u8 pad_00[0x20];
    s32 unk_20;
};

struct Unk_ov065_02285630_Buf {
    u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov065_02285630_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02285630_Peer *unk_08;
    s32 unk_0c;
    u8 pad_10[0x24];
    s32 unk_34;
    void *unk_38;
    s32 unk_3c;
    u8 pad_40[4];
    Unk_ov065_02285630_Buf unk_44;
    s32 unk_4c;
    u8 pad_50[0xc];
    void *unk_5c;
    void *unk_60;
    u8 pad_64[2];
    u16 unk_66;
    u8 unk_68[0x24];
    s32 unk_8c;
    s32 unk_90;
    s32 unk_94;
};

struct Unk_ov065_022856f8_B4 { u8 a, b, c, d; };

typedef Unk_ov065_02285630_Conn Cn;
typedef Unk_ov065_02285630_Item It;

extern "C" {
extern u8 data_ov065_0228e150[];
s32 memcmp(void *, const void *, u32);
s32 func_ov065_02277ac8(void *);
s32 func_ov065_0227866c(void *, s32);
s32 func_ov065_02278684(void *);
s32 func_ov065_02278570(void *, s32);
s32 func_ov065_022785c8(void *, void *, void *);
s32 func_ov065_02279144();
s32 func_ov065_02283e5c(void *, void *);
s32 func_ov065_02283e88(void *, void *);
s32 func_ov065_02283f34(void *);
s32 func_ov065_0228405c(void *, s32, s32);
s32 func_ov065_02284090(void *, void *, s32);
s32 func_ov065_022840f8(void *);
s32 func_ov065_02284360(Cn *, s32);
s32 func_ov065_02284498(Cn *, s32, void *, s32);
s32 func_ov065_02284514(void *, Cn *, s32, s32, s32, void *, s32);
s32 func_ov065_02284654(Cn *);
s32 func_ov065_02284c0c(Cn *, void *);
s32 func_ov065_02284ca4(Cn *);
s32 func_ov065_02284cb4(Cn *, void *, s32);
s32 func_ov065_02284d34(Cn *, u16, u16);
s32 func_ov065_02284fd0(Cn *, void *, void *, s32);
s32 func_ov065_0228503c(Cn *, void *, void *);
s32 func_ov065_022860ec(Cn *);
s32 func_ov065_02286110(Cn *);
s32 func_ov065_0228611c(Cn *, s32, s32);
s32 func_ov065_02286180(u32, u32);
s32 func_ov065_02286194(void *, s32);
s32 func_ov065_02286034(Cn *, s32);

s32 func_ov065_02285824(Cn *c, void *p, s32 n);
s32 func_ov065_02285780(Cn *c, void *p, s32 n);
s32 func_ov065_02285778(Cn *c, void *p, s32 n);
s32 func_ov065_022856f8(Cn *c, void *p, s32 n);
s32 func_ov065_022856c0(Cn *c);
void func_ov065_02285964(Cn *c);
s32 func_ov065_02285988(Cn *c);
void func_ov065_022859e4(Cn *c, It *e, s32 i);
s32 func_ov065_02285a44(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out);
s32 func_ov065_02285b6c(It *a, It *b);
s32 func_ov065_02285b78(Cn *c, s32 mode, void *p, s32 n);
s32 func_ov065_02285c44(Cn *c);
s32 func_ov065_02285c80(Cn *c, void *p, s32 n);
s32 func_ov065_02285cdc(Cn *c);
s32 func_ov065_02285d20(Cn *c, void *p, s32 n);
s32 func_ov065_02285e04(Cn *c, void *p, s32 n);
s32 func_ov065_02285eb8(Cn *c, void *p, s32 n);
s32 func_ov065_02285f3c(Cn *c, void *p, s32 n);



















}

}
}

namespace N02285f3c {
extern "C" {


// ov065_062: DWC/GameSpy-like UDP reliable-peer table (0x02285f3c..0x022867c0)

struct Unk_ov065_0228659c_Conn;

struct Unk_ov065_02285f3c_Peer {
    u32 unk_00;
    u16 unk_04;
    Unk_ov065_0228659c_Conn *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x44 - 0x28];
    void *unk_44;
    u8 pad_48[0x50 - 0x48];
    void *unk_50;
    s32 unk_54;
    s32 unk_58;
    void *unk_5c;
    void *unk_60;
    u16 unk_64;
    u16 unk_66;
    u8 pad_68[0x88 - 0x68];
    u32 unk_88;
    u8 pad_8c[0x98 - 0x8c];
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov065_0228659c_Conn {
    s32 unk_00;
    u32 unk_04;
    u16 unk_08;
    void *unk_0c;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x38 - 0x2c];
    u32 unk_38;
    u32 unk_3c;
};

struct Unk_ov065_0228627c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_022867c0_Host {
    char *unk_00;
    char **unk_04;
    s16 unk_08;
    s16 unk_0a;
    u32 **unk_0c;
};

typedef Unk_ov065_02285f3c_Peer Peer062;
typedef Unk_ov065_0228659c_Conn Conn062;
typedef Unk_ov065_0228627c_Sa Sa062;


extern u16 data_0213a510[];

extern "C" {
void func_ov065_02277ac8(void *p);
void *func_ov065_02277af0(s32 n);
void *func_ov065_0227866c(void *v, s32 i);
void func_ov065_02278570(void *v, s32 i);
s32 func_ov065_02278684(void *v);
void func_ov065_02278688(void *v);
void *func_ov065_022786bc(s32 size, s32 cap, void *dtor);
void *func_ov065_02278758(void *t, BOOL (*cb)(Peer062 **, u32 *), void *arg);
void *func_ov065_022787c4(void *t, void *key);
void func_ov065_02278810(void *t, void *key);
void func_ov065_0227885c(void *t, void *key);
void func_ov065_022788f0(void *t);
void *func_ov065_02278928(s32 esize, s32 n, s32 cap, u32 (*hash)(Peer062 **, u32), s32 (*cmp)(Peer062 **, Peer062 **),
                          void *dtor);
s32 func_ov065_02278be8(s32 fd);
s32 func_ov065_02278bf4(char *s);
s32 func_ov065_02278c14(s32 fd, Sa062 *sa, s32 *len);
s32 func_ov065_02278c64(s32 fd, char *buf, s32 len, u32 flags, Sa062 *sa, u32 salen);
s32 func_ov065_02278d64(s32 fd, Sa062 *sa, u32 len);
s32 func_ov065_02278dbc(s32 fd);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
s32 func_ov065_02278ec4(s32 fd);
void func_ov065_02279134();
void func_ov065_02279138();
u32 func_ov065_02279144();
Unk_ov065_022867c0_Host *func_ov065_02261408(char *name);
s32 func_ov065_0228405c(void *p, s32 a, s32 b);
s32 func_ov065_02284100(void *p, u32 n);
s32 func_ov065_022841a4(Conn062 *c, Peer062 *p, u32 ip, u32 port, s32 a, char *buf, s32 len, s32 b);
s32 func_ov065_02284240(Peer062 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov065_022843c0(Peer062 *p, s32 a);
s32 func_ov065_02284420(Peer062 *p, s32 a, s32 b, s32 c);
s32 func_ov065_02284498(Peer062 *p, s32 a, s32 b, s32 c);
s32 func_ov065_022845a4(Conn062 *c);
void func_ov065_022845f4(Peer062 *p);
void func_ov065_02284654(Peer062 *p);
s32 func_ov065_022846c4(Peer062 *p, u32 now);
s32 func_ov065_02284ca4(Peer062 *p);
s32 func_ov065_022849f8(Conn062 *c);
s32 func_ov065_02285398(Conn062 *c, u32 ip, u32 port);
s32 func_ov065_02286110(Peer062 *p);
s32 func_ov065_0228611c(Peer062 *p, s32 a, s32 b);
s16 func_ov065_02286180(u32 a, u32 b);
void func_ov065_022861b0(Conn062 *c);
void func_ov065_0228638c(Peer062 *p);
Peer062 *func_ov065_0228671c(Conn062 *c, u32 ip, u16 port);
void func_ov065_02286564(Conn062 *c);
void *func_ov065_02286554();
void func_ov065_02286788(char **s, s32 *len);
s32 func_ov065_022867c0(char *s, u32 *ip, u16 *port);
void func_0212899c(void *p, s32 v, u32 n);
void memcpy(void *d, void *s, u32 n);
char *func_0212a120(char *s, s32 c);
s32 func_0212b770(char *s);
u32 STD_GetStringLength(char *s);
}

extern "C" {



struct Unk_ov065_02286034_Ent {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
};










BOOL func_ov065_0228623c(Peer062 **pp, u32 *pnow);









u32 func_ov065_02286770(Peer062 **pp, u32 n);
s32 func_ov065_02286754(Peer062 **a, Peer062 **b);
void func_ov065_02286748(Peer062 **p);








}

}
}

namespace N022868b0 {
extern "C" {


// ov065_063: GameSpy NAT negotiation client (0x022868b0..0x022871ac)

#define SWAP32(x) ((((x) << 24) & 0xff000000) | ((((x) << 8) & 0xff0000) | ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00))))
#define SWAP16(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

struct Unk_ov065_022868b0_InAddr {
    u32 addr;
};

struct Unk_ov065_02286c74_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

typedef void (*Unk_ov065_02286c74_Cb34)(s32 state, void *user);
typedef void (*Unk_ov065_02286c74_Cb38)(s32 code, s32 fd, void *arg, void *user);

struct Unk_ov065_02286c74_Ctx {
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14[3];
    s32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2c;
    u16 unk_30;
    u8 unk_32;
    u8 unk_33;
    Unk_ov065_02286c74_Cb34 unk_34;
    Unk_ov065_02286c74_Cb38 unk_38;
    void *unk_3c;
};

struct Unk_ov065_02286934_Buf14 {
    u8 b[0x14];
};

struct Unk_ov065_02286934_Buf15 {
    u8 b[0x15];
};

struct Unk_ov065_02286bb4_Magic {
    u8 b[6];
};

struct Unk_ov065_02286bb4_Pkt {
    u8 magic[6];
    u8 version;
    u8 type;
    u32 cookie;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
};

struct Unk_ov065_02287000_Pkt {
    u8 magic[6];
    u8 version;
    u8 type;
    u32 cookie;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    char name[0x43];
};

struct Unk_ov065_02286f04_Hostent {
    char *name;
    char **aliases;
    s16 addrtype;
    s16 length;
    u32 **addr_list;
};

struct Unk_ov065_022871ac_List {
    u8 pad_00[0xc];
    u8 *unk_0c;
};

extern "C" {
extern s32 data_ov065_02291504;
extern char data_ov065_02291508[];



extern u8 data_ov065_0228e16c[];
extern char data_ov065_0228e174[];
extern char data_ov065_0228e190[];
extern char data_ov065_0228e1ac[];
extern char data_ov065_02290fe4[];
extern s32 data_ov065_02290fa0;
extern u32 data_ov065_02291534;
extern u32 data_ov065_02291538;
extern u32 data_ov065_0229153c;
extern u32 data_ov065_02291540;
extern void *data_ov065_02291544;
extern u8 data_ov065_02291548[];

s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 OS_SNPrintf(char *buf, s32 n, const char *fmt, ...);
char *func_02127838(char *dst, const char *src);
u32 STD_GetStringLength(const char *s);

char *func_ov065_022610f0(Unk_ov065_022868b0_InAddr a);
Unk_ov065_02286f04_Hostent *func_ov065_02261408(const char *name);
s32 func_ov065_0227866c(void *list, s32 i);
s32 func_ov065_02278684(void *list);
s32 func_ov065_02278bf4(const char *s);
s32 func_ov065_02278c14(s32 fd, Unk_ov065_02286c74_Sa *sa, s32 *len);
s32 func_ov065_02278cb8(s32 fd, void *buf, s32 n, s32 flags, Unk_ov065_02286c74_Sa *from, s32 *len);
s32 func_ov065_02278dbc(s32 fd);
s32 func_ov065_02278dd4(s32 a, s32 b, s32 c);
Unk_ov065_022871ac_List *func_ov065_02278e64();
s32 func_ov065_02278dfc(void *p);
s32 func_ov065_02278ee8(s32 fd);
u32 func_ov065_02279144();
s32 func_ov065_0228723c();
s32 func_ov065_02287200(s32 fd, u32 addr, u32 port, void *buf, s32 len);
s32 func_ov065_02287280(Unk_ov065_02286c74_Ctx *ctx);
s32 func_ov065_022872c8();
Unk_ov065_02286c74_Ctx *func_ov065_02287348(u32 cookie);

u32 func_ov065_022871ac();
u32 func_ov065_02287188(s32 fd);
void func_ov065_02287000(Unk_ov065_02286c74_Ctx *ctx);
void func_ov065_02286f34(Unk_ov065_02286c74_Ctx *ctx);
u32 func_ov065_02286f04(const char *name);
u32 func_ov065_02286ed8(const char *name, const char *s);
s32 func_ov065_02286e70();
void func_ov065_02286da0(u32 cookie);
void func_ov065_02286c74(Unk_ov065_02286c74_Ctx *ctx);
void func_ov065_02286bb4(Unk_ov065_02286c74_Ctx *ctx, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286b34(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286aa8(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286a0c(Unk_ov065_02286c74_Ctx *ctx, u8 *pkt, Unk_ov065_02286c74_Sa *sa);
void func_ov065_02286934(u8 *pkt, s32 len, Unk_ov065_02286c74_Sa *sa);
}


















}
}

namespace N022868b0 { extern "C" {
extern "C" char *func_ov065_022868b0(u32 ip, const char *port, char *buf) {
    Unk_ov065_022868b0_InAddr a;
    if (buf == NULL) {
        data_ov065_02291504 = data_ov065_02291504 ^ 1;
        buf = data_ov065_02291508 + data_ov065_02291504 * 0x16;
    }
    if (ip != 0) {
        a.addr = ip;
        if (port != NULL) {
            OS_SPrintf(buf, "%s:%d", func_ov065_022610f0(a), port);
        } else {
            OS_SPrintf(buf, "%s", func_ov065_022610f0(a));
        }
    } else if (port != NULL) {
        OS_SPrintf(buf, ":%d", port);
    } else {
        buf[0] = 0;
    }
    return buf;
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_022867c0(char *s, u32 *pip, u16 *pport) {
    char host[0x100];
    u32 ip;
    u32 port;
    char *colon;
    char *q;
    s32 c, r;
    if (s == 0 || *s == 0) {
        ip = 0;
        port = 0;
    } else {
        colon = func_0212a120(s, ':');
        port = (u32)colon;
        if (colon == 0) {
            port = 0;
        } else {
            if (colon == s) {
                s = 0;
                ip = 0;
            } else {
                s32 n = colon - s;
                memcpy(host, s, n);
                host[n] = 0;
                s = host;
            }
            q = colon + 1;
            c = *q;
            if (c != 0) {
                do {
                    if (c < 0 || c >= 0x80) {
                        c = 0;
                    } else {
                        c = data_0213a510[c] & 8;
                    }
                    if (c == 0) {
                        return FALSE;
                    }
                    q++;
                    c = *q;
                } while (c != 0);
            }
            r = func_0212b770(colon + 1);
            if (r < 0 || r > 0xffff) {
                return FALSE;
            }
            port = (u16)r;
        }
        if (s != 0) {
            ip = func_ov065_02278bf4(s);
            if (ip == -1) {
                Unk_ov065_022867c0_Host *h = func_ov065_02261408(s);
                if (h == 0) {
                    return FALSE;
                }
                ip = **h->unk_0c;
            }
        }
    }
    if (pip != 0) {
        *pip = ip;
    }
    if (pport != 0) {
        *pport = port;
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_02286788(char **s, s32 *len) {
    char *p = *s;
    if (p == 0) {
        *s = "";
        *len = 0;
    } else if (*len == -1) {
        *len = STD_GetStringLength(p) + 1;
    }
}
} }

namespace N02285f3c { extern "C" {
u32 func_ov065_02286770(Peer062 **pp, u32 n) {
    Peer062 *p = *pp;
    return (p->unk_00 * p->unk_04) % n;
}
} }

namespace N02285f3c { extern "C" {
s32 func_ov065_02286754(Peer062 **a, Peer062 **b) {
    Peer062 *x = *a;
    Peer062 *y = *b;
    if (x->unk_00 != y->unk_00) {
        return x->unk_00 - y->unk_00;
    }
    return (s16)(x->unk_04 - y->unk_04);
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_02286748(Peer062 **p) {
    func_ov065_022845f4(*p);
}
} }

namespace N02285f3c { extern "C" {
Peer062 *func_ov065_0228671c(Conn062 *c, u32 ip, u16 port) {
    Peer062 *key;
    Peer062 tmp;
    Peer062 **e;
    tmp.unk_00 = ip;
    tmp.unk_04 = port;
    key = &tmp;
    e = (Peer062 **)func_ov065_022787c4(c->unk_0c, &key);
    if (e != 0) {
        return *e;
    }
    return 0;
}
} }

namespace N02285f3c { extern "C" {
s32 func_ov065_0228659c(Conn062 **out, char *addr, u32 rsz, u32 ssz, s32 arg) {
    struct {
        u16 port;
        Sa062 sa;
        s32 ip;
        s32 len;
    } l;
    Conn062 *c;
    u32 *w;
    func_ov065_02279138();
    if (ssz == 0) {
        ssz = 0x10000;
    }
    if (rsz == 0) {
        rsz = 0x10000;
    }
    if (func_ov065_022867c0(addr, (u32 *)&l.ip, &l.port) == 0) {
        return 4;
    }
    c = (Conn062 *)func_ov065_02277af0(0x44);
    if (c == 0) {
        return 1;
    }
    func_0212899c(c, 0, 0x44);
    c->unk_00 = -1;
    c->unk_3c = ssz;
    c->unk_38 = rsz;
    c->unk_24 = arg;
    c->unk_0c = func_ov065_02278928(4, 0x20, 2, func_ov065_02286770, func_ov065_02286754, 0);
    if (c->unk_0c == 0) {
        func_ov065_02277ac8(c);
        return 1;
    }
    c->unk_10 = func_ov065_022786bc(4, 4, (void *)func_ov065_02286748);
    if (c->unk_10 == 0) {
        func_ov065_022788f0(c->unk_0c);
        func_ov065_02277ac8(c);
        return 1;
    }
    c->unk_00 = func_ov065_02278dd4(2, 2, 0);
    if (c->unk_00 == -1) {
        func_ov065_022788f0(c->unk_0c);
        func_ov065_02278688(c->unk_10);
        func_ov065_02277ac8(c);
        return 3;
    }
    w = (u32 *)&l.sa;
    w[0] = 0;
    w[1] = 0;
    l.sa.unk_1 = 2;
    l.sa.unk_4 = l.ip;
    {
        u16 t = l.port;
        l.sa.unk_2 = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    if (func_ov065_02278d64(c->unk_00, (Sa062 *)w, 8) == -1) {
        func_ov065_02278dbc(c->unk_00);
        func_ov065_022788f0(c->unk_0c);
        func_ov065_02278688(c->unk_10);
        func_ov065_02277ac8(c);
        return 3;
    }
    l.len = 8;
    func_ov065_02278c14(c->unk_00, &l.sa, &l.len);
    c->unk_04 = l.sa.unk_4;
    {
        u16 t = l.sa.unk_2;
        c->unk_08 = ((t >> 8) & 0xff) | ((t << 8) & 0xff00);
    }
    *out = c;
    return 0;
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_02286564(Conn062 *c) {
    if (c->unk_1c != 0) {
        c->unk_14 = 1;
        return;
    }
    func_ov065_02278dbc(c->unk_00);
    func_ov065_022788f0(c->unk_0c);
    func_ov065_02278688(c->unk_10);
    func_ov065_02277ac8(c);
    func_ov065_02279134();
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_02286560(Conn062 *c, s32 v) {
    c->unk_20 = v;
}
} }

namespace N02285f3c { extern "C" {
void *func_ov065_02286554() {
    return func_ov065_02277af0(0xa0);
}
} }

namespace N02285f3c { extern "C" {
s32 func_ov065_022863f8(Conn062 *c, Peer062 **out, u32 ip, u16 port) {
    Peer062 *p = NULL;
    if (func_ov065_0228671c(c, ip, port) != 0) {
        return 5;
    }
    p = (Peer062 *)func_ov065_02286554();
    if (p != 0) {
        func_0212899c(p, 0, 0xa0);
        p->unk_00 = ip;
        p->unk_04 = port;
        p->unk_08 = c;
        p->unk_1c = func_ov065_02279144();
        p->unk_88 = p->unk_1c;
        p->unk_64 = 0;
        p->unk_66 = 0;
        if (func_ov065_02284100(&p->unk_44, c->unk_3c) != 0 && func_ov065_02284100(&p->unk_50, c->unk_38) != 0) {
            p->unk_5c = func_ov065_022786bc(0x10, 0x40, 0);
            if (p->unk_5c != 0) {
                p->unk_60 = func_ov065_022786bc(0x10, 0x40, 0);
                if (p->unk_60 != 0) {
                    p->unk_98 = func_ov065_022786bc(4, 2, 0);
                    if (p->unk_98 != 0) {
                        p->unk_9c = func_ov065_022786bc(4, 2, 0);
                        if (p->unk_9c != 0) {
                            func_ov065_0227885c(c->unk_0c, &p);
                            *out = func_ov065_0228671c(c, ip, port);
                            if (*out != 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (p != 0) {
        func_ov065_02277ac8(p->unk_44);
        func_ov065_02277ac8(p->unk_50);
        if (p->unk_5c != 0) {
            func_ov065_02278688(p->unk_5c);
        }
        if (p->unk_60 != 0) {
            func_ov065_02278688(p->unk_60);
        }
        if (p->unk_98 != 0) {
            func_ov065_02278688(p->unk_98);
        }
        if (p->unk_9c != 0) {
            func_ov065_02278688(p->unk_9c);
        }
        func_ov065_02277ac8(p);
    }
    return 1;
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_0228638c(Peer062 *p) {
    if (p->unk_14 == 0 && p->unk_24 == 0) {
        if (p->unk_0c == 7) {
            s32 n = func_ov065_02278684(*(void **)((u8 *)p->unk_08 + 0x10));
            s32 i = 0;
            for (; i < n; i++) {
                Peer062 *q = p;
                if (q == *(Peer062 **)func_ov065_0227866c(q->unk_08->unk_10, i)) {
                    func_ov065_02278570(q->unk_08->unk_10, i);
                    return;
                }
            }
        } else {
            func_ov065_02278810(p->unk_08->unk_0c, &p);
        }
    }
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_0228627c(Conn062 *c, u32 ip, u16 port, char *buf, s32 len) {
    Sa062 sa;
    u32 *w;
    s32 r;
    func_ov065_02286788(&buf, &len);
    if (func_ov065_02278ec4(c->unk_00) == 0) {
        return TRUE;
    }
    w = (u32 *)&sa;
    w[0] = 0;
    w[1] = 0;
    sa.unk_1 = 2;
    sa.unk_4 = ip;
    sa.unk_2 = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    r = func_ov065_02278c64(c->unk_00, buf, len, 0, (Sa062 *)w, 8);
    if (r == -1) {
        r = func_ov065_02278be8(c->unk_00);
        if (r == -15) {
            if (func_ov065_02285398(c, ip, port) == 0) {
                return FALSE;
            }
        } else if (r == -42 || r == -6) {
            return TRUE;
        } else if (r != -35) {
            func_ov065_022861b0(c);
            return FALSE;
        }
    } else if (c->unk_28 != 0) {
        Peer062 *p = func_ov065_0228671c(c, ip, port);
        if (func_ov065_022841a4(c, p, ip, port, 0, buf, len, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_0228623c(Peer062 **pp, u32 *pnow) {
    Peer062 *p = *pp;
    u32 now = *pnow;
    if (p->unk_0c != 7) {
        if (func_ov065_022846c4(p, now) == 0) {
            return FALSE;
        }
    }
    if (p->unk_0c == 7 && p->unk_14 == 0 && p->unk_24 == 0) {
        func_ov065_0228638c(p);
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_02286208(Conn062 *c) {
    u32 now = func_ov065_02279144();
    if (func_ov065_02278758(c->unk_0c, func_ov065_0228623c, &now) == 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_022861d8(Conn062 *c) {
    s32 i = func_ov065_02278684(c->unk_10) - 1;
    for (; i >= 0; i--) {
        func_ov065_0228638c(*(Peer062 **)func_ov065_0227866c(c->unk_10, i));
    }
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_022861b0(Conn062 *c) {
    if (c->unk_18 == 0) {
        c->unk_18 = 1;
        func_ov065_022849f8(c);
        if (func_ov065_022845a4(c) != 0) {
            func_ov065_02286564(c);
        }
    }
}
} }

namespace N02285f3c { extern "C" {
u32 func_ov065_02286194(u8 *buf, s32 off) {
    u16 t = (buf[off] << 8) & 0xff00;
    return t | buf[off + 1];
}
} }

namespace N02285f3c { extern "C" {
void func_ov065_02286188(u8 *buf, s32 off, s32 v) {
    buf[off] = v >> 8;
    buf[off + 1] = v;
}
} }

namespace N02285f3c { extern "C" {
s16 func_ov065_02286180(u32 a, u32 b) {
    return a - b;
}
} }

namespace N02285f3c { extern "C" {
s32 func_ov065_0228611c(Peer062 *p, s32 a, s32 b) {
    s32 st = p->unk_0c;
    if (st < 5) {
        if (p->unk_10 != 0) {
            func_ov065_02284654(p);
            if (func_ov065_02284498(p, a, 0, 0) == 0) {
                return FALSE;
            }
        } else {
            if (st == 4) {
                p->unk_14 = 1;
            }
            func_ov065_02284654(p);
        }
    } else if (st != 7) {
        func_ov065_02284654(p);
        if (func_ov065_022843c0(p, b) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
s32 func_ov065_02286110(Peer062 *p) {
    return func_ov065_0228611c(p, 7, 2);
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_022860ec(Peer062 *p) {
    if (func_ov065_02284ca4(p) != 0) {
        return func_ov065_0228611c(p, 1, 4);
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_02286034(Peer062 *p, u32 ack) {
    s32 n, i, base;
    n = func_ov065_02278684(p->unk_60);
    if (n == 0) {
        return TRUE;
    }
    for (i = 0; i < n; i++) {
        Unk_ov065_02286034_Ent *e = (Unk_ov065_02286034_Ent *)func_ov065_0227866c(p->unk_60, i);
        if (func_ov065_02286180(e->unk_08, ack) >= 0) {
            break;
        }
    }
    if (i == 0) {
        return TRUE;
    }
    while (i-- != 0) {
        func_ov065_02278570(p->unk_60, i);
    }
    n = func_ov065_02278684(p->unk_60);
    if (n == 0) {
        p->unk_58 = 0;
        return TRUE;
    }
    base = ((Unk_ov065_02286034_Ent *)func_ov065_0227866c(p->unk_60, 0))->unk_00;
    for (i = 0; i < n; i++) {
        Unk_ov065_02286034_Ent *e = (Unk_ov065_02286034_Ent *)func_ov065_0227866c(p->unk_60, i);
        e->unk_00 = e->unk_00 - base;
    }
    func_ov065_0228405c(&p->unk_50, 0, base);
    return TRUE;
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_02285fbc(Peer062 *p, s32 x, s32 y) {
    if (p->unk_0c != 5 && p->unk_0c != 6) {
        return TRUE;
    }
    if (func_ov065_02278684(p->unk_9c) != 0) {
        if (func_ov065_02284240(p, 0, x, y, 0) != 0) {
            return TRUE;
        }
        return FALSE;
    }
    if (func_ov065_02284420(p, x, y, 0) != 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02285f3c { extern "C" {
BOOL func_ov065_02285f3c(Peer062 *p, s32 x, s32 y) {
    if (p->unk_0c != 5 && p->unk_0c != 6) {
        if (func_ov065_02286110(p) == 0) {
            return FALSE;
        }
    } else {
        if (func_ov065_02278684(p->unk_9c) != 0) {
            if (func_ov065_02284240(p, 0, x, y, 1) != 0) {
                return TRUE;
            }
            return FALSE;
        }
        if (func_ov065_02284420(p, x, y, 1) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285eb8(Cn *c, void *p, s32 n)
{
    u8 a[0x20];
    u8 b[0x20];
    if (c->unk_0c != 2) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    func_ov065_02283e88(a, p);
    func_ov065_02283f34(b);
    func_ov065_02283e88(c->unk_68, b);
    if (func_ov065_0228503c(c, a, b) == 0) return FALSE;
    c->unk_0c = 3;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285e04(Cn *c, void *p, s32 n)
{
    u8 buf[0x20];
    if (c->unk_0c != 0) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x40) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02283e5c(p, c->unk_68) == 0) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    func_ov065_02283e88(buf, (u8 *)p + 0x20);
    if (func_ov065_02284fd0(c, buf, c->unk_38, c->unk_3c) == 0) return FALSE;
    if (c->unk_38 != 0) {
        func_ov065_02277ac8(c->unk_38);
        c->unk_38 = 0;
    }
    c->unk_0c = 1;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285d20(Cn *c, void *p, s32 n)
{
    if (c->unk_0c != 3) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (n < 0x20) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02283e5c(p, c->unk_68) == 0) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (c->unk_08->unk_20 == 0) {
        if (func_ov065_02284ca4(c) == 0) return FALSE;
        func_ov065_02284654(c);
        return TRUE;
    }
    c->unk_0c = 4;
    if (func_ov065_02284514(c->unk_08, c, c->unk_00, c->unk_04, func_ov065_02279144() - c->unk_8c, (u8 *)p + 0x20, n - 0x20) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285cdc(Cn *c)
{
    if (c->unk_0c != 1) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    c->unk_0c = 5;
    if (func_ov065_02284498(c, 0, 0, 0) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285c80(Cn *c, void *p, s32 n)
{
    if (c->unk_0c != 1) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    func_ov065_02284654(c);
    if (func_ov065_02284ca4(c) == 0) return FALSE;
    if (func_ov065_02284498(c, 2, p, n) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285c44(Cn *c)
{
    if (func_ov065_02284ca4(c) == 0) return FALSE;
    s32 f;
    switch (c->unk_0c) { case 6: f = 0; break; default: f = 1; break; }
    if (func_ov065_0228611c(c, 2, f) == 0) return FALSE;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285b78(Cn *c, s32 mode, void *p, s32 n)
{
    c->unk_66 = c->unk_66 + 1;
    if (mode == 0) {
        if (func_ov065_02285f3c(c, p, n) == 0) return FALSE;
    } else if (mode == 1) {
        if (func_ov065_02285eb8(c, p, n) == 0) return FALSE;
    } else if (mode == 2) {
        if (func_ov065_02285e04(c, p, n) == 0) return FALSE;
    } else if (mode == 3) {
        if (func_ov065_02285d20(c, p, n) == 0) return FALSE;
    } else if (mode == 4) {
        if (func_ov065_02285cdc(c) == 0) return FALSE;
    } else if (mode == 5) {
        if (func_ov065_02285c80(c, p, n) == 0) return FALSE;
    } else if (mode == 6) {
        if (func_ov065_02285c44(c) == 0) return FALSE;
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
s32 func_ov065_02285b6c(It *a, It *b)
{
    return func_ov065_02286180(a->unk_0c, b->unk_0c);
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285a44(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out)
{
    s32 cnt = func_ov065_02278684(c->unk_5c);
    s32 i;
    It rec;
    for (i = 0; i < cnt; i++) {
        It *q = (It *)func_ov065_0227866c(c->unk_5c, i);
        if (q->unk_0c == seq) {
            *out = 0;
            return TRUE;
        }
        if (func_ov065_02286180(q->unk_0c, seq) > 0) break;
    }
    if (func_ov065_022840f8(&c->unk_44) < n) {
        *out = 1;
        return TRUE;
    }
    rec.unk_00 = c->unk_4c;
    rec.unk_04 = n;
    rec.unk_08 = a;
    rec.unk_0c = seq;
    func_ov065_022785c8(c->unk_5c, &rec, (void *)func_ov065_02285b6c);
    if (cnt + 1 != func_ov065_02278684(c->unk_5c)) {
        *out = 1;
        return TRUE;
    }
    func_ov065_02284090(&c->unk_44, p, n);
    if (cnt == 0) {
        if (func_ov065_02284d34(c, c->unk_66, seq - 1) == 0) return FALSE;
    } else {
        It *q = (It *)func_ov065_0227866c(c->unk_5c, cnt);
        if (q->unk_0c == seq) {
            It *r = (It *)func_ov065_0227866c(c->unk_5c, cnt - 1);
            if ((u16)func_ov065_02286180(seq, r->unk_0c) > 1) {
                if (func_ov065_02284d34(c, r->unk_0c + 1, seq - 1) == 0) return FALSE;
            }
        }
    }
    *out = 0;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
void func_ov065_022859e4(Cn *c, It *e, s32 idx)
{
    s32 mx = 0;
    s32 start = e->unk_00;
    s32 len = e->unk_04;
    s32 n;
    s32 i;
    func_ov065_02278570(c->unk_5c, idx);
    n = func_ov065_02278684(c->unk_5c);
    for (i = 0; i < n; i++) {
        It *q = (It *)func_ov065_0227866c(c->unk_5c, i);
        if (q->unk_00 > start) {
            q->unk_00 = q->unk_00 - len;
            {
                s32 t = q->unk_00 + q->unk_04;
                if (mx <= t) mx = t;
            }
        }
    }
    func_ov065_0228405c(&c->unk_44, start, len);
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285988(Cn *c)
{
    s32 i;
    It *e;
again:
    i = func_ov065_02278684(c->unk_5c) - 1;
    while (i >= 0) {
        e = (It *)func_ov065_0227866c(c->unk_5c, i);
        if (e->unk_0c == c->unk_66) {
            if (func_ov065_02285b78(c, e->unk_08, c->unk_44.unk_00 + e->unk_00, e->unk_04) == 0) return FALSE;
            func_ov065_022859e4(c, e, i);
            goto again;
        }
        i--;
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
void func_ov065_02285964(Cn *c)
{
    if (c->unk_90 == 0) {
        c->unk_90 = 1;
        c->unk_94 = func_ov065_02279144();
    }
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285868(Cn *c, s32 a, void *p, s32 n)
{
    u32 v;
    if (n < 7) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    v = func_ov065_02286194(p, 3);
    if (func_ov065_02286034(c, func_ov065_02286194(p, 5)) == 0) return FALSE;
    if (v == c->unk_66) {
        func_ov065_02285964(c);
        if (func_ov065_02285b78(c, a, (u8 *)p + 7, n - 7) == 0) return FALSE;
        if (func_ov065_02285988(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02286180(v, c->unk_66) < 0) {
        func_ov065_02285964(c);
        return TRUE;
    }
    {
        s32 flag;
        if (func_ov065_02285a44(c, a, v, (u8 *)p + 7, n - 7, &flag) == 0) return FALSE;
        if (flag != 0) {
            if (func_ov065_022860ec(c) == 0) return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285824(Cn *c, void *p, s32 n)
{
    if (n != 2) {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    if (func_ov065_02286034(c, func_ov065_02286194(p, 0)) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL func_ov065_02285780(Cn *c, void *p, s32 n)
{
    s32 lo = func_ov065_02286194(p, 0);
    s32 hi;
    s32 cnt;
    s32 i;
    if (n == 2) {
        hi = lo;
    } else if (n == 4) {
        hi = func_ov065_02286194(p, 2);
    } else {
        if (func_ov065_02286110(c) != 0) return TRUE;
        return FALSE;
    }
    cnt = func_ov065_02278684(c->unk_60);
    for (i = 0; i < cnt; i++) {
        Unk_ov065_02285630_Item8 *e = (Unk_ov065_02285630_Item8 *)func_ov065_0227866c(c->unk_60, i);
        if (func_ov065_02286180(e->unk_08, lo) >= 0 && func_ov065_02286180(e->unk_08, hi) <= 0) {
            if (func_ov065_02284c0c(c, e) == 0) return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
s32 func_ov065_02285778(Cn *c, void *p, s32 n)
{
    return func_ov065_02284cb4(c, p, n);
}
} }
