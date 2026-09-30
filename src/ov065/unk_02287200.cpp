// mwcc-flags: -O4,p
#include "types.h"

// ov065_064: GameSpy query-and-report style (0xfe 0xfd packets) server object helpers (0x02287200..0x02287aa4)

struct Unk_ov065_02287390_Buf {
    u8 unk_000[0x800];
    s32 unk_800;
};

struct Unk_ov065_02287390_Qr;
struct Unk_ov065_02287390_W {
    u32 v;
};

typedef s32 (*Unk_ov065_02287390_Cb88)(u32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb8c)(u32, s32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb94)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cb98)(s32, void *);
typedef s32 (*Unk_ov065_02287390_Cb9c)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cba0)(u32, void *);
typedef s32 (*Unk_ov065_02287390_Cba4)(u8 *, s32, void *);

struct Unk_ov065_02287390_Qr {
    s32 unk_00;
    u8 unk_04[0x80];
    u8 unk_84[4];
    Unk_ov065_02287390_Cb88 unk_88;
    Unk_ov065_02287390_Cb8c unk_8c;
    Unk_ov065_02287390_Cb8c unk_90;
    Unk_ov065_02287390_Cb94 unk_94;
    Unk_ov065_02287390_Cb98 unk_98;
    Unk_ov065_02287390_Cb9c unk_9c;
    Unk_ov065_02287390_Cba0 unk_a0;
    Unk_ov065_02287390_Cba4 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    s32 unk_b0;
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    u8 unk_cc[8];
    s32 unk_d4;
    u32 unk_d8[10];
    s32 unk_100;
    s32 unk_104;
    u16 unk_108;
    u16 unk_10a;
    void *unk_10c;
};

struct Unk_ov065_0228758c_B4 {
    u8 b[4];
};

struct Unk_ov065_02287200_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    u32 unk_4;
};

struct Unk_ov065_02287348_Ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14[0x2c];
};

struct Unk_ov065_022786bc_Vec;

typedef Unk_ov065_02287390_Qr Qr;
typedef Unk_ov065_02287390_Buf Buf;
typedef Unk_ov065_02287348_Ent Ent;
typedef Unk_ov065_022786bc_Vec Vec;

extern "C" {
extern u8 data_ov065_0228e16c[];
extern Qr *data_ov065_0228e1b4;
extern u8 data_ov065_0228e1b8[];
extern char data_ov065_0228e2d0[];
extern char data_ov065_0228e2dc[];
extern char data_ov065_0228e2e8[];
extern char data_ov065_0228e2f0[];
extern char data_ov065_0228e2f4[];
extern char data_ov065_0228e2f8[];
extern char data_ov065_0228e308[];
extern char data_ov065_0228e314[];
extern char data_ov065_0228e320[];
extern char data_ov065_0228e32c[];
extern char data_ov065_0228e340[];
extern char data_ov065_0228e348[];
extern char data_ov065_0228e34c[];
extern char *data_ov065_0228e504[];
extern Vec *data_ov065_02291544;
extern s32 data_ov065_02291748;
extern u32 data_ov065_0229174c[];

s32 func_02128930(const void *, const void *, s32);
void func_02128a00(void *, const void *, s32);
s32 func_021130d0(char *, const char *, ...);
s32 func_ov065_02278c64(s32, void *, s32, s32, void *, s32);
s32 func_ov065_02278dbc(s32);
s32 func_ov065_02279144(void);
void func_ov065_02278688(Vec *);
s32 func_ov065_02278684(Vec *);
void *func_ov065_0227866c(Vec *, s32);
void func_ov065_02278658(Vec *, void *);
void func_ov065_0227858c(Vec *, s32);
Vec *func_ov065_022786bc(s32, s32, void *);
char *func_ov065_022610f0(Unk_ov065_02287390_W);
void func_ov065_02287df8(Buf *, s32, u8 *);
void func_ov065_02288094(Buf *, const char *);
void func_ov065_022880d8(Buf *, s32);
void func_ov065_02287b18(Qr *, Buf *, u32, u8 *, u32, u8 *, u32, u8 *);
void func_ov065_02287d04(Qr *, u8 *);
void func_ov065_02287d90(Qr *, Buf *, u8 *, s32);

void func_ov065_02287324(Ent *e);
void func_ov065_02287940(Qr *q, Buf *buf, s32 kind);
void func_ov065_022878f0(Qr *q, Buf *buf);
BOOL func_ov065_022877d4(Qr *q, u32 v);
void func_ov065_02287828(Qr *q, u8 *p, s32 n);
void func_ov065_02287aa4(Qr *q, Buf *buf, u8 *p, s32 n);

#define HTONS(x) ((u16)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))
#define HTONL(x) (((x) >> 24 & 0xff) | ((x) >> 8 & 0xff00) | ((x) << 8 & 0xff0000) | ((x) << 24 & 0xff000000))

s32 func_ov065_02287200(s32 sock, u32 ip, s32 port, void *buf, s32 len) {
    Unk_ov065_02287200_Sa sa;
    sa.unk_1 = 2;
    sa.unk_2 = HTONS(port);
    sa.unk_4 = ip;
    return func_ov065_02278c64(sock, buf, len, 0, &sa, 8);
}

BOOL func_ov065_0228723c(void *p) {
    if (func_02128930(p, data_ov065_0228e16c, 6) == 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02287260(void) {
    if (data_ov065_02291544 != NULL) {
        func_ov065_02278688(data_ov065_02291544);
        data_ov065_02291544 = NULL;
    }
}

void func_ov065_02287280(void *key) {
    s32 i;
    for (i = 0; i < func_ov065_02278684(data_ov065_02291544); i++) {
        if (key == func_ov065_0227866c(data_ov065_02291544, i)) {
            func_ov065_0227858c(data_ov065_02291544, i);
            return;
        }
    }
}

void *func_ov065_022872c8(void) {
    Ent z = {0};
    if (data_ov065_02291544 == NULL) {
        data_ov065_02291544 = func_ov065_022786bc(0x40, 4, (void *)func_ov065_02287324);
    }
    func_ov065_02278658(data_ov065_02291544, &z);
    return func_ov065_0227866c(data_ov065_02291544, func_ov065_02278684(data_ov065_02291544) - 1);
}

void func_ov065_02287324(Ent *e) {
    if (e->unk_00 != -1) {
        func_ov065_02278dbc(e->unk_00);
    }
    e->unk_00 = -1;
    e->unk_10 = 4;
}

Ent *func_ov065_02287348(s32 x) {
    s32 i;
    Ent *e;
    if (data_ov065_02291544 == NULL) {
        return NULL;
    }
    for (i = 0; i < func_ov065_02278684(data_ov065_02291544); i++) {
        e = (Ent *)func_ov065_0227866c(data_ov065_02291544, i);
        if (e->unk_08 == x) {
            return e;
        }
    }
    return NULL;
}

void func_ov065_02287390(Qr *q, s32 mode) {
    Buf buf;
    char tmp[20];
    s32 i;
    u32 *p;
    buf.unk_800 = 0;
    func_ov065_02287df8(&buf, 3, q->unk_84);
    i = 0;
    if (i < data_ov065_02291748) {
        p = data_ov065_0229174c;
        do {
            func_021130d0(tmp, data_ov065_0228e2d0, i);
            func_ov065_02288094(&buf, tmp);
            func_ov065_02288094(&buf, func_ov065_022610f0(*(Unk_ov065_02287390_W *)p));
            p++;
        } while (++i < data_ov065_02291748);
    }
    func_ov065_02288094(&buf, data_ov065_0228e2dc);
    func_ov065_022880d8(&buf, q->unk_c0);
    func_ov065_02288094(&buf, data_ov065_0228e2e8);
    func_ov065_02288094(&buf, q->unk_c8 != 0 ? data_ov065_0228e2f0 : data_ov065_0228e2f4);
    if (mode != 0) {
        func_ov065_02288094(&buf, data_ov065_0228e2f8);
        func_ov065_022880d8(&buf, mode);
    }
    func_ov065_02288094(&buf, data_ov065_0228e308);
    func_ov065_02288094(&buf, (char *)q->unk_04);
    if (q->unk_a8 != 0) {
        func_ov065_02288094(&buf, data_ov065_0228e314);
        func_ov065_022880d8(&buf, q->unk_104);
        func_ov065_02288094(&buf, data_ov065_0228e320);
        func_ov065_022880d8(&buf, q->unk_108);
    }
    if (mode != 2) {
        func_ov065_02287b18(q, &buf, 0xff, NULL, 0xff, NULL, 0xff, NULL);
    } else if (0x800 - buf.unk_800 >= 1) {
        buf.unk_000[buf.unk_800++] = 0;
    }
    func_ov065_02278c64(q->unk_00, &buf, buf.unk_800, 0, q->unk_cc, 8);
    q->unk_ac = func_ov065_02279144();
    q->unk_b0 = q->unk_ac;
    if (mode != 0) {
        q->unk_b4 = 0;
    }
}

void func_ov065_02287534(Qr *q) {
    Buf buf;
    buf.unk_800 = 0;
    func_ov065_02287df8(&buf, 8, q->unk_84);
    func_ov065_02278c64(q->unk_00, &buf, buf.unk_800, 0, q->unk_cc, 8);
    q->unk_b0 = func_ov065_02279144();
}

void func_ov065_0228758c(Qr *q, s8 *data, s32 n, void *addr) {
    struct {
        s32 x;
        Buf out;
    } l;
    s32 type;
    s32 c;
    l.out.unk_800 = 0;
    if (q == NULL) {
        q = data_ov065_0228e1b4;
    }
    c = data[0];
    if (c == 0x3b) {
        Unk_ov065_02287390_Cba4 cb = (Unk_ov065_02287390_Cba4)q->unk_d4;
        if (cb != NULL) {
            cb((u8 *)data, n, addr);
            return;
        }
        return;
    }
    if (c == 0x5c) {
        func_ov065_022878f0(q, &l.out);
        func_ov065_02278c64(q->unk_00, &l.out, l.out.unk_800, 0, addr, 8);
        return;
    }
    if (n < 7) {
        return;
    }
    if ((u8)c != 0xfe) {
        return;
    }
    if (((u8 *)data)[1] != 0xfd) {
        return;
    }
    if (q->unk_b8 > 0) {
        q->unk_b8 = 0;
    }
    type = data[2];
    {
        s8 *hdr = data + 3;
        s8 *body = data + 7;
        n -= 7;
        func_ov065_02287df8(&l.out, type, (u8 *)hdr);
        switch (type) {
        case 0:
            func_ov065_02287aa4(q, &l.out, (u8 *)body, n);
            break;
        case 1:
            if (n >= 13 && q->unk_a8 != 0) {
                func_ov065_02287d04(q, (u8 *)body + n - 13);
            }
            func_ov065_02287d90(q, &l.out, (u8 *)body, n);
            break;
        case 2:
            if (n > 0x20) {
                n = 0x20;
            }
            l.out.unk_000[0] = 5;
            func_02128a00(l.out.unk_000 + l.out.unk_800, body, n);
            l.out.unk_800 += n;
            break;
        case 4: {
            if (q->unk_b8 == -1) {
                return;
            }
            l.x = 0;
            do {
                if (hdr[l.x] != ((s8 *)q->unk_84)[l.x]) {
                    return;
                }
                l.x++;
            } while (l.x < 4);
            if (n < 2) {
                return;
            }
            q->unk_b8 = -1;
            q->unk_9c(body[0], (u8 *)body + 1, q->unk_10c);
            return;
        }
        case 6: {
            l.x = 0;
            do {
                if (hdr[l.x] != ((s8 *)q->unk_84)[l.x]) {
                    return;
                }
                l.x++;
            } while (l.x < 4);
            if (n < 4) {
                return;
            }
            l.out.unk_000[0] = 7;
            *(Unk_ov065_0228758c_B4 *)(l.out.unk_000 + l.out.unk_800) = *(Unk_ov065_0228758c_B4 *)body;
            l.out.unk_800 = l.out.unk_800 + 4;
            *(Unk_ov065_0228758c_B4 *)&l.x = *(Unk_ov065_0228758c_B4 *)body;
            if (func_ov065_022877d4(q, l.x) == 0) {
                func_ov065_02287828(q, (u8 *)body + 4, n - 4);
            }
            break;
        }
        case 3:
        case 5:
        case 7:
        case 8:
            return;
        }
        func_ov065_02278c64(q->unk_00, &l.out, l.out.unk_800, 0, addr, 8);
    }
}

BOOL func_ov065_022877d4(Qr *q, u32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (v == q->unk_d8[i]) {
            return TRUE;
        }
    }
    q->unk_100 = (q->unk_100 + 1) % 10;
    q->unk_d8[q->unk_100] = v;
    return FALSE;
}

void func_ov065_02287828(Qr *q, u8 *p, s32 n) {
    struct Hdr {
        u8 b[6];
    };
    struct B4 {
        u8 b[4];
    };
    Hdr hdr = *(Hdr *)data_ov065_0228e1b8;
    u32 l;
    s32 j;
    BOOL ok = TRUE;
    u8 *h;
    if (n >= 10) {
        h = hdr.b;
        for (j = 0; j < 6; j++) {
            if (*h != p[j]) {
                ok = FALSE;
                break;
            }
            h++;
        }
    } else {
        ok = FALSE;
    }
    if (ok) {
        Unk_ov065_02287390_Cba0 cb;
        *(B4 *)&l = *(B4 *)(p + 6);
        cb = q->unk_a0;
        if (cb != NULL) {
            u32 v = l;
            cb(HTONL(v), q->unk_10c);
        }
    } else {
        Unk_ov065_02287390_Cba4 cb = q->unk_a4;
        if (cb != NULL) {
            cb(p, n, q->unk_10c);
        }
    }
}

void func_ov065_022878f0(Qr *q, Buf *buf) {
    buf->unk_800 = 1;
    buf->unk_000[0] = 0x5c;
    func_ov065_02287940(q, buf, 0);
    func_ov065_02287940(q, buf, 1);
    func_ov065_02287940(q, buf, 2);
    func_ov065_02288094(buf, data_ov065_0228e32c);
    buf->unk_800--;
}

void func_ov065_02287940(Qr *q, Buf *buf, s32 kind) {
    char tmp[0x80];
    struct Keys {
        u8 b[0x100];
        s32 n;
    } k;
    s32 cnt;
    s32 i;
    s32 j;
    s32 mark;
    char *name;
    u8 *p;
    k.n = 0;
    if ((u32)(kind - 1) <= 1) {
        cnt = q->unk_98(kind, q->unk_10c);
    } else {
        cnt = 1;
    }
    q->unk_94(kind, (u8 *)&k, q->unk_10c);
    i = 0;
    if (i < k.n) {
      p = k.b;
      do {
        name = data_ov065_0228e504[*p];
        if (name == NULL) {
            name = data_ov065_0228e340;
        }
        if (kind == 0) {
            func_ov065_02288094(buf, name);
            buf->unk_000[buf->unk_800 - 1] = 0x5c;
            mark = buf->unk_800;
            q->unk_88(*p, buf, q->unk_10c);
            if (mark == buf->unk_800) {
                func_ov065_02288094(buf, data_ov065_0228e348);
            }
            buf->unk_000[buf->unk_800 - 1] = 0x5c;
        } else {
            for (j = 0; j < cnt; j++) {
                func_021130d0(tmp, data_ov065_0228e34c, name, j);
                func_ov065_02288094(buf, tmp);
                buf->unk_000[buf->unk_800 - 1] = 0x5c;
                mark = buf->unk_800;
                if (kind == 1) {
                    q->unk_8c(*p, j, buf, q->unk_10c);
                } else if (kind == 2) {
                    q->unk_90(*p, j, buf, q->unk_10c);
                }
                if (mark == buf->unk_800) {
                    func_ov065_02288094(buf, data_ov065_0228e348);
                }
                buf->unk_000[buf->unk_800 - 1] = 0x5c;
            }
        }
        p++;
      } while (++i < k.n);
    }
}

void func_ov065_02287aa4(Qr *q, Buf *buf, u8 *p, s32 n) {
    u32 l1, l2, l3;
    u8 *p2 = NULL;
    u8 *p1 = p2;
    u8 *p3 = p2;
    if (n >= 3) {
        l1 = *p++;
        n--;
        if (l1 != 0 && l1 != 0xff) {
            p1 = p;
            p += l1;
            n -= l1;
        }
        if (n >= 2) {
            l2 = *p++;
            n--;
            if (l2 != 0 && l2 != 0xff) {
                p2 = p;
                p += l2;
                n -= l2;
            }
            if (n >= 1) {
                l3 = *p;
                n--;
                if (l3 != 0 && l3 != 0xff) {
                    p3 = p + 1;
                    n -= l3;
                }
                if (n >= 0) {
                    func_ov065_02287b18(q, buf, l1, p1, l2, p2, l3, p3);
                }
            }
        }
    }
}

}
