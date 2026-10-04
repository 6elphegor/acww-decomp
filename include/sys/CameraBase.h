#ifndef SYS_CAMERABASE_H
#define SYS_CAMERABASE_H

// Camera process base (GameProc; vtable 0x020e4590): onDraw loads the view matrix stored at 0x50. Defined in
// src/main/unk_020b7f20.cpp; the destructor is left implicit (mwcc then emits D1, D0 in that order).
#include "types.h"
#include "sys/ProcBase.h"

class CameraBase : public GameProc {
public:
    virtual BOOL onDraw();
};

#endif
