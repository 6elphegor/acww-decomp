#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020904f0_Vec {
    s32 x, y, z;
};

// 0x1c-byte effect/slot entry (32 of them in Unk_021d04b0, plus one scratch entry at data_021d0830)
class Unk_02090538 {
public:
    void func_02090538();
    void func_020904f0(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u16 unk_18;
    /* 0x1a */ u16 unk_1a;
};

class Unk_021d04b0 {
public:
    void func_02090388(s32 id);
    u32 func_0209036c(s32 id);
    s32 func_020903b4(u32 kind, s32 a, s32 b, s32 c, s32 d);
    void func_0209040c();
    void func_02090424(s32 id, s16 v);
    void func_0209044c(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b);
    Unk_02090538 *func_020904a0(s32 id, Unk_02090538 *e, s32 n);
    void func_020904c4();

    /* 0x000 */ Unk_02090538 unk_000[32];
    /* 0x380 */ Unk_02090538 unk_380;
    /* 0x39c */ u16 unk_39c;
};

extern Unk_021d04b0 data_021d04b0;
struct Unk_0209073c_Scratch : public Unk_02090538 {
    u16 unk_1c;
};
extern Unk_0209073c_Scratch data_021d0830;

struct Unk_020e1914_Ent {
    s32 (*fn)(s32, s32, s32, s32, s32);
    s32 fn2;
};
extern Unk_020e1914_Ent data_020e1914[];
extern void (*data_020e1918[])(s32);

extern "C" {
extern u8 data_020e1464[];
extern u8 data_020e1490[];
extern u8 data_020e1564[];
extern u8 data_020e14c8[];
extern u8 data_020e162c[];
extern u8 data_020e163c[];
extern u8 data_020e1714[];
extern u8 data_020e17bc[];
extern u8 data_020d0384[];
extern u8 data_020d024c[];
extern u8 data_020d0264[];
extern u8 data_020d02d0[];
extern u8 data_020d0330[];
extern u8 data_020d02c4[];
extern u8 data_020d039c[];
extern u8 data_020d03a8[];
extern u8 data_020d02b8[];
extern u32 data_021d04a4;

s32 func_020641d8(void *);
void *func_02101088(u32 heap, u32 size, s32 align);
void func_02116048(void *dst, void *src, u32 size);
void func_02115fb4(void *dst, s32 v, u32 size);
s32 func_020f8e84(u32 h);
s32 func_020f8e70(u32 h);
s32 func_02093d54(s32, s32, s32, s32, s32, void *);
s32 func_02093bb4(s32, s32, s32, s32, s32, void *);
s32 func_0209389c(s32, s32, s32, s32, s32, void *);
s32 func_02093da4(s32, void *, void *);
s32 func_02093c28(void *, void *, void *);
s32 func_0208fb20(s32, s32, s32, void *);
void func_0208fa54(void *);
void *func_0209019c(u32 size);
}

class Unk_020548d0 {
public:
    Unk_020548d0();
    ~Unk_020548d0();
    u8 pad[0x24];
};

class Unk_02055c88 {
public:
    Unk_02055c88();
    ~Unk_02055c88();
    u8 pad[0x20];
};

class Unk_02090238 {
public:
    Unk_02090238();
    ~Unk_02090238();
    u32 unk_00[9];
    Unk_020548d0 unk_24;
    u32 unk_pad[(0xe8 - 0x24 - 0x24) / 4];
    Unk_02055c88 unk_e8[3];
};

class Unk_0209020c {
public:
    Unk_0209020c();
    ~Unk_0209020c();
    u32 unk_00;
    Unk_02090238 unk_04[4];
    u32 unk_524[3];
};

class Unk_0208fa54 {
public:
    Unk_0208fa54();
    ~Unk_0208fa54();
    u8 pad[0x304];
};

class Unk_020e141c : public Unk_020d8c7c {
public:
    virtual ~Unk_020e141c();

    /* 0x50 */ u32 unk_50[2];
    /* 0x58 */ Unk_0208fa54 unk_58;
    /* 0x35c */ Unk_0209020c unk_35c[4];
    /* 0x181c */ u32 unk_181c[20];
};

// hooks
struct Unk_02090140_Arg {
    u8 pad[0x18];
    u32 unk_18;
    u32 unk_1c;
    u8 unk_20[1];
};

struct Unk_02090168_Arg {
    u8 pad[0x50];
    u32 unk_50;
};

struct Unk_020907a0_Bytes {
    u8 b[4];
};

struct Unk_020907a0_Node {
    Unk_020907a0_Node *unk_00;
    u8 pad[0x1c];
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u16 unk_26;
};

struct Unk_020908a8_C {
    u32 pad0;
    s32 x, y, z;
};

struct Unk_020908a8_B {
    u8 pad0[8];
    Unk_020907a0_Node *unk_08;
    u8 pad1[0xc];
    Unk_020908a8_C **unk_18;
    u8 pad2[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad3[0x3d];
    u8 unk_69;
};

class Unk_020907a0 {
public:
    BOOL func_020907a0();
    BOOL func_020908a8();
    BOOL func_02090934();
    void func_02090a30();

    u32 unk_00;
    Unk_020907a0_Bytes unk_04;
    u32 unk_08;
    Unk_020908a8_B *unk_0c;
};

// ---- callers first

extern "C" {

void *func_02090140(void *unused, Unk_02090140_Arg *p) {
    u32 size = p->unk_18;
    void *r = func_0209019c(size);
    if (r) {
        func_02116048(p->unk_20, r, size);
    }
    return r;
}

BOOL func_02090168(Unk_02090168_Arg *p) {
    if (func_020f8e84(p->unk_50)) {
        if (func_020f8e70(p->unk_50)) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 func_0209018c() {
    return func_020641d8(data_020e1464);
}

Unk_020e141c *func_020901b0() {
    return new Unk_020e141c();
}


s32 func_02090268(s32 a, s32 b, s32 c, s32 d) {
    return data_021d04b0.func_020903b4(0x65, b, c, d, a);
}

s32 func_0209028c(s32 a, s32 b, s32 c, s32 d) {
    return data_021d04b0.func_020903b4(0x64, b, c, d, a);
}

s32 func_020902b0(s32 a, s32 b, s32 c, s32 d) {
    return data_021d04b0.func_020903b4(0x64, b, c, d, a);
}

void func_020902d4(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b) {
    data_021d04b0.func_0209044c(id, pos, a, b);
}

void func_020902f8(s32 id) {
    data_021d04b0.func_02090388(id);
}

s32 func_02090308(u32 kind, u16 v0, s32 a, s32 b) {
    u16 v = v0;
    return data_021d04b0.func_020903b4(kind, a, b, (s32)&v, -1);
}

s32 func_02090330(u32 kind, s32 a, s32 b, s32 c) {
    return data_021d04b0.func_020903b4(kind, a, b, c, -1);
}

void func_0209035c() {
    data_021d04b0.func_0209040c();
}

void func_0209086c(s32 id) {
    data_021d04b0.func_02090424(id, 4);
}

s32 func_02090560(s32 a, s32 b, s32 c, s32 d, s32 id) {
    return func_02093bb4(id, a, b, c, d, NULL);
}

s32 func_02090584(s32 a, s32 b, s32 c, s32 d, s32 id) {
    return func_02093d54(id, a, b, c, d, NULL);
}

s32 func_020905a8() {
    return 3;
}

s32 func_020905ac(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x7d, a, b, c, d, NULL);
}

s32 func_020905d0(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x7c, a, b, c, d, NULL);
}

s32 func_020905f4(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x7b, a, b, c, d, data_020e1490);
}

s32 func_0209061c(s32 x) {
    return func_02093da4(x, data_020d0384, data_020d024c);
}

s32 func_02090630(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x51, a, b, c, d, data_020e1564);
}

s32 func_02090658(s32 x) {
    return func_02093da4(x, data_020d0264, data_020d02d0);
}

s32 func_0209066c(s32 a, s32 b, s32 c, s32 d) {
    return func_0209389c(1, a, b, c, d, NULL);
}

s32 func_02090690(s32 a, s32 b, s32 c, s32 d) {
    return func_0209389c(0, a, b, c, d, NULL);
}

s32 func_020906b4(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x15, a, b, c, d, NULL);
}

s32 func_020906d8(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x82, a, b, c, d, data_020e14c8);
}

s32 func_02090700(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x14, a, b, c, d, data_020e14c8);
}

s32 func_02090728(s32 x) {
    return func_02093da4(x, data_020d0330, data_020d02c4);
}

s32 func_0209073c(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    s32 r = 3;
    func_02093d54(0x13, p0, (s32)p1, (s32)p2, (s32)p3, NULL);
    Unk_0209073c_Scratch *e = &data_021d0830;
    e->func_020904f0(e->unk_1c, p0, p1, p2, p3, 0x25);
    if (func_0208fb20(0x62, (s32)p1, (s32)p2, data_020e163c)) {
        r = 2;
    }
    e->func_02090538();
    return r;
}

s32 func_02090824(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x12, a, b, c, d, NULL);
}

s32 func_02090848(s32 a, s32 b, s32 c, s32 d) {
    return func_02093d54(0x11, a, b, c, d, NULL);
}

s32 func_02090880(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0x10, a, b, c, d, data_020e1714);
}

s32 func_020909bc(s32 p0, Unk_020904f0_Vec *p1, s16 *p2, s16 *p3) {
    Unk_0209073c_Scratch *e = &data_021d0830;
    s32 r = 3;
    e->func_020904f0(e->unk_1c, p0, p1, p2, p3, 0xf);
    if (func_0208fb20(0xf, (s32)p1, (s32)p2, data_020e17bc)) {
        r = 2;
    }
    e->func_02090538();
    return r;
}

s32 func_02090a08(s32 a, s32 b, s32 c, s32 d) {
    return func_02093bb4(0xe, a, b, c, d, data_020e162c);
}

}

BOOL Unk_020907a0::func_020907a0() {
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e != 0) {
            Unk_020907a0_Node *n = unk_0c->unk_08;
            u32 t = 0x30d4;
            if (e->unk_0c < 0) {
                t = 0xffffcf2c;
            }
            u16 v = t;
            for (; n; n = n->unk_00) {
                n->unk_20 = v;
            }
            if (e->unk_0e > 0) {
                e->unk_0e--;
            }
            r = TRUE;
        }
    }
    if (!r) {
        e->func_02090538();
    }
    return r;
}

BOOL Unk_020907a0::func_020908a8() {
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e != 0) {
            Unk_020908a8_B *b = unk_0c;
            b->unk_20 = e->unk_00 + (*b->unk_18)->x;
            b->unk_24 = e->unk_04 + (*b->unk_18)->y;
            b->unk_28 = e->unk_08 + (*b->unk_18)->z;
            if (e->unk_0e > 0) {
                unk_0c->unk_69 = e->unk_0e * 6;
                e->unk_0e = e->unk_0e - 1;
            }
            r = TRUE;
        }
    }
    if (!r) {
        e->func_02090538();
    }
    return r;
}

BOOL Unk_020907a0::func_02090934() {
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
    BOOL r = FALSE;
    if (e->unk_14 != -1) {
        if (e->unk_0e == -1) {
            Unk_020908a8_B *b = unk_0c;
            b->unk_20 = e->unk_00 + (*b->unk_18)->x;
            b->unk_24 = e->unk_04 + (*b->unk_18)->y;
            b->unk_28 = e->unk_08 + (*b->unk_18)->z;
            r = TRUE;
        }
    }
    if (!r) {
        Unk_020907a0_Node *n = unk_0c->unk_08;
        for (; n; n = n->unk_00) {
            n->unk_26 = n->unk_24;
        }
        e->func_02090538();
    }
    return r;
}

void Unk_020907a0::func_02090a30() {
    Unk_020907a0_Bytes bytes = unk_04;
    Unk_02090538 *e = &data_021d04b0.unk_000[bytes.b[0]];
    func_02093c28(this, e->unk_10 != 3 ? data_020d039c : data_020d03a8, data_020d02b8);
}

void Unk_02090538::func_02090538() {
    func_02115fb4(this, 0, 0x14);
    unk_0e = -1;
    unk_10 = 0x1000;
    unk_14 = -1;
    unk_18 = 0x66;
}

void Unk_02090538::func_020904f0(s32 id, u32 type, Unk_020904f0_Vec *pos, s16 *a, s16 *b, s16 v) {
    func_02090538();
    unk_14 = id;
    unk_18 = type;
    unk_00 = pos->x;
    unk_04 = pos->y;
    unk_08 = pos->z;
    if (a) {
        unk_0c = *a;
    }
    if (b) {
        unk_10 = *b;
    }
    unk_0e = v;
}

void Unk_021d04b0::func_02090388(s32 id) {
    if (id != -1) {
        u32 t = func_0209036c(id);
        if (t < 0x66) {
            void (*f)(s32) = data_020e1918[t * 2];
            if (f) {
                f(id);
            }
        }
    }
}

u32 Unk_021d04b0::func_0209036c(s32 id) {
    Unk_02090538 *e = func_020904a0(id, unk_000, 0x20);
    u32 r = 0x66;
    if (e) {
        r = e->unk_18;
    }
    return r;
}

s32 Unk_021d04b0::func_020903b4(u32 kind, s32 a, s32 b, s32 c, s32 d) {
    s32 r = -1;
    if (kind < 0x66) {
        Unk_020e1914_Ent *ent = &data_020e1914[kind];
        if (ent->fn) {
            s32 ret = ent->fn(kind, a, b, c, d);
            if (ret == 0) {
                r = unk_39c;
                unk_39c = r + 1;
            } else if (ret == 2) {
                unk_39c = unk_39c + 1;
            }
        }
    }
    return r;
}

void Unk_021d04b0::func_0209040c() {
    func_020904c4();
    unk_39c = 0;
}

void Unk_021d04b0::func_02090424(s32 id, s16 v) {
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            if (unk_000[i].unk_14 == id) {
                unk_000[i].unk_0e = v;
            }
        }
    }
}

void Unk_021d04b0::func_0209044c(s32 id, Unk_020904f0_Vec *pos, s16 *a, s16 *b) {
    s32 i = 0;
    if (id != -1) {
        for (i = 0; i < 0x20; i++) {
            Unk_02090538 *e = &unk_000[i];
            if (id == e->unk_14) {
                e->unk_00 = pos->x;
                e->unk_04 = pos->y;
                e->unk_08 = pos->z;
                if (a) {
                    e->unk_0c = *a;
                }
                if (b) {
                    e->unk_10 = *b;
                }
            }
        }
    }
}

Unk_02090538 *Unk_021d04b0::func_020904a0(s32 id, Unk_02090538 *e, s32 n) {
    Unk_02090538 *r = NULL;
    s32 i = 0;
    for (; i < n; e++, i++) {
        if (id == e->unk_14) {
            r = e;
            break;
        }
    }
    return r;
}

void Unk_021d04b0::func_020904c4() {
    unk_380.func_02090538();
    for (s32 i = 0; i < 0x20; i++) {
        unk_000[i].func_02090538();
    }
}

extern "C" void *func_0209019c(u32 size) {
    return func_02101088(data_021d04a4, size, 4);
}

Unk_0209020c::Unk_0209020c() {}
Unk_02090238::Unk_02090238() {}
