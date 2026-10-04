// mwcc-flags: -nothumb -O4,p -Cpp_exceptions on -char unsigned
// Metrowerks ARM C++ runtime, autoload_2 0x02133d04-0x02134d70: MSL console procs for the semihosting
// target, the action-table number decoders, a zero-fill helper, __end__catch, __ThrowHandler,
// __SetupCatchInfo, __FindExceptionHandler, __HandleUnexpected, __IsInSpecification, the rethrow catch-info
// lookup and __UnwindStack. C++ with exceptions on (like the original): owns main's .exceptix entries
// 0x020c2bd4-0x020c2c40 and .exception tables 0x020c2b04-0x020c2b2c.
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
extern DestructorChain *data_0220066c; // __global_destructor_chain
extern VoidFunc data_0213c6b0; // thandler (= dthandler)

extern "C" {
void func_02133ccc(const u8 *p);
int func_02133ce0(void);
int __FindExceptionTable(ExceptionInfo *info, char *retaddr);
u8 *func_02133b68(u8 *p);
void func_02133bc0(ThrowContext *context, ExceptionInfo *info);
u32 __PopStackFrame(ThrowContext *context, ExceptionInfo *info);
void func_02133aec(ThrowContext *context, ExceptionInfo *info, char *pc);
void abort(void); // abort
void *_Znam(size_t size); // operator new[]
void _ZdaPv(void *p); // operator delete[]
void func_02135578(void);
void func_02135668(void *array, size_t count, size_t size, ObjFunc dtor);
void func_021358a8(char *start, char *ptr, size_t size, ObjFunc dtor);
u8 *func_02133da8(u8 *p, u32 *value);
u8 *func_02133e50(u8 *p, s32 *value);
u8 NextAction(ActionIterator *iter);
u8 func_0213510c(ActionIterator *iter);
void func_02135128(char *retaddr, ExceptionInfo *info);
ExceptionTableIndex *BinarySearch(ExceptionTableIndex *table, int count, char *addr);
int __throw_catch_compare(const char *throwtype, const char *catchtype, s32 *offset_result);
void func_021344e8(ThrowContext *context, ExceptionInfo *info, u8 *catcher);
CatchInfo *FindMostRecentException(ThrowContext *context, ExceptionInfo *info);
int IsInSpecification(const char *throwtype, ExSpecification *spec);
void HandleUnexpected(ThrowContext *context, ExceptionInfo *info, ExSpecification *spec, u8 *unexp);
u8 *FindExceptionHandler(ThrowContext *context, ExceptionInfo *info, s32 *result_offset);
void SetupCatchInfo(ThrowContext *context, s32 cinfo_ref, s32 offset);
}

#define FRAME_VALUE(context, flag, off) ((flag) ? (context)->state.regs[off] : *(u32 *)((context)->FP + (off)))

// __UnwindStack: run the cleanup actions of every frame up to the catcher's action
extern "C" void func_021344e8(ThrowContext *context, ExceptionInfo *info, u8 *catcher) {
    u8 *p;
    u8 *next;
    u8 action;

#pragma exception_terminate // as in the original runtime: no exception may leave the unwinder
    for (;;) {
        if (info->action_pointer == 0) {
            func_02135128((char *)__PopStackFrame(context, info), info);
            if (info->exception_record == 0) {
                func_02135578();
            }
            func_02133bc0(context, info);
            if (info->action_pointer == 0) {
                continue;
            }
        }
        p = info->action_pointer;
        action = *p;
        switch (action & EXCEPTION_ACTION_MASK) {
        case 1: {
            s32 offset;
            func_02133e50(p + 1, &offset);
            info->action_pointer += offset;
            break;
        }
        case 2: {
            s32 local;
            p = func_02133e50(p + 1, &local);
            ((DtorFunc)GET_LONG(p))(context->FP + local, -1);
            info->action_pointer = p + 4;
            break;
        }
        case 3: {
            u32 inreg = *info->action_pointer & 0x40;
            s32 cond;
            s32 local;
            DtorFunc dtor;
            p = func_02133e50(func_02133e50(p + 1, &cond), &local);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            if (inreg ? (u8)context->state.regs[cond] : *(u8 *)(context->FP + cond)) {
                dtor(context->FP + local, -1);
            }
            info->action_pointer = next;
            break;
        }
        case 4: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 pointer;
            DtorFunc dtor;
            p = func_02133e50(p + 1, &pointer);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            dtor((void *)FRAME_VALUE(context, inreg, pointer), -1);
            info->action_pointer = next;
            break;
        }
        case 5: {
            s32 local;
            u32 count;
            u32 size;
            DtorFunc dtor;
            u32 n;
            char *ptr;
            p = func_02133da8(func_02133da8(func_02133e50(p + 1, &local), &count), &size);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            ptr = context->FP + local;
            n = count;
            for (ptr += n * size; n; n--) {
                ptr -= size;
                dtor(ptr, -1);
            }
            info->action_pointer = next;
            break;
        }
        case 6: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 object;
            s32 offset;
            DtorFunc dtor;
            p = func_02133e50(func_02133e50(p + 1, &object), &offset);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            dtor((char *)FRAME_VALUE(context, inreg, object) + offset, 0);
            info->action_pointer = next;
            break;
        }
        case 7: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 object;
            s32 offset;
            DtorFunc dtor;
            p = func_02133e50(func_02133e50(p + 1, &object), &offset);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            dtor((char *)FRAME_VALUE(context, inreg, object) + offset, -1);
            info->action_pointer = next;
            break;
        }
        case 8: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 cond;
            s32 object;
            s32 offset;
            DtorFunc dtor;
            p = func_02133e50(func_02133e50(func_02133e50(p + 1, &cond), &object), &offset);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            if ((action & 0x40) ? (s16)context->state.regs[cond] : *(s16 *)(context->FP + cond)) {
                dtor((char *)FRAME_VALUE(context, inreg, object) + offset, -1);
            }
            info->action_pointer = next;
            break;
        }
        case 9: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 object;
            s32 offset;
            u32 count;
            u32 size;
            DtorFunc dtor;
            u32 n;
            char *ptr;
            p = func_02133da8(func_02133da8(func_02133e50(func_02133e50(p + 1, &object), &offset), &count), &size);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            if (inreg) {
                ptr = (char *)context->state.regs[object] + offset;
            } else {
                ptr = (char *)*(u32 *)(context->FP + object) + offset;
            }
            n = count;
            for (ptr += n * size; n; n--) {
                ptr -= size;
                dtor(ptr, -1);
            }
            info->action_pointer = next;
            break;
        }
        case 10: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 pointer;
            ObjFunc del;
            p = func_02133e50(p + 1, &pointer);
            del = (ObjFunc)GET_LONG(p);
            next = p + 4;
            del((void *)FRAME_VALUE(context, inreg, pointer));
            info->action_pointer = next;
            break;
        }
        case 11: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 cond;
            s32 pointer;
            ObjFunc del;
            p = func_02133e50(func_02133e50(p + 1, &cond), &pointer);
            del = (ObjFunc)GET_LONG(p);
            next = p + 4;
            if ((action & 0x40) ? (u8)context->state.regs[cond] : *(u8 *)(context->FP + cond)) {
                del((void *)FRAME_VALUE(context, inreg, pointer));
            }
            info->action_pointer = next;
            break;
        }
        case 12: {
            u32 catch_pcoffset;
            s32 cinfo_ref;
            if (catcher == p) {
                return;
            }
            info->action_pointer = func_02133e50(func_02133da8(p + 5, &catch_pcoffset), &cinfo_ref);
            break;
        }
        case 13: {
            s32 cinfo_ref;
            CatchInfo *ci;
            p = func_02133e50(p + 1, &cinfo_ref);
            ci = (CatchInfo *)(context->FP + cinfo_ref);
            if (ci->dtor) {
                if (context->location == ci->location) {
                    context->dtor = ci->dtor;
                } else {
                    ((DtorFunc)ci->dtor)(ci->location, -1);
                }
            }
            info->action_pointer = p;
            break;
        }
        case 15: {
            u32 specs;
            u32 pcoffset;
            s32 cinfo_ref;
            if (catcher == p) {
                return;
            }
            p = func_02133e50(func_02133da8(func_02133da8(p + 1, &specs), &pcoffset), &cinfo_ref);
            info->action_pointer = p + specs * 4;
            break;
        }
        case 16: {
            u32 inreg = *info->action_pointer & 0x20;
            s32 object;
            s32 offset;
            struct {
                s32 offset2;
                u32 base2;
            } s;
            PairFunc func;
            p = func_02133e50(func_02133e50(p + 1, &object), &offset);
            s.base2 = GET_LONG(p);
            p = func_02133e50(p + 4, &s.offset2);
            func = (PairFunc)GET_LONG(p);
            next = p + 4;
            func((char *)FRAME_VALUE(context, inreg, object) + offset, (char *)s.base2 + s.offset2);
            info->action_pointer = next;
            break;
        }
        case 17: {
            u32 inreg = *info->action_pointer & 0x20;
            u32 inreg2;
            s32 object1;
            s32 object2;
            s32 offset1;
            s32 offset2;
            PairFunc func;
            p = func_02133e50(func_02133e50(p + 1, &object1), &offset1);
            inreg2 = *p++ & 0x20;
            p = func_02133e50(func_02133e50(p, &object2), &offset2);
            func = (PairFunc)GET_LONG(p);
            next = p + 4;
            {
                u32 v1 = FRAME_VALUE(context, inreg, object1);
                u32 v2 = FRAME_VALUE(context, inreg2, object2);
                func((char *)v1 + offset1, (char *)v2 + offset2);
            }
            info->action_pointer = next;
            break;
        }
        case 18: {
            u32 inreg = *info->action_pointer & 0x20;
            u32 inreg2;
            s32 object;
            s32 bytes;
            u32 size;
            DtorFunc dtor;
            u32 n;
            char *ptr;
            u32 total;
            p = func_02133e50(p + 1, &object);
            inreg2 = *p++ & 0x20;
            p = func_02133da8(func_02133e50(p, &bytes), &size);
            dtor = (DtorFunc)GET_LONG(p);
            next = p + 4;
            if (inreg) {
                ptr = (char *)context->state.regs[object];
            } else {
                ptr = *(char **)(context->FP + object);
            }
            if (inreg2) {
                total = context->state.regs[bytes];
            } else {
                total = *(u32 *)(context->FP + bytes);
            }
            ptr += total;
            for (n = total / size; n; n--) {
                ptr -= size;
                dtor(ptr, -1);
            }
            info->action_pointer = next;
            break;
        }
        case 19: {
            s32 offset;
            info->action_pointer = func_02133e50(p + 1, &offset);
            break;
        }
        default:
            func_02135578();
            break;
        }
        if (action & 0x80) {
            info->action_pointer = 0;
        }
    }
}

// rethrow: find the active catch block of the exception being rethrown and take its exception over
extern "C" CatchInfo *FindMostRecentException(ThrowContext *context, ExceptionInfo *info) {
    s32 cinfo_ref;
    ActionIterator iter;
    CatchInfo *catchinfo;
    u8 action;

    iter.info = *info;
    iter.context = *context;
    for (action = func_0213510c(&iter);; action = NextAction(&iter)) {
        switch (action) {
        case 13:
            break;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 15:
        case 16:
        case 17:
        case 18:
            continue;
        case 1:
        case 14:
        default:
            func_02135578();
            break;
        }
        break;
    }
    func_02133e50(iter.info.action_pointer + 1, &cinfo_ref);
    catchinfo = (CatchInfo *)(iter.context.FP + cinfo_ref);
    context->throwtype = (char *)catchinfo->typeinfo;
    context->location = catchinfo->location;
    context->dtor = 0;
    context->catchinfo = catchinfo;
    return catchinfo;
}

// __IsInSpecification
extern "C" int IsInSpecification(const char *throwtype, ExSpecification *spec) {
    struct {
        char *catch_type;
        s32 offset;
    } s;
    u8 *p = spec->spec;
    u32 i;

    for (i = 0; i < spec->specs; i++) {
        s.catch_type = (char *)GET_LONG(p);
        if (__throw_catch_compare(throwtype, s.catch_type, &s.offset)) {
            return 1;
        }
        p += 4;
    }
    return 0;
}

// __HandleUnexpected: unwind to the frame with the violated exception specification and enter its handler
extern "C" void HandleUnexpected(ThrowContext *context, ExceptionInfo *info, ExSpecification *spec, u8 *unexp) {
    CatchInfo *catchinfo;

#pragma exception_terminate // as in the original runtime: no exception may leave this function
    func_021344e8(context, info, unexp);
    catchinfo = (CatchInfo *)(context->FP + spec->cinfo_ref);
    catchinfo->location = context->location;
    catchinfo->typeinfo = context->throwtype;
    catchinfo->dtor = context->dtor;
    catchinfo->stacktop = unexp;
    func_02133aec(context, info, info->current_function + spec->pcoffset);
}

// __FindExceptionHandler: returns the action of the catch block that takes the exception
extern "C" u8 *FindExceptionHandler(ThrowContext *context, ExceptionInfo *info, s32 *result_offset) {
    ExCatchBlock catchblock;
    ExSpecification spec;
    ActionIterator iter;
    u8 action;

    iter.info = *info;
    iter.context = *context;
    for (action = func_0213510c(&iter);; action = NextAction(&iter)) {
        switch (action) {
        case 12:
            catchblock.catch_type = (char *)GET_LONG(iter.info.action_pointer + 1);
            func_02133e50(func_02133da8(iter.info.action_pointer + 5, &catchblock.catch_pcoffset),
                          &catchblock.cinfo_ref);
            if (!__throw_catch_compare(context->throwtype, catchblock.catch_type, result_offset)) {
                continue;
            }
            break;
        case 15:
            spec.spec = func_02133e50(
                func_02133da8(func_02133da8(iter.info.action_pointer + 1, &spec.specs), &spec.pcoffset),
                &spec.cinfo_ref);
            if (IsInSpecification(context->throwtype, &spec) == 0) {
                HandleUnexpected(context, info, &spec, iter.info.action_pointer);
            }
            continue;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 13:
        case 16:
        case 17:
        case 18:
        case 19:
            continue;
        case 1:
        case 14:
        default:
            func_02135578();
            break;
        }
        break;
    }
    return iter.info.action_pointer;
}

// __SetupCatchInfo
extern "C" void SetupCatchInfo(ThrowContext *context, s32 cinfo_ref, s32 offset) {
    CatchInfo *catchinfo = (CatchInfo *)(context->FP + cinfo_ref);

    catchinfo->location = context->location;
    catchinfo->typeinfo = context->throwtype;
    catchinfo->dtor = context->dtor;
    if (*context->throwtype == '*') {
        catchinfo->sublocation = &catchinfo->pointercopy;
        catchinfo->pointercopy = *(s32 *)context->location + offset;
    } else {
        catchinfo->sublocation = (char *)context->location + offset;
    }
}

// __ThrowHandler: entered from __rethrow (__rethrow) with the thrower's register context
extern "C" void __ThrowHandler(ThrowContext *context) {
    s32 offset;
    ExceptionInfo info;
    ExCatchBlock catchblock;
    u8 *p;

    func_02135128(context->returnaddr, &info);
    if (info.exception_record == 0) {
        func_02135578();
    }
    func_02133bc0(context, &info);
    if (context->throwtype == 0) {
        context->catchinfo = FindMostRecentException(context, &info);
    } else {
        context->catchinfo = 0;
    }
    p = FindExceptionHandler(context, &info, &offset);
    catchblock.catch_type = (char *)GET_LONG(p + 1);
    func_02133e50(func_02133da8(p + 5, &catchblock.catch_pcoffset), &catchblock.cinfo_ref);
    func_021344e8(context, &info, p);
    SetupCatchInfo(context, catchblock.cinfo_ref, offset);
    func_02133aec(context, &info, info.current_function + catchblock.catch_pcoffset);
}

// __end__catch (the name mwcc emits at the end of a catch block): destroy the caught exception object
extern "C" void __end__catch(CatchInfo *catchinfo) {
    if (catchinfo->location && catchinfo->dtor) {
        ((DtorFunc)catchinfo->dtor)(catchinfo->location, -1);
    }
}

// zero-fill (ptr, size)
extern "C" void *func_02133ef8(void *ptr, size_t size) {
    u8 *p = (u8 *)ptr;

    if (ptr && size) {
        do {
            *p++ = 0;
        } while (--size);
    }
    return ptr;
}

// __DecodeSignedNumber: 1-4 byte signed number, low bits of the first byte give the length
extern "C" u8 *func_02133e50(u8 *p, s32 *value) {
    s32 b0 = (s8)p[0];
    s32 b1;
    s32 b2;

    if (!(b0 & 1)) {
        *value = b0 >> 1;
        return p + 1;
    }
    b1 = p[1];
    if (!(b0 & 2)) {
        *value = ((b0 >> 2) << 8) | b1;
        return p + 2;
    }
    b2 = p[2];
    if (!(b0 & 4)) {
        *value = ((b0 >> 3) << 16) | (b1 << 8) | b2;
        return p + 3;
    }
    *value = ((b0 >> 3) << 24) | (b1 << 16) | (b2 << 8) | p[3];
    return p + 4;
}

// __DecodeUnsignedNumber
extern "C" u8 *func_02133da8(u8 *p, u32 *value) {
    u32 b0 = p[0];
    u32 b1;
    u32 b2;

    if (!(b0 & 1)) {
        *value = b0 >> 1;
        return p + 1;
    }
    b1 = p[1];
    if (!(b0 & 2)) {
        *value = ((b0 >> 2) << 8) | b1;
        return p + 2;
    }
    b2 = p[2];
    if (!(b0 & 4)) {
        *value = ((b0 >> 3) << 16) | (b1 << 8) | b2;
        return p + 3;
    }
    *value = ((b0 >> 3) << 24) | (b1 << 16) | (b2 << 8) | p[3];
    return p + 4;
}

// __read_console (MSL console proc for the semihosting target)
extern "C" int func_02133d44(u32 handle, u8 *buffer, size_t *count, void *idle_proc) {
    size_t i;
    size_t n = *count;

    for (i = 0; i < n; i++) {
        buffer[i] = func_02133ce0();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }
    return 0;
}

// __write_console
extern "C" int func_02133d0c(u32 handle, u8 *buffer, size_t *count, void *idle_proc) {
    size_t i;
    size_t n = *count;

    for (i = 0; i < n; i++) {
        func_02133ccc(buffer + i);
    }
    return 0;
}

// __close_console
extern "C" int func_02133d04(u32 handle) {
    return 0;
}
