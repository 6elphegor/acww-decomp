#ifndef MENU_POPUPCHOICEIDLIST_H
#define MENU_POPUPCHOICEIDLIST_H

#include "types.h"

// Row list for PopupChoiceMenuBody (message ids, values, custom-row mask); used in ov002 and the menu overlays.
struct PopupChoiceIdList {
    /* 0x00 */ u8 msgIds[5];
    /* 0x05 */ u8 values[5];
    /* 0x0a */ u8 customMask;
};

#endif
