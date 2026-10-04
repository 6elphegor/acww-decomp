#ifndef NET_GSGPCONNECTDATA_H
#define NET_GSGPCONNECTDATA_H

#include "types.h"

// GP login data of a connect operation (cf. GameSpy GP SDK gpiOperation.h GPIConnectData): challenges, password hash, auth token,
// CD key (src/ov065/unk_ov065_0227e160.cpp gpiConnect, src/ov065/unk_ov065_0227f2a4.cpp).

struct GsGpConnectData {
    /* 0x000 */ char serverChallenge[0x80];
    /* 0x080 */ char clientChallenge[0x21];
    /* 0x0a1 */ char passwordHash[0x21];
    /* 0x0c2 */ char authToken[0x100];
    /* 0x1c2 */ char authSecret[0x100];
    /* 0x2c2 */ char cdKey[0x42];
    /* 0x304 */ s32 isNewUser;
};

#endif
