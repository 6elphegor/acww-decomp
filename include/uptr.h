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

// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
#endif

// A buffer for an object the code keeps opaque (a stack buffer for an SDK object, say): n bytes on the DS, at least
// the real type's size in the host build, where pointers make it larger. HOST_ALIGN8: their alignment there.
// HOST64: a 64-bit host build (layouts generated for it: tools/host_view_layout.py)
#if defined(HOST) && __SIZEOF_POINTER__ == 8
#define HOST64 1

// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
#endif

#ifdef HOST
#define HOST_SIZED(n, type) (sizeof(type) > (n) ? sizeof(type) : (n))
#if __SIZEOF_POINTER__ == 8
#define HOST_ALIGN8 __attribute__((aligned(8)))
#else
#define HOST_ALIGN8  // (4-byte pointers: the DS's alignment - members keep their DS offsets on 32-bit hosts)

// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
#endif
#else
#define HOST_SIZED(n, type) (n)
#define HOST_ALIGN8

// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
#endif

// A member reached by its DS offset ((u8 *)p + off): on hosts the member itself (tools/host_this_offsets.py), plus
// rem bytes into it.
#ifdef HOST
#define HOST_AT(p, off, m, rem) ((u8 *)&(p)->m + (rem))
#else
#define HOST_AT(p, off, m, rem) ((u8 *)(p) + (off))

// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
#endif
// The same through a u8 * alias a of a T * (u8 *a = (u8 *)this): `a + off` on the DS, as written.
#ifdef HOST
#define HOST_AT_A(a, T, off, m, rem) ((u8 *)&((T *)(a))->m + (rem))
#else
#define HOST_AT_A(a, T, off, m, rem) ((a) + (off))

// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
#endif


// VillagerRoute's size on 64-bit hosts (it is declared in src/main/unk_020119cc.cpp only; the AI state in
// src/ov068/unk_ov068_0225f1a0.cpp holds one in a byte array): checked there
#define VILLAGER_ROUTE_HOST_SIZE 0xa0
// An actor's position (Actor::position) from an untyped pointer to the actor: DS offset 0x5c; on hosts the member
// (HostActor_Pos, src/main/unk_02002b1c.cpp: the units using this needn't know Actor's layout)
#ifdef HOST
#ifdef __cplusplus
extern "C"
#endif
unsigned char *HostActor_Pos(void *actor);
#define ACTOR_POS_AT(p) (HostActor_Pos((void *)(p)))
#else
#define ACTOR_POS_AT(p) ((u8 *)(p) + 0x5c)
#endif

#endif
