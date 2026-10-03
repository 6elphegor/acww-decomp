// mwcc-flags: -nothumb -O4,p
// In-house heap start-up func_020e914c (heap file 0x020e8558-0x020e92f4), autoload_2 0x020e914c-0x020e91cc. C++, mwcc 1.2/base.
#include "types.h"
#define ARENA_T u32
extern u32 data_021f4830;
#include "types.h"

class Unk_020e8b94 {
public:
    virtual ~Unk_020e8b94(); // 0x00 / 0x04
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void *vfunc_18(u32 size, s32 align) = 0; // alloc
    virtual void vfunc_1c(void *p) = 0; // free
    virtual void vfunc_20() = 0; // free all
    virtual BOOL vfunc_24() = 0;
    virtual void vfunc_28() = 0;
    virtual s32 vfunc_2c(void *p, u32 size) = 0; // resize
    virtual u32 vfunc_30(void *p) = 0; // block size
    virtual u32 vfunc_34() = 0;
    virtual u32 vfunc_38() = 0;
    virtual u32 vfunc_3c(s32 align) = 0; // largest allocatable size
    virtual u32 vfunc_40() = 0;
    virtual void *vfunc_44() = 0;
    virtual void *vfunc_48() = 0;
    virtual void *vfunc_4c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ Unk_020e8b94 *unk_0c; // parent heap
    /* 0x10 */ u32 unk_10; // flags: 0x400 call alloc hook, 0x800 call free hook, 0x2000 allow outside system mode, 0x4000 stop when out of memory
    /* 0x14 */ void *unk_14; // NNS_Fnd heap handle
};

typedef void (*HeapFreeHook)(Unk_020e8b94 *heap, void *p);
struct OSThreadInfo_View {
    u16 isNeedRescheduling;
    u16 irqDepth;
    void *current;
};

extern "C" {
u32 func_01ffa2ec(void); // OS_DisableInterrupts
u32 func_01ffa3d4(u32); // OS_RestoreInterrupts
u32 func_02114940(ARENA_T); // OS_GetArenaLo(id)
u32 func_02114954(ARENA_T);
void *func_02114674(ARENA_T, u32, u32);
typedef void (*ThreadHook)(void *, void *);
ThreadHook func_0211328c(ThreadHook);
void func_0211320c(void *thread, void *v);
void *func_02113204(void *thread);
Unk_020e8b94 *func_020e86c8(Unk_020e8b94 *heap);
Unk_020e8b94 *func_020e8f58(Unk_020e8b94 *p, u32 n);
Unk_020e8b94 *func_020e91cc(void *p, u32 n);
void func_020e9210(void);
void func_020e9284(void *a, void *b);

extern u32 data_021f4828;
extern Unk_020e8b94 *data_021f482c;
extern Unk_020e8b94 *data_021f4824;
extern u8 data_021f4810;
extern ThreadHook data_021f4820;
extern OSThreadInfo_View data_021fcc2c;
}


// heap start-up: arena id 0 (main); size = OS_GetArenaHi(id) - round32(OS_GetArenaLo(id)) unless preset
extern "C" void func_020e914c(void) {
    u32 size;
    u32 t;
    data_021f4830 = 0;
    t = *(s32 *)&data_021f4828;
    size = data_021f4828;
    if (t == 0) {
        size = func_02114940(0);
        size = func_02114954(data_021f4830) - ((size + 31) & ~31);
    }
    if (func_020e91cc(func_02114674(data_021f4830, size, 32), size) != NULL) func_020e9210();
}
