#include "types.h"

class Unk_020238b0;

struct Unk_020238b0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_020238b0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_020238b0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

typedef void (Unk_020238b0::*Unk_020238b0_Fn)();
typedef void (Unk_020238b0::*Unk_020238b0_OutFn)(Unk_020238b0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void func_02067abc(void *, u8 *, u32);
void func_02014e60(void *, u16 *, u32, u32, u32);
void func_0201517c(void *, u32, u32, u32);
void func_020151d0(void *, s32);
void func_0201578c(void *, void *, u32, u32);
void func_020158e0(void *, s32, u32, u32, u32, u32, u32);
void func_0209a944(void *);
void func_020776d8(void *);
void *func_0202d114(void *);
s32 func_0209ace8(void *, s32 *);
s32 func_0209ad28(void *);
s32 func_0209ac64(void *);
s32 func_0209a8f4(s32);
s32 func_0209a938(void *);
void *func_0209a940(void *);
void func_0209abb4(void *, u32);
void func_020776f0(void *, u32);
s32 func_02072e88(void *, void *);
void func_0207c7bc(void *);
void func_0207e310(void *);
void func_02078520();
void func_0207cfb8(void *, u16 *);
s32 func_02080b78(void *);
void func_020777b8(void *, s32, u16 *);
void *func_0209750c();
void *func_02098750();
s32 func_02063b8c(u32);
s32 func_0205b4f8();
s32 func_0202ac7c(s32);
void func_02026968(u16 *, s32);
s32 func_0207ce70(u16 *, void *);
s32 func_0207ceb4(u16 *, void *);
s32 func_0207cf10(void *);
s32 func_0202cd44(u16 *, void *);
s32 func_0202cd2c(u16 *, void *);
s32 func_02097a48(void *, s32, u32);
s32 func_02097edc(void *);
s32 func_02097f30(void *, u16 *, s32);
s32 func_020986c8(void *);
s32 func_0203c42c(s32, u16 *, u32, u32);
}

extern Unk_020238b0_Data data_020d7c80;
extern Unk_020238b0_Data data_020d7e78;
extern Unk_020238b0_Data data_020d7d38;
extern Unk_020238b0_Data data_020c76f0;
extern u32 data_020d8878[];
extern u32 data_020d8864[];
extern Unk_020238b0_Data data_020c7b88[];
extern u8 data_020c7a44[];
extern u8 data_020c7a50[];
extern u8 data_020c7a5c[];
extern u8 data_021bf76c[];
extern u8 data_021bf754[];
extern u8 data_021bf73c[];
extern Unk_020238b0_Fn data_020d7c70;
extern Unk_020238b0_Fn data_020d7c78;
extern Unk_020238b0_Fn data_020d7cf8;
extern Unk_020238b0_Fn data_020d7da0;
extern Unk_020238b0_Fn data_020d7970;
extern void *data_020cbb18[];

extern "C" BOOL func_020238e0(u16 *p);

static inline BOOL Unk_020238b0_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

class Unk_020238b0 {
public:
    void func_020238b0();
    void func_02023900();
    void func_02023928(Unk_020238b0_Out *out);
    void func_020239c8(Unk_020238b0_Out *out);
    void func_02023a58();
    void func_02023ab4(Unk_020238b0_Out *out);
    void func_02023b50(Unk_020238b0_Out *out);
    void func_02023bfc();
    void func_02023c80();
    void func_02023cb0(Unk_020238b0_Out *out);
    void func_02023da4();
    void func_020241a0();
    void func_0202d294(Unk_020238b0_Fn fn);
    void func_0202d33c(Unk_020238b0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_020238b0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_020238b0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_020238b0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    void *unk_128;
    u8 pad_12c[0x156 - 0x12c];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
    u8 pad_164[0x198 - 0x164];
    u16 unk_198;
    u8 pad_19a[2];
    s32 unk_19c;
};

void Unk_020238b0::func_020238b0() {
    func_0201517c(this, (u32)func_020238e0, 0xd, 0);
    func_020151d0(this, 0);
    func_0202d33c(data_020d7c70);
}

extern "C" BOOL func_020238e0(u16 *p) {
    return Unk_020238b0_InRange(p, 0x1561, 0x1564);
}

void Unk_020238b0::func_02023900() {
    func_0209a944(unk_160);
    func_020776d8(unk_fc->unk_82c);
}

void Unk_020238b0::func_02023928(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = data_020d7c80;
    s32 idx = 0;
    func_0209ace8(func_0202d114(this), &idx);
    if (idx < 5) {
        d.unk_00 = data_020d8878[idx];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
    func_0202d294(data_020d7c78);
}

void Unk_020238b0::func_020239c8(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = data_020d7e78;
    s32 idx = 0;
    func_0209ace8(func_0202d114(this), &idx);
    if (idx < 5) {
        d.unk_00 = data_020d8864[idx];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
        out->unk_00 = (u32)&unk_100;
        out->unk_04 = unk_11e;
    }
}

void Unk_020238b0::func_02023a58() {
    void *r4 = unk_fc->unk_82c;
    func_0209abb4(func_0209a940(unk_160), 3);
    func_020776f0(unk_fc->unk_82c, 3);
    if (func_02072e88(data_020cbb18[0], ((void **)data_020cbb18[0])[0x64 / 4]) == 0) {
        func_0207c7bc(r4);
        func_0207e310(r4);
        func_02078520();
    }
}

void Unk_020238b0::func_02023ab4(Unk_020238b0_Out *out) {
    Unk_020238b0_Data *e = data_020c7b88;
    if (func_0209ad28(func_0202d114(this)) == 0) {
        s32 idx = 0;
        if (func_0209ace8(func_0202d114(this), &idx) != 0) {
            e = &data_020c7b88[idx];
        }
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), e->unk_00, e->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7da0;
}

void Unk_020238b0::func_02023b50(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = data_020d7d38;
    switch (func_0209ac64(func_0202d114(this))) {
    case 2:
        d.unk_00 = (u32)data_020c7a44;
        break;
    case 3:
        d.unk_00 = (u32)data_020c7a50;
        break;
    default:
        d.unk_00 = (u32)data_020c7a5c;
        break;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7970;
}

void Unk_020238b0::func_02023bfc() {
    u8 b;
    Unk_020238b0_Out out;
    s32 n = func_0209a8f4(func_0209ac64(func_0202d114(this)));
    if (func_0209a938(unk_160) >= n - 1) {
        func_0202d1d4(this, data_021bf76c);
    } else {
        func_0202d1d4(this, data_021bf754);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_020238b0::func_02023c80() {
    func_02014e60(this, &unk_198, 0, 5, 0);
    func_0202d33c(data_020d7cf8);
}

void Unk_020238b0::func_02023cb0(Unk_020238b0_Out *out) {
    void *r6 = unk_fc->unk_82c;
    u16 saved = unk_120;
    if (func_0209ac64(func_0202d114(this)) == 3) {
        saved = unk_198;
        unk_198 = 0xfff1;
    }
    func_02023da4();
    if (saved != 0xfff1) {
        func_0207cfb8(r6, &saved);
    }
    u16 *q = &unk_120;
    if (*q != 0xfff1 && unk_128 != 0 && unk_124 != -1) {
        func_02080b78(unk_128);
        func_020777b8(r6, unk_124, &unk_120);
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c76f0.unk_00, data_020c76f0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
}

void Unk_020238b0::func_020241a0() {
    u8 b;
    Unk_020238b0_Out out;
    func_0202d1d4(this, data_021bf73c);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_020238b0::func_02023da4() {
    u16 buf[16];
    void *r4;
    void *r10;
    void *r6;
    void *t;
    s32 r7, r5;
    if (unk_160 == 0) {
        return;
    }
    r4 = func_0209750c();
    r10 = func_02098750();
    r6 = unk_fc->unk_82c;
    t = func_0209a940(unk_160);
    r7 = func_02063b8c(100);
    r5 = func_0209a938(unk_160);
    switch (func_0209ac64(t)) {
    case 0:
    case 1:
    case 2:
        switch (r5) {
        case 0:
        case 1:
            if (r7 < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x1f4;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[0], unk_19c);
                unk_198 = buf[0];
            }
            break;
        case 2:
        case 3:
            func_0207ce70(&buf[1], unk_fc->unk_82c);
            unk_198 = buf[1];
            if (unk_198 != 0xfff1) {
                func_0207cf10(unk_fc->unk_82c);
            } else if (func_02063b8c(100) < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x2bc;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[2], unk_19c);
                unk_198 = buf[2];
            }
            break;
        default:
            func_0202cd44(&buf[3], r4);
            unk_198 = buf[3];
            break;
        }
        if (unk_198 == 0xfff1) {
            func_0202cd44(&buf[4], 0);
            unk_198 = buf[4];
        }
        break;
    case 3:
        switch (r5) {
        case 0:
        case 1:
            func_0207ceb4(&buf[5], r6);
            unk_198 = buf[5];
            if (unk_198 != 0xfff1) {
                func_0207cf10(r6);
            } else if (r7 < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x1f4;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[6], unk_19c);
                unk_198 = buf[6];
            }
            break;
        case 2:
        case 3:
        case 4:
            func_0207ce70(&buf[7], r6);
            unk_198 = buf[7];
            if (unk_198 != 0xfff1) {
                func_0207cf10(r6);
            } else if (func_02063b8c(100) < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x2bc;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[8], unk_19c);
                unk_198 = buf[8];
            }
            break;
        default:
            func_0202cd2c(&buf[9], r4);
            unk_198 = buf[9];
            break;
        }
        if (unk_198 == 0xfff1) {
            func_0202cd2c(&buf[10], 0);
            unk_198 = buf[10];
        }
        break;
    case 4:
        switch (r5) {
        case 0:
        case 1:
            if (r7 < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x1f4;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[11], unk_19c);
                unk_198 = buf[11];
            }
            break;
        case 2:
        case 3:
        case 4:
            func_0207ce70(&buf[12], r6);
            unk_198 = buf[12];
            if (unk_198 != 0xfff1) {
                func_0207cf10(r6);
            } else if (func_02063b8c(100) < 30) {
                unk_19c = func_0205b4f8() * 4 + 0x2bc;
                unk_19c = func_0202ac7c(unk_19c);
                func_02026968(&buf[13], unk_19c);
                unk_198 = buf[13];
            }
            break;
        default:
            func_0202cd44(&buf[14], r4);
            unk_198 = buf[14];
            break;
        }
        if (unk_198 == 0xfff1) {
            func_0202cd44(&buf[15], 0);
            unk_198 = buf[15];
        }
        break;
    }
    if (Unk_020238b0_InRange(&unk_198, 0x1492, 0x14fd)) {
        func_02097a48(r10, unk_19c, 1);
    } else if (unk_198 != 0xfff1) {
        s32 r2 = func_02097edc(r10);
        if (r2 != -1) {
            func_02097f30(r10, &unk_198, r2);
            func_0203c42c(func_020986c8(r4), &unk_198, 0, 1);
        }
    }
    if (Unk_020238b0_InRange(&unk_198, 0x1492, 0x14fd)) {
        func_020158e0(this, unk_19c, 1, 4, 1, 1, 0);
    } else if (unk_198 != 0xfff1) {
        func_0201578c(this, &unk_198, 1, 7);
    }
}
