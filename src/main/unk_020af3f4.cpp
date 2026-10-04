// mwcc-flags: -str reuse
#include "types.h"
#include "item/Letter.h"
#include "game/Loc488.h"
#include "item/ItemName.h"


extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData10getCatalogEv(void *a);
BOOL Catalog_HasItem(void *a, void *b);
u8 *Random_GlobalBelow(s32 a);
void MailText_SetSlot(s32 a, void *b);
u32 _ZN10PlayerData11getPlayerIdEv(void *a);
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
void _ZN10LetterView10setPresentEtj(void *a, u32 b, s32 c);
void LetterDelivery_QueueOutgoing(void *a, s32 b);
void Snowman_SendLetter(u32 a);
extern u8 gLooseSnowballs[];
extern const u16 sSnowmanPrizeItems[];
extern u32 data_020e2eb8, data_020e2ebc;
}

extern "C" void Snowman_SendLetter(u32 idx) {
    if (idx < 13) {
        Loc488 l;
        l.b = sSnowmanPrizeItems[idx];
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

extern "C" void Snowman_SendPrizeLetter() {
    void *obj = PlayerData_GetCurrent();
    if (obj) {
        u32 count = 0;
        for (u32 i = 0; i < 13; i++) {
            u16 t = sSnowmanPrizeItems[i];
            if (!Catalog_HasItem(_ZN10PlayerData10getCatalogEv(obj), &t)) count++;
        }
        if (count) {
            u32 r = (u32)Random_GlobalBelow(count);
            u32 c = 0;
            for (u32 i = 0; i < 13; i++) {
                u16 t = sSnowmanPrizeItems[i];
                if (!Catalog_HasItem(_ZN10PlayerData10getCatalogEv(obj), &t)) {
                    if (c == r) {
                        Snowman_SendLetter(i);
                        return;
                    }
                    c++;
                }
            }
        }
        Snowman_SendLetter((u32)Random_GlobalBelow(13));
    }
}

extern "C" u8 *LooseSnowballs_Get() { return gLooseSnowballs; }


u32 data_020e2ebc = 0x11;
u32 data_020e2eb8 = 0xa;

const u16 sSnowmanPrizeItems[13] = {0x31f8, 0x31f4, 0x31e0, 0x31ec, 0x3204, 0x31f0, 0x31fc, 0x31e4, 0x31e8, 0x3200, 0x1150, 0x110c, 0x36d4};
