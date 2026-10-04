// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsGpOperation.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/GsGpPeer.h"

// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)














extern "C" {
char *strchr(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 atol(const char *);
u32 STD_GetStringLength(const char *);
void memmove(void *, void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 GsGp_GetValue(const char *, const char *, char *, s32);
void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
void *GsUtil_Realloc(void *, s32);
void *GsUtil_Alloc(s32);
s32 GsUtil_Free(void *);
s32 recv(s32, void *, s32, s32);
s32 send(s32, void *, s32, s32);
s32 GOAGetLastError(s32);
s32 ArrayLength(DArrayImplementation *);
s32 shutdown(s32, s32);
s32 closesocket(s32);
s32 GsGp_RemoveOperation(void *, void *);
s32 GsGpPeer_Free(void *, void *);
s32 GsGpProfile_FindIf(void *, s32, s32);
s32 GsGp_FreeBuddyDataCb(void);

s32 GsGp_SocketSend(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 GsGpBuf_AppendInt(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, s32);
s32 GsGpBuf_AppendString(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, const char *);
s32 GsGpBuf_Append(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, const char *, s32);
s32 GsGpBuf_AppendChar(Unk_ov065_0227d8e0_Handle *, GsGpBuffer *, char);
s32 GsGpPeer_Send(Unk_ov065_0227d8e0_Handle *, GsGpPeer *, const char *, s32);
s32 GsGp_SendBuffer(Unk_ov065_0227d8e0_Handle *, s32, GsGpBuffer *, s32 *, s32, const char *);
s32 GsGp_CallCallback(Unk_ov065_0227d8e0_Handle *, GsGpQueuedCallback *);
s32 GsGp_QueueCallback(Unk_ov065_0227d8e0_Handle *, Unk_ov065_0227e0e8_Wrap, GsGpQueuedCallback *, GsGpOperation *, s32);
void GsGp_CallErrorCallback(Unk_ov065_0227d8e0_Handle *, s32, s32);
}

extern "C" {
s32 GsGpBuf_AppendChar(Unk_ov065_0227d8e0_Handle *h, GsGpBuffer *b, char c) {
    s32 len = b->length;
    s32 cap = b->capacity;
    char *data = b->buffer;
    if (cap == len) {
        cap += 0x800;
        data = (char *)GsUtil_Realloc(data, cap + 1);
        if (data == NULL) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
    }
    data[len] = c;
    data[len + 1] = 0;
    b->length = b->length + 1;
    b->capacity = cap;
    b->buffer = data;
    return 0;
}
}

extern "C" {
s32 GsGpBuf_Append(Unk_ov065_0227d8e0_Handle *h, GsGpBuffer *b, const char *s, s32 n) {
    s32 len;
    s32 cap;
    char *data;
    if (s == NULL) {
        return 0;
    }
    len = b->length;
    cap = b->capacity;
    data = b->buffer;
    if (cap - len < n) {
        cap += (n < 0x800) ? 0x800 : n;
        data = (char *)GsUtil_Realloc(data, cap + 1);
        if (data == NULL) {
            GsGp_SetErrorString(h, "Out of memory.");
            return 1;
        }
    }
    memcpy(data + len, s, n);
    data[len + n] = 0;
    b->length = b->length + n;
    b->capacity = cap;
    b->buffer = data;
    return 0;
}
}

extern "C" {
s32 GsGpBuf_AppendString(Unk_ov065_0227d8e0_Handle *h, GsGpBuffer *b, const char *s) {
    return GsGpBuf_Append(h, b, s, STD_GetStringLength(s));
}
}

extern "C" {
s32 GsGpBuf_AppendInt(Unk_ov065_0227d8e0_Handle *h, GsGpBuffer *b, s32 n) {
    char tmp[0x14];
    OS_SPrintf(tmp, "%d", n);
    return GsGpBuf_AppendString(h, b, tmp);
}
}

extern "C" {
s32 GsGp_SocketSend(void *h, s32 fd, char *buf, s32 len, s32 *pflag, s32 *pcnt, const char *str) {
    s32 n;
    s32 e;
    n = send(fd, buf, len, 0);
    if (n == -1) {
        e = GOAGetLastError(fd);
        if (e != -6 && e != -0x1a && e != -0x4c) {
            if (str[0] == 'P' && str[1] == 'R') {
                return 3;
            }
            GsGp_SetError(h, 5, "There was an error sending on a socket.");
            GsGp_CallErrorCallback((Unk_ov065_0227d8e0_Handle *)h, 3, 0);
            return 3;
        }
        *pcnt = 0;
        *pflag = 0;
    } else if (n == 0) {
        GsGp_DebugLog(h, "SENDXXXX(%s): Connection closed\n", str);
        *pcnt = 0;
        *pflag = 1;
    } else {
        *pcnt = n;
        *pflag = 0;
    }
    return 0;
}
}

extern "C" {
s32 GsGpPeer_SendChar(Unk_ov065_0227d8e0_Handle *h, GsGpPeer *c, char ch) {
    s32 flag;
    s32 cnt;
    s32 r;
    if (c->outputBuffer.length - c->outputBuffer.pos == 0 && ArrayLength(c->messageQueue) == 0) {
        r = GsGp_SocketSend(h, c->sock, &ch, 1, &flag, &cnt, "PT");
        if (r != 0) {
            return r;
        }
        if (cnt != 0) {
            return 0;
        }
    }
    return GsGpBuf_AppendChar(h, &c->outputBuffer, ch);
}
}

extern "C" {
s32 GsGpPeer_Send(Unk_ov065_0227d8e0_Handle *h, GsGpPeer *c, const char *s, s32 n) {
    s32 sent = 0;
    s32 flag;
    s32 cnt;
    s32 r;
    if (n == 0) {
        return sent;
    }
    if (c->outputBuffer.length - c->outputBuffer.pos == 0 && ArrayLength(c->messageQueue) == 0) {
        do {
            r = GsGp_SocketSend(h, c->sock, (char *)s + sent, n, &flag, &cnt, "PT");
            if (r != 0) {
                return r;
            }
            if (cnt != 0) {
                sent += cnt;
                n -= cnt;
            }
        } while (cnt != 0 && n != 0);
    }
    if (n != 0) {
        r = GsGpBuf_Append(h, &c->outputBuffer, s + sent, n);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
}

extern "C" {
s32 GsGpPeer_SendString(Unk_ov065_0227d8e0_Handle *h, GsGpPeer *c, const char *s) {
    return GsGpPeer_Send(h, c, s, STD_GetStringLength(s));
}
}

// Not in the original binary: unreferenced weak function compiled right after GsGp_RecvToBuffer, so that the literal
// "%d" is pooled where the original has it (before "PT"); removed by the dead-stripping link (see notes.txt).
extern "C" {
__declspec(weak) void Unk_ov065_0227dc00_pool_order(void) {
    OS_SPrintf((char *)0, "%d");
}
}

extern "C" {
s32 GsGp_RecvToBuffer(Unk_ov065_0227d8e0_Handle *h, s32 fd, GsGpBuffer *b, s32 *pout, s32 *pflag, const char *str) {
    char *data = b->buffer;
    s32 len = b->length;
    s32 cap = b->capacity;
    s32 total = 0;
    s32 flag = 0;
    volatile s32 z0 = 0;
    volatile s32 z1 = 0;
    volatile s32 z2 = 0;
    volatile s32 z3 = 0;
    s32 n;
    s32 e;
    for (;;) {
        if (len + 0x800 > cap) {
            cap = len + 0x800;
            data = (char *)GsUtil_Realloc(data, cap + 1);
            if (data == NULL) {
                GsGp_SetErrorString(h, "Out of memory.");
                return 1;
            }
        }
        n = recv(fd, data + len, cap - len, z0);
        if (n == ~z2) {
            e = GOAGetLastError(fd);
            if (e != -6 && e != -0x1a && e != -0x4c) {
                GsGp_SetErrorString(h, "There was an error reading from a socket.");
                return 3;
            }
        } else if (n == 0) {
            flag = 1;
            GsGp_DebugLog(h, "RECVXXXX(%s): Connection closed\n", str);
        } else {
            len += n;
            total += n;
        }
        data[len] = z1;
        if (n == ~z3 || flag != 0 || total >= 0x20000) {
            break;
        }
    }
    if (total != 0) {
        GsGp_DebugLog(h, "RECVTOTL(%s): %d\n", str, total);
    }
    b->buffer = data;
    b->length = len;
    b->capacity = cap;
    *pout = total;
    s32 *pf = pflag;
    *pf = flag;
    return 0;
}
}

extern "C" {
s32 GsGp_SendBuffer(Unk_ov065_0227d8e0_Handle *h, s32 fd, GsGpBuffer *b, s32 *pout, s32 compact, const char *str) {
    char *data = b->buffer;
    s32 len = b->length;
    s32 pos = b->pos;
    s32 sent;
    s32 rem = len - pos;
    sent = 0;
    s32 flag;
    s32 cnt;
    s32 r;
    if (rem == 0) {
        return sent;
    }
    do {
        r = GsGp_SocketSend(h, fd, data + (pos + sent), rem, &flag, &cnt, str);
        if (r != 0) {
            return r;
        }
        if (cnt != 0) {
            sent += cnt;
            rem -= cnt;
        }
    } while (cnt != 0 && rem != 0);
    if (compact != 0) {
        if (sent > 0) {
            memmove(data, data + sent, rem + 1);
            len -= sent;
        }
    } else {
        pos += sent;
    }
    b->length = len;
    b->pos = pos;
    if (pout != NULL) {
        *pout = flag;
    }
    return 0;
}
}

extern "C" {
s32 GsGpPeer_ParseMessage(void *h, GsGpBuffer *b, char **pp, s32 *plen, s32 *pval) {
    char line[16];
    char *p;
    s32 n;
    s32 k;
    *pp = NULL;
    if (b->length < 5) {
        return 0;
    }
    {
        p = strchr(b->buffer, 10);
        if (p != NULL) {
            if (strncmp(p - 5, "\\msg\\", 5) != 0) {
                return 3;
            }
            *p = 0;
            if (GsGp_GetValue(b->buffer, "\\m\\", line, 16) == 0) {
                return 3;
            }
            *plen = atol(line);
            if (GsGp_GetValue(b->buffer, "\\len\\", line, 16) == 0) {
                return 3;
            }
            n = atol(line);
            k = n + 1;
            if (b->length > k + (p - b->buffer)) {
                if (p[k] != 0) {
                    return 3;
                }
                *pp = p + 1;
                *pval = n;
                b->pos = k + (p - b->buffer) + 1;
            } else {
                *p = 10;
            }
        }
    }
    return 0;
}
}

extern "C" {
s32 GsGpBuf_Compact(void *h, GsGpBuffer *b) {
    if (b == NULL || b->buffer == NULL || b->pos == 0) {
        return 0;
    }
    b->length = b->length - b->pos;
    if (b->length != 0) {
        memmove(b->buffer, b->buffer + b->pos, b->length);
    }
    b->buffer[b->length] = 0;
    b->pos = 0;
    return 0;
}
}
