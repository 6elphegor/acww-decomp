// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern u32 data_021fcbf4, data_021fcc00, data_021fcc04, data_021fcc08;
typedef struct { u16 x, y, z; } T6;
extern T6 data_02139f54[], data_02139f56[], data_02139f58[];
s32 func_0210f720(void);

// GX_BeginLoadTex
void func_0211220c(void) {
    s32 i = func_0210f720();
    data_021fcc00 = i;
    data_021fcbf4 = (u32)data_02139f54[i].x << 12;
    data_021fcc04 = (u32)data_02139f56[i].x << 12;
    data_021fcc08 = (u32)data_02139f58[i].x << 12;
}

