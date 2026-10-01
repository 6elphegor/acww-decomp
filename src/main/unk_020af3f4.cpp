// mwcc-flags: -str reuse
#include "types.h"


extern "C" {
void *func_0209750c();
void *_ZN12Unk_0209865c13func_020986c8Ev(void *a);
BOOL func_0203c4cc(void *a, void *b);
u8 *func_02063b8c(s32 a);
void func_0203ce4c(s32 a, void *b);
u32 _ZN12Unk_0209865c13func_0209888cEv(void *a);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
void _ZN12Unk_0206555413func_02065588Etj(void *a, u32 b, s32 c);
void func_02096a50(void *a, s32 b);
void func_020af488(u32 a);
extern u8 data_021ee25c[];
extern const u16 data_020d09cc[];
extern u32 data_020e2eb8, data_020e2ebc;
}
struct Unk_020dd324 { Unk_020dd324(u16 *s); ~Unk_020dd324(); u8 d[0x24]; };
struct Unk_020dd458 { Unk_020dd458(); ~Unk_020dd458(); u8 d[0xf4]; };

struct Loc488 { u8 a; u8 pad; u16 b; };
extern "C" void func_020af488(u32 idx) {
    if (idx < 13) {
        Loc488 l;
        l.b = data_020d09cc[idx];
        void *obj = func_0209750c();
        if (obj) {
            Unk_020dd458 big;
            l.a = idx;
            Unk_020dd324 s(&l.b);
            func_0203ce4c(1, &s);
            func_020656dc(&big, &l, "sp_npc_snowman", &data_020e2eb8, &data_020e2ebc, _ZN12Unk_0209865c13func_0209888cEv(obj));
            _ZN12Unk_0206555413func_02065588Etj(&big, l.b, 1);
            func_02096a50(&big, 0);
        }
    }
}

extern "C" void func_020af3fc() {
    void *obj = func_0209750c();
    if (obj) {
        u32 count = 0;
        for (u32 i = 0; i < 13; i++) {
            u16 t = data_020d09cc[i];
            if (!func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(obj), &t)) count++;
        }
        if (count) {
            u32 r = (u32)func_02063b8c(count);
            u32 c = 0;
            for (u32 i = 0; i < 13; i++) {
                u16 t = data_020d09cc[i];
                if (!func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(obj), &t)) {
                    if (c == r) {
                        func_020af488(i);
                        return;
                    }
                    c++;
                }
            }
        }
        func_020af488((u32)func_02063b8c(13));
    }
}

extern "C" u8 *func_020af3f4() { return data_021ee25c; }


u32 data_020e2ebc = 0x11;
u32 data_020e2eb8 = 0xa;

const u16 data_020d09cc[13] = {0x31f8, 0x31f4, 0x31e0, 0x31ec, 0x3204, 0x31f0, 0x31fc, 0x31e4, 0x31e8, 0x3200, 0x1150, 0x110c, 0x36d4};
