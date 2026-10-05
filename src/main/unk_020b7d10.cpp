#include "types.h"
#include "sys/ProcProfile.h"
#include "Unk_020d8c7c.h"

// Touch state of the previous frame: held flags (bss).
extern "C" { extern u8 gTouchPrevHeld; }
u8 gTouchPrevHeld;

// Touch state of the previous frame: changed flags (bss).
extern "C" { extern u8 gTouchPrevChanged; }
u8 gTouchPrevChanged;

// Touch state (bss): the hold counter here and, above, the previous frame's held and changed flags. Their user is the
// touch file unk_020b7d84.cpp (Touch_Update), whose bss follows; defined there, its 16 one-byte objects reach no
// original order (linkprep data: best 14/16), so they are owned by the only other file between the neighbours.
extern "C" { extern u8 gTouchHoldFrames; }
u8 gTouchHoldFrames;

// Vtable 0x020e4540
class DummyProcC8 : public GameProc {
public:
    DummyProcC8() {}
};

extern "C" DummyProcC8 *DummyProcC8_Create() {
    return new DummyProcC8();
}

// Process profile of DummyProcC8_Create (gProfileTable entry): factory, execute and draw priorities.
ProcProfile sDummyProcC8Profile = {(void *(*)())DummyProcC8_Create, 0xc8, 0xc6};
