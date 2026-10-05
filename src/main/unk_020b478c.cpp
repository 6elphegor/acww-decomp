#include "types.h"
#include "sys/ProcProfile.h"
#include "Unk_020d8c7c.h"
#include "sys/SceneBase.h"


// Vtable 0x020e4124
class DummyScene4 : public SceneBase {
public:
};

extern "C" DummyScene4 *DummyScene4_Create(void) { return new DummyScene4; }

// Process profile of DummyScene4_Create (gProfileTable entry): factory, execute and draw priorities.
ProcProfile sDummyScene4Profile = {(void *(*)())DummyScene4_Create, 0x4, 0x3};
