#ifndef TALK_TALKBMGREADER_H
#define TALK_TALKBMGREADER_H

#include "types.h"
#include "talk/BmgReader.h"

// BMG reader over the shared talk message buffer (vtable _ZTV13TalkBmgReader 0x020ddc44). Defined in main around
// 0x0206c6f4..0x0206c768 (getBufferSize / getBuffer labels, D0 0x0206c714, D1 0x0206c734, C1 0x0206c74c).
class TalkBmgReader : public BmgReader {
public:
    TalkBmgReader();
    virtual ~TalkBmgReader();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
};

#endif
