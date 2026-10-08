#ifndef NET_WFCTRANSFER_H
#define NET_WFCTRANSFER_H

#include "types.h"

// ov001 settings transfer to another DS (src/ov001/unk_ov001_0220cd24.cpp): the screen's event callback, called with
// the event (0: child connected / pending event, 1-4: the download's outcomes).
typedef void (*WfcTransferCallback)(u32 event);

#endif
