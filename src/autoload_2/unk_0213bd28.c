// mwcc-flags: -nothumb
// NitroSystem G3D cgtool.c: the function tables by scaling rule / texture matrix mode (basic, Maya, Softimage 3D, 3ds
// Max, XSI). A data-only file of autoload_2, .data 0x0213bd28-0x0213bd50; the functions are in ITCM and autoload_2.
// This definition order gives the original order after mwcc's size sort.
void NNSi_G3dGetJointScaleBasic();
void NNSi_G3dGetJointScaleMaya();
void NNSi_G3dGetJointScaleSi3d();
void NNSi_G3dSendJointSRTBasic();
void NNSi_G3dSendJointSRTMaya();
void NNSi_G3dSendJointSRTSi3d();
void NNSi_G3dSendTexSRTSi3d();
void func_01ff9e10();
void NNSi_G3dSendTexSRT3dsMax();
void func_02108d44();

void (*data_0213bd40[4])() = { // NNS_G3dSendTexSRT_FuncArray
    func_01ff9e10,
    NNSi_G3dSendTexSRTSi3d,
    NNSi_G3dSendTexSRT3dsMax,
    func_02108d44,
};
void (*data_0213bd28[3])() = { // NNS_G3dSendJointSRT_FuncArray
    NNSi_G3dSendJointSRTBasic,
    NNSi_G3dSendJointSRTMaya,
    NNSi_G3dSendJointSRTSi3d,
};
void (*data_0213bd34[3])() = { // NNS_G3dGetJointScale_FuncArray
    NNSi_G3dGetJointScaleBasic,
    NNSi_G3dGetJointScaleMaya,
    NNSi_G3dGetJointScaleSi3d,
};
