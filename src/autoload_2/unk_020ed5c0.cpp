// mwcc-flags: -nothumb -O4,p
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
// second view of a priority node (the inserted node's key is read through it inside the loop, see notes.txt)
struct PrioNodeB { void *a, *b, *c; u16 unk_0c; };
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
void func_0210a294(void *p);
void func_0210a378(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0210cf78(void *a, u32 b, void *c);
void func_0210bd58(void *a, u32 b);
void *func_0210bd4c(void *a);
s32 func_0210ccbc(u32 a, void *b);
s32 func_0210be44(void *a);
void *func_0210be9c(void *a, u32 b, void (*c)(void), u32 d, u32 e);
void *func_0210bfe8(u32 a, u32 b);
void func_0210bc00(void *a, u32 b, void *c, u32 d);
void func_0210b918(void *a, u32 b);
s32 func_0210d064(void *a);
void func_0210962c(void);
void func_0210ef44(u32 a, u32 b, u32 c);
void func_02100444(void *list, u16 offset);
void func_0210a27c(void *p);
s32 func_021095f8(void);
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
void func_0210a26c(void *p, s32 v);
void func_0210a1e8(void *p, s32 v);
void func_0210a0e8(void *p, u32 a, s32 v);
void func_0210a148(void *p, u32 a, u32 b);
void func_0210a118(void *p, u32 a, s32 b);
struct BgmObj {
    u8 pad[0x44];
    s32 unk_44;
};
u64 func_01ffa6b4(void);
u32 func_020ef150(u32 a, u32 b);
u32 func_020ef6c8(BgmObj *o, u32 id);
s32 func_020ef7a0(BgmObj *o, s32 v);
void func_020f0858(BgmObj *o, u32 a, s32 b, s32 c);
void func_020f0a68(void *p, u32 v);
extern u8 data_021f5b80[];
extern u8 data_021f5b64, data_021f5b60, data_021f5b48, data_021f5b58, data_021f5b54, data_021f5b4c, data_021f5b50;
extern u8 data_021f5b6c, data_021f5b68, data_021f5b5c;
extern u16 data_021f5b70, data_021f5b74, data_021f5b78;
extern s32 data_021f5b7c;
extern Cfg4 data_021f59f4;
void *func_02100234(void *list, void *obj);
void *func_02100248(void *list, void *obj);
void func_02100260(void *list, void *obj);
void func_021003b0(void *list, void *obj);

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

extern "C" BOOL func_020ed5c0(List *list, PrioNode *node) {
    PrioNode *prev = (PrioNode *)list->head;
    PrioNode *next;
    if (node == NULL) return FALSE;
    if (prev == NULL) return func_020e7968(list, (ListNode *)node);
    if (prev->unk_0c > node->unk_0c) return func_020e7a10(list, (ListNode *)node, NULL);
    while ((next = prev->unk_04) != NULL && next->unk_0c <= ((PrioNodeB *)node)->unk_0c) prev = next;
    return func_020e7a10(list, (ListNode *)node, (ListNode *)prev);
}
