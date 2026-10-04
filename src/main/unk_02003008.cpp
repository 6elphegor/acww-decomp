#include "types.h"
#include "npc/VillagerId.h"

extern "C" {
extern u32 gSaveTownId;
void TownId_Assign(void *p, void *s);
u32 TownId_IsValid(void *p);
void func_020639e8(void *buf, void *fmt, u32 a, u32 b);
void MI_CpuFill8(void *p, u32 v, u32 n);
u32 VillagerId_IsValidSpecies(u32 id);
}


extern "C" u32 VillagerId_GetPersonality(VillagerId *o);
extern "C" u32 Villager_PersonalityToGender(u32 t);
extern "C" u32 Villager_PersonalityToVoiceType(u32 t);
extern "C" void Villager_MakePersonalityFileName(void *buf, u32 size, u32 arg, u32 idx);

extern const u32 sPersonalityVoiceTypes[];
extern char *sPersonalityPrefixes[6];

u32 VillagerId::isValid() {
    if (TownId_IsValid(this) == 1 && VillagerId_IsValidSpecies(species) == 1) return TRUE;
    return FALSE;
}

void VillagerId::set(u32 id, u32 type, void *s) {
    species = id;
    personality = type;
    if (s == 0) s = &gSaveTownId;
    TownId_Assign(this, s);
}

extern "C" u32 VillagerId_GetPersonality(VillagerId *o) { return o->personality; }

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
extern char sPersonalityPrefixSnooty[];
extern char sPersonalityPrefixJock[];
extern const u32 sPersonalityVoiceTypes[6];
extern char sPersonalityPrefixNormal[];
extern char sPersonalityPrefixPeppy[];
extern char sPersonalityPrefixCranky[];
extern char *sPersonalityPrefixes[6];
extern char sPersonalityPrefixLazy[];

char sPersonalityPrefixSnooty[] = "ta_";

char sPersonalityPrefixJock[] = "ha_";

const u32 sPersonalityVoiceTypes[6] = {0, 0, 2, 1, 1, 1};

char sPersonalityPrefixNormal[] = "fu_";

char sPersonalityPrefixPeppy[] = "ge_";

char sPersonalityPrefixCranky[] = "ko_";

char *sPersonalityPrefixes[6] = {sPersonalityPrefixLazy, sPersonalityPrefixJock, sPersonalityPrefixCranky, sPersonalityPrefixNormal, sPersonalityPrefixPeppy, sPersonalityPrefixSnooty};

char sPersonalityPrefixLazy[] = "bo_";
