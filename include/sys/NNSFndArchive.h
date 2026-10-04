#ifndef SYS_NNSFNDARCHIVE_H
#define SYS_NNSFNDARCHIVE_H

#include "types.h"

// NitroSystem archive object (fnd/archive.h: FSArchive + arcBinary/fatData/fileImage, 0x68 bytes), opaque here.
// Stack buffer of NNS_FndMountArchive / NNS_FndUnmountArchive (FtrModelRes::loadFiles "FTR", FtrMoveAnim "ANM"/"FTT").
struct NNSFndArchive {
    /* 0x00 */ u32 data[26];
};

#endif // SYS_NNSFNDARCHIVE_H
