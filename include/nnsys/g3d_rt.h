#ifndef NNSYS_G3D_RT_H
#define NNSYS_G3D_RT_H

// NitroSystem G3D runtime objects by their members (the layouts of the SDK's g3d headers, as the ITCM G3D core
// declares them: src/itcm/unk_01ff8228.c). The offset-based helpers in autoload_2 use them in the host build, where
// the pointers make the objects larger than on the DS.

// (plain C types: the offset-based units declare their own u8 / u32)


// NNSG3dAnmObj (0x1a + 2 * numMapData bytes on the DS)
typedef struct G3dAnmObj {
    int frame;                  // 0x00
    int ratio;                  // 0x04
    void *resAnm;               // 0x08
    void *funcAnm;              // 0x0c
    struct G3dAnmObj *next;     // 0x10
    void *resTex;               // 0x14
    unsigned char priority;                // 0x18
    unsigned char numMapData;              // 0x19
    unsigned short mapData[1];             // 0x1a
} G3dAnmObj;

// NNSG3dRenderObj (0x54 bytes on the DS)
typedef struct G3dRenderObj {
    unsigned int flag;                   // 0x00
    void *resMdl;               // 0x04
    G3dAnmObj *anmMat;          // 0x08
    void *funcBlendMat;         // 0x0c
    G3dAnmObj *anmJnt;          // 0x10
    void *funcBlendJnt;         // 0x14
    G3dAnmObj *anmVis;          // 0x18
    void *funcBlendVis;         // 0x1c
    void *cbFunc;               // 0x20
    unsigned char cbCmd;                   // 0x24
    unsigned char cbTiming;                // 0x25
    unsigned short dummy_;
    void *cbInitFunc;           // 0x28
    void *ptrUser;              // 0x2c
    unsigned char *ptrUserSbc;             // 0x30
    void *recJntAnm;            // 0x34
    void *recMatAnm;            // 0x38
    unsigned int hintMatAnmExist[2];     // 0x3c
    unsigned int hintJntAnmExist[2];     // 0x44
    unsigned int hintVisAnmExist[2];     // 0x4c
} G3dRenderObj;

// an animation object's size for numMapData resources (NNS_G3dAnmObjCalcSizeRequired)
#define G3D_ANMOBJ_SIZE(n) ((unsigned int)(((__UINTPTR_TYPE__)&((G3dAnmObj *)0)->mapData[0] + 2 * (n) + 3) & ~3u))

#endif
