#include "types.h"

struct Unk_020660f8 {
    void func_02067990();
    void func_02067a6c();
    void func_02067a84(u8 *b, void *c);
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e88(s32 i);
    BOOL func_020729cc(u32 v);
    void *func_02072d44(s32 i);
    void func_02072e28(u32 v);
    void func_02072368(u32 v);
    void func_020728d4();
    void func_02072824(u32 a, u32 b);
};

extern "C" {
extern u8 data_021d7350[];
extern u8 data_021d7352[];
extern u8 data_021d735c[];
extern u8 data_020e2948[];
extern u8 data_020e2934[];
extern u8 data_020e24ec;
extern Unk_020cbb18 *data_020cbb18;
BOOL func_0209e1a0(void *p);
Unk_020660f8 *func_02067918(u32 x);
u32 func_020eb004();
BOOL func_020e7500(void *p);
BOOL func_020733bc();
void func_02073bf8(s32 a, u32 b, u32 c);
void func_020733b0();
void *func_02063964(void *p);
void func_02116048(const void *src, void *dst, u32 size);
void func_0207217c();
void func_020ea720(void *p, u32 n);
u8 func_020977a0(void *p);
void func_0209f204();
BOOL func_02073090(s32 a);
void func_0207312c();
u32 func_02073190();
u32 func_02073168();
BOOL func_0209f23c();
void func_020720f8();
BOOL func_020eaca0();
BOOL func_020eb650();
BOOL func_020749cc();
BOOL func_020748fc();
BOOL func_02074960(u32 a);
void func_020741b0();
void func_020741a8();
void func_0209f1c4();
s32 func_020a5ef8();
void func_020a5c94(u32 a);
void func_020b8e80();
void *func_0208f0b0(u32 a);
s32 func_0208f1dc(void *a);
}

class Unk_020a1c88 {
public:
    u8 pad_00[0x9d];
    u8 unk_9d;
    u8 pad_9e[0xcc - 0x9e];
    u16 unk_cc;
    u16 unk_ce;
    u8 pad_d0[0xe1 - 0xd0];
    u8 unk_e1;
    u8 unk_e2;
    u8 pad_e3[0xf0 - 0xe3];
    u8 unk_f0[8];
    u8 unk_f8[6];
    u8 unk_fe;
    u8 pad_ff[0x107 - 0xff];
    u8 unk_107;

    void func_020a1c88();
    void func_020a1cb8();
    void func_020a1d74();
    void func_020a1de4();
    void func_020a1e04();
    void func_020a1e14();
    void func_020a20a4();
    void func_020a20ac();
    void func_020a2400();
    void func_020a2408();

    s32 func_020a0210();
    void func_020a3ebc(u32 s);
    BOOL func_020a15c8(u32 a);
    void func_020a15f8();
    BOOL func_020a1470(s32 a);
    void func_020a14ac();
    s32 func_020a1484(u32 a);
    void func_020a0088(u32 a, u32 b);
    void func_020a0990(void *a, u32 b);
    BOOL func_0209f000();
    void func_0209ff8c();
    void func_0209fefc();
    BOOL func_0209f344();
    BOOL func_0209fb48();
    void func_0209f294();
    void func_0209f304(u8 *s, u32 a);
    void func_0209f390(u8 *s, u32 a, u32 b, u32 c);
    void func_0209f430(u8 *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
    void func_0209f638(u8 *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
    void func_0209f898(u8 *s, u32 a, u32 b, u32 c, u32 d);
};

void Unk_020a1c88::func_020a1c88() {
    unk_9d = 0;
    if (func_0209e1a0(data_021d7350) == 0) {
        unk_107 = 1;
    } else {
        unk_107 = 0;
    }
}

void Unk_020a1c88::func_020a1cb8() {
    u8 b[2];
    s32 n = func_020a0210();
    if (n > 0 && n < 4) {
        Unk_020660f8 *p = func_02067918(0);
        p->func_02067990();
        p->func_02067a6c();
        b[0] = 0x26;
        p->func_02067a84(&b[0], data_020e2948);
        func_020a3ebc(0);
    } else {
        BOOL ok = FALSE;
        if (func_020eb004() == 2) {
            unk_cc = ok;
            return;
        }
        if (func_020eb004() == 1) {
            if (func_020e7500(&unk_cc) == 0) {
                ok = TRUE;
            } else {
                func_020733bc();
            }
        } else {
            ok = TRUE;
        }
        if (ok) {
            if (func_0209f000()) {
                func_0209f1c4();
            }
            Unk_020660f8 *p = func_02067918(0);
            b[1] = 0x25;
            p->func_02067a84(&b[1], data_020e2948);
            p->func_02067990();
            p->func_02067a6c();
            func_020a3ebc(0xc);
        }
    }
}

void Unk_020a1c88::func_020a1d74() {
    u8 buf[16];
    unk_cc = 0x258;
    func_02073bf8(1, 2, 0);
    func_020733b0();
    func_02116048(func_02063964(data_021d7352), buf, 8);
    buf[9] = 1;
    buf[8] = 0;
    if (func_0209e1a0(data_021d7350) == 0) {
        buf[8] = 1;
    }
    func_0207217c();
    func_020ea720(buf, 10);
    unk_fe = func_020977a0(data_021d735c);
}

void Unk_020a1c88::func_020a1de4() {
    if (func_020a15c8(1)) {
        func_0209f204();
        func_020a3ebc(0x1d);
    }
}

void Unk_020a1c88::func_020a1e04() {
    func_020a0990(data_020e2948, 0x23);
}

void Unk_020a1c88::func_020a1e14() {
    switch (unk_9d) {
    case 0:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020a15c8(0)) {
            unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_0209f304(&unk_9d, 1);
        }
        break;
    case 3:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_0209f23c()) {
            if (func_020a1470(data_020cbb18->unk_64)) {
                func_020a14ac();
                unk_9d = 4;
            }
        } else {
            unk_9d = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        BOOL a, b;
        if (func_0209f23c()) a = FALSE; else a = TRUE;
        if (func_0209f23c()) b = TRUE; else b = FALSE;
        func_0209f430(&unk_9d, 4, 0x11, 0x17, b, a, 1);
        break;
    }
    case 12:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                if (!func_0209f23c()) {
                    unk_9d = 0xd;
                } else {
                    unk_9d = 0xe;
                }
            }
        }
        break;
    case 13:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (unk_e2) {
            data_020cbb18->func_02072e28(2);
            unk_9d = 0x1c;
        }
        break;
    case 14:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *g = data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (g->func_02072e88(r5)) {
                    if (!g->func_020729cc(r5)) {
                        if (g->func_02072d44(r5)) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                if (func_020749cc()) {
                    unk_9d = 0xf;
                }
            }
        }
        break;
    case 15:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (unk_e1) {
            if (func_020748fc()) {
                data_020cbb18->func_02072368(2);
                unk_9d = 0x10;
            }
        }
        break;
    case 16:
        func_020720f8();
        if (!func_020eb650()) {
            func_020a0088(data_020e24ec, 0);
            func_0209f1c4();
            data_020e24ec = 7;
            unk_9d = 0x1c;
        }
        break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        func_0209f898(&unk_9d, 0x11, 0x17, 1, 1);
        break;
    default: {
        u8 b;
        func_020a15f8();
        if (func_0209f23c()) {
            b = 6;
            func_02067918(0)->func_02067a84(&b, data_020e2934);
            func_020a3ebc(0x11);
        } else {
            func_020a3ebc(8);
        }
        break;
    }
    }
}

void Unk_020a1c88::func_020a20a4() {
    func_0209f294();
}

void Unk_020a1c88::func_020a20ac() {
    switch (unk_9d) {
    case 0:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_020a15c8(0)) {
            if (func_0209f23c()) {
                func_0209ff8c();
                func_0209fefc();
            }
            unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            func_0209f390(&unk_9d, 1, 0x2e, 0x2e);
        }
        break;
    case 3:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_0209f344()) {
            unk_9d = 4;
        }
        break;
    case 4:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else if (func_0209f23c()) {
            if (func_0209fb48()) {
                s32 r5 = func_020a1484(0);
                if (r5 < 4) {
                    void *dst = func_0208f0b0(0);
                    void *src = func_0208f0b0(r5);
                    func_02116048(src, dst, 0x84c);
                } else {
                    func_0208f1dc(func_0208f0b0(0));
                }
                for (r5 = 2; r5 >= 0; r5--) {
                    func_0208f1dc(func_0208f0b0(r5 + 1));
                }
                func_020a14ac();
                unk_9d = 5;
            }
        } else {
            unk_9d = 5;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: {
        BOOL r5;
        if (func_0209f23c()) r5 = TRUE; else r5 = FALSE;
        func_0209f638(&unk_9d, 1, 5, 0x10, 0x16, 4, r5, func_02073190());
        break;
    }
    case 12:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                if (!func_0209f23c()) {
                    data_020cbb18->func_02072e28(2);
                    unk_9d = 0xe;
                } else {
                    unk_9d = 0xd;
                }
            }
        }
        break;
    case 14:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            Unk_020cbb18 *r5 = data_020cbb18;
            r5->func_020728d4();
            r5->func_02072824(7, 5);
            unk_9d = 0x1b;
        }
        break;
    case 13:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5 = 3;
            Unk_020cbb18 *r7 = data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (r7->func_02072e88(r5)) {
                    if (!r7->func_020729cc(r5)) {
                        if (!unk_f8[r5]) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            if (r6) {
                for (r5 = 3; r5 >= 0; r5--) {
                    if (r7->func_02072e88(r5)) {
                        if (!r7->func_020729cc(r5)) {
                            if (r7->func_02072d44(r5)) {
                                r6 = FALSE;
                                break;
                            }
                        }
                    }
                }
            }
            if (r6) {
                if (func_02074960(func_02073190())) {
                    unk_9d = 0xf;
                }
            }
        }
        break;
    case 15:
        if (func_02073090(func_02073190())) {
            func_0207312c();
        } else {
            BOOL r6 = TRUE;
            s32 r5;
            Unk_020cbb18 *r7;
            func_020741b0();
            r5 = 3;
            r7 = data_020cbb18;
            for (; r5 >= 0; r5--) {
                if (r7->func_02072e88(r5)) {
                    if (!r7->func_020729cc(r5)) {
                        if (!unk_f0[r5]) {
                            r6 = FALSE;
                            break;
                        }
                    }
                }
            }
            func_020741a8();
            if (r6) {
                func_020a0088(7, 1);
                func_0209f1c4();
                unk_9d = 0x1b;
            }
        }
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        func_0209f898(&unk_9d, 0x10, 0x16, func_02073190(), 1);
        break;
    default: {
        u8 b;
        func_020a15f8();
        if (func_0209f23c()) {
            b = 6;
            func_02067918(0)->func_02067a84(&b, data_020e2934);
        }
        func_020a3ebc(8);
        break;
    }
    }
}

void Unk_020a1c88::func_020a2400() {
    func_0209f294();
}

void Unk_020a1c88::func_020a2408() {
    switch (unk_9d) {
    case 0:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020a15c8(0)) {
            unk_ce = func_02073168();
            unk_9d = 1;
        }
        break;
    case 1:
    case 2:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_0209f304(&unk_9d, 1);
        }
        break;
    case 3:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (func_020a1470(data_020cbb18->unk_64)) {
            func_020a14ac();
            unk_9d = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        func_0209f430(&unk_9d, 4, 0xf, 0x15, 1, 1, 1);
        break;
    case 12:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            BOOL r5 = TRUE;
            if (data_020cbb18->func_02072d44(func_020a5ef8())) {
                r5 = FALSE;
            }
            if (r5) {
                if (func_020749cc()) {
                    unk_9d = 0xd;
                }
            }
        }
        break;
    case 13:
        if (func_02073090(1)) {
            func_0207312c();
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                u32 t = func_02073168();
                if (unk_ce != t) {
                    Unk_020cbb18 *r5;
                    func_020a5c94(func_020a5ef8());
                    r5 = data_020cbb18;
                    r5->func_02072e28(2);
                    r5->func_020728d4();
                    r5->func_02072824(6, 0);
                    unk_9d = 0xe;
                }
            }
        }
        break;
    case 14:
        if (func_02073090(1)) {
            func_0207312c();
        } else if (unk_e2) {
            func_020b8e80();
            unk_9d = 0x1a;
        }
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
        func_0209f898(&unk_9d, 0xf, 0x15, 1, 1);
        break;
    default:
        func_020a15f8();
        func_020a3ebc(0xa);
        break;
    }
}
