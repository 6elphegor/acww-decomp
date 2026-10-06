#ifndef SYS_NNSFNDARCHIVE_H
#define SYS_NNSFNDARCHIVE_H

#include "types.h"

#include "nitro/fs.h"

// NitroSystem archive object (fnd/archive.h, 0x68 bytes on the DS). Stack buffer of NNS_FndMountArchive /
// NNS_FndUnmountArchive (FtrModelRes::loadFiles "FTR", FtrMoveAnim "ANM"/"FTT", the "STR" / "BG" archives).
struct NNSFndArchive {
    /* 0x00 */ FSArc arc;
    /* 0x5c */ void *arcBinary;
    /* 0x60 */ void *fatData;
    /* 0x64 */ void *fileImage;
};

#endif // SYS_NNSFNDARCHIVE_H
