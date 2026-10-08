#ifndef TALK_TALKBMGREADER_H
#define TALK_TALKBMGREADER_H

#include "types.h"
#include "talk/BmgReader.h"

// BMG reader over the talk window's message buffer (vtable _ZTV13TalkBmgReader 0x020ddc44; TalkWindowState::msgBuffer,
// 0x8a4 bytes on the DS). Defined in src/main/unk_02065e88.cpp (main 0x0206c6f4..0x0206c768: getBufferSize /
// getBuffer, D0 0x0206c714, D1 0x0206c734, C1 0x0206c74c).
class TalkBmgReader : public BmgReader {
public:
    TalkBmgReader();
    virtual ~TalkBmgReader();
    virtual u32 getBuffer();  // (BmgReader's interface: the buffer's address)
    virtual u32 getBufferSize();
    void clear();

    /* 0xa4 */ u8 buffer[0x800];
};

#endif
