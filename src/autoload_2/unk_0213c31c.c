// mwcc-flags: -nothumb
// MSL float constants (float.c): a data-only file of autoload_2, .data 0x0213c31c-0x0213c32c, between the console
// streams (unk_0212703c.c) and the "C" locale (unk_02128030.c). Users: strtod (unk_0212f300.c), nan (unk_0212703c.c),
// __strtold and pow (not built yet). This definition order gives the original order after mwcc's size sort.
typedef unsigned int u32;

u32 data_0213c324[2] = {0, 0x7ff00000}; // __double_huge (+inf)
u32 data_0213c31c = 0x7f800000; // __float_huge (+inf)
u32 data_0213c320 = 0x7fffffff; // __float_nan
