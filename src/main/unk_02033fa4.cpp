#include "types.h"

extern const s16 data_020c8ad4[4];
extern const s16 data_020c8adc[4];

const s16 data_020c8ad4[4] = {0x41, 0, 1, 0};
const s16 data_020c8adc[4] = {0, 0, 0, 0};

class Unk_02034014 {
public:
    Unk_02034014 *func_02034014();
    ~Unk_02034014();
    void func_02033fa4();
    void func_02033fd8(u32 i, s16 a, s16 b);
    void func_02033fe4();

    s16 unk_00[3];
    s16 unk_06[3];
    s16 unk_0c[3];
    u8 unk_12;
};

void Unk_02034014::func_02033fe4()
{
    u32 i;
    unk_12 = 0;
    for (i = 0; i < 3; i++) {
        unk_00[i] = unk_06[i] = unk_0c[i] = 0;
    }
}

void Unk_02034014::func_02033fd8(u32 i, s16 a, s16 b)
{
    unk_06[i] = a;
    unk_0c[i] = b;
}

void Unk_02034014::func_02033fa4()
{
    u8 i;
    for (i = 0; i < 3; i++) {
        func_02033fd8(i, data_020c8adc[i], data_020c8ad4[i]);
    }
}
