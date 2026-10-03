// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p -str reuse
#include "types.h"

namespace Unk_ov065_0226650c_Ns {


// ov065_012: SSL/TLS handshake helpers (PRF, RSA, certificate ASN.1 parse), 0x0226650c..0x02266df4

struct Unk_ov065_022665d8_Rsa {
    s32 unk_00;
    u8 *unk_04;
    s32 unk_08;
    u8 *unk_0c;
    s32 unk_10;
    u8 *unk_14;
    s32 unk_18;
    u8 *unk_1c;
    s32 unk_20;
    u8 *unk_24;
    s32 unk_28;
    u8 *unk_2c;
};

struct Unk_ov065_02266c90_Key {
    u32 unk_00;
    s32 unk_04;
    u8 *unk_08;
    s32 unk_0c;
    u8 *unk_10;
};

struct Unk_ov065_0226650c_Ctx;
typedef u32 (*Unk_ov065_0226650c_Cb)(u32, Unk_ov065_0226650c_Ctx *, s32);

struct Unk_ov065_0226650c_Ctx {
    u8 *unk_00;
    u8 unk_04;
    u8 pad_05;
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[0x20];
    u8 pad_48[0x31c - 0x48];
    u8 unk_31c[0x5c];
    u8 pad_378[0x3d0 - 0x378];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 pad_42a[2];
    s32 unk_42c;
    s32 unk_430;
    u8 *unk_434;
    u8 *unk_438;
    u8 unk_43c[0x14];
    s32 unk_450;
    Unk_ov065_02266c90_Key unk_454;
    u8 unk_468[0x100];
    s32 unk_568;
    u8 unk_56c[8];
    s32 unk_574;
    u8 *unk_578;
    s32 unk_57c;
    u8 unk_580;
    u8 unk_581;
    u8 unk_582;
    u8 unk_583;
    u8 unk_584[0x100];
    u8 unk_684[0x100];
    u8 unk_784[0x50];
    char *unk_7d4;
    u8 *unk_7d8;
    s32 unk_7dc;
    u32 unk_7e0;
    Unk_ov065_0226650c_Cb unk_7e4;
};

struct Unk_ov065_02266948_Date {
    s32 year;
    s32 month;
    s32 day;
    s32 week;
};

typedef Unk_ov065_0226650c_Ctx Ctx;
typedef Unk_ov065_022665d8_Rsa Rsa;
typedef Unk_ov065_02266c90_Key Key;

extern "C" {
extern void *(*sIpAlloc)(u32);
extern void (*sIpFree)(void *);
extern u16 sSslCipherSuites[2];
extern u8 sSslNoSession[];
extern u32 gSslRsaThreadPriority;
extern char *sSslCertOidTable[6];
struct Unk_ov065_02266c90_Os {
    u32 unk_00;
    u32 unk_04;
};
extern Unk_ov065_02266c90_Os data_021fcc2c;

// main module
void MI_CpuCopy8(const void *, void *, u32);
void MI_CpuFill8(void *, s32, u32);
s32 _s32_div_f(s32, s32);
u32 func_0212a438(const char *);
s32 memcmp(const void *, const void *, u32);
void RTC_GetDate(Unk_ov065_02266948_Date *);
u32 OS_GetThreadPriority(u32);
void OS_SetThreadPriority(u32, u32);

// same overlay, out of range
void SslSha1_Init(void *);
void SslSha1_Update(void *, const void *, u32);
void SslSha1_Final(void *, void *);
void SslMd5_Init(void *);
void SslMd5_Update(void *, const void *, u32);
void SslMd5_Final(void *, void *);
u8 *SslSession_FindById(u8 *);
u8 *SslSession_Add(u8 *);
s32 SslCert_ReadDerLength(u8 **);
void SslCert_AppendName(void *, u8 *, s32);
u32 SslCert_ParseTime(u8 *);
Key *SslCert_FindRootCa(Ctx *, u8 *);
void SslBigNum_FromBytes(u16 *, u8 *, s32, s32);
void SslBigNum_ModExpMontgomery(u16 *, u16 *, u16 *, s32, u16 *);
void SslBigNum_Sub(u16 *, u16 *, u16 *, s32);
void SslBigNum_Mul(u16 *, u16 *, u16 *, s32);
void SslBigNum_Add(u16 *, u16 *, u16 *, s32);
s32 SslBigNum_Sign(u16 *, s32);
void SslBigNum_Negate(u16 *, s32);
void SslBigNum_DivMod(s32, u16 *, u16 *, u16 *, s32, u16 *);
void SslBigNum_ToBytes(u8 *, u16 *, s32, s32);
void SslBigNum_ModExp(u16 *, u16 *, u16 *, s32, u16 *);

// in range
void Ssl_DeriveMasterSecret(Ctx *);
void Ssl_DeriveSecretPart(u8 *, char *, Ctx *);
void SslRsa_PrivateDecrypt(u8 *, u8 *, Rsa *);
void Ssl_HandleClientHello(Ctx *, u8 *);
void Ssl_HandleClientHelloV2(Ctx *, u8 *);
s32 Ssl_IsVersion3(u32, u32);
u32 Ssl_ChooseCipherSuite(u8 *, s32, s32);
s32 Ssl_ListContains(u8 *, s32, s32, u32);
void Ssl_HandleServerHello(Ctx *, u8 *);
void Ssl_HandleCertificate(Ctx *, u8 *);
s32 SslCert_MatchHostName(char *, char *);
s32 SslCert_LabelLength(char *);
u32 SslCert_Verify(Ctx *);
s32 SslCert_VerifySignature(Ctx *, Key *);
s32 SslCert_ParseAsn1(Ctx *, u8 **, s32, s32, s32);

s32 SslCert_ParseAsn1(Ctx *c, u8 **pp, s32 depth, s32 idx, s32 mode) {
    u8 *p;
    u32 tag;
    s32 len;
    s32 i;
    u8 *end;
    char **tbl;
    u8 *send;
    s32 oi;
    u8 *op;
    char *oe;
    p = *pp;
    tag = *p++;
    len = SslCert_ReadDerLength(&p);
    if (len < 0 || len > 0x7d0) {
        return 1;
    }
    switch (tag & 0x1f) {
    case 0:
    case 1:
        goto def;
    case 2:
        if (c->unk_581 != 0) {
            if (idx == 0) {
                if (*p == 0) {
                    do {
                        p++;
                        len--;
                    } while (*p == 0);
                }
                switch (mode) {
                case 0:
                    if (len <= 0x100) {
                        MI_CpuCopy8(p, c->unk_468, len);
                        c->unk_568 = len;
                    }
                    break;
                case 2:
                    c->unk_454.unk_04 = len;
                    c->unk_454.unk_08 = p;
                    break;
                }
            } else if (idx == 1) {
                if (*p == 0) {
                    do {
                        p++;
                        len--;
                    } while (*p == 0);
                }
                switch (mode) {
                case 0:
                    if (len <= 8) {
                        MI_CpuCopy8(p, c->unk_56c, len);
                        c->unk_574 = len;
                    }
                    break;
                case 2:
                    c->unk_454.unk_0c = len;
                    c->unk_454.unk_10 = p;
                    break;
                }
            }
        }
        p += len;
        break;
    case 3:
        if (depth == 1 && mode != 2) {
            c->unk_578 = p + 1;
            c->unk_57c = len - 1;
        }
        if (c->unk_581 != 0) {
            p++;
            if (SslCert_ParseAsn1(c, &p, depth, 0, mode) != 0) {
                return 1;
            }
            c->unk_581 = 0;
        } else {
            p += len;
        }
        break;
    case 6:
        oi = 0;
        tbl = sSslCertOidTable;
        op = p;
        do {
            oe = *tbl;
            if (memcmp(op, oe, func_0212a438(oe)) == 0) {
                switch (oi) {
                case 0:
                    break;
                case 1:
                case 2:
                    if (mode == 0) {
                        c->unk_430 = oi;
                    }
                    c->unk_581 = oi;
                    break;
                case 3:
                case 4:
                    if (mode != 2) {
                        c->unk_42c = oi;
                    }
                    break;
                case 5:
                    if (mode != 2) {
                        c->unk_582 = oi;
                    }
                    break;
                }
                break;
            }
            tbl++;
            oi++;
        } while (oi < 6);
        p += len;
        break;
    case 12:
    case 19:
    case 20:
    case 22:
        if (mode != 2) {
            if (c->unk_580 != 0) {
                SslCert_AppendName(c->unk_684, p, len);
                if (c->unk_582 == 5 && len <= 0x4f) {
                    MI_CpuCopy8(p, c->unk_784, len);
                    (c->unk_784)[len] = 0;
                }
            } else {
                SslCert_AppendName(c->unk_584, p, len);
            }
        }
        c->unk_582 = 0;
        p += len;
        break;
    case 23:
    case 24:
        if (mode != 2) {
            u32 t = SslCert_ParseTime(p);
            if (idx == 0) {
                if (c->unk_7e0 >= t) {
                    c->unk_583 = 1;
                }
            } else {
                if (c->unk_7e0 > t) {
                    c->unk_583 = 0;
                }
            }
        }
        p += len;
        c->unk_580 = 1;
        break;
    case 16:
        if (depth == 0 && idx == 0 && mode != 2) {
            c->unk_434 = p;
        }
        send = p + len;
        for (i = 0; p < send;) {
            s32 r = SslCert_ParseAsn1(c, &p, depth + 1, i, mode);
            i++;
            if (r != 0) {
                return 1;
            }
        }
        if (depth == 1 && idx == 0 && mode != 2) {
            c->unk_438 = p;
        }
        break;
    case 17:
        end = p + len;
        while (p < end) {
            if (SslCert_ParseAsn1(c, &p, depth + 1, 0, mode) != 0) {
                return 1;
            }
        }
        break;
    default:
    def:
        if (tag == 0xa0) {
            end = p + len;
            while (p < end) {
                if (SslCert_ParseAsn1(c, &p, depth + 1, 0, mode) != 0) {
                    return 1;
                }
            }
        } else {
            p += len;
        }
        break;
    }
    *pp = p;
    return 0;
}

s32 SslCert_VerifySignature(Ctx *c, Key *k) {
    if (c->unk_578 == 0 || c->unk_57c == 0 || k->unk_10 == 0 || k->unk_0c == 0 || k->unk_08 == 0 || k->unk_04 == 0) {
        return 2;
    }
    s32 n = (k->unk_04 * 2) / 2;
    u16 *buf = (u16 *)sIpAlloc(n * 8);
    if (buf == 0) {
        return 2;
    }
    u16 *b1 = buf + n;
    u16 *b2 = b1 + n;
    u16 *b3 = b2 + n;
    SslBigNum_FromBytes(b1, c->unk_578, c->unk_57c, n);
    SslBigNum_FromBytes(b2, k->unk_10, k->unk_0c, n);
    SslBigNum_FromBytes(b3, k->unk_08, k->unk_04, n);
    if (gSslRsaThreadPriority < 0x20) {
        u32 th = data_021fcc2c.unk_04;
        u32 pr = OS_GetThreadPriority(th);
        OS_SetThreadPriority(th, gSslRsaThreadPriority);
        SslBigNum_ModExp(buf, b1, b2, n, b3);
        OS_SetThreadPriority(th, pr);
    } else {
        SslBigNum_ModExp(buf, b1, b2, n, b3);
    }
    SslBigNum_ToBytes((u8 *)b1, buf, k->unk_04, n);
    s32 r = 0;
    u8 *q = (u8 *)b1;
    if (q[0] != 0 || q[1] != 1) {
        r = 2;
    } else {
        s32 i = 2;
        s32 len = k->unk_04;
        if (len > 2) {
            do {
                if (q[i] != 0xff) {
                    break;
                }
                i++;
            } while (i < len);
        }
        s32 j = i + 1;
        if (j < len && q[i] == 0 && q[j] == 0x30 && memcmp(c->unk_43c, q + len - c->unk_450, c->unk_450) == 0) {
        } else {
            r = 2;
        }
    }
    sIpFree(buf);
    return r;
}

u32 SslCert_Verify(Ctx *c) {
    u32 r;
    if (c->unk_583 != 0) {
        r = 0;
    } else {
        r = 0x8000;
    }
    if (c->unk_430 == -1) {
        r |= 4;
        return r;
    }
    switch (c->unk_42c) {
    case 3: {
        u8 *h = c->unk_3d0;
        SslMd5_Init(h);
        u8 *s = c->unk_434;
        SslMd5_Update(h, s, c->unk_438 - s);
        SslMd5_Final(h, c->unk_43c);
        c->unk_450 = 0x10;
        break;
    }
    case 4: {
        u8 *h = c->unk_31c;
        SslSha1_Init(h);
        u8 *s = c->unk_434;
        SslSha1_Update(h, s, c->unk_438 - s);
        SslSha1_Final(h, c->unk_43c);
        c->unk_450 = 0x14;
        break;
    }
    default:
        r |= 3;
        return r;
    }
    Key *k = SslCert_FindRootCa(c, c->unk_584);
    if (k == 0) {
        r |= 1;
        return r;
    }
    r |= SslCert_VerifySignature(c, k);
    return r;
}

s32 SslCert_LabelLength(char *s) {
    char *o = s;
    while (*(s8 *)s != '.' && *(s8 *)s != 0) {
        s++;
    }
    return s - o;
}

s32 SslCert_MatchHostName(char *a, char *b) {
    s8 x, y;
    for (;;) {
        while (x = *(s8 *)b++, y = *(s8 *)a++, y == x) {
            if (y == 0) {
                return 0;
            }
        }
        if (x != '*') {
            return 1;
        }
        a--;
        s32 la = SslCert_LabelLength(a);
        s32 lb = SslCert_LabelLength(b);
        if (lb > la) {
            return 1;
        }
        a += la - lb;
    }
}

void Ssl_HandleCertificate(Ctx *c, u8 *p) {
    u32 len;
    u32 rl;
    u32 ty;
    u32 r4;
    s32 i;
    s32 k;
    Unk_ov065_02266948_Date d;
    len = (((p[0] << 8) + p[1]) << 8) + p[2];
    p += 3;
    c->unk_430 = -1;
    RTC_GetDate(&d);
    c->unk_7e0 = d.day + (((d.year + 0x7d0) << 16) + (d.month << 8));
    c->unk_684[0] = 0;
    c->unk_568 = c->unk_574 = 0;
    i = k = 0;
    for (;;) {
        rl = (((p[0] << 8) + p[1]) << 8) + p[2];
        p += 3;
        len -= rl + 3;
        c->unk_42c = -1;
        c->unk_581 = 0;
        c->unk_580 = 0;
        c->unk_583 = 0;
        c->unk_684[0] = 0;
        c->unk_584[0] = 0;
        c->unk_784[0] = 0;
        c->unk_7d8 = p;
        c->unk_7dc = rl;
        if (SslCert_ParseAsn1(c, &p, 0, 0, k) != 0 || (u32)c->unk_568 < 0x33 || c->unk_574 == 0) {
            c->unk_429 = 9;
            return;
        }
        r4 = SslCert_Verify(c);
        if (i == 0 && c->unk_7d4 != 0 && SslCert_MatchHostName(c->unk_7d4, (char *)c->unk_784) != 0) {
            r4 |= 0x4000;
        }
        ty = r4 & 0xff;
        if (ty == 1 && len != 0) {
            u8 *q = p + 3;
            c->unk_581 = 0;
            if (SslCert_ParseAsn1(c, &q, 0, 0, 2) != 0) {
                c->unk_429 = 9;
                return;
            }
            r4 = (r4 & ~0xff) | SslCert_VerifySignature(c, &c->unk_454);
        }
        if (c->unk_7e4 != 0) {
            r4 = c->unk_7e4(r4, c, i);
        }
        i++;
        if (ty != 0 && r4 == 0 && len != 0) {
            k = 1;
            continue;
        }
        break;
    }
    if (r4 == 0) {
        c->unk_429 = 3;
    } else {
        c->unk_429 = 9;
    }
}

void Ssl_HandleServerHello(Ctx *c, u8 *p) {
    u8 n;
    u8 *old;
    MI_CpuCopy8(p + 2, c->unk_28, 0x20);
    p += 0x22;
    n = *p++;
    old = c->unk_00;
    if (old != 0 && n == 0x20 && memcmp(old, p, 0x20) == 0) {
        c->unk_04 = 1;
    } else {
        if (old != 0) {
            old[0x5a] = 0;
        }
        if (n == 0) {
            c->unk_00 = sSslNoSession;
        } else {
            c->unk_00 = SslSession_Add(p);
        }
        c->unk_04 = 0;
    }
    p += n;
    c->unk_06 = (p[0] << 8) + p[1];
    c->unk_429 = 2;
}

s32 Ssl_ListContains(u8 *p, s32 cnt, s32 size, u32 key) {
    s32 i;
    for (i = 0; i < cnt; p += size, i++) {
        u32 v = (p[0] << 8) + p[1];
        if (size == 3) {
            v = (v << 8) + p[2];
        }
        if (v == key) {
            return TRUE;
        }
    }
    return FALSE;
}

u32 Ssl_ChooseCipherSuite(u8 *p, s32 cnt, s32 size) {
    u32 i;
    u16 *t;
    for (i = 0, t = sSslCipherSuites; i < 2; t++, i++) {
        if (Ssl_ListContains(p, cnt, size, *t)) {
            return sSslCipherSuites[i];
        }
    }
    return 0;
}

s32 Ssl_IsVersion3(u32 a, u32 b) {
    if (a == 3) {
        return TRUE;
    }
    return FALSE;
}

void Ssl_HandleClientHelloV2(Ctx *c, u8 *p) {
    if (Ssl_IsVersion3(p[0], p[1])) {
        s32 a = (p[2] << 8) + p[3];
        u16 r = Ssl_ChooseCipherSuite(p + 8, a / 3, 3);
        if (r != 0) {
            c->unk_06 = r;
            s32 b = (p[4] << 8) + p[5];
            s32 n = (p[6] << 8) + p[7];
            c->unk_00 = 0;
            a += 8;
            u8 *q = p + (a + b);
            if (n >= 0x20) {
                MI_CpuCopy8(q, c->unk_08, 0x20);
            } else {
                MI_CpuFill8(c->unk_08, 0, 0x20 - n);
                MI_CpuCopy8(q, c->unk_28 - n, n);
            }
            c->unk_429 = 1;
        }
    }
}

void Ssl_HandleClientHello(Ctx *c, u8 *p) {
    if (Ssl_IsVersion3(p[0], p[1])) {
        MI_CpuCopy8(p + 2, c->unk_08, 0x20);
        u32 n = p[0x22];
        u8 *q = p + 0x23;
        if (n != 0x20) {
            c->unk_00 = 0;
        } else {
            c->unk_00 = SslSession_FindById(q);
        }
        q += n;
        u16 r = Ssl_ChooseCipherSuite(q + 2, ((q[0] << 8) + q[1]) / 2, 2);
        c->unk_06 = r;
        if (r != 0) {
            c->unk_429 = 1;
        }
    }
}

void SslRsa_PrivateDecrypt(u8 *out, u8 *in, Rsa *k) {
    if (k != 0 && k->unk_00 != 0) {
        s32 n = (k->unk_00 * 2) / 2 + 1;
        u16 *b0 = (u16 *)sIpAlloc(n * 20);
        if (b0 != 0) {
            u16 *b1 = b0 + n;
            u16 *b2 = b1 + n;
            u16 *b3 = b2 + n;
            u16 *b4 = b3 + n;
            u16 *b5 = b4 + n;
            u16 *b6 = b5 + n;
            u16 *b7 = b6 + n;
            SslBigNum_FromBytes(b0, in, k->unk_00, n);
            SslBigNum_FromBytes(b1, k->unk_1c, k->unk_18, n);
            SslBigNum_FromBytes(b5, k->unk_0c, k->unk_08, n);
            SslBigNum_ModExpMontgomery(b3, b0, b1, n, b5);
            SslBigNum_FromBytes(b1, k->unk_24, k->unk_20, n);
            SslBigNum_FromBytes(b5, k->unk_14, k->unk_10, n);
            SslBigNum_ModExpMontgomery(b4, b0, b1, n, b5);
            SslBigNum_Sub(b0, b3, b4, n);
            SslBigNum_FromBytes(b1, k->unk_2c, k->unk_28, n);
            SslBigNum_Mul(b2, b0, b1, n);
            SslBigNum_FromBytes(b1, k->unk_14, k->unk_10, n);
            SslBigNum_Mul(b0, b2, b1, n);
            SslBigNum_Add(b2, b0, b4, n);
            SslBigNum_FromBytes(b1, k->unk_04, k->unk_00, n);
            if (SslBigNum_Sign(b2, n) < 0) {
                SslBigNum_Negate(b2, n);
                SslBigNum_DivMod(0, b2, b1, b6, n, b7);
                SslBigNum_Sub(b6, b1, b6, n);
            } else {
                SslBigNum_DivMod(0, b2, b1, b6, n, b7);
            }
            SslBigNum_ToBytes(out, b6, 0x30, n);
            sIpFree(b0);
        }
    }
}

void Ssl_DeriveSecretPart(u8 *out, char *label, Ctx *c) {
    u8 tmp[0x14];
    u8 *h = c->unk_31c;
    SslSha1_Init(h);
    SslSha1_Update(h, label, func_0212a438(label));
    SslSha1_Update(h, c->unk_00 + 0x20, 0x30);
    SslSha1_Update(h, c->unk_08, 0x20);
    SslSha1_Update(h, c->unk_28, 0x20);
    SslSha1_Final(h, tmp);
    h = c->unk_3d0;
    SslMd5_Init(h);
    SslMd5_Update(h, c->unk_00 + 0x20, 0x30);
    SslMd5_Update(h, tmp, 0x14);
    SslMd5_Final(h, out);
}

void Ssl_DeriveMasterSecret(Ctx *c) {
    u8 buf[0x30];
    Ssl_DeriveSecretPart(buf, "A", c);
    Ssl_DeriveSecretPart(buf + 0x10, "BB", c);
    Ssl_DeriveSecretPart(buf + 0x20, "CCC", c);
    MI_CpuCopy8(buf, c->unk_00 + 0x20, 0x30);
}
}

}

namespace Unk_ov065_02265a5c_Ns {


// SSL 3.0 record layer (MD5/SHA-1 MAC, key block derivation, Finished checks)

struct Unk_ov065_02265a5c_St {
    u8 *unk_00;
    u8 unk_04[2];
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[0x20];
    u8 unk_48[0x48];
    u8 *unk_90;
    u8 *unk_94;
    u8 *unk_98;
    u8 unk_9c[0x104];
    u8 unk_1a0[8];
    u8 *unk_1a8;
    u8 *unk_1ac;
    u8 *unk_1b0;
    u8 unk_1b4[0x104];
    u8 unk_2b8[8];
    u8 unk_2c0[0x5c];
    u8 unk_31c[0x5c];
    u8 unk_378[0x58];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x7f0 - 0x42b];
    u32 unk_7f0;
    u32 unk_7f4;
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02265a5c_Sess {
    u8 unk_00[0xc];
    Unk_ov065_02265a5c_St *unk_0c;
};

typedef Unk_ov065_02265a5c_St St;
typedef Unk_ov065_02265a5c_Sess Sess;

extern "C" {
extern void *(*sIpAlloc)(u32);
extern void (*sIpFree)(void *);

// main module
void *MI_CpuFill8(void *, s32, u32);
void *MI_CpuCopy8(const void *, void *, u32);
s32 memcmp(const void *, const void *, u32);

// same overlay, out of range
u8 *Tcp_Read(u32 *, Sess *);
void Tcp_Consume(u32, Sess *);
void Ssl_HandleClientHelloV2(St *, u8 *);
void SslSha1_Update(void *, const void *, u32);
void SslSha1_Final(void *, void *);
void SslSha1_Init(void *);
void SslMd5_Update(void *, const void *, u32);
void SslMd5_Final(void *, void *);
void SslMd5_Init(void *);
void SslRc4_Crypt(void *, void *, u32);
void SslRc4_Init(void *, void *, u32);
void Ssl_HandleClientHello(St *, u8 *);
void Ssl_HandleServerHello(St *, u8 *);
void Ssl_HandleCertificate(St *, u8 *);
void SslRsa_PrivateDecrypt(u8 *, u8 *, u32);
void Ssl_DeriveMasterSecret(St *);

// in range
u8 Ssl_ReadRecord(Sess *);
void Ssl_ProcessRecord(St *, u8 *);
s32 Ssl_ReadExact(u8 *, s32, Sess *);
s32 Ssl_EncryptRecord(St *, u8 *);
s32 Ssl_DecryptRecord(St *, u8 *);
s32 Ssl_DecryptInPlace(St *, u8 *, s32);
void Ssl_IncrementSeqNum(u8 *);
void Ssl_HandleFinished(St *, u8 *);
void Ssl_CalcFinishedSha1(St *, u8 *, u32);
void Ssl_CalcFinishedMd5(St *, u8 *, u32);
void Ssl_HandleClientKeyExchange(St *, u8 *);
void Ssl_DeriveKeyBlock(St *);

void Ssl_DeriveKeyBlock(St *st) {
    s32 a, b, c;
    s32 total;
    s32 i;
    s32 off;
    u8 tmp[0x1c];

    switch (st->unk_06) {
    case 4:
        a = 0x10;
        b = 0x10;
        c = 0;
        break;
    case 5:
        a = 0x14;
        b = 0x10;
        c = 0;
        break;
    }
    total = (a + b + c) * 2;
    i = 0;
    if (total > 0) {
        s32 off = 0;
        do {
            s32 j;
            void *ctx = st->unk_31c;
            SslSha1_Init(ctx);
            tmp[0] = 0x41 + i;
            j = 0;
            while (j < i + 1) {
                SslSha1_Update(ctx, tmp, 1);
                j++;
            }
            SslSha1_Update(ctx, st->unk_00 + 0x20, 0x30);
            SslSha1_Update(ctx, st->unk_28, 0x20);
            SslSha1_Update(ctx, st->unk_08, 0x20);
            SslSha1_Final(ctx, tmp + 1);
            ctx = st->unk_3d0;
            SslMd5_Init(ctx);
            SslMd5_Update(ctx, st->unk_00 + 0x20, 0x30);
            SslMd5_Update(ctx, tmp + 1, 0x14);
            SslMd5_Final(ctx, st->unk_48 + off);
            off += 0x10;
            i++;
        } while (off < total);
    }
    if (st->unk_428 != 0) {
        st->unk_1a8 = st->unk_48;
        st->unk_1ac = st->unk_1a8 + a * 2;
        st->unk_1b0 = st->unk_1ac + b * 2;
        st->unk_90 = st->unk_48 + a;
        st->unk_94 = st->unk_90 + a + b;
        st->unk_98 = st->unk_94 + b + c;
    } else {
        st->unk_90 = st->unk_48;
        st->unk_94 = st->unk_90 + a * 2;
        st->unk_98 = st->unk_94 + b * 2;
        st->unk_1a8 = st->unk_48 + a;
        st->unk_1ac = st->unk_1a8 + a + b;
        st->unk_1b0 = st->unk_1ac + b + c;
    }
    SslRc4_Init(st->unk_1b4, st->unk_1ac, 0x10);
    SslRc4_Init(st->unk_9c, st->unk_94, 0x10);
}

void Ssl_HandleClientKeyExchange(St *st, u8 *p) {
    SslRsa_PrivateDecrypt(st->unk_00 + 0x20, p, st->unk_7f0);
    Ssl_DeriveMasterSecret(st);
    Ssl_DeriveKeyBlock(st);
    st->unk_429 = 5;
}

void Ssl_CalcFinishedMd5(St *st, u8 *out, u32 who) {
    u8 pad[0x30];
    u8 *ctx = st->unk_378;

    if ((st->unk_428 ^ who) != 0) {
        SslMd5_Update(ctx, "SRVR", 4);
    } else {
        SslMd5_Update(ctx, "CLNT", 4);
    }
    SslMd5_Update(ctx, st->unk_00 + 0x20, 0x30);
    MI_CpuFill8(pad, 0x36, 0x30);
    SslMd5_Update(ctx, pad, 0x30);
    SslMd5_Final(ctx, out);
    SslMd5_Init(ctx);
    SslMd5_Update(ctx, st->unk_00 + 0x20, 0x30);
    MI_CpuFill8(pad, 0x5c, 0x30);
    SslMd5_Update(ctx, pad, 0x30);
    SslMd5_Update(ctx, out, 0x10);
    SslMd5_Final(ctx, out);
}

void Ssl_CalcFinishedSha1(St *st, u8 *out, u32 who) {
    u8 pad[0x28];
    u8 *ctx = st->unk_2c0;

    if ((st->unk_428 ^ who) != 0) {
        SslSha1_Update(ctx, "SRVR", 4);
    } else {
        SslSha1_Update(ctx, "CLNT", 4);
    }
    SslSha1_Update(ctx, st->unk_00 + 0x20, 0x30);
    MI_CpuFill8(pad, 0x36, 0x28);
    SslSha1_Update(ctx, pad, 0x28);
    SslSha1_Final(ctx, out);
    SslSha1_Init(ctx);
    SslSha1_Update(ctx, st->unk_00 + 0x20, 0x30);
    MI_CpuFill8(pad, 0x5c, 0x28);
    SslSha1_Update(ctx, pad, 0x28);
    SslSha1_Update(ctx, out, 0x14);
    SslSha1_Final(ctx, out);
}

void Ssl_HandleFinished(St *st, u8 *in) {
    u8 out[0x14];

    MI_CpuCopy8(st->unk_378, st->unk_3d0, 0x58);
    Ssl_CalcFinishedMd5(st, out, 1);
    MI_CpuCopy8(st->unk_3d0, st->unk_378, 0x58);
    if (memcmp(in, out, 0x10) != 0) {
        st->unk_429 = 9;
        return;
    }
    MI_CpuCopy8(st->unk_2c0, st->unk_31c, 0x5c);
    Ssl_CalcFinishedSha1(st, out, 1);
    MI_CpuCopy8(st->unk_31c, st->unk_2c0, 0x5c);
    if (memcmp(in + 0x10, out, 0x14) != 0) {
        st->unk_429 = 9;
        return;
    }
    st->unk_429 = 6;
}

void Ssl_IncrementSeqNum(u8 *p) {
    s32 i = 8;
    do {
        u32 v;
        p--;
        v = (u8)(*p + 1);
        *p = v;
        if (v != 0) {
            return;
        }
        i--;
    } while (i != 0);
}

s32 Ssl_DecryptInPlace(St *st, u8 *buf, s32 len) {
    SslRc4_Crypt(st->unk_1b4, buf, len);
    return len;
}

s32 Ssl_DecryptRecord(St *st, u8 *buf) {
    u8 digest[0x14];
    u8 pad[0x30];
    s32 len;
    s32 n;
    void *ctx;

    len = Ssl_DecryptInPlace(st, buf + 5, (buf[3] << 8) + buf[4]);
    switch (st->unk_06) {
    case 4:
        len -= 0x10;
        buf[3] = len >> 8;
        buf[4] = len;
        ctx = st->unk_3d0;
        SslMd5_Init(ctx);
        SslMd5_Update(ctx, st->unk_1a8, 0x10);
        MI_CpuFill8(pad, 0x36, 0x30);
        SslMd5_Update(ctx, pad, 0x30);
        SslMd5_Update(ctx, st->unk_2b8, 8);
        SslMd5_Update(ctx, buf, 1);
        SslMd5_Update(ctx, buf + 3, 2);
        SslMd5_Update(ctx, buf + 5, len);
        SslMd5_Final(ctx, digest);
        SslMd5_Init(ctx);
        SslMd5_Update(ctx, st->unk_1a8, 0x10);
        MI_CpuFill8(pad, 0x5c, 0x30);
        SslMd5_Update(ctx, pad, 0x30);
        SslMd5_Update(ctx, digest, 0x10);
        SslMd5_Final(ctx, digest);
        n = 0x10;
        break;
    case 5:
        len -= 0x14;
        buf[3] = len >> 8;
        buf[4] = len;
        ctx = st->unk_31c;
        SslSha1_Init(ctx);
        SslSha1_Update(ctx, st->unk_1a8, 0x14);
        MI_CpuFill8(pad, 0x36, 0x28);
        SslSha1_Update(ctx, pad, 0x28);
        SslSha1_Update(ctx, st->unk_2b8, 8);
        SslSha1_Update(ctx, buf, 1);
        SslSha1_Update(ctx, buf + 3, 2);
        SslSha1_Update(ctx, buf + 5, len);
        SslSha1_Final(ctx, digest);
        SslSha1_Init(ctx);
        SslSha1_Update(ctx, st->unk_1a8, 0x14);
        MI_CpuFill8(pad, 0x5c, 0x28);
        SslSha1_Update(ctx, pad, 0x28);
        SslSha1_Update(ctx, digest, 0x14);
        SslSha1_Final(ctx, digest);
        n = 0x14;
        break;
    }
    if (memcmp(buf + 5 + len, digest, n) != 0) {
        st->unk_429 = 9;
    }
    Ssl_IncrementSeqNum(st->unk_2b8 + 8);
    return len + 5;
}

s32 Ssl_EncryptRecord(St *st, u8 *buf) {
    u8 *mac = 0;
    u8 pad[0x30];
    s32 len;
    void *ctx;

    len = (buf[3] << 8) + buf[4];
    mac = buf + 5 + len;
    switch (st->unk_06) {
    case 4:
        ctx = st->unk_3d0;
        SslMd5_Init(ctx);
        SslMd5_Update(ctx, st->unk_90, 0x10);
        MI_CpuFill8(pad, 0x36, 0x30);
        SslMd5_Update(ctx, pad, 0x30);
        SslMd5_Update(ctx, st->unk_1a0, 8);
        SslMd5_Update(ctx, buf, 1);
        SslMd5_Update(ctx, buf + 3, 2);
        SslMd5_Update(ctx, buf + 5, len);
        SslMd5_Final(ctx, mac);
        SslMd5_Init(ctx);
        SslMd5_Update(ctx, st->unk_90, 0x10);
        MI_CpuFill8(pad, 0x5c, 0x30);
        SslMd5_Update(ctx, pad, 0x30);
        SslMd5_Update(ctx, mac, 0x10);
        SslMd5_Final(ctx, mac);
        len += 0x10;
        break;
    case 5:
        ctx = st->unk_31c;
        SslSha1_Init(ctx);
        SslSha1_Update(ctx, st->unk_90, 0x14);
        MI_CpuFill8(pad, 0x36, 0x28);
        SslSha1_Update(ctx, pad, 0x28);
        SslSha1_Update(ctx, st->unk_1a0, 8);
        SslSha1_Update(ctx, buf, 1);
        SslSha1_Update(ctx, buf + 3, 2);
        SslSha1_Update(ctx, buf + 5, len);
        SslSha1_Final(ctx, mac);
        SslSha1_Init(ctx);
        SslSha1_Update(ctx, st->unk_90, 0x14);
        MI_CpuFill8(pad, 0x5c, 0x28);
        SslSha1_Update(ctx, pad, 0x28);
        SslSha1_Update(ctx, mac, 0x14);
        SslSha1_Final(ctx, mac);
        len += 0x14;
        break;
    }
    buf[3] = len >> 8;
    buf[4] = len;
    SslRc4_Crypt(st->unk_9c, buf + 5, len);
    Ssl_IncrementSeqNum(st->unk_1a0 + 8);
    return len + 5;
}

s32 Ssl_ReadExact(u8 *dst, s32 n, Sess *s) {
    u32 len;
    u8 *p;
    do {
        p = Tcp_Read(&len, s);
        if (len == 0) {
            return -1;
        }
        if (len > (u32)n) {
            len = n;
        }
        MI_CpuCopy8(p, dst, len);
        Tcp_Consume(len, s);
        dst += len;
        n -= len;
    } while (n > 0);
    return 0;
}

void Ssl_ProcessRecord(St *st, u8 *buf) {
    u32 len;
    u32 type;
    u8 *p;
    s32 h;
    u32 n;
    u32 n4;

    if (st->unk_429 == 9) {
        sIpFree(buf);
        return;
    }
    type = buf[0];
    len = (buf[3] << 8) + buf[4] + 5;
    if ((((u8)(st->unk_429 + 0xf9) <= 1) && type != 0x15) || (type == 0x15 && len > 7)) {
        len = Ssl_DecryptRecord(st, buf);
    }
    p = buf + 5;
    len -= 5;
    switch (type - 0x14) {
    case 0:
        MI_CpuFill8(st->unk_2b8, 0, 8);
        st->unk_429 = 7;
        break;
    case 1:
        if (p[0] == 2) {
            st->unk_429 = 9;
        }
        break;
    case 2:
        do {
            h = p[0];
            n = p[3] + ((p[1] << 16) + (p[2] << 8));
            p += 4;
            if (h > 0xb) goto hi;
            if (h >= 0xb) goto c11;
            if (h > 2) goto dflt;
            if (h < 1) goto dflt;
            if (h == 1) goto c1;
            switch (h) { case 2: goto c2; }
            goto dflt;
        hi:
            if (h > 0x14) goto dflt;
            if (h < 0xe) goto dflt;
            if (h == 0xe) goto c14;
            if (h == 0x10) goto c16;
            switch (h) { case 0x14: goto c20; }
            goto dflt;
        c1:
            if (st->unk_428 != 0 && st->unk_429 == 0) {
                Ssl_HandleClientHello(st, p);
            }
            goto join;
        c16:
            Ssl_HandleClientKeyExchange(st, p);
            goto join;
        c2:
            Ssl_HandleServerHello(st, p);
            goto join;
        c11:
            Ssl_HandleCertificate(st, p);
            goto join;
        c14:
            st->unk_429 = 4;
            goto join;
        c20:
            Ssl_HandleFinished(st, p);
            goto join;
        dflt:
            st->unk_429 = 9;
        join:
            n4 = n + 4;
            SslSha1_Update(st->unk_2c0, p - 4, n4);
            SslMd5_Update(st->unk_378, p - 4, n4);
            p += n;
            len -= n + 4;
            if (len == 0) {
                break;
            }
        } while (st->unk_429 != 9);
        break;
    case 3:
        st->unk_7f8 = buf;
        st->unk_800 = 5;
        st->unk_7fc = len + 5;
        st->unk_42a = 1;
        return;
    default:
        st->unk_429 = 9;
        break;
    }
    sIpFree(buf);
}

u8 Ssl_ReadRecord(Sess *s) {
    St *st = s->unk_0c;
    u32 len;
    u8 *p;
    u8 *buf;

    do {
        p = Tcp_Read(&len, s);
        if (len == 0) {
            st->unk_429 = 9;
            return 9;
        }
    } while (len < 5);

    if (p[0] == 0x80) {
        if (st->unk_428 != 0 && st->unk_429 == 0) {
            len = p[1];
            Tcp_Consume(2, s);
            buf = (u8 *)sIpAlloc(len);
            if (buf == 0) {
                st->unk_429 = 9;
                return 9;
            }
            if (Ssl_ReadExact(buf, len, s) == 0 && buf[0] == 1) {
                Ssl_HandleClientHelloV2(st, buf + 1);
            } else {
                st->unk_429 = 9;
            }
            SslSha1_Update(st->unk_2c0, buf, len);
            SslMd5_Update(st->unk_378, buf, len);
            sIpFree(buf);
        } else {
            st->unk_429 = 9;
        }
    } else {
        len = ((p[3] << 8) + p[4]) + 5;
        if (len > 0x4805) {
            st->unk_429 = 9;
            return 9;
        }
        buf = (u8 *)sIpAlloc(len);
        if (buf == 0) {
            st->unk_429 = 9;
            return 9;
        }
        if (Ssl_ReadExact(buf, len, s) != 0) {
            sIpFree(buf);
            st->unk_429 = 9;
            return 9;
        }
        Ssl_ProcessRecord(st, buf);
    }
    return st->unk_429;
}
}

}

namespace Unk_ov065_02265130_Ns {


// SSL 3.0 client/server handshake helpers (overlay 065)

struct Unk_ov065_02265130_Hash {
    u8 unk_00[0x5c];
};

struct Unk_ov065_02265130_Pms {
    u8 unk_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22[0x2e];
    u8 unk_50[4];
    u32 unk_54;
    u16 unk_58;
};

struct Unk_ov065_02265130_Cert {
    u32 unk_00;
    u8 *unk_04;
};

struct Unk_ov065_02265130_Ctx {
    Unk_ov065_02265130_Pms *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[4];
    u8 unk_2c[0x1c];
    u8 pad_48[0x1a0 - 0x48];
    u8 unk_1a0[8];
    u8 pad_1a8[0x2c0 - 0x1a8];
    u8 unk_2c0[0x5c];
    u8 unk_31c[0x5c];
    u8 unk_378[0x58];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 pad_42a[0x468 - 0x42a];
    u8 unk_468[0x100];
    s32 unk_568;
    u8 unk_56c[8];
    s32 unk_574;
    u8 pad_578[0x7f4 - 0x578];
    Unk_ov065_02265130_Cert *unk_7f4;
};

struct Unk_ov065_02265130_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    Unk_ov065_02265130_Ctx *unk_0c;
    u32 unk_10;
    u32 unk_14;
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_ov065_0226599c_Rng {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
};

struct Unk_ov065_02265334_Os {
    u32 unk_00;
    u32 unk_04;
};

typedef Unk_ov065_02265130_Sess Sess;
typedef Unk_ov065_02265130_Ctx Ctx;

extern "C" {
extern void *(*sIpAlloc)(u32);
extern void (*sIpFree)(void *);
extern u32 gSslRsaThreadPriority;
extern u16 sSslCipherSuites[2];
extern Unk_ov065_0226599c_Rng sIpRandState;
extern u32 sSslSessionIdCounter;
extern u8 sSslRandPool[20];
extern u8 sSslRandSeeded;
extern Unk_ov065_02265334_Os data_021fcc2c;

// main module
u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);
s32 _s32_div_f(s32, s32);
s64 _ll_mul(s64, s64);
u32 OS_GetThreadPriority(u32);
void OS_SetThreadPriority(u32, u32);

// same overlay, out of range
s32 Tcp_Connect(Sess *);
void Tcp_Listen(Sess *);
void Tcp_Shutdown(Sess *);
u32 Tcp_Write(u8 *, u32, u8 *, u32, Sess *);
void SslSha1_Init(void *);
void SslMd5_Init(void *);
void SslMd5_Update(void *, u8 *, u32);
void SslSha1_Update(void *, u8 *, u32);
void SslSha1_Final(void *, void *);
void SslSha1_FinalRaw(void *, void *);
u32 Ssl_GetUnixTime();
u32 SslSession_FindByPeer(u32, u32);
u32 SslSession_Add(u8 *);
void Ssl_DeriveKeyBlock(Ctx *);
void Ssl_DeriveMasterSecret(Ctx *);
void Ssl_CalcFinishedMd5(Ctx *, u8 *, u32);
void Ssl_CalcFinishedSha1(Ctx *, u8 *, u32);
void SslBigNum_FromBytes(u16 *, void *, s32, s32);
void SslBigNum_ModExp(u16 *, u16 *, u16 *, s32, u16 *);
s32 Ssl_ReadRecord(Sess *);
s32 Ssl_EncryptRecord(Ctx *, u8 *);

// in range
s32 Ssl_Connect(Sess *);
s32 Ssl_ClientHandshake(Sess *);
void Ssl_Accept(Sess *);
s32 Ssl_ServerHandshake(Sess *);
s32 Ssl_WaitPeerFinished(Sess *);
void Ssl_SendClientKeyExchange(Sess *);
void Ssl_SendClientHello(Sess *);
void Ssl_SendFinished(Sess *);
s32 Ssl_SendServerHello(Sess *);
void SslRand_AddSeed(u8 *, u32);
void SslRand_GetNonZeroBytes(u8 *, s32);

void SslRand_GetNonZeroBytes(u8 *out, s32 n) {
    u32 seed;
    u8 buf[20];
    Unk_ov065_02265130_Hash h;
    s32 i;
    s32 j;
    u32 z;
    if (sSslRandSeeded == 0) {
        sIpRandState.unk_00 = sIpRandState.unk_10 + _ll_mul(sIpRandState.unk_08, sIpRandState.unk_00);
        seed = (u32)(sIpRandState.unk_00 >> 32);
        SslRand_AddSeed((u8 *)&seed, 4);
    }
    j = 0x14;
    i = 0;
    for (; i < n;) {
        if (j == 0x14) {
            u32 th;
            s32 k;
            u32 c;
            u8 *b;
            u8 *a;
            u32 v;
            SslSha1_Init(&h);
            th = OS_DisableInterrupts();
            SslSha1_Update(&h, sSslRandPool, 0x14);
            SslSha1_FinalRaw(&h, buf);
            c = 1;
            k = 0x13;
            b = buf + 0x13;
            a = sSslRandPool + 0x13;
            for (; k >= 0; k--) {
                v = *a + *b + c;
                *a = v;
                c = v >> 8;
                b--;
                a--;
            }
            seed = v;
            OS_RestoreInterrupts(th);
            j = 0;
        }
        if (buf[j] != 0) {
            out[i] = buf[j];
            i++;
        }
        j++;
    }
}

void SslRand_AddSeed(u8 *p, u32 n) {
    Unk_ov065_02265130_Hash h;
    u32 th;
    SslSha1_Init(&h);
    th = OS_DisableInterrupts();
    SslSha1_Update(&h, sSslRandPool, 0x14);
    SslSha1_Update(&h, p, n);
    SslSha1_Final(&h, sSslRandPool);
    OS_RestoreInterrupts(th);
    sSslRandSeeded = 1;
}

s32 Ssl_SendServerHello(Sess *s) {
    Ctx *ctx = s->unk_0c;
    Unk_ov065_02265130_Cert *cert = ctx->unk_7f4;
    s32 cl;
    u32 t;
    u8 *buf;
    u8 *q;
    s32 len;
    if (cert) {
        cl = cert->unk_00;
    } else {
        cl = 0;
    }
    t = Ssl_GetUnixTime();
    ctx->unk_28[0] = t >> 24;
    ctx->unk_28[1] = t >> 16;
    ctx->unk_28[2] = t >> 8;
    ctx->unk_28[3] = t;
    SslRand_GetNonZeroBytes(ctx->unk_2c, 0x1c);
    buf = (u8 *)sIpAlloc(cl + 0x9d);
    if (buf == 0) {
        ctx->unk_429 = 9;
        return 1;
    }
    q = buf + 5;
    q[0] = 2;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x46;
    q[4] = 3;
    q[5] = 0;
    MI_CpuCopy8(ctx->unk_28, q + 6, 0x20);
    q[0x26] = 0x20;
    if (ctx->unk_00) {
        MI_CpuCopy8(ctx->unk_00, q + 0x27, 0x20);
        q += 0x47;
        ctx->unk_04 = 1;
    } else {
        SslRand_GetNonZeroBytes(q + 0x27, 0x1c);
        t = sSslSessionIdCounter;
        q[0x43] = t >> 24;
        q[0x44] = t >> 16;
        q[0x45] = t >> 8;
        q += 0x46;
        *q++ = t;
        ctx->unk_00 = (Unk_ov065_02265130_Pms *)SslSession_Add(q - 0x20);
        sSslSessionIdCounter++;
        ctx->unk_04 = 0;
    }
    q[0] = ctx->unk_06 >> 8;
    q[1] = ctx->unk_06;
    q += 2;
    *q++ = 0;
    if (ctx->unk_04 == 0) {
        if (cl != 0) {
            q[0] = 0xb;
            q[1] = (cl + 6) >> 16;
            q[2] = (cl + 6) >> 8;
            q[3] = cl + 6;
            q[4] = (cl + 3) >> 16;
            q[5] = (cl + 3) >> 8;
            q[6] = cl + 3;
            q[7] = cl >> 16;
            q[8] = cl >> 8;
            q += 9;
            *q++ = cl;
            MI_CpuCopy8(cert->unk_04, q, cl);
            q += cl;
        }
        q[0] = 0xe;
        q[1] = 0;
        q[2] = 0;
        q += 3;
        *q++ = 0;
    }
    len = q - buf - 5;
    buf[0] = 0x16;
    buf[1] = 3;
    buf[2] = 0;
    buf[3] = len >> 8;
    buf[4] = len;
    SslSha1_Update(ctx->unk_2c0, buf + 5, len);
    SslMd5_Update(ctx->unk_378, buf + 5, len);
    Tcp_Write(buf, len + 5, 0, 0, s);
    sIpFree(buf);
    return ctx->unk_04;
}

void Ssl_SendFinished(Sess *s) {
    Ctx *ctx = s->unk_0c;
    u8 *b;
    b = (u8 *)sIpAlloc(0x83);
    if (b == 0) {
        ctx->unk_429 = 9;
        return;
    }
    b[0] = 0x14;
    b[1] = 3;
    b[2] = 0;
    b[3] = 0;
    b[4] = 1;
    b[5] = 1;
    MI_CpuFill8(ctx->unk_1a0, 0, 8);
    b[6] = 0x16;
    b[7] = 3;
    b[8] = 0;
    b[9] = 0;
    b[10] = 0x28;
    b[11] = 0x14;
    b[12] = 0;
    b[13] = 0;
    b[14] = 0x24;
    MI_CpuCopy8(ctx->unk_378, ctx->unk_3d0, 0x58);
    Ssl_CalcFinishedMd5(ctx, b + 0xf, 0);
    MI_CpuCopy8(ctx->unk_3d0, ctx->unk_378, 0x58);
    MI_CpuCopy8(ctx->unk_2c0, ctx->unk_31c, 0x5c);
    Ssl_CalcFinishedSha1(ctx, b + 0x1f, 0);
    MI_CpuCopy8(ctx->unk_31c, ctx->unk_2c0, 0x5c);
    SslSha1_Update(ctx->unk_2c0, b + 0xb, 0x28);
    SslMd5_Update(ctx->unk_378, b + 0xb, 0x28);
    Tcp_Write(b, Ssl_EncryptRecord(ctx, b + 6) + 6, 0, 0, s);
    sIpFree(b);
}

void Ssl_SendClientHello(Sess *s) {
    Ctx *ctx = s->unk_0c;
    u8 *buf;
    u8 *q;
    u32 t;
    s32 len;
    u32 i;
    u16 *tp;
    buf = (u8 *)sIpAlloc(0x98);
    if (buf == 0) {
        ctx->unk_429 = 9;
        return;
    }
    q = buf + 9;
    buf[9] = 3;
    q[1] = 0;
    t = Ssl_GetUnixTime();
    ctx->unk_08[0] = t >> 24;
    ctx->unk_08[1] = t >> 16;
    ctx->unk_08[2] = t >> 8;
    ctx->unk_08[3] = t;
    SslRand_GetNonZeroBytes(&ctx->unk_08[4], 0x1c);
    MI_CpuCopy8(ctx->unk_08, q + 2, 0x20);
    ctx->unk_00 = (Unk_ov065_02265130_Pms *)SslSession_FindByPeer(s->unk_1c, s->unk_18);
    if (ctx->unk_00) {
        q[0x22] = 0x20;
        MI_CpuCopy8(ctx->unk_00, q + 0x23, 0x20);
        q += 0x43;
    } else {
        q += 0x22;
        *q++ = 0;
    }
    i = 0;
    *q++ = 0;
    *q++ = 4;
    tp = sSslCipherSuites;
    for (; i < 2; i++) {
        *q++ = *tp >> 8;
        *q++ = *tp;
        tp++;
    }
    q[0] = 1;
    q[1] = 0;
    q += 2;
    len = q - buf - 5;
    buf[0] = 0x16;
    buf[1] = 3;
    buf[2] = 0;
    buf[3] = len >> 8;
    buf[4] = len;
    buf[5] = 1;
    buf[6] = (len - 4) >> 16;
    buf[7] = (len - 4) >> 8;
    buf[8] = len - 4;
    Tcp_Write(buf, len + 5, 0, 0, s);
    SslMd5_Update(ctx->unk_378, buf + 5, len);
    SslSha1_Update(ctx->unk_2c0, buf + 5, len);
    sIpFree(buf);
}

void Ssl_SendClientKeyExchange(Sess *s) {
    Ctx *ctx = s->unk_0c;
    s32 n;
    s32 cnt;
    u16 *p0;
    u16 *p1;
    u16 *p2;
    u8 *buf1;
    u16 *p3;
    u8 *buf2;
    u8 *q;
    ctx->unk_00->unk_20 = 3;
    ctx->unk_00->unk_21 = 0;
    SslRand_GetNonZeroBytes(ctx->unk_00->unk_22, 0x2e);
    n = ctx->unk_568;
    cnt = _s32_div_f(n * 2, 2);
    buf1 = (u8 *)sIpAlloc(n);
    if (buf1 == 0) {
        ctx->unk_429 = 9;
        return;
    }
    buf1[0] = 0;
    buf1[1] = 2;
    SslRand_GetNonZeroBytes(buf1 + 2, n - 0x33);
    buf1[n - 0x31] = 0;
    MI_CpuCopy8(&ctx->unk_00->unk_20, buf1 + n - 0x30, 0x30);
    p0 = (u16 *)sIpAlloc(cnt * 8);
    if (p0 == 0) {
        sIpFree(buf1);
        ctx->unk_429 = 9;
        return;
    }
    p1 = p0 + cnt;
    p2 = p1 + cnt;
    p3 = p2 + cnt;
    SslBigNum_FromBytes(p1, buf1, n, cnt);
    SslBigNum_FromBytes(p2, ctx->unk_56c, ctx->unk_574, cnt);
    SslBigNum_FromBytes(p3, ctx->unk_468, n, cnt);
    if (gSslRsaThreadPriority < 0x20) {
        u32 th = data_021fcc2c.unk_04;
        u32 pr = OS_GetThreadPriority(th);
        OS_SetThreadPriority(th, gSslRsaThreadPriority);
        SslBigNum_ModExp(p0, p1, p2, cnt, p3);
        OS_SetThreadPriority(th, pr);
    } else {
        SslBigNum_ModExp(p0, p1, p2, cnt, p3);
    }
    buf2 = (u8 *)sIpAlloc(n + 0x49);
    if (buf2 == 0) {
        sIpFree(buf1);
        sIpFree(p0);
        ctx->unk_429 = 9;
        return;
    }
    buf2[0] = 0x16;
    buf2[1] = 3;
    buf2[2] = 0;
    buf2[3] = (n + 4) >> 8;
    buf2[4] = n + 4;
    buf2[5] = 0x10;
    buf2[6] = n >> 16;
    buf2[7] = n >> 8;
    q = buf2 + 9;
    buf2[8] = n;
    if ((n & 1) != 0) {
        *q = p0[_s32_div_f(n, 2)];
        q++;
    }
    {
        s32 i;
        u16 *pp;
        i = _s32_div_f(n, 2) - 1;
        if (i >= 0) {
            pp = p0 + i;
            do {
                *q++ = *pp >> 8;
                *q++ = *pp;
                pp--;
                i--;
            } while (i >= 0);
        }
    }
    Tcp_Write(buf2, n + 9, 0, 0, s);
    SslMd5_Update(ctx->unk_378, buf2 + 5, (u32)n + 4);
    SslSha1_Update(ctx->unk_2c0, buf2 + 5, n + 4);
    sIpFree(buf2);
    sIpFree(p0);
    sIpFree(buf1);
}

s32 Ssl_WaitPeerFinished(Sess *s) {
    if (Ssl_ReadRecord(s) != 7) {
        return 1;
    }
    if (Ssl_ReadRecord(s) != 6) {
        return 1;
    }
    return 0;
}

s32 Ssl_ServerHandshake(Sess *s) {
    if (Ssl_ReadRecord(s) != 1) {
        return 1;
    }
    if (Ssl_SendServerHello(s)) {
        Ssl_DeriveKeyBlock(s->unk_0c);
        Ssl_SendFinished(s);
        if (Ssl_WaitPeerFinished(s)) {
            return 1;
        }
    } else {
        if (Ssl_ReadRecord(s) != 5) {
            return 1;
        }
        if (Ssl_WaitPeerFinished(s)) {
            return 1;
        }
        Ssl_SendFinished(s);
    }
    return 0;
}

void Ssl_Accept(Sess *s) {
    Ctx *ctx = s->unk_0c;
    for (;;) {
        Tcp_Listen(s);
        ctx->unk_429 = 0;
        ctx->unk_428 = 1;
        SslSha1_Init(ctx->unk_2c0);
        SslMd5_Init(ctx->unk_378);
        if (Ssl_ServerHandshake(s) == 0) {
            ctx->unk_429 = 8;
            return;
        }
        Tcp_Shutdown(s);
        s->unk_18 = s->unk_1a;
        s->unk_1c = s->unk_20;
    }
}

s32 Ssl_ClientHandshake(Sess *s) {
    Ctx *ctx = s->unk_0c;
    s32 r;
    Ssl_SendClientHello(s);
    do {
        r = Ssl_ReadRecord(s);
        if (r == 9) {
            return 1;
        }
    } while (r != 4 && ctx->unk_04 == 0);
    if (ctx->unk_04 != 0) {
        Ssl_DeriveKeyBlock(ctx);
        if (Ssl_WaitPeerFinished(s)) {
            return 1;
        }
        Ssl_SendFinished(s);
    } else {
        ctx->unk_00->unk_54 = s->unk_1c;
        ctx->unk_00->unk_58 = s->unk_18;
        Ssl_SendClientKeyExchange(s);
        Ssl_DeriveMasterSecret(ctx);
        Ssl_DeriveKeyBlock(ctx);
        Ssl_SendFinished(s);
        if (Ssl_WaitPeerFinished(s)) {
            return 1;
        }
    }
    ctx->unk_429 = 8;
    return 0;
}

s32 Ssl_Connect(Sess *s) {
    Ctx *ctx = s->unk_0c;
    if (s->unk_08 != 4) {
        if (Tcp_Connect(s)) {
            return 1;
        }
    }
    ctx->unk_429 = 0;
    ctx->unk_428 = 0;
    SslSha1_Init(ctx->unk_2c0);
    SslMd5_Init(ctx->unk_378);
    return Ssl_ClientHandshake(s);
}
}

}

namespace Unk_ov065_0226482c_Ns {


// ov065_009: socket/SSL library: checksum, init, record send/receive buffering (0x0226482c..0x02265074)

struct Unk_ov065_02264a48_Cfg {
    u32 unk_00;
    void *(*unk_04)(u32);
    void (*unk_08)(void *);
    s32 (*unk_0c)(void);
    s32 (*unk_10)(void);
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02264a48_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_02264c44_Ent {
    u8 unk_00[4];
    u16 unk_04;
    u8 unk_06[0x2e];
    void *unk_34;
};

struct Unk_ov065_02264c44_Sub {
    void *unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov065_02264c44_Thr {
    u8 unk_00[0x68];
    Unk_ov065_02264c44_Thr *unk_68;
    u8 unk_6c[0x38];
    Unk_ov065_02264c44_Sub *unk_a4;
};

struct Unk_ov065_02264c44_Info {
    u32 unk_00;
    Unk_ov065_02264c44_Thr *unk_04;
    Unk_ov065_02264c44_Thr *unk_08;
};

struct Unk_ov065_02264d24_Ent {
    u8 unk_00[0x50];
    s32 unk_50;
    u8 unk_54[6];
    u8 unk_5a;
    u8 unk_5b;
};

struct Unk_ov065_02264d80_Conn {
    u8 unk_000[0x2c0];
    u8 unk_2c0[0xb8];
    u8 unk_378[0xb0];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x3cd];
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02264d80_Obj {
    u8 unk_00[8];
    u8 unk_08;
    u8 unk_09[3];
    Unk_ov065_02264d80_Conn *unk_0c;
    u8 unk_10[0x34];
    u32 unk_44;
};

extern "C" {
extern u32 sGateway;
extern u32 sNetmask;
extern u32 gOwnIp;
extern u32 sIpThreadPriority;
extern u8 sIpRecvThread[];
extern u8 sIpTimerThread[];
extern u32 sRecvRingWaiter;
extern u32 sRecvRingBuf;
extern u32 sRecvRingSize;
extern void (*sIpIdleCallback)(void);
extern u32 sIpTimerStopRequest;
extern u32 sIpStackStatus;
extern u32 sDnsServers[2];
extern u32 sDhcpServerId;
extern u8 sArpCache[];
extern Unk_ov065_02264c44_Info data_021fcc2c;
extern Unk_ov065_02264c44_Ent sIpFragTable[8];
extern void (*sIpFree)(void *);
extern u32 sIpYieldMode;
extern Unk_ov065_02264d24_Ent sSslSessionCache[4];
extern void *(*sIpAlloc)(u32);
extern void *(*sAddrConfiguredCallback)(void);
extern s32 (*sIpLinkCheckCallback)(void);
extern u32 sIpStackFlags;
extern u16 sMss;
extern u32 sDhcpRequestedIp;
extern u32 sRecvRingRead;
extern u32 sRecvRingWrite;
extern u16 sNextEphemeralPort;
extern u8 sOwnMac[];
extern u8 sArpConflict;
extern Unk_ov065_02264a48_Rng sIpRandState;
extern u8 sSslRandSeeded[];
extern u8 sIpRecvThreadStack[];

void IpStack_RecvThreadMain(void);
void IpStack_TimerThreadMain(void);
u32 Ssl_EncryptRecord(void *, void *);
u32 Tcp_Write(void *, u32, u32, u32, Unk_ov065_02264d80_Obj *);
u8 *Tcp_Read(u32 *, Unk_ov065_02264d80_Obj *);
void Tcp_Consume(u32, Unk_ov065_02264d80_Obj *);
void Ssl_ProcessRecord(void *, void *);
s32 Ssl_ReadExact(void *, u32, Unk_ov065_02264d80_Obj *);
s32 Ssl_ReadRecord(Unk_ov065_02264d80_Obj *);

u64 OS_GetTick(void);
u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void func_02000b44(u32);
void OS_SetThreadPriority(void *, u32);
void OS_JoinThread(void *);
void OS_DestroyThread(void *);
s32 OS_IsThreadTerminated(void *);
void OS_WakeupThreadDirect(void *);
void OS_YieldThread(void);
void OS_Sleep(void);
void OS_CreateThread(void *, void *, u32, void *, u32, u32);
void OS_GetMacAddress(void *);
void *MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(void *, void *, u32);

u32 Ip_ChecksumAdd(u8 *p, u32 len, u32 sum);
s32 Ip_IsOnLocalNet(u32 a);
void IpStack_ResetAddress(u32 a);
s32 IpStack_RequestStop(void);
void Ssl_ClearSessionCache(void);
void Ssl_ReceiveRecordPart(Unk_ov065_02264d80_Obj *o);
s32 IpStack_ReturnTrue(void);
void IpStack_Nop(void);
}

extern "C" {

u8 *Ssl_Read(u32 *out, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    u8 **pb;
    if (c->unk_7f8 != 0 && c->unk_42a == 0) {
        if (Ssl_ReadExact(c->unk_7f8 + c->unk_800, c->unk_7fc - c->unk_800, o) != 0) {
            sIpFree(c->unk_7f8);
            c->unk_7f8 = 0;
            *out = 0;
            return 0;
        }
        Ssl_ProcessRecord(c, c->unk_7f8);
        if (c->unk_42a == 0) {
            c->unk_7f8 = 0;
        }
    }
    pb = &c->unk_7f8;
    if (*pb == 0) {
        do {
            if (Ssl_ReadRecord(o) == 9) {
                *out = 0;
                return 0;
            }
        } while (*pb == 0);
    }
    *out = c->unk_7fc - c->unk_800;
    return c->unk_7f8 + c->unk_800;
}

void Ssl_Consume(u32 n, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (n >= c->unk_7fc - c->unk_800) {
        if (c->unk_7f8 != 0) {
            sIpFree(c->unk_7f8);
        }
        c->unk_7f8 = 0;
    } else {
        c->unk_800 += n;
    }
}

void Ssl_ReceiveRecordPart(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    u32 len;
    u8 *src;
    BOOL flag;
    if (c->unk_7f8 == 0) {
        if (o->unk_44 < 5) {
            return;
        }
        src = Tcp_Read(&len, o);
        len = (src[3] << 8) + src[4] + 5;
        if (len > 0x4805) {
            c->unk_429 = 9;
            return;
        }
        c->unk_7f8 = (u8 *)sIpAlloc(len);
        if (c->unk_7f8 == 0) {
            c->unk_429 = 9;
            return;
        }
        c->unk_7fc = len;
        c->unk_800 = 0;
        c->unk_42a = 0;
    } else {
        if (o->unk_44 == 0) {
            return;
        }
    }
    src = Tcp_Read(&len, o);
    {
        u32 avail = c->unk_7fc - c->unk_800;
        if (len >= avail) {
            len = avail;
            flag = TRUE;
        } else {
            flag = FALSE;
        }
    }
    MI_CpuCopy8(src, c->unk_7f8 + c->unk_800, len);
    Tcp_Consume(len, o);
    if (flag) {
        Ssl_ProcessRecord(c, c->unk_7f8);
        if (c->unk_42a != 0) {
            return;
        }
        c->unk_7f8 = 0;
        return;
    }
    c->unk_800 += len;
    return;
}

s32 Ssl_GetReadLength(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (c->unk_7f8 == 0 || c->unk_42a == 0) {
        Ssl_ReceiveRecordPart(o);
    }
    if (c->unk_7f8 != 0 && c->unk_42a != 0) {
        return c->unk_7fc - c->unk_800;
    }
    if (c->unk_7f8 == 0) {
        if (o->unk_08 != 4 || c->unk_429 == 9) {
            return -1;
        }
    }
    return 0;
}

u32 Ssl_Write(u8 *p1, u32 n1, u8 *p2, u32 n2, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    s32 total = n1 + n2;
    u32 c2;
    u32 sent = 0;
    u32 z1 = 0, z2 = 0, z3 = 0;
    u8 *rec;
    s32 chunk;
    for (;;) {
        u32 c1, len;
        if (total > 0xb4f) {
            chunk = 0xb4f;
        } else {
            chunk = total;
        }
        rec = (u8 *)sIpAlloc(chunk + 0x19);
        if (rec == 0) {
            break;
        }
        c1 = n1 >= chunk ? chunk : n1;
        c2 = chunk - c1;
        MI_CpuCopy8(p1, rec + 5, c1);
        p1 += c1;
        n1 -= c1;
        MI_CpuCopy8(p2, rec + 5 + c1, c2);
        p2 += c2;
        rec[0] = 0x17;
        rec[1] = 3;
        rec[2] = z1;
        rec[3] = chunk >> 8;
        rec[4] = chunk;
        len = Ssl_EncryptRecord(c, rec);
        if (Tcp_Write(rec, len, z2, z2, o) < len) {
            chunk = z3;
        }
        sIpFree(rec);
        total -= chunk;
        sent += chunk;
        if (total == 0) {
            break;
        }
        if (chunk == 0) {
            break;
        }
    }
    return sent;
}

void Ssl_Shutdown(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (c->unk_429 == 8) {
        u8 b[32];
        u32 n;
        b[0] = 0x15;
        b[1] = 3;
        b[2] = 0;
        b[3] = 0;
        b[4] = 2;
        b[5] = 1;
        b[6] = 0;
        n = Ssl_EncryptRecord(c, b);
        Tcp_Write(b, n, 0, 0, o);
    }
    c->unk_429 = 0;
}

void Ssl_EnableOnCurrentSocket(u32 v) {
    func_02000b44(0x2000c14);
    Unk_ov065_02264c44_Sub *s = ((Unk_ov065_02264c44_Thr *)data_021fcc2c.unk_04)->unk_a4;
    if (s != 0) {
        s->unk_09 = v;
    }
}

void Ssl_ExpireSessions(s32 now) {
    s32 i;
    Unk_ov065_02264d24_Ent *e;
    for (i = 0, e = sSslSessionCache; i < 4; e++, i++) {
        if (e->unk_5a != 0) {
            if (now - e->unk_50 > 0xef) {
                e->unk_5a = 0;
            }
        }
    }
}

void Ssl_ClearSessionCache(void) {
    MI_CpuFill8(sSslSessionCache, 0, 0x170);
}
}

}

extern "C" u8 sSslNoSession[0x5c] = {0};
extern "C" u8 sSslRandPool[0x14] = {0};
extern "C" u32 sSslSessionIdCounter = 0;
extern "C" u8 sSslOidNone[4] = {0xff, 0xff, 0xff, 0};
extern "C" u8 sSslOidCommonName[4] = {0x55, 4, 3, 0};
extern "C" u32 gSslRsaThreadPriority = 0xffffffff;
extern "C" u16 sSslCipherSuites[2] = {4, 5};
extern "C" u8 sSslOidRsaX500[8] = {0x55, 8, 1, 1, 0, 0, 0, 0};
extern "C" u8 sSslOidRsaEncryption[12] = {0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 1, 1, 1, 0, 0, 0};
extern "C" u8 sSslOidMd5WithRsa[12] = {0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 1, 1, 4, 0, 0, 0};
extern "C" u8 sSslRandSeeded = 0;
extern "C" u8 sSslOidSha1WithRsa[12] = {0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 1, 1, 5, 0, 0, 0};
extern "C" char *sSslCertOidTable[6] = {(char *)sSslOidNone, (char *)sSslOidRsaEncryption, (char *)sSslOidRsaX500, (char *)sSslOidMd5WithRsa, (char *)sSslOidSha1WithRsa, (char *)sSslOidCommonName};
