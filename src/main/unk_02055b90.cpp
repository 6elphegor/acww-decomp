#include "types.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/ModelAnim.h"
#include "proto/main/unk_02055b90.h"
#include "proto/main/unk_02055bcc.h"




char sJointAnmHeader[4] = {'J', 0, 'A', 'C'};

BOOL ModelAnim::allocJointAnm(u32 a, void *c) {
    if (anmObj != 0 || resMdl != 0) {
        return FALSE;
    }
    anmObj = (u32)Gfx3d_AllocAnmObj(a, sJointAnmHeader, c);
    resMdl = a;
    if (anmObj != 0) {
        return TRUE;
    }
    return FALSE;
}
