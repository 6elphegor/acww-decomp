#ifndef TYPES_H
#define TYPES_H

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
#include "types64.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;

#include "uptr.h"

// mwcc's size_t is unsigned long; GCC's (ARM EABI) is unsigned int. Both are 32 bits. (HOST alone: the host runtime
// including a game header.)
typedef __SIZE_TYPE__ size_t;

// mwcc's __declspec(weak) (the only __declspec in the code)
#define __declspec(x) __attribute__((x))
// mwcc intrinsic: zero n bytes at p
#define __builtin__clear(p, n) __builtin_memset((p), 0, (n))

// An inline function that other code calls by its symbol name: mwcc emitted it out of line, GCC has to be told to
#define MODERN_EMIT __attribute__((used))

// A variable that an interrupt handler, a callback or the ARM7 changes while the code polls it. The original
// declarations aren't volatile and mwcc reloaded them anyway; GCC keeps them in a register (see docs/modern.md).
#define MODERN_VOLATILE volatile

// mwcc's class layout (docs/modern.md, "Class layout"): a derived class's first member goes after its base's data size
// (the base's tail padding is reused, POD bases too), and a class's data size ends at its last member's data size.
// GCC does that only for a non-POD base and a [[no_unique_address]] member. MWCC_LAYOUT, inside a POD class used as a
// base, makes it non-POD for GCC (an empty protected member; the class stays trivial and an aggregate); MWCC_TAIL
// marks a class's last member when its type has tail padding. tools/modern_layout_needs.py lists where they go.
#if defined(MODERN) && defined(__cplusplus)
struct MwccLayoutEmpty {};
struct MwccLayout {
protected:
    [[no_unique_address]] MwccLayoutEmpty empty_;
};
#define MWCC_LAYOUT [[no_unique_address]] MwccLayout mwccLayout_;
#define MWCC_TAIL [[no_unique_address]]
#else
#define MWCC_LAYOUT
#define MWCC_TAIL
#endif

typedef int BOOL;
#define TRUE 1
#define FALSE 0

#ifndef NULL
#define NULL 0
#endif

#endif
