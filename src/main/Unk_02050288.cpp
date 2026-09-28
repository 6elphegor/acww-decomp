#include "types.h"

class Unk_02050288;

struct Unk_02050288_FontInfo {
    /* 0x00 */ u32 unk_00; // glyph count
    /* 0x04 */ u16 unk_04; // cell width
    /* 0x06 */ u16 unk_06; // cell height
};

struct Unk_02050288_Glyph {
    /* 0x00 */ u16 unk_00; // character code
    /* 0x02 */ u8 unk_02;  // width
    /* 0x03 */ u8 unk_03;
};

struct Unk_02050288_Font {
    /* 0x00 */ Unk_02050288_FontInfo *unk_00;
    /* 0x04 */ Unk_02050288_Glyph *unk_04;
    /* 0x08 */ u8 *unk_08; // 1bpp glyph bitmaps
    /* 0x0c */ Unk_02050288_Font *unk_0c; // secondary font, for glyph indices with bit 31 set
    /* 0x10 */ u8 unk_10;
};

typedef void (*Unk_02050288_LoadFunc)(void *src, u32 offset, u32 size);

extern "C" {
void *func_02133ef8(void *ptr, u32 size);
void *func_02100248(void *list, void *prev);
void func_02100260(void *list, void *obj);
void func_02100444(void *list, u32 offset);
void func_020e85fc(void *heap, void *ptr);
void func_020e8c88(void *heap);
void *func_020e8e7c(u32 size, void *parent);
void func_021145cc(void *ptr, u32 size);
void func_02115fb4(void *dst, u32 value, u32 size);
void func_02116048(const void *src, void *dst, u32 size);
s32 func_02050cb4(Unk_02050288_Font *font, s32 c);
u32 func_02050d9c(Unk_02050288_Font *font, u32 c);
const u8 *func_02050d54(Unk_02050288_Font *font, u32 c);
void func_02050dd8(Unk_02050288_Font *font);
void func_02050e0c(Unk_02050288_Font *font, const char *name, void *arg2, Unk_02050288_Font *ext, u8 arg4);

extern Unk_02050288_Font data_021c48e8;
extern Unk_02050288_Font data_021c48fc;
extern Unk_02050288_Font data_021c4910;
extern Unk_02050288_Font data_021c4924;
extern Unk_02050288_Font data_021c4938;
extern u8 data_021c48c4[];
extern void *data_021c489c;
extern void *data_021f482c;
extern u8 data_021c494c[];
extern const Unk_02050288_LoadFunc data_020ca4ac[];
extern const Unk_02050288_LoadFunc data_020ca4c4[];
extern const char data_020dbc88[];
extern const char data_020dbc94[];
extern const char data_020dbc9c[];
extern const char data_020dbca4[];
extern const char data_020dbcac[];
extern u16 data_020dbac8[];
extern const u8 data_020ca480[];
extern const u8 data_020ca484[];
extern const u8 data_020ca48c[];
extern const u8 data_020ca490[];
extern const u8 data_020ca494[];
extern const u8 data_020ca498[];
extern const u8 data_020ca49c[];
extern const u8 data_020ca4dc[];
extern const u8 data_020ca558[];

void func_02050428(void);
void func_0205046c(void);
void func_020509dc(s32 arg0);
void func_02050a54(void);
void func_02050a5c(void);
void func_02050a68(void);
void func_02050ac4(void);
BOOL func_02050244(u8 *out, u32 c);
}

// A nested aggregate: a flat struct { u32 a, b; } is copied with interleaved loads and stores instead
struct Unk_02050288_08 {
    u32 unk_00[2];
};

// Text drawn into the 4bpp tile buffer data_021c494c with one of the fonts, then copied to VRAM
class Unk_02050288 {
public:
    Unk_02050288(s32 arg1, s32 arg2, s32 arg3);
    Unk_02050288(u32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_02050288();
    virtual void func_08() = 0; // draws the text
    virtual u32 func_0c() = 0;  // text width in pixels

    u32 func_020506cc();
    void func_02050638();
    void func_020505cc(u32 x);
    void func_02050510();
    BOOL func_020504f8();
    BOOL func_020504e0();
    u8 func_020504ac();
    u8 func_02050478();
    void func_020507d8();
    void func_020508b4(u32 c);
    void func_0205091c();
    void func_02050944();
    void func_02050a34();
    void func_02050b68();
    void func_02050b6c(u32 c);
    void func_02050ba8();
    u32 func_02050bb4();
    void func_02050bc8(u8 arg1, u8 arg2, u32 arg3, u32 arg4, u8 arg5, u8 arg6, u32 arg7, u32 arg8);
    void func_02050c04(u8 arg1, u8 arg2, u32 arg3, u32 arg4);
    void func_02050c20();
    void func_02050c44();
    void func_02050c68(s32 arg1);
    void func_02050c90();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02050288_08 unk_08;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ Unk_02050288_Font *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
    /* 0x3a */ u8 unk_3a;
    /* 0x3b */ u8 unk_3b;
    /* 0x3c */ u8 unk_3c;
    /* 0x3d */ u8 unk_3d;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u32 unk_48;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 unk_6c;
    /* 0x70 */ u32 unk_70;
    /* 0x74 */ u8 unk_74;
    /* 0x75 */ u8 unk_75;
    /* 0x78 */ u32 unk_78;
};

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

void Unk_02050288::func_02050c90() {
    unk_54 = 1;
    if (unk_58 == 2) {
        func_02050944();
        unk_54 = 0;
    }
}

void Unk_02050288::func_02050c68(s32 arg1) {
    unk_5c = arg1;
    if (unk_58 == 2 && unk_5c != -1) {
        func_02050510();
        unk_5c = -1;
    }
}

void Unk_02050288::func_02050c44() {
    u32 width = func_0c();
    u32 total = unk_20 * 8;
    if (total > width) {
        unk_30 = (total - width) / 2;
    } else {
        unk_30 = 0;
    }
}

void Unk_02050288::func_02050c20() {
    u32 width = func_0c();
    u32 total = unk_20 * 8;
    if (total > width) {
        unk_30 = total - width;
    } else {
        unk_30 = 0;
    }
}

void Unk_02050288::func_02050c04(u8 arg1, u8 arg2, u32 arg3, u32 arg4) {
    unk_3a = arg1;
    unk_3b = arg2;
    unk_40 = arg3;
    unk_44 = arg4;
}

void Unk_02050288::func_02050bc8(u8 arg1, u8 arg2, u32 arg3, u32 arg4, u8 arg5, u8 arg6, u32 arg7, u32 arg8) {
    unk_3a = arg1;
    unk_3b = arg2;
    unk_40 = arg3;
    unk_44 = arg4;
    unk_3c = arg5;
    unk_3d = arg6;
    unk_48 = arg7;
    unk_4c = arg8;
}

u32 Unk_02050288::func_02050bb4() {
    return (func_0c() + 7) >> 3;
}

void Unk_02050288::func_02050ba8() {
    unk_68 = 0;
    unk_64 = -1;
}

void Unk_02050288::func_02050b6c(u32 c) {
    unk_64 = func_02050cb4(unk_28, c);
    if (unk_64 == -1) {
        unk_64 = func_02050cb4(unk_28, 0x40);
    }
    unk_68 += func_02050d9c(unk_28, unk_64);
    unk_68 += unk_34;
}

void Unk_02050288::func_02050b68() {}

void func_02050ac4(void) {
    void *heap;

    func_02050e0c(&data_021c48e8, data_020dbc88, 0, 0, 1);
    func_02050e0c(&data_021c4910, data_020dbc94, 0, &data_021c48e8, 0);
    func_02050e0c(&data_021c4924, data_020dbc9c, 0, 0, 0);
    func_02050e0c(&data_021c4938, data_020dbca4, 0, 0, 0);
    func_02050e0c(&data_021c48fc, data_020dbcac, 0, 0, 0);
    heap = func_020e8e7c(0x1800, data_021f482c);
    data_021c489c = heap;
    if (heap != NULL) {
        func_02100444(data_021c48c4, 8);
    }
}

void func_02050a68(void) {
    if (data_021c489c != NULL) {
        func_02050428();
        func_020e8c88(data_021c489c);
        data_021c489c = NULL;
    }
    func_02050dd8(&data_021c48e8);
    func_02050dd8(&data_021c4910);
    func_02050dd8(&data_021c4924);
    func_02050dd8(&data_021c4938);
    func_02050dd8(&data_021c48fc);
}

void func_02050a5c(void) {
    func_020509dc(1);
}

void func_02050a54(void) {
    func_02050428();
}

void Unk_02050288::func_02050a34() {
    func_02115fb4(data_021c494c, (u8)(unk_39 | (unk_39 << 4)), 0x400);
}

void func_020509dc(s32 arg0) {
    Unk_02050288 *obj = NULL;
    for (;;) {
        obj = (Unk_02050288 *)func_02100248(data_021c48c4, obj);
        if (obj == NULL) {
            break;
        }
        if (obj->unk_58 != arg0) {
            continue;
        }
        if (obj->unk_5c != -1) {
            obj->func_02050510();
            obj->unk_5c = -1;
        }
        if (obj->unk_54) {
            obj->func_02050944();
            obj->unk_54 = 0;
        }
    }
}

void Unk_02050288::func_02050944() {
    u32 height = unk_28->unk_00->unk_06;
    u32 limit = unk_24 << 3;

    unk_74 = unk_38;
    if (unk_18 != -1) {
        unk_70 = unk_18 << 5;
    } else if (unk_1c != 0) {
        unk_70 = 0;
    }
    unk_75 = 0;
    for (unk_6c = 0; unk_6c < height && unk_6c < limit; unk_6c += 8) {
        u32 next = unk_6c + 8;
        unk_75 = (next >= height || next >= limit) ? 1 : 0;
        func_08();
        if (unk_55) {
            unk_70 += 0x400;
        } else {
            unk_70 += unk_60;
        }
    }
}

void Unk_02050288::func_0205091c() {
    func_02050a34();
    unk_38 = unk_74;
    unk_64 = -1;
    unk_68 = unk_30;
    unk_78 = 0;
}

void Unk_02050288::func_020508b4(u32 c) {
    u32 start;

    unk_64 = func_02050cb4(unk_28, c);
    if (unk_64 == -1) {
        unk_64 = func_02050cb4(unk_28, 0x40);
    }
    start = unk_68;
    unk_68 += func_020506cc();
    func_02050638();
    unk_68 += unk_34;
    if (unk_75 && unk_57) {
        func_020505cc(start);
    }
    unk_78++;
}

void Unk_02050288::func_020507d8() {
    u32 size;
    u8 *dst;
    u8 *src;
    u8 *end;
    u8 bg;
    u8 bgHigh;

    size = unk_60;
    if (size > 0x400) {
        size = 0x400;
    }
    func_021145cc(data_021c494c, size);
    if (unk_50 == 2 || unk_50 == 3) {
        data_020ca4ac[unk_2c](data_021c494c, unk_70, size);
    }
    if (unk_50 == 1 || unk_50 == 3) {
        data_020ca4c4[unk_2c](data_021c494c, unk_70, size);
    }
    if (unk_50 == 0) {
        if (unk_56) {
            dst = (u8 *)(unk_1c + unk_70);
            src = data_021c494c;
            end = src + size;
            bg = unk_39;
            bgHigh = bg << 4;
            for (; src < end; src++, dst++) {
                if ((*dst & 0xf0) == bgHigh) {
                    *dst &= 0xf;
                    *dst |= *src & 0xf0;
                }
                if ((*dst & 0xf) == bg) {
                    *dst &= 0xf0;
                    *dst |= *src & 0xf;
                }
            }
        } else {
            func_02116048(data_021c494c, (void *)(unk_1c + unk_70), size);
        }
    }
}

u32 Unk_02050288::func_020506cc() {
    u32 glyphWidth;
    const u8 *glyph;
    u8 mask;
    u8 fg;
    u8 bg;
    u32 width;
    u32 row;
    u32 x;
    u32 pos;
    u32 tile;
    u32 index;
    u32 bit;
    u32 color;
    BOOL drawBackground;
    u8 *pixel;
    u32 start = 0;

    width = unk_28->unk_00->unk_04;
    glyphWidth = func_02050d9c(unk_28, unk_64);
    glyph = func_02050d54(unk_28, unk_64);
    mask = 0x80;
    pos = (unk_6c * width) >> 3;

    drawBackground = TRUE;
    if (!func_020504f8() && !func_020504e0()) {
        drawBackground = FALSE;
    }
    fg = func_020504ac();
    bg = func_02050478();

    for (row = 0; row < 8; row++) {
        for (x = start; x < width; x++) {
            if (x < glyphWidth) {
                bit = glyph[pos] & mask;
                color = bit ? fg : bg;
                if (bit || drawBackground) {
                    u32 px = unk_68 + x;
                    tile = px >> 3;
                    index = (row * 8 + (px - tile * 8)) >> 1;
                    if (tile < 0x20) {
                        pixel = &data_021c494c[tile * 32] + index;
                        if (px & 1) {
                            *pixel &= ~0xf0;
                            *pixel |= (u8)(color << 4);
                        } else {
                            *pixel &= ~0xf;
                            *pixel |= (u8)color;
                        }
                    }
                }
            }
            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                pos++;
            }
        }
    }
    return glyphWidth;
}

void Unk_02050288::func_02050638() {
    u32 color;
    u32 row;
    u32 x;
    u32 px;
    u32 tile;
    u32 index;
    u8 *pixel;

    if (func_020504f8() || func_020504e0()) {
        color = func_02050478();
        for (row = 0; row < 8; row++) {
            for (x = 0; x < unk_34; x++) {
                px = unk_68 + x;
                tile = px >> 3;
                index = (row * 8 + (px - tile * 8)) >> 1;
                if (tile < 0x20) {
                    pixel = &data_021c494c[tile * 32] + index;
                    if (px & 1) {
                        *pixel &= ~0xf0;
                        *pixel |= (u8)(color << 4);
                    } else {
                        *pixel &= ~0xf;
                        *pixel |= (u8)color;
                    }
                }
            }
        }
    }
}

void Unk_02050288::func_020505cc(u32 x) {
    u32 high;
    u32 color;
    u32 tile;
    u32 index;
    u8 *pixel;

    color = func_020504ac();
    high = color << 4;
    for (; x < unk_68; x++) {
        tile = x >> 3;
        index = ((x - tile * 8) + 0x30) >> 1;
        if (tile < 0x20) {
            pixel = &data_021c494c[tile * 32] + index;
            if (x & 1) {
                *pixel &= ~0xf0;
                *pixel |= (u8)high;
            } else {
                *pixel &= ~0xf;
                *pixel |= (u8)color;
            }
        }
    }
}

void Unk_02050288::func_02050510() {
    u32 size;
    u32 offset;
    u32 i;

    func_02050a34();

    if (unk_5c == 0) {
        size = unk_60;
    } else {
        size = unk_5c << 5;
    }
    if (size > 0x400) {
        size = 0x400;
    }

    offset = 0;
    if (unk_18 != -1) {
        offset = unk_18 << 5;
    } else if (unk_1c != 0) {
        offset = 0;
    }

    for (i = 0; i < unk_24; i++) {
        func_021145cc(data_021c494c, size);
        if (unk_50 == 2 || unk_50 == 3) {
            data_020ca4ac[unk_2c](data_021c494c, offset, size);
        }
        if (unk_50 == 1 || unk_50 == 3) {
            data_020ca4c4[unk_2c](data_021c494c, offset, size);
        }
        if (unk_50 == 0) {
            func_02116048(data_021c494c, (void *)(unk_1c + offset), size);
        }
        if (unk_55) {
            offset += 0x400;
        } else {
            offset += unk_60;
        }
    }
}

BOOL Unk_02050288::func_020504f8() {
    BOOL result = FALSE;
    if (unk_78 >= unk_40 && unk_78 < unk_40 + unk_44) {
        result = TRUE;
    }
    return result;
}

BOOL Unk_02050288::func_020504e0() {
    BOOL result = FALSE;
    if (unk_78 >= unk_48 && unk_78 < unk_48 + unk_4c) {
        result = TRUE;
    }
    return result;
}

u8 Unk_02050288::func_020504ac() {
    u8 result = unk_38;
    if (func_020504f8()) {
        result = unk_3a;
    } else if (func_020504e0()) {
        result = unk_3c;
    }
    return result;
}

u8 Unk_02050288::func_02050478() {
    u8 result = unk_39;
    if (func_020504f8()) {
        result = unk_3b;
    } else if (func_020504e0()) {
        result = unk_3d;
    }
    return result;
}

void func_0205046c(void) {
    func_020509dc(0);
}

void func_02050428(void) {
    Unk_02050288 *obj;
    for (;;) {
        obj = (Unk_02050288 *)func_02100248(data_021c48c4, NULL);
        if (obj == NULL) {
            break;
        }
        func_02100260(data_021c48c4, obj);
        obj->~Unk_02050288();
        func_020e85fc(data_021c489c, obj);
    }
}

Unk_02050288::Unk_02050288(u32 arg1, s32 arg2, s32 arg3) {
    Unk_02050288_08 zero;

    unk_04 = 0;
    unk_08 = *(Unk_02050288_08 *)func_02133ef8(&zero, sizeof(zero));
    unk_10 = 0;
    unk_18 = arg1;
    unk_1c = 0;
    unk_20 = arg2;
    unk_24 = arg3;
    unk_28 = &data_021c4910;
    unk_2c = 2;
    unk_30 = 0;
    unk_34 = 1;
    unk_38 = 1;
    unk_39 = 0xf;
    unk_3a = 0;
    unk_3b = 0;
    unk_3c = 0;
    unk_3d = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 1;
    unk_54 = 0;
    unk_55 = 0;
    unk_56 = 0;
    unk_57 = 0;
    unk_58 = 0;
    unk_5c = -1;
    unk_60 = arg2 << 5;
    unk_64 = -1;
    unk_68 = 0;
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 1;
    unk_75 = 0;
    unk_78 = 0;
}

Unk_02050288::Unk_02050288(s32 arg1, s32 arg2, s32 arg3) {
    Unk_02050288_08 zero;

    unk_04 = 0;
    unk_08 = *(Unk_02050288_08 *)func_02133ef8(&zero, sizeof(zero));
    unk_10 = 0;
    unk_18 = -1;
    unk_1c = arg1;
    unk_20 = arg2;
    unk_24 = arg3;
    unk_28 = &data_021c4910;
    unk_2c = 5;
    unk_30 = 0;
    unk_34 = 1;
    unk_38 = 1;
    unk_39 = 0xf;
    unk_3a = 0;
    unk_3b = 0;
    unk_3c = 0;
    unk_3d = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_55 = 0;
    unk_56 = 0;
    unk_57 = 0;
    unk_58 = 0;
    unk_5c = -1;
    unk_60 = arg2 << 5;
    unk_64 = -1;
    unk_68 = 0;
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 1;
    unk_75 = 0;
    unk_78 = 0;
}

Unk_02050288::~Unk_02050288() {}

extern "C" {

BOOL func_02050278(char *out, u32 index) {
    *out = data_020ca558[index];
    return TRUE;
}

BOOL func_02050244(u8 *out, u32 c);

BOOL func_0205026c(u8 *out, const u8 *c) {
    return func_02050244(out, *c);
}

BOOL func_02050244(u8 *out, u32 c) {
    const u8 *entry = data_020ca558;
    u32 i = 0;
    while (i < 0xe0) {
        if (*entry == c) {
            *out = i;
            return TRUE;
        }
        i++;
        entry++;
    }
}

const u8 *func_0205023c(void) { return data_020ca494; }
const u8 *func_02050234(void) { return data_020ca48c; }
const u8 *func_0205022c(void) { return data_020ca480; }
const u8 *func_02050224(void) { return data_020ca49c; }
const u8 *func_0205021c(void) { return data_020ca490; }
const u8 *func_02050214(void) { return data_020ca484; }
const u8 *func_0205020c(void) { return data_020ca498; }
int func_02050208(void) { return 0; }
int func_02050204(void) { return 0; }

u32 func_020501e8(u32 key) {
    const u8 *entry = data_020ca4dc;
    while (*entry != 0) {
        if (key == *entry) {
            return entry[1];
        }
        entry += 2;
    }
    return key;
}

u16 func_020501d4(u32 index) {
    u16 result = 0;
    if (index < 0xe0) {
        result = data_020dbac8[index];
    }
    return result;
}

}
