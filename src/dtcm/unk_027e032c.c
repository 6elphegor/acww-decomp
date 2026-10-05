// mwcc-flags: -nothumb
// NitroSDK SND (snd_alarm.c, ARM9 side): the alarm callback table, one record per alarm (callback, argument, alarm
// id), DTCM .data 0x027e032c-0x027e038c, zero in the image. SNDi_SetAlarmHandler (autoload_2) fills a record,
// SNDi_CallAlarmHandler (ITCM) calls it from the PXI interrupt. A data-only unit (the code is in two other modules);
// placed with the SDK's DTCM section pragma (see unk_027e0000.c).
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned char u8;

typedef struct AlarmCallbackInfo {
    void (*func)(void *);
    void *arg;
    u8 id;
} AlarmCallbackInfo;

#pragma section DTCM begin

AlarmCallbackInfo data_027e032c[8];

#pragma section DTCM end
