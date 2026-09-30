#include "types.h"

class Unk_ov068_Owner;

struct Unk_ov068_02260780_Vec {
    s32 x, y, z;
};

struct Unk_ov068_022605f4_Vec : Unk_ov068_02260780_Vec {
    Unk_ov068_022605f4_Vec() {}
    ~Unk_ov068_022605f4_Vec() {}
};

struct Unk_ov068_02260780_Own {
    u8 pad_00[0x5c];
    Unk_ov068_02260780_Vec unk_5c;
};

extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];

void func_ov068_02265994(void *);
void func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
s32 func_ov068_022656a8(void *, void *, s32);
void func_ov003_0221950c(s32, void *);
void func_ov003_02219bf0(s32, void *);

void func_02015ec4(void *, s32);
void func_0202d8d4(void *);
void func_0202d8e0(void *);
void func_020135c4(void *);
void func_020135bc(void *);
void func_02011dfc(void *, u32, s32);
void func_02011c44(void *, u32, s32);
void func_02011c9c(void *, u32, s32);
void func_02011b60(void *, s32);
void func_02011cf4(void *, u32, s32);
void func_02011d4c(void *, u32, s32);
void func_0203d704(void *, s32);
void func_0203e42c(void *);
void *func_020951ec(s32);
s32 func_0201bc58(void *, void *);
void func_020195c8(void *, s32, s32, s32, u32, s32);
void func_0201c564(void *);
void func_020902f8(s32);
void func_020902d4(s32, void *, s32, s32);
s32 func_02090330(s32, void *, s32, s32);
void func_020902b0(s32, void *, s32, s32);
void func_0202d864(void *, void *);
void func_020339bc(void *, void *, s32, s32);
void func_02033988(void *);
void func_02003ddc(void *, s32, s32, s32);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
void func_02015fe0(void *, void *, void *, s32, s32);
s32 func_02056654(void *);
void func_0204edd8(void *, void *);
}

class Unk_ov068_0225fd54 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[0x2c - 0x1d];
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 pad_2e[2];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u8 pad_34[4];
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 pad_39;
    /* 0x3a */ u16 unk_3a;

    BOOL func_ov068_022605f4(Unk_ov068_Owner *o);
    s32 func_ov068_0226071c(Unk_ov068_Owner *o);
    BOOL func_ov068_02260780(Unk_ov068_Owner *o);
    s32 func_ov068_02260944(Unk_ov068_Owner *o);
    void func_ov068_022609e0(Unk_ov068_Owner *o);
    void func_ov068_02260a64(Unk_ov068_Owner *o);
    void func_ov068_02260c14(Unk_ov068_Owner *o);
    void func_ov068_02260cdc(Unk_ov068_Owner *o);
    void func_ov068_02260dcc(Unk_ov068_Owner *o);
    BOOL func_ov068_02260ed4(Unk_ov068_Owner *o);
};

BOOL Unk_ov068_0225fd54::func_ov068_022605f4(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_0202d8d4(o);
    func_020135c4((u8 *)o + 0x558);
    u32 r, t;
    t = data_020c6cc8;
    func_02011dfc((u8 *)o + 0x9b0, t, 0);
    if (unk_3a == 0) {
        unk_38 = 0;
    }
    unk_38 = unk_38 + 1;
    r = 0xeb;
    if (unk_38 >= 3) {
        r = 0xec;
        func_0203d704(o, 0);
        *(s32 *)((u8 *)o + 0xa08) = 1;
        func_0203e42c(o);
        unk_38 = 3;
    } else {
        Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
        Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
        Unk_ov068_022605f4_Vec v;
        v.x = ow->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        void *p = func_020951ec(4);
        if (p != 0) {
            s32 d = func_0201bc58(o, p);
            if (d < 0) {
                d = (s16)-d;
            }
            if (d < data_020c6cc0) {
                r = 0xec;
            }
        }
    }
    func_020195c8((u8 *)o + 0x564, 1, r, 1, t, 0);
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_0226071c(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[1])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_022609e0};
    if (unk_1c < 1) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

BOOL Unk_ov068_0225fd54::func_ov068_02260780(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_02015ec4((u8 *)o + 0x334, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    func_020135bc((u8 *)o + 0x558);
    func_0202d8e0(o);
    *(u8 *)((u8 *)o + 0xa00) = 0;
    if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
        func_020902f8(*(s32 *)((u8 *)o + 0x9fc));
        *(s32 *)((u8 *)o + 0x9fc) = -1;
    }
    u16 pos[2];
    func_0202d864(pos, o);
    BOOL k = FALSE;
    u32 v0 = pos[0];
    if (*(volatile u16 *)&pos[0] >= 0x1376 && v0 <= 0x1376) {
        k = TRUE;
    }
    if (k || (v0 >= 0x1377 && v0 <= 0x1377) || (v0 >= 0x1380 && v0 <= 0x139f) ||
        (v0 >= 0x1374 && v0 <= 0x1374) || (v0 >= 0x1375 && v0 <= 0x1375)) {
        u32 t = data_020c6cc8;
        func_020195c8((u8 *)o + 0x564, 1, 0x12b, 1, t, 0);
        func_02011c44((u8 *)o + 0x9b0, t, 0);
    } else {
        func_020195c8((u8 *)o + 0x564, 1, 0x12a, 1, data_020c6cc8, 0);
    }
    Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
    Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
    Unk_ov068_02260780_Vec v;
    v.x = ow->unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    u32 obj[16];
    func_020339bc(obj, &v, 0, 0);
    s32 r = obj[13];
    Unk_ov068_02260780_Vec v2;
    v2.x = v.x;
    v2.y = v.y;
    v2.z = v.z;
    func_ov003_0221950c(0, &v2);
    if (r == 0x13) {
        func_020902b0(0x91, &v, 0, 0);
    } else {
        func_020902b0(0x90, &v, 0, 0);
    }
    func_02003ddc((u8 *)o + 0x514, 0x7e9, 0x7f, 0);
    func_0201c564((u8 *)o + 0x838);
    func_02033988(obj);
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_02260944(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[5])(Unk_ov068_Owner *) = {
        &Unk_ov068_0225fd54::func_ov068_02260dcc, &Unk_ov068_0225fd54::func_ov068_02260cdc,
        &Unk_ov068_0225fd54::func_ov068_02260c14, &Unk_ov068_0225fd54::func_ov068_02260a64,
        &Unk_ov068_0225fd54::func_ov068_022609e0};
    if (unk_1c < 5) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_022609e0(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x12b || func_02015e48((u8 *)o + 0x334, 0) == 0x12a) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            *(u32 *)((u8 *)o + 0x4e8) &= ~2;
            unk_1c = 5;
            func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0, 3);
            func_ov068_022656a8(this, o, 0);
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02260a64(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x129) {
        if (unk_2c == 0) {
            func_02015ec4((u8 *)o + 0x334, 0);
            func_0202d8e0(o);
            *(u8 *)((u8 *)o + 0xa00) = 0;
            if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
                func_020902f8(*(s32 *)((u8 *)o + 0x9fc));
                *(s32 *)((u8 *)o + 0x9fc) = -1;
            }
            u16 pos[2];
            func_0202d864(pos, o);
            BOOL k = FALSE;
            u32 v0 = pos[0];
            if (*(volatile u16 *)&pos[0] >= 0x1376 && v0 <= 0x1376) {
                k = TRUE;
            }
            if (k || (v0 >= 0x1377 && v0 <= 0x1377) || (v0 >= 0x1380 && v0 <= 0x139f) ||
                (v0 >= 0x1374 && v0 <= 0x1374) || (v0 >= 0x1375 && v0 <= 0x1375)) {
                u32 t = data_020c6cc8;
                func_020195c8((u8 *)o + 0x564, 1, 0x12b, 1, t, 0);
                func_02011c44((u8 *)o + 0x9b0, t, 0);
            } else {
                func_020195c8((u8 *)o + 0x564, 1, 0x12a, 1, data_020c6cc8, 0);
            }
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
            Unk_ov068_02260780_Vec v;
            v.x = ow->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            u32 obj[16];
            func_020339bc(obj, &v, 0, 0);
            s32 r = obj[13];
            Unk_ov068_02260780_Vec v2;
            v2.x = v.x;
            v2.y = v.y;
            v2.z = v.z;
            func_ov003_0221950c(0, &v2);
            if (r == 0x13) {
                func_020902b0(0x91, &v, 0, 0);
            } else {
                func_020902b0(0x90, &v, 0, 0);
            }
            func_02003ddc((u8 *)o + 0x514, 0x7e9, 0x7f, 0);
            unk_1c = 4;
            func_02033988(obj);
        } else {
            *(s32 *)((u8 *)o + 0x198) = unk_30;
            if (*(s32 *)((u8 *)o + 0x9fc) != -1) {
                func_020902d4(*(s32 *)((u8 *)o + 0x9fc), (u8 *)o + 0x5c, 0, 0);
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02260c14(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x128) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            unk_30 = 0x1400;
            u32 t = data_020c6cc8;
            func_020195c8((u8 *)o + 0x564, 1, 0x129, 0, t, 0);
            *(s32 *)((u8 *)o + 0x198) = unk_30;
            func_02015ec4((u8 *)o + 0x334, 1);
            func_02011c9c((u8 *)o + 0x9b0, t, 0);
            func_02011b60((u8 *)o + 0x9b0, unk_30);
            unk_2c = 0x64;
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
            Unk_ov068_02260780_Vec v;
            v.x = ow->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            *(s32 *)((u8 *)o + 0x9fc) = func_02090330(0x4c, &v, 0, 0);
            *(u8 *)((u8 *)o + 0xa00) = 1;
            func_0202d8d4(o);
            unk_1c = 3;
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_02260cdc(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x127) {
        if (func_02056654((u8 *)o + 0x188) != 0) {
            u32 t = data_020c6cc8;
            func_020195c8((u8 *)o + 0x564, 1, 0x128, 1, t, 0);
            Unk_ov068_02260780_Own *ow = (Unk_ov068_02260780_Own *)o;
            Unk_ov068_02260780_Vec *pv = &ow->unk_5c;
            Unk_ov068_02260780_Vec v;
            v.x = ow->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            u32 obj[16];
            func_020339bc(obj, &v, 0, 0);
            s32 r = obj[13];
            Unk_ov068_02260780_Vec v2;
            v2.x = v.x;
            v2.y = v.y;
            v2.z = v.z;
            func_ov003_02219bf0(0, &v2);
            if (r == 0x13) {
                func_020902b0(0x8f, &v, 0, 0);
            } else {
                func_020902b0(0x8e, &v, 0, 0);
            }
            func_02003ddc((u8 *)o + 0x514, 0x7e8, 0x7f, 0);
            func_02011cf4((u8 *)o + 0x9b0, t, 1);
            func_02015fe0((u8 *)o + 0x334, o, (u8 *)o + 0x9b0, 0x128, 3);
            unk_1c = 2;
            func_02033988(obj);
        }
    }
}

extern "C" void func_ov068_02260e64(s32 *p, s32 target, s32 a, s32 spd, s32 min);

void Unk_ov068_0225fd54::func_ov068_02260dcc(Unk_ov068_Owner *o) {
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x127) {
        Unk_ov068_02260780_Vec *pp = &((Unk_ov068_02260780_Own *)o)->unk_5c;
        Unk_ov068_02260780_Vec loc;
        func_0204edd8(&loc, pp);
        func_ov068_02260e64(&pp->x, loc.x, 0xe66, 0x1ec, 0x31);
        func_ov068_02260e64(&pp->z, loc.z, 0xe66, 0x1ec, 0x31);
        *(u8 *)((u8 *)o + 0x19c) = 1;
        if (pp->x == loc.x && pp->z == loc.z) {
            if (func_02056654((u8 *)o + 0x188) != 0) {
                func_ov068_02260cdc(o);
            } else {
                unk_1c = 1;
            }
        }
    }
}

BOOL Unk_ov068_0225fd54::func_ov068_02260ed4(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    u32 t = data_020c6cc8;
    func_020195c8((u8 *)o + 0x564, 1, 0x127, 0, t, 0);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_02011d4c((u8 *)o + 0x9b0, t, 0);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    func_0202d8e0(o);
    func_020135bc((u8 *)o + 0x558);
    func_02003ddc((u8 *)o + 0x514, 0x7ee, 0x7f, 0);
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

extern "C" void func_ov068_02260e64(s32 *p, s32 target, s32 a, s32 spd, s32 min) {
    s32 cur = *p;
    if (cur != target) {
        s32 d = target - cur;
        s32 ad;
        if (d < 0) {
            ad = -d;
        } else {
            ad = d;
        }
        if (ad < min) {
            *p = target;
        } else {
            s32 q = d / a;
            s32 aq;
            if (q < 0) {
                aq = -q;
            } else {
                aq = q;
            }
            if (aq > spd) {
                if (q >= 0) {
                    *p = *p + spd;
                } else {
                    *p = *p - spd;
                }
            } else if (aq < min) {
                if (q >= 0) {
                    *p = *p + min;
                } else {
                    *p = *p - min;
                }
            } else {
                *p = *p + q;
            }
        }
    }
}
