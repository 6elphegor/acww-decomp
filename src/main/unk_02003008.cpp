#include "types.h"

extern "C" {
extern u32 gSaveTownId;
void func_02063990(void *p, void *s);
u32 func_02063954(void *p);
void func_020639e8(void *buf, void *fmt, u32 a, u32 b);
void MI_CpuFill8(void *p, u32 v, u32 n);
u32 VillagerId_IsValidSpecies(u32 id);
}

// Class with a type byte at +0x0a and an id byte at +0x0b (base class unknown, 0xc bytes in total)
class VillagerId {
public:
    void makeFileName(void *buf, u32 size, u32 arg);
    u32 getGender();
    void set(u32 id, u32 type, void *s);
    u32 isValid();

    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" u32 VillagerId_GetPersonality(VillagerId *o);
extern "C" u32 Villager_PersonalityToGender(u32 t);
extern "C" u32 Villager_PersonalityToVoiceType(u32 t);
extern "C" void Villager_MakePersonalityFileName(void *buf, u32 size, u32 arg, u32 idx);

extern const u32 sPersonalityVoiceTypes[];
extern char *sPersonalityPrefixes[6];

u32 VillagerId::isValid() {
    if (func_02063954(this) == 1 && VillagerId_IsValidSpecies(unk_0b) == 1) return TRUE;
    return FALSE;
}

void VillagerId::set(u32 id, u32 type, void *s) {
    unk_0b = id;
    unk_0a = type;
    if (s == 0) s = &gSaveTownId;
    func_02063990(this, s);
}

extern "C" u32 VillagerId_GetPersonality(VillagerId *o) { return o->unk_0a; }

extern "C" u32 Villager_PersonalityToGender(u32 t) {
    u32 r = 2;
    if (t < 3) r = 0;
    else if (t < 6) r = 1;
    return r;
}

u32 VillagerId::getGender() {
    return Villager_PersonalityToGender(VillagerId_GetPersonality(this));
}

extern "C" void Villager_MakePersonalityFileName(void *buf, u32 size, u32 arg, u32 idx) {
    MI_CpuFill8(buf, 0, size);
    func_020639e8(buf, (void *)"%s%s", (u32)sPersonalityPrefixes[idx], arg);
}

void VillagerId::makeFileName(void *buf, u32 size, u32 arg) {
    Villager_MakePersonalityFileName(buf, size, arg, VillagerId_GetPersonality(this));
}

extern "C" u32 Villager_PersonalityToVoiceType(u32 t) {
    u32 r = 5;
    if (t < 6) r = sPersonalityVoiceTypes[t];
    return r;
}

// Declarations for data defined further down (definition order sets the data layout)
extern char data_020d5dd0[];
extern char data_020d5de0[];
extern const u32 sPersonalityVoiceTypes[6];
extern char data_020d5dd8[];
extern char data_020d5dd4[];
extern char data_020d5ddc[];
extern char *sPersonalityPrefixes[6];
extern char data_020d5dcc[];

char data_020d5dd0[] = "ta_";

char data_020d5de0[] = "ha_";

const u32 sPersonalityVoiceTypes[6] = {0, 0, 2, 1, 1, 1};

char data_020d5dd8[] = "fu_";

char data_020d5dd4[] = "ge_";

char data_020d5ddc[] = "ko_";

char *sPersonalityPrefixes[6] = {data_020d5dcc, data_020d5de0, data_020d5ddc, data_020d5dd8, data_020d5dd4, data_020d5dd0};

char data_020d5dcc[] = "bo_";
