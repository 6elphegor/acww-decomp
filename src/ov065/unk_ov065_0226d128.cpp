// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef unsigned long long u64;
typedef long long s64;

typedef void *(*Unk_ov065_0226dd2c_Alloc)(const char *, u32);
typedef void (*Unk_ov065_0226dd2c_Free)(const char *, void *, u32);

struct Unk_ov065_0226d158_Form {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226d158_Date {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov065_0226d158_Time {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0226d158_Kv {
    const char *key;
    const char *val;
};

struct Unk_ov065_0226d158_Owner {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u16 unk_04[10];
    u16 unk_18;
    u16 unk_1a[26];
    u16 unk_4e;
};

struct Unk_ov065_02290604_S {
    u64 unk_00;
    u64 unk_08;
    u16 unk_10;
};

struct Unk_ov065_02290600_Obj {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x938 - 0x28];
    void *unk_938;
    u8 pad_93c[0x968 - 0x93c];
    u8 unk_968[0x9d4 - 0x968];
    s32 unk_9d4;
};

struct Unk_ov065_0226dd2c_Cfg {
    u32 v[11];
};

struct Unk_ov065_02290600_S {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    char unk_0c[4];
    char unk_10[0xf];
    char unk_1f[0x33];
    char unk_52[0x12d];
    char unk_17f[9];
    char unk_188[0x41];
    u8 pad_1c9[0x1cc - 0x1c9];
    Unk_ov065_0226dd2c_Cfg unk_1cc;
    u8 unk_1f8[0x2f8 - 0x1f8];
    Unk_ov065_02290600_Obj *unk_2f8;
    u8 unk_2fc[0x368 - 0x2fc];
    s32 unk_368;
    u8 pad_36c[0x3bc - 0x36c];
    u8 unk_3bc[0x18];
    s32 unk_3d4;
    u8 unk_3d8[0x13e0 - 0x3d8];
};

typedef Unk_ov065_02290600_S S;

struct Unk_ov065_0228b778 {
    char *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_ov065_0226dd2c_Alloc unk_10;
    Unk_ov065_0226dd2c_Free unk_14;
    s32 unk_18;
    s32 unk_1c;
};

// the same symbol is called with and without its argument
namespace Unk_ov065_0226e4dc_A {
extern "C" s32 DwcHttp_Destroy(void);
}
namespace Unk_ov065_0226e4dc_B {
extern "C" s32 DwcHttp_Destroy(void *p);
}

extern "C" {
extern S *sNasAuth;
extern Unk_ov065_02290604_S sNasUserId;
extern u32 data_0220064c;
extern char sNasLangCode01[4];
extern char sNasLangCode03[4];
extern char sNasLangCode04[4];
extern char sNasLangCode02[4];
extern char sNasLangCode05[4];
extern char sNasLangCode00[4];
extern char sNasLangCode06[4];
extern char *sNasLangCodeTable[7];
extern char sNasDefaultUrl[0x20];
extern Unk_ov065_0228b778 sNasHttpParams;

extern s32 memcmp(const void *a, const void *b, u32 n);
extern void MI_CpuCopy8(const void *src, void *dst, u32 n);
extern void MI_CpuFill8(void *dst, u32 v, u32 n);
extern void OS_GetMacAddress(void *p);
extern void OS_GetOwnerInfo(void *p);
extern s32 RTC_GetDate(void *p);
extern s32 RTC_GetTime(void *p);
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32 v);
extern s32 OS_SPrintf(char *buf, const char *fmt, ...);
extern s32 OS_SNPrintf(char *buf, u32 n, const char *fmt, ...);
extern s32 func_0212a438(const char *s);
extern s32 func_0212dcb4(const void *s);
extern void func_020ff0bc(void *p);
extern void OS_LockMutex(void *m);
extern void OS_UnlockMutex(void *m);
extern s32 OS_InitMutex(void *m);
extern s32 func_0212b770(void);
extern s32 strtol(const char *s, char **end, s32 base);
extern s32 func_020ff6f4(void *p, u32 v);
extern void func_020ff5cc(void *p);
extern void func_020ff734(u32 v);
extern void OS_JoinThread(void *p);
extern s32 OS_IsThreadTerminated(void *t);
extern s32 OS_WakeupThreadDirect(void *t);
extern s32 OS_CreateThread(void *t, s32 (*fn)(void *), void *arg, void *stack, u32 size, u32 prio);
extern s64 OS_GetTick(void);
extern void OS_Sleep(u32 ms);
extern s32 strcmp(const char *a, const char *b);
extern char *func_0212a360(char *dst, const char *src);

extern void WifiAp_GetNdwcshapApInfo(void *a, void *dst);
extern u8 *WifiLink_GetConnectedBssid(void);
extern u8 *WifiLink_GetConnectedSsid(u16 *out);
extern u32 WifiAp_GetConnectedApType(void);
extern s32 DwcHttp_AddField(void *l, const char *k, const char *v);
extern s32 DwcHttp_AddHeader(void *a, const char *k, const char *v);
extern s32 DwcHttp_AddFormParam(void *a, const char *k, const char *v, u32 n);
extern char *DwcHttp_FindField(void *buf, s32 n, const char *key);
extern s32 DwcHttp_GetFieldDecoded(void *buf, s32 n, const char *key, char *out, u32 max);
extern s32 DwcHttp_GetFieldString(void *buf, s32 n, const char *key, char *out, s32 max);
extern s32 DwcHttp_ParseResponse(void *buf, s32 n, s32 a, void *b);
extern s32 DwcHttp_Init(u32 a, void *b);
extern s32 DwcHttp_FinishHeaders(u32 a);
extern s32 DwcHttp_StartThread(u32 a);
extern s32 DwcHttp_Abort(void);
extern s32 NasBase64_Decode(const char *s, s32 len, char *dst, u32 size);

void NasAuth_SetState(s32 v);
s32 NasAuth_BuildRequest(void *a0, const char *a1, const u16 *a2, Unk_ov065_0226d158_Kv *a3, s32 a4, s32 a5);
s32 NasAuth_ParseResponse(void);
s32 NasAuth_HandleResponse(void);
void NasAuth_ThreadMain(void);
s32 NasAuth_SendRequest(s32 a);
void NasAuth_GetResult(s32 *p);
s32 NasAuth_GetState(void);
void NasAuth_JoinThread(void);
void NasAuth_Destroy(void);
void NasAuth_Abort(void);
void NasAuth_StartThread(void);
s32 NasAuth_Start(Unk_ov065_0226dd2c_Cfg *cfg, u32 a);
void NasAuth_SetServerUrl(char *s);
}

extern "C" {
char sNasLangCode04[4] = "04";
Unk_ov065_02290604_S sNasUserId;
char sNasLangCode01[4] = "01";
char sNasLangCode06[4] = "06";
char sNasDefaultUrl[0x20] = "https://nas.nintendowifi.net/ac";
char sNasLangCode00[4] = "00";
char sNasLangCode05[4] = "05";
char sNasLangCode02[4] = "02";
Unk_ov065_0228b778 sNasHttpParams = {sNasDefaultUrl, 0, 0, 0x1000, 0, 0, 0, 0x4e20};
char sNasLangCode03[4] = "03";
S *sNasAuth;
char *sNasLangCodeTable[7] = {sNasLangCode00, sNasLangCode01, sNasLangCode02,
                                sNasLangCode03, sNasLangCode04, sNasLangCode05,
                                sNasLangCode06};
}

extern "C" {

void NasAuth_SetServerUrl(char *s) {
    sNasHttpParams.unk_00 = s;
}

s32 NasAuth_Start(Unk_ov065_0226dd2c_Cfg *cfg, u32 a) {
    if (sNasAuth != NULL) {
        return 2;
    }
    void *p = ((Unk_ov065_0226dd2c_Alloc)cfg->v[9])("DWCAuth", 0x13e0);
    if (p == NULL) {
        return 2;
    }
    sNasAuth = (S *)p;
    MI_CpuFill8(p, 0, 0x13e0);
    sNasAuth->unk_2f8 = (Unk_ov065_02290600_Obj *)a;
    MI_CpuFill8(&sNasAuth->unk_08, 0, 0x1c4);
    sNasAuth->unk_08 = -1;
    sNasAuth->unk_1cc = *cfg;
    *((u8 *)sNasAuth + 0x1e0) = 0;
    *((u8 *)sNasAuth + 0x1e1) = 0;
    *((u8 *)sNasAuth + 0x1ed) = 0;
    sNasHttpParams.unk_10 = (Unk_ov065_0226dd2c_Alloc)cfg->v[9];
    sNasHttpParams.unk_14 = (Unk_ov065_0226dd2c_Free)cfg->v[10];
    sNasAuth->unk_04 = NasAuth_SendRequest(1);
    if (sNasAuth->unk_04 == 0) {
        NasAuth_StartThread();
        return 0;
    }
    return sNasAuth->unk_04;
}

void NasAuth_StartThread(void) {
    OS_InitMutex(sNasAuth->unk_3bc);
    sNasAuth->unk_3d4 = 0;
    if (sNasAuth->unk_368 == 0 || OS_IsThreadTerminated(sNasAuth->unk_2fc) != 0) {
        OS_CreateThread(sNasAuth->unk_2fc, (s32 (*)(void *))NasAuth_ThreadMain, &sNasAuth,
                      (u8 *)sNasAuth + 0x13e0, 0x1000, 0x10);
        OS_WakeupThreadDirect(sNasAuth->unk_2fc);
    }
}

void NasAuth_Abort(void) {
    if (sNasAuth != NULL) {
        OS_LockMutex(sNasAuth->unk_3bc);
        sNasAuth->unk_3d4 = 1;
        OS_UnlockMutex(sNasAuth->unk_3bc);
        if (sNasAuth->unk_2f8) {
            DwcHttp_Abort();
        }
        if (sNasAuth->unk_368) {
            OS_JoinThread(sNasAuth->unk_2fc);
        }
    }
}

void NasAuth_Destroy(void) {
    if (sNasAuth != NULL) {
        if (sNasAuth->unk_2f8) {
            Unk_ov065_0226e4dc_A::DwcHttp_Destroy();
        }
        ((Unk_ov065_0226dd2c_Free)sNasAuth->unk_1cc.v[10])("DWCauth", sNasAuth, 0);
        sNasAuth = NULL;
    }
}

void NasAuth_JoinThread(void) {
    if (sNasAuth->unk_368) {
        OS_JoinThread(sNasAuth->unk_2fc);
    }
}

s32 NasAuth_GetState(void) {
    s32 r;
    if (sNasAuth == NULL) {
        return 0x15;
    }
    OS_LockMutex(sNasAuth->unk_3bc);
    r = sNasAuth->unk_04;
    OS_UnlockMutex(sNasAuth->unk_3bc);
    return r;
}

void NasAuth_GetResult(s32 *p) {
    if (sNasAuth == NULL) {
        MI_CpuFill8(p, 0, 0x1c4);
    }
    MI_CpuCopy8(&sNasAuth->unk_08, p, 0x1c4);
    s32 v = p[0];
    if (v >= 0) {
        if (v < 20000 || v >= 30000) {
            p[0] = -20998;
        }
    } else if (v > -20000 || v <= -30000) {
        p[0] = -20998;
    }
}

s32 NasAuth_SendRequest(s32 a) {
    if (strcmp(sNasHttpParams.unk_00, sNasDefaultUrl)) {
        sNasHttpParams.unk_18 = 1;
    }
    if (DwcHttp_Init((u32)sNasAuth->unk_2f8, &sNasHttpParams)) {
        return 4;
    }
    if (a == 1) {
        func_020ff0bc(&sNasUserId);
    }
    sNasAuth->unk_04 = NasAuth_BuildRequest(
        sNasAuth->unk_2f8, (char *)sNasAuth + 0x1e2, (u16 *)((u8 *)sNasAuth + 0x1cc),
        (Unk_ov065_0226d158_Kv *)((u8 *)sNasAuth + 0x1f8), 0x20, 0);
    if (sNasAuth->unk_04 != 0) {
        return 4;
    }
    if (DwcHttp_FinishHeaders((u32)sNasAuth->unk_2f8)) {
        return 4;
    }
    DwcHttp_StartThread((u32)sNasAuth->unk_2f8);
    return 0;
}

void NasAuth_ThreadMain(void) {
    s32 tries = 0;
    s32 flag;
    s32 z0 = 0;
    s32 z1 = 0;
    s32 z2 = 0;
    s32 r;
    s64 t0;
    s64 ms;
    Unk_ov065_02290600_Obj *o;
    S *g;

    for (;;) {
        o = sNasAuth->unk_2f8;
        if (o->unk_9d4 != 0) {
            OS_JoinThread(o->unk_968);
        }
        g = sNasAuth;
        if (g->unk_2f8->unk_24 != 8) {
            g->unk_08 = -0x4e84;
            r = sNasAuth->unk_2f8->unk_24;
            if (r == 7) {
                NasAuth_SetState(0x13);
                return;
            }
            if (tries > 2) {
                if (r == 2) {
                    NasAuth_SetState(9);
                    return;
                }
                NasAuth_SetState(0xc);
                return;
            }
            tries++;
            flag = 1;
        } else {
            r = NasAuth_HandleResponse();
            switch (r) {
            case 0x14:
                NasAuth_SetState(0x14);
                return;
            case 0xf:
                if (tries >= 2) {
                    NasAuth_SetState(0xf);
                    sNasAuth->unk_08 = -sNasAuth->unk_08;
                    return;
                }
                tries++;
                flag = z1;
                break;
            case 0x10:
                sNasAuth->unk_08 = -sNasAuth->unk_08;
                NasAuth_SetState(r);
                return;
            default:
                if (tries >= 2) {
                    sNasAuth->unk_08 = -sNasAuth->unk_08;
                    NasAuth_SetState(r);
                    return;
                }
                tries++;
                flag = 1;
                break;
            }
        }
        t0 = OS_GetTick();
        while ((u64)((OS_GetTick() - t0) * 64) / 0x82ea < 0x1388) {
            OS_LockMutex(sNasAuth->unk_3bc);
            if (sNasAuth->unk_3d4 == 1) {
                sNasAuth->unk_08 = -0x4e84;
                OS_UnlockMutex(sNasAuth->unk_3bc);
                NasAuth_SetState(0x13);
                return;
            }
            OS_UnlockMutex(sNasAuth->unk_3bc);
            OS_Sleep(0x1388);
        }
        Unk_ov065_0226e4dc_B::DwcHttp_Destroy(sNasAuth->unk_2f8);
        OS_LockMutex(sNasAuth->unk_3bc);
        sNasAuth->unk_04 = NasAuth_SendRequest(flag);
        if (sNasAuth->unk_04 != 0) {
            sNasAuth->unk_08 = -0x4e84;
            OS_UnlockMutex(sNasAuth->unk_3bc);
            return;
        }
        OS_UnlockMutex(sNasAuth->unk_3bc);
    }
}

s32 NasAuth_HandleResponse(void) {
    S *g;
    char *m;
    void *r;

    g = sNasAuth;
    if (DwcHttp_ParseResponse(g->unk_1f8, 0x20, 0, g->unk_2f8->unk_938) != 1) {
        sNasAuth->unk_08 = 0x4e84;
        return 0xd;
    }
    if (NasAuth_ParseResponse() != 0) {
        return 0xd;
    }
    g = sNasAuth;
    s32 st = g->unk_08;
    if (st < 0x4e84) {
        if (st == 0x4e22) {
            m = "bmwork";
            r = ((Unk_ov065_0226dd2c_Alloc)g->unk_1cc.v[9])(m, 0x71f);
            if (r == 0) {
                sNasAuth->unk_08 = 0x4e84;
                return 2;
            }
            if (func_020ff6f4(&sNasUserId, ((u32)r + 0x1f) & ~0x1f) != 1) {
                ((Unk_ov065_0226dd2c_Free)sNasAuth->unk_1cc.v[10])(m, r, 0);
                sNasAuth->unk_08 = 0x4e84;
                return 0xe;
            }
            ((Unk_ov065_0226dd2c_Free)sNasAuth->unk_1cc.v[10])(m, r, 0);
        }
        return 0x14;
    }
    switch (st) {
    case 0x4e88:
        func_020ff5cc(&sNasUserId);
        sNasAuth->unk_08 = 0x4e88;
        return 0xf;
    case 0x4e8c:
        m = "bmwork";
        r = ((Unk_ov065_0226dd2c_Alloc)g->unk_1cc.v[9])(m, 0x71f);
        if (r == 0) {
            sNasAuth->unk_08 = 0x4e8c;
            return 0x10;
        }
        func_020ff734(((u32)r + 0x1f) & ~0x1f);
        ((Unk_ov065_0226dd2c_Free)sNasAuth->unk_1cc.v[10])(m, r, 0);
        sNasAuth->unk_08 = 0x4e8c;
        return 0x10;
    default:
        return 0x11;
    }
}

s32 NasAuth_ParseResponse(void) {
    char *end = 0;
    S *g;

    DwcHttp_FindField(sNasAuth->unk_1f8, 0x20, "httpresult");
    s32 st = func_0212b770();
    if (data_0220064c == 0x22) {
        sNasAuth->unk_08 = 0x4e85;
        return 0xb;
    }
    if (st != 200) {
        sNasAuth->unk_08 = st + 0x59d8;
        return 0x11;
    }
    g = sNasAuth;
    if (DwcHttp_GetFieldDecoded(g->unk_1f8, 0x20, "returncd", g->unk_0c, 4) <= 0) {
        sNasAuth->unk_08 = 0x4e85;
        return 0xd;
    }
    s32 code = strtol(sNasAuth->unk_0c, &end, 10);
    g = sNasAuth;
    s32 l = func_0212a438(g->unk_0c);
    if (end != g->unk_0c + l) {
        g->unk_08 = 0x4e85;
        return 0xb;
    }
    g->unk_08 = code + 0x4e20;
    if (code < 100) {
        sNasAuth->unk_52[0] = 0;
        sNasAuth->unk_1f[0] = 0;
        sNasAuth->unk_17f[0] = 0;
        sNasAuth->unk_10[0] = 0;
        sNasAuth->unk_188[0] = 0;
        g = sNasAuth;
        DwcHttp_GetFieldDecoded(g->unk_1f8, 0x20, "token", g->unk_52, 0x12d);
        g = sNasAuth;
        DwcHttp_GetFieldDecoded(g->unk_1f8, 0x20, "locator", g->unk_1f, 0x33);
        g = sNasAuth;
        DwcHttp_GetFieldDecoded(g->unk_1f8, 0x20, "challenge", g->unk_17f, 9);
        g = sNasAuth;
        DwcHttp_GetFieldDecoded(g->unk_1f8, 0x20, "datetime", g->unk_10, 0xf);
        g = sNasAuth;
        DwcHttp_GetFieldString(g->unk_1f8, 0x20, "Set-Cookie", g->unk_188, 0x41);
        sNasAuth->unk_188[0x2b] = 0;
    }
    return 0;
}

s32 NasAuth_BuildRequest(void *a0, const char *a1, const u16 *a2, Unk_ov065_0226d158_Kv *a3, s32 a4, s32 a5) {
    u16 len;
    u8 mac[6];
    u8 mac2[6];
    char code4[5];
    char code2[3];
    char birth[5];
    char pw[4];
    Unk_ov065_0226d158_Date date;
    Unk_ov065_0226d158_Time time;
    Unk_ov065_0226d158_Form form;
    char macstr[13];
    char devtime[13];
    char nick[0x15];
    char bssid[13];
    u8 buf[0x21];
    char apinfo[14];
    char userid[14];
    Unk_ov065_0226d158_Owner owner;
    s32 i;
    u32 irq;
    u8 *ptr;

    OS_GetMacAddress(mac);
    OS_GetOwnerInfo(&owner);
    if (RTC_GetDate(&date) != 0 || RTC_GetTime(&time) != 0) {
        return 5;
    }
    irq = OS_DisableInterrupts();
    ptr = WifiLink_GetConnectedBssid();
    if (ptr == 0) {
        OS_RestoreInterrupts(irq);
        return 3;
    }
    MI_CpuCopy8(ptr, mac2, 6);
    MI_CpuFill8(buf, 0, 0x21);
    ptr = WifiLink_GetConnectedSsid(&len);
    if (ptr == 0) {
        OS_RestoreInterrupts(irq);
        return 3;
    }
    MI_CpuCopy8(ptr, buf, len);
    OS_RestoreInterrupts(irq);
    MI_CpuCopy8((void *)0x27ffe0c, code4, 4);
    code4[4] = 0;
    MI_CpuCopy8((void *)0x27ffe10, code2, 2);
    code2[2] = 0;
    for (i = 0; i < 6; i++) {
        OS_SPrintf(macstr + i * 2, "%02x", mac[i]);
    }
    macstr[12] = 0;
    if (owner.unk_00 > 6) {
        owner.unk_00 = 1;
    }
    OS_SNPrintf(birth, 5, "%02x%02x", owner.unk_02, owner.unk_03);
    OS_SNPrintf(devtime, 13, "%02d%02d%02d%02d%02d%02d", date.unk_00, date.unk_04, date.unk_08,
                  time.unk_00, time.unk_04, time.unk_08);
    MI_CpuCopy8(owner.unk_04, nick, 0x14);
    nick[0x14] = 0;
    MI_CpuFill8(&form, 0, 0xc);
    form.unk_00 = a3;
    form.unk_04 = a4;
    if (a5 != 1) {
        if (sNasUserId.unk_00 == 0) {
            DwcHttp_AddField(&form, "action", "acctcreate");
        } else {
            if (func_0212a438(a1) == 0) {
                return 6;
            }
            DwcHttp_AddField(&form, "action", "login");
            DwcHttp_AddField(&form, "gsbrcd", a1);
        }
    } else {
        func_020ff0bc(&sNasUserId);
    }
    DwcHttp_AddField(&form, "sdkver", "001000");
    if (sNasUserId.unk_00 != 0) {
        OS_SNPrintf(userid, 14, "%013llu", sNasUserId.unk_00);
    } else {
        OS_SNPrintf(userid, 14, "%013llu", sNasUserId.unk_08);
    }
    DwcHttp_AddField(&form, "userid", userid);
    OS_SNPrintf(pw, 4, "%03u", sNasUserId.unk_10);
    DwcHttp_AddField(&form, "passwd", pw);
    OS_SNPrintf(bssid, 13, "%02x%02x%02x%02x%02x%02x", mac2[0], mac2[1], mac2[2], mac2[3], mac2[4], mac2[5]);
    OS_SNPrintf(apinfo, 14, "%02d:0000000-00", WifiAp_GetConnectedApType());
    WifiAp_GetNdwcshapApInfo(buf, apinfo + 3);
    DwcHttp_AddField(&form, "gamecd", code4);
    DwcHttp_AddField(&form, "makercd", code2);
    DwcHttp_AddField(&form, "unitcd", "0");
    DwcHttp_AddField(&form, "macadr", macstr);
    DwcHttp_AddField(&form, "lang", sNasLangCodeTable[owner.unk_00]);
    DwcHttp_AddField(&form, "birth", birth);
    DwcHttp_AddField(&form, "devtime", devtime);
    DwcHttp_AddField(&form, "bssid", bssid);
    DwcHttp_AddField(&form, "apinfo", apinfo);
    if (DwcHttp_AddHeader(a0, "User-Agent", "Nitro WiFi SDK/1.0") != 0) {
        return 7;
    }
    if (DwcHttp_AddHeader(a0, "HTTP_X_GAMECD", code4) != 0) {
        return 7;
    }
    i = 0;
    for (; a3->key != 0; a3++, i++) {
        const char *v = a3->val;
        if (DwcHttp_AddFormParam(a0, a3->key, v, func_0212a438(v)) != 0) {
            return 8;
        }
    }
    if (DwcHttp_AddFormParam(a0, "devname", nick, 0x14) != 0) {
        return 8;
    }
    if (func_0212dcb4(a2) != 0) {
        if (DwcHttp_AddFormParam(a0, "ingamesn", (const char *)a2, func_0212dcb4(a2) * 2) != 0) {
            return 8;
        }
    }
    return 0;
}

void NasAuth_SetState(s32 v) {
    OS_LockMutex(sNasAuth->unk_3bc);
    sNasAuth->unk_04 = v;
    OS_UnlockMutex(sNasAuth->unk_3bc);
}

}
