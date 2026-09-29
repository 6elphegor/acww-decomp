#include "types.h"

struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; };

struct Unk_02006d14_Data { u8 pad_00[0x64]; u32 unk_64; };
struct Unk_02006d14 {
    u8 pad_000[0x7ec];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0xc80-0x800];
    s16 unk_c80;
    u8 pad_c82[2];
    u32 unk_c84;
    void func_02006d14(Unk_02006d14_Item* item);
    void func_020076f0();
    void func_020076dc();
    void func_020076b0(u32 id);
    void func_02007c20(u32 id, u32 v);
    void func_02007694(u32 id);
    void func_02010800(u32* id);
    void func_02005e7c(u32 id);
    u32 func_02007c14(u32 id);
    void func_0200ec30(u32 id);
    void func_0200ec1c(u32 id);
    void func_02007ca0(Unk_02006d14_Item* item, u32 v);
    void func_02007cb0(Unk_02006d14_Item* item, u32 v);
    void func_02007d14(Unk_02006d14_Item* item, u32 v);
    void func_02007df4(Unk_02006d14_Item* item, u32 v);
    void func_02008074(Unk_02006d14_Item* item, u32 v);
    void func_020082c0(Unk_02006d14_Item* item, u32 v);
    void func_020083e8(Unk_02006d14_Item* item, u32 v);
    void func_020085a4(Unk_02006d14_Item* item, u32 v);
    void func_0200870c(Unk_02006d14_Item* item, u32 v);
    void func_02008cfc(Unk_02006d14_Item* item, u32 v);
    void func_02008f1c(Unk_02006d14_Item* item, u32 v);
    void func_020092c8(Unk_02006d14_Item* item, u32 v);
    void func_02009624(Unk_02006d14_Item* item, u32 v);
    void func_020097d8(Unk_02006d14_Item* item, u32 v);
    void func_02009888(Unk_02006d14_Item* item, u32 v);
    void func_02009948(Unk_02006d14_Item* item, u32 v);
    void func_02009bdc(Unk_02006d14_Item* item, u32 v);
    void func_02009c94(Unk_02006d14_Item* item, u32 v);
    void func_02009d5c(Unk_02006d14_Item* item, u32 v);
    void func_02009fa8(Unk_02006d14_Item* item, u32 v);
    void func_0200a4f4(Unk_02006d14_Item* item, u32 v);
    void func_0200add8(Unk_02006d14_Item* item, u32 v);
    void func_0200b5e8(Unk_02006d14_Item* item, u32 v);
    void func_0200b854(Unk_02006d14_Item* item, u32 v);
    void func_0200ba00(Unk_02006d14_Item* item, u32 v);
    void func_0200bb54(Unk_02006d14_Item* item, u32 v);
    void func_0200bd2c(Unk_02006d14_Item* item, u32 v);
    void func_0200c1bc(Unk_02006d14_Item* item, u32 v);
    void func_0200c33c(Unk_02006d14_Item* item, u32 v);
    void func_0200c470(Unk_02006d14_Item* item, u32 v);
    void func_0200caf8(Unk_02006d14_Item* item, u32 v);
    void func_0200ce3c(Unk_02006d14_Item* item, u32 v);
    void func_0200cef8(Unk_02006d14_Item* item, u32 v);
    void func_0200d53c(Unk_02006d14_Item* item, u32 v);
    void func_02205e04(Unk_02006d14_Item* item, u32 v);
    void func_02206040(Unk_02006d14_Item* item, u32 v);
    void func_02206240(Unk_02006d14_Item* item, u32 v);
    void func_0220650c(Unk_02006d14_Item* item, u32 v);
    void func_0220675c(Unk_02006d14_Item* item, u32 v);
    void func_022069c8(Unk_02006d14_Item* item, u32 v);
    void func_02206ae8(Unk_02006d14_Item* item, u32 v);
    void func_02206f0c(Unk_02006d14_Item* item, u32 v);
    void func_02207224(Unk_02006d14_Item* item, u32 v);
    void func_022073d4(Unk_02006d14_Item* item, u32 v);
    void func_022076f4(Unk_02006d14_Item* item, u32 v);
    void func_02207944(Unk_02006d14_Item* item, u32 v);
    void func_02207b44(Unk_02006d14_Item* item, u32 v);
    void func_02207cbc(Unk_02006d14_Item* item, u32 v);
    void func_02207d60(Unk_02006d14_Item* item, u32 v);
    void func_02207e6c(Unk_02006d14_Item* item, u32 v);
    void func_022080a0(Unk_02006d14_Item* item, u32 v);
    void func_02208420(Unk_02006d14_Item* item, u32 v);
    void func_022086c8(Unk_02006d14_Item* item, u32 v);
    void func_022089d4(Unk_02006d14_Item* item, u32 v);
    void func_02208b04(Unk_02006d14_Item* item, u32 v);
    void func_02208ca0(Unk_02006d14_Item* item, u32 v);
    void func_02209004(Unk_02006d14_Item* item, u32 v);
    void func_02209314(Unk_02006d14_Item* item, u32 v);
    void func_02209500(Unk_02006d14_Item* item, u32 v);
    void func_022098bc(Unk_02006d14_Item* item, u32 v);
    void func_02209fc8(Unk_02006d14_Item* item, u32 v);
    void func_0220a684(Unk_02006d14_Item* item, u32 v);
    void func_0220abd4(Unk_02006d14_Item* item, u32 v);
    void func_0220ad5c(Unk_02006d14_Item* item, u32 v);
    void func_0220ae40(Unk_02006d14_Item* item, u32 v);
    void func_0220b168(Unk_02006d14_Item* item, u32 v);
    void func_0220b4c4(Unk_02006d14_Item* item, u32 v);
    void func_0220badc(Unk_02006d14_Item* item, u32 v);
    void func_0220c350(Unk_02006d14_Item* item, u32 v);
    void func_0220cfcc(Unk_02006d14_Item* item, u32 v);
    void func_0220d590(Unk_02006d14_Item* item, u32 v);
    void func_0220db5c(Unk_02006d14_Item* item, u32 v);
    void func_0220dcc4(Unk_02006d14_Item* item, u32 v);
    void func_0220de2c(Unk_02006d14_Item* item, u32 v);
    void func_0220df3c(Unk_02006d14_Item* item, u32 v);
    void func_0220e0e4(Unk_02006d14_Item* item, u32 v);
    void func_0220e4bc(Unk_02006d14_Item* item, u32 v);
    void func_0220e688(Unk_02006d14_Item* item, u32 v);
    void func_0220e844(Unk_02006d14_Item* item, u32 v);
    void func_0220ea58(Unk_02006d14_Item* item, u32 v);
    void func_0220ed5c(Unk_02006d14_Item* item, u32 v);
    void func_0220f010(Unk_02006d14_Item* item, u32 v);
    void func_0220f3cc(Unk_02006d14_Item* item, u32 v);
    void func_0220f57c(Unk_02006d14_Item* item, u32 v);
    void func_0220f86c(Unk_02006d14_Item* item, u32 v);
    void func_0220fa70(Unk_02006d14_Item* item, u32 v);
    void func_0220fdd8(Unk_02006d14_Item* item, u32 v);
    void func_02210044(Unk_02006d14_Item* item, u32 v);
    void func_022104a8(Unk_02006d14_Item* item, u32 v);
    void func_0221072c(Unk_02006d14_Item* item, u32 v);
    void func_02210bdc(Unk_02006d14_Item* item, u32 v);
    void func_02210da4(Unk_02006d14_Item* item, u32 v);
    void func_02210f7c(Unk_02006d14_Item* item, u32 v);
    void func_02211210(Unk_02006d14_Item* item, u32 v);
    void func_022115f4(Unk_02006d14_Item* item, u32 v);
    void func_02211818(Unk_02006d14_Item* item, u32 v);
    void func_02211960(Unk_02006d14_Item* item, u32 v);
    void func_02211e74(Unk_02006d14_Item* item, u32 v);
    void func_0221ece4(Unk_02006d14_Item* item, u32 v);
    void func_0221ef14(Unk_02006d14_Item* item, u32 v);
    void func_0221f0e4(Unk_02006d14_Item* item, u32 v);
    void func_0221f474(Unk_02006d14_Item* item, u32 v);
    void func_0221f6c8(Unk_02006d14_Item* item, u32 v);
    void func_0221f77c(Unk_02006d14_Item* item, u32 v);
    void func_0221f824(Unk_02006d14_Item* item, u32 v);
    void func_0221f914(Unk_02006d14_Item* item, u32 v);
    void func_0221fae0(Unk_02006d14_Item* item, u32 v);
    void func_0221fba8(Unk_02006d14_Item* item, u32 v);
    void func_0221fcbc(Unk_02006d14_Item* item, u32 v);
    void func_0221fe10(Unk_02006d14_Item* item, u32 v);
    void func_0221ff48(Unk_02006d14_Item* item, u32 v);
    void func_0222012c(Unk_02006d14_Item* item, u32 v);
    void func_02220320(Unk_02006d14_Item* item, u32 v);
    void func_02220748(Unk_02006d14_Item* item, u32 v);
    void func_02220958(Unk_02006d14_Item* item, u32 v);
    void func_02220a78(Unk_02006d14_Item* item, u32 v);
    void func_02220bd4(Unk_02006d14_Item* item, u32 v);
    void func_02220d0c(Unk_02006d14_Item* item, u32 v);
    void func_02220f38(Unk_02006d14_Item* item, u32 v);
    void func_022211ac(Unk_02006d14_Item* item, u32 v);
    void func_02221380(Unk_02006d14_Item* item, u32 v);
    void func_022214a8(Unk_02006d14_Item* item, u32 v);
    void func_02221574(Unk_02006d14_Item* item, u32 v);
    void func_0222178c(Unk_02006d14_Item* item, u32 v);
    void func_022218f0(Unk_02006d14_Item* item, u32 v);
    void func_02221b38(Unk_02006d14_Item* item, u32 v);
    void func_02221d80(Unk_02006d14_Item* item, u32 v);
    void func_02222040(Unk_02006d14_Item* item, u32 v);
    void func_022222a8(Unk_02006d14_Item* item, u32 v);
    void func_022223c4(Unk_02006d14_Item* item, u32 v);
    void func_0222255c(Unk_02006d14_Item* item, u32 v);
    void func_022226cc(Unk_02006d14_Item* item, u32 v);
    void func_0222283c(Unk_02006d14_Item* item, u32 v);
    void func_02222b74(Unk_02006d14_Item* item, u32 v);
    void func_02222dcc(Unk_02006d14_Item* item, u32 v);
    void func_02223458(Unk_02006d14_Item* item, u32 v);
    void func_0222368c(Unk_02006d14_Item* item, u32 v);
    void func_0222386c(Unk_02006d14_Item* item, u32 v);
    void func_02223ac4(Unk_02006d14_Item* item, u32 v);
    void func_02223ce4(Unk_02006d14_Item* item, u32 v);
    void func_02223e5c(Unk_02006d14_Item* item, u32 v);
    void func_02223fa8(Unk_02006d14_Item* item, u32 v);
    void func_02224284(Unk_02006d14_Item* item, u32 v);
    void func_022244d4(Unk_02006d14_Item* item, u32 v);
    void func_02224734(Unk_02006d14_Item* item, u32 v);
    void func_0226a83c(Unk_02006d14_Item* item, u32 v);
    void func_0226a940(Unk_02006d14_Item* item, u32 v);
};

typedef void (Unk_02006d14::*Unk_02006d14_Fn)(Unk_02006d14_Item*, u32);
extern "C" {
    Unk_02006d14_Data* data_020cbb18;
    extern u32 data_020c6a18[];
    BOOL func_02072e88(Unk_02006d14_Data* p, u32 v);
    BOOL func_020729bc(Unk_02006d14_Data* p, u32 v);
    s32 func_02072e34(Unk_02006d14_Data* p);
}

void Unk_02006d14::func_02006d14(Unk_02006d14_Item* item)
{
    static Unk_02006d14_Fn table[] = {
        &Unk_02006d14::func_0200d53c,
        &Unk_02006d14::func_0200cef8,
        &Unk_02006d14::func_0200ce3c,
        &Unk_02006d14::func_0200caf8,
        &Unk_02006d14::func_0200c470,
        &Unk_02006d14::func_0200c33c,
        &Unk_02006d14::func_02211e74,
        &Unk_02006d14::func_0200c1bc,
        &Unk_02006d14::func_02224734,
        &Unk_02006d14::func_022244d4,
        &Unk_02006d14::func_02224284,
        &Unk_02006d14::func_02223fa8,
        &Unk_02006d14::func_02223e5c,
        &Unk_02006d14::func_02223ce4,
        &Unk_02006d14::func_02223ac4,
        &Unk_02006d14::func_0222386c,
        &Unk_02006d14::func_0200bd2c,
        &Unk_02006d14::func_02211960,
        &Unk_02006d14::func_0222368c,
        &Unk_02006d14::func_0200bb54,
        &Unk_02006d14::func_0200ba00,
        &Unk_02006d14::func_0200b854,
        &Unk_02006d14::func_02211818,
        &Unk_02006d14::func_022115f4,
        &Unk_02006d14::func_0200b5e8,
        &Unk_02006d14::func_0200add8,
        &Unk_02006d14::func_0200a4f4,
        &Unk_02006d14::func_02009fa8,
        &Unk_02006d14::func_02223458,
        &Unk_02006d14::func_02222dcc,
        &Unk_02006d14::func_02222b74,
        &Unk_02006d14::func_0222283c,
        &Unk_02006d14::func_022226cc,
        &Unk_02006d14::func_0222255c,
        &Unk_02006d14::func_022223c4,
        &Unk_02006d14::func_022222a8,
        &Unk_02006d14::func_02222040,
        &Unk_02006d14::func_02221d80,
        &Unk_02006d14::func_02221b38,
        &Unk_02006d14::func_022218f0,
        &Unk_02006d14::func_0222178c,
        &Unk_02006d14::func_02221574,
        &Unk_02006d14::func_022214a8,
        &Unk_02006d14::func_02221380,
        &Unk_02006d14::func_022211ac,
        &Unk_02006d14::func_02220f38,
        &Unk_02006d14::func_02220d0c,
        &Unk_02006d14::func_02220bd4,
        &Unk_02006d14::func_02009d5c,
        &Unk_02006d14::func_02009c94,
        &Unk_02006d14::func_02009bdc,
        &Unk_02006d14::func_02009948,
        &Unk_02006d14::func_02009888,
        &Unk_02006d14::func_020097d8,
        &Unk_02006d14::func_02220a78,
        &Unk_02006d14::func_02220958,
        &Unk_02006d14::func_02211210,
        &Unk_02006d14::func_02210f7c,
        &Unk_02006d14::func_02210da4,
        &Unk_02006d14::func_02210bdc,
        &Unk_02006d14::func_0221072c,
        &Unk_02006d14::func_022104a8,
        &Unk_02006d14::func_02210044,
        &Unk_02006d14::func_02009624,
        &Unk_02006d14::func_02220748,
        &Unk_02006d14::func_02220320,
        &Unk_02006d14::func_0222012c,
        &Unk_02006d14::func_0221ff48,
        &Unk_02006d14::func_0221fe10,
        &Unk_02006d14::func_0220fdd8,
        &Unk_02006d14::func_0220fa70,
        &Unk_02006d14::func_0220f86c,
        &Unk_02006d14::func_0220f57c,
        &Unk_02006d14::func_0220f3cc,
        &Unk_02006d14::func_0220f010,
        &Unk_02006d14::func_0220ed5c,
        &Unk_02006d14::func_0220ea58,
        &Unk_02006d14::func_0220e844,
        &Unk_02006d14::func_0220e688,
        &Unk_02006d14::func_0220e4bc,
        &Unk_02006d14::func_0220e0e4,
        &Unk_02006d14::func_0220df3c,
        &Unk_02006d14::func_0220de2c,
        &Unk_02006d14::func_0220dcc4,
        &Unk_02006d14::func_0220db5c,
        &Unk_02006d14::func_0220d590,
        &Unk_02006d14::func_0220cfcc,
        &Unk_02006d14::func_0220c350,
        &Unk_02006d14::func_0220badc,
        &Unk_02006d14::func_0220b4c4,
        &Unk_02006d14::func_0220b168,
        &Unk_02006d14::func_0220ae40,
        &Unk_02006d14::func_0220ad5c,
        &Unk_02006d14::func_0220abd4,
        &Unk_02006d14::func_0220a684,
        &Unk_02006d14::func_02209fc8,
        &Unk_02006d14::func_022098bc,
        &Unk_02006d14::func_02209500,
        &Unk_02006d14::func_02209314,
        &Unk_02006d14::func_02209004,
        &Unk_02006d14::func_02208ca0,
        &Unk_02006d14::func_02208b04,
        &Unk_02006d14::func_022089d4,
        &Unk_02006d14::func_022086c8,
        &Unk_02006d14::func_02208420,
        &Unk_02006d14::func_022080a0,
        &Unk_02006d14::func_02207e6c,
        &Unk_02006d14::func_02207d60,
        &Unk_02006d14::func_02207cbc,
        &Unk_02006d14::func_02207b44,
        &Unk_02006d14::func_02207944,
        &Unk_02006d14::func_020092c8,
        &Unk_02006d14::func_02008f1c,
        &Unk_02006d14::func_022076f4,
        &Unk_02006d14::func_022073d4,
        &Unk_02006d14::func_02207224,
        &Unk_02006d14::func_02206f0c,
        &Unk_02006d14::func_02206ae8,
        &Unk_02006d14::func_02008cfc,
        &Unk_02006d14::func_0200870c,
        &Unk_02006d14::func_022069c8,
        &Unk_02006d14::func_020085a4,
        &Unk_02006d14::func_0221fcbc,
        &Unk_02006d14::func_0221fba8,
        &Unk_02006d14::func_0221fae0,
        &Unk_02006d14::func_0221f914,
        &Unk_02006d14::func_0221f824,
        &Unk_02006d14::func_0221f77c,
        &Unk_02006d14::func_0220675c,
        &Unk_02006d14::func_0220650c,
        &Unk_02006d14::func_02206240,
        &Unk_02006d14::func_020083e8,
        &Unk_02006d14::func_020082c0,
        &Unk_02006d14::func_02008074,
        &Unk_02006d14::func_02007df4,
        &Unk_02006d14::func_0226a940,
        &Unk_02006d14::func_0226a83c,
        &Unk_02006d14::func_02206040,
        &Unk_02006d14::func_0221f6c8,
        &Unk_02006d14::func_0221f474,
        &Unk_02006d14::func_0221f0e4,
        &Unk_02006d14::func_0221ef14,
        &Unk_02006d14::func_0221ece4,
        &Unk_02006d14::func_02205e04,
        &Unk_02006d14::func_02007d14,
        &Unk_02006d14::func_02007cb0,
        &Unk_02006d14::func_02007ca0
    };
    u32 id = item->unk_00;
    s16 v = item->unk_08;
    Unk_02006d14_Fn fn = table[id];
    u32 old = unk_7f0;
    func_020076f0();
    func_020076dc();
    unk_7ec = id;
    func_020076b0(id);
    func_02007c20(id, old);
    func_02007694(id);
    func_02010800(&id);
    func_02005e7c(id);
    Unk_02006d14_Data* p = data_020cbb18;
    if (func_02072e88(p, p->unk_64)) {
        if (!func_020729bc(p, unk_7fc)) {
            if (v >= 0) { unk_c80 = v; unk_c84 = id; }
        } else {
            unk_c80 = func_02072e34(p);
        }
    }
    (this->*fn)(item, old);
    unk_7f8 = func_02007c14(id);
    if (!func_020729bc(p, unk_7fc) && data_020c6a18[id] != 0) func_0200ec30(0x12);
    else func_0200ec1c(0x12);
}
