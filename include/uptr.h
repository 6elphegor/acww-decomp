#ifndef UPTR_H
#define UPTR_H

// An integer holding an address (the sources keep many pointers as u32 / s32): pointer-sized. Standalone: units
// that declare their own basic types include just this.
typedef __UINTPTR_TYPE__ uptr;
typedef __INTPTR_TYPE__ sptr;

// HOST64: a 64-bit build (the 32-bit x86 build is kept as the behavioural reference for now)
#if __SIZEOF_POINTER__ == 8
#define HOST64 1
#define HOST_ALIGN8 __attribute__((aligned(8)))
#else
#define HOST_ALIGN8
#endif

// Transitional helpers from when one source tree also built the matching DS ROM; the code using them is being
// rewritten to the real types and members (docs/host.md), and they go away with it.
// - HOST_SIZED(n, T): a byte buffer for an object the code keeps opaque, n bytes on the DS: at least sizeof(T).
// - HOST_AT(p, off, m, rem): the member m of *p (plus rem bytes), at DS offset off.
// - HOST_AT_A(a, T, off, m, rem): the same through a u8 * alias a of a T *.
#define HOST_SIZED(n, type) (sizeof(type) > (n) ? sizeof(type) : (n))
#define HOST_AT(p, off, m, rem) ((u8 *)&(p)->m + (rem))
#define HOST_AT_A(a, T, off, m, rem) ((u8 *)&((T *)(a))->m + (rem))

// VillagerRoute's size (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0

// An actor's position (Actor::position) from an untyped pointer to the actor (HostActor_Pos,
// src/main/unk_02002b1c.cpp: the units using this needn't know Actor's layout)
#ifdef __cplusplus
extern "C"
#endif
unsigned char *HostActor_Pos(void *actor);
#define ACTOR_POS_AT(p) (HostActor_Pos((void *)(p)))

#endif
