// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/Unk_ov065_0227c538_Ctx.h"

// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)





typedef Unk_ov065_0227c538_Ctx Ctx0227;
extern "C" {
extern s32 sGsAvailStatus;


typedef s32 (*Unk_ov065_0227c564_Fn)(Ctx0227 **, void *, s32);

void GsGp_CloseConnection(Ctx0227 **, s32);
void GsGp_SetErrorString(Ctx0227 **, const char *);
s32 GsGp_Connect(Ctx0227 **, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, Unk_ov065_0227c564_Fn, s32);
s32 GsGp_CheckConnected(Ctx0227 **);
void GsUtil_Sleep(s32);
s32 GsGp_FindOperation(Ctx0227 **, Unk_ov065_0227c538_Node **, s32);
s32 GsGp_CallPendingCallbacks(Ctx0227 **, s32);
s32 GsGpPeer_ProcessAll(Ctx0227 **);
s32 GsGpSearch_ProcessAll(Ctx0227 **);
void GsGp_CallFailedCallback(Ctx0227 **, Unk_ov065_0227c538_Node *);
void GsGp_RemoveOperation(Ctx0227 **, Unk_ov065_0227c538_Node *);
void GsGp_FlushInfoUpdates(Ctx0227 **, char **);
s32 GsGp_SendBuffer(Ctx0227 **, s32, char **, s32 *, s32, const char *);
s32 GsGp_RecvToBuffer(Ctx0227 **, s32, char **, s32 *, s32 *, const char *);
void GsGp_SetError(Ctx0227 **, s32, const char *);
void GsGp_CallErrorCallback(Ctx0227 **, s32, s32);
void GsGp_DebugLog(Ctx0227 **, const char *, ...);
void *GsUtil_Realloc(void *, s32);
s32 GsGp_CheckServerError(Ctx0227 **, char *, s32);
s32 GsGp_ProcessBuddyMessage(Ctx0227 **, char *);
s32 GsGp_HasBlockingOperation(Ctx0227 **);
s32 gpiProcessOperation(Ctx0227 **, Unk_ov065_0227c538_Node *, char *);
void GsGpProfile_FindIf(Ctx0227 **, s32 (*)(Ctx0227 **, Unk_ov065_0227c538_Node *, s32), s32);
s32 GsGpProfile_Find(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void GsGpBuf_AppendString(Ctx0227 **, char **, const char *);
void GsGpBuf_AppendInt(Ctx0227 **, char **, s32);
s32 GsGpProfile_IsUnused(Unk_ov065_0227c538_Node *);
void GsGpProfile_Remove(Ctx0227 **, Unk_ov065_0227c538_Node *);
s32 GsGpProfile_InitTable(Ctx0227 **);
void GsSock_StartupStub();
void GsUtil_GetTimeMs();
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void GsHash_Free(void *);

char *func_02129f1c(const char *, const char *);
void memcpy(void *, const void *, s32);
void memmove(void *, void *, u32);
s32 func_0212b770(const char *);
s32 strncmp(const char *, const char *, u32);
void func_0212899c(void *, s32, u32);
void srand();

s32 GsGp_ResetConnection(Ctx0227 **h);
s32 GsGp_DestroyConnection(Ctx0227 **h);
s32 gpiInitialize(Ctx0227 **h, s32 a, s32 b);
s32 GsGp_ProcessConnection(Ctx0227 **h, s32 a);
s32 GsGp_ProcessCmMessages(Ctx0227 **h);
s32 GsGp_ClearProfileCb(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
s32 GsGp_FixBuddyIndexCb(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
}

extern "C" {
s32 gpiInitialize(Ctx0227 **h, s32 a, s32 b) {
    Ctx0227 *c;
    *h = 0;
    c = (Ctx0227 *)GsUtil_Alloc(0x490);
    if (c == NULL) {
        return 1;
    }
    func_0212899c(c, 0, 0x490);
    c->errorString = 0;
    c->errorCode = 0;
    c->infoCaching = 1;
    c->infoCachingBuddyOnly = 0;
    c->simulation = 0;
    c->firewall = 0;
    c->productId = a;
    c->namespaceId = b;
    if (GsGpProfile_InitTable(&c) == 0) {
        GsUtil_Free(c);
        c = 0;
        return 1;
    }
    c->unk_420 = 0;
    {
        s32 i;
        for (i = 0; i < 6; i++) {
            c->callbacks[i].func = 0;
            c->callbacks[i].param = 0;
        }
    }
    c->unk_460 = 0;
    GsGp_DebugLog(&c, "\n\n\n\n\n*************\ngpiInitialize\n");
    {
        s32 r = GsGp_ResetConnection(&c);
        if (r != 0) {
            GsGp_DestroyConnection(&c);
            return r;
        }
    }
    GsSock_StartupStub();
    GsUtil_GetTimeMs();
    srand();
    *h = c;
    return 0;
}
}

extern "C" {
s32 GsGp_DestroyConnection(Ctx0227 **h) {
    Ctx0227 *c = *h;
    GsGp_CloseConnection(h, 1);
    GsUtil_Free(c->unk_460);
    c->unk_460 = 0;
    GsHash_Free(c->profileTable);
    GsUtil_Free(c);
    *h = 0;
    return 0;
}
}

extern "C" {
s32 GsGp_ClearProfileCb(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m) {
    n->unk_08 = 0;
    n->authSig = 0;
    n->unk_14 = 0;
    n->unk_18 = 0;
    return 1;
}
}

extern "C" {
s32 GsGp_ResetConnection(Ctx0227 **h) {
    Ctx0227 *c = *h;
    Unk_ov065_0227c538_Node *n;
    c->nick[0] = 0;
    c->uniqueNick[0] = 0;
    c->email[0] = 0;
    c->cmSocket = -1;
    c->connectState = 0;
    c->recvBufferLength = 0;
    c->recvBufferPos = 0;
    c->recvBufferCapacity = 0;
    GsUtil_Free(c->recvBuffer);
    c->recvBuffer = 0;
    c->recvBuffer = 0;
    c->inputBufferSize = 0;
    GsUtil_Free(c->inputBuffer);
    c->inputBuffer = 0;
    c->inputBuffer = 0;
    c->outputBufferLength = 0;
    c->outputBufferPos = 0;
    c->outputBufferCapacity = 0;
    GsUtil_Free(c->outputBuffer);
    c->outputBuffer = 0;
    c->outputBuffer = 0;
    c->profileUpdateBufferLength = 0;
    c->profileUpdateBufferPos = 0;
    c->profileUpdateBufferCapacity = 0;
    GsUtil_Free(c->profileUpdateBuffer);
    c->profileUpdateBuffer = 0;
    c->profileUpdateBuffer = 0;
    c->userUpdateBufferLength = 0;
    c->userUpdateBufferPos = 0;
    c->userUpdateBufferCapacity = 0;
    GsUtil_Free(c->userUpdateBuffer);
    c->userUpdateBuffer = 0;
    c->userUpdateBuffer = 0;
    c->peerSocket = -1;
    c->nextOperationId = 2;
    n = c->operationList;
    while (n != NULL) {
        GsGp_RemoveOperation(h, n);
        n = c->operationList;
    }
    c->operationList = 0;
    c->numBuddies = 0;
    GsGpProfile_FindIf(h, GsGp_ClearProfileCb, 0);
    c->userId = 0;
    c->profileId = 0;
    c->sessKey = 0;
    c->numSearches = 0;
    c->fatalError = 0;
    c->peerList = 0;
    c->lastStatus = -1;
    c->lastStatusString = 0;
    c->lastLocationString = 0;
    return 0;
}
}

extern "C" {
s32 GsGp_ProcessCmMessages(Ctx0227 **h) {
    Unk_ov065_0227c538_Node *rec;
    s32 len;
    s32 flag = 0;
    Ctx0227 *c = *h;
    char *p;
    s32 r;
    for (;;) {
        GsGp_FlushInfoUpdates(h, &c->outputBuffer);
        r = GsGp_SendBuffer(h, c->cmSocket, &c->outputBuffer, &flag, 1, "CM");
        if (r != 0) {
            return r;
        }
        r = GsGp_RecvToBuffer(h, c->cmSocket, &c->recvBuffer, &len, &flag, "CM");
        if (r != 0) {
            if (r == 3) {
                GsGp_SetError(h, 5, "There was an error reading from the server.");
                GsGp_CallErrorCallback(h, 3, 1);
                return 3;
            }
            return r;
        }
        p = func_02129f1c(c->recvBuffer, "\\final\\");
        if (p != NULL) {
            do {
                *p = 0;
                GsGp_DebugLog(h, "CMD: %s\n", c->recvBuffer);
                len = p - c->recvBuffer;
                if (len > c->inputBufferSize) {
                    s32 n = len;
                    if (n < 0x800) {
                        n = 0x800;
                    }
                    c->inputBufferSize = c->inputBufferSize + n;
                    void *np = GsUtil_Realloc(c->inputBuffer, c->inputBufferSize + 1);
                    if (np == NULL) {
                        GsGp_SetErrorString(h, "Out of memory.");
                        return 1;
                    }
                    c->inputBuffer = (char *)np;
                }
                memcpy(c->inputBuffer, c->recvBuffer, len + 1);
                c->recvBufferLength = c->recvBufferLength - ((p + 7) - c->recvBuffer);
                memmove(c->recvBuffer, p + 7, c->recvBufferLength + 1);
                char *q = c->inputBuffer;
                char *f = func_02129f1c(q, "\\id\\");
                if (f != NULL) {
                    q = (char *)func_0212b770(f + 4);
                    if (GsGp_FindOperation(h, &rec, (s32)q) == 0) {
                        GsGp_DebugLog(h, "No matching operation found for id %d\n", q);
                    } else {
                        r = gpiProcessOperation(h, rec, c->inputBuffer);
                        if (r != 0) {
                            return r;
                        }
                    }
                } else {
                    if (GsGp_CheckServerError(h, q, 1) != 0) {
                        return 4;
                    }
                    q = c->inputBuffer;
                    if (strncmp(q, "\\bm\\", 4) == 0) {
                        r = GsGp_ProcessBuddyMessage(h, q);
                        if (r != 0) {
                            return r;
                        }
                    } else if (strncmp(q, "\\ka\\", 10) != 0) {
                        GsGp_DebugLog(h, "Received an unrecognized, unsolicited message.\n");
                    }
                }
                p = func_02129f1c(c->recvBuffer, "\\final\\");
            } while (p != NULL);
        }
        if (flag != 0) {
            c->connectState = 4;
            GsGp_SetError(h, 7, "The server has closed the connection.");
            GsGp_CallErrorCallback(h, 3, 1);
            return 0;
        }
        r = GsGp_HasBlockingOperation(h);
        if (r != 0) {
            GsUtil_Sleep(10);
        }
        if (r == 0) {
            return 0;
        }
    }
}
}

extern "C" {
s32 GsGp_ProcessConnection(Ctx0227 **h, s32 arg) {
    Ctx0227 *c = *h;
    s32 r = 0;
    Unk_ov065_0227c538_Node *rec;
    if (c->connectState == 1) {
        s32 zero = 0;
        s32 k;
        do {
            r = GsGp_CheckConnected(h);
            if (r == 0 && arg != 0 && c->connectState == 1) {
                k = 1;
            } else {
                k = zero;
            }
            if (k != 0) {
                GsUtil_Sleep(10);
            }
        } while (k != 0);
        if (r != 0) {
            if (GsGp_FindOperation(h, &rec, 1) != 0) {
                rec->result = 4;
            }
        }
    }
    if ((u32)(c->connectState - 2) <= 1) {
        if (r == 0) {
            r = GsGp_ProcessCmMessages(h);
        }
        if (r == 0) {
            r = GsGpPeer_ProcessAll(h);
        }
    }
    if (r == 0) {
        r = GsGpSearch_ProcessAll(h);
    }
    rec = c->operationList;
    if (rec != NULL) {
        do {
            if (rec->result != 0) {
                GsGp_CallFailedCallback(h, rec);
                Unk_ov065_0227c538_Node *o = rec;
                rec = rec->next;
                GsGp_RemoveOperation(h, o);
            } else {
                rec = rec->next;
            }
        } while (rec != NULL);
    }
    {
        s32 t = GsGp_CallPendingCallbacks(h, arg);
        if (t == 0) {
            if (c->fatalError != 0) {
                GsGp_CloseConnection(h, 0);
            }
            t = r;
        }
        return t;
    }
}
}
