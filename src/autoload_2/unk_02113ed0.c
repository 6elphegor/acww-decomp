// mwcc-flags: -nothumb -O4,p
// NitroSDK OS (os_printf.c tail, os_thread.c, os_system.c, os_message.c, os_mutex.c): autoload_2 0x02113088-0x02114410.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)
#define va_end(ap)

typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;

typedef struct {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;

typedef struct {
    u32 cpsr;
    u32 r[15];
    u32 pc_plus4;
    u32 sp_svc;
    u32 cp_context[7];
} OSContext;

struct OSThread {
    OSContext context;      // 0x00
    u32 state;              // 0x64: 0 waiting, 1 ready, 2 terminated
    OSThread *next;         // 0x68
    u32 id;                 // 0x6c
    u32 priority;           // 0x70
    void *profiler;         // 0x74
    OSThreadQueue *queue;   // 0x78
    OSThread *linkPrev;     // 0x7c
    OSThread *linkNext;     // 0x80
    void *mutex;            // 0x84
    OSMutex *mutexHead;     // 0x88
    OSMutex *mutexTail;     // 0x8c
    u32 stackTop;           // 0x90
    u32 stackBottom;        // 0x94
    u32 stackWarningOffset; // 0x98
    OSThreadQueue joinQueue; // 0x9c
    u32 specific[3];        // 0xa4
    void *alarm;            // 0xb0
    void (*destructor)(void *); // 0xb4
    u32 parameter;          // 0xb8
};

struct OSMutex {
    OSThreadQueue queue;    // 0x00
    OSThread *thread;       // 0x08
    s32 count;              // 0x0c
    OSMutex *next;          // 0x10
    OSMutex *prev;          // 0x14
};

typedef struct {
    OSThreadQueue sendQueue;
    OSThreadQueue recvQueue;
    void **msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;

typedef struct {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void (*switchCallback)(OSThread *, OSThread *);
} OSThreadInfo;

typedef struct {
    s32 len;
    char *ptr;
} StrBuf;

extern OSThreadInfo data_021fcc2c;
extern OSThread *data_021fcc30;
extern OSThread **data_021fcc24;
extern u32 data_021fcc14;
extern u32 data_021fcc18;
extern u32 data_021fcc1c;
extern void (*data_021fcc20)(OSThread *, OSThread *);
extern u32 data_021fcc28;
extern OSThread data_021fcc3c;
extern OSThread data_021fccfc;
extern u32 data_021fce84;
extern u32 data_0213bff0;
#define data_027fffa0 (*(OSThreadInfo * volatile *)0x027fffa0)

u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 e);
u32 func_01ffa3b4(void);
u32 func_01ffa3cc(void);
void func_01ff8164(OSThread *t);
BOOL func_01ff81dc(OSThread *t);
void func_01ffa4ec(void *);
void func_0206d49c(void);
u32 func_021123d0(void);
u32 func_02112468(u32 addr);
u32 func_02112508(u32 id);
void func_02112528(u32 id);
void func_021127c0(char *dst, u32 len, const char *fmt, va_list ap);
void func_021152e4(void *alarm);
void func_0211512c(void *alarm, u32 tick, u32 period, void (*cb)(void *), void *arg);
void func_02115094(void *alarm);
void func_02115e64(u32 data, void *dest, u32 size);

void func_021136a0(OSThreadQueue *q);
void *func_0211328c(void (*cb)(OSThread *, OSThread *));
void func_021130b8(char *dst, const char *fmt, va_list ap);
void func_02113720(OSThreadQueue *q);
void func_02113554(void);
void func_0211366c(OSThread *t);
u32 func_02113254(void);
u32 func_0211321c(void);
void func_02113cc8(OSThread *t);
void func_02113d10(OSThread *t);
OSThread *func_02113da8(OSThreadQueue *q);
void func_02113ddc(OSThreadQueue *q, OSThread *t);
void func_02113e6c(OSContext *c, u32 pc, u32 sp);
void func_02113990(void *arg);
void func_02113944(void);
void func_021139d4(OSThread *t, void *arg);
void func_02113a44(void);
void func_021137c4(OSThread *t);
void func_02113214(OSThread *t, void (*d)(void *));
BOOL func_02113384(OSThread *t, u32 prio);
OSThread *func_02113640(void);
void func_021143c8(OSThread *t);
void func_02114330(OSThread *t, OSMutex *m);
OSMutex *func_02113d78(OSMutex **q);
u32 func_02113f04(void);
BOOL func_02113ed0(void);
u32 func_02113e54(void);
void func_021132c0(OSThread **p);
void func_0211366c(OSThread *t);
void func_021137f0(OSThread *t, void *arg, u32 prio);
u32 func_0211337c(OSThread *t);
void func_02113a70(OSThread *t, void (*f)(void *), void *arg, void *stack, u32 size, u32 prio);

// OS_IsRunOnEmulator-style hardware flag check
BOOL func_02113ed0(void) {
    volatile u16 *p;
    if (*(volatile u16 *)0x027ffc10 == 0) p = (volatile u16 *)0x027ff814;
    else p = (volatile u16 *)0x027ffc14;
    return *p == 1;
}

