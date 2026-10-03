#include "types.h"

class Unk_020d9248 {
public:
    Unk_020d9248();
    virtual ~Unk_020d9248() {}
    void setPerspective(s32 a, u16 b, s32 c, s32 d);

    /* 0x04 */ u8 unk_04[0x48];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u16 unk_58;
};
extern "C" void _ZN12Unk_02039eb810calcPlanesEv(Unk_020d9248 *o);

Unk_020d9248::Unk_020d9248() {
    setPerspective(0x1555, 0xe38, 0x1000, 0x1388000);
}

void Unk_020d9248::setPerspective(s32 a, u16 b, s32 c, s32 d) {
    unk_4c = a;
    unk_58 = b;
    unk_50 = c;
    unk_54 = d;
    _ZN12Unk_02039eb810calcPlanesEv(this);
}
