// mwcc-flags: -O4,p
#include "types.h"

// ov065_030: DWC-like friend/session list manager (0x02271488..0x02271d44)

struct Unk_ov065_02271488_Inner {
    void *unk_00;
};

struct Unk_ov065_02271488_A {
    Unk_ov065_02271488_Inner *unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 unk_10;
    u32 unk_14;
    void (*unk_18)(s32, s32, void *);
    void *unk_1c;
    void *unk_20;
    u8 unk_24[0x10];
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u8 unk_40[0x224];
};

struct Unk_ov065_02271774_Ent {
    u8 unk_00[12];
};

struct Unk_ov065_02271774_B {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
    Unk_ov065_02271774_Ent *unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    void *unk_20;
    u32 unk_24;
    s32 unk_28;
    void (*unk_2c)(s32, s32, void *);
    void *unk_30;
    void *unk_34;
    void *unk_38;
    void (*unk_3c)(s32, s32, void *);
    void *unk_40;
    void (*unk_44)(s32, void *);
    void *unk_48;
};

struct Unk_ov065_02271774_Item {
    s32 unk_00;
    u8 unk_04[0xa8];
};

struct Unk_ov065_02271774_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02271774_Item *unk_0c;
};

struct Unk_ov065_02271ba0_Out {
    s32 unk_00;
    u8 unk_04[0x210];
};

extern "C" {

extern Unk_ov065_02271488_A *data_ov065_02290804;
extern Unk_ov065_02271774_B *data_ov065_0229080c;

u64 func_01ffa6b4(void);
u64 func_02132ef8(u64, u64);
void *func_02115fb4(void *, s32, u32);
s32 func_0212a190(void *, void *);
s32 func_021000f4(void *);
s32 func_021000fc(void *);
void func_02100094(void *);
void func_020ffb98(void *, void *, void *);
void func_020ffba8(void *, s32);
s32 func_020ffc60(void *, void *);

void func_ov065_02271440(s32, s32);
u32 func_ov065_02271474(void);
s32 func_ov065_02270e4c(void);
s32 func_ov065_02270e94(void);
s32 func_ov065_02270fd4(void);
void func_ov065_022712bc(void);
void func_ov065_0227112c(void *, s32);
s32 func_ov065_0227c670(void *);
s32 func_ov065_0227c224(void *, s32);
s32 func_ov065_0227c17c(void *, s32);
s32 func_ov065_0227c278(void *, s32, s32);
s32 func_ov065_0227c000(void *, s32, s32 *);
s32 func_ov065_0227c05c(void *, s32, void *);
s32 func_ov065_0227c14c(void *, s32 *);
s32 func_ov065_0227bf5c(void *, s32);
s32 func_ov065_0227c4b0(void *, s32, s32, s32, s32, void *, s32, s32, void *, s32);
s32 func_ov065_02271dac(s32);
s32 func_ov065_02271ed8(s32);
s32 func_ov065_02271fc8(s32, s32);
s32 func_ov065_02283e00(void);
s32 func_ov065_022718ec(s32);
s32 func_ov065_02271ac8(Unk_ov065_02271774_Ent *, s32, s32);
s32 func_ov065_022719e0(s32);
void func_ov065_02271b40(Unk_ov065_02271774_Ent *, s32, s32);
s32 func_ov065_02271a04(Unk_ov065_02271774_Ent *, s32, s32);

void func_ov065_02271488(void)
{
    if (data_ov065_02290804 != NULL) {
        if (func_ov065_02270e4c() == 0) {
            switch (data_ov065_02290804->unk_04) {
            case 0:
                break;
            case 1:
                func_ov065_02270fd4();
                break;
            case 2:
            case 3:
            case 4: {
                Unk_ov065_02271488_Inner *in = data_ov065_02290804->unk_00;
                if (in != NULL) {
                    if (in->unk_00 != NULL) {
                        func_ov065_0227c670(in);
                    }
                }
                if (data_ov065_02290804->unk_34 != 0) {
                    u64 d = (func_01ffa6b4() - *(u64 *)&data_ov065_02290804->unk_38) << 6;
                    d = d / 0x82ea;
                    if (d > 0xea60) {
                        func_ov065_02271440(6, -0xee8e);
                        data_ov065_02290804->unk_34 = 0;
                    }
                }
                break;
            }
            case 5:
                break;
            }
        }
    }
}

void func_ov065_02271534(void)
{
    func_ov065_0227112c((void *)func_ov065_022712bc, 0);
    data_ov065_02290804->unk_04 = 1;
    data_ov065_02290804->unk_34 = 0;
}

void func_ov065_0227155c(void *mem, void *a, void *b, void *c, void *d, void *e, void *f)
{
    data_ov065_02290804 = (Unk_ov065_02271488_A *)mem;
    func_02115fb4(data_ov065_02290804, 0, 0x264);
    data_ov065_02290804->unk_00 = (Unk_ov065_02271488_Inner *)b;
    data_ov065_02290804->unk_04 = 0;
    data_ov065_02290804->unk_08 = c;
    data_ov065_02290804->unk_0c = d;
    data_ov065_02290804->unk_18 = (void (*)(s32, s32, void *))e;
    data_ov065_02290804->unk_1c = f;
    data_ov065_02290804->unk_20 = a;
}

void *func_ov065_022715a4(void)
{
    return data_ov065_0229080c->unk_20;
}
void func_ov065_022715b0(void *x, Unk_ov065_02271774_Rec *p)
{
    s32 i;
    s32 found;
    u8 buf[28];
    found = 0;
    if (p->unk_00 == 0) {
        i = found;
        for (; i < data_ov065_0229080c->unk_14; i++) {
            if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 1) {
                func_020ffb98((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i], buf);
                if (func_0212a190(buf, (u8 *)p + 0x8e) == 0) {
                    func_020ffba8(&data_ov065_0229080c->unk_18[i], p->unk_04);
                    func_02100094(&data_ov065_0229080c->unk_18[i]);
                    found = 1;
                }
            } else if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 3
                       || func_021000f4(&data_ov065_0229080c->unk_18[i]) == 2) {
                s32 v = p->unk_04;
                if (v == func_020ffc60((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i])) {
                    func_020ffba8(&data_ov065_0229080c->unk_18[i], v);
                    func_02100094(&data_ov065_0229080c->unk_18[i]);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            func_ov065_02271dac(func_ov065_02271a04(data_ov065_0229080c->unk_18, data_ov065_0229080c->unk_14, p->unk_04));
            data_ov065_0229080c->unk_1d = 1;
        }
    }
}
void func_ov065_02271698(void *x, Unk_ov065_02271774_Rec *p)
{
    s32 i;
    s32 found;
    found = 0;
    if (p->unk_00 == 0) {
        i = found;
        for (; i < data_ov065_0229080c->unk_14; i++) {
            if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 1) {
                u8 buf[24];
                func_020ffb98((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i], buf);
                if (func_0212a190(buf, (u8 *)p + 0x8e) == 0) {
                    func_ov065_0227c224(x, p->unk_04);
                    func_020ffba8(&data_ov065_0229080c->unk_18[i], p->unk_04);
                    found = 1;
                }
            } else if (func_021000f4(&data_ov065_0229080c->unk_18[i]) == 3
                       || func_021000f4(&data_ov065_0229080c->unk_18[i]) == 2) {
                s32 v = p->unk_04;
                if (v == func_020ffc60((void *)func_ov065_02271474(), &data_ov065_0229080c->unk_18[i])) {
                    func_ov065_0227c224(x, v);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            func_ov065_022719e0(p->unk_04);
        } else {
            func_ov065_0227c17c(x, p->unk_04);
        }
    }
}
void func_ov065_02271774(void *x, Unk_ov065_02271774_Rec *p, s32 idx)
{
    s32 off;
    s32 i;
    s32 out;
    if (p->unk_00 == 0 && p->unk_04 != 0) {
        off = idx * 12;
        if (func_021000f4((u8 *)data_ov065_0229080c->unk_18 + off) != 0) {
            if (data_ov065_0229080c->unk_00 == 1) {
                data_ov065_0229080c->unk_1d = 1;
                for (i = 0; i < p->unk_04; i++) {
                    if (func_ov065_02271ac8(data_ov065_0229080c->unk_18, idx, p->unk_0c[i].unk_00) != 0) {
                        data_ov065_0229080c->unk_1c++;
                        data_ov065_0229080c->unk_1e = 1;
                        p->unk_08 = 0x601;
                        return;
                    }
                }
                for (i = 0; i < p->unk_04; i++) {
                    func_ov065_022718ec(func_ov065_0227c000(x, p->unk_0c[i].unk_00, &out));
                    if (out == -1) {
                        func_ov065_022719e0(p->unk_0c[i].unk_00);
                    } else {
                        func_020ffba8((u8 *)data_ov065_0229080c->unk_18 + off, p->unk_0c[0].unk_00);
                        func_02100094((u8 *)data_ov065_0229080c->unk_18 + off);
                        func_ov065_02271dac(idx);
                        data_ov065_0229080c->unk_1c++;
                        data_ov065_0229080c->unk_1e = 1;
                        p->unk_08 = 0x601;
                        return;
                    }
                }
                if (p->unk_08 != 0x600) {
                    data_ov065_0229080c->unk_1c++;
                    data_ov065_0229080c->unk_1e = 1;
                    return;
                }
            }
            return;
        }
    }
    if (p->unk_00 != 0) {
        s32 e = func_ov065_022718ec(p->unk_00);
        if (e > 0) {
            e = 1;
        } else if (e != 0) {
            e = e;
        }
    } else {
        if (data_ov065_0229080c->unk_00 == 1 || func_021000f4((u8 *)data_ov065_0229080c->unk_18 + idx * 12) == 0) {
            data_ov065_0229080c->unk_1c++;
            data_ov065_0229080c->unk_1e = 1;
        }
    }
}

s32 func_ov065_022718ec(s32 r)
{
    s32 a;
    s32 b;
    if (r == 0) {
        return 0;
    }
    switch (r) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
        a = 8;
        b = -2;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -20;
        break;
    }
    func_ov065_02271fc8(a, b - 0x11558);
    return r;
}

s32 func_ov065_0227194c(void *a, void *b)
{
    s32 out;
    s32 t;
    out = 0;
    if (data_ov065_0229080c == NULL || func_ov065_02270e94() == 0) {
        return FALSE;
    }
    t = func_020ffc60((void *)func_ov065_02271474(), a);
    if (t > 0) {
        if (func_ov065_0227c000(data_ov065_0229080c->unk_04, t, &out) != 0) {
            return FALSE;
        }
    }
    if (t <= 0 || out == -1) {
        return FALSE;
    }
    if (func_ov065_0227c05c(data_ov065_0229080c->unk_04, out, b) == 0) {
        goto ok;
    }
    return FALSE;
ok:
    return TRUE;
}

s32 func_ov065_022719e0(s32 a)
{
    s32 r = func_ov065_0227c278(data_ov065_0229080c->unk_04, a, data_ov065_0229080c->unk_28);
    func_ov065_022718ec(r);
    return r;
}

s32 func_ov065_02271a04(Unk_ov065_02271774_Ent *arr, s32 n, s32 id)
{
    s32 res, i, j, t;
    Unk_ov065_02271774_Ent *q, *p;
    res = -1;
    i = 0;
    if (n - 1 > 0) {
        q = arr;
        p = arr;
        do {
            t = func_ov065_02271ed8(i);
            if (t != 0) {
                if (t == id) {
                    res = i;
                }
                j = i + 1;
                for (; j < n; j++) {
                    if (t == func_ov065_02271ed8(j)) {
                        if (func_021000f4(q) == 2 && func_021000f4(&arr[j]) == 3) {
                            func_020ffba8(p, t);
                        }
                        if (func_021000fc(&arr[j]) != 0) {
                            func_02100094(p);
                        }
                        func_ov065_02271b40(arr, j, i);
                        data_ov065_0229080c->unk_1d = 1;
                    }
                }
            }
            q++;
            p++;
            i++;
        } while (i < n - 1);
    }
    return res;
}

s32 func_ov065_02271ac8(Unk_ov065_02271774_Ent *arr, s32 n, s32 id)
{
    s32 i;
    for (i = 0; i < n; i++) {
        s32 t = func_ov065_02271ed8(i);
        if (t != 0 && t == id) {
            if (func_021000fc(&arr[n]) != 0 && func_021000fc(&arr[i]) == 0) {
                func_ov065_02271b40(arr, i, n);
            } else {
                func_ov065_02271b40(arr, n, i);
            }
            data_ov065_0229080c->unk_1d = 1;
            return TRUE;
        }
    }
    return FALSE;
}

void func_ov065_02271b40(Unk_ov065_02271774_Ent *arr, s32 i, s32 j)
{
    if (data_ov065_0229080c != NULL) {
        func_02115fb4(&arr[i], 0, 12);
        if (data_ov065_0229080c->unk_3c != NULL) {
            data_ov065_0229080c->unk_3c(i, j, data_ov065_0229080c->unk_40);
        }
    }
}

void func_ov065_02271b7c(void)
{
    data_ov065_0229080c->unk_2c(0, data_ov065_0229080c->unk_1d, data_ov065_0229080c->unk_30);
    data_ov065_0229080c->unk_00 = 2;
}
void func_ov065_02271ba0(Unk_ov065_02271774_Ent *arr, s32 n)
{
    s32 cnt;
    s32 idx;
    u8 buf[0x18];
    Unk_ov065_02271ba0_Out out;
    s32 j;
    s32 id;
    if (data_ov065_0229080c->unk_1e == 0) {
        func_ov065_022718ec(func_ov065_0227c14c(data_ov065_0229080c->unk_04, &cnt));
        idx = 0;
        if (cnt > 0) {
            do {
                func_ov065_022718ec(func_ov065_0227c05c(data_ov065_0229080c->unk_04, idx, &out));
                for (j = 0; j < n; j++) {
                    if (out.unk_00 == func_ov065_02271ed8(j)) {
                        s32 off = j * 12;
                        if (func_021000fc((void *)((u32)arr + off)) == 0) {
                            Unk_ov065_02271774_Ent *e = (Unk_ov065_02271774_Ent *)((u8 *)arr + off);
                            func_020ffba8(e, out.unk_00);
                            func_02100094(e);
                            data_ov065_0229080c->unk_1d = 1;
                        }
                        break;
                    }
                }
                if (j == n) {
                    func_ov065_022718ec(func_ov065_0227bf5c(data_ov065_0229080c->unk_04, out.unk_00));
                    cnt--;
                    idx--;
                }
                idx++;
            } while (idx < cnt);
        }
        data_ov065_0229080c->unk_1e = 1;
    }
    while (data_ov065_0229080c->unk_1c < n) {
        id = func_ov065_02271ed8(data_ov065_0229080c->unk_1c);
        if (id != 0) {
            if (func_ov065_02271ac8(arr, data_ov065_0229080c->unk_1c, id) == 0) {
                func_ov065_022718ec(func_ov065_0227c000(data_ov065_0229080c->unk_04, id, &idx));
                if (idx == -1) {
                    func_ov065_022719e0(id);
                }
            }
        } else {
            if (func_020ffc60((void *)func_ov065_02271474(), &arr[data_ov065_0229080c->unk_1c]) == -1) {
                func_020ffb98((void *)func_ov065_02271474(), &arr[data_ov065_0229080c->unk_1c], buf);
                func_ov065_0227c4b0(data_ov065_0229080c->unk_04, 0, 0, 0, 0, buf, 0, 0, (void *)func_ov065_02271774, data_ov065_0229080c->unk_1c);
                data_ov065_0229080c->unk_1e = 2;
                return;
            }
        }
        data_ov065_0229080c->unk_1c++;
    }
}

void func_ov065_02271d20(void)
{
    if (data_ov065_0229080c != NULL) {
        func_ov065_02283e00();
        data_ov065_0229080c->unk_00 = 0;
    }
}

s32 func_ov065_02271d44(void)
{
    Unk_ov065_02271774_B *b = data_ov065_0229080c;
    u64 d = (func_01ffa6b4() - *(u64 *)&b->unk_0c) << 6;
    d = d / 0x82ea;
    if (d >= 0x12c) {
        b->unk_08++;
        func_ov065_0227c670(data_ov065_0229080c->unk_04);
        *(u64 *)&data_ov065_0229080c->unk_0c = func_01ffa6b4();
    }
    return 0;
}
}
