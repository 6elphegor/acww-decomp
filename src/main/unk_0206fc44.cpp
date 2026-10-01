#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    void func_020a8b1c();
    void func_020a8b34(Unk_020e2a08 *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a78;

// buffer interface (destination-side, member at +4)
class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

// buffer interface with write position at +4 and member at +8
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// ---------------------------------------------------------------------------------------------------------------------

// Fixed 0x29 byte string holder
class Unk_020e0470 : public Unk_020e2a60 {
public:
    Unk_020e0470();
    virtual ~Unk_020e0470();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    s32 func_0206f828();

    /* 0x0e */ u8 unk_0e[0x29];
};

// String buffer wrapping a text renderer (Unk_02050288) at +0x3c
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 func_0206fa1c();
    void func_0206f904(u8 a, u8 b, u32 c, u32 d);
    void func_0206fa28(s32 v);
    void func_0206fa4c();
    void func_0206fa74(s32 a, s32 b);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb04(u32 a, u32 b, u8 x, u8 y);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fbe4(u32 id, u8 x, u8 y);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

struct Unk_0206fd10_Mtx {
    s32 m[9];
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fde4_Mtx {
    s32 v[12];
};

struct Unk_0206f6fc_Pos {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fd10_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern "C" {
extern u8 data_020de390;
}

extern "C" {
extern u32 data_020de394[];
}

extern "C" {
extern u32 data_021cb410[];
}

extern "C" {
extern u32 data_021ed2f8[];
}

extern "C" {
extern u32 data_021dfd8c[];
}

extern "C" {
extern void *data_021f482c;
}

extern "C" {
extern void *data_020cbb18;
}

extern "C" {
extern u8 data_021eceac[];
}

extern "C" {
extern u8 data_021e7f8c[];
}

extern "C" {
extern u8 data_021ed210[];
}

extern "C" {
extern u8 data_021ed22e[];
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern u32 data_020c7c1c;
}

extern "C" {
typedef void (*Unk_0206f804_Fn)(u8 *, u32);
}

extern "C" {
extern Unk_0206f804_Fn data_020de3a8[];
}

extern "C" {
extern Unk_02050288_Font data_021c48fc;
}

extern "C" {
extern Unk_02050288_Font data_021c4924;
}

extern "C" {
extern Unk_02050288_Font data_021c4938;
}

extern "C" {
extern Unk_0206fd10_Mtx data_021cb69c;
}

extern "C" {
extern Unk_0206fde4_Mtx data_021cb6cc[];
}

extern "C" {
s32 func_0200402c(u32 a);
}

extern "C" {
void *func_0208a578();
}

extern "C" {
s32 func_0208c134(void *a, u32 b, u32 c);
}

extern "C" {
s32 func_02116048(void *src, void *dst, u32 n);
}

extern "C" {
void func_0206db34(void *a, void *b);
}

extern "C" {
void func_0206dad8();
}

extern "C" {
void func_020795a8(void *a);
}

extern "C" {
void *func_020e8618(void *heap, u32 size);
}

extern "C" {
void func_020e85fc(void *heap, void *p);
}

extern "C" {
s32 func_02096a50(void *obj, s32 v);
}

extern "C" {
BOOL func_02096880(void);
}

extern "C" {
void func_020728d4(void *p);
}

extern "C" {
void func_020728a4(void *p, void *d, s32 n);
}

extern "C" {
void func_02072824(void *p, s32 a, s32 b);
}

extern "C" {
void func_02096f44(void *p);
}

extern "C" {
void func_02065c94();
}

extern "C" {
void *func_0208f158(void *p);
}

extern "C" {
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void func_0208f1a8(void *p, s32 v);
}

extern "C" {
void func_02076a2c(void *a, void *b, void *c);
}

extern "C" {
s32 func_ov003_022201bc(u8 a, u32 b, void *c);
}

extern "C" {
s32 func_ov003_02224d58(void *a, u8 b);
}

extern "C" {
u8 *func_02095204(u8 x);
}

extern "C" {
BOOL func_ov003_02227434(u8 x);
}

extern "C" {
void func_ov003_02227248(u32 a, u8 b);
}

extern "C" {
s32 func_ov003_0222746c(u8 a, s32 b);
}

extern "C" {
s32 func_02076f88(void *p);
}

extern "C" {
s32 func_020512e0(const u8 *str, s32 len);
}

extern "C" {
s32 func_020512f8(const u8 *str, s32 len);
}

extern "C" {
BOOL func_020a78a4(Unk_020e0470 *buf, const void *src, s32 len);
}

extern "C" {
BOOL func_02050e90(Unk_020e0470 *buf, u8 *dst, s32 size);
}

extern "C" {
void func_020b3270(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
}

extern "C" {
void func_020b35f8(void *a, u8 *b, void *c);
}

extern "C" {
void func_020b3558(void *a, u8 *b, u32 c);
}

extern "C" {
u32 func_020a7fa8(u32 arg);
}

extern "C" {
void _ZdlPv(void *p);
}

extern "C" {
Unk_02050288 *func_020a8008(u32 a, u32 b, u32 c);
}

extern "C" {
Unk_02050288 *func_020a8054(u32 a, u32 b, u32 c);
}

extern "C" {
void func_020a7fd8(Unk_02050288 *obj);
}

extern "C" {
s32 func_02002778(u32 id);
}

extern "C" {
s32 func_020027b4(u32 id);
}

extern "C" {
void func_01ffb46c(void *a, void *b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void func_01ffb94c(void *a, void *b, void *c);
}

extern "C" {
void func_01ffb7cc(void *p);
}

extern "C" {
s32 func_02052c54(u16 *p);
}

extern "C" {
BOOL func_02070358(u32 a, u16 *p);
}

extern "C" {
void func_0206f53c(u32 x);
}

extern "C" {
void func_0206f56c(u8 *p);
}

extern "C" {
void func_0206f5a0(u8 *p);
}

extern "C" {
void func_0206f5ac(u8 *p, u32 code);
}

extern "C" {
void func_0206f604(u32 a, u32 b, ...);
}

extern "C" {
void func_0206f638(u8 v);
}

extern "C" {
u8 func_0206f644();
}

extern "C" {
void func_0206f650();
}

extern "C" {
void func_0206f668(u8 *p);
}

extern "C" {
void func_0206f6b8(u8 *p);
}

extern "C" {
void func_0206f6fc(u8 *p, u32 id);
}

extern "C" {
void func_0206f770(u8 *p, u32 id);
}

extern "C" {
void func_0206f7d0(u8 *p);
}

extern "C" {
void func_0206f804(u8 *p, u32 x);
}

extern "C" {
void func_0206f81c();
}

extern "C" {
BOOL func_0206f88c(Unk_020e2a78 *a, u8 *b, s32 len);
}

extern "C" {
void func_0206f920(Unk_020e2a78 *dst, const void *s, s32 len, BOOL a, u8 b);
}

extern "C" {
void func_0206f964(Unk_020e2a78 *a, u8 *b);
}

extern "C" {
void func_0206f994(Unk_020e2a78 *dst, const void *s, s32 len);
}

extern "C" {
void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
}

extern "C" {
void func_0206f9e4(void *a, void *c, u8 v);
}

extern "C" {
void func_0206f9fc(void *a, u8 v);
}

extern "C" {
void func_0206fa10(void *a, u8 *p);
}

extern "C" {
void func_0206fd10(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w);
}

extern "C" {
void func_0206fd64(void *a);
}

extern "C" {
void func_0206fd84(Unk_0206fd10_Vec *v);
}

extern "C" {
void func_0206fdb4(void *a, Unk_0206fd10_Vec *v);
}

extern "C" {
void func_0206fde4(u32 i);
}

extern "C" {
void func_0206fe0c(u32 i);
}

extern "C" {
s32 func_0206fe34(u32 a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
// prototypes (test harness)
void func_0206fdb4(void *a, Unk_0206fd10_Vec *v);
void func_0206fd84(Unk_0206fd10_Vec *v);
void func_0206fd64(void *a);
void func_0206fd10(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w);


void func_0206fdb4(void *a, Unk_0206fd10_Vec *v) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fd84(Unk_0206fd10_Vec *v) {
    Unk_0206fd10_Mtx m;
    func_01ffb7cc(&m);
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fd64(void *a) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

void func_0206fd10(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    if (w == NULL) {
        m.x = v->x;
        m.y = v->y;
        m.z = v->z;
    } else {
        m.x = func_01ffcb0c(v->x, w->x);
        m.y = func_01ffcb0c(v->y, w->y);
        m.z = func_01ffcb0c(v->z, w->z);
    }
    func_01ffb94c(&m, &data_021cb69c, &data_021cb69c);
}

Unk_020e0488::Unk_020e0488() {
    func_020a7c3c();
    unk_3c = NULL;
}

Unk_020e0488::~Unk_020e0488() { func_0206fc44(); }

u32 Unk_020e0488::vfunc_08() { return 0x2a; }

u8 *Unk_020e0488::vfunc_0c() { return (u8 *)this + 0x12; }

void Unk_020e0488::func_0206fc44() {
    if (unk_3c != NULL) {
        func_020a7fd8(unk_3c);
        unk_3c = NULL;
    }
}

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}
