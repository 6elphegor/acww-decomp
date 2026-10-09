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

// NNSG3dMatAnmResult (0x38 bytes)
typedef struct G3dMatAnmResult {
    unsigned int flag;                   // 0x00
    unsigned int prmMatColor0;           // 0x04
    unsigned int prmMatColor1;           // 0x08
    unsigned int prmPolygonAttr;         // 0x0c
    unsigned int prmTexImage;            // 0x10
    unsigned int prmTexPltt;             // 0x14
    int scaleS, scaleT;                  // 0x18
    short sinR, cosR;                    // 0x20
    int transS, transT;                  // 0x24
    unsigned short origWidth, origHeight; // 0x2c
    int magW, magH;                      // 0x30
} G3dMatAnmResult;

// NNSG3dJntAnmResult (0x58 bytes)
typedef struct G3dJntAnmResult {
    unsigned int flag;                   // 0x00
    int scale[3];                        // 0x04
    int scaleEx0[3];                     // 0x10
    int scaleEx1[3];                     // 0x1c
    int rot[9];                          // 0x28
    int trans[3];                        // 0x4c
} G3dJntAnmResult;

// NNSG3dVisAnmResult
typedef struct G3dVisAnmResult {
    int isVisible;                       // 0x00
} G3dVisAnmResult;

// NNSG3dRS, the render state of the SBC interpreter (0x188 bytes on the DS)
typedef struct G3dRS {
    unsigned char *c;                    // 0x00 current SBC command
    G3dRenderObj *pRenderObj;            // 0x04
    unsigned int flag;                   // 0x08
    void (*cbVecFunc[32])(struct G3dRS *); // 0x0c callback per SBC command
    unsigned char cbVecTiming[32];       // 0x8c
    unsigned char currentNode;           // 0xac
    unsigned char currentMat;            // 0xad
    unsigned char currentNodeDesc;       // 0xae
    unsigned char dummy_;
    G3dMatAnmResult *pMatAnmResult;      // 0xb0
    G3dJntAnmResult *pJntAnmResult;      // 0xb4
    G3dVisAnmResult *pVisAnmResult;      // 0xb8
    unsigned int isMatCached[2];         // 0xbc
    unsigned int isScaleCacheOne[2];     // 0xc4
    unsigned int isEnvCached[2];         // 0xcc
    unsigned char *pResNodeInfo;         // 0xd4
    unsigned char *pResMat;              // 0xd8
    unsigned char *pResShp;              // 0xdc
    int posScale;                        // 0xe0
    int invPosScale;                     // 0xe4
    void (*funcJntScale)(G3dJntAnmResult *, const int *, const unsigned char *, unsigned int); // 0xe8
    void (*funcJntMtx)(void *);          // 0xec
    void (*funcTexMtx)(void *);          // 0xf0
    G3dMatAnmResult tmpMatAnmResult;     // 0xf4
    G3dJntAnmResult tmpJntAnmResult;     // 0x12c
    G3dVisAnmResult tmpVisAnmResult;     // 0x184
} G3dRS;

// the SBC command callbacks / timings by command (NNS_G3D_SBC_*)
#define G3D_SBC_NODEDESC 6
#define G3D_SBC_BB 7
#define G3D_SBC_BBY 8
#define G3D_SBC_NODEMIX 10
#define G3D_SBC_ENVMAP 12

// an animation object's size for numMapData resources (NNS_G3dAnmObjCalcSizeRequired)
#define G3D_ANMOBJ_SIZE(n) ((unsigned int)((__builtin_offsetof(G3dAnmObj, mapData) + 2 * (n) + 3) & ~3u))

#endif
