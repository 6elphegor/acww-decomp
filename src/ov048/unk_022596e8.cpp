#include "types.h"

class Unk_ov048_0225cbc8;

extern "C" {
extern u32 data_ov048_0225c6e0;
extern u8 data_ov048_0225d0c4[];
extern void *data_020cbb18;

s32 func_02067a84(void *, u8 *, u32);
void func_02067a3c(void *, s32, void *);
void func_02067a78(void *p);
s32 func_020eaf18();
s32 func_020ea748();
s32 func_020ea738();
void func_020ea72c();
void func_020b4154(void *);
void func_020b413c(void *);
void func_020b3270(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063888(void *);
void func_02063830(void *);
void func_02094030(void *);
void func_02093fd8(void *);
void func_02093fc0(void *);
void func_02094018(void *);
void func_02063818(void *);
void func_02063870(void *);
BOOL func_020a78a4(void *, const void *, s32);
void func_020a7aa0(void *, void *, s32, s32);
BOOL func_020e7500(void *p);
s32 func_020e77cc(s32 a, s32 b, s32 c);
void *func_02098680(void *);
void *func_02076c7c(void *);
void *func_02076e1c(void *);
void *func_02076c80(void *);
BOOL func_020a05e8();
BOOL func_020ea3e8(void *);
void func_020ea3d0(void *, void *);
s32 func_020ea5d0(s32);
s32 func_020ea434(s32);
s32 func_020ea598(s32);
BOOL func_020eb1cc(s32);
BOOL func_0206ed18();
s32 func_0206ed38();
s32 func_020721b4();
u8 *func_020721ec(void *);
u8 *func_020721f8(void *);
void *func_0209750c();
s32 func_02098878();
void func_0209ed74();
void func_0209ecf8();
void func_0209ec80();
void func_0209f248();
BOOL func_020a0554();
BOOL func_020a0828();
BOOL func_020a084c();
void func_020c0378();
s32 func_020c03a0();
void func_020a093c();
BOOL func_0209ee3c();
BOOL func_0209ef5c();
BOOL func_0209edcc();
BOOL func_0209efa4();
BOOL func_0209edf4();
BOOL func_0209ee60();
BOOL func_0209ee18();
BOOL func_020733bc();
s32 func_0207217c();
s32 func_020eae78(s32);
void *func_020ea65c(s32);
s32 func_020ea6c8(void *);
void *func_020ea6f4(void *);
void func_020ea608(void *);
void func_02116048(void *, void *, u32);
s32 func_02133150(s32 a, s32 b);
BOOL func_ov048_02258e34(void *p);
}

class Unk_ov048_0225cbc8 {
public:
    void func_ov048_022596e8();
    void func_ov048_022597e8(u32 msg, s32 unused);
    BOOL func_ov048_02259838();
    BOOL func_ov048_02259868();
    BOOL func_ov048_022598c0();
    BOOL func_ov048_022598f0();
    BOOL func_ov048_02259924(s32 flag);
    void func_ov048_02259a3c();
    void func_ov048_02259ab8();
    void func_ov048_02259ae0();
    void func_ov048_02259b60();
    void func_ov048_02259bb0();
    void func_ov048_02259c1c();
    void func_ov048_02259d40();
    BOOL func_ov048_02259e6c();
    void func_ov048_02259e9c();
    void func_ov048_02259ed4();
    void func_ov048_02259f00();
    void func_ov048_02259f38();
    void func_ov048_02259f64();
    void func_ov048_02259f9c();
    void func_ov048_02259fc8();

    // out of range
    void func_ov048_0225a078(s32 state);
    s32 func_ov048_0225913c(s32 v);
    s32 func_ov048_02259390();
    s32 func_ov048_02259420();
    void func_ov048_0225ad38();
    void func_ov048_0225b018();

    u8 pad_00[0x1e];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0xaa - 0x40];
    u8 unk_aa;
    u8 pad_ab[0xb0 - 0xab];
    s32 unk_b0;
    u8 *unk_b4;
    u8 pad_b8[0x2f4 - 0xb8];
    u8 unk_2f4[0xe0];
    s32 unk_3d4;
    u8 pad_3d8[0x7e0 - 0x3d8];
    u8 unk_7e0;
    u8 unk_7e1;
    u8 pad_7e2;
    u8 unk_7e3;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov048_0225cbc8::func_ov048_022596e8() {
    BOOL z = FALSE;
    s32 n;
    void **arr;
    u8 i;
    u8 buf[0x18];
    if (func_ov048_02259924(0)) {
        return;
    }
    if (func_ov048_022598c0()) {
        return;
    }
    n = func_020eae78(func_020733bc());
    if (n > 0) {
        arr = (void **)func_020ea65c(func_0207217c());
        for (i = z; i < n; i++) {
            u8 *p = (u8 *)arr[i];
            s32 t;
            BOOL hit;
            if (p) {
                func_0207217c();
                t = func_020ea6c8(p);
                if (t == 0x11) {
                    func_0207217c();
                    func_02116048(func_020ea6f4(p), buf, t);
                    if (buf[0x10] == 0) {
                        if (p[2] == unk_2f4[2] && p[3] == unk_2f4[3] && p[4] == unk_2f4[4] && p[5] == unk_2f4[5] &&
                            p[6] == unk_2f4[6] && p[7] == unk_2f4[7]) {
                            hit = TRUE;
                        } else {
                            hit = z;
                        }
                        if (hit) {
                            func_0207217c();
                            func_020ea608(p);
                            *(u16 *)(unk_b4 + 0xe3e) = 200;
                            func_ov048_0225a078(5);
                        }
                    }
                }
            }
        }
    }
}

void Unk_ov048_0225cbc8::func_ov048_022597e8(u32 msg, s32 unused) {
    u8 b = msg;
    func_02067a84(unk_3c, &b, data_ov048_0225c6e0);
    if (func_020eaf18() == 3 || func_020eaf18() == 4) {
        func_ov048_0225a078(0x14);
    } else {
        func_ov048_0225ad38();
        func_ov048_0225b018();
        func_ov048_0225a078(0);
    }
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259838() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        func_ov048_022597e8(0x56, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259868() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        func_ov048_022597e8(0x7a, 1);
        return TRUE;
    }
    if (func_020ea748() != 0) {
        s32 v = func_020ea738();
        if (v < 0) {
            v = -v;
        }
        s32 r = func_ov048_0225913c(v);
        func_ov048_022597e8(r, 1);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_022598c0() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        func_ov048_022597e8(0x65, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_022598f0() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        s32 r = func_ov048_02259390();
        func_ov048_022597e8(r, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259924(s32 flag) {
    s32 code = func_020ea748();
    u32 a[0x2c / 4];
    u32 b[0x2c / 4];
    if (code != 0 || flag != 0) {
        if (flag != 0) {
            s32 r = func_ov048_02259390();
            func_ov048_022597e8(r, 0);
        } else if (func_020eaf18() == 3 || func_020eaf18() == 4) {
            s32 v = func_020ea738();
            s32 q;
            if (v < 0) {
                v = -v;
            }
            q = func_02133150(v, 1000);
            func_020b4154(a);
            func_020b4154(b);
            func_020b3270(a, q, 2, 6, 0, 0);
            func_020b3270(b, v - q * 1000, 3, 6, 0, 0);
            func_02067a3c(unk_3c, 6, a);
            func_02067a3c(unk_3c, 7, b);
            if (code == 0x400b) {
                func_ov048_022597e8(0x7d, 0);
            } else if (code == 0x400a) {
                func_ov048_022597e8(0x78, 0);
            } else if (v == 0x13a1a) {
                func_ov048_022597e8(0x7a, 0);
            } else {
                func_ov048_022597e8(0x7e, 0);
            }
            func_020b413c(b);
            func_020b413c(a);
        } else {
            s32 r = func_ov048_02259390();
            func_ov048_022597e8(r, 0);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov048_0225cbc8::func_ov048_02259a3c() {
    void *t = unk_3c;
    if (func_020a0828()) {
        u8 a;
        func_ov048_0225ad38();
        a = 0xa;
        func_02067a84(t, &a, (u32)data_ov048_0225d0c4);
        func_ov048_0225a078(0);
    } else if (func_020a084c()) {
        u8 b;
        unk_7e1 = 1;
        func_ov048_0225ad38();
        b = unk_aa;
        func_02067a84(t, &b, data_ov048_0225c6e0);
        func_020c0378();
        func_ov048_0225a078(0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259ab8() {
    if (func_ov048_02258e34(unk_b4)) {
        func_020a093c();
        func_ov048_0225a078(0x16);
    } else {
        func_020c03a0();
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259ae0() {
    void *t = unk_3c;
    if (t) {
        func_02067a78(t);
    }
    if (func_020eb1cc(func_020721b4())) {
        if (t) {
            func_ov048_0225ad38();
        }
        if (func_0209750c()) {
            s32 r = func_02098878();
            if (r >= 0 && r < 4) {
                u8 b;
                func_0209ed74();
                func_0209ecf8();
                func_0209ec80();
                func_ov048_0225b018();
                func_0209f248();
                if (func_020a0554()) {
                    b = 2;
                    func_02067a84(unk_3c, &b, data_ov048_0225c6e0);
                }
            }
        }
        func_ov048_0225a078(0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259b60() {
    if (func_0206ed18()) {
        u8 a = 0x59;
        func_02067a84(unk_3c, &a, data_ov048_0225c6e0);
    } else {
        u8 b = 0x58;
        func_02067a84(unk_3c, &b, data_ov048_0225c6e0);
        func_ov048_0225b018();
    }
    func_ov048_0225a078(0);
}

void Unk_ov048_0225cbc8::func_ov048_02259bb0() {
    if (func_0206ed18()) {
        s32 r5 = func_0206ed38();
        u8 a;
        func_020721b4();
        unk_3d4 = func_020ea598(r5);
        a = 0x62;
        func_02067a84(unk_3c, &a, data_ov048_0225c6e0);
        func_ov048_0225a078(0);
    } else {
        u8 b;
        func_ov048_0225a078(0x14);
        b = 0x61;
        func_02067a84(unk_3c, &b, data_ov048_0225c6e0);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259c1c() {
    s32 n;
    void **arr;
    void *p;
    void *r7;
    u8 i;
    u8 buf[0x14];
    u32 A[0x1c / 4];
    u32 B[0x18 / 4];
    u32 C[0x1c / 4];
    u32 D[0x1c / 4];
    if (func_ov048_02259838() == 0) {
      n = func_020eae78(func_020733bc());
      if (n > 0) {
        arr = (void **)func_020ea65c(func_0207217c());
        func_02063888(A);
        func_02063830(B);
        func_02094030(C);
        func_02093fd8(D);
        r7 = unk_3c;
        for (i = 0; i < n; i++) {
            p = arr[i];
            s32 t;
            if (p) {
                func_0207217c();
                t = func_020ea6c8(p);
                if (t == 0x11) {
                    func_0207217c();
                    func_02116048(func_020ea6f4(p), &buf[1], t);
                    if (buf[0x11] == 0) {
                        func_02116048(p, unk_2f4, 0xe0);
                        func_020a78a4(B, &buf[1], 8);
                        func_020a7aa0(A, B, 0, 0);
                        func_020a78a4(D, &buf[9], 8);
                        func_020a7aa0(C, D, 0, 0);
                        func_02067a3c(r7, 3, A);
                        func_02067a3c(r7, 4, C);
                        buf[0] = 0x57;
                        func_02067a84(r7, buf, data_ov048_0225c6e0);
                        func_ov048_0225ad38();
                        func_ov048_0225a078(0);
                        break;
                    }
                }
            }
        }
        func_02093fc0(D);
        func_02094018(C);
        func_02063818(B);
        func_02063870(A);
    }
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259d40() {
    u8 *g = (u8 *)data_020cbb18;
    u8 *r4 = func_020721ec(g);
    void *r6 = func_0209750c();
    u8 m;
    s32 mv;
    if (unk_1e == 0x62) {
        u8 *r6b = func_020721f8(g);
        s32 h = unk_3d4;
        s32 k;
        func_020721b4();
        k = func_020ea5d0(h);
        u8 *e = r6b + k * 0x13;
        if (e[0x190] != 6 || k == -1) {
            func_ov048_022597e8(0x78, 1);
        } else {
            h = unk_3d4;
            func_020721b4();
            func_020ea434(h);
            *(u16 *)(unk_b4 + 0xe3e) = 0x960;
            func_ov048_0225a078(5);
        }
    } else {
        if (func_020ea3e8(r4 + 0x10)) {
            func_020ea3d0(r4 + 0x10, func_02076e1c(func_02076c7c(func_02098680(r6))));
            func_02116048(r4 + 0x10, func_02076c80(func_02098680(r6)), 0x40);
            if (func_020a05e8() == 0) {
                mv = 0x75;
            } else {
                mv = 2;
            }
        } else {
            mv = func_ov048_02259420();
        }
        m = mv;
        func_02067a84(unk_3c, &m, data_ov048_0225c6e0);
        if (unk_7e3 == 0 || unk_7e0 != 0) {
            func_ov048_0225a078(0x14);
        } else {
            func_ov048_0225ad38();
            func_ov048_0225a078(0);
        }
    }
}

BOOL Unk_ov048_0225cbc8::func_ov048_02259e6c() {
    s32 v = func_020ea738();
    if (v < 0) {
        v = -v;
    }
    if (func_020e77cc(v, 0x17ed0, 0x182b7)) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov048_0225cbc8::func_ov048_02259e9c() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209ee3c()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259ed4() {
    if (func_0209ef5c()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f00() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209edcc()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f38() {
    if (func_0209efa4()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f64() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209edf4()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259f9c() {
    if (func_0209ee60()) {
        func_ov048_0225a078(unk_b0 + 1);
    } else {
        func_ov048_0225a078(unk_b0 + 2);
    }
}

void Unk_ov048_0225cbc8::func_ov048_02259fc8() {
    if (func_ov048_02259e6c()) {
        func_020ea72c();
        func_ov048_0225a078(unk_b0 + 1);
    } else if (func_0209ee18()) {
        func_ov048_0225a078(unk_b0 + 1);
    }
}
