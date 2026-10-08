#ifndef SAVE_REDDLASTSALE_H
#define SAVE_REDDLASTSALE_H

#include "types.h"

struct ReddSaleName {
    u8 b[8];
};

// Redd's last sale (0x18 bytes, in the save data): the buyer (laid out as a PlayerId) and the item sold. Methods
// defined in src/main/unk_02085940.cpp (which still has its own copy of this struct: to be replaced by this header).
// setBuyer copies a PlayerId-shaped record; setItem / copyItemFrom move an item id between `item` and the first
// halfword of the other record.
struct ReddLastSale {
    u16 townId;
    ReddSaleName townName;
    u16 playerId;
    ReddSaleName playerName;
    s8 gender;
    u8 unk_15;
    u16 item;
    void copyItemFrom(const ReddLastSale *o);
    void setItem(const ReddLastSale *o);
    void setBuyer(const ReddLastSale *o);
    void clear();
    ReddLastSale();
    ~ReddLastSale();
};

#endif
