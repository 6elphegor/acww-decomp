#include "types.h"

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020ddf44 : public Unk_020e2a78 {
public:
    Unk_020ddf44();
    virtual ~Unk_020ddf44();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206cc20(u8 a, u8 b, u32 c);

    /* 0x12 */ u8 unk_12[0x3a];
};

class Unk_0206ce98 {
public:
    void func_0206d018(u32 a, u32 b, u32 c);

    /* 0x000 */ u8 unk_000[0x98];
    /* 0x098 */ u8 unk_098[4][0x4c];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
};

void Unk_0206ce98::func_0206d018(u32 a, u32 b, u32 c) {
    s32 i;
    u32 pos, cnt, end, len;
    pos = 0;
    for (i = 0; i < 4; i++) {
        len = unk_1f0[i + 1] - unk_1f0[i];
        if (len == 0) break;
        if (a >= pos) {
            end = pos + len;
            if (a < end) {
                if (end > a + b) cnt = b;
                else cnt = len - (a - pos);
                ((Unk_020ddf44 *)unk_098[i])->func_0206cc20(a - pos, cnt, c);
                a = (u8)end;
                b -= cnt;
                if (b == 0) break;
            }
        }
        pos += len;
    }
}
