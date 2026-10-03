// mwcc-flags: -nothumb -O4,p
// autoload_2 0x02113f04-0x02113fd8. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;

u32 OS_DisableInterrupts(void);          // OS_DisableInterrupts
void OS_RestoreInterrupts(u32 e);        // OS_RestoreInterrupts
u32 OS_GetLockID(void);          // OS_GetLockID
u32 OS_ReadOwnerOfLockWord(u32 addr);      // OS_ReadOwnerOfLockWord
u32 OS_TryLockCartridge(u32 id);        // OS_TryLockCartridge
void OS_UnlockCartridge(u32 id);       // OS_UnlockCartridge

// device detection for OS_GetConsoleType (os_emulator.c): cartridge header magic "NINTENDO" at 0x08000000 read under
// the cartridge lock -> 0x01000000 (cartridge) / 0x02000000 (card). Loops until the lock was obtained (as original).
u32 func_02113f04(void) {
    u32 result;
    BOOL done;
    u32 id;
    s32 lockResult;
    u32 e;
    done = 0;
    id = (u16)OS_GetLockID();
    result = 0;
    while (!done) {
        lockResult = -1;
        e = OS_DisableInterrupts();
        if ((OS_ReadOwnerOfLockWord(0x027fffe8) & 0x40) != 0 || (lockResult = OS_TryLockCartridge(id)) == 0) {
            if (*(u32 *)0x08000000 == 0x544e494e && *(u32 *)0x08000004 == 0x4f444e45) {
                result = 0x01000000;
            } else {
                result = 0x02000000;
            }
            if (lockResult == 0) {
                OS_UnlockCartridge(id);
                done = 1;
            }
        }
        OS_RestoreInterrupts(e);
    }
    return result;
}
