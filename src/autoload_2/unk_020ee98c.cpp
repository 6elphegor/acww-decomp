// mwcc-flags: -nothumb -O4,p
// In-house BGM controller func_020ee98c, autoload_2 0x020ee98c-0x020ef150. C++, mwcc 1.2/base -O4,p.
// Header = G004_all_best.cpp prototypes (func_020ef6c8 now takes its real second argument).
#include "types.h"

struct ListNode {
    ListNode *prev;
    ListNode *next;
};
struct List {
    ListNode *head;
    ListNode *tail;
};

struct NodeInfo {
    u8 pad0[4];
    u32 unk_04;
    u8 pad1[4];
    u16 unk_0c;
};
struct InfoNode {
    InfoNode *unk_00;
    InfoNode *unk_04;
    NodeInfo *unk_08;
};
struct PrioNode {
    PrioNode *unk_00;
    PrioNode *unk_04;
    void *unk_08;
    u16 unk_0c;
};
struct InfoList {
    InfoNode *head;
};

class Unk_Task {
public:
    virtual void vfunc_00();
};
typedef void (Unk_Task::*TaskFn)();

struct TaskNode {
    TaskNode *unk_00;
    TaskNode *unk_04;
    Unk_Task *unk_08;
};
struct TaskNode10 {
    u8 pad[0x10];
    Unk_Task *unk_10;
};
struct TaskList4 {
    TaskNode10 *unk_00;
    TaskFn unk_04;
};
struct TaskList {
    TaskNode *unk_00;
    u32 unk_04;
    TaskFn unk_08;
};

class Unk_Seq {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual s32 vfunc_08(void *p);
    virtual void vfunc_0c(void *p);

    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 unk_06;
    /* 0x08 */ void **unk_08;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ s16 unk_12;
};

struct Ent {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ u16 unk_06;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 pad;
};

struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);
struct Group {
    /* 0x00 */ u8 pad0[8];
    /* 0x08 */ Ent unk_08[3];
    /* 0x2c */ GroupFn unk_2c;
    /* 0x30 */ GroupFn unk_30;
    /* 0x34 */ u16 unk_34;
    /* 0x36 */ u8 unk_36;
};

struct FndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
};
struct PlayCtx {
    /* 0x00 */ Group *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ u8 pad[8];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
};
struct InfoB {
    u8 pad[4];
    u8 unk_04;
};
struct Cfg4 {
    s32 unk_00, unk_04, unk_08, unk_0c;
};
struct Bytes4 {
    u8 b0, b1, b2, b3;
};
struct Player {
    /* 0x00 */ FndList list;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ Bytes4 unk_15;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u8 unk_24[4];
};

extern "C" {
void func_0206d49c(void);
BOOL func_020e7968(List *list, ListNode *node);
BOOL func_020e7a10(List *list, ListNode *node, ListNode *after);
extern TaskNode *data_021f5994;
extern s32 data_0213b1a4;
extern TaskList data_021f59c4;
extern TaskList data_021f59d4;
extern TaskList data_021f59b4;
extern TaskList data_021f59a4;
extern TaskList4 data_021f5998;
extern const char *const data_02135964[];
void *func_01ffcffc(void *);
extern void *data_021f59e8;
extern void *data_021f59f0;
extern u8 data_021f59ec[];
extern u8 data_021f5aac[];
extern u8 data_021f5a1c[];
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void NNS_SndArcPlayerStartSeqArc(void *a, u32 b, void *c);
void NNS_SndHeapLoadState(void *a, u32 b);
void *func_0210bd4c(void *a);
s32 NNS_SndArcLoadGroup(u32 a, void *b);
s32 NNS_SndHeapSaveState(void *a);
void *NNS_SndHeapAlloc(void *a, u32 b, void (*c)(void), u32 d, u32 e);
void *NNS_SndHeapCreate(u32 a, u32 b);
void NNS_SndArcInit(void *a, u32 b, void *c, u32 d);
void NNS_SndArcInitOnMemory(void *a, u32 b);
s32 NNS_SndArcPlayerSetup(void *a);
void NNS_SndInit(void);
void func_0210ef44(u32 a, u32 b, u32 c);
void NNS_FndInitList(void *list, u16 offset);
void NNS_SndHandleReleaseSeq(void *p);
s32 NNS_SndMain(void);
BOOL func_020ee5d4(Ent *e);
void func_020ee630(Ent *e, s32 a);
BOOL func_020ee680(Ent *e, u32 a, u32 b);
void func_020ee5e8(Ent *e, s32 bit, s32 on);
void func_020ee748(Ent *e, s32 c, s32 d);
s32 func_020ee514(Group *g);
void func_020ee6b0(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee6f4(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee58c(Group *g, s32 bit, s32 on);
void func_020ee754(Ent *e);
void func_020ee784(PlayCtx *c);
InfoB *func_0210b8a0(u32 a, u32 b);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void func_0210a1e8(void *p, s32 v);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 v);
void func_0210a148(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackPitch(void *p, u32 a, s32 b);
struct BgmObj {
    u8 pad[0x44];
    s32 unk_44;
};
u64 OS_GetTick(void);
u32 func_020ef150(u32 a, u32 b);
u32 func_020ef6c8(BgmObj *o, u32 id); // BGM id -> sequence number for the object mode
s32 func_020ef7a0(BgmObj *o, s32 v);
void func_020f0858(BgmObj *o, u32 a, s32 b, s32 c);
void func_020f0a68(void *p, u32 v);
extern u8 data_021f5b80[];
extern u8 data_021f5b64, data_021f5b60, data_021f5b48, data_021f5b58, data_021f5b54, data_021f5b4c, data_021f5b50;
extern u8 data_021f5b6c, data_021f5b68, data_021f5b5c;
extern u16 data_021f5b70, data_021f5b74, data_021f5b78;
extern s32 data_021f5b7c;
extern Cfg4 data_021f59f4;
void *NNS_FndGetPrevListObject(void *list, void *obj);
void *NNS_FndGetNextListObject(void *list, void *obj);
void NNS_FndRemoveListObject(void *list, void *obj);
void NNS_FndAppendListObject(void *list, void *obj);

extern s32 (*data_021f5b3c)(PlayCtx *);
extern s32 (*data_021f5b44)(PlayCtx *);
extern s32 (*data_021f5b40)(PlayCtx *);
extern u16 data_0213b200;
void func_020ee8d0(Group *g, s32 i, s32 v);
void func_020ee87c(Group *g, s32 i);
}




















// PROTOS-BEGIN
extern "C" {
BOOL func_020ed54c(TaskList *l);
void func_020ed67c(void);
void func_020ed6b8(void);
BOOL func_020ed764(TaskList4 *l);
s16 func_020ed81c(Unk_Seq *o, s32 loop);
void *func_020ed960(void);
void *func_020ed978(u32 a);
s32 func_020ed9c8(u32 a);
void func_020edad0(s32 a, void *b, void *c);
void func_020edb20(void);
void func_020edbb8(void);
void *func_020edc88(void);
void func_020edc98(FndList *o);
void func_020edcec(Player *o);
BOOL func_020ede18(Player *o);
void func_020ede5c(Group *g, s32 a);
void func_020edec8(Group *g, s32 a);
void func_020edf10(Group *g, s32 i, s32 a);
void func_020edf50(Group *g);
void func_020edf9c(Group *g);
s32 func_020ee514(Group *g);
void func_020ee58c(Group *g, s32 bit, s32 on);
BOOL func_020ee5d4(Ent *e);
void func_020ee5e8(Ent *e, s32 bit, s32 on);
void func_020ee630(Ent *e, s32 x);
BOOL func_020ee680(Ent *e, u32 a, u32 b);
void func_020ee6b0(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee6f4(Ent *e, u32 a, u32 b, s32 c, s16 d);
void func_020ee748(Ent *e, s32 c, s32 d);
void func_020ee754(Ent *e);
void func_020ee784(PlayCtx *p);
void func_020ee87c(Group *g, s32 i);
void func_020ee8d0(Group *g, s32 i, s32 v);
void *func_020ee930(void **p);
void *func_020ee944(void *list, void *obj);
}
// PROTOS-END


extern "C" void func_020ee98c(BgmObj *o, s32 mode, u32 kind, u32 a, u32 b) {
    s32 z;
    s32 y;
    s32 x;
    s32 v;
    u32 t;
    u32 m;
    u32 r;
    if (o->unk_44 == 5) func_0206d49c();
    z = 0;
    switch (mode) {
    case 0:
        if (a == 37) return;
        if (b == 37) return;
        if (a == 39 || b == 39) {
            func_020f0a68(data_021f5b80, 44);
            goto tail;
        }
        y = z;
        x = z;
        switch (kind) {
        case 0:
            t = data_021f5b64;
            if (t == 4) {
                if (data_021f5b60 == 1) {
                    data_021f5b60 = 0;
                } else {
                    data_021f5b60 = 1;
                }
            }
            m = data_021f5b60;
            if (m == 1) {
                data_021f5b48 += 1;
                y = data_021f5b48 * 40;
                if (y > 160) y = 160;
            }
            if (t > 4 && m == 1) {
                y -= (t - 4) << 5;
                if (y < 96) y = 96;
            }
            if (a == 16 || b == 16) {
                data_021f5b58 += 1;
            } else {
                data_021f5b58 = 0;
            }
            if (data_021f5b58 >= 2) {
                y = 172;
                x = 20;
            }
            break;
        case 1:
            if (data_021f5b54 != 0) {
                data_021f5b54 -= 1;
            } else {
                data_021f5b54 = (u8)(((u8)OS_GetTick()) >> 6) + 10;
            }
            switch (data_021f5b54) {
            case 0:
            case 8:
                y = 240;
                x = 125;
                break;
            case 1:
            case 9:
                y = 180;
                x = 110;
                break;
            case 2:
            case 10:
                y = 150;
                x = 90;
                break;
            case 4:
            case 12:
                y = 190;
                x = 125;
                break;
            case 5:
            case 13:
                y = 120;
                x = 110;
                break;
            case 6:
            case 14:
                y = 90;
                x = y;
                break;
            default:
                y = -77;
                x = 105;
                break;
            }
            break;
        case 2:
            r = data_021f5b54;
            if (r == 0) {
                data_021f5b4c = (u8)(((u8)OS_GetTick()) >> 6) + 14;
                data_021f5b54 = 1;
            } else if (r == data_021f5b4c) {
                data_021f5b54 = 0;
                if (data_021f5b50 == 0) {
                    data_021f5b50 = 1;
                } else {
                    data_021f5b50 = 0;
                }
            } else {
                data_021f5b54 = r + 1;
            }
            r = data_021f5b50;
            if (r == 0) {
                y = -(data_021f5b54 << 3);
            } else {
                y = 300 - (data_021f5b54 << 3);
            }
            if (r == 0) {
                x = (u8)(-(data_021f5b54 << 2));
            } else {
                x = (u8)(20 - (data_021f5b54 << 2));
            }
            if (data_021f5b6c == 0) data_021f5b54 = 1;
            break;
        case 3:
            if (data_021f5b54 != 0) {
                data_021f5b54 -= 1;
            } else {
                data_021f5b54 = (u8)(((u8)OS_GetTick()) >> 6) + 10;
            }
            switch (data_021f5b54) {
            case 0:
            case 8:
                y = 90;
                x = 100;
                break;
            case 1:
            case 9:
                y = 30;
                x = 85;
                break;
            case 2:
            case 10:
                y = 0;
                x = 65;
                break;
            case 4:
            case 12:
                y = 40;
                x = 100;
                break;
            case 5:
            case 13:
                y = -30;
                x = 85;
                break;
            case 6:
            case 14:
                y = -60;
                x = 65;
                break;
            default:
                y = -227;
                x = 80;
                break;
            }
            break;
        case 4:
            t = data_021f5b64;
            if (t == 4) {
                if (data_021f5b60 == 1) {
                    data_021f5b60 = 0;
                } else {
                    data_021f5b60 = 1;
                }
            }
            m = data_021f5b60;
            if (m == 1) {
                data_021f5b48 += 1;
                y = data_021f5b48 * 40;
                if (y > 160) y = 160;
            }
            if (t > 4 && m == 1) {
                y -= (t - 4) << 5;
                if (y < 96) y = 96;
            }
            if (a == 16 || b == 16) {
                data_021f5b58 += 1;
            } else {
                data_021f5b58 = 0;
            }
            if (data_021f5b58 >= 2) {
                y = 172;
                x = 20;
            }
            y += 128;
            break;
        }
        z += y;
        v = (u8)(x + 80);
        if (a == 0 || a == 38 || a == 39 || a == 40 || a == 41 || b == 0 || (u16)(b + 0xffda) <= 3) {
            data_021f5b6c = 0;
            data_021f5b68 = 0;
            data_021f5b64 = 0;
        }
        if (a == 42 || b == 42 || a == 43 || b == 43) {
            data_021f5b68 += 1;
            data_021f5b64 = 0;
        }
        data_021f5b64 += 1;
        data_021f5b6c += 1;
        if (a == 40 || a == 41 || a == 38) {
            if (a == 40) {
                data_021f5b70 = data_021f5b74;
                z = 384;
                v = 110;
            }
            if (a == 41) {
                data_021f5b70 = data_021f5b74;
                z = 256;
                v = 127;
            }
            m = data_021f5b70;
            if (a == 38) {
                v = 90;
                z = -128;
            }
            data_021f5b5c = v;
            data_021f5b7c = z;
            if (m != 0) {
                u32 id = func_020ef6c8(o, m);
                func_020f0858(o, (u16)(id + 1), func_020ef7a0(o, v), z);
            }
            data_021f5b70 = 0;
            return;
        } else if (b == 40 || b == 41 || b == 38) {
            m = data_021f5b70;
            if (b == 40) {
                z = 384;
                v = 110;
            }
            if (b == 41) {
                z = 256;
                v = 127;
            }
            if (b == 38) {
                v = 90;
                z = -128;
            }
            data_021f5b5c = v;
            data_021f5b7c = z;
            if (m != 0) {
                u32 id = func_020ef6c8(o, m);
                func_020f0858(o, (u16)(id + 1), func_020ef7a0(o, v), z);
            }
            data_021f5b70 = 0;
            t = func_020ef150(a, b);
            if (t != 95) data_021f5b70 = t;
            return;
        } else {
            t = func_020ef150(a, b);
            if (t == 95) goto tail;
            data_021f5b70 = t;
            data_021f5b5c = v;
            data_021f5b7c = z;
        }
tail:
        data_021f5b78 = a;
        data_021f5b74 = b;
        return;
    case 1:
        func_020f0a68(data_021f5b80, 44);
        break;
    case 2:
        break;
    }
}

