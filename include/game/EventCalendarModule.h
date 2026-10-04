#ifndef GAME_EVENTCALENDARMODULE_H
#define GAME_EVENTCALENDARMODULE_H

// Event calendar task (vtable 0x020d96f4, created by EventCalendarModule_New). Defined in src/main/unk_0203f104.cpp,
// which also emits the implicit destructor (0x0203f104), so no destructor is declared here.
#include "types.h"
#include "sys/ProcBase.h"

class EventCalendarModule : public GameProc {
public:
    EventCalendarModule() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
};

#endif // GAME_EVENTCALENDARMODULE_H
