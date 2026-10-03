// mwcc-flags: -str reuse
#include "types.h"


extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getCatalogEv(void *a);
BOOL Catalog_HasItem(void *a, void *b);
u8 *func_02063b8c(s32 a);
void MailText_SetSlot(s32 a, void *b);
u32 _ZN10PlayerData11getPlayerIdEv(void *a);
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
void _ZN10LetterView10setPresentEtj(void *a, u32 b, s32 c);
void LetterDelivery_QueueOutgoing(void *a, s32 b);
void func_020af488(u32 a);
extern u8 data_021ee25c[];
extern const u16 data_020d09cc[];
extern u32 data_020e2eb8, data_020e2ebc;
}
struct ItemName { ItemName(u16 *s); ~ItemName(); u8 d[0x24]; };
struct Letter { Letter(); ~Letter(); u8 d[0xf4]; };

struct Loc488 { u8 a; u8 pad; u16 b; };
extern "C" void func_020af488(u32 idx) {
    if (idx < 13) {
        Loc488 l;
        l.b = data_020d09cc[idx];
        void *obj = PlayerData_GetCurrent();
        if (obj) {
            Letter big;
            l.a = idx;
            ItemName s(&l.b);
            MailText_SetSlot(1, &s);
            Letter_ComposeFromMail(&big, &l, "sp_npc_snowman", &data_020e2eb8, &data_020e2ebc, _ZN10PlayerData11getPlayerIdEv(obj));
            _ZN10LetterView10setPresentEtj(&big, l.b, 1);
            LetterDelivery_QueueOutgoing(&big, 0);
        }
    }
}

extern "C" void func_020af3fc() {
    void *obj = PlayerData_GetCurrent();
    if (obj) {
        u32 count = 0;
        for (u32 i = 0; i < 13; i++) {
            u16 t = data_020d09cc[i];
            if (!Catalog_HasItem(_ZN10PlayerData10getCatalogEv(obj), &t)) count++;
        }
        if (count) {
            u32 r = (u32)func_02063b8c(count);
            u32 c = 0;
            for (u32 i = 0; i < 13; i++) {
                u16 t = data_020d09cc[i];
                if (!Catalog_HasItem(_ZN10PlayerData10getCatalogEv(obj), &t)) {
                    if (c == r) {
                        func_020af488(i);
                        return;
                    }
                    c++;
                }
            }
        }
        func_020af488((u32)func_02063b8c(13));
    }
}

extern "C" u8 *func_020af3f4() { return data_021ee25c; }


u32 data_020e2ebc = 0x11;
u32 data_020e2eb8 = 0xa;

const u16 data_020d09cc[13] = {0x31f8, 0x31f4, 0x31e0, 0x31ec, 0x3204, 0x31f0, 0x31fc, 0x31e4, 0x31e8, 0x3200, 0x1150, 0x110c, 0x36d4};
