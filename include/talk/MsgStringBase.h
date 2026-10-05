#ifndef TALK_MSGSTRINGBASE_H
#define TALK_MSGSTRINGBASE_H

#include "types.h"

// Abstract text-buffer interface (vtable 0x020d9210): capacity() and data() are supplied by the sized buffers
// (MsgString, LabelBalloonText, ...). Destructor at 0x02039b24.
class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
};

#endif
