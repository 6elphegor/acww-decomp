// Host build: the declarations SDL_syswm.h needs from Xlib (frontend_sdl.c takes the X11 window's handles from it
// for wgpu_display.c), for building without the X11 development headers: the handle types, and XEvent at its size.
#ifndef ACWW_X11SHIM_XLIB_H
#define ACWW_X11SHIM_XLIB_H
typedef struct _XDisplay Display;
typedef unsigned long XID;
typedef XID Window;
typedef union _XEvent { long pad[24]; } XEvent;
#endif
