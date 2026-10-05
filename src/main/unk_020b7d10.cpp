#include "types.h"
#include "Unk_020d8c7c.h"

// Vtable 0x020e4540
class DummyProcC8 : public GameProc {
public:
    DummyProcC8() {}
};

extern "C" DummyProcC8 *DummyProcC8_Create() {
    return new DummyProcC8();
}
