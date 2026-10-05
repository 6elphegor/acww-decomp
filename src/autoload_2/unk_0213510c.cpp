// mwcc-flags: -nothumb -O4,p -Cpp_exceptions on -char unsigned
// Metrowerks ARM C++ runtime, autoload_2 0x0213510c-0x02135914: __CurrentAction, __FindExceptionRecord,
// the index binary search, __destroy_global_chain, the static-initialiser loop, __throw_catch_compare,
// __register_global_object, terminate/dthandler and the __cxa_vec_* helpers; with thandler (.data) and
// __global_destructor_chain (bss). C++ with exceptions on: owns main's .exceptix 0x020c2c4c-0x020c2cd0 and
// .exception 0x020c2b34-0x020c2bb0 (the try/catch tables of the __cxa_vec_* functions).
#include "types.h"

typedef unsigned long size_t;
typedef void (*VoidFunc)(void);
typedef void (*DtorFunc)(void *, int);
typedef void (*ObjFunc)(void *);
typedef void (*PairFunc)(void *, void *);

// Index entry of main's .exceptix (12 bytes): function, size | 1 if the unwind data is inline, data/table pointer.
typedef struct ExceptionTableIndex {
    char *function;
    u32 size;
    u8 *data;
} ExceptionTableIndex;

typedef struct ExceptionInfo {
    char *current_function;      // 0x00
    u8 *exception_record;        // 0x04
    u8 *action_pointer;          // 0x08
    char *exception_table_start; // 0x0c
    char *exception_table_end;   // 0x10
    u32 unk14;                   // 0x14
} ExceptionInfo;

typedef struct CatchInfo {
    void *location;    // 0x00
    void *typeinfo;    // 0x04
    void *dtor;        // 0x08
    void *sublocation; // 0x0c
    s32 pointercopy;   // 0x10
    void *stacktop;    // 0x14
} CatchInfo;

// register state of the frame being unwound (one member: copied as one 0x54-byte block)
typedef struct FrameState {
    u32 regs[16];      // 0x1c (context offsets)
    char *throwSP;     // 0x5c
    u32 frame_size;    // 0x60
    u32 frame_adjust;  // 0x64
    u16 regmask;       // 0x68
    u8 has_fp_area;    // 0x6a  header flag 0x20
    u8 has_fp;         // 0x6b  header flag 0x40
    u8 fp_is_r7;       // 0x6c  header flag 0x80
} FrameState;

typedef struct ThrowContext {
    char *throwtype;      // 0x00
    void *location;       // 0x04
    void *dtor;           // 0x08
    CatchInfo *catchinfo; // 0x0c
    char *returnaddr;     // 0x10
    char *SP;             // 0x14
    char *FP;             // 0x18
    FrameState state;     // 0x1c
} ThrowContext;

typedef struct ActionIterator {
    ExceptionInfo info;   // 0x00
    ThrowContext context; // 0x18
} ActionIterator;

typedef struct DestructorChain {
    struct DestructorChain *next;
    void *destructor;
    void *object;
} DestructorChain;

// decoded action records
typedef struct ExCatchBlock {
    char *catch_type;
    u32 catch_pcoffset;
    s32 cinfo_ref;
} ExCatchBlock;

typedef struct ExSpecification {
    u32 specs;
    u32 pcoffset;
    s32 cinfo_ref;
    u8 *spec;
} ExSpecification;

#define EXCEPTION_ACTION_MASK 0x1f
#define GET_LONG(p) ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24))

extern char __exception_table_start__[];
extern char __exception_table_end__[];
extern VoidFunc p__sinit_020c2cd0[]; // start of main's .ctor table

extern "C" {
void sys_writec(const u8 *p);
int sys_readc(void);
int __FindExceptionTable(ExceptionInfo *info, char *retaddr);
u8 *__SkipUnwindInfo(u8 *p);
void __SetupFrameInfo(ThrowContext *context, ExceptionInfo *info);
u32 __PopStackFrame(ThrowContext *context, ExceptionInfo *info);
void __TransferControl(ThrowContext *context, ExceptionInfo *info, char *pc);
void abort(void); // abort
void *_Znam(size_t size); // operator new[]
void _ZdaPv(void *p); // operator delete[]
void _ZSt9terminatev(void);
void _ZSt9dthandlerv(void);
void __cxa_vec_dtor(void *array, size_t count, size_t size, ObjFunc dtor);
void func_021358a8(char *start, char *ptr, size_t size, ObjFunc dtor);
u8 *__DecodeUnsignedNumber(u8 *p, u32 *value);
u8 *__DecodeSignedNumber(u8 *p, s32 *value);
u8 NextAction(ActionIterator *iter);
u8 CurrentAction(ActionIterator *iter);
void FindExceptionRecord(char *retaddr, ExceptionInfo *info);
ExceptionTableIndex *BinarySearch(ExceptionTableIndex *table, int count, char *addr);
int __throw_catch_compare(const char *throwtype, const char *catchtype, s32 *offset_result);
void UnwindStack(ThrowContext *context, ExceptionInfo *info, u8 *catcher);
CatchInfo *FindMostRecentException(ThrowContext *context, ExceptionInfo *info);
int IsInSpecification(const char *throwtype, ExSpecification *spec);
void HandleUnexpected(ThrowContext *context, ExceptionInfo *info, ExSpecification *spec, u8 *unexp);
u8 *FindExceptionHandler(ThrowContext *context, ExceptionInfo *info, s32 *result_offset);
void SetupCatchInfo(ThrowContext *context, s32 cinfo_ref, s32 offset);
}

// __global_destructor_chain (autoload_3 bss 0x0220066c)
DestructorChain *data_0220066c;

// thandler, the terminate handler (autoload_2 .data 0x0213c6b0), initially dthandler
VoidFunc data_0213c6b0 = _ZSt9dthandlerv;

// __partial_array_destructor-style cleanup: destroy the constructed elements [start, ptr) backwards.
extern "C" void func_021358a8(char *start, char *ptr, size_t size, ObjFunc dtor) {
    try {
        while (ptr > start) {
            ptr -= size;
            dtor(ptr);
        }
    } catch (...) {
        _ZSt9terminatev();
    }
}

// __cxa_vec_new (label in symbols.txt)
extern "C" void *__cxa_vec_new(size_t count, size_t size, size_t padding, ObjFunc ctor, ObjFunc dtor) {
    char *block = (char *)_Znam(count * size + padding);
    char *array;
    char *ptr;

    if (block == 0) {
        return 0;
    }
    if (padding) {
        ((size_t *)(block + padding))[-1] = count;
        if (padding >= 8) {
            ((size_t *)(block + padding))[-2] = size;
        }
    }
    if (ctor) {
        array = block + padding;
        ptr = array;
        try {
            for (; count; count--) {
                ctor(ptr);
                ptr += size;
            }
        } catch (...) {
            if (dtor) {
                func_021358a8(array, ptr, size, dtor);
            }
            _ZdaPv(block);
            throw;
        }
    }
    return block + padding;
}

// __cxa_vec_ctor
extern "C" void __cxa_vec_ctor(void *array, size_t count, size_t size, ObjFunc ctor, ObjFunc dtor) {
    char *ptr;

    if (ctor) {
        if (dtor) {
            try {
                ptr = (char *)array;
                for (; count; count--) {
                    ctor(ptr);
                    ptr += size;
                }
            } catch (...) {
                func_021358a8((char *)array, ptr, size, dtor);
                throw;
            }
        } else {
            for (; count; count--) {
                ctor(array);
                array = (char *)array + size;
            }
        }
    }
}

// __cxa_vec_dtor
extern "C" void __cxa_vec_dtor(void *array, size_t count, size_t size, ObjFunc dtor) {
    char *ptr;

    if (dtor) {
        ptr = (char *)array + count * size;
        try {
            for (; count; count--) {
                ptr -= size;
                dtor(ptr);
            }
        } catch (...) {
            try {
                while (--count) {
                    ptr -= size;
                    dtor(ptr);
                }
            } catch (...) {
                _ZSt9terminatev();
            }
            throw;
        }
    }
}

// __cxa_vec_cleanup
extern "C" void __cxa_vec_cleanup(void *array, size_t count, size_t size, ObjFunc dtor) {
    char *ptr;

    if (dtor) {
        try {
            ptr = (char *)array + count * size;
            for (; count; count--) {
                ptr -= size;
                dtor(ptr);
            }
        } catch (...) {
            _ZSt9terminatev();
        }
    }
}

// __cxa_vec_delete (label in symbols.txt)
extern "C" void __cxa_vec_delete(void *array, size_t size, size_t padding, ObjFunc dtor) {
    if (array) {
        if (dtor) {
            __cxa_vec_dtor(array, ((size_t *)array)[-1], size, dtor);
        }
        _ZdaPv((char *)array - padding);
    }
}

// dthandler: default terminate handler
extern "C" void _ZSt9dthandlerv(void) {
    abort();
}

// terminate
extern "C" void _ZSt9terminatev(void) {
    data_0213c6b0();
}

// __register_global_object
extern "C" void *__register_global_object(void *object, void *destructor, void *regmem) {
    ((DestructorChain *)regmem)->next = data_0220066c;
    ((DestructorChain *)regmem)->destructor = destructor;
    ((DestructorChain *)regmem)->object = object;
    data_0220066c = (DestructorChain *)regmem;
    return object;
}

// __throw_catch_compare
extern "C" int __throw_catch_compare(const char *throwtype, const char *catchtype, s32 *offset_result) {
    const char *cptr1;
    const char *cptr2;

    cptr1 = throwtype;
    cptr2 = catchtype;
    *offset_result = 0;
    if (catchtype == 0) {
        return 1;
    }
    if (*catchtype == 'P') {
        cptr2++;
        if (*cptr2 == 'V') {
            cptr2++;
        }
        if (*cptr2 == 'K') {
            cptr2++;
        }
        if (*cptr2 == 'v') {
            if (*cptr1 == 'P' || *cptr1 == '*') {
                return 1;
            }
        }
        cptr2 = catchtype;
    }
    switch (*(const unsigned char *)throwtype) {
    case '*':
    case '!':
        cptr1++;
        if (*throwtype != *cptr2++) {
            return 0;
        }
        for (;;) {
            if (*cptr1 == *cptr2++) {
                if (*cptr1++ == '!') {
                    s32 offset;

                    for (offset = 0; *cptr1 != '!';) {
                        offset = offset * 10 + *cptr1++ - '0';
                    }
                    *offset_result = offset;
                    return 1;
                }
            } else {
                while (*cptr1++ != '!') {
                }
                while (*cptr1++ != '!') {
                }
                if (*cptr1 == 0) {
                    return 0;
                }
                cptr2 = catchtype + 1;
            }
        }
        return 0;
    }
    while ((*cptr1 == 'P' || *cptr1 == 'R') && *cptr1 == *cptr2) {
        cptr1++;
        cptr2++;
        if (*cptr2 == 'K') {
            if (*cptr1 == 'K') {
                cptr1++;
            }
            cptr2++;
        }
        if (*cptr1 == 'K') {
            return 0;
        }
        if (*cptr2 == 'V') {
            if (*cptr1 == 'V') {
                cptr1++;
            }
            cptr2++;
        }
        if (*cptr1 == 'V') {
            return 0;
        }
    }
    for (; *cptr1 == *cptr2; cptr1++, cptr2++) {
        if (*cptr1 == 0) {
            return 1;
        }
    }
    return 0;
}

// __call_static_initializers: run main's .ctor table
extern "C" void __call_static_initializers(void) {
    VoidFunc *ctor;

    for (ctor = p__sinit_020c2cd0; ctor && *ctor; ctor++) {
        (*ctor)();
    }
}

// __destroy_global_chain
extern "C" void __destroy_global_chain(void) {
    DestructorChain *gdc;

    while ((gdc = data_0220066c) != 0) {
        data_0220066c = gdc->next;
        ((DtorFunc)gdc->destructor)(gdc->object, -1);
    }
}

// binary search of the exception table index for the entry covering addr
extern "C" ExceptionTableIndex *BinarySearch(ExceptionTableIndex *table, int count, char *addr) {
    int lo = 0;
    int hi = count - 1;
    int mid;
    ExceptionTableIndex *entry;

    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        entry = &table[mid];
        if (addr < entry->function) {
            hi = mid - 1;
        } else if (addr > entry->function + (entry->size & ~1)) {
            lo = mid + 1;
        } else {
            return entry;
        }
    }
    return 0;
}

// __FindExceptionRecord
extern "C" void FindExceptionRecord(char *retaddr, ExceptionInfo *info) {
    ExceptionTableIndex *entry;
    u8 *p;
    u32 offset;
    u32 pc;
    u32 range[3];

    info->exception_record = 0;
    info->action_pointer = 0;
    if (__FindExceptionTable(info, retaddr) == 0) {
        return;
    }
    entry = BinarySearch((ExceptionTableIndex *)info->exception_table_start,
                          (info->exception_table_end - info->exception_table_start) / 12, retaddr);
    if (entry == 0) {
        return;
    }
    if (entry->size & 1) {
        info->exception_record = (u8 *)&entry->data;
    } else {
        info->exception_record = entry->data;
    }
    info->current_function = entry->function;
    offset = retaddr - entry->function;
    p = __SkipUnwindInfo(info->exception_record);
    pc = 0;
    for (;;) {
        p = __DecodeUnsignedNumber(p, &range[0]);
        if (range[0] == 0) {
            return;
        }
        p = __DecodeUnsignedNumber(p, &range[1]);
        p = __DecodeUnsignedNumber(p, &range[2]);
        pc += range[0];
        if (offset < pc) {
            return;
        }
        pc += range[1];
        if (offset <= pc) {
            break;
        }
    }
    info->action_pointer = info->exception_record + range[2];
}

// __CurrentAction
extern "C" u8 CurrentAction(ActionIterator *iter) {
    return iter->info.action_pointer ? (*iter->info.action_pointer & EXCEPTION_ACTION_MASK) : 0;
}
