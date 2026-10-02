// mwcc-flags: -nothumb -O4,p
// G010a: autoload_2 0x020f5b9c-0x020f7a5c (36 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: whole class file of one
// family of small objects (13 vtables of 6 slots at 0x0213b9e4-0x0213bb7c; vtables stay extern, classes only DECLARE virtuals).
// Common layout: [0] vptr, [4] and [8] two sub-objects (voice/sound slots, passed by address), [0xc] u8, [0xd] state, ...
// Base methods: func_020f6678 (report an event code to a slot), func_020f66d0 (volume/pan update), func_020f6800 (reset, calls vfunc_14).
// Vtable slots: 0 reset (f6800 or own), 1 f67c8, 2 event handler (self, id, arg), 3 f678c, 4 f6764, 5 own init.
#include "types.h"

class Item {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    u32 a;
    u32 b;
    u8 c12;
};

struct Bp {
    u32 *vptr;
    u32 a;
    u32 b;
    u8 c12;
    u8 c13;
    u8 c14;
    u8 c15;
};

struct Sp {
    u32 *vptr;
    u32 a;
    u32 b;
    u8 c12;
    s8 d13;
    u16 e14;
    u16 g16;
    u16 h18;
    u16 i20;
};

struct Up {
    u32 *vptr;
    u32 a;
    u32 b;
    u8 c12;
    u8 d13;
    u16 e14;
    u16 g16;
    u16 h18;
    u16 i20;
};

struct Wp {
    u32 *vptr;
    u32 a;
    u32 b;
    u8 c12;
    u8 pad13;
    s16 e14;
    s32 w16;
};

struct Pair {
    u32 a;
    u32 b;
};

extern "C" {
extern u8 data_021f5b80[];
void func_0206d49c(void);
u32 func_020f07f0(void *g, u32 n);
void func_0210cf78(void *slot, u32 a, s32 b);
void func_020f6678(void *self, s32 code, void *slot);
void func_020f66d0(void *self, u32 arg);
void func_020f6800(void *self);
void func_020f5ccc(Bp *self);
void func_0210d010(void *p, u32 v);
void func_02109fd0(void *p, u32 a, u32 b);
void func_0210a26c(void *p, s32 v);
void func_0210a27c(void *p);
void func_0210a294(void *p);
void func_020eda30(void *p, u32 v);
void func_020edad0(u32 code, u32 a, void *p);
void func_0210a148(void *p, u32 a, u32 b);
void func_0210a0e8(void *p, u32 a, u32 b);
void func_0210a188(void *p, u32 a, u32 b);
void func_0210a214(void *p, u32 a, u32 b);
void func_0210a378(void *p, u32 a);
void func_0210a024(void *p, u32 a, void *out);
void func_020f4904(u32 a, u32 b);
u32 func_020f48d8(void);
u32 func_020f4718(u32 a, u32 b);
s32 func_020f7920(Wp *self);
}

static inline BOOL nz(u32 v) { return v != 0; }

extern "C" void func_020f7a30(Wp *self) {
    func_0210d010(&self->b, 0xf6);
    self->e14 = -1;
    self->w16 = 0;
}

extern "C" void func_020f7960(Wp *self, s32 id, u32 arg) {
    s32 base = self->w16 << 2;
    switch ((u32)func_020f7920(self)) {
    case 1:
        func_020f6678(self, base + 0x507, &self->a);
        break;
    case 2:
        func_020f6678(self, base + 0x508, &self->a);
        break;
    case 3:
        func_020f6678(self, base + 0x509, &self->a);
        break;
    case 4:
        func_020f6678(self, base + 0x50a, &self->a);
        self->w16 = (self->w16 + 1) % 2;
        break;
    }
    func_020f66d0(self, arg);
}

extern "C" s32 func_020f7920(Wp *self) {
    s16 v;
    s32 r;
    func_0210a024(&self->b, 0, &v);
    r = (v != self->e14) ? v : -1;
    self->e14 = v;
    return r;
}

extern "C" void func_020f7670(Up *self, s32 id, u32 arg) {
    if (id == 0) {
        func_0210a148(&self->b, 1, 70);
        func_0210a148(&self->b, 2, 80);
        func_0210a148(&self->b, 12, 120);
        func_0210a148(&self->b, 16, 110);
        if (self->d13 != 0) {
            func_020eda30(&self->a, 0);
            func_020edad0(0x128, 1, &self->a);
        }
    } else if (id == 90) {
        func_0210a148(&self->b, 1, 75);
        func_0210a148(&self->b, 14, 110);
        func_0210a148(&self->b, 16, 110);
        if (self->d13 != 0) {
            func_020eda30(&self->a, 0);
            func_020edad0(0x129, 1, &self->a);
        }
    } else if (id == 160) {
        func_0210a148(&self->b, 1, 80);
        func_0210a148(&self->b, 14, 110);
        func_0210a148(&self->b, 16, 110);
        if (self->d13 != 0) {
            func_020eda30(&self->a, 0);
            func_020edad0(0x12a, 1, &self->a);
        }
    } else if (id == 260) {
        func_0210a148(&self->b, 1, 80);
        func_0210a148(&self->b, 14, 110);
        func_0210a148(&self->b, 16, 100);
        if (self->d13 != 0) {
            func_020eda30(&self->a, 0);
            func_020edad0(0x12b, 1, &self->a);
        }
    } else if (id == 371) {
        func_0210a148(&self->b, 1, 75);
        func_0210a148(&self->b, 2, 0);
        func_0210a148(&self->b, 12, 90);
        func_0210a148(&self->b, 16, 75);
        if (self->d13 != 0) {
            func_020eda30(&self->a, 0);
            func_020edad0(0x12c, 1, &self->a);
        }
    } else if (id == 451) {
        func_0210a148(&self->b, 1, 85);
        func_0210a148(&self->b, 14, 0);
        func_0210a148(&self->b, 16, 70);
        self->d13 = ((self->d13 + 1) % 2) != 0;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f7638(Up *self) {
    func_020f6678(self, 0x50f, &self->b);
    func_020f6678(self, 0x510, &self->a);
    self->d13 = 1;
}

extern "C" void func_020f72e8(Sp *self, s32 id, u32 arg) {
    if (self->c12 == 1) {
        self->c12 = 0;
        func_020eda30(&self->a, 0);
        func_020edad0(0x136, 1, &self->a);
        self->g16 = 0;
    } else if (id == 0) {
        if (func_020f07f0(data_021f5b80, 100) < 70) func_02109fd0(&self->a, 0, 1);
        func_020eda30(&self->b, 0);
        func_020edad0(0x139, 1, &self->b);
    } else if (id == 90) {
        if (func_020f07f0(data_021f5b80, 100) < 60) {
            func_02109fd0(&self->a, 1, 1);
            self->e14 = 1;
        }
        u32 r = func_020f07f0(data_021f5b80, 100);
        func_020eda30(&self->b, 0);
        if (r < 33) func_020edad0(0x13a, 1, &self->b);
        else if (r < 66) func_020edad0(0x13b, 1, &self->b);
        else func_020edad0(0x13c, 1, &self->b);
    } else if (id == 145) {
        u32 r = func_020f07f0(data_021f5b80, 100);
        func_020eda30(&self->b, 0);
        if (r < 33) func_020edad0(0x13a, 1, &self->b);
        else if (r < 66) func_020edad0(0x13b, 1, &self->b);
        else func_020edad0(0x13c, 1, &self->b);
    } else if (id == 180) {
        if (func_020f07f0(data_021f5b80, 100) < 70 && self->e14 != 1) {
            func_02109fd0(&self->a, 1, 1);
            self->e14 = 2;
        }
        if (func_020f07f0(data_021f5b80, 100) < 60 && self->e14 != 1) {
            func_02109fd0(&self->a, 0, 1);
            self->e14 = 2;
        }
    } else if (id == 250) {
        u32 r = func_020f07f0(data_021f5b80, 100);
        if (self->e14 != 2) {
            if (r < 70) {
                func_02109fd0(&self->a, 2, 1);
                self->e14 = 3;
            } else {
                func_02109fd0(&self->a, 0, 1);
                self->e14 = 4;
            }
        }
        func_020eda30(&self->b, 0);
        func_020edad0(0x13d, 1, &self->b);
    } else if (self->g16 == 103) {
        func_020eda30(&self->a, 0);
        func_020edad0(0x137, 1, &self->a);
    } else if (self->g16 == 700) {
        func_020eda30(&self->a, 0);
        func_020edad0(0x138, 1, &self->a);
    } else if (self->g16 == 900) {
        func_020eda30(&self->a, 0);
        func_020edad0(0x136, 1, &self->a);
        self->g16 = 0;
    }
    self->g16 = self->g16 + 1;
    func_020f66d0(self, arg);
}

extern "C" void func_020f72cc(Sp *self) {
    func_020f6800(self);
    self->g16 = 0;
}

extern "C" void func_020f72a4(Sp *self) {
    func_020f6678(self, 0x51f, &self->a);
    self->e14 = 0;
}

extern "C" void func_020f6f48(Sp *self, s32 id, u32 arg) {
    if (self->c12 == 1) {
        self->c12 = 0;
        func_020eda30(&self->b, 0);
        func_020edad0(0x12d, 1, &self->b);
        func_020eda30(&self->a, 0);
        func_020edad0(0x132, 1, &self->a);
        self->i20 = 0;
        self->h18 = 0;
        self->e14 = 0;
        self->g16 = 0;
    } else if (id == 0) {
        func_020eda30(&self->b, 0);
        func_020eda30(&self->a, 0);
        if (func_020f07f0(data_021f5b80, 100) < 40) {
            func_020edad0(0x12e, 1, &self->b);
            func_020edad0(0x132, 1, &self->a);
            self->i20 = 1;
        } else {
            func_020edad0(0x130, 1, &self->b);
            func_020edad0(0x133, 1, &self->a);
            self->i20 = 2;
        }
    } else if (id == 90 && self->i20 != 0) {
        u32 r = func_020f07f0(data_021f5b80, 3);
        func_020eda30(&self->b, 0);
        func_020eda30(&self->a, 0);
        if (r == 0) {
            func_020edad0(0x12f, 1, &self->b);
            func_020edad0(0x134, 1, &self->a);
            self->i20 = 3;
        } else if (r == 1) {
            func_020edad0(0x12f, 1, &self->b);
            func_020edad0(0x135, 1, &self->a);
            self->i20 = 4;
        } else {
            func_020edad0(0x131, 1, &self->b);
            func_020edad0(0x134, 1, &self->a);
            self->i20 = 5;
        }
    } else if (id == 120 && self->i20 == 0) {
        u32 r = func_020f07f0(data_021f5b80, 2);
        func_020eda30(&self->b, 0);
        func_020eda30(&self->a, 0);
        if (r == 0) {
            func_020edad0(0x12f, 1, &self->b);
            func_020edad0(0x134, 1, &self->a);
            self->i20 = 3;
        } else {
            func_020edad0(0x12f, 1, &self->b);
            func_020edad0(0x135, 1, &self->a);
            self->i20 = 4;
        }
    }
    if (self->h18 != self->i20) {
        if (self->g16 == 0) {
            self->g16 = self->g16 + 1;
        } else if (self->g16 == 1) {
            if (func_020f07f0(data_021f5b80, 2) == 0) {
                self->g16 = self->g16 + 1;
            } else {
                self->g16 = 0;
                self->e14 = (self->e14 + 1) % 2;
            }
        } else if (self->g16 >= 2) {
            self->g16 = 0;
            self->e14 = (self->e14 + 1) % 2;
        }
        if (self->e14 % 2 == 1) func_0210a188(&self->b, 0x3f, 1);
        self->h18 = self->i20;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f6f28(Sp *self) {
    func_020f6800(self);
    self->e14 = 0;
    self->g16 = 0;
}

extern "C" void func_020f6ef8(Sp *self) {
    func_020f6678(self, 0x517, &self->b);
    self->i20 = 3;
    self->h18 = self->i20;
}

extern "C" void func_020f68a4(Up *self, s32 id, u32 arg) {
    s32 t1, t2, t5, t4, t3, t6;
    self->h18++;
    s32 st = self->e14;
    if (st == 15 && self->h18 >= 140) {
        self->d13 = 1;
        t1 = 50;
        t2 = 75;
        t3 = t1;
        t4 = t2;
        self->h18 = 0;
        t5 = 25;
        t6 = 88;
    } else if (st == 16 && self->h18 >= 100) {
        self->d13 = 1;
        t1 = 50;
        t2 = 75;
        t3 = t1;
        t4 = t2;
        self->h18 = 0;
        t5 = 25;
        t6 = 88;
    } else {
        s32 m = st % 5;
        if (m <= 2 && self->h18 >= 120) {
            self->d13 = 1;
            self->h18 = 0;
            u32 q = self->e14 / 5;
            if (q == 0) {
                t1 = 50;
                t2 = 75;
                t3 = t1;
                t4 = t2;
                t5 = 25;
                t6 = 88;
            } else if (q == 1) {
                t1 = 40;
                t2 = 80;
                t5 = 25;
                t3 = 50;
                t4 = 75;
                t6 = 88;
            } else {
                t1 = 40;
                t2 = 60;
                t5 = 25;
                t3 = 50;
                t4 = 75;
                t6 = 88;
            }
        } else if (m >= 3 && self->h18 >= 70) {
            self->d13 = 1;
            self->h18 = 0;
            u32 q = self->e14 / 5;
            if (q == 0) {
                t4 = 100;
                t6 = t4;
                t1 = 50;
                t2 = 75;
                t5 = 35;
                t3 = 70;
            } else if (q == 1) {
                t4 = 100;
                t6 = t4;
                t1 = 40;
                t2 = 80;
                t5 = 35;
                t3 = 70;
            } else {
                t4 = 100;
                t6 = t4;
                t1 = 40;
                t2 = 60;
                t5 = 35;
                t3 = 70;
            }
        }
    }
    if (self->d13 == 1) {
        s32 r;
        func_020eda30(&self->b, 0);
        self->g16 = self->e14;
        r = (s16)func_020f07f0(data_021f5b80, 100);
        if (r <= t1) t2 = 0;
        else if (r <= t2) t2 = 5;
        else t2 = 10;
        r = (s16)func_020f07f0(data_021f5b80, 100);
        if (r <= t5) {
            self->e14 = t2;
            if (self->g16 % 5 != self->e14 % 5) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x13e, 1, &self->a);
            }
        } else if (r <= t3) {
            self->e14 = t2 + 1;
            if (self->g16 % 5 != self->e14 % 5) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x13f, 1, &self->a);
            }
        } else if (r <= t4) {
            self->e14 = t2 + 2;
            if (self->g16 % 5 != self->e14 % 5) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x140, 1, &self->a);
            }
        } else if (r <= t6) {
            self->e14 = t2 + 3;
            if (self->g16 % 5 != self->e14 % 5) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x141, 1, &self->a);
            }
        } else {
            self->e14 = t2 + 4;
            if (self->g16 % 5 != self->e14 % 5) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x142, 1, &self->a);
            }
        }
        s32 q2 = t2 / 5;
        if (q2 == 0) {
            func_0210a148(&self->a, 3, 100);
            if (func_020f07f0(data_021f5b80, 100) < 40 && id > 90) {
                func_020edad0(0x146, 1, &self->b);
                func_0210a148(&self->b, 3, 100);
            }
        } else if (q2 == 1) {
            func_0210a148(&self->a, 3, 75);
            func_020edad0(0x145, 1, &self->b);
        } else {
            func_0210a148(&self->a, 3, 127);
            if (func_020f07f0(data_021f5b80, 100) < 40 && id > 90 && self->e14 <= 13) {
                func_020edad0(0x146, 1, &self->b);
                func_0210a148(&self->b, 3, 80);
            }
        }
        if (self->g16 == 11 || self->g16 == 13) {
            r = (s16)func_020f07f0(data_021f5b80, 100);
            if (r <= 20) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x143, 1, &self->a);
                self->e14 = 15;
            } else if (r <= 40) {
                func_020eda30(&self->a, 0);
                func_020edad0(0x144, 1, &self->a);
                self->e14 = 16;
            }
        }
        self->d13 = 0;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f6880(Sp *self) {
    func_020f6800(self);
    self->e14 = 0;
    self->g16 = 0;
    self->h18 = 0;
}

extern "C" void func_020f6850(Sp *self) {
    func_020f6678(self, 0x526, &self->a);
    self->g16 = 0;
    self->e14 = self->g16;
}

extern "C" void func_020f6800(void *p) {
    Item *self = (Item *)p;
    func_0210a294(&self->a);
    func_0210a294(&self->b);
    self->c12 = 0;
    self->vfunc_14();
    func_0210a26c(&self->a, 0);
    func_0210a26c(&self->b, 0);
}

extern "C" void func_020f67c8(Item *self) {
    func_020eda30(&self->a, 0);
    func_020eda30(&self->b, 0);
    func_0210a27c(&self->a);
    func_0210a27c(&self->b);
}

extern "C" void func_020f67b8(void *self, s32 id, u32 arg) {
    return func_020f66d0(self, arg);
}

extern "C" void func_020f678c(Item *self, u8 v) {
    self->c12 = v;
    func_0210a26c(&self->a, 127);
    func_0210a26c(&self->b, 127);
}

extern "C" void func_020f6764(Item *self) {
    func_0210a26c(&self->a, 0);
    func_0210a26c(&self->b, 0);
}

extern "C" void func_020f66d0(void *p, u32 x) {
    Item *self = (Item *)p;
    u32 r5;
    u32 r4;
    if (x == 0) {
        func_0210a26c(&self->a, 0);
        func_0210a26c(&self->b, 0);
        return;
    }
    func_020f4904(x, 0);
    r5 = func_020f48d8();
    r4 = func_020f4718(x, 0);
    func_0210a26c(&self->a, r5);
    func_0210a26c(&self->b, r5);
    func_0210a0e8(&self->a, 15, r4);
    func_0210a0e8(&self->b, 15, r4);
}

extern "C" void func_020f6678(void *self, s32 code, void *slot) {
    if (slot == 0) func_0206d49c();
    func_0210cf78(slot, 1, code % 1000);
}

extern "C" void func_020f6664(Sp *self) {
    return func_020f6678(self, 0x4f0, &self->a);
}

extern "C" void func_020f664c(Sp *self) {
    return func_020f6678(self, 0x4f1, &self->a);
}

extern "C" void func_020f6630(Sp *self) {
    func_020f6800(self);
    self->d13 = -1;
}

extern "C" void func_020f6618(Sp *self) {
    return func_020f6678(self, 0x4f2, &self->b);
}

extern "C" void func_020f639c(Sp *self, s32 id, u32 arg) {
    switch (id) {
    case 1:
        if (!nz(self->b)) func_020f6678(self, 0x4f2, &self->b);
        self->d13++;
        if (self->d13 == 3) self->d13 = 0;
        switch (self->d13) {
        case 0:
            func_020f6678(self, 0x4f6, &self->a);
            break;
        case 1:
            func_0210d010(&self->a, 247);
            break;
        case 2:
            func_0210a214(&self->a, 40, 15);
            break;
        }
        break;
    case 40:
        func_02109fd0(&self->a, 1, 1);
        break;
    case 50:
        func_02109fd0(&self->a, 0, 2);
        break;
    case 150:
        func_020f6678(self, 0x4f3, &self->b);
        func_02109fd0(&self->a, 0, 0);
        break;
    case 200:
        func_020f6678(self, 0x4f4, &self->b);
        func_02109fd0(&self->a, 1, 2);
        break;
    case 300:
        func_02109fd0(&self->a, 0, 3);
        break;
    case 375:
        func_020f6678(self, 0x4f5, &self->b);
        break;
    case 385:
        if (self->d13 == 2) func_0210a378(&self->a, 15);
        break;
    }
    switch (self->d13) {
    case 0:
        func_0210a148(&self->a, 0xfff, 127);
        func_0210a148(&self->b, 0xfff, 127);
        break;
    case 1:
        func_0210a148(&self->a, 0xfff, 100);
        func_0210a148(&self->b, 0xfff, 0);
        break;
    case 2:
        func_0210a148(&self->b, 0xfff, 100);
        break;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f6378(Sp *self) {
    func_0210d010(&self->a, 0xac);
    self->d13 = 0;
}

extern "C" void func_020f6234(Sp *self, s32 id, u32 arg) {
    switch (id) {
    case 1:
        if (self->d13 == 0) func_020f6678(self, 0x4f7, &self->b);
        break;
    case 120:
        if (self->d13 == 1) func_020f6678(self, 0x4f8, &self->b);
        break;
    case 190:
        if (self->d13 == 0) func_020f6678(self, 0x4f9, &self->b);
        break;
    case 210:
        if (self->d13 == 1) func_020f6678(self, 0x4fb, &self->b);
        break;
    case 300:
        if (self->d13 == 0) func_020f6678(self, 0x4fa, &self->b);
        break;
    case 349:
        self->d13++;
        if (self->d13 == 2) self->d13 = 0;
        break;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f6228(Sp *self) {
    self->d13 = 0;
}

extern "C" void func_020f5f20(Sp *self, s32 id, u32 arg) {
    switch (id) {
    case 1:
        if (self->d13 == 0) func_020f6678(self, 0x4fc, &self->a);
        else func_020f6678(self, 0x4fd, &self->a);
        if (!nz(self->b)) func_020f6678(self, 0x500, &self->b);
        break;
    case 70:
        func_02109fd0(&self->b, 1, 1);
        break;
    case 210:
        func_02109fd0(&self->b, 2, 1);
        break;
    case 220:
        func_02109fd0(&self->b, 1, 0);
        break;
    case 230:
        if (self->d13 == 0) func_020f6678(self, 0x4fe, &self->a);
        else func_020f6678(self, 0x4ff, &self->a);
        break;
    case 253:
        if (self->d13 == 1) func_02109fd0(&self->b, 2, 2);
        break;
    case 258:
        if (self->d13 == 0) func_02109fd0(&self->b, 2, 2);
        break;
    case 280:
        func_02109fd0(&self->b, 1, 1);
        break;
    case 370:
        func_02109fd0(&self->b, 1, 0);
        func_02109fd0(&self->b, 2, 1);
        break;
    case 383:
        if (self->d13 == 1) func_02109fd0(&self->a, 0, 2);
        break;
    case 390:
        if (self->d13 == 0) func_02109fd0(&self->a, 0, 2);
        break;
    case 405:
        if (self->d13 == 1) func_02109fd0(&self->b, 2, 3);
        break;
    case 425:
        if (self->d13 == 0) func_02109fd0(&self->b, 2, 3);
        break;
    case 479:
        self->d13++;
        if (self->d13 == 2) self->d13 = 0;
        break;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f5eec(Sp *self) {
    func_020f6678(self, 0x501, &self->a);
    func_020f6678(self, 0x502, &self->b);
}

extern "C" void func_020f5d6c(Sp *self, s32 id, u32 arg) {
    switch (id) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        if (!nz(self->a)) func_020f6678(self, 0x501, &self->a);
        if (!nz(self->b)) func_020f6678(self, 0x502, &self->b);
        func_02109fd0(&self->a, 0, 1);
        func_02109fd0(&self->b, 0, 1);
        break;
    case 90:
        func_02109fd0(&self->a, 0, 2);
        func_02109fd0(&self->b, 0, 2);
        break;
    case 140:
        func_02109fd0(&self->a, 0, 3);
        break;
    case 225:
        func_02109fd0(&self->a, 0, 4);
        break;
    case 235:
        func_02109fd0(&self->a, 0, 5);
        break;
    case 245:
        func_02109fd0(&self->b, 0, 3);
        break;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f5d20(Bp *self) {
    self->c13 = 0;
    self->c14 = func_020f07f0(data_021f5b80, 3);
    self->c15 = 0;
    func_0210d010(&self->a, (u16)(self->c14 + 0xad));
}

extern "C" void func_020f5ccc(Bp *self) {
    u8 v;
    do {
        v = func_020f07f0(data_021f5b80, 3);
    } while (v == self->c14);
    self->c14 = v;
    func_0210d010(&self->a, (u16)(self->c14 + 0xad));
}

extern "C" void func_020f5ba0(Bp *self, s32 id, u32 arg) {
    switch (id) {
    case 10:
        switch (self->c15) {
        case 0:
            func_020f6678(self, 0x503, &self->b);
            break;
        case 1:
            func_020f6678(self, 0x505, &self->b);
            break;
        }
        break;
    case 130:
        if (self->c15 == 0) func_020f6678(self, 0x504, &self->b);
        break;
    case 150:
        if (self->c15 == 1) func_020f6678(self, 0x506, &self->b);
        break;
    case 399:
        self->c13++;
        if (self->c13 == 7) {
            self->c13 = 0;
            func_020f5ccc(self);
        }
        self->c15++;
        if (self->c15 == 3) self->c15 = 0;
        break;
    }
    func_020f66d0(self, arg);
}

extern "C" void func_020f5b9c(void *self) {
}
