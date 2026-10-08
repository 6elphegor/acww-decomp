#ifndef TALK_ARTICLECACHEENTRY_H
#define TALK_ARTICLECACHEENTRY_H

#include "types.h"
#include "talk/MsgString.h"

// An article ("a", "an", "the" ...) loaded from the string bank, cached (String_GetArticle). Members defined in
// src/main/unk_020b2c50.cpp (which still declares the class itself: the same definition).
class ArticleCacheEntry : public MsgString {
public:
    ArticleCacheEntry();
    virtual ~ArticleCacheEntry();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[10]; // data() / capacity()
    /* 0x1c */ u8 isLoaded;
};

#endif
