#ifndef TOWN_KATRINATENT_H
#define TOWN_KATRINATENT_H

#include "types.h"
#include "town/BuildingActor.h"

// Katrina's fortune tent (ov003 field building). Defined in src/ov003/unk_ov003_02215ad8.cpp; 022150ec(+_switch)
// also define vfunc_78 / vfunc_8c. Size 0x2b4.
class KatrinaTent : public BuildingActor {
public:
    KatrinaTent();
    virtual ~KatrinaTent();

    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL onExecute();
    virtual BOOL vfunc_70();

    /* 0x2b0 */ u8 createHour;
    /* 0x2b1 */ u8 pad_2b1[3];
};

#endif // TOWN_KATRINATENT_H
