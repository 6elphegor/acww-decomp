#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/ProcProfile.h"

class DummyProcCD : public GameProc {
public:
    DummyProcCD() {}
};


extern "C" DummyProcCD *DummyProcCD_Create();

extern "C" ProcProfile sDummyProcCDProfile = {(void *(*)())DummyProcCD_Create, 0xcd, 0xc9};


extern "C" DummyProcCD *DummyProcCD_Create() {
    return new DummyProcCD;
}

