#include "types.h"
#include "net/CommManager.h"
#include "net/Unk_020a647c_Buf.h"


extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
void CommRecord_UnpackSource(u8 *src, u8 *a, u8 *b);
}

extern "C" {
void NetStatusMsgBase_Pack(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
void NetStatusMsgBase_Fini(void *p);
}

extern "C" {
void NetStatusMsgBase_Init(void *p);
}

extern CommManager *gCommManager;

struct NetMoveReady {
    u32 unk_00;
    NetMoveReady();
    ~NetMoveReady();
    void reset();
    void get(u32 *out);
    void set(u32 v);
};

struct NetMoveRequest {
    u32 slot;
    u8 targetScene;
    NetMoveRequest();
    ~NetMoveRequest();
    void reset();
    void get(s32 *a, u8 *b);
    void set(u32 a, u8 b);
};

struct NetSlotStatus {
    u8 sceneId;
    u8 isOwner;
    u8 isMoving;
    NetSlotStatus();
    ~NetSlotStatus();
    void reset();
    void get(u8 *a, u8 *b, u8 *c);
    void set(u8 a, u8 b, u8 c);
};

struct NetPendingStatus {
    u8 sceneId;
    u8 isOwner;
    u8 isMoving;
    u32 dirtyMask;
    NetPendingStatus();
    ~NetPendingStatus();
    void reset();
    void get(u8 *a, u8 *b, u8 *c, u32 *d);
    void setMasked(u8 a, u8 b, u8 c, u32 mask);
};

extern "C" {
}

extern "C" {
void NetStatusMsg_Unpack(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e);
}

extern "C" {
void NetStatusMsgBase_Unpack(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e);
}
extern "C" void NetArea_WriteStateAPart0();
extern "C" void NetArea_WriteStateANpcTalk();

extern void (*const sNetStateAWriters[2])(s32);
void (*const sNetStateAWriters[2])(s32) = {(void (*)(s32))NetArea_WriteStateAPart0, (void (*)(s32))NetArea_WriteStateANpcTalk};

extern "C" void NetStatusMsgBase_Unpack(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e) {
    u8 loc;
    CommRecord_UnpackSource(p, b, &loc);
    if (loc & 1) {
        *c = 1;
    } else {
        *c = 0;
    }
    if (loc & 2) {
        *d = 1;
    } else {
        *d = 0;
    }
    *e = p[1] & 0x3f;
    *a = ((u32)p[1] >> 6) & 3;
}

extern "C" void *NetStatusUpdateMsg_Init(void *p) {
    NetStatusMsgBase_Init(p);
    return p;
}

extern "C" void *NetStatusUpdateMsg_Fini(void *p) {
    NetStatusMsgBase_Fini(p);
    return p;
}

extern "C" void NetStatusUpdateMsg_Pack(u8 *p, s32 b, s32 c, s32 d, s32 e) { NetStatusMsgBase_Pack(p, 0, b, c, d, e); }

extern "C" void NetStatusUpdateMsg_Unpack(u8 *p, u8 *b, u8 *c, u8 *d, s32 *e) {
    s32 x;
    NetStatusMsgBase_Unpack(p, &x, b, c, d, e);
}

extern "C" void *NetStatusMsg_Init(void *p) {
    NetStatusMsgBase_Init(p);
    return p;
}

extern "C" void *NetStatusMsg_Fini(void *p) {
    NetStatusMsgBase_Fini(p);
    return p;
}

extern "C" void NetStatusMsg_Pack(u8 *p, s32 a, s32 b, s32 c, u8 d, s32 e) { NetStatusMsgBase_Pack(p, a, b, c, d, e); }

extern "C" void NetStatusMsg_Unpack(u8 *p, s32 *a, u8 *b, u8 *c, u8 *d, s32 *e) { NetStatusMsgBase_Unpack(p, a, b, c, d, e); }

NetPendingStatus::NetPendingStatus() { reset(); }

NetPendingStatus::~NetPendingStatus() {}

void NetPendingStatus::setMasked(u8 a, u8 b, u8 c, u32 mask) {
    if (mask & 1) {
        sceneId = a;
    }
    if (mask & 2) {
        isOwner = b;
    }
    if (mask & 4) {
        isMoving = c;
    }
    dirtyMask |= mask;
}

void NetPendingStatus::get(u8 *a, u8 *b, u8 *c, u32 *d) {
    *a = sceneId;
    *b = isOwner;
    *c = isMoving;
    *d = dirtyMask;
}

void NetPendingStatus::reset() {
    sceneId = 0x3f;
    isOwner = 0;
    isMoving = 0;
    dirtyMask = 0;
}

NetSlotStatus::NetSlotStatus() { reset(); }

NetSlotStatus::~NetSlotStatus() {}

void NetSlotStatus::set(u8 a, u8 b, u8 c) {
    sceneId = a;
    isOwner = b;
    isMoving = c;
}

void NetSlotStatus::get(u8 *a, u8 *b, u8 *c) {
    *a = sceneId;
    *b = isOwner;
    *c = isMoving;
}

void NetSlotStatus::reset() {
    sceneId = 0x3f;
    isOwner = 0;
    isMoving = 0;
}

NetMoveRequest::NetMoveRequest() { reset(); }

NetMoveRequest::~NetMoveRequest() {}

void NetMoveRequest::set(u32 a, u8 b) {
    slot = a;
    targetScene = b;
}

void NetMoveRequest::get(s32 *a, u8 *b) {
    *a = slot;
    *b = targetScene;
}

void NetMoveRequest::reset() {
    slot = 4;
    targetScene = 0x3f;
}

NetMoveReady::NetMoveReady() { reset(); }

NetMoveReady::~NetMoveReady() {}

void NetMoveReady::set(u32 v) { unk_00 = v; }

void NetMoveReady::get(u32 *out) { *out = unk_00; }

void NetMoveReady::reset() { unk_00 = 0; }

extern "C" void NetSyncMsg_Init() {}

extern "C" void NetSyncMsg_Fini() {}

extern "C" void NetSyncMsg_Pack(u8 *p, s32 a, s32 b, s32 c) {
    *p = (a & 7) | (((b << 5) & 0xe0) | (c << 3));
}

extern "C" void NetSyncMsg_Unpack(u8 *p, s32 *a, s32 *b, s32 *c) {
    *a = *p & 7;
    *b = (*p >> 5) & 7;
    *c = (*p >> 3) & 3;
}

extern "C" void NetArea_WriteStateAPart0() {}

extern "C" void NetArea_WriteStateANpcTalk() {
    u8 v = 1;
    gCommManager->appendAuxB(&v, 1);
}

extern "C" void NetArea_BuildStateA() {
    CommManager *g = gCommManager;
    g->clearAuxLenA();
    u8 *base = (u8 *)g->getAuxBufA();
    u8 *p = base + 2;
    s32 m = Scene_GetCurrent();
    Unk_020a647c_Buf b;
    u32 i;
    for (i = 0; i < 2; i++) {
        g->auxWritePtrA = p + 4;
        u8 *start = g->auxWritePtrA;
        sNetStateAWriters[i](m);
        u8 *cur = g->auxWritePtrA;
        s32 diff = cur - start;
        if (diff != 0) {
            b.len = diff;
            b.id = i;
            MI_CpuCopy8(&b.len, p, 4);
            p = cur;
        }
    }
    s32 tot = p - base;
    b.total = tot - 2;
    MI_CpuCopy8(&b.total, base, 2);
    g->setAuxLenA(tot);
}

