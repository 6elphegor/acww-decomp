#ifndef SYS_NEW_H
#define SYS_NEW_H

#include "types.h"

// Placement new (the game is built freestanding, without <new>): constructing an object in memory it already has.
inline void *operator new(size_t, void *p) { return p; }
inline void *operator new[](size_t, void *p) { return p; }

// The game's operator new (the DS's ::operator new): a block of the current heap, NULL when it is full. On the host
// the program's global operator new is the host's (modern/host/newdelete.cpp), so the game names its own:
// `new (kGameHeap) T[n]`. The objects are deleted as usual (::operator delete gives them back to the game's heap).
extern "C" void *Mem_AllocForNew(u32 size);  // src/autoload_2/unk_020ec848.cpp
struct GameHeapNew {};
static const GameHeapNew kGameHeap = {};
inline void *operator new(size_t size, GameHeapNew) throw() { return Mem_AllocForNew(size); }
inline void *operator new[](size_t size, GameHeapNew) throw() { return Mem_AllocForNew(size); }

#endif
