#include "types.h"

struct Unk_020ba93c_Obj { u32 pad[3]; s32 f0c; };
struct Unk_021f1448 { u8 pad0[0x1c]; s32 f1c; u8 pad1[4]; s32 f24; s32 f28; u8 pad2[0x08]; s32 f34; };
struct Unk_020baa10_Time { u8 lo; u8 hi; };
struct Unk_020baa10_Buf { u16 x; Unk_020baa10_Time t; u16 y; u16 z; };
struct Unk_020bacc0_Vec { s32 x; s32 y; };
struct Unk_020bacc0_P { s32 x; s32 y; };
struct Unk_020bacc0_Entry {
    s32 f00; s32 f04; s32 f08; s32 f0c;
    u8 f10[0x14];
    s32 f24;
    u8 pad28[9];
    u8 f31;
    u8 pad32[2];
    s32 f34; s32 f38;
    u8 pad3c[0x10];
    s32 f4c; s32 f50;
    u16 f54;
    s8 f56; s8 f57;
    s32 f58;
    u8 f5c; s8 f5d;
    u8 pad5e[2];
    s32 f60;
    u8 pad64[0x10];
};
struct Unk_020bacc0_Obj {
    Unk_020bacc0_Entry e[0x3c];
    u8 pad1b30[0x13d8];
    s32 f2f08; s32 f2f0c;
    u8 pad2f10[4];
    s32 f2f14;
    u8 pad2f18[0x18];
    s32 f2f30;
    u8 pad2f34[0x1d];
    u8 f2f51;
};
struct Unk_021eff48 { s32 f0; s32 f4; };
struct Unk_020baa10_Ptr { u16 pad[3]; u16 h6; };

extern "C" {
extern Unk_021f1448 data_021f1448;
extern s32 data_020d0e70[];
extern u8 data_021ef690[];
extern u16 data_021ef688[];
extern s32 data_021ef670;
extern s32 data_021f145c[];
extern Unk_021eff48 data_021eff48;
extern u8 data_021f1158[];
extern s32 data_021f146c;
extern s32 data_021f1470;
extern u8 **data_020e4d84[];
extern u16 *data_020e4d5c[];
extern u16 **data_020e4d48[];
extern u8 data_021ef690_out[];
extern Unk_020baa10_Ptr data_021efc08;

void func_02003c30(void*);
void func_02003c40(void*, s32);
void func_02003c60(void*, void*);
void func_02003cbc(void*);
s32 func_020b5364(s32);
void func_020ba8cc(void*);
void func_02133ef8(void *p, u32 n);
void func_0209cf18(void*);
u32 func_0213335c(u32, u32);
void func_020bac14(s32, s32, u32, u32);
void func_020baaa0(s32, s32, u32, u32);
void func_020bab7c(s32, s32, u32, u32);
s32 func_020b53ec(u32);
void *func_02089248(void*);
s32 func_02089228(void*, s32);
s32 func_02089210(void*, s32);
void func_02087e70(s32, void*, s32, s32, s32, s32, s32, s32, u32, s32, u32, u32);
void func_02089140(void*);
void func_020bc928(void*);
void func_020baf2c(void*);
void func_020baf68(Unk_020bacc0_Obj*);
void func_020bce8c(void*);
void func_020be0bc(void*);
void func_020be204(void*);
void func_020be0f4(void*);
void func_020bce4c(void*);
void func_020bd520(void*);
void func_020bd06c(void*);
void func_020bd104(void*);
s32 func_020bcba4(void*);
s32 func_020bcbac(void*);
void func_020bd12c(void*);
s32 func_020bcbd8(void*, s32);
void func_020bc754(void*, s32, s32, s32, s32);
void func_020bc58c(void*);
void func_020bbeb8(void*);
void func_020bc43c(void*);
void func_020bc2a8(void*);
void func_020bb9b8(void*);
void func_020bc18c(void*);
void func_020bbb58(void*);
void func_020bc1d4(void*);
s32 func_020b50e8();
void func_020bbdd4(void*);
void func_020bbcc8(void*);
void func_020bbc28(void*);
void func_020bbac0(void*);
s32 func_02133150(s32, s32);
void func_020bb584(void*, s32, s32, s32);
void func_020bb4c8(void*, s32);
s32 func_020bb7e8(void*);
s32 func_020bb774(void*);
s32 func_020bb834(void*);
s32 func_020bb5b4(void*);
void func_020baf30(Unk_020bacc0_Obj*);

void func_020ba6f4(u16*, u16*, u16*, s32);
void func_020b53f8(s32);
void func_020027f8(s32);
void func_020027ec(u32);
u16 func_02064cc4();
s32 func_02104238(s32, u32, s32);

void func_020ba93c(Unk_020ba93c_Obj *p) {
    BOOL a = data_021f1448.f24 == 3;
    BOOL b = data_021f1448.f24 == 4;
    BOOL c = data_021f1448.f34 == 1;
    p->f0c = 0;
    if (c) {
        if (a) {
            p->f0c = 0x99a00;
        } else if (b) {
            p->f0c = 0x100000;
        }
    }
}

void func_020ba990(void *p) {
    func_02003c30(p);
}

void func_020ba998(Unk_020ba93c_Obj *p) {
    s32 v[3];
    if (p->f0c != 0) {
        s32 k = data_020d0e70[func_020b5364(0)];
        if (k >= 0) {
            func_02003c40(p, k);
        }
    }
    func_02133ef8(v, 12);
    v[2] = p->f0c >> 8;
    func_02003c60(p, v);
    func_020ba8cc(p);
}

void func_020ba9e4(Unk_020ba93c_Obj *p) {
    func_020ba93c(p);
    func_02003cbc(p);
}

u8 func_020ba9f8(s32 i) {
    return data_021ef690[i];
}

s16 func_020baa04(s32 i) {
    return data_021ef688[i];
}

void func_020baa10(s32 a, s32 b) {
    Unk_020baa10_Buf b0;
    u32 hour, rem;
    func_0209cf18(&b0.t);
    hour = b0.t.hi;
    rem = (hour + 1) % 24;
    func_020bac14(a, b, hour, rem);
    func_020baaa0(a, b, hour, rem);
    func_020bab7c(a, b, hour, rem);
    if (data_021ef670 != 0) {
        func_020b53f8(0);
        func_020027f8(0x1c2);
        b0.y = data_021efc08.h6;
        func_020027ec(b0.y);
    }
    b0.x = func_02064cc4();
    b0.z = b0.x;
    func_02104238(0, b0.z, 0);
}

void func_020baaa0(s32 a, s32 b, u32 c, u32 d) {
    u8 *out = data_021ef690;
    s32 i;
    s32 ia2, ia, ib;
    if (data_021f1470 != data_021f146c) {
        i = 0;
        ia = 0x1000 - a;
        ib = 0x1000 - b;
        for (; i < 2; i++) {
            u8 *p1 = data_020e4d84[data_021f146c][i];
            s32 t1 = (u16)((ia * p1[c] + a * p1[d]) >> 12);
            u8 *p2 = data_020e4d84[data_021f1470][i];
            t1 = t1 * ib;
            s32 t2 = (u16)((ia * p2[c] + a * p2[d]) >> 12);
            *out = (t1 + t2 * b) >> 12;
            out++;
        }
    } else {
        i = 0;
        ia2 = 0x1000 - a;
        for (; i < 2; i++) {
            u8 *p = data_020e4d84[data_021f146c][i];
            *out = (ia2 * p[c] + a * p[d]) >> 12;
            out++;
        }
    }
}

void func_020bab7c(s32 a, s32 b, u32 c, u32 d) {
    s32 cur = data_021f1448.f24;
    s32 next = data_021f1448.f28;
    if (next != cur) {
        u16 *pc = data_020e4d5c[cur];
        u32 t1 = (u16)(((0x1000 - a) * pc[c] + a * pc[d]) >> 12);
        u16 *pn = data_020e4d5c[next];
        t1 = t1 * (0x1000 - b);
        u32 t2 = (u16)(((0x1000 - a) * pn[c] + a * pn[d]) >> 12);
        func_020b53ec((u16)((t1 + t2 * b) >> 12));
    } else {
        func_020b53ec((u16)(((0x1000 - a) * data_020e4d5c[cur][c] + a * data_020e4d5c[cur][d]) >> 12));
    }
}

void func_020bac14(s32 a, s32 b, u32 c, u32 d) {
    u16 *out = (u16 *)data_021ef688;
    u16 tmp[2];
    u16 **tbl;
    u16 **row;
    u16 *t;
    s32 i;
    if (data_021f1470 != data_021f146c) {
        for (i = 0; i < 4; i++) {
            row = data_020e4d48[data_021f146c];
            t = row[i];
            func_020ba6f4(&tmp[0], t + c, t + d, a);
            row = data_020e4d48[data_021f1470];
            t = row[i];
            func_020ba6f4(&tmp[1], t + c, t + d, a);
            func_020ba6f4(out, &tmp[0], &tmp[1], b);
            out++;
        }
    } else {
        row = data_020e4d48[data_021f146c];
        for (i = 0; i < 4; i++) {
            t = row[i];
            func_020ba6f4(out, t + c, t + d, a);
            out++;
        }
    }
}

void func_020bacc0(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e;
    Unk_020bacc0_Entry *end = obj->e + 0x3c;
    s32 yoff = data_021f145c[data_021f1448.f1c ^ 1];
    s32 id = -1;
    for (e = obj->e; e < end; e++) {
        void *sub;
        void *r;
        Unk_020bacc0_P *pos;
        s32 a, b, x, y, py;
        if (e->f00 == 0xd) continue;
        if (e->f04 != 2) continue;
        if (e->f31 != 0) continue;
        sub = e->f10;
        r = func_02089248(sub);
        if (r == NULL) continue;
        pos = (Unk_020bacc0_P *)&e->f34;
        a = func_02089228(sub, id);
        b = func_02089210(sub, id);
        x = a + ((pos->x + 0x800) >> 12);
        py = b + ((pos->y + 0x800) >> 12);
        y = py - yoff;
        if (data_021eff48.f0 == 1) {
            u8 k = e->f5c;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            func_02087e70(0, r, x, y, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u32)(e->f56 << 24) >> 24, (u32)(e->f57 << 24) >> 24);
        } else if (py < 0xc0) {
            u8 k = e->f5c;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            func_02087e70(1, r, x, y, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u8)e->f56, (u8)e->f57);
        } else if (py > 0x100) {
            u8 k;
            BOOL hidden;
            s32 y2 = y - 0x100;
            k = e->f5c;
            hidden = FALSE;
            if (k != 0) {
                s32 lo = y2 - k;
                s32 hi = y2 + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            func_02087e70(0, r, x, y2, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u32)(e->f56 << 24) >> 24, (u32)(e->f57 << 24) >> 24);
        }
    }
}

void func_020bae84(Unk_020bacc0_Obj *obj) {
    func_020baf30(obj);
}

void func_020bae8c(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e = obj->e;
    Unk_020bacc0_Entry *end = obj->e + 0x3c;
    s32 *cnt;
    func_020bc928(obj);
    func_020baf2c(obj);
    func_020baf68(obj);
    cnt = &obj->f2f14;
    for (; e < end; e++) {
        if (e->f08 != 0x34) {
            void *sub = e->f10;
            switch (e->f04) {
            case 1:
                if (e->f24 != 6) {
                    func_020bce8c(obj);
                }
                func_020be0bc(e);
                e->f04 = 2;
                break;
            case 2:
                func_02089140(sub);
                func_020be204(e);
                break;
            case 3:
                func_020be0f4(e);
                *cnt -= 1;
                break;
            }
        }
    }
    func_020bce4c(obj);
    func_020bd520((u8 *)obj + 0x2fa8);
    func_020bd06c((u8 *)obj + 0x2fcc);
}

void func_020baf2c(void *) {
}

void func_020baf30(Unk_020bacc0_Obj *obj) {
    s32 r = func_020b5364(0);
    if (r != 0 && r != 3) {
        if (data_021f1448.f34 == 1 && data_021f1448.f24 == 4) {
            func_020bc58c(obj);
        }
        func_020bbeb8(obj);
    }
}

void func_020baf68(Unk_020bacc0_Obj *obj) {
    switch (data_021f1448.f34) {
    case 1:
        func_020bc43c(obj);
        break;
    case 2:
        func_020bc2a8(obj);
        break;
    default:
        obj->f2f08 = 0;
        obj->f2f0c = 0;
        break;
    }
    func_020bb9b8(obj);
    func_020bc18c(obj);
    func_020bbb58(obj);
    func_020bc1d4(obj);
    func_020bbeb8(obj);
    if (func_020b50e8() != 0x2c) {
        func_020bbdd4(obj);
        func_020bbcc8(obj);
        func_020bbc28(obj);
        func_020bbac0(obj);
    }
}

void func_020bafe0(Unk_020bacc0_Obj *obj) {
    func_020bd104((u8 *)obj + 0x2fcc);
    func_020bcba4(obj);
}

void func_020baffc(Unk_020bacc0_Obj *obj) {
    func_020bcbac(obj);
    func_020bd12c((u8 *)obj + 0x2fcc);
}

void func_020bb018(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e = &obj->e[func_020bcbd8(obj, 3)];
    if (e != NULL) {
        func_020bc754(obj, 2, 0x3c, 0, 1);
        e->f60 = 1;
    }
}

void func_020bb04c(Unk_020bacc0_Obj *obj) {
    u16 *p = (u16 *)(data_021f1158 + data_021eff48.f4 * 0x180);
    u16 *end1 = (u16 *)((u8 *)p + 0xee);
    u16 *end2 = (u16 *)((u8 *)p + 0x12e);
    u32 v = obj->f2f51;
    u16 h = v | 0x1000;
    s32 step, i;
    for (; p < end1; p++) {
        *p = h;
    }
    step = func_02133150(-(v << 12), 0x20);
    i = 0;
    for (; p < end2; p++, i++) {
        *p = (v + ((step * i + 0x800) >> 12)) | 0x1000;
    }
}

void func_020bb0c8(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 0x10);
    }
    func_020bb7e8(obj);
}

void func_020bb0fc(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0xe1, 0);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 0x13);
    }
}

void func_020bb128(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 1);
    }
    func_020bb774(obj);
}

void func_020bb15c(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 0x11);
    }
    func_020bb834(obj);
}

void func_020bb190(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0xc8, 0);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 4);
    }
    func_020bb834(obj);
}

void func_020bb1c4(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 0xf);
    }
    func_020bb774(obj);
}

void func_020bb1f8(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0, 0x64, 0x96);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 0x14);
    }
}

void func_020bb224(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        func_020bb584(obj, 0x8c, 0x96, 0x258);
    } else if (obj->f2f30 == 0) {
        func_020bb4c8(obj, 0x14);
    }
    func_020bb5b4(obj);
}
}
