#ifndef UPTR_H
#define UPTR_H

// An integer holding an address (the sources keep many pointers as u32): pointer-sized in the host build, 32 bits
// on the DS - the same type there (unsigned int), so the DS code doesn't change. Standalone: units that declare
// their own basic types include just this.
#ifdef HOST
typedef __UINTPTR_TYPE__ uptr;
typedef __INTPTR_TYPE__ sptr;
#else
typedef unsigned int uptr;
typedef signed int sptr;
#endif

#endif
