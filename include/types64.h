#ifndef TYPES64_H
#define TYPES64_H

// 64-bit integer types. mwcc aligns 64-bit types to 4 bytes; GCC (AAPCS) to 8, which moves every 64-bit member at an
// offset of 4 modulo 8 (OSAlarm, ticks in save data, ...). The modern build gives them mwcc's alignment.
#ifdef MODERN
typedef signed long long s64 __attribute__((aligned(4)));
typedef unsigned long long u64 __attribute__((aligned(4)));
#else
typedef signed long long s64;
typedef unsigned long long u64;
#endif

#endif
