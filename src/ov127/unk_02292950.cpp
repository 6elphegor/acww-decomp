#include "types.h"

extern "C" {
extern void *data_021f482c;
extern u8 data_ov127_02293ff4[];
extern u8 data_ov127_0229400c[];
extern u8 data_ov127_02294024[];
extern u8 data_ov127_0229403c[];
extern u8 data_ov127_02294054[];
extern u8 data_ov127_0229406c[];
extern u8 data_ov127_02294080[];

void func_020026c4(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020641b4(void *a, void *b, u32 c);
void func_020024f0(void *a, u32 b, u32 c, u32 d);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_020affac(void *p);
void func_020b8800(void *p);

void func_ov127_02292950() {
    void *h = data_021f482c;
    func_020026c4(data_ov127_02293ff4, h, 8, 5, 5, 9);
    func_0200261c(data_ov127_0229400c, h, 8, 0xc0, 0xc0, 0x13f);
}

void func_ov127_02292994(u8 *s, u32 v) {
    void *h = data_021f482c;
    s[0x2833] = v;
    func_020026c4(data_ov127_02294024, h, s[0x2833], 4, 8, 0xb);
    func_0200261c(data_ov127_0229403c, h, s[0x2833], 0x20, 0x20, 0xbf);
    func_020641b4(data_ov127_02294054, s + 0x2024, 0x800);
    func_020024f0(s + 0x2024, s[0x2833], 0x800, 0);
}

void func_ov127_02292a0c(u8 *s, u32 v) {
    s[0x2832] = v;
    func_0200226c(s[0x2832], 1, 0, 0);
    func_0200261c(data_ov127_0229406c, data_021f482c, s[0x2832], 0x10, 0x10, 0x1f);
    func_020641b4(data_ov127_02294080, s + 0x24, 0x1000);
    func_020affac(s + 0x24);
    func_020024f0(s + 0x24, s[0x2832], 0x1000, 0);
}

void func_ov127_02292a7c(u8 *s) {
    *(u16 *)(s + 0x2830) = 0;
    *(u16 *)(s + 0x2824) = 0;
    *(u16 *)(s + 0x2826) = 0;
    *(u16 *)(s + 0x282e) = 0;
    *(u16 *)(s + 0x2828) = 0;
}

void func_ov127_02292aa8() {}

void *func_ov127_02292aac(void *s) {
    func_020b8800(s);
    return s;
}
}
