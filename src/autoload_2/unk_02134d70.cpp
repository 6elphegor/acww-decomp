// mwcc-flags: -nothumb -O4,p -Cpp_exceptions on -char unsigned
// Metrowerks ARM C++ runtime, autoload_2 0x02134d70-0x0213510c: __NextAction (exception handling: steps through
// the action table of the frames being unwound). C++ with exceptions on (like the original): owns main's .exceptix
// entry 0x020c2c40-0x020c2c4c and .exception table 0x020c2b2c-0x020c2b34. The source has the shape of the MW
// runtime's ExceptionHandler.cp: `info`/`context` locals and an inline Branch() for the branch-following loop
// (written with the iterator's members directly, mwcc keeps the action pointer in a register across that loop).
#include "types.h"

typedef struct ExceptionInfo {
    char *current_function;      // 0x00
    u8 *exception_record;        // 0x04
    u8 *action_pointer;          // 0x08
    char *exception_table_start; // 0x0c
    char *exception_table_end;   // 0x10
    u32 unk14;                   // 0x14
} ExceptionInfo;

typedef struct CatchInfo CatchInfo;

// register state of the frame being unwound
typedef struct FrameState {
    u32 regs[16];      // 0x1c (context offsets)
    char *throwSP;     // 0x5c
    u32 frame_size;    // 0x60
    u32 frame_adjust;  // 0x64
    u16 regmask;       // 0x68
    u8 has_fp_area;    // 0x6a
    u8 has_fp;         // 0x6b
    u8 fp_is_r7;       // 0x6c
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

#define EXCEPTION_ACTION_MASK 0x1f
#define GET_LONG(p) ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24))

extern "C" {
void __SetupFrameInfo(ThrowContext *context, ExceptionInfo *info); // __SetupFrameInfo
u32 __PopStackFrame(ThrowContext *context, ExceptionInfo *info);
void _ZSt9terminatev(void); // terminate
u8 *__DecodeUnsignedNumber(u8 *p, u32 *value); // __DecodeUnsignedNumber
u8 *__DecodeSignedNumber(u8 *p, s32 *value); // __DecodeSignedNumber
void FindExceptionRecord(char *retaddr, ExceptionInfo *info); // FindExceptionRecord
}

inline void Branch(ExceptionInfo *info, ThrowContext *context) {
    s32 target;
    __DecodeSignedNumber(info->action_pointer + 1, &target);
    info->action_pointer += target;
}

// __NextAction: skip the current action (decoding its operands without applying it) and return the next one,
// moving to the calling frame at the end of a function's action list; branch actions (1) are followed.
extern "C" u8 NextAction(ActionIterator *iter) {
    ExceptionInfo *info = &iter->info;
    ThrowContext *context = &iter->context;
    u8 action;

    for (;;) {
        if (!info->action_pointer || *info->action_pointer & 0x80) {
            FindExceptionRecord((char *)__PopStackFrame(context, info), info);
            if (info->exception_record == 0) {
                _ZSt9terminatev();
            }
            __SetupFrameInfo(context, info);
            if (info->action_pointer == 0) {
                continue;
            }
            break;
        }
        switch (*info->action_pointer & EXCEPTION_ACTION_MASK) {
        case 2: {
            s32 local;
            info->action_pointer = __DecodeSignedNumber(info->action_pointer + 1, &local) + 4;
            break;
        }
        case 3: {
            s32 cond;
            s32 local;
            info->action_pointer =
                __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &cond), &local) + 4;
            break;
        }
        case 4: {
            s32 pointer;
            info->action_pointer = __DecodeSignedNumber(info->action_pointer + 1, &pointer) + 4;
            break;
        }
        case 5: {
            s32 local;
            u32 count;
            u32 size;
            info->action_pointer =
                __DecodeUnsignedNumber(__DecodeUnsignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &local), &count), &size) + 4;
            break;
        }
        case 6: {
            s32 object;
            s32 offset;
            info->action_pointer =
                __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &object), &offset) + 4;
            break;
        }
        case 7: {
            s32 object;
            s32 offset;
            info->action_pointer =
                __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &object), &offset) + 4;
            break;
        }
        case 8: {
            s32 cond;
            s32 object;
            s32 offset;
            info->action_pointer = __DecodeSignedNumber(
                __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &cond), &object), &offset) + 4;
            break;
        }
        case 9: {
            s32 object;
            s32 offset;
            u32 count;
            u32 size;
            info->action_pointer = __DecodeUnsignedNumber(__DecodeUnsignedNumber(
                __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &object), &offset), &count), &size) + 4;
            break;
        }
        case 10: {
            s32 pointer;
            info->action_pointer = __DecodeSignedNumber(info->action_pointer + 1, &pointer) + 4;
            break;
        }
        case 11: {
            s32 cond;
            s32 pointer;
            info->action_pointer =
                __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &cond), &pointer) + 4;
            break;
        }
        case 12: {
            u32 catch_pcoffset;
            s32 cinfo_ref;
            info->action_pointer =
                __DecodeSignedNumber(__DecodeUnsignedNumber(info->action_pointer + 5, &catch_pcoffset), &cinfo_ref);
            break;
        }
        case 13: {
            s32 cinfo_ref;
            info->action_pointer = __DecodeSignedNumber(info->action_pointer + 1, &cinfo_ref);
            break;
        }
        case 15: {
            u32 specs;
            u32 pcoffset;
            s32 cinfo_ref;
            u8 *p = __DecodeSignedNumber(
                __DecodeUnsignedNumber(__DecodeUnsignedNumber(info->action_pointer + 1, &specs), &pcoffset), &cinfo_ref);
            info->action_pointer = p + specs * 4;
            break;
        }
        case 16: {
            s32 object;
            s32 offset;
            struct {
                s32 offset2;
                u32 base2;
            } s;
            u8 *p = __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &object), &offset);
            s.base2 = GET_LONG(p);
            info->action_pointer = __DecodeSignedNumber(p + 4, &s.offset2) + 4;
            break;
        }
        case 17: {
            s32 object1;
            s32 object2;
            s32 offset1;
            s32 offset2;
            u8 *p = __DecodeSignedNumber(__DecodeSignedNumber(info->action_pointer + 1, &object1), &offset1);
            info->action_pointer = __DecodeSignedNumber(__DecodeSignedNumber(p + 1, &object2), &offset2) + 4;
            break;
        }
        case 18: {
            s32 object;
            s32 bytes;
            u32 size;
            u8 *p = __DecodeSignedNumber(info->action_pointer + 1, &object);
            info->action_pointer = __DecodeUnsignedNumber(__DecodeSignedNumber(p + 1, &bytes), &size) + 4;
            break;
        }
        case 19: {
            s32 offset;
            info->action_pointer = __DecodeSignedNumber(info->action_pointer + 1, &offset);
            break;
        }
        default:
            _ZSt9terminatev();
            break;
        }
        break;
    }

    while ((action = *info->action_pointer & EXCEPTION_ACTION_MASK) == 1) {
        Branch(info, context);
    }
    return action;
}
