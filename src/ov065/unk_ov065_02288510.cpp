// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065_066: GameSpy transport (RC4-like cipher, connection manager) 0x022884fc..0x02288df0

struct Unk_ov065_02288538_Cipher {
    u8 s[0x100];
    u8 i;
    u8 j;
    u8 k;
    u8 l;
    u8 m;
};

struct Unk_ov065_02288b60_Sa {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02288b60_Ent {
    u32 addr;
    u16 port;
    u16 pad_06;
    u32 addr2;
    u16 port2;
    u16 pad_0e;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u16 pad_16;
    void *unk_18;
    u32 unk_1c;
    Unk_ov065_02288b60_Ent *next;
};

struct Unk_ov065_02288c78_List {
    Unk_ov065_02288b60_Ent *head;
    Unk_ov065_02288b60_Ent *tail;
    s32 count;
};

struct Unk_ov065_02288b60_Mgr;
typedef void (*Unk_ov065_02288b60_Cb)(Unk_ov065_02288b60_Mgr *m, s32 code, void *arg, void *user);

struct Unk_ov065_02288b60_Mgr {
    s32 mode;
    s32 max;
    Unk_ov065_02288c78_List active;
    Unk_ov065_02288c78_List pending;
    s32 sock;
    s32 sock2;
    u32 unk_28;
    u8 key[0x14];
    s32 keycount;
    Unk_ov065_02288b60_Cb cb;
    void *user;
};

struct Unk_ov065_02288b60_Buf13 {
    u8 b[13];
};

struct Unk_ov065_02288b60_Buf8 {
    u8 b[8];
};

extern "C" {
extern u32 gGsKeyNames[];
extern s32 sGsAvailStatus;
extern u8 data_0213a410[];

u32 func_0213335c(u32 a, u32 b);
s32 func_02129f1c(void *a, void *b);
s32 func_02130b04(void *a, void *b);

u32 GsUtil_GetTimeMs(void);
void GsSock_StartupStub(void);
s32 GsSock_CanRead(s32 s);
s32 GsSock_RecvFrom(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 *salen);
s32 GsSock_SendTo(s32 s, void *buf, s32 len, u32 flags, void *sa, s32 salen);
s32 GsSock_Close(s32 s);
s32 GsSock_Socket(s32 a, s32 b, s32 c);
void *GsUtil_Alloc(u32 n);
void GsUtil_Free(void *p);
void *GsHash_NewEx(s32 a, s32 b, s32 c, void *cmp, void *hash, void *free);
s32 GsUtil_StrSizeInBuffer(u8 *buf, s32 n);
void GsStrPool_Release(s32 a, void *p);
void GsServer_SetStringValue(void *e, u32 v, u8 *buf);
void GsServer_ParseQr2Reply(void *e, u8 *buf, s32 n);
void GsServer_ParseQr1Reply(void *e, u8 *buf);
}

typedef Unk_ov065_02288538_Cipher Cipher;
typedef Unk_ov065_02288b60_Mgr Mgr;
typedef Unk_ov065_02288b60_Ent Ent;
typedef Unk_ov065_02288c78_List List;
typedef Unk_ov065_02288b60_Sa Sa;

extern "C" {
u32 GsSrvListCrypt_NextByte(Cipher *c, u32 x);
void GsSrvListCrypt_InitDefault(Cipher *c);
u32 GsSrvListCrypt_KeyIndex(Cipher *c, u32 n, u8 *key, u32 keylen, u8 *j, u32 *idx);
s32 GsSrvQueue_Remove(List *l, Ent *e);
void GsSrvQuery_ReceiveAll(Mgr *m, s32 flag);
void GsSrvQuery_CheckTimeouts(Mgr *m);
void GsSrvQuery_StartPending(Mgr *m);
void GsSrvQuery_SendQuery(Mgr *m, Ent *e);
s32 GsSrvQuery_HandleAltReplyStub(Mgr *m, Ent *e, u8 *buf, s32 n);
void GsSrvQuery_HandleQr1Reply(Mgr *m, Ent *e, u8 *buf, s32 n);
void GsSrvQuery_HandleQr2Reply(Mgr *m, Ent *e, u8 *buf, s32 n);
void GsSrvQueue_Init(List *l);
Ent *GsSrvQueue_PopFront(List *l);
void GsSrvQueue_PushFront(List *l, Ent *e);
void GsSrvQueue_PushBack(List *l, Ent *e);
void GsServer_CompareKeyCb(u32 *a, u32 *b);
u32 GsServer_HashKeyCb(u32 *p, u32 n);
void GsServer_FreeKeyCb(u32 *p);
u32 GsUtil_StrHashNoCase(u8 *s, u32 n);

void GsSrvQuery_SendQuery(Mgr *m, Ent *e) {
    Sa sa;
    u8 buf[0x100];
    s32 len;
    GsSrvQueue_PushBack(&m->active, e);
    e->unk_1c = GsUtil_GetTimeMs();
    sa.family = 2;
    if ((e->unk_14 & 0x20) == 0) {
        if (m->mode == 1) {
            buf[0] = 0xfe;
            buf[1] = 0xfd;
            buf[2] = 0;
            {
                u8 *q = &buf[3];
                u8 *t = (u8 *)&e->unk_1c;
                q[0] = t[0];
                q[1] = t[1];
                q[2] = t[2];
                q[3] = t[3];
            }
            if (e->unk_14 & 4) {
                s32 i = 0;
                buf[7] = m->keycount;
                if (m->keycount > 0) {
                    do {
                        buf[i + 8] = m->key[i];
                        i++;
                    } while (i < m->keycount);
                }
                buf[m->keycount + 8] = 0;
                buf[m->keycount + 9] = 0;
                len = m->keycount + 10;
            } else {
                buf[7] = 0xff;
                buf[8] = 0xff;
                buf[9] = 0xff;
                len = 10;
            }
        } else {
            if (e->unk_14 & 4) {
                u8 *d = buf;
                u8 *sp = (u8 *)"\\basic\\\\info\\";
                u8 *k = (u8 *)13;
                do {
                    *d++ = *sp++;
                    k--;
                } while (k != NULL);
                len = 13;
            } else {
                u8 *d = buf;
                u8 *sp = (u8 *)"\\status\\";
                u8 *k = (u8 *)8;
                do {
                    *d++ = *sp++;
                    k--;
                } while (k != NULL);
                len = 8;
            }
        }
        if (e->addr == m->unk_28 && (e->unk_15 & 2) != 0) {
            sa.addr = e->addr2;
            sa.port = e->port2;
        } else {
            sa.addr = e->addr;
            sa.port = e->port;
        }
        GsSock_SendTo(m->sock, buf, len, 0, &sa, 8);
    }
}

void GsSrvQuery_Init(Mgr *m, s32 max, s32 mode, s32 force, Unk_ov065_02288b60_Cb cb, void *user) {
    if (force != 0 || sGsAvailStatus == 1) {
        GsSock_StartupStub();
        m->mode = mode;
        m->max = max;
        m->keycount = 0;
        m->cb = cb;
        m->user = user;
        m->unk_28 = 0;
        m->sock = GsSock_Socket(2, 2, 0);
        GsSrvQueue_Init(&m->pending);
        GsSrvQueue_Init(&m->active);
    }
}

void GsSrvQuery_SetPublicIp(Mgr *m, u32 v) {
    m->unk_28 = v;
}

void GsSrvQuery_Clear(Mgr *m) {
    GsSrvQueue_Init(&m->pending);
    GsSrvQueue_Init(&m->active);
}

void GsSrvQuery_Shutdown(Mgr *m) {
    GsSock_Close(m->sock);
    m->sock = -1;
    GsSrvQueue_Init(&m->pending);
    GsSrvQueue_Init(&m->active);
}

void GsSrvQuery_Add(Mgr *m, Ent *e, s32 front, s32 code) {
    u8 *p = &e->unk_14;
    *p &= 0xc3;
    if (code == 0) {
        *p |= 4;
    } else if (code == 1) {
        *p |= 8;
    } else if (code == 2) {
        return;
    }
    if (m->active.count < m->max) {
        GsSrvQuery_SendQuery(m, e);
        return;
    }
    if (front != 0) {
        GsSrvQueue_PushFront(&m->pending, e);
        return;
    }
    GsSrvQueue_PushBack(&m->pending, e);
}

void GsSrvQuery_HandleQr2Reply(Mgr *m, Ent *e, u8 *buf, s32 n) {
    s32 i = 0;
    s32 r;
    if (*(s8 *)buf == 0) {
        buf += 5;
        n -= 5;
        if (e->unk_14 & 4) {
            if (m->keycount > 0) {
                do {
                    r = GsUtil_StrSizeInBuffer(buf, n);
                    if (r < 0) {
                        break;
                    }
                    GsServer_SetStringValue(e, gGsKeyNames[m->key[i]], buf);
                    buf += r;
                    n -= r;
                    i++;
                } while (i < m->keycount);
            }
            e->unk_14 |= 0x41;
        } else {
            GsServer_ParseQr2Reply(e, buf, n);
            e->unk_14 |= 0x43;
        }
        e->unk_14 &= 0xf3;
        e->unk_1c = GsUtil_GetTimeMs() - e->unk_1c;
        GsSrvQueue_Remove(&m->active, e);
        m->cb(m, 0, e, m->user);
    }
}

void GsSrvQuery_HandleQr1Reply(Mgr *m, Ent *e, u8 *buf, s32 n) {
    BOOL found;
    if (func_02129f1c(buf, (void *)"\\final\\") != 0) {
        found = TRUE;
    } else {
        found = FALSE;
    }
    GsServer_ParseQr1Reply(e, buf);
    if (found) {
        if (e->unk_14 & 4) {
            e->unk_14 |= 0x41;
        } else {
            e->unk_14 |= 0x42;
        }
        e->unk_14 &= 0xf3;
        e->unk_1c = GsUtil_GetTimeMs() - e->unk_1c;
        GsSrvQueue_Remove(&m->active, e);
        m->cb(m, 0, e, m->user);
    }
}

s32 GsSrvQuery_HandleAltReplyStub(Mgr *m, Ent *e, u8 *buf, s32 n) {
    return 1;
}

void GsSrvQuery_ReceiveAll(Mgr *m, s32 flag) {
    s32 sock;
    Sa sa;
    s32 len = 8;
    u8 buf[0x800];
    s32 n;
    Ent *e;
    if (flag != 0) {
        sock = m->sock2;
    } else {
        sock = m->sock;
    }
    while (GsSock_CanRead(sock) != 0) {
        n = GsSock_RecvFrom(sock, buf, 0x7ff, 0, &sa, &len);
        if (n == -1) {
            break;
        }
        buf[n] = 0;
        for (e = m->active.head; e != 0; e = e->next) {
            if (flag != 0 && (e->unk_15 & 8) != 0 && e->unk_10 == sa.addr) {
                goto match;
            }
            if (e->addr == sa.addr) {
                if (e->port == sa.port) {
                    goto match;
                }
                if (flag != 0) {
                    goto match;
                }
            }
            if (e->addr == m->unk_28 && (e->unk_15 & 2) != 0 && e->addr2 == sa.addr && e->port2 == sa.port) {
            match:
                if (flag != 0) {
                    if (GsSrvQuery_HandleAltReplyStub(m, e, buf, n) != 0) {
                        break;
                    }
                    continue;
                }
                if (m->mode == 1) {
                    GsSrvQuery_HandleQr2Reply(m, e, buf, n);
                } else {
                    GsSrvQuery_HandleQr1Reply(m, e, buf, n);
                }
                break;
            }
        }
    }
}

void GsSrvQuery_CheckTimeouts(Mgr *m) {
    u32 now = GsUtil_GetTimeMs();
    Ent *e = m->active.head;
    if (e != 0) {
        do {
            if (now <= e->unk_1c + 0x9c4) {
                return;
            }
            e->unk_15 |= 0x10;
            m->active.head->unk_1c = 0x9c4;
            m->active.head->unk_15 &= 0xd3;
            m->cb(m, 1, m->active.head, m->user);
            GsSrvQueue_PopFront(&m->active);
            e = m->active.head;
        } while (e != 0);
    }
}

void GsSrvQuery_StartPending(Mgr *m) {
    while (m->active.count < m->max && m->pending.count > 0) {
        Ent *e = GsSrvQueue_PopFront(&m->pending);
        GsSrvQuery_SendQuery(m, e);
    }
}

void GsSrvQuery_Think(Mgr *m) {
    if (m->active.count != 0) {
        GsSrvQuery_ReceiveAll(m, 0);
        GsSrvQuery_CheckTimeouts(m);
        if (m->pending.count > 0) {
            GsSrvQuery_StartPending(m);
        }
        if (m->active.count == 0) {
            m->cb(m, 2, 0, m->user);
        }
    }
}

void GsSrvQuery_AddKey(Mgr *m, u32 b) {
    s32 k = m->keycount;
    if (k < 0x14) {
        m->keycount = k + 1;
        m->key[k] = b;
    }
}

void GsSrvQuery_Remove(Mgr *m, Ent *e) {
    if (GsSrvQueue_Remove(&m->active, e) == 0) {
        GsSrvQueue_Remove(&m->pending, e);
    }
}

u32 GsSrvListCrypt_KeyIndex(Cipher *c, u32 n, u8 *key, u32 keylen, u8 *j, u32 *idx) {
    u32 r;
    u32 mask;
    u32 cnt;
    if (n == 0) {
        return 0;
    }
    cnt = 0;
    mask = 1;
    if (n > 1) {
        do {
            mask = mask * 2 + 1;
        } while (mask < n);
    }
    do {
        u32 t = (*idx)++;
        *j = c->s[*j] + key[t];
        if (*idx >= keylen) {
            *idx = 0;
            *j = *j + keylen;
        }
        r = mask & *j;
        cnt++;
        if (cnt > 11) {
            r = r % n;
        }
    } while (r > n);
    return (u8)r;
}

void GsSrvListCrypt_InitDefault(Cipher *c) {
    s32 i;
    s32 v;
    c->i = 1;
    c->j = 3;
    c->k = 5;
    c->l = 7;
    c->m = 0xb;
    for (i = 0, v = 0xff; i < 0x100; i++, v--) {
        c->s[i] = v;
    }
}

void GsSrvListCrypt_Init(Cipher *c, u8 *key, u32 keylen) {
    s32 i;
    u32 idx;
    u8 j;
    if (keylen < 1) {
        GsSrvListCrypt_InitDefault(c);
        return;
    }
    for (i = 0; i < 0x100; i++) {
        c->s[i] = i;
    }
    idx = 0;
    j = 0;
    for (i = 0xff; i >= 0; i--) {
        u32 r = GsSrvListCrypt_KeyIndex(c, i, key, keylen, &j, &idx);
        u8 t = c->s[i];
        c->s[i] = c->s[r];
        c->s[r] = t;
    }
    c->i = c->s[1];
    c->j = c->s[3];
    c->k = c->s[5];
    c->l = c->s[7];
    c->m = c->s[j];
    j = 0;
    idx = 0;
}

u32 GsSrvListCrypt_NextByte(Cipher *c, u32 x) {
    u8 a = c->i;
    c->i = a + 1;
    c->j = c->j + c->s[a];
    u8 t = c->m;
    u8 old = c->s[t];
    c->s[t] = c->s[c->j];
    c->s[c->j] = c->s[c->l];
    c->s[c->l] = c->s[c->i];
    c->s[c->i] = old;
    c->k = c->k + c->s[old];
    u32 v = x ^ c->s[(c->s[c->k] + c->s[c->i]) & 0xff];
    v ^= c->s[c->s[(c->s[c->j] + (c->s[c->l] + c->s[c->m])) & 0xff]];
    c->l = v;
    c->m = x;
    return c->l;
}

void GsSrvListCrypt_Decrypt(Cipher *c, u8 *buf, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        buf[i] = GsSrvListCrypt_NextByte(c, buf[i]);
    }
}
}
