// mwcc-flags: -O4,p
#include "types.h"

// ov065_065: GameSpy query-and-report (qr2-like) module: response buffer, key lists, base64 / RC4 helpers, heartbeat (0x02287b18..0x02288380)

struct Unk_ov065_02288094_Buf {
    u8 unk_000[0x800];
    s32 unk_800;
};

struct Unk_ov065_022880fc_Keys {
    u8 unk_00[0x100];
    s32 unk_100;
};

struct Unk_ov065_02287d04_Four {
    u8 b[4];
};

struct Unk_ov065_02287df8_Hdr {
    u8 unk_00;
    Unk_ov065_02287d04_Four unk_01;
};

struct Unk_ov065_02287b54_Two {
    u8 b[2];
};

struct Unk_ov065_02287fcc_Sa {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

struct Unk_ov065_02287fcc_Host {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 **unk_0c;
};

struct Unk_ov065_0228804c_List {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 **unk_0c;
};

struct Unk_ov065_02288124_Qr;

typedef void (*Unk_ov065_02288124_KeyCb)(u32, Unk_ov065_02288094_Buf *, void *);
typedef void (*Unk_ov065_02288124_IdxCb)(u32, s32, Unk_ov065_02288094_Buf *, void *);
typedef void (*Unk_ov065_02288124_ListCb)(s32, Unk_ov065_022880fc_Keys *, void *);
typedef s32 (*Unk_ov065_02288124_CountCb)(s32, void *);
typedef void (*Unk_ov065_02288124_ErrCb)(s32, const char *, void *);
typedef void (*Unk_ov065_02288124_AddrCb)(u32, u32, void *);

struct Unk_ov065_02288124_Qr {
    s32 unk_00;
    char unk_04[0x40];
    char unk_44[0x40];
    u8 unk_84[4];
    Unk_ov065_02288124_KeyCb unk_88;
    Unk_ov065_02288124_IdxCb unk_8c;
    Unk_ov065_02288124_IdxCb unk_90;
    Unk_ov065_02288124_ListCb unk_94;
    Unk_ov065_02288124_CountCb unk_98;
    Unk_ov065_02288124_ErrCb unk_9c;
    s32 unk_a0;
    s32 unk_a4;
    Unk_ov065_02288124_AddrCb unk_a8;
    u32 unk_ac;
    u32 unk_b0;
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    Unk_ov065_02287fcc_Sa unk_cc;
    s32 unk_d4;
    s32 unk_d8[10];
    s32 unk_100;
    u32 unk_104;
    u16 unk_108;
    void *unk_10c;
};

extern "C" {
extern const char *data_ov065_0228e504[];
extern const char data_ov065_0228e340[];
extern const char data_ov065_0228e348[];
extern const char data_ov065_0228e354[];
extern const char data_ov065_0228e360[];
extern const char data_ov065_0228e370[];
extern const char data_ov065_0228e374[];
extern const char data_ov065_0228e3ac[];
extern Unk_ov065_02288124_Qr *data_ov065_0228e1b4;
extern Unk_ov065_02288124_Qr data_ov065_0228e1c0;
extern volatile s32 data_ov065_02291748;
extern Unk_ov065_02287d04_Four data_ov065_0229174c[];
extern char data_ov065_02291760[];
extern u8 data_ov065_022917a0[];

s32 func_02133150(s32, s32);
u32 func_021277d4(const char *);
void func_02127838(char *, const char *);
s32 func_02128ca4(const char *, const char *, ...);
void func_02128a00(void *, const void *, s32);
s32 func_021130d0(char *, const char *, ...);
s32 func_0212a190(const char *, const char *);
void func_02128c60(u32);
s32 func_02128c70();

void *func_ov065_02277af0(s32);
void func_ov065_02277ac8(void *);
Unk_ov065_0228804c_List *func_ov065_02278e64();
s32 func_ov065_02278bf4(const char *);
s32 func_ov065_02278cb8(s32, void *, s32, s32, Unk_ov065_02287fcc_Sa *, s32 *);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_02278ee8(s32);
s32 func_ov065_02279134();
u32 func_ov065_02279144();
Unk_ov065_02287fcc_Host *func_ov065_02261408(const char *);
void func_ov065_02287390(Unk_ov065_02288124_Qr *, s32);
void func_ov065_02287534(Unk_ov065_02288124_Qr *);
s32 func_ov065_0228758c(Unk_ov065_02288124_Qr *, u8 *, s32, Unk_ov065_02287fcc_Sa *);

void func_ov065_02287b18(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 c0, u8 *l0, s32 c1, u8 *l1, s32 c2, u8 *l2);
void func_ov065_02287b54(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 type, s32 count, u8 *list);
void func_ov065_02287d04(Unk_ov065_02288124_Qr *q, const char *s);
void func_ov065_02287d90(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, const char *s, s32 n);
void func_ov065_02287df8(Unk_ov065_02288094_Buf *b, s32 c, u8 *ip);
void func_ov065_02287e18(u8 *key, s32 keylen, u8 *data, s32 datalen);
void func_ov065_02287ef0(u8 *in, s32 len, u8 *out);
u8 func_ov065_02287f88(u8 c);
void func_ov065_02287fc0(u8 *a, u8 *b);
s32 func_ov065_02287fcc(const char *name, u32 port, Unk_ov065_02287fcc_Sa *sa, Unk_ov065_02287fcc_Host **hp);
void func_ov065_0228804c();
void func_ov065_02288094(Unk_ov065_02288094_Buf *b, const char *s);
void func_ov065_022880d8(Unk_ov065_02288094_Buf *b, s32 v);
void func_ov065_022880fc(Unk_ov065_022880fc_Keys *k, s32 c);
void func_ov065_02288124(Unk_ov065_02288124_Qr *q);
void func_ov065_02288190(Unk_ov065_02288124_Qr *q);
void func_ov065_022881e0(Unk_ov065_02288124_Qr *q);
void func_ov065_022882b8(Unk_ov065_02288124_Qr *q);
void func_ov065_02288318(Unk_ov065_02288124_Qr *q);
void func_ov065_02288344(Unk_ov065_02288124_Qr *q, Unk_ov065_02288124_AddrCb cb);
void func_ov065_02288358(Unk_ov065_02288124_Qr *q, s32 v);
void func_ov065_0228836c(Unk_ov065_02288124_Qr *q, s32 v);
s32 func_ov065_02288380(Unk_ov065_02288124_Qr **out, s32 fd, s32 a2, const char *name, const char *secret, s32 a5, s32 a6, Unk_ov065_02288124_KeyCb cb88,
                        Unk_ov065_02288124_IdxCb cb8c, Unk_ov065_02288124_IdxCb cb90, Unk_ov065_02288124_ListCb cb94, Unk_ov065_02288124_CountCb cb98,
                        Unk_ov065_02288124_ErrCb cb9c, void *ud);

void func_ov065_02287b18(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 c0, u8 *l0, s32 c1, u8 *l1, s32 c2, u8 *l2) {
    func_ov065_02287b54(q, b, 0, c0, l0);
    func_ov065_02287b54(q, b, 1, c1, l1);
    func_ov065_02287b54(q, b, 2, c2, l2);
}

void func_ov065_02287b54(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, s32 type, s32 count, u8 *list) {
    Unk_ov065_022880fc_Keys kb;
    s32 n;
    s32 i;
    s32 j;
    kb.unk_100 = 0;
    if (count == 0) {
        return;
    }
    if ((u32)(type - 1) <= 1) {
        u16 t;
        s32 v;
        u32 avail = 0x800 - b->unk_800;
        if (avail < 2) {
            return;
        }
        n = q->unk_98(type, q->unk_10c);
        v = (u16)n;
        t = (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
        u8 *d = b->unk_000 + b->unk_800;
        u8 *sp = (u8 *)&t;
        d[0] = sp[0];
        d[1] = sp[1];
        b->unk_800 += 2;
    } else {
        n = 1;
    }
    if (count == 0xff) {
        q->unk_94(type, &kb, q->unk_10c);
        for (j = 0; j < kb.unk_100; j++) {
            const char *s = data_ov065_0228e504[kb.unk_00[j]];
            if (s == NULL) {
                s = data_ov065_0228e340;
            }
            func_ov065_02288094(b, s);
            if (type == 0) {
                s32 sv = b->unk_800;
                q->unk_88(kb.unk_00[j], b, q->unk_10c);
                if (sv == b->unk_800) {
                    func_ov065_02288094(b, data_ov065_0228e348);
                }
            }
        }
        if (0x800 - b->unk_800 < 1) {
            return;
        }
        b->unk_000[b->unk_800++] = 0;
        count = kb.unk_100;
        list = kb.unk_00;
        if (type == 0) {
            return;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            s32 save = b->unk_800;
            if (type == 0) {
                q->unk_88(list[j], b, q->unk_10c);
            } else if (type == 1) {
                q->unk_8c(list[j], i, b, q->unk_10c);
            } else if (type == 2) {
                q->unk_90(list[j], i, b, q->unk_10c);
            }
            if (save == b->unk_800) {
                func_ov065_02288094(b, data_ov065_0228e348);
            }
        }
    }
}

void func_ov065_02287d04(Unk_ov065_02288124_Qr *q, const char *s) {
    u32 ip;
    u32 port;
    u32 pt;
    func_02128ca4(s, data_ov065_0228e354, &ip, &port);
    pt = (u16)port;
    ip = ((ip << 24) & 0xff000000) | (((ip << 8) & 0xff0000) | (((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00)));
    if (ip != 0 && pt != 0) {
        if (q->unk_104 != ip || q->unk_108 != pt) {
            q->unk_104 = ip;
            q->unk_108 = pt;
            q->unk_a8(ip, pt, q->unk_10c);
        }
    }
}

void func_ov065_02287d90(Unk_ov065_02288124_Qr *q, Unk_ov065_02288094_Buf *b, const char *s, s32 n) {
    char tmp[0x44];
    if (n >= 1 && n <= 0x41 && s[n - 1] == 0) {
        func_02127838(tmp, s);
        func_ov065_02287e18((u8 *)q->unk_44, func_021277d4(q->unk_44), (u8 *)tmp, n - 1);
        func_ov065_02287ef0((u8 *)tmp, n - 1, (u8 *)b + b->unk_800);
        b->unk_800 += func_021277d4((char *)b + b->unk_800) + 1;
    }
}

void func_ov065_02287df8(Unk_ov065_02288094_Buf *b, s32 c, u8 *ip) {
    u8 *d;
    b->unk_000[0] = c;
    d = b->unk_000 + 1;
    d[-1 + 1] = ip[0];
    d[1] = ip[1];
    d[2] = ip[2];
    d[3] = ip[3];
    b->unk_800 = 5;
}

void func_ov065_02287e18(u8 *key, s32 keylen, u8 *data, s32 datalen) {
    u8 state[0x100];
    s16 i;
    s16 k;
    u8 x;
    u8 j;
    u8 *volatile p;
    u8 *q;
    for (i = 0; i < 0x100; i++) {
        state[i] = i;
    }
    x = 0;
    j = 0;
    i = 0;
    q = state;
    p = q;
    for (; i < 0x100; i++) {
        j = (*q + key[x] + j) % 0x100;
        x = (x + 1) % keylen;
        func_ov065_02287fc0(q, p + j);
        q++;
    }
    {
        u8 a = 0;
        u8 c = 0;
        for (k = 0; k < datalen; k++) {
            u8 *pa;
            a = (a + data[k] + 1) % 0x100;
            pa = &state[a];
            c = (state[a] + c) % 0x100;
            func_ov065_02287fc0(pa, &state[c]);
            data[k] ^= state[(u8)((state[a] + state[c]) % 0x100)];
        }
    }
}

void func_ov065_02287ef0(u8 *in, s32 len, u8 *out) {
    u8 t[7];
    s32 k;
    u8 *tp;
    s32 n = 0;
    if (len > 0) {
        do {
            for (k = 0, tp = t; k <= 2; tp++, k++, n++) {
                if (n < len) {
                    *tp = *in++;
                } else {
                    *tp = 0;
                }
            }
            {
                s32 a = t[0];
                s32 b;
                s32 c;
                t[3] = a >> 2;
                b = t[1];
                t[4] = ((a & 3) << 4) + (b >> 4);
                c = t[2];
                t[5] = ((b & 0xf) << 2) + (c >> 6);
                t[6] = c & 0x3f;
            }
            for (k = 0, tp = &t[3]; k <= 3; out++, tp++, k++) {
                *out = func_ov065_02287f88(*tp);
            }
        } while (n < len);
    }
    *out = 0;
}

u8 func_ov065_02287f88(u8 c) {
    if (c < 0x1a) {
        return c + 0x41;
    }
    if (c < 0x34) {
        return c + 0x47;
    }
    if (c < 0x3e) {
        return c - 4;
    }
    if (c == 0x3e) {
        return 0x2b;
    }
    if (c == 0x3f) {
        return 0x2f;
    }
    return 0;
}

void func_ov065_02287fc0(u8 *a, u8 *b) {
    u8 t = *a;
    *a = *b;
    *b = t;
}

s32 func_ov065_02287fcc(const char *name, u32 port, Unk_ov065_02287fcc_Sa *sa, Unk_ov065_02287fcc_Host **hp) {
    Unk_ov065_02287fcc_Host *h = NULL;
    s32 v;
    sa->unk_01 = 2;
    v = (u16)port;
    sa->unk_02 = (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
    if (name == NULL) {
        sa->unk_04 = 0;
    } else {
        sa->unk_04 = func_ov065_02278bf4(name);
    }
    if (sa->unk_04 == (u32)-1) {
        if (func_0212a190(name, data_ov065_0228e360) != 0) {
            h = func_ov065_02261408(name);
            if (h == NULL) {
                return 0;
            }
            sa->unk_04 = **h->unk_0c;
        }
    }
    if (hp != NULL) {
        *hp = h;
    }
    return 1;
}

void func_ov065_0228804c() {
    Unk_ov065_0228804c_List *l = func_ov065_02278e64();
    if (l != NULL) {
        data_ov065_02291748 = 0;
        s32 t;
        do {
            s32 i = data_ov065_02291748;
            u8 *e = l->unk_0c[i];
            if (e == NULL) {
                break;
            }
            data_ov065_0229174c[i] = *(Unk_ov065_02287d04_Four *)e;
            t = data_ov065_02291748 + 1;
            data_ov065_02291748 = t;
        } while (t < 5);
    }
}

void func_ov065_02288094(Unk_ov065_02288094_Buf *b, const char *s) {
    s32 n = func_021277d4(s) + 1;
    s32 len = b->unk_800;
    s32 avail = 0x800 - len;
    if (n > avail) {
        n = avail;
    }
    if (n != 0) {
        func_02128a00(&b->unk_000[len], s, n);
        b->unk_800 += n;
        b->unk_000[b->unk_800 - 1] = 0;
    }
}

void func_ov065_022880d8(Unk_ov065_02288094_Buf *b, s32 v) {
    char t[0x18];
    func_021130d0(t, data_ov065_0228e370, v);
    func_ov065_02288094(b, t);
}

void func_ov065_022880fc(Unk_ov065_022880fc_Keys *k, s32 c) {
    s32 n = k->unk_100;
    if (n < 0xfe && c >= 1 && c <= 0xfe) {
        k->unk_100 = n + 1;
        k->unk_00[n] = c;
    }
}

void func_ov065_02288124(Unk_ov065_02288124_Qr *q) {
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    if (q->unk_bc != 0) {
        func_ov065_02287390(q, 2);
    }
    if (q->unk_00 != -1 && q->unk_c4 != 0) {
        func_ov065_02278dbc(q->unk_00);
    }
    q->unk_00 = -1;
    q->unk_ac = 0;
    if (q->unk_c4 != 0) {
        func_ov065_02279134();
    }
    if (q != &data_ov065_0228e1c0) {
        func_ov065_02277ac8(q);
    }
}

void func_ov065_02288190(Unk_ov065_02288124_Qr *q) {
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    if (q->unk_bc != 0) {
        u32 d = func_ov065_02279144() - q->unk_ac;
        if (d < 0x2710) {
            q->unk_b4 = 1;
            return;
        }
        func_ov065_02287390(q, 1);
        q->unk_b4 = 0;
    }
}

void func_ov065_022881e0(Unk_ov065_02288124_Qr *q) {
    u32 now = func_ov065_02279144();
    if (q->unk_00 != -1) {
        s32 r = q->unk_b8;
        if (r > 0 && now - q->unk_ac > 0x2710) {
            if (r >= 4) {
                q->unk_b8 = 0;
                q->unk_9c(5, data_ov065_0228e374, q->unk_10c);
                return;
            }
            func_ov065_02287390(q, 3);
            q->unk_b8 = q->unk_b8 + 1;
        } else if (q->unk_b4 != 0 && now - q->unk_ac > 0x2710) {
            func_ov065_02287390(q, 1);
        } else {
            u32 a = q->unk_ac;
            if (now - a > 0xea60 || a == 0 || now < a) {
                func_ov065_02287390(q, 0);
            }
        }
        if (now - q->unk_b0 > 0x4e20) {
            func_ov065_02287534(q);
        }
    }
}

void func_ov065_022882b8(Unk_ov065_02288124_Qr *q) {
    struct {
        Unk_ov065_02287fcc_Sa sa;
        s32 len;
    } l;
    s32 z = 0;
    l.len = 8;
    if (q->unk_c4 != 0) {
        if (func_ov065_02278ee8(q->unk_00) != 0) {
            do {
                s32 r = func_ov065_02278cb8(q->unk_00, data_ov065_022917a0, 0xff, z, &l.sa, &l.len);
                if (r != ~z) {
                    data_ov065_022917a0[r] = z;
                    func_ov065_0228758c(q, data_ov065_022917a0, r, &l.sa);
                }
            } while (func_ov065_02278ee8(q->unk_00) != 0);
        }
    }
}

void func_ov065_02288318(Unk_ov065_02288124_Qr *q) {
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    if (q->unk_bc != 0) {
        func_ov065_022881e0(q);
    }
    func_ov065_022882b8(q);
}

void func_ov065_02288344(Unk_ov065_02288124_Qr *q, Unk_ov065_02288124_AddrCb cb) {
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    q->unk_a8 = cb;
}

void func_ov065_02288358(Unk_ov065_02288124_Qr *q, s32 v) {
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    q->unk_a4 = v;
}

void func_ov065_0228836c(Unk_ov065_02288124_Qr *q, s32 v) {
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    q->unk_a0 = v;
}

s32 func_ov065_02288380(Unk_ov065_02288124_Qr **out, s32 fd, s32 a2, const char *name, const char *secret, s32 a5, s32 a6, Unk_ov065_02288124_KeyCb cb88,
                        Unk_ov065_02288124_IdxCb cb8c, Unk_ov065_02288124_IdxCb cb90, Unk_ov065_02288124_ListCb cb94, Unk_ov065_02288124_CountCb cb98,
                        Unk_ov065_02288124_ErrCb cb9c, void *ud) {
    s32 i;
    Unk_ov065_02288124_Qr *q;
    char buf[0x40];
    s32 ok;
    if (out == NULL) {
        q = &data_ov065_0228e1c0;
    } else {
        *out = (Unk_ov065_02288124_Qr *)func_ov065_02277af0(0x110);
        q = *out;
    }
    func_02128c60(func_ov065_02279144());
    func_02127838(q->unk_04, name);
    func_02127838(q->unk_44, secret);
    q->unk_c0 = a2;
    i = 0;
    q->unk_ac = 0;
    q->unk_b0 = 0;
    q->unk_00 = fd;
    q->unk_b8 = 1;
    q->unk_10c = ud;
    q->unk_88 = cb88;
    q->unk_8c = cb8c;
    q->unk_90 = cb90;
    q->unk_94 = cb94;
    q->unk_98 = cb98;
    q->unk_9c = cb9c;
    q->unk_a0 = i;
    q->unk_a4 = i;
    q->unk_d4 = i;
    q->unk_bc = a5;
    q->unk_c4 = i;
    q->unk_c8 = a6;
    q->unk_104 = i;
    q->unk_108 = i;
    q->unk_a8 = NULL;
    q->unk_b4 = i;
    for (; i < 4; i++) {
        q->unk_84[i] = func_02128c70() % 0xff;
    }
    for (i = 0; i < 10; i++) {
        q->unk_d8[i] = -1;
    }
    q->unk_100 = 0;
    if (data_ov065_02291748 == 0) {
        func_ov065_0228804c();
    }
    if (a5 != 0) {
        char c = data_ov065_02291760[0];
        if (c == 0) {
            func_021130d0(buf, data_ov065_0228e3ac, name);
        }
        ok = func_ov065_02287fcc(c != 0 ? data_ov065_02291760 : buf, 0x6cfc, &q->unk_cc, NULL);
    } else {
        ok = 1;
    }
    if (ok != 0) {
        return 0;
    }
    return 3;
}
}
