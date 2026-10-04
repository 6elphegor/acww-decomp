// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsGpOperation.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/GsGpPeer.h"
#include "net/GsGpCallbackArgs.h"

// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)














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
s32 GsGp_QueueCallback(Unk_ov065_0227d8e0_Handle *h, Unk_ov065_0227e0e8_Wrap p, GsGpQueuedCallback *m, GsGpOperation *g, s32 k) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    GsGpQueuedCallback *node = (GsGpQueuedCallback *)GsUtil_Alloc(0x18);
    if (node == NULL) {
        GsGp_SetErrorString(h, "Out of memory.");
        return 1;
    }
    *(Unk_ov065_0227e0e8_Wrap *)node = p;
    node->arg = m;
    if (g != NULL) {
        node->operationId = (void *)g->id;
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
s32 GsGp_CallCallback(Unk_ov065_0227d8e0_Handle *h, GsGpQueuedCallback *n) {
    s32 i;
    s32 k;
    n->unk_00(h, n->arg, n->param);
    k = n->argType;
    if (k == 2) {
        GsUtil_Free(((GsGpBuddyMessage *)n->arg)->message);
        ((GsGpBuddyMessage *)n->arg)->message = 0;
    } else if (k == 3) {
        GsGpUserNicksResponse *d = (GsGpUserNicksResponse *)n->arg;
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
        GsGpFindPlayersResponse *d = (GsGpFindPlayersResponse *)n->arg;
        GsUtil_Free(d->matches);
        d->matches = 0;
    } else if (k == 7) {
        GsGpTransferEvent *d = (GsGpTransferEvent *)n->arg;
        if (d->message != 0) {
            GsUtil_Free(d->message);
            d->message = 0;
        }
    } else if (k == 8) {
        GsGpReverseBuddiesResponse *d = (GsGpReverseBuddiesResponse *)n->arg;
        if (d->profiles != 0) {
            GsUtil_Free(d->profiles);
            d->profiles = 0;
        }
    } else if (k == 9) {
        GsGpSuggestUniqueNickResponse *d = (GsGpSuggestUniqueNickResponse *)n->arg;
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
s32 GsGp_CallPendingCallbacks(Unk_ov065_0227d8e0_Handle *h, void *key) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    GsGpQueuedCallback *head;
    GsGpQueuedCallback *tail;
    GsGpQueuedCallback *prev;
    GsGpQueuedCallback *node;
    GsGpQueuedCallback *next;
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
