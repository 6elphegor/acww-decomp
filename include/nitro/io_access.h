// Hardware register accesses. Every read and write of an I/O register (0x04000000-0x04001fff, 0x04100000-) goes
// through these, given a pointer to the register:
//
//   IO_R(p)       the value                    IO_W(p, v)    store v
//   IO_OR(p, v)   |= v     IO_AND(p, v)  &= v  IO_XOR(p, v)  ^= v   IO_ADD(p, v) += v   IO_SUB(p, v) -= v
//
// The writes have the stored value, as an assignment does.
// On the DS (and the GCC DS build) they are the plain volatile accesses, token for token: the code is the same
// as without them. In the host build (HOST) they call the host's register model with the register's address and
// size; the pointer is only used as a number, so nothing needs to be mapped at the DS's I/O addresses.
//
// Self-contained (no types.h): many units declare their own types.
#ifndef NITRO_IO_ACCESS_H
#define NITRO_IO_ACCESS_H


#ifdef __cplusplus
extern "C" {
#endif
unsigned long long HostIo_Read(unsigned int addr, unsigned int size);
unsigned long long HostIo_Write(unsigned int addr, unsigned int size, unsigned long long value);  // returns value
#ifdef __cplusplus
}
#endif

// the register's type without volatile (no promotion: a vs16 register reads as a short)
#ifdef __cplusplus
template <class T> struct IoUnqual_ { typedef T type; };
template <class T> struct IoUnqual_<volatile T> { typedef T type; };
#define IO_T_(p) IoUnqual_<__typeof__(*(p))>::type
#else
#define IO_T_(p) __typeof__(((void)0, *(p)))
#endif
#define IO_ADDR_(p) ((unsigned int)(unsigned long)(p))
#define IO_R(p) ((IO_T_(p))HostIo_Read(IO_ADDR_(p), sizeof(*(p))))
#define IO_W(p, v) ((IO_T_(p))HostIo_Write(IO_ADDR_(p), sizeof(*(p)), (unsigned long long)(IO_T_(p))(v)))
#define IO_RMW_(p, op, v) IO_W(p, IO_R(p) op (v))
#define IO_OR(p, v) IO_RMW_(p, |, v)
#define IO_AND(p, v) IO_RMW_(p, &, v)
#define IO_XOR(p, v) IO_RMW_(p, ^, v)
#define IO_ADD(p, v) IO_RMW_(p, +, v)
#define IO_SUB(p, v) IO_RMW_(p, -, v)


#endif
