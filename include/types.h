#ifndef TYPES_H
#define TYPES_H

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;

// mwcc's size_t is unsigned long; GCC's (ARM EABI) is unsigned int. Both are 32 bits.
#ifdef MODERN
typedef __SIZE_TYPE__ size_t;
#else
typedef unsigned long size_t;
#endif

#ifdef MODERN
// mwcc's __declspec(weak) (the only __declspec in the code)
#define __declspec(x) __attribute__((x))
// mwcc intrinsic: zero n bytes at p
#define __builtin__clear(p, n) __builtin_memset((p), 0, (n))
#endif

typedef int BOOL;
#define TRUE 1
#define FALSE 0

#ifndef NULL
#define NULL 0
#endif

#endif
