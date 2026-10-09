// The sanitizer variant (tools/configure_host.py --sanitize address, docs/host.md): the game's heaps (NNS expanded
// and frame heaps) are carved out of big blocks, so ASan would see only the outer block. Their allocators mark what
// is not allocated as poisoned: the free blocks of an expanded heap, the free middle of a frame heap, and the bytes of
// a block past the size asked for. The allocator units themselves are compiled without ASan's checks (they walk
// their block headers in poisoned memory). Nothing in other builds.
#ifndef HOST_ASAN_H
#define HOST_ASAN_H

#ifdef HOST_ASAN
#ifdef __cplusplus
extern "C" {
#endif
void __asan_poison_memory_region(void const volatile *addr, __SIZE_TYPE__ size);
void __asan_unpoison_memory_region(void const volatile *addr, __SIZE_TYPE__ size);
#ifdef __cplusplus
}
#endif
#define HOST_ASAN_POISON(p, n) __asan_poison_memory_region((const void *)(p), (__SIZE_TYPE__)(n))
#define HOST_ASAN_UNPOISON(p, n) __asan_unpoison_memory_region((const void *)(p), (__SIZE_TYPE__)(n))
#else
#define HOST_ASAN_POISON(p, n) ((void)0)
#define HOST_ASAN_UNPOISON(p, n) ((void)0)
#endif

#endif
