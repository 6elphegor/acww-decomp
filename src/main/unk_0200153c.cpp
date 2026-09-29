#include "types.h"

struct Unk_0200153c {
    s32 unk_00, unk_04, unk_08, unk_0c;
    u8 unk_10, unk_11;
    u16 unk_12;
    u8 unk_14, unk_15, unk_16, unk_17, unk_18, unk_19, unk_1a, unk_1b, unk_1c, unk_1d, unk_1e, unk_1f;
};

struct Unk_02001608 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05, unk_06, unk_07, unk_08, unk_09, unk_0a, unk_0b, unk_0c, unk_0d,
        unk_0e, unk_0f, unk_10, unk_11, unk_12, unk_13;
    s8 unk_14;
    u8 unk_15;
};

struct Unk_02001804 {
    u16 unk_00, unk_02, unk_04, unk_06;
    s32 unk_08[4];
    s32 unk_18, unk_1c, unk_20, unk_24;
    s32 unk_28[4];
    s32 unk_38, unk_3c, unk_40, unk_44;
    s32 unk_48[2];
    s32 unk_50[4];
    s32 unk_60, unk_64, unk_68, unk_6c;
};

struct Unk_020017a4 {
    u16 unk_00, unk_02, unk_04, unk_06, unk_08, unk_0a, unk_0c, unk_0e;
};

struct Unk_02001844 {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04;
};

struct Unk_02001858 {
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c;
};

struct Unk_02001874 {
    u16 unk_00, unk_02;
};

extern "C" {
extern Unk_0200153c data_0213c770;
extern Unk_02001608 data_0213c790;
extern Unk_02001804 data_0213c6f0;
extern Unk_02001874 data_0213c6f4;
extern Unk_02001858 data_0213c6f8;
extern Unk_02001858 data_0213c718;
extern Unk_020017a4 data_0213c730;
extern Unk_02001874 data_0213c738;
extern Unk_02001874 data_0213c73c;
extern Unk_02001858 data_0213c740;
extern Unk_02001858 data_0213c760;
extern Unk_02001844 data_0213c78e;
extern Unk_02001844 data_0213c793;
extern Unk_02001844 data_0213c798;
extern Unk_02001844 data_0213c79d;

u32 func_0210f0c4(u32 a);
u32 func_0210f0e0(u32 a, u32 b, u32 c);
void func_02110c98(u32 a);
void func_02110afc(u32 reg, void* mtx, s32 a, s32 b, s32 c, s32 d);
void func_02110a64(u32 reg, u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02110ae0(u32 reg, u32 a, s32 b, u32 c, u32 d);
void func_02110abc(u32 reg, u32 a, s32 b);

void func_020015b8(u32 a);
void func_020015e0(u32 a);
void func_020016d8(BOOL a);
void func_020016f4(BOOL a);
void func_02001844(Unk_02001844* p);
void func_02001858(Unk_02001858* p);
void func_02001874(Unk_02001874* p);

void func_0200153c(u32 a) { data_0213c770.unk_19 = a; }
u32 func_02001548() { return data_0213c770.unk_19; }
void func_02001554(u32 a) { data_0213c770.unk_18 &= ~a; }
void func_02001564(u32 a) { data_0213c770.unk_18 |= a; }
void func_02001574(u32 a) { data_0213c770.unk_18 = a; }
u32 func_02001580() { return data_0213c770.unk_18; }

void func_0200158c(u32 a) {
    func_020015b8(a);
    func_0210f0c4(a);
}

void func_020015a0(u32 a) {
    func_020015e0(a);
    func_0210f0e0(1, a, 1);
}

void func_020015b8(u32 a) {
    data_0213c770.unk_17 = a;
    data_0213c770.unk_10 = (data_0213c770.unk_10 & ~0xc) | ((0x3de0u >> (a * 2)) & 0xc);
}

void func_020015e0(u32 a) {
    data_0213c770.unk_16 = a;
    data_0213c770.unk_10 = (data_0213c770.unk_10 & ~0x3) | ((0xf78u >> (a * 2)) & 0x3);
}

void func_02001608(u32 a, u32 b, u32 c, u32 d) {
    data_0213c790.unk_0d = a;
    data_0213c790.unk_0e = b;
    data_0213c790.unk_0f = c;
    data_0213c790.unk_10 = d;
    data_0213c770.unk_12 |= 0x80;
}

void func_0200162c(u32 a, u32 b, u32 c, u32 d) {
    data_0213c790.unk_08 = a;
    data_0213c790.unk_09 = b;
    data_0213c790.unk_0a = c;
    data_0213c790.unk_0b = d;
    data_0213c770.unk_12 |= 0x40;
}

void func_02001650(u32 a, u32 b, u32 c, u32 d) {
    data_0213c790.unk_03 = a;
    data_0213c790.unk_04 = b;
    data_0213c790.unk_05 = c;
    data_0213c790.unk_06 = d;
    data_0213c770.unk_12 |= 0x20;
}

void func_02001674(u32 a, u32 b, u32 c, u32 d) {
    data_0213c770.unk_1e = a;
    data_0213c770.unk_1f = b;
    data_0213c790.unk_00 = c;
    data_0213c790.unk_01 = d;
    data_0213c770.unk_12 |= 0x10;
}

void func_02001698(u32 a) { data_0213c770.unk_1d = a; }
void func_020016a4(u32 a) { data_0213c770.unk_1c = a; }
void func_020016b0(u32 a) { data_0213c770.unk_1b = a; }
void func_020016bc(u32 a) { data_0213c770.unk_1a &= ~a; }
void func_020016cc(u32 a) { data_0213c770.unk_1a = a; }

void func_020016d8(BOOL a) {
    u32 v;
    if (a) {
        v = 0x8;
    } else {
        v = 0x200;
    }
    data_0213c770.unk_12 |= v;
}

void func_020016f4(BOOL a) {
    u32 v;
    if (a) {
        v = 0x4;
    } else {
        v = 0x100;
    }
    data_0213c770.unk_12 |= v;
}

void func_02001710(u32 a, BOOL b) {
    data_0213c790.unk_11 = a;
    func_020016d8(b);
}

void func_02001724(u32 a, BOOL b) {
    data_0213c790.unk_0c = a;
    func_020016f4(b);
}

void func_02001738(u32 a) {
    data_0213c790.unk_07 = a;
    data_0213c770.unk_12 |= 0x2;
}

void func_02001750(u32 a) {
    data_0213c790.unk_02 = a;
    data_0213c770.unk_12 |= 0x1;
}

void func_02001768(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x80;
    data_0213c770.unk_08 = a;
    data_0213c770.unk_0c = b;
}

void func_02001784(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x40;
    data_0213c6f0.unk_68 = a;
    data_0213c6f0.unk_6c = b;
}

void func_020017a4(u32 a, u32 b) {
    data_0213c770.unk_11 |= 0x20;
    data_0213c730.unk_0c = a;
    data_0213c730.unk_0e = b;
}

void func_020017c4(u32 a, u32 b) {
    data_0213c770.unk_11 |= 0x10;
    data_0213c730.unk_08 = a;
    data_0213c730.unk_0a = b;
}

void func_020017e4(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x8;
    data_0213c6f0.unk_40 = a;
    data_0213c6f0.unk_44 = b;
}

void func_02001804(s32 a, s32 b) {
    data_0213c770.unk_11 |= 0x4;
    data_0213c6f0.unk_20 = a;
    data_0213c6f0.unk_24 = b;
}

void func_02001824(u32 a, u32 b) {
    data_0213c770.unk_11 |= 0x2;
    data_0213c6f0.unk_04 = a;
    data_0213c6f0.unk_06 = b;
}

void func_02001844(Unk_02001844* p) {
    p->unk_00 = 0;
    p->unk_01 = 0;
    p->unk_02 = 0xff;
    p->unk_03 = 0xc0;
    p->unk_04 = 0;
}

void func_02001858(Unk_02001858* p) {
    p->unk_00 = 0x1000;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0x1000;
    p->unk_10 = 0;
    p->unk_14 = 0;
    p->unk_18 = 0;
    p->unk_1c = 0;
}

void func_02001874(Unk_02001874* p) {
    p->unk_00 = 0;
    p->unk_02 = 0;
}

void func_0200187c() {
    if (data_0213c770.unk_11 != 0) {
        if (data_0213c770.unk_11 & 1) {
            if ((*(volatile u32*)0x4000000 & 8) == 0) {
                *(volatile u32*)0x4000010 = (data_0213c6f0.unk_00 & 0x1ff) | ((data_0213c6f0.unk_02 << 16) & 0x1ff0000);
            } else {
                func_02110c98(data_0213c6f0.unk_00);
            }
        }
        if (data_0213c770.unk_11 & 2) {
            *(volatile u32*)0x4000014 = (data_0213c6f0.unk_04 & 0x1ff) | ((data_0213c6f0.unk_06 << 16) & 0x1ff0000);
        }
        if (data_0213c770.unk_11 & 4) {
            if (data_0213c770.unk_10 & 1) {
                func_02110afc(0x4000020, &data_0213c6f8, data_0213c6f0.unk_18, data_0213c6f0.unk_1c,
                              data_0213c6f0.unk_20, data_0213c6f0.unk_24);
            } else {
                *(volatile u32*)0x4000018 = (data_0213c6f0.unk_20 & 0x1ff) | ((data_0213c6f0.unk_24 << 16) & 0x1ff0000);
            }
        }
        if (data_0213c770.unk_11 & 8) {
            if (data_0213c770.unk_10 & 2) {
                func_02110afc(0x4000030, &data_0213c718, data_0213c6f0.unk_38, data_0213c6f0.unk_3c,
                              data_0213c6f0.unk_40, data_0213c6f0.unk_44);
            } else {
                *(volatile u32*)0x400001c = (data_0213c6f0.unk_40 & 0x1ff) | ((data_0213c6f0.unk_44 << 16) & 0x1ff0000);
            }
        }
        if (data_0213c770.unk_11 & 0x10) {
            *(volatile u32*)0x4001010 = (data_0213c730.unk_08 & 0x1ff) | ((data_0213c730.unk_0a << 16) & 0x1ff0000);
        }
        if (data_0213c770.unk_11 & 0x20) {
            *(volatile u32*)0x4001014 = (data_0213c730.unk_0c & 0x1ff) | ((data_0213c730.unk_0e << 16) & 0x1ff0000);
        }
        if (data_0213c770.unk_11 & 0x40) {
            if (data_0213c770.unk_10 & 4) {
                func_02110afc(0x4001020, &data_0213c740, data_0213c6f0.unk_60, data_0213c6f0.unk_64,
                              data_0213c6f0.unk_68, data_0213c6f0.unk_6c);
            } else {
                *(volatile u32*)0x4001018 = (data_0213c6f0.unk_68 & 0x1ff) | ((data_0213c6f0.unk_6c << 16) & 0x1ff0000);
            }
        }
        if (data_0213c770.unk_11 & 0x80) {
            if (data_0213c770.unk_10 & 8) {
                func_02110afc(0x4001030, &data_0213c760, data_0213c770.unk_00, data_0213c770.unk_04,
                              data_0213c770.unk_08, data_0213c770.unk_0c);
            } else {
                *(volatile u32*)0x400101c = (data_0213c770.unk_08 & 0x1ff) | ((data_0213c770.unk_0c << 16) & 0x1ff0000);
            }
        }
        data_0213c770.unk_11 = 0;
    }
    if (data_0213c770.unk_12 != 0) {
        if (data_0213c770.unk_12 & 0x1) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & ~0x3f) | data_0213c790.unk_02 | 0x20;
        }
        if (data_0213c770.unk_12 & 0x2) {
            *(volatile u16*)0x4000048 = (*(volatile u16*)0x4000048 & 0xffffc0ff) | (data_0213c790.unk_07 << 8) | 0x2000;
        }
        if (data_0213c770.unk_12 & 0x4) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | data_0213c790.unk_0c | 0x20;
        }
        if (data_0213c770.unk_12 & 0x100) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & ~0x3f) | data_0213c790.unk_0c;
        }
        if (data_0213c770.unk_12 & 0x8) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (data_0213c790.unk_11 << 8) | 0x2000;
        }
        if (data_0213c770.unk_12 & 0x200) {
            *(volatile u16*)0x4001048 = (*(volatile u16*)0x4001048 & 0xffffc0ff) | (data_0213c790.unk_11 << 8);
        }
        if (data_0213c770.unk_12 & 0x10) {
            u32 d = data_0213c790.unk_01;
            u32 b = data_0213c770.unk_1f;
            u32 a = data_0213c770.unk_1e;
            *(volatile u16*)0x4000040 = ((a << 8) & 0xff00) | (data_0213c790.unk_00 & 0xff);
            *(volatile u16*)0x4000044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (data_0213c770.unk_12 & 0x20) {
            u32 d = data_0213c790.unk_06;
            u32 b = data_0213c790.unk_04;
            u32 a = data_0213c790.unk_03;
            *(volatile u16*)0x4000042 = ((a << 8) & 0xff00) | (data_0213c790.unk_05 & 0xff);
            *(volatile u16*)0x4000046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (data_0213c770.unk_12 & 0x40) {
            u32 d = data_0213c790.unk_0b;
            u32 b = data_0213c790.unk_09;
            u32 a = data_0213c790.unk_08;
            *(volatile u16*)0x4001040 = ((a << 8) & 0xff00) | (data_0213c790.unk_0a & 0xff);
            *(volatile u16*)0x4001044 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        if (data_0213c770.unk_12 & 0x80) {
            u32 d = data_0213c790.unk_10;
            u32 b = data_0213c790.unk_0e;
            u32 a = data_0213c790.unk_0d;
            *(volatile u16*)0x4001042 = ((a << 8) & 0xff00) | (data_0213c790.unk_0f & 0xff);
            *(volatile u16*)0x4001046 = ((b << 8) & 0xff00) | (d & 0xff);
        }
        data_0213c770.unk_12 = 0;
    }
    u32 t = data_0213c790.unk_12;
    if (t & 0x20) {
        func_02110a64(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x10) {
        func_02110ae0(0x4000050, data_0213c790.unk_13, data_0213c790.unk_14, data_0213c790.unk_15,
                      0x10 - data_0213c790.unk_15);
    } else if (t & 0x2) {
        func_02110a64(0x4001050, 0x1f, 0x20, 0x10, 0x10, 0);
    } else if (t & 0x8) {
        func_02110ae0(0x4001050, data_0213c790.unk_13, data_0213c790.unk_14, data_0213c790.unk_15,
                      0x10 - data_0213c790.unk_15);
    } else if (t != 0) {
        func_02110abc(0x4001050, data_0213c790.unk_13, data_0213c790.unk_14);
    }
    data_0213c790.unk_12 = 0;
}

void func_02001d04() {
    func_0210f0e0(1, data_0213c770.unk_16, 1);
    func_0210f0c4(data_0213c770.unk_17);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffffe0ff) | (data_0213c770.unk_14 << 8);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffffe0ff) | (data_0213c770.unk_15 << 8);
    *(volatile u32*)0x4000000 = (*(volatile u32*)0x4000000 & 0xffff1fff) | (data_0213c770.unk_18 << 13);
    *(volatile u32*)0x4001000 = (*(volatile u32*)0x4001000 & 0xffff1fff) | (data_0213c770.unk_19 << 13);
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & ~0x3f) | data_0213c770.unk_1a | 0x20;
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & ~0x3f) | data_0213c770.unk_1b | 0x20;
    *(volatile u16*)0x400004a = (*(volatile u16*)0x400004a & 0xffffc0ff) | (data_0213c770.unk_1c << 8);
    *(volatile u16*)0x400104a = (*(volatile u16*)0x400104a & 0xffffc0ff) | (data_0213c770.unk_1d << 8);
}

void func_02001db8() {}

void func_02001dbc() {
    data_0213c770.unk_14 = 0;
    data_0213c770.unk_15 = 0;
    data_0213c770.unk_18 = 0;
    data_0213c770.unk_19 = 0;
    data_0213c770.unk_1a = 0;
    data_0213c770.unk_1b = 0;
    data_0213c770.unk_1c = 0;
    data_0213c770.unk_1d = 0;
    data_0213c770.unk_16 = 0;
    data_0213c770.unk_17 = 1;
    func_02001874((Unk_02001874*)&data_0213c6f0);
    func_02001874(&data_0213c6f4);
    func_02001858(&data_0213c6f8);
    func_02001858(&data_0213c718);
    func_02001874(&data_0213c738);
    func_02001874(&data_0213c73c);
    func_02001858(&data_0213c740);
    func_02001858(&data_0213c760);
    func_02001844(&data_0213c78e);
    func_02001844(&data_0213c793);
    func_02001844(&data_0213c798);
    func_02001844(&data_0213c79d);
    data_0213c770.unk_10 = 0;
    data_0213c770.unk_11 = 0xff;
    data_0213c770.unk_12 = 0xff;
    data_0213c790.unk_12 = 0;
    data_0213c790.unk_14 = 0;
    func_020015b8(0);
    func_020015e0(1);
}
}
