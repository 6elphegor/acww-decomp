#ifndef SAVE_BBSBOARD_H
#define SAVE_BBSBOARD_H

// Town bulletin board: 15 posts, notice id, post count (0xb80 bytes). Defined in src/main/unk_020742f4.cpp.
// ov113 (src/ov113/unk_02291f60.cpp) keeps its own declaration with a static getPost (it calls it without a board).
#include "types.h"
#include "save/BbsPost.h"

class BbsBoard {
public:
    BbsBoard();
    ~BbsBoard();

    void removePost(s32 idx);
    void setNoticeId(u16 v);
    u16 getNoticeId();
    BbsPost *addPost();
    u8 getPostCount();
    void reset();
    void clear();
    BbsPost *getPost(s32 idx);
    BbsPost *postAt(s32 idx);

    /* 0x000 */ BbsPost posts[15];
    /* 0xb7c */ u16 noticeId;
    /* 0xb7e */ u8 postCount;
};

#endif
