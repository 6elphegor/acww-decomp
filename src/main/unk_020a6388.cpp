#include "types.h"

struct CommManager {
    u8 pad_00[0x104];
    u8 *unk_104;
    u8 pad_108[8];
    u8 *unk_110;

    void flushDeferred();
};

extern CommManager *gCommManager;

struct NetMoveReady {
    u32 unk_00;
    void set(u32 v);
};

struct NetMoveRequest {
    u32 unk_00;
    u8 unk_04;
    void get(s32 *a, u8 *b);
    void set(u32 a, u8 b);
};

struct NetSlotStatus {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    void get(u8 *a, u8 *b, u8 *c);
    void set(u8 a, u8 b, u8 c);
};

extern "C" void _ZN16NetPendingStatus9setMaskedEhhhj(void *self, u32 a, u32 b, u32 c, u32 mask);

struct NetPendingStatus {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u32 unk_04;
};

extern NetSlotStatus gNetSessionState[];
extern NetMoveRequest data_021edaa0[];
extern u8 data_021edac0[];  // gNetSessionState + 0x2c (NetMoveReady[4] member of U195's singleton)
extern u8 data_021edad0[];  // gNetSessionState + 0x3c (NetPendingStatus[4] member)

extern "C" s32 NetArea_IsBusyStubB() { return 0; }

extern "C" s32 NetArea_IsBusyStubA() { return 0; }

extern "C" void NetArea_OnSceneCreateNop() {}

extern "C" void NetArea_QueueMoveRequest(u32 a, u8 b) {
    NetMoveRequest *p = data_021edaa0;
    s32 i;
    for (i = 3; i >= 0; p++, i--) {
        s32 v;
        u8 t;
        p->get(&v, &t);
        if (v >= 4) {
            p->set(a, b);
            break;
        }
    }
}

extern "C" void NetArea_SetSlotStatus(s32 idx, u32 b, u32 c, u32 d, u32 e) {
    NetSlotStatus *t = &gNetSessionState[idx];
    u8 v[3];
    t->get(&v[0], &v[1], &v[2]);
    if (e & 1) {
        v[0] = b;
    }
    if (e & 2) {
        v[1] = c;
    }
    if (e & 4) {
        v[2] = d;
    }
    t->set(v[0], v[1], v[2]);
    gCommManager->flushDeferred();
}

extern "C" void NetArea_SetMoveReady(s32 idx, u32 v) { ((NetMoveReady *)data_021edac0)[idx].set(v); }

extern "C" void NetArea_SetPendingStatus(u32 idx, u32 a, u32 b, u32 c, u32 d) {
    _ZN16NetPendingStatus9setMaskedEhhhj(&((NetPendingStatus *)data_021edad0)[idx], a, b, c, d);
}
