#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020db984_Vec3 {
    s32 x, y, z;
};

struct Unk_020db984_Ent {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[4];
    u8 unk_4c[0x40];
    Unk_020db984_Vec3 unk_8c;
    u8 pad_98[0xb8];
    Unk_020db984_Vec3 unk_150;
    s16 unk_15c, unk_15e, unk_160;
    u8 pad_162[2];
    u32 unk_164;
    u8 unk_168;
    u8 unk_169;
    u8 pad_16a[2];
};

class Unk_020db984;

extern "C" {
extern s32 data_020db8b4;
extern Unk_020db984 *data_021c488c;
void func_020547e4(void *);
void *func_0209c0ac(void *);
void func_02106054(void *, s32, u32);
void func_02003e80(void *, void *);
void func_02003e70(void *, u32, u32, u32);
s32 func_020565e8(void *, u32);
}

class Unk_020db984 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    void func_0204fbec(s32);
    BOOL func_0204fc64(s32);
    void func_0204f98c(Unk_020db984_Ent *);
    BOOL func_0204f738(void *, Unk_020db984_Ent *);
    BOOL func_0204f808(void *, Unk_020db984_Ent *);
    BOOL func_0204f874(void *, Unk_020db984_Ent *);

    Unk_020db984_Ent unk_50[4];
    u8 unk_600[0x18];
};

BOOL Unk_020db984::vfunc_18() {
    volatile s32 v0, v4;
    Unk_020db984 *g = data_021c488c;
    if (g == NULL) return FALSE;
    Unk_020db984_Ent *e = g->unk_50;
    s32 i = 0;
    v4 = 0;
    v0 = 0;
    for (; i < data_020db8b4; e++, i++) {
        switch (e->unk_44) {
        case 1:
            if (e->unk_40 != -1) {
                func_0204fc64(i);
            }
            break;
        case 2: {
            s32 t = e->unk_40;
            if ((u32)(t - 0x38) <= 2) {
                func_0204f808(unk_600, e);
            } else if (t == 0x3b) {
                func_0204f738(unk_600, e);
            } else {
                func_0204f874(unk_600, e);
            }
            break;
        }
        case 3:
            if (e->unk_40 == 0x3b) {
                func_020547e4((u8 *)e + 0x98);
                func_02106054(func_0209c0ac((u8 *)e + 0x4c), v0, *(u32 *)((u8 *)e + 0x164));
            } else if (e->unk_40 == 0x38 || e->unk_40 == 0x39 || e->unk_40 == 0x3a) {
            } else {
                func_020547e4((u8 *)e + 0x98);
                if (e->unk_169 != 0) {
                    Unk_020db984_Vec3 *p = &e->unk_8c;
                    Unk_020db984_Vec3 t;
                    t.x = p->x;
                    t.y = p->y;
                    t.z = p->z;
                    func_02003e80(e, &t);
                    if (func_020565e8((u8 *)e + 0x134, 1)) {
                        func_02003e70(e, 0x84d, 0x7f, v4);
                    }
                }
            }
            func_0204f98c(e);
            break;
        case 4:
            func_0204fbec(i);
            break;
        }
    }
    return TRUE;
}
