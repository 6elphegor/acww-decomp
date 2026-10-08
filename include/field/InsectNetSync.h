#ifndef FIELD_INSECTNETSYNC_H
#define FIELD_INSECTNETSYNC_H

#include "types.h"

// The insects' network sync (an empty base of InsectManager, ov003): its constructor and destructor are in
// src/ov003/unk_ov003_0222e5e0.cpp with the sync table (sInsectNetSync, InsectNetSync_Set / _Get / _PackVar).
class InsectNetSync {
public:
    InsectNetSync();
    ~InsectNetSync();
};

#endif
