#include "types.h"

#define ALIGN4(x) (((x) + 3) & ~3)
static inline u32 AL(u32 v, u32 a) {
    return (v + a - 1) & ~(a - 1);
}

struct Unk_0205b848_Cfg { u8 pad[0x6c]; u8 unk_6c; };

// data_021c6240 object
struct Unk_0205c3b0 {
    u32 unk_00[25];
    u16 unk_64[25];
    u16 unk_96[25];

    Unk_0205c3b0();
    ~Unk_0205c3b0();
    void func_0205c3b0(s32 i, u32 v);
    u32 func_0205c3bc(s32 i);
    s32 func_0205c3c8(s32 v);
    void func_0205c400(s32 i, u32 v);
    u32 func_0205c40c(s32 i);
    u32 func_0205c418(s32 i);
    void func_0205c420();
    void func_0205c460();
};

extern "C" {
extern void *data_021c6198;
extern void *gPlayerActorHeap;
extern void *data_021c61a0;
extern void *data_021c61a4;
extern void *data_021c61a8;
extern void *data_021c61ac;
extern void *data_021c61b0;
extern void *data_021c61b4;
extern void *data_021c61b8;
extern void *data_021c61bc;
extern void *data_021c61c0;
extern void *data_021c61c4;
extern void *data_021c61c8;
extern void *data_021c61cc;
extern void *data_021c61d0;
extern void *data_021c61d4;
extern void *data_021c61d8;
extern void *data_021c61dc;
extern void *data_021c61e0;
extern void *data_021c61e4;
extern void *data_021c61e8;
extern void *data_021c61ec;
extern void *data_021c61f0;
extern void *data_021c61f4;
extern void *data_021c61f8;
extern void *data_021c61fc;
extern void *data_021c6200;
extern void *data_021c6204;
extern void *data_021c6208;
extern void *data_021c620c;
extern void *data_021c6210;
extern void *data_021c6214;
extern void *data_021c6218;
extern void *data_021c621c;
extern char data_021c622c[];
extern Unk_0205c3b0 data_021c6240;
extern u8 data_020e416c;
extern u32 data_020cbf94, data_020cbf98, data_020cbf9c, data_020cbfa0, data_020cbfa4;
extern u32 data_020c8b9c;
extern u32 data_020c8ba0;
extern Unk_0205b848_Cfg *data_020cbb18;
extern const u8 data_020cab88[4];
extern const u8 data_020cab8c[4];
extern const u8 data_020cab90[4];
extern const u8 data_020cab94[4];
extern const u8 data_020cab98[];
extern const u16 data_020cacdc[];
extern const u16 data_020caf64[];
extern u8 data_020dc108[];
extern u8 *data_020dc10c[];
extern u16 data_020dc11c[];

void func_020e8c88(void *heap);
void *Heap_AllocAligned(void *, u32, s32);
void func_020e885c(void *);
void func_020e877c(void *);
void *ExpHeap_Create(u32 size, void *parent);
void *FrameHeap_Create(u32 size, void *parent, ...);
u32 func_02094340(void);
u32 func_0209433c(void);
s32 func_020812f4(void);
void *func_020b50e8(void);
s32 func_020b491c(void *);
s32 func_020b4928(void *);
s32 func_02084fbc(void);
u32 func_02077e28(void);
u32 func_02077e20(void);
u32 func_0205ffbc(void);
u32 func_0205ecfc(void);
u32 func_0205eec0(void);
u32 func_0205d2fc(void);
u32 func_0205ed04(void);
u32 func_0205d770(void);
u32 func_0205f018(void);
u32 func_0205ddc0(void);
u32 func_0205c8c8(void);
u32 func_0205d178(void);
u32 func_0205d418(void);
u32 func_0203c6c0(void);
u32 func_0205c604(void);
u32 func_0205c5fc(void);
u32 func_0205c5f4(void);
void MI_CpuCopy8(void *, void *, u32);
s32 File_LoadToBuffer(char *, void *, u32);
s32 func_020639e8(char *, const char *, ...);
BOOL Item_IsFurniture(u16 *);
void func_0205beb8(void);
void func_0205bed4(void *parent);

void func_0205c268(u8 *, s32);
void func_0205c380(u8 *, u32);
u32 func_0205c5d0(u32);
char *func_0205c60c(u32);
void func_0205c2dc(u8 *, s32, s32, s32);
}

extern const u8 data_020cab88[4];
const u8 data_020cab88[4] = {17, 17, 0, 0};
void *data_021c61a8;
extern const u8 data_020cab94[4];
const u8 data_020cab94[4] = {9, 11, 12, 14};
void *data_021c61a4;
extern const u8 data_020cab90[4];
const u8 data_020cab90[4] = {12, 14, 0, 0};
extern const u16 data_020cab84[2];
const u16 data_020cab84[2] = {0x800, 0};
extern const u16 data_020cab80[2];  // 0x020cab80, 0x020cab84: start of this file's .rodata; read by the unit at 0x020594dc (0x0205a900, 0x0205a90c)
const u16 data_020cab80[2] = {0x400, 0};
void *data_021c621c;
void *data_021c6218;
void *data_021c6214;
void *data_021c6210;
void *data_021c620c;
extern const u16 data_020caf64[0x144];
const u16 data_020caf64[0x144] = {
    367, 367, 367, 367, 367, 187, 188, 189, 189, 190, 190, 191, 367, 192, 191, 367,
    192, 193, 197, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 194, 195, 196, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208,
    209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240,
    241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 367, 367, 367, 367, 367,
    367, 252, 253, 254, 255, 256, 257, 258, 367, 367, 367, 367, 367, 259, 260, 261,
    262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277,
    278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 367, 367, 296,
    297, 298, 299, 300, 367, 367, 301, 302, 303, 307, 308, 367, 367, 367, 367, 304,
    367, 305, 367, 306, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 309, 310, 313, 313, 314, 367, 367, 367, 367, 291, 292, 293, 294, 295, 315,
    316, 317, 318, 319, 367, 320, 321, 322, 323, 324, 325, 326, 327, 367, 367, 328,
    367, 329, 367, 367, 367, 367, 367, 367, 367, 330, 367, 367, 367, 331, 332, 367,
    367, 367, 367, 367, 367, 367, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342,
    367, 367, 367, 343, 344, 345, 346, 347, 348, 349, 367, 367, 350, 351, 352, 353,
    352, 353, 354, 355, 354, 355, 367, 356, 357, 358, 359, 359, 360, 361, 362, 363,
    364, 367, 365, 366, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367,
};
void *data_021c6204;
void *data_021c6200;
void *data_021c61fc;
void *data_021c61f8;
void *data_021c61f4;
extern const u16 data_020cacdc[0x144];
const u16 data_020cacdc[0x144] = {
    367, 367, 367, 367, 367, 1, 2, 3, 3, 4, 4, 5, 6, 7, 5, 6,
    7, 8, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 9, 10, 11, 367, 367, 367, 12, 367,
    367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367, 367, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 0, 30, 31, 32, 0, 33, 34, 35, 36, 37,
    0, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 0, 66, 67,
    68, 69, 70, 71, 72, 73, 74, 367, 75, 76, 77, 78, 79, 80, 81, 82,
    83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
    99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 367, 367, 367,
    117, 118, 119, 120, 367, 367, 367, 121, 122, 367, 367, 367, 367, 367, 367, 123,
    367, 367, 367, 124, 367, 367, 367, 367, 367, 367, 367, 367, 125, 367, 367, 367,
    367, 367, 367, 126, 126, 127, 367, 367, 367, 367, 112, 113, 114, 115, 116, 128,
    129, 130, 131, 132, 367, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 367, 367, 367, 367, 367, 367, 367, 146, 367, 367, 367, 147, 148, 149,
    150, 151, 367, 367, 367, 367, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161,
    367, 367, 367, 162, 163, 164, 165, 166, 167, 168, 367, 367, 169, 170, 171, 172,
    171, 172, 173, 174, 173, 174, 367, 175, 176, 177, 178, 178, 179, 180, 181, 182,
    183, 367, 184, 185, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367, 367,
    367, 367, 367, 367,
};
void *data_021c61ec;
void *data_021c61e8;
void *data_021c61e4;
void *data_021c61e0;
char data_021c622c[0x14];
void *data_021c61d8;
u8 *data_020dc10c[4] = {(u8 *)data_020cab90, (u8 *)data_020cab8c, (u8 *)data_020cab94, (u8 *)data_020cab88};
void *data_021c61d0;
void *data_021c61cc;
void *data_021c61c8;
void *data_021c61c4;
void *data_021c61c0;
void *data_021c6208;
void *data_021c61b8;
void *data_021c61b4;
void *data_021c61f0;
void *data_021c61ac;
extern const u8 data_020cab98[0x144];
const u8 data_020cab98[0x144] = {
    0, 0, 0, 2, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0,
    0, 1, 1, 3, 3, 3, 3, 2, 3, 3, 2, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 2, 2,
    3, 3, 2, 3, 3, 3, 2, 2, 2, 0, 3, 3, 0, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 2, 0, 3, 3, 3, 3, 3, 3, 3, 3,
    0, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3,
};
void *data_021c61d4;
void *data_021c61a0;
void *gPlayerActorHeap;
void *data_021c61bc;
Unk_0205c3b0 data_021c6240;
void *data_021c61dc;
extern const u8 data_020cab8c[4];
const u8 data_020cab8c[4] = {9, 11, 0, 0};
u16 data_020dc11c[0x144] = {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 2, 2, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3,
};
void *data_021c61b0;
void *data_021c6198;
u8 data_020dc108[4] = {1, 1, 2, 1};

enum Unk_0205b7cc_Zero { UNK_0205B7CC_ZERO = 0 };

extern "C" void func_0205c644(void *parent) {
    func_0205bed4(parent);
    data_021c6240.func_0205c460();
    if (data_021c61e0) func_020e877c(data_021c61e0);
}

extern "C" void func_0205c62c() {
    data_021c6240.func_0205c420();
    func_0205beb8();
}

extern "C" char *func_0205c60c(u32 x) {
    u32 z = x >> 5;
    func_020639e8(data_021c622c, "/anm/%d/%d.nsbca", z, x);
    return data_021c622c;
}

extern "C" u32 func_0205c604() { return 0x15c0; }

extern "C" u32 func_0205c5fc() { return 0x270; }

extern "C" u32 func_0205c5f4() { return 0x270; }

extern "C" u32 func_0205c5e8(u32 i) { return data_020cacdc[i]; }

extern "C" u32 func_0205c5dc(u32 i) { return data_020caf64[i]; }

extern "C" u32 func_0205c5d0(u32 i) { return data_020dc108[i]; }

extern "C" u32 func_0205c5ac(u32 a, u32 b) {
    func_0205c5d0(a);
    return data_020dc10c[a][b * 2];
}

extern "C" u32 func_0205c588(u32 a, u32 b) {
    func_0205c5d0(a);
    u8 *q = data_020dc10c[a] + b * 2;
    return q[1];
}

extern "C" u32 func_0205c57c(u32 i) { return data_020dc11c[i]; }

extern "C" u32 func_0205c570(u32 i) { return data_020cab98[i]; }

Unk_0205c3b0::Unk_0205c3b0() {
    for (s32 i = 0; i < 0x19; i++) unk_64[i] = 0x144;
}

Unk_0205c3b0::~Unk_0205c3b0() {}

void Unk_0205c3b0::func_0205c460() {
    void *heap = data_021c61e0;
    u32 n = data_020cbb18->unk_6c;
    u32 m = func_020b4928(func_020b50e8());
    if (n < m) m = n;
    u32 k = m ? m : 1;
    u32 v[4];
    v[0] = func_020b491c(func_020b50e8()) + func_02084fbc() - k;
    v[1] = func_0205c604();
    v[2] = func_0205c5fc();
    v[3] = func_0205c5f4();
    u32 i;
    for (i = 0; i < m; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[1], 4);
    for (i = 4; i < v[0] + 4; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[1], 4);
    for (i = 9; i < m + 9; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[2], 4);
    m = 4;
    for (i = 0xd; i < v[0] + 0xd; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[2], m);
    for (i = 0x12; i < v[0] + 0x12; i++) unk_00[i] = (u32)Heap_AllocAligned(heap, v[3], m);
}

void Unk_0205c3b0::func_0205c420() {
    s32 i;
    for (i = 0; i < 0x19; i++) {
        unk_00[i] = 0;
        unk_64[i] = 0x144;
        unk_96[i] = 0;
    }
    if (data_021c61e0) func_020e885c(data_021c61e0);
}

u32 Unk_0205c3b0::func_0205c418(s32 i) { return unk_00[i]; }

u32 Unk_0205c3b0::func_0205c40c(s32 i) { return unk_64[i]; }

void Unk_0205c3b0::func_0205c400(s32 i, u32 v) { unk_64[i] = v; }

s32 Unk_0205c3b0::func_0205c3c8(s32 v) {
    s32 lo = 0, hi = 0x19;
    if (v < 0x137) hi = 9;
    else lo = 9;
    for (; lo < hi; lo++) {
        s32 c = unk_64[lo];
        if (c == v) return lo;
    }
    return 0x19;
}

u32 Unk_0205c3b0::func_0205c3bc(s32 i) { return unk_96[i]; }

void Unk_0205c3b0::func_0205c3b0(s32 i, u32 v) { unk_96[i] = v; }

extern "C" void func_0205c3a8(u8 *p) { *p = 0x19; }

extern "C" void func_0205c3a4() {}

extern "C" void func_0205c384(u8 *p, u32 v) {
    func_0205c380(p, v);
    func_0205c2dc(p, 0x144, 0, 0);
}

extern "C" void func_0205c380(u8 *p, u32 v) { *p = v; }

extern "C" void func_0205c2dc(u8 *p, s32 a, s32 b, s32 c) {
    u32 cur = *p;
    if (a >= 0x144) {
        data_021c6240.func_0205c400(cur, 0x144);
        data_021c6240.func_0205c3b0(cur, 0);
        return;
    }
    if (c == 0 && a == data_021c6240.func_0205c40c(cur)) return;
    if (b != 0) {
        s32 slot = data_021c6240.func_0205c3c8(a);
        if (slot != 0x19) {
            func_0205c268(p, slot);
            return;
        }
    }
    u32 buf = data_021c6240.func_0205c418(cur);
    u32 sz;
    if ((s32)cur > 8) sz = func_0205c5fc();
    else sz = func_0205c604();
    s32 r = File_LoadToBuffer(func_0205c60c(a), (void *)buf, sz);
    if (r != 0) {
        data_021c6240.func_0205c400(cur, a);
        data_021c6240.func_0205c3b0(cur, r);
    }
}

extern "C" void func_0205c268(u8 *p, s32 v) {
    u32 cur = *p;
    if (v != cur) {
        u32 x = data_021c6240.func_0205c40c(v);
        if (x != data_021c6240.func_0205c40c(cur)) {
            u32 sz = data_021c6240.func_0205c3bc(v);
            if (sz != 0) {
                u32 a = data_021c6240.func_0205c418(v);
                u32 b = data_021c6240.func_0205c418(cur);
                if (a != 0 && b != 0) {
                    MI_CpuCopy8((void *)a, (void *)b, sz);
                    data_021c6240.func_0205c400(cur, x);
                    data_021c6240.func_0205c3b0(cur, sz);
                }
            }
        }
    }
}

extern "C" u32 func_0205c254(u8 *p) { return data_021c6240.func_0205c418(*p); }

extern "C" u32 func_0205c240(u8 *p) { return data_021c6240.func_0205c40c(*p); }

extern "C" void func_0205c228(u32 size, void *parent) { data_021c6218 = ExpHeap_Create(size, parent); }

extern "C" void func_0205c20c() { func_020e8c88(data_021c6218); data_021c6218 = 0; }

extern "C" void func_0205c1f4(u32 size, void *parent) { data_021c6214 = ExpHeap_Create(size, parent); }

extern "C" void func_0205c1d8() { func_020e8c88(data_021c6214); data_021c6214 = 0; }

extern "C" void func_0205c1c0(u32 size, void *parent) { data_021c6210 = ExpHeap_Create(size, parent); }

extern "C" void func_0205c1a4() { func_020e8c88(data_021c6210); data_021c6210 = 0; }

extern "C" void func_0205c18c(u32 size, void *parent) { data_021c620c = ExpHeap_Create(size, parent); }

extern "C" void func_0205c170() { func_020e8c88(data_021c620c); data_021c620c = 0; }

extern "C" void func_0205c158(u32 size, void *parent) { data_021c6208 = ExpHeap_Create(size, parent); }

extern "C" void func_0205c13c(void) {
    func_020e8c88(data_021c6208);
    data_021c6208 = NULL;
}

extern "C" void func_0205c124(u32 size, void *parent) {
    data_021c6204 = FrameHeap_Create(size, parent);
}

extern "C" void func_0205c108(void) {
    func_020e8c88(data_021c6204);
    data_021c6204 = NULL;
}

extern "C" void func_0205c0f0(u32 size, void *parent) {
    data_021c6200 = ExpHeap_Create(size, parent);
}

extern "C" void func_0205c0d4(void) {
    func_020e8c88(data_021c6200);
    data_021c6200 = NULL;
}

extern "C" void func_0205c0bc(u32 size, void *parent) {
    data_021c61fc = ExpHeap_Create(size, parent);
}

extern "C" void func_0205c0a0(void) {
    func_020e8c88(data_021c61fc);
    data_021c61fc = NULL;
}

extern "C" void func_0205c088(u32 size, void *parent) {
    data_021c61f8 = ExpHeap_Create(size, parent);
}

extern "C" void func_0205c06c(void) {
    func_020e8c88(data_021c61f8);
    data_021c61f8 = NULL;
}

extern "C" void func_0205c054(u32 size, void *parent) {
    data_021c61f4 = ExpHeap_Create(size, parent);
}

extern "C" void func_0205c038(void) {
    func_020e8c88(data_021c61f4);
    data_021c61f4 = NULL;
}

extern "C" void func_0205c020(u32 size, void *parent) {
    data_021c61f0 = ExpHeap_Create(size, parent);
}

extern "C" void func_0205c004(void) {
    func_020e8c88(data_021c61f0);
    data_021c61f0 = NULL;
}

extern "C" void func_0205bfec(u32 size, void *parent) {
    data_021c61ec = ExpHeap_Create(size, parent);
}

extern "C" void func_0205bfd0(void) {
    func_020e8c88(data_021c61ec);
    data_021c61ec = NULL;
}

extern "C" void func_0205bfb8(u32 size, void *parent) {
    data_021c61e8 = ExpHeap_Create(size, parent);
}

extern "C" void func_0205bf9c(void) {
    func_020e8c88(data_021c61e8);
    data_021c61e8 = NULL;
}

extern "C" void func_0205bf84(u32 size, void *parent) {
    data_021c61e4 = ExpHeap_Create(size, parent);
}

extern "C" void func_0205bf68(void) {
    func_020e8c88(data_021c61e4);
    data_021c61e4 = NULL;
}

extern "C" void func_0205bed4(void *parent) {
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 n = data_020cbb18->unk_6c;
    u32 a = func_020b4928(func_020b50e8());
    if (n < a) {
        a = n;
    }
    u32 r = a != 0 ? a : 1;
    u32 c = func_020b491c(func_020b50e8());
    r = c + func_02084fbc() - r;
    s0 += ALIGN4(func_0205c604());
    s1 += ALIGN4(func_0205c5fc());
    s2 += ALIGN4(func_0205c5f4());
    u32 m = a + r;
    s3 += s0 * m;
    s3 += s1 * m;
    s3 += s2 * r;
    data_021c61e0 = FrameHeap_Create(s3, parent);
}

extern "C" void func_0205beb8(void) {
    func_020e8c88(data_021c61e0);
    data_021c61e0 = NULL;
}

extern "C" void func_0205be74(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0203c6c0());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d + 1);
    data_021c61dc = FrameHeap_Create(t, parent);
}

extern "C" void func_0205be58(void) {
    func_020e8c88(data_021c61dc);
    data_021c61dc = NULL;
}

extern "C" void func_0205be20(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d418());
    t += s * n;
    data_021c61d8 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205be04(void) {
    func_020e8c88(data_021c61d8);
    data_021c61d8 = NULL;
}

extern "C" void func_0205bdc4(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d178());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d);
    data_021c61d4 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bda8(void) {
    func_020e8c88(data_021c61d4);
    data_021c61d4 = NULL;
}

extern "C" void func_0205bd70(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205c8c8());
    t += s * n;
    data_021c61d0 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bd54(void) {
    func_020e8c88(data_021c61d0);
    data_021c61d0 = NULL;
}

extern "C" void func_0205bd1c(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ddc0());
    t += s * n;
    data_021c61cc = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bd00(void) {
    func_020e8c88(data_021c61cc);
    data_021c61cc = NULL;
}

extern "C" void func_0205bcd0(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += func_0205f018();
    t += s * n;
    data_021c61c8 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bcb4(void) {
    func_020e8c88(data_021c61c8);
    data_021c61c8 = NULL;
}

extern "C" void func_0205bc7c(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d770());
    t += s * n;
    data_021c61c4 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bc60(void) {
    func_020e8c88(data_021c61c4);
    data_021c61c4 = NULL;
}

extern "C" void func_0205bc20(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ed04());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d);
    data_021c61c0 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bc04(void) {
    func_020e8c88(data_021c61c0);
    data_021c61c0 = NULL;
}

extern "C" void func_0205bbbc(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205d2fc());
    s32 c = func_020b491c(func_020b50e8());
    s32 e = c + func_02084fbc();
    t += ALIGN4(s + 0x48) * e;
    data_021c61bc = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bba0(void) {
    func_020e8c88(data_021c61bc);
    data_021c61bc = NULL;
}

extern "C" void func_0205bb64(void *parent) {
    u32 n = data_020cbb18->unk_6c;
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205eec0());
    t += ALIGN4(s + 0x48) * n;
    data_021c61b8 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bb48(void) {
    func_020e8c88(data_021c61b8);
    data_021c61b8 = NULL;
}

extern "C" void func_0205bb00(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ecfc());
    s32 c = func_020b491c(func_020b50e8());
    s32 e = c + func_02084fbc();
    t += ALIGN4(s + 0x48) * e;
    data_021c61b4 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205bae4(void) {
    func_020e8c88(data_021c61b4);
    data_021c61b4 = NULL;
}

extern "C" void func_0205baa4(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_0205ffbc());
    s32 c = func_020b491c(func_020b50e8());
    s32 d = func_02084fbc();
    t += s * (c + d);
    data_021c61b0 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205ba88(void) {
    func_020e8c88(data_021c61b0);
    data_021c61b0 = NULL;
}

extern "C" void func_0205ba1c(void *parent) {
    s32 n;
    if (data_020e416c == 0 ? TRUE : FALSE) {
        n = func_020812f4();
    } else {
        n = func_020b491c(func_020b50e8()) - func_020b4928(func_020b50e8());
    }
    n += func_02084fbc();
    u32 s = 0, t = 0;
    s += ALIGN4(data_020cbfa4);
    t += s * n;
    data_021c61ac = FrameHeap_Create(t, parent);
}

extern "C" void func_0205ba00(void) {
    func_020e8c88(data_021c61ac);
    data_021c61ac = NULL;
}

extern "C" void func_0205b9c0(void *parent) {
    u32 t = 0;
    u32 m = data_020cbf9c - 1;
    u32 k = ~m;
    u32 v = (data_020cbfa0 + m) & k;
    v = (v + 0x48 + m) & k;
    t += v * 8;
    data_021c61a8 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205b9a4(void) {
    func_020e8c88(data_021c61a8);
    data_021c61a8 = NULL;
}

extern "C" void func_0205b960(void *parent) {
    u32 n = func_02084fbc();
    u32 t = 0;
    u32 m = data_020cbf94 - 1;
    u32 k = ~m;
    u32 v = (data_020cbf98 + m) & k;
    v = (v + 0x48 + m) & k;
    t += v * n;
    data_021c61a4 = FrameHeap_Create(t, parent);
}

extern "C" void func_0205b944(void) {
    func_020e8c88(data_021c61a4);
    data_021c61a4 = NULL;
}

extern "C" void *func_0205b8c0(void *parent) {
    u32 t = 0;
    s32 n;
    if (data_020e416c == 0 ? TRUE : FALSE) {
        n = func_020812f4();
    } else {
        n = func_020b491c(func_020b50e8()) - func_020b4928(func_020b50e8());
    }
    s32 m = func_02084fbc();
    u32 x = ALIGN4(ALIGN4(func_02077e28()) + 0x48);
    t += x * n;
    x = ALIGN4(ALIGN4(func_02077e20()) + 0x48);
    u32 size = t + x * m;
    if (size != 0) {
        data_021c61a0 = FrameHeap_Create(size, parent);
    }
    return data_021c61a0;
}

extern "C" void func_0205b8a0(void) {
    if (data_021c61a0) {
        func_020e8c88(data_021c61a0);
    }
    data_021c61a0 = NULL;
}

extern "C" void func_0205b864(void *parent) {
    u32 s = 0, t = 0;
    s += ALIGN4(func_02094340());
    u32 a = func_0209433c();
    s += AL(16, a);
    t += s * 4;
    gPlayerActorHeap = ExpHeap_Create(t, parent);
}

extern "C" void func_0205b848(void) {
    func_020e8c88(gPlayerActorHeap);
    gPlayerActorHeap = NULL;
}

extern "C" void func_0205b818(s32 x) {
    Unk_0205b7cc_Zero z = UNK_0205B7CC_ZERO;
    u32 s = (data_020c8ba0 + 3) & ~3;
    s = (s + 0x4b) & ~3;
    data_021c6198 = FrameHeap_Create(z + s, (void *)x, s, z);
}

extern "C" void func_0205b7fc() {
    func_020e8c88(data_021c6198);
    data_021c6198 = NULL;
}

extern "C" void func_0205b7cc(s32 x) {
    s32 a = x;
    Unk_0205b7cc_Zero z = UNK_0205B7CC_ZERO;
    u32 s = (data_020c8b9c + 3) & ~3;
    s = (s + 0x4b) & ~3;
    u32 e = z + s;
    data_021c621c = FrameHeap_Create(e, (void *)a, s, z);
}

extern "C" void func_0205b7b0() {
    func_020e8c88(data_021c621c);
    data_021c621c = NULL;
}

