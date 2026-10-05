// melonDS Platform layer for the host build (from the acww test harness): stdio files, std::thread, no networking/mic/camera.
#include "Platform.h"
#include <chrono>
#include <condition_variable>
#include <cstdarg>
#include <cstdio>
#include <filesystem>
#include <mutex>
#include <thread>

namespace melonDS::Platform {

void SignalStop(StopReason, void*) {}

struct FileHandle { FILE* f; };

static const char* ModeString(FileMode mode) {
    bool rd = mode & FileMode::Read, wr = mode & FileMode::Write;
    if (rd && wr) return (mode & FileMode::Preserve) ? "r+b" : "w+b";
    if (wr) return (mode & FileMode::Append) ? "ab" : "wb";
    return "rb";
}

std::string GetLocalFilePath(const std::string& filename) { return filename; }
FileHandle* OpenFile(const std::string& path, FileMode mode) {
    if ((mode & FileMode::ReadWrite) == FileMode::ReadWrite && (mode & FileMode::Preserve) && !std::filesystem::exists(path)) {
        FILE* c = fopen(path.c_str(), "wb"); if (c) fclose(c);
    }
    FILE* f = fopen(path.c_str(), ModeString(mode));
    return f ? new FileHandle{f} : nullptr;
}
FileHandle* OpenLocalFile(const std::string& path, FileMode mode) { return OpenFile(path, mode); }
bool FileExists(const std::string& name) { return std::filesystem::exists(name); }
bool LocalFileExists(const std::string& name) { return FileExists(name); }
bool CheckFileWritable(const std::string&) { return true; }
bool CheckLocalFileWritable(const std::string&) { return true; }
bool CloseFile(FileHandle* file) { if (!file) return false; fclose(file->f); delete file; return true; }
bool IsEndOfFile(FileHandle* file) { return feof(file->f); }
bool FileReadLine(char* str, int count, FileHandle* file) { return fgets(str, count, file->f) != nullptr; }
u64 FilePosition(FileHandle* file) { return ftell(file->f); }
bool FileSeek(FileHandle* file, s64 offset, FileSeekOrigin origin) {
    int o = origin == FileSeekOrigin::Start ? SEEK_SET : origin == FileSeekOrigin::Current ? SEEK_CUR : SEEK_END;
    return fseek(file->f, offset, o) == 0;
}
void FileRewind(FileHandle* file) { rewind(file->f); }
u64 FileRead(void* data, u64 size, u64 count, FileHandle* file) { return fread(data, size, count, file->f); }
bool FileFlush(FileHandle* file) { return fflush(file->f) == 0; }
u64 FileWrite(const void* data, u64 size, u64 count, FileHandle* file) { return fwrite(data, size, count, file->f); }
u64 FileWriteFormatted(FileHandle* file, const char* fmt, ...) {
    va_list a; va_start(a, fmt); int n = vfprintf(file->f, fmt, a); va_end(a); return n;
}
u64 FileLength(FileHandle* file) { long p = ftell(file->f); fseek(file->f, 0, SEEK_END); long l = ftell(file->f); fseek(file->f, p, SEEK_SET); return l; }

int gLogLevel = 2;
void Log(LogLevel level, const char* fmt, ...) {
    if ((int)level < gLogLevel) return;
    va_list a; va_start(a, fmt); vfprintf(stderr, fmt, a); va_end(a);
}

struct Thread { std::thread t; };
Thread* Thread_Create(std::function<void()> func) { return new Thread{std::thread(func)}; }
void Thread_Free(Thread* thread) { if (thread->t.joinable()) thread->t.detach(); delete thread; }
void Thread_Wait(Thread* thread) { if (thread->t.joinable()) thread->t.join(); }

struct Semaphore { std::mutex m; std::condition_variable cv; int count = 0; };
Semaphore* Semaphore_Create() { return new Semaphore; }
void Semaphore_Free(Semaphore* s) { delete s; }
void Semaphore_Reset(Semaphore* s) { std::lock_guard l(s->m); s->count = 0; }
void Semaphore_Wait(Semaphore* s) { std::unique_lock l(s->m); s->cv.wait(l, [&]{ return s->count > 0; }); s->count--; }
bool Semaphore_TryWait(Semaphore* s, int timeout_ms) {
    std::unique_lock l(s->m);
    if (!s->cv.wait_for(l, std::chrono::milliseconds(timeout_ms), [&]{ return s->count > 0; })) return false;
    s->count--; return true;
}
void Semaphore_Post(Semaphore* s, int count) { { std::lock_guard l(s->m); s->count += count; } s->cv.notify_all(); }

struct Mutex { std::mutex m; };
Mutex* Mutex_Create() { return new Mutex; }
void Mutex_Free(Mutex* m) { delete m; }
void Mutex_Lock(Mutex* m) { m->m.lock(); }
void Mutex_Unlock(Mutex* m) { m->m.unlock(); }
bool Mutex_TryLock(Mutex* m) { return m->m.try_lock(); }

void Sleep(u64 usecs) { std::this_thread::sleep_for(std::chrono::microseconds(usecs)); }
u64 GetMSCount() { return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count(); }
u64 GetUSCount() { return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count(); }

std::string gSavePath;
void WriteNDSSave(const u8* savedata, u32 savelen, u32, u32, void*) {
    if (gSavePath.empty()) return;
    FILE* f = fopen(gSavePath.c_str(), "wb"); if (f) { fwrite(savedata, 1, savelen, f); fclose(f); }
}
void WriteGBASave(const u8*, u32, u32, u32, void*) {}
void WriteFirmware(const Firmware&, u32, u32, void*) {}
void WriteDateTime(int, int, int, int, int, int, void*) {}

void MP_Begin(void*) {}
void MP_End(void*) {}
int MP_SendPacket(u8*, int len, u64, void*) { return len; }
int MP_RecvPacket(u8*, u64*, void*) { return 0; }
int MP_SendCmd(u8*, int len, u64, void*) { return len; }
int MP_SendReply(u8*, int len, u64, u16, void*) { return len; }
int MP_SendAck(u8*, int len, u64, void*) { return len; }
int MP_RecvHostPacket(u8*, u64*, void*) { return 0; }
u16 MP_RecvReplies(u8*, u64, u16, void*) { return 0; }
int Net_SendPacket(u8*, int len, void*) { return len; }
int Net_RecvPacket(u8*, void*) { return 0; }

void Camera_Start(int, void*) {}
void Camera_Stop(int, void*) {}
void Camera_CaptureFrame(int, u32*, int, int, bool, void*) {}
void Mic_Start(void*) {}
void Mic_Stop(void*) {}
int Mic_ReadInput(s16*, int, void*) { return 0; }

AACDecoder* AAC_Init() { return nullptr; }
void AAC_DeInit(AACDecoder*) {}
bool AAC_Configure(AACDecoder*, int, int) { return false; }
bool AAC_DecodeFrame(AACDecoder*, const void*, int, void*, int) { return false; }

bool Addon_KeyDown(KeyType, void*) { return false; }
void Addon_RumbleStart(u32, void*) {}
void Addon_RumbleStop(void*) {}
float Addon_MotionQuery(MotionQueryType, void*) { return 0; }

DynamicLibrary* DynamicLibrary_Load(const char*) { return nullptr; }
void DynamicLibrary_Unload(DynamicLibrary*) {}
void* DynamicLibrary_LoadFunction(DynamicLibrary*, const char*) { return nullptr; }

}
