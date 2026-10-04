#ifndef NET_GSGPINFOCACHE_H
#define NET_GSGPINFOCACHE_H

#include "types.h"

// GP profile info cache (cf. GameSpy GP SDK gpiInfo.h GPIInfoCache) and the GsGpGetInfoResponse it is copied into (gp.h)
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct GsGpInfoCache {
    /* 0x00 */ char *nick;
    /* 0x04 */ char *uniqueNick;
    /* 0x08 */ char *email;
    /* 0x0c */ char *firstName;
    /* 0x10 */ char *lastName;
    /* 0x14 */ char *homepage;
    /* 0x18 */ s32 icqUin;
    /* 0x1c */ char zipCode[0xb];
    /* 0x27 */ char countryCode[3];
    /* 0x2c */ s32 longitude;
    /* 0x30 */ s32 latitude;
    /* 0x34 */ char location[0x80];
    /* 0xb4 */ s32 birthDay;
    /* 0xb8 */ s32 birthMonth;
    /* 0xbc */ s32 birthYear;
    /* 0xc0 */ s32 sex;
    /* 0xc4 */ s32 publicMask;
    /* 0xc8 */ char *aimName;
    /* 0xcc */ s32 pic;
    /* 0xd0 */ s32 occupationId;
    /* 0xd4 */ s32 industryId;
    /* 0xd8 */ s32 incomeId;
    /* 0xdc */ s32 marriedId;
    /* 0xe0 */ s32 childCount;
    /* 0xe4 */ s32 interests1;
    /* 0xe8 */ s32 ownership1;
    /* 0xec */ s32 connectionType;
};

struct GsGpGetInfoResponse {
    /* 0x000 */ s32 result;
    /* 0x004 */ s32 profileId;
    /* 0x008 */ char nick[0x1f];
    /* 0x027 */ char uniqueNick[0x15];
    /* 0x03c */ char email[0x33];
    /* 0x06f */ char firstName[0x1f];
    /* 0x08e */ char lastName[0x1f];
    /* 0x0ad */ char homepage[0x4c];
    /* 0x0fc */ s32 icqUin;
    /* 0x100 */ char zipCode[0xb];
    /* 0x10b */ char countryCode[3];
    /* 0x110 */ s32 longitude;
    /* 0x114 */ s32 latitude;
    /* 0x118 */ char location[0x80];
    /* 0x198 */ s32 birthDay;
    /* 0x19c */ s32 birthMonth;
    /* 0x1a0 */ s32 birthYear;
    /* 0x1a4 */ s32 sex;
    /* 0x1a8 */ s32 publicMask;
    /* 0x1ac */ char aimName[0x33];
    /* 0x1df */ u8 pad_1df[1];
    /* 0x1e0 */ s32 pic;
    /* 0x1e4 */ s32 occupationId;
    /* 0x1e8 */ s32 industryId;
    /* 0x1ec */ s32 incomeId;
    /* 0x1f0 */ s32 marriedId;
    /* 0x1f4 */ s32 childCount;
    /* 0x1f8 */ s32 interests1;
    /* 0x1fc */ s32 ownership1;
    /* 0x200 */ s32 connectionType;
};

#endif
