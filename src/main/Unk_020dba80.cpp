#include "types.h"

extern "C" {
void func_02050a68(void);
void func_02050a5c(void);
void func_02050ac4(void);
void func_0206c92c(void);
}

// Library base class; its code is ARM in autoload_2 and ITCM. It allocates its objects on a separate heap.
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

// Vtable at 0x020d8c74. Its constructor and destructor are inline, which is why derived constructors and destructors
// store two vtable pointers in a row.
class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c() {}
    virtual BOOL vfunc_08();
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

// Sets up the text system: fonts are loaded in vfunc_00 and freed in vfunc_0c
class Unk_020dba80 : public Unk_020d8c7c {
public:
    Unk_020dba80();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_020dba80();
};

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

extern "C" Unk_020dba80 *func_02051200(void) {
    return new Unk_020dba80;
}

Unk_020dba80::Unk_020dba80() {}

Unk_020dba80::~Unk_020dba80() {}

BOOL Unk_020dba80::vfunc_00() {
    func_02050ac4();
    func_0206c92c();
    return TRUE;
}

BOOL Unk_020dba80::vfunc_18() {
    func_02050a5c();
    return TRUE;
}

BOOL Unk_020dba80::vfunc_0c() {
    func_02050a68();
    return TRUE;
}
