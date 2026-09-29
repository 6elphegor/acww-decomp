#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0201d2d0_Msg {
    u8 pad_00[8];
    s32 unk_08;
};

struct Unk_02027324_S {
    u8 unk_00;
    u16 unk_02;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0202d1d4(void *, void *);
s32 func_02067a84(void *, u8 *, u32);
s32 func_02067abc(void *, u8 *, u32);
void *func_0209750c();
void *func_02098750(void *);
void *func_0207f968(void *);
u8 func_0204b820(void *);
void func_0209a424(void *, s32);
void *func_0209a4e4(void *, s32);
void func_0209a588(void *);
void *func_0202d114(void *);
s32 func_0209ac64(void *);
void *func_0209ab94(void *);
void func_020147e4(void *);
void *func_0202ceb0(void *);
s32 func_02065578(void *);
void func_02065c94(void *);
void func_0207ab90(void *, void *, void *, s32);
void func_02014ce4(void *, u16 *, s32, s32, s32);
s32 func_0206ed18();
s32 func_0206ed38();
u16 *func_02097f6c(void *, s32);
void func_02097f30(void *, u16 *, s32, s32);
void func_0201517c(void *, void *, s32, s32);
void func_02015170(void *, s32, s32);
void func_020151d0(void *, s32);
void func_020157b8(void *, void *, s32);
void func_0201578c(void *, u16 *, s32, s32);
s32 func_0202cee4(void *, void *);
}

extern Unk_0201d2d0_Data data_020c7a18;
extern Unk_0201d2d0_Data data_020c7a10;
extern Unk_0201d2d0_Data data_020c7550;
extern Unk_0201d2d0_Data data_020c7548;
extern Unk_0201d2d0_Data data_020c7568;
extern Unk_0201d2d0_Data data_020c7610;
extern Unk_0201d2d0_Data data_020c7560;
extern Unk_0201d2d0_Data data_020c7558;
extern Unk_0201d2d0_Data data_020c7a08;
extern Unk_0201d2d0_Data data_020c7580;
extern Unk_0201d2d0_Fn data_020d8018;
extern Unk_0201d2d0_Fn data_020d7988;
extern Unk_0201d2d0_Fn data_020d7908;
extern Unk_0201d2d0_Fn data_020d7948;
extern Unk_0201d2d0_Fn data_020d7940;
extern Unk_0201d2d0_Fn data_020d7930;
extern Unk_0201d2d0_Fn data_020d7c10;
extern Unk_0201d2d0_Fn data_020d7a50;
extern u8 data_021bf3f4[];
extern u8 data_021bf40c[];
extern u8 data_021bf424[];
extern u8 data_021bf454[];
extern u8 data_021bf43c[];
extern u8 data_021bf3ac[];
extern u8 data_021bf3c4[];
extern u8 data_021bf34c[];
extern u8 data_021bf364[];
extern u8 data_021dfd8c[];
extern "C" BOOL func_02027500(u16 *p, s32 v);

static inline BOOL Unk_020270ec_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

class Unk_0201d2d0 {
public:
    void func_020270ec();
    void func_020271c8();
    void func_020272a4(Unk_0201d2d0_Out *out);
    void func_02027324();
    void func_02027424();
    void func_02027430(Unk_0201d2d0_Out *out);
    void func_02027490();
    void func_02027530(Unk_0201d2d0_Out *out);
    void func_02027590();
    void func_0202760c(Unk_0201d2d0_Out *out);
    void func_020276e8();
    void func_02027730(Unk_0201d2d0_Out *out);
    void func_020277b0();
    void func_020277fc(Unk_0201d2d0_Out *out);
    void func_0202787c();
    void func_020279a0();

    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d328(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    Unk_0201d2d0_Msg *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x15c - 0x122];
    void *unk_15c;
};

void Unk_0201d2d0::func_020270ec() {
    Unk_0201d2d0_Out out;
    u8 b;
    s32 r4 = 1;
    u8 *r6 = (u8 *)func_0207f968(unk_fc->unk_82c);
    if (Unk_020270ec_R(&unk_120, 0x11a8, 0x12a7)) {
        u8 v = func_0204b820(&unk_120);
        if (v == r6[0]) {
            r4 = 0;
        } else if (v == r6[1]) {
            r4 = 2;
        }
    }
    func_0209a424(unk_15c, r4);
    switch (r4) {
    case 0:
        func_0202d1d4(this, data_021bf3f4);
        break;
    case 2:
        func_0202d1d4(this, data_021bf40c);
        break;
    default:
        func_0202d1d4(this, data_021bf424);
        break;
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_020271c8() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r4;
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        func_020147e4(this);
        func_0202d33c(data_020d8018);
        break;
    case 19:
        r4 = func_0202ceb0(func_02098750(func_0209750c()));
        if (r4 != 0) {
            if (func_02065578(r4) == 7) {
                func_0202d1d4(this, data_021bf454);
            } else {
                func_02065c94(r4);
                func_0202d1d4(this, data_021bf43c);
            }
            if (unk_ac) {
                (this->*unk_ac)(&out);
            }
            b = out.unk_04;
            func_02067abc(unk_3c, &b, out.unk_00);
        }
        break;
    }
    r4 = func_0209a4e4(unk_15c, 0);
    func_0207ab90(data_021dfd8c, r4, func_020805c4(unk_fc->unk_82c), 10);
}

void Unk_0201d2d0::func_020272a4(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        r4 = &data_020c7a18;
        break;
    case 19:
        r4 = &data_020c7a10;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02027324() {
    Unk_02027324_S c;
    Unk_0201d2d0_Out out;
    if (func_0206ed18() == 0) {
        if (func_0209ac64(func_0202d114(this)) == 19 && unk_3c != 0) {
            unk_3c->unk_08 = 1;
        }
        func_0202d1d4(this, data_021bf3ac);
    } else {
        s32 r4 = 2;
        s32 r6 = func_0206ed38();
        void *r7 = func_02098750(func_0209750c());
        switch (func_0209ac64(func_0202d114(this))) {
        case 10:
            unk_120 = *func_02097f6c(r7, r6);
            c.unk_02 = 0xfff1;
            func_02097f30(r7, &c.unk_02, r6, 0);
            break;
        case 19:
            func_0202d328(data_020d7988);
            unk_120 = 0x1565;
            r4 = 0;
            break;
        }
        func_0202d1d4(this, data_021bf3c4);
        func_02014ce4(this, &unk_120, r4, 4, 0);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    c.unk_00 = out.unk_04;
    func_02067a84(unk_3c, &c.unk_00, out.unk_00);
}

void Unk_0201d2d0::func_02027424() {
    if (unk_3c != 0) {
        unk_3c->unk_08 = 1;
    }
}

void Unk_0201d2d0::func_02027430(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7550.unk_00, data_020c7550.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02027490() {
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        func_0201517c(this, (void *)func_02027500, 0xd, 0);
        func_020151d0(this, 0);
        func_0202d33c(data_020d7908);
        break;
    case 19:
        func_02015170(this, 0x28, 1);
        func_020151d0(this, 2);
        func_0202d33c(data_020d7948);
        break;
    default:
        func_020151d0(this, 7);
        break;
    }
}

extern "C" BOOL func_02027500(u16 *p, s32 v) {
    BOOL r4 = FALSE;
    if (Unk_020270ec_R(p, 0x11a8, 0x12a7) && v == 2) {
        r4 = TRUE;
    }
    return r4;
}

void Unk_0201d2d0::func_02027530(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7548.unk_00, data_020c7548.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02027590() {
    void *r4;
    if (func_0209ac64(func_0202d114(this)) == 19) {
        func_02014ce4(this, (u16 *)func_0209ab94(func_0202d114(this)), 0, 5, 0);
        func_0202d33c(data_020d7940);
    }
    r4 = func_020805c4(unk_fc->unk_82c);
    func_0207ab90(data_021dfd8c, r4, func_0209a4e4(unk_15c, 1), -20);
    func_0209a588(unk_15c);
}

void Unk_0201d2d0::func_0202760c(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        r4 = &data_020c7568;
        break;
    case 19:
        r4 = &data_020c7610;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
        if (unk_15c != 0) {
            func_020157b8(this, func_0209a4e4(unk_15c, 0), 0);
            func_020157b8(this, func_0209a4e4(unk_15c, 1), 1);
            func_0201578c(this, (u16 *)func_0209ab94(func_0202d114(this)), 0, 7);
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7930;
}

void Unk_0201d2d0::func_020276e8() {
    void *r4 = func_020805c4(unk_fc->unk_82c);
    func_0207ab90(data_021dfd8c, r4, func_0209a4e4(unk_15c, 1), -20);
    func_0209a588(unk_15c);
}

void Unk_0201d2d0::func_02027730(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        r4 = &data_020c7560;
        break;
    case 19:
        r4 = &data_020c7558;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020277b0() {
    if (func_0209ac64(func_0202d114(this)) == 10) {
        func_02014ce4(this, &unk_120, 2, 5, 0);
        func_0202d33c(data_020d7c10);
    }
    func_0209a588(unk_15c);
}

void Unk_0201d2d0::func_020277fc(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        r4 = &data_020c7a08;
        break;
    case 19:
        r4 = &data_020c7580;
        break;
    }
    if (r4 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), r4->unk_00, r4->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202787c() {
    Unk_02027324_S c;
    Unk_0201d2d0_Out out;
    s32 r4;
    void *r6 = func_02098750(func_0209750c());
    switch (func_0209ac64(func_0202d114(this))) {
    case 10:
        r4 = func_0202cee4(r6, func_0209ab94(func_0202d114(this)));
        if (r4 != -1) {
            unk_120 = *(u16 *)func_0209ab94(func_0202d114(this));
            c.unk_02 = 0xfff1;
            func_02097f30(r6, &c.unk_02, r4, 0);
            func_0202d1d4(this, data_021bf34c);
        } else {
            func_0202d1d4(this, data_021bf364);
        }
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        c.unk_00 = out.unk_04;
        func_02067abc(unk_3c, &c.unk_00, out.unk_00);
        break;
    case 19:
        unk_120 = 0x1565;
        func_02014ce4(this, &unk_120, 0, 5, 0);
        func_0202d33c(data_020d7a50);
        break;
    }
    r4 = (s32)func_020805c4(unk_fc->unk_82c);
    func_0207ab90(data_021dfd8c, (void *)r4, func_0209a4e4(unk_15c, 1), -10);
}

void Unk_0201d2d0::func_020279a0() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r5 = func_02098750(func_0209750c());
    if (func_0209ac64(func_0202d114(this)) == 19) {
        r5 = func_0202ceb0(r5);
        if (r5 != 0) {
            if (func_02065578(r5) == 7) {
                func_0202d1d4(this, data_021bf34c);
            } else {
                func_0202d1d4(this, data_021bf364);
            }
            func_02065c94(r5);
        }
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}
