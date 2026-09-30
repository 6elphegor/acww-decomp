// mwcc-flags: -O4,p
#include "types.h"

// ov065_016: network state-machine message handlers, 0x02268ec8..0x02269784

struct Unk_ov065_02268ec8_Msg {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u16 hc;
    u16 he;
    u32 p10[16];
    u16 h50[16];
};

struct Unk_ov065_02268fb0_Ptr {
    u8 pad_00[0xe];
    u16 he;
};

struct Unk_ov065_02268ec8_G {
    u8 pad_0000[0x1500];
    u8 unk_1500[0xc40];
    u8 unk_2140[0xc0];
    u8 unk_2200[0x50];
    u8 unk_2250;
    u8 unk_2251;
    u8 pad_2252[0xe];
    s32 unk_2260;
    u32 unk_2264;
    u8 pad_2268[0x14];
    u32 unk_227c;
    s16 unk_2280;
    s16 unk_2282;
    u32 unk_2284;
    u8 unk_2288[4];
    u16 unk_228c;
    s16 unk_228e;
    u8 pad_2290[0x68];
    u16 unk_22f8;
};

typedef Unk_ov065_02268ec8_Msg Unk_ov065_02268ec8_M;
typedef Unk_ov065_02268ec8_G Unk_ov065_02268ec8_GG;

extern "C" {

extern Unk_ov065_02268ec8_G *data_ov065_022905a8;

void func_ov065_0226989c(u32);
s32 func_ov065_02269944(u32, void *, u32, u32);
void func_ov065_0226990c(u32, u32, u32, void *, u32);
void func_ov065_022697ec();
u32 func_ov065_02268c38(u32);
u32 func_ov065_02268c5c(u32);
u32 func_ov065_0226997c(u32);
void func_ov065_0226aca8(u32);
void func_ov065_0226ac54(void *);
void func_ov065_0226a7bc(u32, u32);
void func_02114594(void *, u32);
s32 func_0211fbb4(void *, u32);
s32 func_02120998(void *, void *, u32);
s32 func_0211fdd4(void *, void *);
s32 func_0211fd8c(void *);
s32 func_021203a4(void *);
s32 func_0211f188();
s32 func_021203ec(void *);
s32 func_021219b4(void *, u32);
s32 func_02121aec(void *, u32, u32, void *);
s32 func_0211fcbc(void *, void *, u32, u32, u32);

void func_ov065_02268ec8(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02268fb0(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269080(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269128(Unk_ov065_02268ec8_Msg *m);
void func_ov065_022692ec(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269350(Unk_ov065_02268ec8_Msg *m);
void func_ov065_02269550(Unk_ov065_02268ec8_Msg *m);

void func_ov065_02268ec8(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0: {
        if (data_ov065_022905a8->unk_2260 == 0xc) {
            func_ov065_0226989c(0xa);
            func_ov065_022697ec();
            return;
        }
        s32 r = func_0211fbb4((void *)func_ov065_02269080, 0);
        if (r == 2) {
            return;
        }
        if (r == 3) goto b3;
        if (r != 8) goto b0;
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, data_ov065_022905a8->unk_2140, 0, 0x8a0);
        return;
    b3:
        func_ov065_0226989c(0xa);
        func_ov065_022697ec();
        return;
    b0:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x8ac);
        return;
    }
    case 1:
    case 3:
        func_ov065_0226989c(0xa);
        func_ov065_022697ec();
        return;
    case 2:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x8bf);
        return;
    }
}

void func_ov065_02268fb0(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        switch (m->h4) {
        case 0xe:
            if (data_ov065_022905a8->unk_2260 == 0xc) {
                func_ov065_0226989c(8);
                func_ov065_022697ec();
                return;
            }
            func_ov065_0226989c(9);
            func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 0, 0x85d);
            return;
        case 0xf: {
            Unk_ov065_02268fb0_Ptr *p = *(Unk_ov065_02268fb0_Ptr **)&m->h8;
            func_ov065_0226aca8((u8)(p->he >> 8));
            func_02114594(*(void **)&m->h8, 0x620);
            func_ov065_0226ac54(*(void **)&m->h8);
            return;
        }
        default:
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, data_ov065_022905a8->unk_2140, m->h4, 0x86b);
            return;
        }
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x877);
    }
}

void func_ov065_02269080(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0: {
        Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
        if (g->unk_2260 == 0xc) {
            func_ov065_0226989c(0xa);
            func_ov065_022697ec();
            return;
        }
        g->unk_2282 = 0;
        func_ov065_0226989c(3);
        func_ov065_02269944(0, data_ov065_022905a8->unk_2140, 0, 0x827);
        return;
    }
    case 1:
    case 3:
        func_ov065_0226989c(0xa);
        func_ov065_022697ec();
        return;
    case 2:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x839);
        return;
    }
}

void func_ov065_02269128(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        switch (m->h8) {
        case 8:
        case 9: {
            Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
            switch (g->unk_2260 - 8) {
            case 2:
                g->unk_2282 = 0;
            case 0:
                func_ov065_0226989c(0xc);
                break;
            case 1:
                g->unk_2282 = 0;
                data_ov065_022905a8->unk_2280 = 6;
            case 4:
                func_ov065_022697ec();
                break;
            case 3:
                break;
            }
            break;
        }
        case 7: {
            if (data_ov065_022905a8->unk_2260 == 0xc) {
                func_ov065_0226989c(8);
                func_ov065_022697ec();
                return;
            }
            u32 v = m->ha;
            if (v >= 1 && v <= 0x7d7) {
                data_ov065_022905a8->unk_2282 = v;
                s32 r = func_02120998((void *)func_ov065_02268fb0, data_ov065_022905a8->unk_1500, 0x620);
                if (r == 2) {
                    return;
                }
                if (r == 3) goto e3;
                if (r != 8) goto e3;
                func_ov065_0226989c(0xc);
                func_ov065_02269944(1, data_ov065_022905a8->unk_2140, 0, 0x7d7);
                return;
            e3:
                func_ov065_0226989c(0xb);
                func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x7e0);
                return;
            }
            func_ov065_022697ec();
            return;
        }
        case 6:
            break;
        case 0: case 1: case 2: case 3: case 4: case 5:
        default:
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, data_ov065_022905a8->unk_2140, m->h8, 0x7ee);
            return;
        }
        break;
    case 1:
        data_ov065_022905a8->unk_22f8 = m->he;
    case 6:
    case 11:
    case 12:
        func_ov065_0226989c(8);
        func_ov065_022697ec();
        return;
    case 2: case 3: case 4: case 5: case 7: case 8: case 9: case 10:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2140, 0, 0x804);
        return;
    }
}

void func_ov065_022692ec(Unk_ov065_02268ec8_Msg *m) {
    switch (m->h2) {
    case 0:
        func_ov065_0226989c(3);
        func_ov065_02269944(0, 0, 0, 0x774);
        return;
    case 1:
        func_ov065_022697ec();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x784);
        return;
    }
}

void func_ov065_02269350(Unk_ov065_02268ec8_Msg *m) {
    s32 res = 0x14;
    switch (m->h2) {
    case 0: {
        if (data_ov065_022905a8->unk_2260 == 5) {
            func_ov065_0226989c(6);
            func_ov065_02269944(0, 0, 0, 0x6f6);
        }
        switch (data_ov065_022905a8->unk_2260) {
        case 6: {
            data_ov065_022905a8->unk_2280 = 7;
            if (m->h8 == 5) {
                s32 i;
                func_02114594(*(void **)data_ov065_022905a8->unk_2288, data_ov065_022905a8->unk_228c);
                for (i = 0; i < (s32)m->he; i++) {
                    func_ov065_0226a7bc(m->p10[i], m->h50[i]);
                    func_ov065_0226990c(7, 0, m->p10[i], m, 0x70b);
                }
            }
            u32 t = data_ov065_022905a8->unk_2264;
            if ((t & 0xc00000) == 0xc00000) {
                u32 cnt = func_ov065_02268c38(t & 0x3ffe);
                if (cnt != 0) {
                    u32 x = data_ov065_022905a8->unk_2284;
                    if (x % cnt == 0) {
                        func_ov065_0226990c(8, 0, x, 0, 0x718);
                    }
                }
            }
            {
                u32 n = func_ov065_02268c5c(m->ha);
                u32 k = func_ov065_0226997c((u16)(32 - n));
                data_ov065_022905a8->unk_228e = (s16)((1 << k) >> 1);
            }
            func_02114594(*(void **)data_ov065_022905a8->unk_2288, data_ov065_022905a8->unk_228c);
            data_ov065_022905a8->unk_2284++;
            res = func_0211fdd4((void *)func_ov065_02269350, data_ov065_022905a8->unk_2288);
            break;
        }
        case 7:
            res = func_0211fd8c((void *)func_ov065_022692ec);
            break;
        case 0xd:
            func_ov065_022697ec();
            return;
        default:
            break;
        }
        if (res == 2) {
            return;
        }
        if (res == 3) goto e3;
        if (res != 8) goto e3;
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, 0, 0, 0x743);
        return;
    e3:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x74c);
        return;
    }
    case 1:
        func_ov065_022697ec();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, 0, 0, 0x75d);
        return;
    }
}

void func_ov065_02269550(Unk_ov065_02268ec8_Msg *m) {
    s32 res = 0x14;
    switch (m->h2) {
    case 0: {
        switch (m->h0) {
        case 3:
            res = func_021203a4((void *)func_ov065_02269550);
            break;
        case 4: {
            s32 r = func_0211f188();
            switch (r) {
            case 0:
                func_ov065_0226989c(1);
                func_ov065_02269944(0, 0, 0, 0x663);
                return;
            case 4:
            default:
                func_ov065_0226989c(0xb);
                func_ov065_02269944(7, 0, 0, 0x66a);
                return;
            }
        }
        case 5:
            func_ov065_0226989c(3);
            func_ov065_02269944(0, 0, 0, 0x670);
            return;
        case 6:
            res = func_021203ec((void *)func_ov065_02269550);
            break;
        case 0x1d:
            res = func_021219b4((void *)func_ov065_02269550, 0);
            break;
        case 0x19: {
            Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
            res = func_02121aec((void *)func_ov065_02269550, g->unk_2250, g->unk_2251, g->unk_2200);
            break;
        }
        case 0x27: {
            Unk_ov065_02268ec8_G *g = data_ov065_022905a8;
            u32 t = g->unk_2264;
            s32 a0;
            u32 b;
            if ((t & 0xc0000) == 0xc0000) a0 = 1; else a0 = 0;
            u16 a = a0;
            if ((t & 0x30000) != 0x30000) b = 1; else b = 0;
            res = func_0211fcbc((void *)func_ov065_02269128, g->unk_2140, 0, b, a);
            break;
        }
        }
        if (res == 2) {
            return;
        }
        if (res == 3) goto e3;
        if (res != 8) goto e3;
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6a7);
        return;
    e3:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6b0);
        return;
    }
    case 1:
        func_ov065_0226989c(0xc);
        func_ov065_02269944(1, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6d0);
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov065_0226989c(0xb);
        func_ov065_02269944(7, data_ov065_022905a8->unk_2280 == 5 ? data_ov065_022905a8->unk_2140 : 0, 0, 0x6da);
        return;
    }
}

void func_ov065_02269784(Unk_ov065_02268ec8_Msg *m) {
    if (m->h2 == 8 && m->h4 == 0x16 && m->h6 == 0x25) {
        switch (data_ov065_022905a8->unk_2260) {
        case 8:
            func_ov065_0226989c(0xc);
            break;
        case 9:
        case 12:
            func_ov065_022697ec();
            break;
        case 10:
            func_ov065_0226989c(0xc);
            break;
        case 11:
            break;
        }
    }
}

}
