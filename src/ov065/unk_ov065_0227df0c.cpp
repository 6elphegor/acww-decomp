// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"

// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)








struct Unk_ov065_0227dc48_Conn {
    u8 pad_00[8];
    s32 sock;
    u8 pad_0c[0x28 - 0xc];
    Unk_ov065_0227d8e0_Buf outputBuffer;
    s32 messageQueue;
};






typedef Unk_ov065_0227d8e0_Handle Unk_H;
typedef Unk_ov065_0227d8e0_Ctx Unk_C;
typedef Unk_ov065_0227d8e0_Buf Unk_B;
typedef Unk_ov065_0227d8e0_Node Unk_N;
extern "C" {
char *func_0212a120(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 func_0212b770(const char *);
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
s32 GsSock_Recv(s32, void *, s32, s32);
s32 GsSock_Send(s32, void *, s32, s32);
s32 GsSock_GetLastError(s32);
s32 GsArray_Count(s32);
s32 GsSock_Shutdown(s32, s32);
s32 GsSock_Close(s32);
s32 GsGp_RemoveOperation(void *, void *);
s32 GsGpPeer_Free(void *, void *);
s32 GsGpProfile_FindIf(void *, s32, s32);
s32 GsGp_FreeBuddyDataCb(void);

s32 GsGp_SocketSend(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 GsGpBuf_AppendInt(Unk_H *, Unk_B *, s32);
s32 GsGpBuf_AppendString(Unk_H *, Unk_B *, const char *);
s32 GsGpBuf_Append(Unk_H *, Unk_B *, const char *, s32);
s32 GsGpBuf_AppendChar(Unk_H *, Unk_B *, char);
s32 GsGpPeer_Send(Unk_H *, Unk_ov065_0227dc48_Conn *, const char *, s32);
s32 GsGp_SendBuffer(Unk_H *, s32, Unk_B *, s32 *, s32, const char *);
s32 GsGp_CallCallback(Unk_H *, Unk_N *);
s32 GsGp_QueueCallback(Unk_H *, Unk_ov065_0227e0e8_Wrap, Unk_N *, Unk_ov065_0227e0e8_G *, s32);
void GsGp_CallErrorCallback(Unk_H *, s32, s32);
}

extern "C" {
s32 GsGp_QueueCallback(Unk_H *h, Unk_ov065_0227e0e8_Wrap p, Unk_N *m, Unk_ov065_0227e0e8_G *g, s32 k) {
    Unk_C *ctx = h->connection;
    Unk_N *node = (Unk_N *)GsUtil_Alloc(0x18);
    if (node == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    *(Unk_ov065_0227e0e8_Wrap *)node = p;
    node->arg = m;
    if (g != NULL) {
        node->operationId = g->id;
    } else {
        node->operationId = NULL;
    }
    node->argType = k;
    node->next = NULL;
    if (ctx->callbackList == NULL) {
        ctx->callbackList = node;
    }
    if (ctx->callbackListTail != NULL) {
        ctx->callbackListTail->next = node;
    }
    ctx->callbackListTail = node;
    return 0;
}
}

extern "C" {
s32 GsGp_CallCallback(Unk_H *h, Unk_N *n) {
    s32 i;
    s32 k;
    n->unk_00(h, n->arg, n->param);
    k = n->argType;
    if (k == 2) {
        GsUtil_Free((void *)((Unk_ov065_0227dfd8_D4 *)n->arg)->unk_08);
        ((Unk_ov065_0227dfd8_D4 *)n->arg)->unk_08 = 0;
    } else if (k == 3) {
        Unk_ov065_0227dfd8_D3 *d = (Unk_ov065_0227dfd8_D3 *)n->arg;
        for (i = 0; i < d->numNicks; i++) {
            GsUtil_Free((void *)d->nicks[i]);
            d->nicks[i] = 0;
            GsUtil_Free((void *)d->uniqueNicks[i]);
            d->uniqueNicks[i] = 0;
        }
        GsUtil_Free(d->nicks);
        d->nicks = NULL;
        GsUtil_Free(d->uniqueNicks);
        d->uniqueNicks = NULL;
    } else if (k == 4) {
        Unk_ov065_0227dfd8_D4 *d = (Unk_ov065_0227dfd8_D4 *)n->arg;
        GsUtil_Free((void *)d->unk_0c);
        d->unk_0c = 0;
    } else if (k == 7) {
        Unk_ov065_0227dfd8_D4 *d = (Unk_ov065_0227dfd8_D4 *)n->arg;
        if (d->unk_10 != 0) {
            GsUtil_Free((void *)d->unk_10);
            d->unk_10 = 0;
        }
    } else if (k == 8) {
        Unk_ov065_0227dfd8_D4 *d = (Unk_ov065_0227dfd8_D4 *)n->arg;
        if (d->unk_08 != 0) {
            GsUtil_Free((void *)d->unk_08);
            d->unk_08 = 0;
        }
    } else if (k == 9) {
        Unk_ov065_0227dfd8_D9 *d = (Unk_ov065_0227dfd8_D9 *)n->arg;
        for (i = 0; i < d->numNicks; i++) {
            GsUtil_Free((void *)d->nicks[i]);
            d->nicks[i] = 0;
        }
        GsUtil_Free(d->nicks);
        d->nicks = NULL;
    }
    GsUtil_Free(n->arg);
    n->arg = NULL;
    GsUtil_Free(n);
}
}

extern "C" {
s32 GsGp_CallPendingCallbacks(Unk_H *h, void *key) {
    Unk_C *ctx = h->connection;
    Unk_N *head;
    Unk_N *tail;
    Unk_N *prev;
    Unk_N *node;
    Unk_N *next;
    if (key != NULL) {
        head = ctx->callbackList;
        tail = ctx->callbackListTail;
        prev = NULL;
        ctx->callbackList = NULL;
        ctx->callbackListTail = NULL;
        node = head;
        if (node != NULL) {
            do {
                next = node->next;
                if (node->operationId == key || node->argType == 1) {
                    if (prev != NULL) {
                        prev->next = next;
                    } else {
                        head = next;
                    }
                    if (tail == node) {
                        tail = prev;
                    }
                    GsGp_CallCallback(h, node);
                } else {
                    prev = node;
                }
                node = next;
            } while (node != NULL);
        }
        if (ctx->callbackList != NULL) {
            ctx->callbackListTail->next = head;
            ctx->callbackListTail = tail;
        } else {
            ctx->callbackList = head;
            ctx->callbackListTail = tail;
        }
        return 0;
    }
    node = ctx->callbackList;
    if (node != NULL) {
        do {
            ctx->callbackList = NULL;
            ctx->callbackListTail = NULL;
            if (node != NULL) {
                do {
                    next = node->next;
                    GsGp_CallCallback(h, node);
                    node = next;
                } while (node != NULL);
            }
            node = ctx->callbackList;
        } while (node != NULL);
    }
    return 0;
}
}
