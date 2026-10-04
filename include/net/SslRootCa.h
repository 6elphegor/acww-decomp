#ifndef NET_SSLROOTCA_H
#define NET_SSLROOTCA_H

#include "types.h"

// Root CA certificate record of the SSL client's trusted list (also SslConnection::issuerKey; SslCert_FindRootCa
// matches name against the issuer, SslCert_VerifySignature uses modulus/exponent) (ov065 data units unk_ov065_0228bc08.cpp ..
// unk_ov065_0228c72c.cpp, one per certificate): subject name, RSA modulus and public exponent.

struct SslRootCa {
    /* 0x00 */ const char *name;
    /* 0x04 */ s32 modulusLen;
    /* 0x08 */ u8 *modulus;
    /* 0x0c */ s32 exponentLen;
    /* 0x10 */ u8 *exponent;
};

#endif
