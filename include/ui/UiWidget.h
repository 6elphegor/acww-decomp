#ifndef UI_UIWIDGET_H
#define UI_UIWIDGET_H

#include "types.h"

// 0xc-byte widget root (vtable 0x020e0db4): screen origin plus draw hooks. Defined in main: constructor 0x02089fa8 and
// destructor 0x02089f78 in unk_02089f78.cpp, setOrigin / getOriginX / getOriginY in unk_02089508.cpp.
class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);
    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 originX;
    /* 0x08 */ s32 originY;
};

#endif
