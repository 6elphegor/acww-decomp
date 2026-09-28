#include "Unk_020d8c7c.h"

extern "C" {
void func_02050a68(void);
void func_02050a5c(void);
void func_02050ac4(void);
void func_0206c92c(void);
}

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
