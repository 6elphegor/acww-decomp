// Host build: the program's global operator new and delete.
//
// The game and the host runtime (melonDS, the C++ library) are one program, so there is one ::operator new and one
// ::operator delete. The game allocates its objects from its own heaps by name (Mem_AllocForNew, the DS's operator
// new: include/sys/new.h), the runtime with malloc. The compiler's calls of ::operator delete - a deleting destructor,
// `delete p` in either side's code - come here: a block inside the game's memory goes back to the game's heap
// (Mem_FreeForDelete, the DS's operator delete), anything else to free. (Before 2026-10-08 the game's own operators
// were made local to the game object with objcopy instead.)

#include <cstdlib>
#include <new>

extern "C" void Mem_FreeForDelete(void *p);    // src/autoload_2/unk_020ec848.cpp
extern "C" int host_is_game_heap(const void *p);  // main.c

void *operator new(std::size_t size) {
    void *p = std::malloc(size ? size : 1);
    if (!p) std::abort();
    return p;
}

void *operator new[](std::size_t size) {
    return ::operator new(size);
}

void operator delete(void *p) noexcept {
    if (!p) return;
    if (host_is_game_heap(p)) Mem_FreeForDelete(p);
    else std::free(p);
}

void operator delete[](void *p) noexcept {
    ::operator delete(p);
}

void operator delete(void *p, std::size_t) noexcept {
    ::operator delete(p);
}

void operator delete[](void *p, std::size_t) noexcept {
    ::operator delete(p);
}
