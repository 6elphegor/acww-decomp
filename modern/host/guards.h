#ifndef HOST_GUARDS_H
#define HOST_GUARDS_H

// The guard variant (configure_host.py --guards, docs/portability.md 2.8): poisoned bytes after every game variable,
// listed by tools/host_guards.py. The table exists in that variant only (HOST_GUARDS).
typedef struct HostGuard {
    char *at;          // the guard (host_guard_size bytes right after the variable)
    unsigned kind;     // 0 data, 1 read-only data, 2 bss
    unsigned size;     // the variable's size
    const char *name;  // the variable (its section's name)
    const char *file;  // its object file
} HostGuard;

extern const unsigned host_guard_size, host_guard_count;
extern const HostGuard host_guard_table[];

void host_guards_init(void);   // fill the guards (after the memory is mapped, before the static constructors)
void host_guards_frame(void);  // ACWW_GUARDS=1: report the guards that changed
void host_guards_exit(void);   // the summary

#endif
