// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU46: GP gpiOperation.c (0x02280740..0x02280c08)

namespace Na {
// ov065_054: 0x022804b8..0x02280d70

struct Unk_ov065_022804b8_Src {
    char *unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
    s32 unk_18;
    char unk_1c[0xb];
    char unk_27[3];
    s32 unk_2c;
    s32 unk_30;
    char unk_34[0x80];
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    char *unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    s32 unk_d4;
    s32 unk_d8;
    s32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
};

struct Unk_ov065_022804b8_Dst {
    u8 pad_00[8];
    char unk_08[0x1f];
    char unk_27[0x15];
    char unk_3c[0x33];
    char unk_6f[0x1f];
    char unk_8e[0x1f];
    char unk_ad[0x4c];
    s32 unk_fc;
    char unk_100[0xb];
    char unk_10b[3];
    s32 unk_110;
    s32 unk_114;
    char unk_118[0x80];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    s32 unk_1a4;
    s32 unk_1a8;
    char unk_1ac[0x33];
    u8 pad_1df[1];
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    s32 unk_1ec;
    s32 unk_1f0;
    s32 unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
};

struct Unk_ov065_02280854_Node {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02280854_Node *unk_20;
};

struct Unk_ov065_02280854_Ctx {
    u8 pad_000[0x20c];
    s32 unk_20c;
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[8];
    Unk_ov065_02280854_Node *unk_424;
};

struct Unk_ov065_02280854_H {
    Unk_ov065_02280854_Ctx *unk_00;
};

struct Unk_ov065_0228094c_Sub {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0xc];
    char *unk_18;
};

struct Unk_ov065_02280a2c_Ctx {
    u8 pad_000[0x1a0];
    s32 unk_1a0;
    u8 pad_1a4[0x418 - 0x1a4];
    s32 unk_418;
};

struct Unk_ov065_02280a2c_M0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
};

struct Unk_ov065_02280c08_Node {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x38 - 0x14];
    s32 unk_38;
};

struct Unk_ov065_02280a2c_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02280a2c_Wrap {
    Unk_ov065_02280a2c_Pair p;
};

extern "C" {
void GsUtil_StrCopyN(void *, const void *, s32);
void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
s32 GsGp_ProcessConnectReply(void *, void *, char *);
s32 GsGp_ProcessNewProfileReply(void *, void *, char *);
s32 GsGp_ProcessProfileReply(void *, void *, char *);
s32 GsGp_ProcessRnReply(void *, void *, char *);
s32 GsSock_Shutdown(s32, s32);
s32 GsSock_Close(s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(u32);
s32 GsGp_QueueCallback(void *, Unk_ov065_02280a2c_Pair, void *, void *, s32);
s32 func_0212899c(void *, s32, u32);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 GsGpPeer_SendString(void *, void *, const char *);
s32 GsGpPeer_Send(void *, void *, const char *, s32);
s32 GsGpPeer_SendChar(void *, void *, s32);
s32 GsUtil_GetTimeSeconds(s32);
s32 GsGpBuf_AppendString(void *, void *, const char *);
s32 GsGpBuf_AppendInt(void *, void *, s32);
s32 GsGpBuf_Append(void *, void *, const char *, s32);
s32 GsGpBuf_AppendChar(void *, void *, s32);
void GsArray_Append(void *, void *);
s32 GsGpProfile_Find(void *, s32, void *);
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_SetBlocking(s32, s32);
void GsGpPeer_SetSocketBuffers(s32);
s32 GsSock_Connect(s32, void *, s32);
s32 GsSock_GetLastError(s32);
void GsGp_CallErrorCallback(void *, s32, s32);

extern char data_ov065_0228d884[];
extern char data_ov065_0228d8ec[];
extern char data_ov065_0228d8f0[];
extern char data_ov065_0228d900[];
extern char data_ov065_0228d914[];
extern char data_ov065_0228d918[];
extern char data_ov065_0228d920[];
extern char data_ov065_0228d928[];
extern char data_ov065_0228d944[];
extern char data_ov065_0228d96c[];
extern char data_ov065_0228d9a0[];


s32 GsGp_IsValidDate(s32 day, s32 mon, s32 year);






void GsGp_FreeOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n);




// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_02280a2c_Z { Unk_ov065_02280a2c_Z_0 = 0, Unk_ov065_02280a2c_Z_FF = 0xff };
#pragma enumsalwaysint reset



struct Unk_ov065_02280c84_Src {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};


struct Unk_ov065_02280cb4_T {
    s32 v[6];
};


struct Unk_ov065_02280d70_P2 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_02280d70_P1 {
    u8 pad_00[8];
    Unk_ov065_02280d70_P2 *unk_08;
};

struct Unk_ov065_02280d70_Sa {
    s32 unk_00;
    s32 unk_04;
};

}
extern "C" {
s32 GsGp_IsValidDate(s32 day, s32 mon, s32 year);
s32 gpiProcessOperation(void *h, Unk_ov065_02280854_Node *n, char *x);
s32 GsGp_HasBlockingOperation(Unk_ov065_02280854_H *h);
s32 GsGp_FindOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node **out, s32 id);
void GsGp_RemoveOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n);
void GsGp_FreeOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n);
s32 GsGp_AddOperation(Unk_ov065_02280854_H *h, s32 a, s32 b, Unk_ov065_02280854_Node **out, s32 e, s32 f, s32 g);
s32 GsGp_CallFailedCallback(void *h, Unk_ov065_02280854_Node *n);
}
}

namespace Na {
extern "C" {
s32 GsGp_CallFailedCallback(void *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280a2c_Ctx *c = *(Unk_ov065_02280a2c_Ctx **)h;
    Unk_ov065_02280a2c_Wrap w;
    s32 r;
    w = *(Unk_ov065_02280a2c_Wrap *)&n->unk_0c;
    if (w.p.unk_00 != 0) {
        {
            switch (n->unk_00) {
            case 0: {
                Unk_ov065_02280a2c_M0 *m = (Unk_ov065_02280a2c_M0 *)GsUtil_Alloc(0x20);
                if (m == 0) {
                    GsGp_SetErrorString(h, "Out of memory.");
                    return 1;
                }
                func_0212899c(m, 0, 0x20);
                m->unk_00 = n->unk_1c;
                if (c->unk_418 == 0x201) {
                    m->unk_04 = c->unk_1a0;
                    c->unk_1a0 = 0;
                }
                r = GsGp_QueueCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 1: {
                u8 *m = (u8 *)GsUtil_Alloc(8);
                if (m == 0) {
                    GsGp_SetErrorString(h, "Out of memory.");
                    return 1;
                }
                m[0] = 0;
                m[1] = 0;
                m[2] = 0;
                m[3] = 0;
                m[4] = 0;
                m[5] = 0;
                m[6] = 0;
                m[7] = 0;
                *(s32 *)m = n->unk_1c;
                r = GsGp_QueueCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 2: {
                void *m = GsUtil_Alloc(0x204);
                if (m == 0) {
                    GsGp_SetErrorString(h, "Out of memory.");
                    return 1;
                }
                func_0212899c(m, 0, 0x204);
                *(s32 *)m = n->unk_1c;
                r = GsGp_QueueCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 3: {
                u8 *m = (u8 *)GsUtil_Alloc(0x10);
                u8 *q;
                u8 *k;
                Unk_ov065_02280a2c_Z z;
                if (m == 0) {
                    GsGp_SetErrorString(h, "Out of memory.");
                    return 1;
                }
                q = m;
                k = (u8 *)0x10;
                z = Unk_ov065_02280a2c_Z_0;
                do {
                    *q++ = z;
                    k--;
                } while (k != 0);
                *(s32 *)m = n->unk_1c;
                *(s32 *)(m + 0xc) = 0;
                r = GsGp_QueueCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 4: {
                u8 *m = (u8 *)GsUtil_Alloc(4);
                if (m == 0) {
                    GsGp_SetErrorString(h, "Out of memory.");
                    return 1;
                }
                m[0] = 0;
                m[1] = 0;
                m[2] = 0;
                m[3] = 0;
                *(s32 *)m = n->unk_1c;
                r = GsGp_QueueCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            }
        }
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_AddOperation(Unk_ov065_02280854_H *h, s32 a, s32 b, Unk_ov065_02280854_Node **out, s32 e, s32 f, s32 g) {
    Unk_ov065_02280854_Ctx *c = h->unk_00;
    Unk_ov065_02280854_Node *n = (Unk_ov065_02280854_Node *)GsUtil_Alloc(0x24);
    if (n == 0) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    n->unk_00 = a;
    n->unk_04 = b;
    n->unk_08 = e;
    n->unk_14 = 0;
    if (a == 0) {
        n->unk_18 = 1;
    } else {
        s32 t = c->unk_20c++;
        n->unk_18 = t;
        if (c->unk_20c < 2) {
            c->unk_20c = 2;
        }
    }
    n->unk_1c = 0;
    n->unk_0c = f;
    n->unk_10 = g;
    n->unk_20 = c->unk_424;
    c->unk_424 = n;
    *out = n;
    return 0;
}
}
}

namespace Na {
extern "C" {
void GsGp_FreeOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280854_Ctx *c = h->unk_00;
    if (n->unk_00 == 3) {
        Unk_ov065_0228094c_Sub *s = (Unk_ov065_0228094c_Sub *)n->unk_04;
        c->unk_210--;
        GsSock_Shutdown(s->unk_04, 2);
        GsSock_Close(s->unk_04);
        GsUtil_Free(s->unk_18);
        s->unk_18 = 0;
        GsUtil_Free(s->unk_08);
        s->unk_08 = 0;
    }
    GsUtil_Free((void *)n->unk_04);
    n->unk_04 = 0;
    GsUtil_Free(n);
}
}
}

namespace Na {
extern "C" {
void GsGp_RemoveOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280854_Ctx *c = h->unk_00;
    Unk_ov065_02280854_Node *p = c->unk_424;
    Unk_ov065_02280854_Node *prev = 0;
    for (; p; prev = p, p = p->unk_20) {
        if (p == n) {
            if (prev == 0) {
                c->unk_424 = p->unk_20;
            } else {
                prev->unk_20 = n->unk_20;
            }
            GsGp_FreeOperation(h, n);
            return;
        }
    }
}
}
}

namespace Na {
extern "C" {
s32 GsGp_FindOperation(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node **out, s32 id) {
    Unk_ov065_02280854_Node *n = h->unk_00->unk_424;
    for (; n; n = n->unk_20) {
        if (n->unk_18 == id) {
            if (out) {
                *out = n;
            }
            return 1;
        }
    }
    if (out) {
        *out = 0;
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_HasBlockingOperation(Unk_ov065_02280854_H *h) {
    Unk_ov065_02280854_Node *n = h->unk_00->unk_424;
    for (; n; n = n->unk_20) {
        if (n->unk_08 != 0 && n->unk_00 != 3) {
            return 1;
        }
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 gpiProcessOperation(void *h, Unk_ov065_02280854_Node *n, char *x) {
    s32 r = 0;
    s32 t = n->unk_00;
    switch (t) {
    case 0:
        r = GsGp_ProcessConnectReply(h, n, x);
        break;
    case 1:
        r = GsGp_ProcessNewProfileReply(h, n, x);
        break;
    case 2:
        r = GsGp_ProcessProfileReply(h, n, x);
        break;
    case 4:
        r = GsGp_ProcessRnReply(h, n, x);
        break;
    default:
        GsGp_DebugLog(h, "gpiProcessOperation was passed an operation with an invalid type (%d)\n", t);
        break;
    }
    if (r != 0) {
        n->unk_1c = r;
    }
    return r;
}
}
}

namespace Na {
extern "C" {
s32 GsGp_IsValidDate(s32 day, s32 mon, s32 year) {
    if (day == 0 && mon == 0 && year == 0) {
        return 1;
    }
    if (day < 0 || mon < 0 || year < 0) {
        return 0;
    }
    switch (mon) {
    case 0:
        if (day != 0) {
            return 0;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31) {
            return 0;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30) {
            return 0;
        }
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day > 29) {
                return 0;
            }
        } else {
            if (day > 28) {
                return 0;
            }
        }
        break;
    default:
        return 0;
    }
    if (year < 0x76c) {
        return 0;
    }
    if (year > 0x81f) {
        return 0;
    }
    if (year == 0x81f) {
        if (mon > 6) {
            return 0;
        }
        if (mon == 6) {
            if (day > 6) {
                return 0;
            }
        }
    }
    return 1;
}
}
}
