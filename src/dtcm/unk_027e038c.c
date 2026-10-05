// mwcc-flags: -nothumb
// NitroSystem sound (capture): two words of the capture code in DTCM, .data 0x027e038c-0x027e0394, zero in the
// image; NNSi_SndCaptureInit clears them and the capture alarm callback (AlarmCallback, autoload_2 0x0210ab48)
// uses them. A data-only unit (the code is in autoload_2); placed with the SDK's DTCM section pragma (see
// unk_027e0000.c). The two objects have one size; their order is mwcc's for this definition order.
#pragma define_section DTCM ".dtcm" abs32 RWX

typedef unsigned long u32;
typedef signed long s32;

#pragma section DTCM begin

s32 data_027e0390;
u32 data_027e038c;

#pragma section DTCM end
