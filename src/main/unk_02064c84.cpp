#include "types.h"

extern u8 data_020e416c;
struct Unk_02064c84_G {
    u8 pad_00[0x178];
    u8 unk_178;
};
extern Unk_02064c84_G *data_021c9f44;
extern "C" u8 func_020ba9f8(u32 x);

extern "C" u8 func_02064c84(u32 x) {
    BOOL b = (data_020e416c == 1);
    if (b) {
        if (x == 0) {
            return data_021c9f44->unk_178;
        }
        return func_020ba9f8(x);
    }
    return func_020ba9f8(x);
}
