#ifndef DS_STDARG_H
#define DS_STDARG_H

// Variable arguments. The sources declare their own va_list (char *) and read the arguments as mwcc's va_arg
// expands, from 4-byte stack slots (DS_VA_ARG: `*(T *)((ap += N) - N)`, DS_VA_ARG_C: `*(T *)(ap += N, ap - N)`).
// The host's calling convention differs (x86-64: registers), so in the host build these are the compiler's
// va_list / va_arg (types narrower than int come as int). On the DS: the original expressions.
typedef __builtin_va_list va_list;
#define va_start(ap, parm) __builtin_va_start(ap, parm)
#define va_end(ap) __builtin_va_end(ap)
#define va_arg(ap, t) __builtin_va_arg(ap, t)
#define DS_VA_LIST va_list
#define DS_VA_ARG(ap, T, N) \
    (sizeof(T) < sizeof(int) ? (T)(__UINTPTR_TYPE__)__builtin_va_arg(ap, int) : __builtin_va_arg(ap, T))  // (via uintptr: T may be a pointer)
#define DS_VA_ARG_C(ap, T, N) DS_VA_ARG(ap, T, N)

#endif
