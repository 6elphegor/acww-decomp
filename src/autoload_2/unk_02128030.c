// mwcc-flags: -nothumb -O4,p
// MSL C library (stdio file layer with locking, string/mem functions, mbstowcs), autoload_2 0x02128030-0x02128a20.
// ARM code, mwcc 1.2/base. See notes.txt.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef long long s64;
typedef unsigned long long u64;

typedef struct { u8 pad[20]; } OSMutex;                     // OSMutex (20 bytes)
typedef struct OSThread { u8 pad[0x6c]; u32 id; } OSThread; // only the id at +0x6c is used

// MSL FILE (offsets as used by the code: handle 0, mode 4, state 8, eof 12, error 13, ..., idle_proc 72)
typedef struct FILE {
    u32 handle;
    struct {
        u32 open_mode : 2;
        u32 io_mode : 3;
        u32 buffer_mode : 2;
        u32 file_kind : 3;
        u32 binary_io : 1;
    } mode;
    struct {
        u32 io_state : 3;
        u32 free_buffer : 1;
    } state;
    u8 eof;
    u8 error;
    u8 pad_e[10];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 saved_buffer_len;
    u32 buffer_pos;
    int (*position_proc)(u32, u32 *, int, u32);
    int (*read_proc)(u32, u8 *, u32 *, u32);
    int (*write_proc)(u32, u8 *, u32 *, u32);
    int (*close_proc)(u32);
    u32 idle_proc;
} FILE;

extern FILE data_0213c238, data_0213c284, data_0213c2d0; // stdout/stdin/stderr style FILE objects (locks 2..4)
extern OSMutex data_02200298[]; // per-file mutexes (autoload_3 bss)
extern u32 data_02200250[];     // mutex owner thread ids
extern s32 data_02200274[];     // mutex lock counts
extern struct { u32 a; u32 b; OSThread *cur; } data_021fcc2c; // OS thread info (current thread at +8)
extern int data_0220064c;       // errno
extern struct { u32 a; u32 b; struct { int (*mbtowc)(u16 *, const char *, u32); } *ctype; } data_0213c350; // current locale

int func_02114354(OSMutex *);
void func_02114480(OSMutex *);
void func_02114410(OSMutex *);
int func_02127cb8(const void *, u32, u32, FILE *);
int func_02127ad0(void);
int func_02127b4c(FILE *, int);
s64 func_0212ef50(s64 a, s32 *out);
s64 func_0212f010(s64 a, s32 v);
u32 func_0212a438(const char *);
void func_02128a20(void *dst, int val, u32 n);
int func_02128450(FILE *, u32, int);
int func_02128318(FILE *, int, int);
int func_02128150(FILE *);
int func_02128778(FILE *);
int func_02128908(u16 *, const char *, u32);

// memcpy
void *func_02128a00(void *dst, const void *src, u32 n) {
    const u8 *p = (const u8 *)src;
    u8 *q = (u8 *)dst;
    for (n++; --n;) *q++ = *p++;
    return dst;
}

// memmove
void *func_021289b4(void *dst, const void *src, u32 n) {
    const u8 *p;
    u8 *q;
    if (src >= dst) {
        p = (const u8 *)src;
        q = (u8 *)dst;
        for (n++; --n;) *q++ = *p++;
    } else {
        p = (const u8 *)src + n;
        q = (u8 *)dst + n;
        for (n++; --n;) *--q = *--p;
    }
    return dst;
}

// memset
void *func_0212899c(void *dst, int val, u32 n) {
    func_02128a20(dst, val, n);
    return dst;
}

// memchr
void *func_02128970(const void *src, int val, u32 n) {
    const u8 *p = (const u8 *)src;
    u32 v = (u8)val;
    for (n++; --n;) {
        if (*p++ == v) return (void *)(p - 1);
    }
    return 0;
}

// memcmp
int func_02128930(const void *src1, const void *src2, u32 n) {
    const u8 *p1 = (const u8 *)src1;
    const u8 *p2 = (const u8 *)src2;
    for (n++; --n;) {
        if (*p1++ != *p2++) return (*--p1 < *--p2) ? -1 : +1;
    }
    return 0;
}

// _mbtowc
int func_02128908(u16 *pwc, const char *s, u32 n) {
    return data_0213c350.ctype->mbtowc(pwc, s, n);
}

// mbtowc (C locale)
int func_021288d0(u16 *pwc, const char *s, u32 n) {
    if (s == 0) return 0;
    if (n == 0) return -1;
    if (pwc != 0) *pwc = *(u8 *)s;
    if (*(u8 *)s == 0) return 0;
    return 1;
}

// wctomb (C locale)
int func_021288bc(char *s, u16 wc) {
    if (s == 0) return 0;
    *s = (char)wc;
    return 1;
}

// mbstowcs
int func_02128824(u16 *pwcs, const char *s, u32 n) {
    int i;
    int len = func_0212a438(s);
    int r;
    if (pwcs != 0) {
        for (i = 0; i < n; i++) {
            if (*(u8 *)s != 0) {
                r = func_02128908(pwcs++, s, len);
                if (r > 0) {
                    s += r;
                    len -= r;
                } else {
                    return -1;
                }
            } else {
                *pwcs = 0;
                break;
            }
        }
    } else {
        i = 0;
    }
    return i;
}

s64 func_021287f4(s64 a, s32 delta) {
    s32 v;
    s64 r = func_0212ef50(a, &v);
    v += delta;
    return func_0212f010(r, v);
}

// _ftell
int func_02128778(FILE *file) {
    int pos;
    u32 st;
    if ((u8)((u8)file->mode.file_kind + 255) > 1 || file->error != 0) {
        data_0220064c = 40;
        return -1;
    }
    st = file->state.io_state;
    if (st == 0) return file->position;
    pos = file->buffer_pos + (file->buffer_ptr - file->buffer);
    if (st >= 3) pos -= st - 2;
    return pos;
}

// ftell
int func_02128650(FILE *file) {
    int idx;
    OSMutex *m;
    int r;
    OSThread *t;
    if (file == &data_0213c238) idx = 2;
    else if (file == &data_0213c284) idx = 3;
    else if (file == &data_0213c2d0) idx = 4;
    else idx = 5;
    m = &data_02200298[idx];
    if (func_02114354(m) == 0) {
        data_02200250[idx] = data_021fcc2c.cur->id;
        data_02200274[idx] = 1;
    } else if (data_02200250[idx] == (t = data_021fcc2c.cur)->id) {
        data_02200274[idx]++;
    } else {
        func_02114480(m);
        data_02200250[idx] = data_021fcc2c.cur->id;
        data_02200274[idx] = 1;
    }
    r = func_02128778(file);
    data_02200274[idx]--;
    if (data_02200274[idx] == 0) func_02114410(m);
    return r;
}

// _fseek
int func_02128450(FILE *file, u32 offset, int whence) {
    if ((u8)file->mode.file_kind != 1 || file->error != 0) {
        data_0220064c = 40;
        return -1;
    }
    if (file->state.io_state == 1 && func_02127b4c(file, 0) != 0) {
        file->error = 1;
        file->buffer_len = 0;
        data_0220064c = 40;
        return -1;
    }
    if (whence == 1) {
        whence = 0;
        offset += func_02128778(file);
    }
    if (whence != 2 && file->mode.io_mode != 3 && (u32)(file->state.io_state - 2) <= 1) {
        if (offset >= file->position || offset < file->buffer_pos) {
            file->state.io_state = 0;
        } else {
            file->buffer_ptr = file->buffer + (offset - file->buffer_pos);
            file->buffer_len = file->position - offset;
            file->state.io_state = 2;
        }
    } else {
        file->state.io_state = 0;
    }
    if (file->state.io_state == 0) {
        if (file->position_proc != 0 && file->position_proc(file->handle, &offset, whence, file->idle_proc) != 0) {
            file->error = 1;
            file->buffer_len = 0;
            data_0220064c = 40;
            return -1;
        }
        file->eof = 0;
        file->position = offset;
        file->buffer_len = 0;
    }
    return 0;
}

// fseek (locking wrapper)
int func_02128318(FILE *file, int offset, int whence) {
    int idx;
    OSMutex *m;
    int r;
    OSThread *t;
    if (file == &data_0213c238) idx = 2;
    else if (file == &data_0213c284) idx = 3;
    else if (file == &data_0213c2d0) idx = 4;
    else idx = 5;
    m = &data_02200298[idx];
    if (func_02114354(m) == 0) {
        data_02200250[idx] = data_021fcc2c.cur->id;
        data_02200274[idx] = 1;
    } else if (data_02200250[idx] == (t = data_021fcc2c.cur)->id) {
        data_02200274[idx]++;
    } else {
        func_02114480(m);
        data_02200250[idx] = data_021fcc2c.cur->id;
        data_02200274[idx] = 1;
    }
    r = func_02128450(file, offset, whence);
    data_02200274[idx]--;
    if (data_02200274[idx] == 0) func_02114410(m);
    return r;
}

// rewind
void func_021282f0(FILE *file) {
    file->error = 0;
    func_02128318(file, 0, 0);
    file->error = 0;
}

// fclose core (__close_file)
int func_02128250(FILE *file) {
    int r, r2;
    if (file == 0) return -1;
    if (file->mode.file_kind == 0) return 0;
    r = func_02128150(file);
    r2 = file->close_proc(file->handle);
    file->mode.file_kind = 0;
    file->handle = 0;
    if (file->state.free_buffer) return -1;
    return -(r != 0 || r2 != 0);
}

// fflush
int func_02128150(FILE *file) {
    if (file == 0) return func_02127ad0();
    if (file->error || file->mode.file_kind == 0) return -1;
    if (file->mode.io_mode == 1) return 0;
    if (file->state.io_state >= 3) file->state.io_state = 2;
    if (file->state.io_state == 2) file->buffer_len = 0;
    if (file->state.io_state != 1) {
        file->state.io_state = 0;
        return 0;
    }
    if (func_02127b4c(file, 0) != 0) {
        file->error = 1;
        file->buffer_len = 0;
        return -1;
    }
    file->state.io_state = 0;
    file->position = 0;
    file->buffer_len = 0;
    return 0;
}

u32 func_02128030(const void *ptr, u32 size, u32 n, FILE *file) {
    int idx;
    OSMutex *m;
    u32 r;
    OSThread *t;
    idx = (file == &data_0213c238) ? 2 : 5;
    m = &data_02200298[idx];
    if (func_02114354(m) == 0) {
        data_02200250[idx] = data_021fcc2c.cur->id;
        data_02200274[idx] = 1;
    } else if (data_02200250[idx] == (t = data_021fcc2c.cur)->id) {
        data_02200274[idx]++;
    } else {
        func_02114480(m);
        data_02200250[idx] = data_021fcc2c.cur->id;
        data_02200274[idx] = 1;
    }
    r = func_02127cb8(ptr, size, n, file);
    data_02200274[idx]--;
    if (data_02200274[idx] == 0) func_02114410(m);
    return r;
}
