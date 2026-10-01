#include "types.h"

class Unk_02034014 {
public:
    Unk_02034014();
    ~Unk_02034014();
    void func_02033fa4();
    void func_02033fd8(u32 i, s16 a, s16 b);
    void func_02033fe4();

    s16 unk_00[3];
    s16 unk_06[3];
    s16 unk_0c[3];
    u8 unk_12;
};

struct Unk_02034014_Col {
    u8 r, g, b, a;
    Unk_02034014_Col(u8 r_, u8 g_, u8 b_, u8 a_) : r(r_), g(g_), b(b_), a(a_) {}
};

extern "C" void func_02034044()
{
}

s32 data_021c1a14;
s32 data_021c1a10;

extern "C" void func_02034038(s32 v)
{
    data_021c1a14 = v;
}

extern "C" void func_0203402c(s32 v)
{
    data_021c1a10 = v;
}

Unk_02034014::Unk_02034014()
{
    func_02033fe4();
    func_02033fa4();
}

Unk_02034014::~Unk_02034014()
{
}

Unk_02034014_Col data_021c1a0c(31, 20, 20, 31);
Unk_02034014_Col data_021c1a04(20, 20, 31, 31);
Unk_02034014_Col data_021c1a08(31, 31, 20, 31);
Unk_02034014_Col data_021c1a20(20, 31, 20, 31);
Unk_02034014_Col data_021c1a1c(20, 31, 31, 31);
Unk_02034014_Col data_021c1a18(20, 24, 24, 31);
Unk_02034014 data_021c1a30;
