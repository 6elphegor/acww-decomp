// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU34: GameSpy gsAvailable (0x02277e70..0x02278328)

struct Unk_ov065_02277f70_Ctx {
    u32 unk_00;
    void (*unk_04)(s32, s32, s32, u32);
};

struct Unk_ov065_02291024 {
    s32 unk_00;
    u8 unk_04[2];
    u16 unk_06;
    u8 unk_08[4];
    u8 unk_0c;
    u8 unk_0d[4];
    char unk_11[0x3b];
    u32 unk_4c;
    u32 unk_50;
    u32 unk_54;
};

extern "C" {

s32 STD_GetStringLength(const char *);
void func_02127838(void *, const void *);
s32 memcmp(const void *, const void *, s32);
void memcpy(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);

extern s32 sGsAvailStatus;
extern char sGsAvailHostOverride[];
extern char sGsGameName[];

Unk_ov065_02291024 sGsAvailQuery;

void *DwcNet_Free(s32 a, void *b, s32 c);
void *DwcNet_Alloc(s32 a, s32 b);
s32 GsHttp_Get(s32, s32, void *, void *);
s32 GsHttp_Post(s32, s32, s32, void *, void *);
s32 GsHttp_PostAddString(s32);
s32 GsHttp_NewPost();
void GsHttp_ProcessAll();
void GsHttp_Cleanup();
void GsHttp_Startup();
s32 GsSock_CanRead(s32 fd);
s32 GsSock_RecvFrom(s32, void *, s32, s32, void *, void *);
void GsSock_Close(s32);
u32 GsUtil_GetTimeMs();
void GsSock_StartupStub();
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_ResolveAddress(const char *, s32, void *);

void DwcCore_SetError(s32, s32);
s32 DwcGsHttp_ReportError(s32 e);
s32 DwcGsHttp_OnRequestDone(s32, s32, s32, s32, Unk_ov065_02277f70_Ctx *);
s32 GsAvail_ParseReply(s8 *, s32, u8 *, u32 *);
void GsAvail_SendQuery();
s32 GsSock_SendTo(s32, void *, s32, s32, void *, s32);
}

extern "C" {

void GsAvail_SendQuery() {
    GsSock_SendTo(sGsAvailQuery.unk_00, &sGsAvailQuery.unk_0c, sGsAvailQuery.unk_4c, 0,
                        sGsAvailQuery.unk_04, 8);
    sGsAvailQuery.unk_50 = GsUtil_GetTimeMs();
}

void GsAvail_Start(char *url) {
    char buf[0x44];
    s8 c;
    func_02127838(sGsGameName, url);
    sGsAvailQuery.unk_00 = -1;
    GsSock_StartupStub();
    c = sGsAvailHostOverride[0];
    if (c == 0) {
        OS_SPrintf(buf, "%s.available.gs.nintendowifi.net", url);
    }
    if (GsSock_ResolveAddress(c != 0 ? sGsAvailHostOverride : buf, 0x6cfc, sGsAvailQuery.unk_04) != 0) {
        s32 s = GsSock_Socket(2, 2, 0);
        sGsAvailQuery.unk_00 = s;
        if (s != -1) {
            s32 n;
            sGsAvailQuery.unk_0c = 9;
            n = STD_GetStringLength(url);
            memcpy(sGsAvailQuery.unk_11, url, n + 1);
            sGsAvailQuery.unk_4c = n + 6;
            GsAvail_SendQuery();
            sGsAvailQuery.unk_54 = 0;
        }
    }
}

s32 GsAvail_ParseReply(s8 *b, s32 n, u8 *addr, u32 *out) {
    if (n < 7) {
        return 1;
    }
    if (memcmp(addr + 4, sGsAvailQuery.unk_08, 4) != 0) {
        return 1;
    }
    if (*(u16 *)(addr + 2) != sGsAvailQuery.unk_06) {
        return 1;
    }
    if (memcmp(b, "\xfe\xfd\x09", 3) != 0) {
        return 1;
    }
    u32 v = ((s32)b[3] << 24) & 0xff000000;
    v |= ((s32)b[4] << 16) & 0xff0000;
    v |= ((s32)b[5] << 8) & 0xff00;
    v |= (s32)b[6] & 0xff;
    *out = v;
    return 0;
}

s32 GsAvail_Poll() {
    u32 addr[2];
    s32 len;
    u32 flags;
    u8 buf[0x40];
    len = 8;
    if (sGsAvailQuery.unk_00 == -1) {
        sGsAvailStatus = 1;
        return 1;
    }
    if (GsSock_CanRead(sGsAvailQuery.unk_00) != 0) {
        s32 n = GsSock_RecvFrom(sGsAvailQuery.unk_00, buf, 0x40, 0, addr, &len);
        if (GsAvail_ParseReply((s8 *)buf, n, (u8 *)addr, &flags) == 0) {
            GsSock_Close(sGsAvailQuery.unk_00);
            if ((flags & 1) != 0) {
                sGsAvailStatus = 2;
            } else if ((flags & 2) != 0) {
                sGsAvailStatus = 3;
            } else {
                sGsAvailStatus = 1;
            }
            return sGsAvailStatus;
        }
    }
    if (GsUtil_GetTimeMs() > sGsAvailQuery.unk_50 + 0x7d0) {
        if (sGsAvailQuery.unk_54 == 1) {
            GsSock_Close(sGsAvailQuery.unk_00);
            sGsAvailStatus = 1;
            return 1;
        }
        GsAvail_SendQuery();
        sGsAvailQuery.unk_54++;
    }
    return 0;
}

s32 DwcGsHttp_Startup() {
    GsHttp_Startup();
    return 1;
}

s32 DwcGsHttp_Cleanup() {
    GsHttp_Cleanup();
    return 1;
}

s32 DwcGsHttp_Process() {
    GsHttp_ProcessAll();
    return 1;
}

s32 DwcGsHttp_OnRequestDone(s32 a, s32 e, s32 c, s32 d, Unk_ov065_02277f70_Ctx *p) {
    void (*cb)(s32, s32, s32, u32) = p->unk_04;
    if (cb != NULL) {
        if (e == 0) {
            cb(c, d, e, p->unk_00);
        } else {
            DwcGsHttp_ReportError(e);
            cb(0, 0, e, p->unk_00);
        }
    }
    DwcNet_Free(4, p, 0);
    return 1;
}

void DwcGsHttp_PostCreate(s32 *p) {
    *p = GsHttp_NewPost();
}

s32 DwcGsHttp_PostAddString(s32 *p) {
    return GsHttp_PostAddString(*p);
}

s32 DwcGsHttp_Post(s32 a, s32 *pa, void (*cb)(s32, s32, s32, u32), u32 ud) {
    Unk_ov065_02277f70_Ctx *p;
    s32 r;
    p = (Unk_ov065_02277f70_Ctx *)DwcNet_Alloc(4, 8);
    if (p == NULL) {
        DwcGsHttp_ReportError(0x14);
        cb(0, 0, 0x14, p->unk_00);
        return 0x14;
    }
    p->unk_00 = ud;
    p->unk_04 = cb;
    r = GsHttp_Post(a, *pa, 0, (void *)DwcGsHttp_OnRequestDone, p);
    if (r < 0) {
        DwcGsHttp_ReportError(r);
        cb(0, 0, r, p->unk_00);
        DwcNet_Free(4, p, 0);
    }
    return r;
}

s32 DwcGsHttp_Get(s32 a, void (*cb)(s32, s32, s32, u32), u32 ud) {
    Unk_ov065_02277f70_Ctx *p;
    s32 r;
    p = (Unk_ov065_02277f70_Ctx *)DwcNet_Alloc(4, 8);
    if (p == NULL) {
        DwcGsHttp_ReportError(0x14);
        cb(0, 0, 0x14, p->unk_00);
        return 0x14;
    }
    p->unk_00 = ud;
    p->unk_04 = cb;
    r = GsHttp_Get(a, 0, (void *)DwcGsHttp_OnRequestDone, p);
    if (r < 0) {
        DwcGsHttp_ReportError(r);
        cb(0, 0, r, p->unk_00);
        DwcNet_Free(4, p, 0);
    }
    return r;
}

s32 DwcGsHttp_ReportError(s32 e) {
    s32 b = -0x17ed0;
    s32 a = 6;
    if (e == 0) {
        return 0;
    }
    switch (e) {
    case -7:
        b -= 0x320;
        break;
    case -6:
        b -= 0x32a;
        break;
    case -5:
        b -= 0x348;
        break;
    case -4:
    case -3:
    case -2:
        b -= 0x334;
        break;
    case -1:
        b -= 0x33e;
        break;
    case 1:
    case 20:
        a = 8;
        b -= 1;
        break;
    case 2:
        b -= 0x348;
        break;
    case 3:
        b -= 0x352;
        break;
    case 4:
        b -= 0x1e;
        break;
    case 5:
        b -= 0x32;
        break;
    case 6:
    case 11:
    case 12:
        b -= 0x14;
        break;
    case 7:
        b -= 0x35c;
        break;
    case 8:
    case 9:
    case 10:
        b -= 0x366;
        break;
    case 13:
    case 14:
        b -= 0x370;
        break;
    case 15:
        b -= 0x37a;
        break;
    case 16:
        b -= 0x384;
        break;
    case 17:
        b -= 0x38e;
        break;
    case 0:
    case 18:
    case 19:
        break;
    }
    DwcCore_SetError(a, b);
    return e;
}

}
