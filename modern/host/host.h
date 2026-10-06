// Host build runtime (modern/host/): shared declarations. See docs/host.md.
#ifndef HOST_HOST_H
#define HOST_HOST_H

#include <stddef.h>
#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int32_t s32;
typedef unsigned long long u64;  // (the game's type: uint64_t is unsigned long on 64-bit Linux)

// main.c
void host_fatal(const char *msg) __attribute__((noreturn));
void host_unimplemented(const char *what);
extern int gHostVerbose;
extern const char *gHostRomPath;

// hw.c: memory map, I/O registers, time, DMA
void host_map_memory(void);
u8 *host_io(u32 addr);                 // the host's writable view of an I/O register
u32 host_irq_pending(void);            // IE & IF when IME is set
void host_irq_ack(u32 mask);
void host_irq_raise(u32 mask);
void host_advance_to_next_event(void);
u64 host_frame(void);
u64 host_cycles(void);

// os.c
void *host_stack_alloc(size_t n);  // a stack for game code (below 4 GB on 64-bit Linux)
void host_deliver_irqs(void);

// pxi7.c: the ARM7 side of the PXI FIFO
void pxi7_init(void);
void pxi7_receive(u32 word);           // a word the ARM9 sent
void pxi7_send(u32 word);              // a word for the ARM9 (receive FIFO)
void pxi7_sync_written(u32 value);     // IPCSYNC write

// card.c: ROM reads through the ARM9 card registers
void card_init(const char *rom);
void card_control_written(u32 romctrl);
u32 card_read_data(void);

#endif
