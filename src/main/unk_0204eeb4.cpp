#include "types.h"

inline void *operator new(unsigned long, void *p) {
    return p;
}

struct Unk_0204e858_Vec {
    s32 x, y, z;
};

struct Unk_0204e858_Cell {
    u8 pad_00[0x24];
    u16 *unk_24;
};

struct Unk_0204e858_Grid {
    Unk_0204e858_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_0204ee94 {
    u32 unk_00;
    u32 unk_04[2];
    u32 unk_0c;
    Unk_0204ee94();
};

struct Unk_0204eeb4_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u32 unk_04;
    u32 unk_08;
};

Unk_0204eeb4_Ent data_021c47fc[12];

static inline Unk_0204e858_Cell *Unk_0204e858_GetCell(Unk_0204e858_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04 && y < g->unk_08 && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04 + x];
    }
    return NULL;
}

static inline BOOL Unk_0204e8b0_Bit(u16 *m, u32 x, u32 y) {
    BOOL r = FALSE;
    if (x >= 16 || y >= 16) {
    } else {
        r = TRUE;
    }
    if (r) {
        if (x < 16) {
            u32 v = m[y];
            r = TRUE;
            if ((v & (r << x)) != 0) {
                return r;
            }
        }
        r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

namespace Unk_0204eba0_Ns {
extern "C" u16 *func_0204ebd8(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
}

namespace Unk_0204eee4_Ns {
extern "C" s32 func_0204efe4(Unk_0204eeb4_Ent *e);
}

extern "C" {
void func_0204ee20(s32 *a, s32 *c, Unk_0204e858_Vec *v);
}

extern "C" {
void func_0204ee38(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v);
}

extern "C" {
void func_0204edf8(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
}

extern "C" {
void func_0204ed8c(Unk_0204e858_Vec *v, s32 x, s32 z);
}

extern "C" {
BOOL func_0204f0f4(u8 v);
}

extern "C" {
void *func_020e8618(void *heap, u32 size);
}

extern "C" {
void func_0206d49c();
}

extern "C" {
void func_0204efe4(Unk_0204eeb4_Ent *e);
}

extern "C" {
void func_0204f010(Unk_0204eeb4_Ent *e, u32 id);
}

extern "C" {
void func_0204f044(u32 id);
}

extern "C" {
void func_0204f04c(u32 id);
}

extern "C" {
void func_0204f054(void *p, u32 id);
}

extern "C" {
void func_02063d00(u32 id);
}

extern "C" {
void func_02063d0c(u32 id);
}

extern "C" {
void *FS_LoadOverlayInfo(void *p, s32 v, u32 n);
}

extern "C" {
void FS_GetOverlayFileID(void *a, void *b);
}

extern "C" {
s32 func_02037478(Unk_0204e858_Cell *c, s32 a, s32 b);
}

extern "C" {
s32 func_02037494(Unk_0204e858_Cell *c, s32 a, s32 b);
}

extern "C" {
s32 func_020374b0(Unk_0204e858_Cell *c, s32 a);
}

extern "C" {
s32 func_020374cc(Unk_0204e858_Cell *c, s32 a);
}

extern "C" {
s32 func_020374e8(Unk_0204e858_Cell *c);
}

extern "C" {
s32 func_020374f4(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, s32 e, s32 f);
}

extern "C" {
s32 func_02037558(Unk_0204e858_Cell *c, s32 a, s32 b, u8 d);
}

extern "C" {
void *func_02037590(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, u8 e);
}

extern "C" {
void func_0209cfb8(void *p);
}

extern "C" {
void func_0209cf18(void *p);
}

extern "C" {
u8 func_0204f084(u8 r);
}

extern "C" {
u32 func_0204f100(u32 r);
}

extern "C" {
void func_0204f178(void *a, void *b, s32 c, u32 d, u32 e);
}

extern "C" {
s32 func_0204e8b0(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
}

extern "C" {
s32 func_0204e938(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
}

extern "C" {
s32 func_0204e99c(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
}

extern "C" {
void *func_0204eb5c(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d);
}
// prototypes
extern "C" u32 func_0204f100(u32 r);
extern "C" BOOL func_0204f0f4(u8 v);
extern "C" u8 func_0204f084(u8 x);
extern "C" s32 func_0204f060(s32 r);
extern "C" void func_0204f054(void *p, u32 id);
extern "C" void func_0204f04c(u32 id);
extern "C" void func_0204f044(u32 id);
extern "C" void func_0204f010(Unk_0204eeb4_Ent *e, u32 id);
extern "C" void func_0204efe4(Unk_0204eeb4_Ent *e);
extern "C" void func_0204ef2c(u32 id);
extern "C" void func_0204eee4(u32 id);
extern "C" void func_0204eeb4();


extern "C" u32 func_0204f100(u32 r) {
    u32 v = 0;
    if ((r >= 4 && r < 9) || (r >= 16 && r < 21)) {
        v = 0;
    } else if (r >= 9 && r < 16) {
        v = 1;
    } else if ((r >= 21 && r <= 24) || r < 4) {
        v = 2;
    } else if (r >= 4) {
    }
    return v;
}

extern "C" BOOL func_0204f0f4(u8 v) {
    if (v > 15) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 func_0204f084(u8 x) {
    u8 t[4];
    if (x >= 1 && x <= 7) {
        return x;
    }
    if (x == 8) {
        func_0209cfb8(&t[0]);
        if (func_0204f0f4(t[0]) != 0) {
            x = x + 1;
        }
        return x;
    }
    if (x == 9) {
        func_0209cfb8(&t[2]);
        if (func_0204f0f4(t[2]) == 0) {
            return x + 1;
        }
        return x + 2;
    }
    if (x >= 10 && x <= 12) {
        return x + 2;
    }
    return 1;
}

extern "C" s32 func_0204f060(s32 r) {
    if (r < 0 || r >= 0x38) {
        return 0;
    }
    if (r >= 0x23) {
        return 3;
    }
    if (r >= 9 && r <= 11) {
        return 2;
    }
    return 1;
}

extern "C" void func_0204f054(void *p, u32 id) {
    FS_LoadOverlayInfo(p, 0, id);
}

extern "C" void func_0204f04c(u32 id) {
    func_02063d0c(id);
}

extern "C" void func_0204f044(u32 id) {
    func_02063d00(id);
}

extern "C" void func_0204f010(Unk_0204eeb4_Ent *e, u32 id) {
    u32 buf[11];
    func_0204f054(buf, id);
    func_0204f04c(id);
    e->unk_00 = id;
    e->unk_01 = 1;
    e->unk_02 = 0;
    e->unk_04 = buf[1];
    e->unk_08 = buf[2] + buf[3];
}

extern "C" void func_0204efe4(Unk_0204eeb4_Ent *e) {
    u32 buf[11];
    u32 id = e->unk_00;
    func_0204f044(id);
    func_0204f054(buf, id);
    e->unk_00 = 0xff;
    e->unk_01 = 0;
    e->unk_02 = 0;
    e->unk_04 = 0;
    e->unk_08 = 0;
}

extern "C" void func_0204ef2c(u32 id) {
    Unk_0204eeb4_Ent *free = NULL;
    s32 i;
    u32 lo, hi;
    u8 buf[8];
    u32 info[11];
    for (i = 0; (u32)i < 12; i++) {
        Unk_0204eeb4_Ent *e = &data_021c47fc[i];
        if (e->unk_00 == id) {
            e->unk_01++;
            return;
        }
        if (((volatile Unk_0204eeb4_Ent *)e)->unk_00 == 0xff && free == NULL) {
            free = e;
        }
    }
    func_0204f054(info, id);
    FS_GetOverlayFileID(buf, info);
    for (i = 0, lo = info[1], hi = lo + (info[2] + info[3]); (u32)i < 12; i++) {
        Unk_0204eeb4_Ent *e = &data_021c47fc[i];
        if (e->unk_00 != id && ((volatile Unk_0204eeb4_Ent *)e)->unk_00 != 0xff && e->unk_04 + e->unk_08 > lo && hi > e->unk_04) {
            if (e->unk_01 == 0) {
                func_0204efe4(e);
                if (free == NULL) {
                    free = e;
                }
            } else {
                func_0206d49c();
            }
        }
    }
    if (free != NULL) {
        func_0204f010(free, id);
    }
}

extern "C" void func_0204eee4(u32 id) {
    Unk_0204eeb4_Ent *e = NULL;
    for (s32 i = 0; (u32)i < 12; i++) {
        Unk_0204eeb4_Ent *c = &data_021c47fc[i];
        if (c->unk_00 == id) {
            e = c;
            if (c->unk_01 != 0) {
                c->unk_01--;
            }
        }
    }
    if (e == NULL) {
        func_0206d49c();
    }
    if (e->unk_01 == 0) {
        Unk_0204eee4_Ns::func_0204efe4(e);
    }
}

extern "C" void func_0204eeb4() {
    for (s32 i = 0; (u32)i < 12; i++) {
        data_021c47fc[i].unk_00 = 0xff;
        data_021c47fc[i].unk_01 = 0;
        data_021c47fc[i].unk_02 = 0;
        data_021c47fc[i].unk_04 = 0;
        data_021c47fc[i].unk_08 = 0;
    }
}

