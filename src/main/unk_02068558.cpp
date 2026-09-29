#include "types.h"

extern "C" void func_02119d78(void *p);

struct Unk_02068558_File {
    u32 v[0x12];
};

class Unk_02068808 {
public:
    BOOL func_02068558(s32 a, u32 b, s32 c, u8 d);
    BOOL func_02068680(void *file);
    BOOL func_020686e4(void *file);
    BOOL func_02068748(void *file, BOOL alt);
    void func_020685c4(s32 idx);
    void func_0206860c(s32 a, BOOL b);

    /* 0x00 */ u16 *unk_00;
};

BOOL Unk_02068808::func_02068558(s32 a, u32 b, s32 c, u8 d) {
    BOOL result = FALSE;
    BOOL alt = (b == 0 && a == 0) ? TRUE : FALSE;
    Unk_02068558_File file;
    func_02119d78(&file);
    if (func_02068748(&file, alt)) {
        if (func_020686e4(&file)) {
            if (func_02068680(&file)) {
                if (alt) {
                    func_0206860c(c, d);
                } else {
                    func_020685c4(a);
                }
                result = TRUE;
            }
        }
    }
    return result;
}
