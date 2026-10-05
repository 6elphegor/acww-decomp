// mwcc-flags: -nothumb -O4,p -Cpp_exceptions on -char unsigned
// Metrowerks ARM C++ exception runtime (exception handler), autoload_2 0x02133b68-0x02133ccc. Built as C++ with
// exceptions on like the original: __SkipUnwindInfo and __SetupFrameInfo own their .exceptix index entries in main
// (0x020c2bbc-0x020c2bd4); __FindExceptionTable and __PopStackFrame make no calls and get none.
#include "types.h"

// Index entry of main's .exceptix (12 bytes): function, size | 1 if the unwind data is inline, data/table pointer.
typedef struct ExceptionTableIndex {
    char *function;
    u32 size;
    char *data;
} ExceptionTableIndex;

typedef struct ExceptionInfo {
    char *current_function;      // 0x00
    char *exception_record;      // 0x04
    char *action_pointer;        // 0x08
    char *exception_table_start; // 0x0c
    char *exception_table_end;   // 0x10
    u32 unk14;                   // 0x14
} ExceptionInfo;

// register state of the frame being unwound (one member: the runtime copies it as one 0x54-byte block)
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
    char *throwtype;   // 0x00
    void *location;    // 0x04
    void *dtor;        // 0x08
    void *catchinfo;   // 0x0c
    char *returnaddr;  // 0x10
    char *SP;          // 0x14
    char *FP;          // 0x18
    FrameState state;  // 0x1c
} ThrowContext;

extern char __exception_table_start__[];
extern char __exception_table_end__[];

extern "C" char *__DecodeUnsignedNumber(char *p, u32 *value);

// __PopStackFrame-like: restore the registers a frame saved (mask from the function header, highest first) and step to the caller:
// returns the frame's saved lr.
extern "C" u32 __PopStackFrame(ThrowContext *context, ExceptionInfo *info) {
    u32 size = context->state.frame_size;
    u32 *p = (u32 *)(context->FP + size - (context->state.has_fp_area ? 16 : 0));
    int i;

    for (i = 15; i >= 0; i--) {
        if (context->state.regmask & (1 << i)) {
            context->state.regs[i] = *--p;
        }
    }
    context->SP = context->FP + size;
    return context->state.regs[14];
}

// Decode the function header of the current exception record into the context.
extern "C" void __SetupFrameInfo(ThrowContext *context, ExceptionInfo *info) {
    char *p = info->exception_record;
    u8 flags = p[0];
    u32 has_fp = flags & 0x40;
    u32 fp_is_r7;

    context->state.has_fp = has_fp ? 1 : 0;
    context->state.has_fp_area = (flags & 0x20) ? 1 : 0;
    fp_is_r7 = flags & 0x80;
    context->state.fp_is_r7 = fp_is_r7 ? 1 : 0;
    context->state.regmask = (u8)p[1] << 4;
    context->state.regmask |= 0x4000;
    p = __DecodeUnsignedNumber(p + 2, &context->state.frame_size);
    if (has_fp) {
        __DecodeUnsignedNumber(p, &context->state.frame_adjust);
    }
    if (has_fp) {
        if (fp_is_r7) {
            context->FP = (char *)context->state.regs[7];
        } else {
            context->FP = (char *)context->state.regs[11];
        }
    } else {
        context->FP = context->SP;
    }
}

// __FindExceptionTable
extern "C" int __FindExceptionTable(ExceptionInfo *info, char *retaddr) {
    info->exception_table_start = __exception_table_start__;
    info->exception_table_end = __exception_table_end__;
    return 1;
}

// Skip a function header (flags byte, register byte, frame size, frame adjust if flag 0x40): returns the action
// table.
extern "C" char *__SkipUnwindInfo(char *p) {
    u8 flags = *p;
    u32 value;

    p += 2;
    p = __DecodeUnsignedNumber(p, &value);
    if (flags & 0x40) {
        p = __DecodeUnsignedNumber(p, &value);
    }
    return p;
}
