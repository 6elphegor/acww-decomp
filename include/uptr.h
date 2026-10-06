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
// HOST64: a 64-bit host build (layouts generated for it: tools/host_view_layout.py)
#if defined(HOST) && __SIZEOF_POINTER__ == 8
#define HOST64 1
#endif

#ifdef HOST
#define HOST_SIZED(n, type) (sizeof(type) > (n) ? sizeof(type) : (n))
#if __SIZEOF_POINTER__ == 8
#define HOST_ALIGN8 __attribute__((aligned(8)))
#else
#define HOST_ALIGN8  // (4-byte pointers: the DS's alignment - members keep their DS offsets on 32-bit hosts)
#endif
#else
#define HOST_SIZED(n, type) (n)
#define HOST_ALIGN8
#endif

// A member reached by its DS offset ((u8 *)p + off): on hosts the member itself (tools/host_this_offsets.py), plus
// rem bytes into it.
#ifdef HOST
#define HOST_AT(p, off, m, rem) ((u8 *)&(p)->m + (rem))
#else
#define HOST_AT(p, off, m, rem) ((u8 *)(p) + (off))
#endif
// The same through a u8 * alias a of a T * (u8 *a = (u8 *)this): `a + off` on the DS, as written.
#ifdef HOST
#define HOST_AT_A(a, T, off, m, rem) ((u8 *)&((T *)(a))->m + (rem))
#else
#define HOST_AT_A(a, T, off, m, rem) ((a) + (off))
#endif

#endif
