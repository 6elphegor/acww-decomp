#include "types.h"

extern "C" {
void func_0200151c(u32 a);
void func_0200152c(u32 a);
void func_02001554(u32 a);
void func_02001564(u32 a);
void func_020016b0(u32 a);
void func_020016cc(u32 a);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0200402c(u32 a);
void func_02065b5c(void *p);
void func_02065ba4(void *p, s32 a);
void func_02065bd0(void *p, s32 a);
void func_020b3558(void *buf, u8 *c, s32 z);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f994(void *dst, const void *s, s32 len);
void func_020a7bd8(void *p, void *q);
void func_020a7a28(void *p, const void *s);
void func_020a7a0c(void *p, void *q);
void func_0208e290(void *p, void *q);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fc44(void *p);
void *func_0209750c();
s32 func_0209888c(...);
s32 func_02097740(void *a, s32 b);
s32 func_020978c8(void *a, s32 b);
s32 func_0207bf84(void *a, s32 b);
void *func_0207bf60(void *a, s32 b);
s32 func_0207f854(void *a, s32 b);
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern volatile u16 data_021f47d8[];
extern u8 data_ov002_02204578[];
void func_ov002_02202520(void *p, s32 v);
}

void operator delete(void *p);

// ---------------------------------------------------------------------------
// slider base class (vtable 0x022044c4)
class Unk_ov002_022044c4 {
public:
    Unk_ov002_022044c4();
    virtual ~Unk_ov002_022044c4();
    s32 unk_04;
    s32 unk_08;
    s32 func_ov002_022011ac(s32 v);
    s32 func_ov002_022011b4(s32 v);
    BOOL func_ov002_022011cc();
    void func_ov002_022011ec(u32 n);
};

// slider class (vtable 0x022044b4)
class Unk_ov002_022044b4 : public Unk_ov002_022044c4 {
public:
    Unk_ov002_022044b4();
    virtual ~Unk_ov002_022044b4();
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    void func_ov002_02200d08(s32 mode);
    void func_ov002_02200fa8(s32 mode);
    void func_ov002_02200fe0(s32 mode);
    BOOL func_ov002_0220102c(s32 mode);
    void func_ov002_02201090(s32 mode);
    void func_ov002_022010c4(s32 mode);
    s32 func_ov002_02201124();
    s32 func_ov002_02201140();
};

void Unk_ov002_022044b4::func_ov002_02200fa8(s32 mode)
{
    unk_0c = unk_10 - func_ov002_022011ac(unk_10);
    switch (mode) {
    case 0:
        func_ov002_02200d08(2);
        break;
    case 1:
        func_ov002_02200d08(0);
        break;
    }
}

void Unk_ov002_022044b4::func_ov002_02200fe0(s32 mode)
{
    unk_0c = unk_10 - func_ov002_022011ac(unk_10);
    if (unk_0c > unk_14) {
        switch (mode) {
        case 0:
            func_0200152c(1);
            func_ov002_02200d08(2);
            break;
        case 1:
            func_02001564(1);
            func_ov002_02200d08(0);
            break;
        }
    }
}

BOOL Unk_ov002_022044b4::func_ov002_0220102c(s32 mode)
{
    if (func_ov002_022011cc()) {
        unk_0c = 0;
        switch (mode) {
        case 0:
            func_0200151c(1);
            func_020016b0(0x1f);
            break;
        case 1:
            func_02001554(1);
            func_020016cc(0x1f);
            break;
        }
        return TRUE;
    }
    switch (unk_18) {
    case 0:
    case 1:
        func_ov002_022010c4(mode);
        break;
    default:
        func_ov002_02201090(mode);
        break;
    }
    return FALSE;
}

void Unk_ov002_022044b4::func_ov002_02201090(s32 mode)
{
    unk_0c = func_ov002_022011b4(unk_10);
    switch (mode) {
    case 0:
        func_ov002_02200d08(2);
        break;
    case 1:
        func_ov002_02200d08(0);
        break;
    }
}

void Unk_ov002_022044b4::func_ov002_022010c4(s32 mode)
{
    unk_0c = func_ov002_022011b4(unk_10);
    switch (mode) {
    case 0:
        if (unk_0c > unk_14) {
            func_ov002_02200d08(2);
        } else {
            func_0200151c(1);
            func_020016b0(0x1f);
        }
        break;
    case 1:
        if (unk_0c > unk_14) {
            func_ov002_02200d08(0);
        } else {
            func_02001554(1);
            func_020016cc(0x1f);
        }
        break;
    }
}

s32 Unk_ov002_022044b4::func_ov002_02201124()
{
    switch (unk_18) {
    case 2:
        return -unk_0c;
    case 3:
        return unk_0c;
    }
    return 0;
}

s32 Unk_ov002_022044b4::func_ov002_02201140()
{
    switch (unk_18) {
    case 0:
        return unk_0c;
    case 1:
        return -unk_0c;
    }
    return 0;
}

Unk_ov002_022044b4::~Unk_ov002_022044b4() {}

Unk_ov002_022044b4::Unk_ov002_022044b4() {}

s32 Unk_ov002_022044c4::func_ov002_022011ac(s32 v)
{
    return (v * unk_08) >> 12;
}

s32 Unk_ov002_022044c4::func_ov002_022011b4(s32 v)
{
    return (v * func_01ffcb0c(unk_08, unk_08)) >> 12;
}

BOOL Unk_ov002_022044c4::func_ov002_022011cc()
{
    s32 a = unk_08;
    if (a == 0) {
        return TRUE;
    }
    s32 b = unk_04;
    if (a > b) {
        unk_08 = a - b;
    } else {
        unk_08 = 0;
    }
    return FALSE;
}

void Unk_ov002_022044c4::func_ov002_022011ec(u32 n)
{
    unk_08 = 0x1000;
    unk_04 = 0x1000 / n;
}

Unk_ov002_022044c4::~Unk_ov002_022044c4() {}

Unk_ov002_022044c4::Unk_ov002_022044c4() {}

// ---------------------------------------------------------------------------
// cursor / input repeat state (sub-object of a larger object at +0x50)
class Unk_ov002_02201240 {
public:
    u32 unk_00;
    s16 unk_04;
    s16 unk_06;
    s16 unk_08;
    s16 unk_0a;
    s16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();
};

void Unk_ov002_02201240::func_ov002_02201240(s32 a, s32 b, s32 c)
{
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
    unk_0a = 0;
    unk_0c = 0;
    unk_04 = a;
    unk_06 = b;
    unk_08 = c;
}

extern "C" BOOL func_ov002_0220125c(u32 v)
{
    if (v & 0x10) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220126c(u32 v)
{
    if (v & 0x20) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220127c(u32 v)
{
    if (v & 0x80) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220128c(u32 v)
{
    if (v & 0x40) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_0220129c()
{
    if (unk_10 & 0x10) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012b0()
{
    if (unk_10 & 0x20) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012c4()
{
    if (unk_10 & 0x80) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012d8()
{
    if (unk_10 & 0x40) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov002_02201240::func_ov002_022012ec()
{
    unk_10 = unk_0f;
    unk_0f = 0;
    return unk_10;
}

void Unk_ov002_02201240::func_ov002_022012f8()
{
    u32 prev = unk_0e;
    unk_0e = data_021f47d8[0] & 0xf0;
    u8 *p = &unk_0f;
    unk_0f |= (u8)(data_021f47d8[1] & 0xf0);
    u32 cur = unk_0e;
    if (cur == 0 || prev != cur) {
        unk_0f = data_021f47d8[1] & 0xf0;
        unk_0a = unk_04;
        unk_0c = unk_04;
    } else if (unk_0c > 0) {
        unk_0c--;
    } else {
        *p |= cur & 0xf0;
        unk_0a = unk_0a - unk_08;
        if (unk_0a < unk_06) {
            unk_0a = unk_06;
        }
        unk_0c = unk_0a;
    }
}

// ---------------------------------------------------------------------------
// vptr-only class (vtable 0x022044d4)
class Unk_ov002_022044d4 {
public:
    Unk_ov002_022044d4();
    virtual ~Unk_ov002_022044d4();
};

Unk_ov002_022044d4::~Unk_ov002_022044d4() {}

Unk_ov002_022044d4::Unk_ov002_022044d4() {}

// ---------------------------------------------------------------------------
// menu class
struct Unk_ov002_022013ac_Elem {
    u32 unk_00[0x48 / 4];
};

struct Unk_ov002_022013ac_Rec {
    u8 unk_00[5];
    u8 unk_05[5];
    u8 unk_0a;
};

class Unk_ov002_022013ac_Obj {
public:
    virtual ~Unk_ov002_022013ac_Obj();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x148 / 4 - 1];
};

class Unk_ov002_022013ac {
public:
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e[2];
    u8 unk_20;
    u8 unk_21[7];
    Unk_ov002_022013ac_Elem unk_28[5];
    Unk_ov002_022013ac_Obj unk_190;
    u8 unk_2d8[0x19];

    void func_ov002_022013ac(void *buf, u32 c);
    void func_ov002_022013c4(u32 m);
    void func_ov002_022013cc(u32 m);
    BOOL func_ov002_022013d4(u32 m);
    s32 func_ov002_022013e4(void *p, u32 id);
    s32 func_ov002_02201438(u32 id);
    u32 func_ov002_0220144c(u32 a, u32 b);
    u32 func_ov002_02201490();
    u32 func_ov002_02201494();
    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014ac(s32 x, s32 y);
    s32 func_ov002_022014c0(s32 x, s32 y);
    s32 func_ov002_022014d4(s32 x, s32 y, s32 d);
    void func_ov002_02201534(Unk_ov002_022013ac_Rec *r);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 f);
    s32 func_ov002_02201680(Unk_ov002_022013ac_Rec *r, void *s, u32 v);
    void func_ov002_02201728();
    void func_ov002_0220175c();
    void func_ov002_02201784();
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
    void func_ov002_022017c4();

    void func_ov002_022018e4(void *elem, u32 v);
    void func_ov002_02201c6c();
    s32 func_ov002_02201ca4();
    s32 func_ov002_02201cb0();
};

void Unk_ov002_022013ac::func_ov002_022013ac(void *buf, u32 c)
{
    u8 t = c;
    func_020b3558(buf, &t, 0);
}

void Unk_ov002_022013ac::func_ov002_022013c4(u32 m)
{
    unk_14 &= ~m;
}

void Unk_ov002_022013ac::func_ov002_022013cc(u32 m)
{
    unk_14 |= m;
}

BOOL Unk_ov002_022013ac::func_ov002_022013d4(u32 m)
{
    if (unk_14 & m) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov002_022013ac::func_ov002_022013e4(void *p, u32 id)
{
    switch (id) {
    case 0xf:
        return 3;
    case 0xe:
        return 2;
    case 0xd:
        func_02065b5c(p);
        return 1;
    }
    if (id >= 1 && id < 5) {
        func_02065ba4(p, id - 1);
        return 1;
    }
    if (id >= 5 && id < 0xd) {
        func_02065bd0(p, id - 5);
        return 1;
    }
    return 0;
}

s32 Unk_ov002_022013ac::func_ov002_02201438(u32 id)
{
    switch (id) {
    case 0xf:
        return 3;
    case 0xe:
        return 2;
    }
    return 1;
}

u32 Unk_ov002_022013ac::func_ov002_0220144c(u32 a, u32 b)
{
    u32 t = unk_2d8[b + a * 5];
    if (t != 0xe) {
        func_ov002_022013cc(4);
    }
    switch (t) {
    case 0xf:
        func_0200402c(0x28);
        break;
    case 0xe:
        func_0200402c(0x29);
        break;
    default:
        func_0200402c(0x27);
        break;
    }
    return t;
}

u32 Unk_ov002_022013ac::func_ov002_02201490()
{
    return unk_1d;
}

u32 Unk_ov002_022013ac::func_ov002_02201494()
{
    return unk_1c;
}

s32 Unk_ov002_022013ac::func_ov002_02201498(s32 v)
{
    return ((v + 1) << 4) - unk_0c;
}

s32 Unk_ov002_022013ac::func_ov002_022014a4()
{
    return 0x10 - unk_08;
}

s32 Unk_ov002_022013ac::func_ov002_022014ac(s32 x, s32 y)
{
    return func_ov002_022014d4(x, y, -1);
}

s32 Unk_ov002_022013ac::func_ov002_022014c0(s32 x, s32 y)
{
    return func_ov002_022014d4(x, y, unk_1c - 1);
}

s32 Unk_ov002_022013ac::func_ov002_022014d4(s32 x, s32 y, s32 d)
{
    s32 l = -unk_08;
    s32 t = -unk_0c;
    s32 r = l + func_ov002_02201cb0();
    s32 b = t + func_ov002_02201ca4();
    if (l > x || r < x) {
        return d;
    }
    if (t > y || b < y) {
        return d;
    }
    t += 0x18;
    s32 i = 0;
    s32 n = unk_1c - 1;
    for (; i < n; i++) {
        if (t > y) {
            break;
        }
        t += 0x10;
    }
    return i;
}

void Unk_ov002_022013ac::func_ov002_02201534(Unk_ov002_022013ac_Rec *r)
{
    s32 i;
    s32 k = r->unk_00[0] * 5;
    unk_1c = 0;
    for (i = 0; i < 5; i++, k++) {
        u32 v = unk_2d8[k];
        if (v != 0) {
            func_ov002_022018e4(&unk_28[i], v);
            unk_1c++;
        } else {
            i = 5;
        }
    }
    func_ov002_02201c6c();
    u8 buf[4];
    buf[0] = r->unk_00[0] + 0x36;
    buf[1] = 0;
    buf[2] = unk_1d + 0x35;
    buf[3] = 0;
    u32 a[16];
    u32 b[16];
    func_0206fcc8(a);
    func_0206fcc8(b);
    func_0206f994(b, buf, 2);
    func_020a7bd8(a, b);
    func_020a7a28(a, data_ov002_02204578);
    func_0206f994(b, buf + 2, 2);
    func_020a7a0c(a, b);
    func_0208e290(&unk_190, a);
    unk_190.vfunc_0c();
    unk_20 = r->unk_00[0];
    func_0206fca8(b);
    func_0206fca8(a);
}

void Unk_ov002_022013ac::func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 f)
{
    s32 n = 0;
    s32 i = n;
    for (; i < 5; i++) {
        u32 v = r->unk_00[i];
        if (v == 0xff) {
            i = 5;
        } else if ((1 << i) & r->unk_0a) {
            n++;
        } else {
            func_ov002_022013ac(&unk_28[n], v);
            n++;
        }
    }
    if (f != 0) {
        func_ov002_022013cc(0x20);
    } else {
        func_ov002_022013c4(0x20);
    }
    unk_1c = n;
    func_ov002_02201c6c();
}

s32 Unk_ov002_022013ac::func_ov002_02201680(Unk_ov002_022013ac_Rec *r, void *s, u32 v)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *q = &r->unk_00[i];
        if (r->unk_00[i] == 0xff) {
            func_020a7bd8(&unk_28[i], s);
            r->unk_05[i] = v;
            r->unk_0a |= 1 << i;
            q[0] = 0xfe;
            return 1;
        }
    }
    return 0;
}

extern "C" s32 func_ov002_022016cc(u8 *p)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        if (p[i] == 0xff) {
            return i;
        }
    }
    return i;
}

extern "C" void func_ov002_022016e4(u8 *p, u8 v)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *q = &p[i];
        p[i] = 0xff;
        q[5] = v;
    }
    p[10] = 0;
}

extern "C" BOOL func_ov002_02201700(u8 *p, u32 a, u32 b)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        u8 *q = &p[i];
        if (p[i] == 0xff) {
            q[0] = a;
            q[5] = b;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov002_022013ac::func_ov002_02201728()
{
    func_ov002_0220175c();
    s32 i;
    for (i = 0; i < unk_1c; i++) {
        func_0206fab4(&unk_28[i], 0, 0);
    }
}

void Unk_ov002_022013ac::func_ov002_0220175c()
{
    s32 i;
    for (i = 0; i < 5; i++) {
        func_ov002_02202520(&unk_28[i], -1);
    }
}

void Unk_ov002_022013ac::func_ov002_02201784()
{
    s32 i;
    for (i = 0; i < 5; i++) {
        func_0206fc44(&unk_28[i]);
    }
}

BOOL Unk_ov002_022013ac::func_ov002_022017a4()
{
    if (unk_16 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022013ac::func_ov002_022017b4()
{
    if (unk_16 == 3) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_022013ac::func_ov002_022017c4()
{
    s32 i, n;
    s32 k, j;
    s32 g, t;
    unk_1d = 0;
    for (i = 0; i < 0x19; i++) {
        unk_2d8[i] = 0;
    }
    g = func_0209888c(func_0209750c());
    t = func_02097740(data_021d735c, g);
    n = 0;
    k = 1;
    j = n;
    do {
        if (t != j) {
            if (func_020978c8(data_021d735c, j)) {
                unk_2d8[n] = k;
                n++;
            }
        }
        k++;
        j++;
    } while (k < 5);
    if (n % 5 == 4) {
        unk_2d8[n] = 0xe;
        n++;
    }
    k = 5;
    j = 0;
    do {
        if (func_0207bf84(data_021dfd8c, j)) {
            if (func_0207f854(func_0207bf60(data_021dfd8c, j), g)) {
                unk_2d8[n] = k;
                n++;
            }
        }
        if (n % 5 == 4) {
            unk_2d8[n] = 0xe;
            n++;
        }
        k++;
        j++;
    } while (k < 0xd);
    if (n % 5 != 0) {
        unk_2d8[n] = 0xe;
        n++;
    }
    while (n % 5 != 0) {
        unk_2d8[n] = 0;
        n++;
    }
    unk_2d8[n] = 0xd;
    unk_2d8[n + 1] = 0xf;
    n += 2;
    if (n > 2) {
        unk_2d8[n] = 0xe;
        n++;
    }
    unk_1d = (n + 4) / 5;
}

Unk_ov002_022013ac_Obj::~Unk_ov002_022013ac_Obj() {}
