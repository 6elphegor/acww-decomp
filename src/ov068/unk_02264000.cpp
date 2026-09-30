#include "types.h"

class Unk_ov068_Owner {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual s32 vfunc_64();
};


extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];
extern u8 data_ov068_0226f13c[];
extern u8 data_ov068_0226f0f4[];
extern s16 data_ov068_0226f0e4[];
extern u32 data_0213a740[];
extern u8 data_021c7c88[];
extern u32 data_ov068_02270c30;
extern u8 data_ov068_0226fae0[];

void *func_0209750c();
s32 func_02098044(void *, s32);
void *func_0207e310();
void func_ov068_02265994(void *);
void func_ov068_0225f5f4(void *, void *, s32, s32, s32, void *, s32, u32, u32);
void func_ov068_0225f630(void *, void *);
s32 func_ov068_0225f83c(void *);
void func_02019614(void *, s32, u32);
void func_020785e8(void *, s32);
void func_0207857c(void *, s32);
s32 func_0207c618(void *, s32);
void func_0207e4f4(void *);
void func_0202d8e0(void *);
s32 func_02063b8c(s32);
void func_0201c564(void *);
s32 func_02015e48(void *, s32);
s32 func_02019790(void *);
s32 func_020197a8(void *);
s32 func_020197a0(void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_022656a4(void *, s32);
void *func_0207f170(void *);
void func_0204ed8c(void *, u32, u32);
void func_020e761c(void *, s32, s32);
void func_02013568(void *, void *);
void *func_0207e334(void *);
s32 func_ov003_02218d0c(void *);
void func_020195c8(void *, s32, s32, s32, u32, s32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
void func_020135bc(void *);
s32 func_ov068_02265434(void *, void *);
s32 func_0202bcdc(void *, void *, void *, s32);
void func_ov068_022659dc(void *);
void func_0207c298(void *, s32);
s32 func_0201324c(void *);
void func_ov068_02265324(void *, s32, void *);
s32 func_ov068_02265270(void *, void *);
s32 func_ov068_022652d0(void *, void *);
s32 func_02012cb8(void *);
void func_02013300(void *, void *, s32, s32, void *);
s32 func_02012c58(void *, void *);
void func_0201325c(void *, s32);
s32 func_0201acfc(void *);
s32 func_020e7fa8(void *);
s32 func_ov068_0226506c(void *, void *, void *);
s32 func_ov068_02265114(void *, void *, s32);
s32 func_ov068_0226517c(void *, void *, void *);
s16 func_02002bdc(void *, void *);
s32 func_0201bd84(s32);
s32 func_ov068_0226594c(void *);
s32 func_0201a5d0(void *, void *);
s32 func_ov068_0226519c(void *, void *);
void *func_0201a978(void *);
void func_0202d864(void *, void *);
s32 func_ov068_02264ab4(void *, void *);
s32 func_ov068_02264aa0(void *, void *);
s32 func_ov068_022655e0(void *, void *);
s32 func_ov068_02264ee0(void *, void *);
s32 func_ov068_02264b9c(void *, void *);
s32 func_ov068_022649f4(void *, void *);
s32 func_ov068_02264ffc(void *, void *);
}

struct Unk_ov068_02264188_V3 {
    s32 x, y, z;
};

struct Unk_ov068_022644fc_P {
    u32 a, b;
};
struct Unk_ov068_022644fc_W {
    Unk_ov068_022644fc_P p;
};

class Unk_ov068_0225fd54 {
public:
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ u8 pad_24[0xd8 - 0x24];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ s16 unk_dc;
    /* 0xde */ s16 unk_de;
    /* 0xe0 */ u8 pad_e0[0xf8 - 0xe0];
    /* 0xf8 */ u32 unk_f8;

    void func_ov068_02264000(Unk_ov068_Owner *o);
    BOOL func_ov068_02264008(Unk_ov068_Owner *o);
    s32 func_ov068_0226410c(Unk_ov068_Owner *o);
    void func_ov068_02264188(Unk_ov068_Owner *o);
    void func_ov068_0226424c(Unk_ov068_Owner *o);
    void func_ov068_022642c4(Unk_ov068_Owner *o);
    BOOL func_ov068_0226433c(Unk_ov068_Owner *o);
    BOOL func_ov068_022643d0(Unk_ov068_Owner *o);
    BOOL func_ov068_022644fc(Unk_ov068_Owner *o);
    BOOL func_ov068_022645dc(Unk_ov068_Owner *o);
    BOOL func_ov068_022648bc(Unk_ov068_Owner *o);
};

void Unk_ov068_0225fd54::func_ov068_02264000(Unk_ov068_Owner *o) {
    unk_1c = 1;
}

BOOL Unk_ov068_0225fd54::func_ov068_02264008(Unk_ov068_Owner *o) {
    void *p = func_0209750c();
    s32 r7;
    if (p != 0) {
        r7 = func_02098044(p, 1);
    } else {
        r7 = 0;
    }
    void *a = (void *)o->vfunc_64();
    u8 *r4 = (u8 *)func_0207e310();
    func_ov068_02265994(o);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    func_020785e8(r4, 0);
    r4[0x1d] = r4[0x1d] & ~2;
    BOOL f;
    if (r7 != 0) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f == 0 && func_0207c618(a, 0) != 0) {
        func_0207857c(r4, 2);
    } else {
        func_0207857c(r4, 0);
    }
    func_0207e4f4(a);
    func_0202d8e0(o);
    unk_20 = func_02063b8c(0x28) + 0x258;
    *((u8 *)o + 0x562) = 0;
    unk_f8 = 0x384;
    func_0201c564((u8 *)o + 0x838);
    *((u8 *)o + 0x9ec) = 0;
    return TRUE;
}

s32 Unk_ov068_0225fd54::func_ov068_0226410c(Unk_ov068_Owner *o) {
    static void (Unk_ov068_0225fd54::*tbl[3])(Unk_ov068_Owner *) = {&Unk_ov068_0225fd54::func_ov068_022642c4,
                                                                     &Unk_ov068_0225fd54::func_ov068_0226424c,
                                                                     &Unk_ov068_0225fd54::func_ov068_02264188};
    if (unk_1c < 3) {
        (this->*tbl[unk_1c])(o);
    }
    return 0;
}

void Unk_ov068_0225fd54::func_ov068_02264188(Unk_ov068_Owner *o) {
    Unk_ov068_02264188_V3 v;
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x3b) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            func_ov068_022656a8(this, o, 3);
            return;
        }
    }
    u8 *p = (u8 *)func_0207f170((void *)o->vfunc_64());
    func_0204ed8c(&v, p[0], p[1] + 1);
    func_020e761c((u8 *)o + 0x5c, v.x, 0x400);
    func_020e761c((u8 *)o + 0x64, v.z, 0x400);
    if (func_02015e48((u8 *)o + 0x334, 0) == 0x3b) {
        switch ((s32)((*(u32 *)((u8 *)o + 0x190) << 4) >> 16)) {
        case 8:
        case 12:
        case 22:
        case 27:
        case 34:
            func_02013568((u8 *)o + 0x558, o);
            break;
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_0226424c(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 1) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_ov003_02218d0c(func_0207e334((void *)o->vfunc_64())) != 0) {
                func_0207f170((void *)o->vfunc_64());
                func_020195c8((u8 *)o + 0x564, 2, 0x3b, 1, data_020c6cc8, 0);
                *((u8 *)o + 0x511) = 0;
                unk_1c = 2;
            }
        }
    }
}

void Unk_ov068_0225fd54::func_ov068_022642c4(Unk_ov068_Owner *o) {
    if (func_020197a8((u8 *)o + 0x564) == 3) {
        if (func_02019790((u8 *)o + 0x564) != 0) {
            if (func_ov003_02218d0c(func_0207e334((void *)o->vfunc_64())) != 0) {
                func_0207f170((void *)o->vfunc_64());
                func_020195c8((u8 *)o + 0x564, 2, 0x3b, 1, data_020c6cc8, 0);
                *((u8 *)o + 0x511) = 0;
                unk_1c = 2;
            }
        }
    }
}

BOOL Unk_ov068_0225fd54::func_ov068_0226433c(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_020196b4((u8 *)o + 0x564, 3, 2, 0, 0, 0, 0xffff8000, 0, 0, data_020c6cc8, 0);
    *(u32 *)((u8 *)o + 0x4e8) |= 2;
    func_0202d8e0(o);
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022643d0(Unk_ov068_Owner *o) {
    if (func_ov068_02265434(this, o) != 0) {
        func_ov068_022656a8(this, o, 0);
    } else {
        func_0202bcdc(o, data_ov068_0226f13c, data_ov068_0226f0f4, 1);
        func_ov068_022659dc(o);
        if (unk_f8 == 0) {
            if (o->vfunc_64() != 0) {
                func_0207c298((void *)o->vfunc_64(), 0);
            }
            unk_f8 = 0x384;
        }
        if (func_0201324c((u8 *)this + 0x3c) == 0 || unk_d8 == 0) {
            func_ov068_02265324(this, 1, o);
            unk_d8 = -1;
            unk_da = 0;
        }
        if (func_0201324c((u8 *)this + 0x3c) != 0) {
            if (func_ov068_02265270(this, o) != 0) {
                func_ov068_022656a8(this, o, 3);
            } else {
                if (func_02012cb8((u8 *)this + 0x3c) != 3 && func_ov068_022652d0(this, o) != 0) {
                    func_02013300((u8 *)this + 0x3c, (u8 *)o + 0x5c, 3, 1, o);
                    unk_da = 0;
                }
                if (unk_da == 0) {
                    if (func_02012c58((u8 *)this + 0x3c, (u8 *)o + 0x5c) != 0 && unk_d8 == -1) {
                        unk_d8 = 0x1770;
                    }
                    unk_da = 0x28;
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022644fc(Unk_ov068_Owner *o) {
    func_ov068_02265994(o);
    func_ov068_0225f5f4((u8 *)o + 0x894, o, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_02019614((u8 *)o + 0x564, 1, data_020c6cc8);
    unk_20 = 0;
    *(Unk_ov068_022644fc_W *)((u8 *)o + 0x8ac) = *(Unk_ov068_022644fc_W *)data_0213a740;
    func_020135bc((u8 *)o + 0x558);
    unk_da = 0;
    unk_f8 = 0x384;
    if (func_0201324c((u8 *)this + 0x3c) != 0) {
        func_0201325c((u8 *)this + 0x3c, 1);
    } else {
        func_ov068_02265324(this, 1, o);
        unk_d8 = -1;
        unk_da = 0;
    }
    *((u8 *)o + 0x9ec) = 0;
    func_0201c564((u8 *)o + 0x838);
    return TRUE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022645dc(Unk_ov068_Owner *o) {
    u8 *r6 = (u8 *)o + 0x564;
    Unk_ov068_02264188_V3 va, vb;
    if (func_ov068_02265434(this, o) != 0) {
    if (func_ov068_022648bc(o) != 0) {
        goto end;
    }
    if (func_02019790(r6) != 0) {
        if (unk_dc > 0) {
            u32 t;
            u32 u;
            if (*(s32 *)((u8 *)o + 0x894) != 0) {
                goto reset;
            }
            t = *(u32 *)((u8 *)o + 0x898);
            if (t != 0 && t != 1) {
                goto reset;
            }
            u = *(u16 *)((u8 *)o + 0x8a8);
            if ((s32)u < 0xf) {
                goto reset;
            }
            if (u == 0) {
                goto skip;
            }
            if (func_0201a5d0((u8 *)o + 0x3b0, o) != 0) {
                goto skip;
            }
        reset:
            unk_dc = 0;
            unk_de = 0x4b0;
            func_ov068_0225f630((u8 *)o + 0x894, o);
        skip:;
        }
        if (func_020197a8(r6) == 0 && unk_dc != 0) {
            goto end;
        }
        unk_dc = 0;
        if (func_0201acfc((u8 *)o + 0x3aa) == 2) {
            func_02019614(r6, 1, data_020c6cc8);
            goto end;
        }
        if ((func_020e7fa8(data_021c7c88) & 7) == 0) {
            u8 *r7 = (u8 *)o + 0x5c;
            va.x = *(s32 *)data_021f4880;
            va.y = *(s32 *)(data_021f4880 + 4);
            va.z = *(s32 *)(data_021f4880 + 8);
            if (func_ov068_0226506c(this, &va, o) != 0) {
                if (func_ov068_02265114(this, r7, 0xc000) != 0) {
                    if (func_ov068_0226517c(this, &va, r7) != 0) {
                        goto fail;
                    }
                }
                s32 d = func_02002bdc(r7, &va);
                if (func_0201bd84((s16)(d - *(s16 *)((u8 *)o + 0x8e))) != 0) {
                    s32 m = 1;
                    if (func_02063b8c(4) == 0 && func_ov068_0226594c(o) == 0) {
                        m = 2;
                    }
                    func_020196b4(r6, m, 1, va.x, va.z, 0, 0, 0, 0, data_020c6cc8, 0);
                    unk_20 = 0x100;
                } else {
                    func_020196b4(r6, 4, 1, va.x, va.z, 0, d, 0, 0, data_020c6cc8, 0);
                    unk_20 = 0x128;
                }
                goto end;
            }
        fail:
            func_02019614(r6, 1, data_020c6cc8);
            goto end;
        }
        func_02019614(r6, 1, data_020c6cc8);
        goto end;
    }
    if (*(u32 *)((u8 *)o + 0x98) != 0) {
        if (func_020197a8((u8 *)o + 0x564) == 1 || func_020197a8((u8 *)o + 0x564) == 2 ||
            func_020197a8((u8 *)o + 0x564) == 4) {
            if (unk_20 == 0) {
                func_02019614(r6, 1, data_020c6cc8);
                goto end;
            }
            if (unk_de == 0 && *(u32 *)((u8 *)o + 0x894) == 0 && *(u8 **)((u8 *)o + 0x898) <= (u8 *)1 &&
                (s32)*(u16 *)((u8 *)o + 0x8a8) > 0xf) {
                func_02019614(r6, 1, data_020c6cc8);
                unk_dc = func_02063b8c(200) + 0xa0;
                unk_de = 0x4b0;
                goto end;
            }
            if (func_ov068_02265114(this, (u8 *)o + 0x5c, 0x8000) != 0 && func_ov068_0226519c(this, o) != 0) {
                func_02019614(r6, 1, data_020c6cc8);
                goto end;
            }
            s32 *pv = (s32 *)func_0201a978((u8 *)o + 0x350);
            vb.x = pv[0];
            vb.y = pv[1];
            vb.z = pv[2];
            s32 d = func_02002bdc((u8 *)o + 0x5c, &vb);
            if (func_0201bd84((s16)(d - *(s16 *)((u8 *)o + 0x8e))) == 0) {
                func_02019614(r6, 1, data_020c6cc8);
            }
        }
    }
    } else {
        func_ov068_022656a8(this, o, 1);
    }
end:
    return FALSE;
}

BOOL Unk_ov068_0225fd54::func_ov068_022648bc(Unk_ov068_Owner *o) {
    BOOL r = FALSE;
    if (func_ov068_02265270(this, o) != 0) {
        u16 v;
        func_0202d864(&v, o);
        if (v != 0xfff1) {
            func_ov068_022656a8(this, o, 0x10);
            func_ov068_022656a4(this, 2);
        } else {
            func_ov068_022656a8(this, o, 2);
        }
        r = TRUE;
    } else if (func_ov068_02264ab4(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x11);
        r = TRUE;
    } else if (*(u16 *)((u8 *)o + 0xa02) >= data_ov068_0226f0e4[r]) {
        func_ov068_022656a8(this, o, 0x15);
        r = TRUE;
    } else if (func_ov068_02264aa0(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x13);
        r = TRUE;
    } else if (func_ov068_022655e0(this, o) != 0) {
        func_ov068_022656a8(this, o, 7);
        r = TRUE;
    } else if (func_ov068_02264ee0(this, o) != 0) {
        r = TRUE;
    } else if (func_ov068_0225f83c((u8 *)o + 0x9f0) != 0) {
        func_ov068_022656a8(this, o, 0xb);
        r = TRUE;
    } else if (func_ov068_02264b9c(this, o) != 0) {
        r = TRUE;
    } else if (func_ov068_022649f4(this, o) != 0) {
        func_ov068_022656a8(this, o, 0x17);
        r = TRUE;
    } else if (*(u32 *)((u8 *)o + 0x98) != 0) {
        if (func_ov068_02264ffc(this, o) != 0) {
            r = TRUE;
        }
    }
    return r;
}
