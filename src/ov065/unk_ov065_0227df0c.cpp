// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/gpiOperation.h"
#include "net/Unk_ov065_0227d8e0_Ctx.h"
#include "net/gpiPeer.h"
#include "net/gp.h"

// ov065_050: DWC HTTP socket send/recv + growable string buffer + callback list (0x0227d8e0..0x0227e1c8)














extern "C" {
char *strchr(const char *, s32);
s32 strncmp(const char *, const char *, s32);
s32 atol(const char *);
u32 STD_GetStringLength(const char *);
void memmove(void *, void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 gpiValueForKey(const char *, const char *, char *, s32);
void gpiSetErrorString(void *, const char *);
void gpiSetError(void *, s32, const char *);
void gpiDebug(void *, const char *, ...);
void *GsUtil_Realloc(void *, s32);
void *GsUtil_Alloc(s32);
s32 GsUtil_Free(void *);
s32 recv(s32, void *, s32, s32);
s32 send(s32, void *, s32, s32);
s32 GOAGetLastError(s32);
s32 ArrayLength(s32);
s32 shutdown(s32, s32);
s32 closesocket(s32);
s32 gpiRemoveOperation(void *, void *);
s32 gpiDestroyPeer(void *, void *);
s32 gpiProfileMap(void *, s32, s32);
s32 gpiDisconnectCleanupProfile(void);

s32 gpiSendData(void *, s32, char *, s32, s32 *, s32 *, const char *);
s32 gpiAppendIntToBuffer(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, s32);
s32 gpiAppendStringToBuffer(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, const char *);
s32 gpiAppendStringToBufferLen(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, const char *, s32);
s32 gpiAppendCharToBuffer(Unk_ov065_0227d8e0_Handle *, GPIBuffer *, char);
s32 gpiSendOrBufferStringLen(Unk_ov065_0227d8e0_Handle *, GPIPeer *, const char *, s32);
s32 gpiSendFromBuffer(Unk_ov065_0227d8e0_Handle *, s32, GPIBuffer *, s32 *, s32, const char *);
s32 gpiCallCallback(Unk_ov065_0227d8e0_Handle *, GPICallbackData *);
s32 gpiAddCallback(Unk_ov065_0227d8e0_Handle *, Unk_ov065_0227e0e8_Wrap, GPICallbackData *, GPIOperation *, s32);
void gpiCallErrorCallback(Unk_ov065_0227d8e0_Handle *, s32, s32);
}

extern "C" {
s32 gpiAddCallback(Unk_ov065_0227d8e0_Handle *h, Unk_ov065_0227e0e8_Wrap p, GPICallbackData *m, GPIOperation *g, s32 k) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    GPICallbackData *node = (GPICallbackData *)GsUtil_Alloc(0x18);
    if (node == NULL) {
        gpiSetErrorString(h, "Out of memory.");
        return 1;
    }
    *(Unk_ov065_0227e0e8_Wrap *)node = p;
    node->arg = m;
    if (g != NULL) {
        node->operationID = (void *)g->id;
    } else {
        node->operationID = NULL;
    }
    node->type = k;
    node->pnext = NULL;
    if (ctx->callbackList == NULL) {
        ctx->callbackList = node;
    }
    if (ctx->callbackListTail != NULL) {
        ctx->callbackListTail->pnext = node;
    }
    ctx->callbackListTail = node;
    return 0;
}
}

extern "C" {
s32 gpiCallCallback(Unk_ov065_0227d8e0_Handle *h, GPICallbackData *n) {
    s32 i;
    s32 k;
    n->unk_00(h, n->arg, n->param);
    k = n->type;
    if (k == 2) {
        GsUtil_Free(((GPRecvBuddyMessageArg *)n->arg)->message);
        ((GPRecvBuddyMessageArg *)n->arg)->message = 0;
    } else if (k == 3) {
        GPGetUserNicksResponseArg *d = (GPGetUserNicksResponseArg *)n->arg;
        for (i = 0; i < d->numNicks; i++) {
            GsUtil_Free((void *)d->nicks[i]);
            d->nicks[i] = 0;
            GsUtil_Free((void *)d->uniquenicks[i]);
            d->uniquenicks[i] = 0;
        }
        GsUtil_Free(d->nicks);
        d->nicks = NULL;
        GsUtil_Free(d->uniquenicks);
        d->uniquenicks = NULL;
    } else if (k == 4) {
        GPFindPlayersResponseArg *d = (GPFindPlayersResponseArg *)n->arg;
        GsUtil_Free(d->matches);
        d->matches = 0;
    } else if (k == 7) {
        GPTransferCallbackArg *d = (GPTransferCallbackArg *)n->arg;
        if (d->message != 0) {
            GsUtil_Free(d->message);
            d->message = 0;
        }
    } else if (k == 8) {
        GPGetReverseBuddiesResponseArg *d = (GPGetReverseBuddiesResponseArg *)n->arg;
        if (d->profiles != 0) {
            GsUtil_Free(d->profiles);
            d->profiles = 0;
        }
    } else if (k == 9) {
        GPSuggestUniqueNickResponseArg *d = (GPSuggestUniqueNickResponseArg *)n->arg;
        for (i = 0; i < d->numSuggestedNicks; i++) {
            GsUtil_Free((void *)d->suggestedNicks[i]);
            d->suggestedNicks[i] = 0;
        }
        GsUtil_Free(d->suggestedNicks);
        d->suggestedNicks = NULL;
    }
    GsUtil_Free(n->arg);
    n->arg = NULL;
    GsUtil_Free(n);
}
}

extern "C" {
s32 gpiProcessCallbacks(Unk_ov065_0227d8e0_Handle *h, void *key) {
    Unk_ov065_0227d8e0_Ctx *ctx = h->connection;
    GPICallbackData *head;
    GPICallbackData *tail;
    GPICallbackData *prev;
    GPICallbackData *node;
    GPICallbackData *next;
    if (key != NULL) {
        head = ctx->callbackList;
        tail = ctx->callbackListTail;
        prev = NULL;
        ctx->callbackList = NULL;
        ctx->callbackListTail = NULL;
        node = head;
        if (node != NULL) {
            do {
                next = node->pnext;
                if (node->operationID == key || node->type == 1) {
                    if (prev != NULL) {
                        prev->pnext = next;
                    } else {
                        head = next;
                    }
                    if (tail == node) {
                        tail = prev;
                    }
                    gpiCallCallback(h, node);
                } else {
                    prev = node;
                }
                node = next;
            } while (node != NULL);
        }
        if (ctx->callbackList != NULL) {
            ctx->callbackListTail->pnext = head;
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
                    next = node->pnext;
                    gpiCallCallback(h, node);
                    node = next;
                } while (node != NULL);
            }
            node = ctx->callbackList;
        } while (node != NULL);
    }
    return 0;
}
}
