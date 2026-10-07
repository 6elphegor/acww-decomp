#ifndef SYS_NEW_H
#define SYS_NEW_H

// Placement new (the game is built freestanding, without <new>): constructing an object in memory it already has.
inline void *operator new(size_t, void *p) { return p; }
inline void *operator new[](size_t, void *p) { return p; }

#endif
