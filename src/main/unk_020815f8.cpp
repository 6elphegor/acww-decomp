#include "types.h"

struct Unk_02081974_Obj {
    Unk_02081974_Obj();
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
    u8 pad_04[0x58];
    u32 unk_5c;
};

extern "C" {
s32 func_0207c014(s32);
s32 func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
s32 func_0204ee10(s32 *, s32 *, u32 *);
s32 func_02063b8c(s32);
s32 func_02081780();
s32 func_0208167c(void *a);
s32 func_0208168c(void *a);
}

struct Unk_02081ca0 {
    Unk_02081974_Obj *unk_00;
    u16 unk_04;
    ~Unk_02081ca0();
    Unk_02081ca0();
};

struct Unk_02081cb0 {
    Unk_02081974_Obj *unk_00;
    u16 unk_04;
    ~Unk_02081cb0();
    Unk_02081cb0();
};

struct Unk_02081c54 {
    Unk_02081cb0 unk_00[8];
    Unk_02081ca0 unk_40[4];

    void func_02081c54();
    ~Unk_02081c54();
    BOOL func_02081974(Unk_02081ca0 *s);
    BOOL func_02081c14(Unk_02081cb0 *s);
    void func_02081994(Unk_02081ca0 *s, s32 n);
    void func_02081c34(Unk_02081cb0 *s, s32 n);
    s32 func_02081908(u16 *p);
    s32 func_02081bb0(u16 *p);
    Unk_02081974_Obj *func_02081794(s32 i);
    Unk_02081974_Obj *func_020817c0(u16 *p);
    Unk_02081974_Obj *func_020817f4(s32 a, s32 b);
    Unk_02081974_Obj *func_0208184c(u32 v);
    BOOL func_02081890(u16 *p);
    BOOL func_020818bc(Unk_02081974_Obj *o, u16 *p);
    Unk_02081974_Obj *func_020819b8(s32 *idx);
    Unk_02081974_Obj *func_02081a40(s32 i);
    Unk_02081974_Obj *func_02081a6c(u16 *p);
    Unk_02081974_Obj *func_02081aa0(s32 a, s32 b);
    Unk_02081974_Obj *func_02081af8(u32 v);
    BOOL func_02081b38(u16 *p);
    BOOL func_02081b64(Unk_02081974_Obj *o, u16 *p);
};

Unk_02081c54 data_021cd264;

extern "C" s32 func_02081708(void *a);
extern "C" s32 func_020816f8(void *a);

Unk_02081cb0::Unk_02081cb0() { unk_04 = 0xfff1; }

Unk_02081cb0::~Unk_02081cb0() {}

Unk_02081ca0::Unk_02081ca0() { unk_04 = 0xfff1; }

Unk_02081ca0::~Unk_02081ca0() {}

Unk_02081c54::~Unk_02081c54() {}

void Unk_02081c54::func_02081c54() {
    func_02081c34(unk_00, 8);
    func_02081994(unk_40, 4);
}

void Unk_02081c54::func_02081c34(Unk_02081cb0 *s, s32 n) {
    s32 i = 0;
    for (; i < n; i++) {
        s->unk_00 = 0;
        s->unk_04 = 0xfff1;
        s++;
    }
}

BOOL Unk_02081c54::func_02081c14(Unk_02081cb0 *s) {
    if (s->unk_00 != 0 && ((s->unk_04 & 0xf000) >> 12) == 0xe) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02081c54::func_02081bb0(u16 *p) {
    s32 i = 0;
    s32 found = -1;
    BOOL z1 = FALSE;
    BOOL z2 = FALSE;
    for (; i < 8; i++) {
        Unk_02081cb0 *s = &unk_00[i];
        BOOL r;
        if (func_0204b2d4(&s->unk_04)) {
            r = (func_0204b25c(&s->unk_04) == func_0204b25c(p)) ? TRUE : z1;
        } else {
            r = (s->unk_04 == *p) ? TRUE : z2;
        }
        if (r) {
            found = i;
            break;
        }
    }
    return found;
}

BOOL Unk_02081c54::func_02081b64(Unk_02081974_Obj *o, u16 *p) {
    BOOL r = FALSE;
    if (func_02081bb0(p) == -1) {
        u16 t = 0xfff1;
        s32 i = func_02081bb0(&t);
        if (i >= 0 && i < 8) {
            unk_00[i].unk_00 = o;
            unk_00[i].unk_04 = *p;
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_02081c54::func_02081b38(u16 *p) {
    s32 i = func_02081bb0(p);
    BOOL r = FALSE;
    if (i >= 0 && i < 8) {
        unk_00[i].unk_00 = 0;
        unk_00[i].unk_04 = 0xfff1;
        r = TRUE;
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_02081af8(u32 v) {
    Unk_02081974_Obj *r;
    u16 t = 0xfff1;
    r = 0;
    t = (v & 0xfff) | 0xe000;
    s32 i = func_02081bb0(&t);
    if (i >= 0 && i < 8) {
        r = unk_00[i].unk_00;
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_02081aa0(s32 a, s32 b) {
    Unk_02081974_Obj *r = 0;
    Unk_02081cb0 *s = unk_00;
    s32 x = 0;
    s32 y = 0;
    s32 i;
    for (i = 0; i < 8; s++, i++) {
        if (func_02081c14(s)) {
            func_0204ee10(&x, &y, &s->unk_00->unk_5c);
            if (x == a && y == b) {
                r = s->unk_00;
                break;
            }
        }
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_02081a6c(u16 *p) {
    Unk_02081974_Obj *r = 0;
    if (((*p & 0xf000) >> 12) == 0xe) {
        s32 i = func_02081bb0(p);
        if (i >= 0 && i < 8) {
            r = unk_00[i].unk_00;
        }
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_02081a40(s32 i) {
    Unk_02081974_Obj *r = 0;
    if (func_0207c014(i)) {
        Unk_02081cb0 *s = &unk_00[i];
        if (func_02081c14(s)) {
            r = s->unk_00;
        }
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_020819b8(s32 *idx) {
    s32 cnt = 0;
    Unk_02081974_Obj *r = 0;
    s32 i = cnt;
    for (; i < 8; i++) {
        Unk_02081cb0 *s = &unk_00[i];
        if (func_02081c14(s) && s->unk_00->vfunc_a8()) {
            cnt++;
        }
    }
    if (cnt > 0) {
        s32 n = func_02063b8c(cnt);
        for (i = 0; i < 8; i++) {
            Unk_02081cb0 *s = &unk_00[i];
            if (func_02081c14(s) && s->unk_00->vfunc_a8()) {
                if (n == 0) {
                    r = s->unk_00;
                    if (idx) {
                        *idx = i;
                    }
                    break;
                }
                n--;
            }
        }
    }
    return r;
}

void Unk_02081c54::func_02081994(Unk_02081ca0 *s, s32 n) {
    s32 i = 0;
    for (; i < n; i++) {
        s[i].unk_00 = 0;
        s[i].unk_04 = 0xfff1;
    }
}

BOOL Unk_02081c54::func_02081974(Unk_02081ca0 *s) {
    if (s->unk_00 != 0 && ((s->unk_04 & 0xf000) >> 12) == 0xd) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02081c54::func_02081908(u16 *p) {
    s32 i = 0;
    s32 found = -1;
    BOOL z1 = FALSE;
    BOOL z2 = FALSE;
    for (; i < 4; i++) {
        BOOL r;
        if (func_0204b2d4(&unk_40[i].unk_04)) {
            r = (func_0204b25c(&unk_40[i].unk_04) == func_0204b25c(p)) ? TRUE : z1;
        } else {
            u32 a = unk_40[i].unk_04;
            u32 b = *p;
            r = (a == b) ? TRUE : z2;
        }
        if (r) {
            found = i;
            break;
        }
    }
    return found;
}

BOOL Unk_02081c54::func_020818bc(Unk_02081974_Obj *o, u16 *p) {
    if (func_02081908(p) == -1) {
        u16 t = 0xfff1;
        s32 i = func_02081908(&t);
        if (i >= 0 && i < 4) {
            unk_40[i].unk_00 = o;
            unk_40[i].unk_04 = *p;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02081c54::func_02081890(u16 *p) {
    s32 i = func_02081908(p);
    BOOL r = FALSE;
    if (i >= 0 && i < 4) {
        unk_40[i].unk_00 = 0;
        unk_40[i].unk_04 = 0xfff1;
        r = TRUE;
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_0208184c(u32 v) {
    Unk_02081974_Obj *r;
    u16 t = 0xfff1;
    r = 0;
    t = (v & 0xfff) | 0xd000;
    s32 i = func_02081908(&t);
    if (i >= 0 && i < 4) {
        r = unk_40[i].unk_00;
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_020817f4(s32 a, s32 b) {
    Unk_02081974_Obj *r = 0;
    Unk_02081ca0 *s = unk_40;
    s32 x = 0;
    s32 y = 0;
    s32 i;
    for (i = 0; i < 4; s++, i++) {
        if (func_02081974(s)) {
            func_0204ee10(&x, &y, &s->unk_00->unk_5c);
            if (x == a && y == b) {
                r = s->unk_00;
                break;
            }
        }
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_020817c0(u16 *p) {
    Unk_02081974_Obj *r = 0;
    if (((*p & 0xf000) >> 12) == 0xd) {
        s32 i = func_02081908(p);
        if (i >= 0 && i < 4) {
            r = unk_40[i].unk_00;
        }
    }
    return r;
}

Unk_02081974_Obj *Unk_02081c54::func_02081794(s32 i) {
    Unk_02081974_Obj *r = 0;
    if (i >= 0 && i < 4) {
        Unk_02081ca0 *s = &unk_40[i];
        if (func_02081974(s)) {
            r = s->unk_00;
        }
    }
    return r;
}

extern "C" void func_02081784() { data_021cd264.func_02081c54(); }

extern "C" s32 func_02081780() { return 12; }

extern "C" Unk_02081974_Obj *func_0208175c(s32 i) {
    if (func_0207c014(i)) {
        return data_021cd264.func_02081a40(i);
    }
    return 0;
}

extern "C" s32 func_02081718(s32 n) {
    s32 r = 0;
    if (n >= 0) {
        if (func_0207c014(n)) {
            r = (s32)data_021cd264.func_02081a40(n);
        } else if (n < func_02081780()) {
            r = (s32)data_021cd264.func_02081794(n - 8);
        }
    }
    return r;
}

extern "C" s32 func_02081708(void *a) {
    return (s32)data_021cd264.func_02081af8((u32)a);
}

extern "C" s32 func_020816f8(void *a) {
    return (s32)data_021cd264.func_0208184c((u32)a);
}

extern "C" s32 func_020816cc(s32 kind, void *x) {
    s32 r = 0;
    switch (kind) {
    case 2:
        r = func_02081708(x);
        break;
    case 3:
        r = func_020816f8(x);
        break;
    }
    return r;
}

extern "C" s32 func_0208169c(u16 *p) {
    s32 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) r = func_0208168c(p);
    } else {
        r = func_0208167c(p);
    }
    return r;
}

extern "C" s32 func_0208168c(void *a) {
    return (s32)data_021cd264.func_02081a6c((u16 *)a);
}

extern "C" s32 func_0208167c(void *a) {
    return (s32)data_021cd264.func_020817c0((u16 *)a);
}

extern "C" void func_02081650(void *a, void *b) {
    if (data_021cd264.func_02081aa0((s32)a, (s32)b) == 0) data_021cd264.func_020817f4((s32)a, (s32)b);
}

extern "C" s32 func_02081640(void *a) {
    return (s32)data_021cd264.func_020819b8((s32 *)a);
}

extern "C" s32 func_0208162c(void *a, void *b) {
    return data_021cd264.func_02081b64((Unk_02081974_Obj *)a, (u16 *)b);
}

extern "C" s32 func_0208161c(void *a) {
    return data_021cd264.func_02081b38((u16 *)a);
}

extern "C" s32 func_02081608(void *a, void *b) {
    return data_021cd264.func_020818bc((Unk_02081974_Obj *)a, (u16 *)b);
}

extern "C" s32 func_020815f8(void *a) {
    return data_021cd264.func_02081890((u16 *)a);
}

