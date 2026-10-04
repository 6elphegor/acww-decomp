#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/ProcProfile.h"

class Unk_ov056_02258e70 : public GameProc {
public:
    Unk_ov056_02258e70() {}
};


extern "C" Unk_ov056_02258e70 *func_ov056_02258de0();

extern "C" ProcProfile data_ov056_02258e60 = {(void *(*)())func_ov056_02258de0, 0xcd, 0xc9};


extern "C" Unk_ov056_02258e70 *func_ov056_02258de0() {
    return new Unk_ov056_02258e70;
}

