#include "types.h"

struct Unk_ov054_0225b9c4_Owner {
    u8 pad_00[0x804];
    s32 unk_804;
};

extern "C" {
extern char *data_ov054_0225b96c[];
extern char *data_ov054_0225b974[];
extern u8 data_021d735c[];

s32 func_0212a438(const char *s);
s32 func_0212a15c(const void *a, const char *b, s32 n);
BOOL func_020a032c();
BOOL func_020a0318();
BOOL func_020a07e4();
BOOL func_020a080c();
void func_020a08d0();
BOOL func_020a05e8();
u32 func_0209750c();
void *func_02098320(u32 h);
u32 func_020978a4(void *g);
u32 func_02097a3c(u32 h);
u8 *func_02096e50(u32 h);
u32 func_020978c8(void *g, u32 i);
u32 func_020974f8();
u32 func_02097868(void *g, u32 i);
u32 func_0209888c(u32 h);
u32 func_02097414(void *p);
s32 func_02098044(u32 h, u32 a);
void func_0209801c(u32 h, u32 a);
u32 func_02099014(u16 *p, s32 a);
BOOL func_0204c0e0();
BOOL func_0202e148();
s32 func_02045df4();
u8 *func_02045dec();
BOOL func_0206e928();
void func_0209f204();
void func_02073bf8(s32 a, s32 b, s32 c);
void func_02067a78(void *ctx);
void func_02067990(void *ctx);
void func_02067a6c(void *ctx);
void func_0206799c(void *ctx, s32 a);
void func_02067a84(void *ctx, u8 *msg, char *tbl);
void func_02067a3c(void *ctx, s32 a, void *p);
BOOL func_020e7500(void *p);
BOOL func_020eb650(s32 a);
u32 func_020720f8();
u32 func_020733bc();
s32 func_0207217c();
s32 func_020eae78(u32 a);
void *func_020ea65c(s32 a);
s32 func_020ea6c8(void *p);
void *func_020ea6f4(void *p);
BOOL func_020ea608(void *p);
void func_02116048(void *dst, void *src, u32 n);
void func_02063888(void *p);
void func_02063830(void *p);
void func_02063818(void *p);
void func_02063870(void *p);
BOOL func_020a78a4(void *dst, const void *src, s32 n);
void func_020a7aa0(void *dst, void *src, s32 a, s32 b);

BOOL func_ov054_02258e58(Unk_ov054_0225b9c4_Owner *o);
void func_ov054_0225aef4(Unk_ov054_0225b9c4_Owner *o, s32 a);
}

class Unk_ov054_0225b9c4;
typedef void (Unk_ov054_0225b9c4::*Unk_ov054_0225b9c4_Fn)(s32);

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14(s32 a);
    virtual void vfunc_18(s32 a);

    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
    void func_02014e60(u16 *p, s32 a, s32 b, s32 c);
    void func_02015848(u32 a, u32 b);
    void func_02015878(u32 a, u32 b);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    void func_020157e8(u32 a, s32 b);
};

class Unk_ov054_0225b9c4 : public Unk_02015b54 {
public:
    virtual void vfunc_10();
    virtual void vfunc_14(s32 a);
    virtual void vfunc_18(s32 a);

    void func_ov054_0225981c(s32 a);
    void func_ov054_022598bc(s32 a);
    void func_ov054_022598c0(s32 a);
    void func_ov054_02259dec();
    void func_ov054_02259e54();
    void func_ov054_02259e78();
    void func_ov054_02259ef8();

    // out of range
    void func_ov054_022594f4(s32 a);
    void func_ov054_02259534(s32 a);
    void func_ov054_022595c4(s32 a);
    void func_ov054_0225944c(s32 a);
    void func_ov054_022590d0(s32 a);
    s32 func_ov054_0225a690(s32 a);
    void func_ov054_0225a720();
    s32 func_ov054_0225a758();
    s32 func_ov054_0225a770();
    s32 func_ov054_0225a7a8();
    void func_ov054_0225a910();

    /* 0x04 */ u8 pad_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x1d];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_ov054_0225b9c4_Owner *unk_ac;
    /* 0xb0 */ u8 pad_b0[0xbc - 0xb0];
    /* 0xbc */ u32 unk_bc;
    /* 0xc0 */ u8 pad_c0[4];
    /* 0xc4 */ u16 unk_c4;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov054_0225b9c4::vfunc_18(s32 a) {
    static Unk_ov054_0225b9c4_Fn tbl[3] = {
        &Unk_ov054_0225b9c4::func_ov054_022595c4,
        &Unk_ov054_0225b9c4::func_ov054_02259534,
        &Unk_ov054_0225b9c4::func_ov054_022594f4,
    };
    char *s = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 r = func_0212a15c((u8 *)this + 4, s, func_0212a438(s));
    s32 i;
    if (func_020a032c()) {
        i = 2;
    } else if (r == 0) {
        i = 0;
    } else {
        i = 1;
    }
    (this->*tbl[i])(a);
}

void Unk_ov054_0225b9c4::vfunc_14(s32 a) {
    static Unk_ov054_0225b9c4_Fn tbl[3] = {
        &Unk_ov054_0225b9c4::func_ov054_022598c0,
        &Unk_ov054_0225b9c4::func_ov054_022598bc,
        &Unk_ov054_0225b9c4::func_ov054_0225981c,
    };
    char *s = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 r = func_0212a15c((u8 *)this + 4, s, func_0212a438(s));
    s32 i;
    if (func_020a032c()) {
        i = 2;
    } else if (r == 0) {
        i = 0;
    } else {
        i = 1;
    }
    (this->*tbl[i])(a);
}

void Unk_ov054_0225b9c4::vfunc_10() {
    if (unk_1e == 0xf) {
        u8 *p = func_02096e50(func_02097a3c(func_0209750c()));
        u32 b1 = p[1];
        u32 b0 = p[0];
        func_02015958((s32)(p[2] + 0x7d0), 1, 4, 0, 0);
        func_02015878(b1, 2);
        func_02015848(b0, 3);
    }
    if (func_020a032c()) {
        u32 id = unk_1e;
        if (id != 0x24 && id != 0x25 && id != 0x26) {
            return;
        }
        s32 cnt = 0;
        s32 i = cnt;
        u8 *g = data_021d735c;
        do {
            if (func_020978c8(g, i)) {
                if (i != (s32)func_020974f8()) {
                    func_020157e8(func_0209888c(func_02097868(g, i)), cnt + 2);
                    cnt++;
                }
            }
            i++;
        } while (i < 4);
    }
}

void Unk_ov054_0225b9c4::func_ov054_022598c0(s32 a) {
    void *ctx = unk_3c;
    u32 h = func_0209750c();
    void *hd = func_02098320(h);
    char *tbl = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 r5 = 0;
    u8 msg;
    u16 half0;
    u16 half1;
    switch (unk_1e) {
    case 0x02:
        func_02067a78(ctx);
        break;
    case 0x00:
    case 0x52:
    case 0x53:
    case 0x56:
        func_ov054_0225944c(a);
        break;
    case 0x0e:
    case 0x5c:
    case 0x62:
        func_ov054_0225a720();
        if (func_0206e928()) {
            r5 = 9;
        } else {
            r5 = func_ov054_0225a7a8();
            if (r5 == 9) {
                r5 = 5;
            }
        }
        break;
    case 0x07:
        r5 = func_ov054_0225a7a8();
        break;
    case 0x61:
        func_ov054_0225a720();
        break;
    case 0x58:
        func_ov054_0225a720();
        r5 = func_ov054_0225a770();
        if (r5 == 9) {
            r5 = func_ov054_0225a758();
        }
        break;
    case 0x59:
    case 0x5a:
    case 0x5b:
        func_ov054_0225a720();
        r5 = func_ov054_0225a758();
        break;
    case 0x0b:
    case 0x0d:
    case 0x11:
        func_02015170(0x33, r5);
        func_020151d0(2);
        func_ov054_0225a690(5);
        break;
    case 0x12:
        func_02015170(0x34, 1);
        func_020151d0(2);
        func_ov054_0225a690(6);
        break;
    case 0x16:
        unk_bc = func_02097414(hd);
        func_02015170(0x3b, 1);
        func_020151d0(2);
        func_ov054_0225a690(7);
        break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
        r5 = 0x52;
        break;
    case 0x55:
        func_02067a78(ctx);
        func_0206799c(ctx, r5);
        func_ov054_0225a690(8);
        break;
    case 0x19:
    case 0x1b:
        func_02015170(0x37, 1);
        func_020151d0(2);
        func_ov054_0225a690(3);
        break;
    case 0x49:
        func_02015170(0x3f, r5);
        func_020151d0(2);
        func_ov054_0225a690(4);
        break;
    case 0x1d:
    case 0x1e:
        func_ov054_022590d0(a);
        break;
    case 0x36:
        func_02067a78(ctx);
        func_0206799c(ctx, 1);
        func_0209f204();
        func_02073bf8(2, 2, r5);
        unk_c4 = 0x258;
        func_ov054_0225a690(0xc);
        break;
    case 0x3d:
        switch (func_02045df4()) {
        case 0:
            r5 = 0x42;
            break;
        case 1:
            r5 = 0x41;
            break;
        case 2:
            r5 = 0x40;
            break;
        case 3:
            r5 = 0x3f;
            break;
        case 4:
            r5 = 0x3e;
            break;
        default:
            r5 = 0x40;
            break;
        }
        break;
    case 0x3e:
        if (func_02098044(h, 0x20)) {
            r5 = 0x4b;
            break;
        }
        if (func_0204c0e0()) {
            if (func_0202e148()) {
                half0 = 0x1379;
                if (func_02099014(&half0, r5)) {
                    r5 = 0x4d;
                    break;
                }
            }
        }
        r5 = 0x4c;
        break;
    case 0x40:
    case 0x41:
    case 0x42:
        switch (*(s32 *)(func_02045dec() + 8)) {
        case 0:
            r5 = 0x43;
            break;
        case 1:
            r5 = 0x44;
            break;
        case 2:
            r5 = 0x45;
            break;
        case 3:
            r5 = 0x46;
            break;
        case 4:
            r5 = 0x47;
            break;
        case 5:
            r5 = 0x48;
            break;
        default:
            r5 = 0x43;
            break;
        }
        break;
    case 0x4e:
        half1 = 0x1379;
        func_02014e60(&half1, r5, 5, 1);
        func_0209801c(h, 0x20);
        break;
    case 0x3b:
        func_02067a78(ctx);
        func_0206799c(ctx, r5);
        func_ov054_0225a690(0xe);
        break;
    case 0x3c:
        *(u32 *)((u8 *)ctx + 0x14) = 0;
        func_ov054_0225aef4(unk_ac, 8);
        break;
    }
    if (r5 != 0) {
        msg = r5;
        func_02067a84(ctx, &msg, tbl);
    }
}

void Unk_ov054_0225b9c4::func_ov054_022598bc(s32 a) {}

void Unk_ov054_0225b9c4::func_ov054_0225981c(s32 a) {
    void *ctx = unk_3c;
    char *tbl = *(char **)((u8 *)data_ov054_0225b974 + unk_ac->unk_804 * 12);
    u32 r4 = 0;
    u8 msg;
    switch (unk_1e) {
    case 0x02:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
        func_02015170(0x2f, 0);
        func_020151d0(2);
        break;
    case 0x13:
        r4 = func_020978a4(data_021d735c);
        if (func_020a0318()) {
            r4 = 2;
        } else {
            r4 = (u8)(r4 + 0x22);
        }
        break;
    }
    if (r4 != 0) {
        msg = r4;
        func_02067a84(ctx, &msg, tbl);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259dec() {
    void *ctx = unk_3c;
    if (func_020a07e4()) {
        func_ov054_0225a690(0);
    } else if (func_020a080c()) {
        u8 msg;
        func_02067990(ctx);
        func_02067a6c(ctx);
        msg = 0x3c;
        func_02067a84(ctx, &msg, *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
        func_ov054_0225a690(0);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259e54() {
    if (func_ov054_02258e58(unk_ac)) {
        func_020a08d0();
        func_ov054_0225a690(0xf);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259e78() {
    void *ctx = unk_3c;
    if (func_020e7500(&unk_c4) == 0) {
        u8 msg;
        func_ov054_0225a910();
        msg = 0x37;
        func_02067a84(ctx, &msg, *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
        func_02067990(ctx);
        func_02067a6c(ctx);
        func_ov054_0225a690(0);
    } else if (func_020eb650(func_020720f8())) {
        func_02067990(ctx);
        func_02067a6c(ctx);
        func_ov054_0225a690(0);
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259ef8() {
    void *v[4];
    u8 buf[16];
    u32 A[0x1c / 4];
    u32 B[0x18 / 4];
    void *ctx = unk_3c;
    u8 i;
    v[0] = 0;
    v[1] = 0;
    v[2] = *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12);
    s32 n = func_020eae78(func_020733bc());
    if (func_020e7500(&unk_c4) == 0) {
        func_ov054_0225a910();
        buf[0] = 0x37;
        func_02067a84(ctx, buf, *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
        func_02067990(ctx);
        func_02067a6c(ctx);
        func_ov054_0225a690(0);
    } else if (n > 0) {
        v[0] = func_020ea65c(func_0207217c());
        func_02063888(A);
        func_02063830(B);
        for (i = 0; i < n; i++) {
            v[1] = ((void **)v[0])[i];
            if (v[1]) {
                func_0207217c();
                v[3] = (void *)func_020ea6c8(v[1]);
                if ((s32)v[3] == 10) {
                    func_0207217c();
                    func_02116048(func_020ea6f4(v[1]), &buf[3], (s32)v[3]);
                    if (buf[12] == 1) {
                        u32 m = 0x38;
                        if (buf[11] == 0) {
                            func_020a78a4(B, &buf[3], 8);
                            func_020a7aa0(A, B, 0, 0);
                            func_02067a3c(ctx, 8, A);
                            m = 0x39;
                        }
                        buf[1] = m;
                        func_02067a84(ctx, &buf[1], (char *)v[2]);
                        func_0207217c();
                        if (func_020ea608(v[1])) {
                            func_ov054_0225a690(0xd);
                            break;
                        } else {
                            func_ov054_0225a910();
                            buf[2] = 0x37;
                            func_02067a84(ctx, &buf[2], *(char **)((u8 *)data_ov054_0225b96c + unk_ac->unk_804 * 12));
                            func_02067990(ctx);
                            func_02067a6c(ctx);
                            func_ov054_0225a690(0);
                            break;
                        }
                    }
                }
            }
        }
        func_02063818(B);
        func_02063870(A);
    }
}
