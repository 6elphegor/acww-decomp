#ifndef GAME_SHOPDATE_H
#define GAME_SHOPDATE_H

#include "types.h"

// A day as the shops keep it (stock dates, Nook's point-special and renovation days): day, month, year (0..99)
struct ShopDate {
    u8 day;
    u8 month;
    u8 year;
};

#endif
