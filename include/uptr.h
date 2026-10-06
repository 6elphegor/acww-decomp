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

// A buffer for an object the code keeps opaque (a stack buffer for an SDK object, say): n bytes on the DS, at least
// the real type's size in the host build, where pointers make it larger. HOST_ALIGN8: their alignment there.
#ifdef HOST
#define HOST_SIZED(n, type) (sizeof(type) > (n) ? sizeof(type) : (n))
#define HOST_ALIGN8 __attribute__((aligned(8)))
#else
#define HOST_SIZED(n, type) (n)
#define HOST_ALIGN8
#endif

#endif
