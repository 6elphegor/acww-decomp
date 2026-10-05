#ifndef GFX_DEBUGCOLOR_H
#define GFX_DEBUGCOLOR_H

#include "types.h"

// 4-byte colour (5-bit R, G, B + alpha) built by constructor. Every unit that includes the original colour header
// gets its own static copies of the pale debug colours red (31, 20, 20, 31), blue (20, 20, 31, 31), yellow
// (31, 31, 20, 31), green (20, 31, 20, 31), cyan (20, 31, 31, 31) and grey (20, 24, 24, 31), constructed by its __sinit (sDebugColorRed...,
// src/main/unk_02034010.cpp; sColorPaleRed..., src/main/unk_020b60b0.cpp).
struct DebugColor {
    /* 0x0 */ u8 r;
    /* 0x1 */ u8 g;
    /* 0x2 */ u8 b;
    /* 0x3 */ u8 a;
    DebugColor(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

#endif
