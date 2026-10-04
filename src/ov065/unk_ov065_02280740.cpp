// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/gpiInfo.h"
#include "net/Unk_ov065_02280854_Ctx.h"
#include "net/gpiSearch.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/gpi.h"
#include "net/gp.h"
#include "net/gpiPeer.h"
#include "net/gpiTransfer.h"
#include "net/Unk_ov065_02280d70_P1.h"

// ov065 TU46: GP gpiOperation.c (0x02280740..0x02280c08)

namespace Na {
// ov065_054: 0x022804b8..0x02280d70












extern "C" {
void strzcpy(void *, const void *, s32);
void gpiSetErrorString(void *, const char *);
void gpiSetError(void *, s32, const char *);
void gpiDebug(void *, const char *, ...);
s32 gpiProcessConnect(void *, void *, char *);
s32 gpiProcessNewProfile(void *, void *, char *);
s32 gpiProcessGetInfo(void *, void *, char *);
s32 gpiProcessRegisterUniqueNick(void *, void *, char *);
s32 shutdown(s32, s32);
s32 closesocket(s32);
void GsUtil_Free(void *);
void *GsUtil_Alloc(u32);
s32 gpiAddCallback(void *, GPICallback, void *, void *, s32);
s32 memset(void *, s32, u32);
s32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 gpiSendOrBufferString(void *, void *, const char *);
s32 gpiSendOrBufferStringLen(void *, void *, const char *, s32);
s32 gpiSendOrBufferChar(void *, void *, s32);
s32 time(s32);
s32 gpiAppendStringToBuffer(void *, void *, const char *);
s32 gpiAppendIntToBuffer(void *, void *, s32);
s32 gpiAppendStringToBufferLen(void *, void *, const char *, s32);
s32 gpiAppendCharToBuffer(void *, void *, s32);
void ArrayAppend(void *, void *);
s32 gpiGetProfile(void *, s32, void *);
s32 socket(s32, s32, s32);
s32 SetSockBlocking(s32, s32);
void GsGpPeer_SetSocketBuffers(s32);
s32 connect(s32, void *, s32);
s32 GOAGetLastError(s32);
void gpiCallErrorCallback(void *, s32, s32);

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


s32 gpiIsValidDate(s32 day, s32 mon, s32 year);






void gpiDestroyOperation(Unk_ov065_02280854_H *h, GPIOperation *n);




// byte-sized unsigned enum: an enum-typed zero is not constant-folded/shared with later zeros
#pragma enumsalwaysint off
enum Unk_ov065_02280a2c_Z { Unk_ov065_02280a2c_Z_0 = 0, Unk_ov065_02280a2c_Z_FF = 0xff };
#pragma enumsalwaysint reset










}
extern "C" {
s32 gpiIsValidDate(s32 day, s32 mon, s32 year);
s32 gpiProcessOperation(void *h, GPIOperation *n, char *x);
s32 gpiOperationsAreBlocking(Unk_ov065_02280854_H *h);
s32 gpiFindOperationByID(Unk_ov065_02280854_H *h, GPIOperation **out, s32 id);
void gpiRemoveOperation(Unk_ov065_02280854_H *h, GPIOperation *n);
void gpiDestroyOperation(Unk_ov065_02280854_H *h, GPIOperation *n);
s32 gpiAddOperation(Unk_ov065_02280854_H *h, s32 a, void *b, GPIOperation **out, s32 e, s32 f, s32 g);
s32 gpiFailedOpCallback(void *h, GPIOperation *n);
}
}

namespace Na {
extern "C" {
s32 gpiFailedOpCallback(void *h, GPIOperation *n) {
    GPIConnection *c = *(GPIConnection **)h;
    Unk_ov065_0227e0e8_Wrap w;
    s32 r;
    w = n->callback;
    if (w.p.callback != 0) {
        {
            switch (n->type) {
            case 0: {
                GPConnectResponseArg *m = (GPConnectResponseArg *)GsUtil_Alloc(0x20);
                if (m == 0) {
                    gpiSetErrorString(h, "Out of memory.");
                    return 1;
                }
                memset(m, 0, 0x20);
                m->result = n->result;
                if (c->errorCode == 0x201) {
                    m->profile = c->profileid;
                    c->profileid = 0;
                }
                r = gpiAddCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 1: {
                u8 *m = (u8 *)GsUtil_Alloc(8);
                if (m == 0) {
                    gpiSetErrorString(h, "Out of memory.");
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
                *(s32 *)m = n->result;
                r = gpiAddCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 2: {
                void *m = GsUtil_Alloc(0x204);
                if (m == 0) {
                    gpiSetErrorString(h, "Out of memory.");
                    return 1;
                }
                memset(m, 0, 0x204);
                *(s32 *)m = n->result;
                r = gpiAddCallback(h, w.p, m, n, 0);
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
                    gpiSetErrorString(h, "Out of memory.");
                    return 1;
                }
                q = m;
                k = (u8 *)0x10;
                z = Unk_ov065_02280a2c_Z_0;
                do {
                    *q++ = z;
                    k--;
                } while (k != 0);
                *(s32 *)m = n->result;
                *(s32 *)(m + 0xc) = 0;
                r = gpiAddCallback(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 4: {
                u8 *m = (u8 *)GsUtil_Alloc(4);
                if (m == 0) {
                    gpiSetErrorString(h, "Out of memory.");
                    return 1;
                }
                m[0] = 0;
                m[1] = 0;
                m[2] = 0;
                m[3] = 0;
                *(s32 *)m = n->result;
                r = gpiAddCallback(h, w.p, m, n, 0);
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
s32 gpiAddOperation(Unk_ov065_02280854_H *h, s32 a, void *b, GPIOperation **out, s32 e, s32 f, s32 g) {
    Unk_ov065_02280854_Ctx *c = h->connection;
    GPIOperation *n = (GPIOperation *)GsUtil_Alloc(0x24);
    if (n == 0) {
        gpiSetErrorString(h, "Out of memory.");
        return 1;
    }
    n->type = a;
    n->data = b;
    n->blocking = e;
    n->state = 0;
    if (a == 0) {
        n->id = 1;
    } else {
        s32 t = c->nextOperationId++;
        n->id = t;
        if (c->nextOperationId < 2) {
            c->nextOperationId = 2;
        }
    }
    n->result = 0;
    n->callback.p.callback = f;
    n->callback.p.param = g;
    n->pnext = c->operationList;
    c->operationList = n;
    *out = n;
    return 0;
}
}
}

namespace Na {
extern "C" {
void gpiDestroyOperation(Unk_ov065_02280854_H *h, GPIOperation *n) {
    Unk_ov065_02280854_Ctx *c = h->connection;
    if (n->type == 3) {
        GPISearchData *s = (GPISearchData *)n->data;
        c->numSearches--;
        shutdown(s->sock, 2);
        closesocket(s->sock);
        GsUtil_Free(s->outputBuffer);
        s->outputBuffer = 0;
        GsUtil_Free(s->inputBuffer);
        s->inputBuffer = 0;
    }
    GsUtil_Free((void *)n->data);
    n->data = 0;
    GsUtil_Free(n);
}
}
}

namespace Na {
extern "C" {
void gpiRemoveOperation(Unk_ov065_02280854_H *h, GPIOperation *n) {
    Unk_ov065_02280854_Ctx *c = h->connection;
    GPIOperation *p = c->operationList;
    GPIOperation *prev = 0;
    for (; p; prev = p, p = p->pnext) {
        if (p == n) {
            if (prev == 0) {
                c->operationList = p->pnext;
            } else {
                prev->pnext = n->pnext;
            }
            gpiDestroyOperation(h, n);
            return;
        }
    }
}
}
}

namespace Na {
extern "C" {
s32 gpiFindOperationByID(Unk_ov065_02280854_H *h, GPIOperation **out, s32 id) {
    GPIOperation *n = h->connection->operationList;
    for (; n; n = n->pnext) {
        if (n->id == id) {
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
s32 gpiOperationsAreBlocking(Unk_ov065_02280854_H *h) {
    GPIOperation *n = h->connection->operationList;
    for (; n; n = n->pnext) {
        if (n->blocking != 0 && n->type != 3) {
            return 1;
        }
    }
    return 0;
}
}
}

namespace Na {
extern "C" {
s32 gpiProcessOperation(void *h, GPIOperation *n, char *x) {
    s32 r = 0;
    s32 t = n->type;
    switch (t) {
    case 0:
        r = gpiProcessConnect(h, n, x);
        break;
    case 1:
        r = gpiProcessNewProfile(h, n, x);
        break;
    case 2:
        r = gpiProcessGetInfo(h, n, x);
        break;
    case 4:
        r = gpiProcessRegisterUniqueNick(h, n, x);
        break;
    default:
        gpiDebug(h, "gpiProcessOperation was passed an operation with an invalid type (%d)\n", t);
        break;
    }
    if (r != 0) {
        n->result = r;
    }
    return r;
}
}
}

namespace Na {
extern "C" {
s32 gpiIsValidDate(s32 day, s32 mon, s32 year) {
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
