// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d, autoload_2 0x021030a0-0x021030bc. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 data_02135cd8[][4];

// table lookup: 16-byte rows indexed by p[1], word index p[0]
u32 func_021030a0(const u8 *p)
{
    return data_02135cd8[p[1]][p[0]];
}
