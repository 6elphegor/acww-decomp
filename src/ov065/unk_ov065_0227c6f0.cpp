// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/gpi.h"

// ov065_048: DWC HTTP/session context (0x0227c538..0x0227ce30)





typedef GPIConnection Ctx0227;
extern "C" {
extern s32 __GSIACResult;


typedef s32 (*GsGpConnectCallback)(Ctx0227 **, void *, s32);

void gpiDisconnect(Ctx0227 **, s32);
void gpiSetErrorString(Ctx0227 **, const char *);
s32 gpiConnect(Ctx0227 **, const char *, const char *, const char *, const char *, const char *,
                        const char *, s32, s32, s32, s32, GsGpConnectCallback, s32);
s32 gpiCheckConnect(Ctx0227 **);
void msleep(s32);
s32 gpiFindOperationByID(Ctx0227 **, Unk_ov065_0227c538_Node **, s32);
s32 gpiProcessCallbacks(Ctx0227 **, s32);
s32 gpiProcessPeers(Ctx0227 **);
s32 gpiProcessSearches(Ctx0227 **);
void gpiFailedOpCallback(Ctx0227 **, Unk_ov065_0227c538_Node *);
void gpiRemoveOperation(Ctx0227 **, Unk_ov065_0227c538_Node *);
void gpiAddLocalInfo(Ctx0227 **, char **);
s32 gpiSendFromBuffer(Ctx0227 **, s32, char **, s32 *, s32, const char *);
s32 gpiRecvToBuffer(Ctx0227 **, s32, char **, s32 *, s32 *, const char *);
void gpiSetError(Ctx0227 **, s32, const char *);
void gpiCallErrorCallback(Ctx0227 **, s32, s32);
void gpiDebug(Ctx0227 **, const char *, ...);
void *GsUtil_Realloc(void *, s32);
s32 gpiCheckForError(Ctx0227 **, char *, s32);
s32 gpiProcessRecvBuddyMessage(Ctx0227 **, char *);
s32 gpiOperationsAreBlocking(Ctx0227 **);
s32 gpiProcessOperation(Ctx0227 **, Unk_ov065_0227c538_Node *, char *);
void gpiProfileMap(Ctx0227 **, s32 (*)(Ctx0227 **, Unk_ov065_0227c538_Node *, s32), s32);
s32 gpiGetProfile(Ctx0227 **, s32, Unk_ov065_0227c538_Node **);
void gpiAppendStringToBuffer(Ctx0227 **, char **, const char *);
void gpiAppendIntToBuffer(Ctx0227 **, char **, s32);
s32 gpiCanFreeProfile(Unk_ov065_0227c538_Node *);
void gpiRemoveProfile(Ctx0227 **, Unk_ov065_0227c538_Node *);
s32 gpiInitProfiles(Ctx0227 **);
void SocketStartUp();
void current_time();
void GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
void TableFree(void *);

char *strstr(const char *, const char *);
void memcpy(void *, const void *, s32);
void memmove(void *, void *, u32);
s32 atol(const char *);
s32 strncmp(const char *, const char *, u32);
void memset(void *, s32, u32);
void srand();

s32 gpiReset(Ctx0227 **h);
s32 gpiDestroy(Ctx0227 **h);
s32 gpiInitialize(Ctx0227 **h, s32 a, s32 b);
s32 gpiProcess(Ctx0227 **h, s32 a);
s32 gpiProcessConnectionManager(Ctx0227 **h);
s32 gpiResetProfile(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
s32 gpiFixBuddyIndices(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m);
}

extern "C" {
s32 gpiInitialize(Ctx0227 **h, s32 a, s32 b) {
    Ctx0227 *c;
    *h = 0;
    c = (Ctx0227 *)GsUtil_Alloc(0x490);
    if (c == NULL) {
        return 1;
    }
    memset(c, 0, 0x490);
    c->errorString = 0;
    c->errorCode = 0;
    c->infoCaching = 1;
    c->infoCachingBuddyOnly = 0;
    c->simulation = 0;
    c->firewall = 0;
    c->productID = a;
    c->namespaceID = b;
    if (gpiInitProfiles(&c) == 0) {
        GsUtil_Free(c);
        c = 0;
        return 1;
    }
    c->diskCache = 0;
    {
        s32 i;
        for (i = 0; i < 6; i++) {
            c->callbacks[i].callback = 0;
            c->callbacks[i].param = 0;
        }
    }
    c->unk_460 = 0;
    gpiDebug(&c, "\n\n\n\n\n*************\ngpiInitialize\n");
    {
        s32 r = gpiReset(&c);
        if (r != 0) {
            gpiDestroy(&c);
            return r;
        }
    }
    SocketStartUp();
    current_time();
    srand();
    *h = c;
    return 0;
}
}

extern "C" {
s32 gpiDestroy(Ctx0227 **h) {
    Ctx0227 *c = *h;
    gpiDisconnect(h, 1);
    GsUtil_Free(c->unk_460);
    c->unk_460 = 0;
    TableFree(c->profileTable);
    GsUtil_Free(c);
    *h = 0;
    return 0;
}
}

extern "C" {
s32 gpiResetProfile(Ctx0227 **h, Unk_ov065_0227c538_Node *n, s32 m) {
    n->unk_08 = 0;
    n->authSig = 0;
    n->unk_14 = 0;
    n->unk_18 = 0;
    return 1;
}
}

extern "C" {
s32 gpiReset(Ctx0227 **h) {
    Ctx0227 *c = *h;
    Unk_ov065_0227c538_Node *n;
    c->nick[0] = 0;
    c->uniquenick[0] = 0;
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
    c->nextOperationID = 2;
    n = c->operationList;
    while (n != NULL) {
        gpiRemoveOperation(h, n);
        n = c->operationList;
    }
    c->operationList = 0;
    c->numBuddies = 0;
    gpiProfileMap(h, gpiResetProfile, 0);
    c->userid = 0;
    c->profileid = 0;
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
s32 gpiProcessConnectionManager(Ctx0227 **h) {
    Unk_ov065_0227c538_Node *rec;
    s32 len;
    s32 flag = 0;
    Ctx0227 *c = *h;
    char *p;
    s32 r;
    for (;;) {
        gpiAddLocalInfo(h, &c->outputBuffer);
        r = gpiSendFromBuffer(h, c->cmSocket, &c->outputBuffer, &flag, 1, "CM");
        if (r != 0) {
            return r;
        }
        r = gpiRecvToBuffer(h, c->cmSocket, &c->recvBuffer, &len, &flag, "CM");
        if (r != 0) {
            if (r == 3) {
                gpiSetError(h, 5, "There was an error reading from the server.");
                gpiCallErrorCallback(h, 3, 1);
                return 3;
            }
            return r;
        }
        p = strstr(c->recvBuffer, "\\final\\");
        if (p != NULL) {
            do {
                *p = 0;
                gpiDebug(h, "CMD: %s\n", c->recvBuffer);
                len = p - c->recvBuffer;
                if (len > c->inputBufferSize) {
                    s32 n = len;
                    if (n < 0x800) {
                        n = 0x800;
                    }
                    c->inputBufferSize = c->inputBufferSize + n;
                    void *np = GsUtil_Realloc(c->inputBuffer, c->inputBufferSize + 1);
                    if (np == NULL) {
                        gpiSetErrorString(h, "Out of memory.");
                        return 1;
                    }
                    c->inputBuffer = (char *)np;
                }
                memcpy(c->inputBuffer, c->recvBuffer, len + 1);
                c->recvBufferLength = c->recvBufferLength - ((p + 7) - c->recvBuffer);
                memmove(c->recvBuffer, p + 7, c->recvBufferLength + 1);
                char *q = c->inputBuffer;
                char *f = strstr(q, "\\id\\");
                if (f != NULL) {
                    q = (char *)atol(f + 4);
                    if (gpiFindOperationByID(h, &rec, (s32)q) == 0) {
                        gpiDebug(h, "No matching operation found for id %d\n", q);
                    } else {
                        r = gpiProcessOperation(h, rec, c->inputBuffer);
                        if (r != 0) {
                            return r;
                        }
                    }
                } else {
                    if (gpiCheckForError(h, q, 1) != 0) {
                        return 4;
                    }
                    q = c->inputBuffer;
                    if (strncmp(q, "\\bm\\", 4) == 0) {
                        r = gpiProcessRecvBuddyMessage(h, q);
                        if (r != 0) {
                            return r;
                        }
                    } else if (strncmp(q, "\\ka\\", 10) != 0) {
                        gpiDebug(h, "Received an unrecognized, unsolicited message.\n");
                    }
                }
                p = strstr(c->recvBuffer, "\\final\\");
            } while (p != NULL);
        }
        if (flag != 0) {
            c->connectState = 4;
            gpiSetError(h, 7, "The server has closed the connection.");
            gpiCallErrorCallback(h, 3, 1);
            return 0;
        }
        r = gpiOperationsAreBlocking(h);
        if (r != 0) {
            msleep(10);
        }
        if (r == 0) {
            return 0;
        }
    }
}
}

extern "C" {
s32 gpiProcess(Ctx0227 **h, s32 arg) {
    Ctx0227 *c = *h;
    s32 r = 0;
    Unk_ov065_0227c538_Node *rec;
    if (c->connectState == 1) {
        s32 zero = 0;
        s32 k;
        do {
            r = gpiCheckConnect(h);
            if (r == 0 && arg != 0 && c->connectState == 1) {
                k = 1;
            } else {
                k = zero;
            }
            if (k != 0) {
                msleep(10);
            }
        } while (k != 0);
        if (r != 0) {
            if (gpiFindOperationByID(h, &rec, 1) != 0) {
                rec->result = 4;
            }
        }
    }
    if ((u32)(c->connectState - 2) <= 1) {
        if (r == 0) {
            r = gpiProcessConnectionManager(h);
        }
        if (r == 0) {
            r = gpiProcessPeers(h);
        }
    }
    if (r == 0) {
        r = gpiProcessSearches(h);
    }
    rec = c->operationList;
    if (rec != NULL) {
        do {
            if (rec->result != 0) {
                gpiFailedOpCallback(h, rec);
                Unk_ov065_0227c538_Node *o = rec;
                rec = rec->next;
                gpiRemoveOperation(h, o);
            } else {
                rec = rec->next;
            }
        } while (rec != NULL);
    }
    {
        s32 t = gpiProcessCallbacks(h, arg);
        if (t == 0) {
            if (c->fatalError != 0) {
                gpiDisconnect(h, 0);
            }
            t = r;
        }
        return t;
    }
}
}
