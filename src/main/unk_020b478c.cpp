#include "types.h"
#include "Unk_020d8c7c.h"
#include "sys/SceneBase.h"


// Vtable 0x020e4124
class DummyScene4 : public SceneBase {
public:
};

extern "C" DummyScene4 *DummyScene4_Create(void) { return new DummyScene4; }
