#ifndef UI_ADDRESSEEPAGEARG_H
#define UI_ADDRESSEEPAGEARG_H

// Addressee page index passed by value to PopupChoice_OpenAddresseePage (ov002 popup-choice menu; loadAddresseePage
// reads it as PopupChoiceIdList::msgIds[0]); shared by the ov002 TUs.
#include "types.h"

struct AddresseePageArg {
    /* 0x0 */ u8 v;
};

#endif
