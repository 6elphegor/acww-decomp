// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: texture/palette VRAM upload objects (tex key, plttkey), sorted render-object lists.
// autoload_2 0x02103bc0-0x02104000. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
#define NULL 0

// NNSG3dRenderObj / NNSG3dAnmObj by their members
#include "nnsys/g3d_rt.h"
#include "proto/autoload_2/unk_02103e40.h"
#include "proto/autoload_2/unk_02103edc.h"

#define NODE_RES_KIND(n) (*(u8 *)(n)->resAnm)

extern void updateHintVec___kernel(u32 *vec, const G3dAnmObj *anm); // src/itcm/unk_01ff8228.c
void addLink_(G3dAnmObj **head, G3dAnmObj *n);

// add a node to the list chosen by its kind ('M', 'J', 'V')
void NNS_G3dRenderObjAddAnmObj(G3dRenderObj *o, G3dAnmObj *n)
{
    switch (NODE_RES_KIND(n)) {
    case 'M':
        updateHintVec___kernel(o->hintMatAnmExist, n);
        addLink_(&o->anmMat, n);
        break;
    case 'J':
        updateHintVec___kernel(o->hintJntAnmExist, n);
        addLink_(&o->anmJnt, n);
        break;
    case 'V':
        updateHintVec___kernel(o->hintVisAnmExist, n);
        addLink_(&o->anmVis, n);
        break;
    }
}

