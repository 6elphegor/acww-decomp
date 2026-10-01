// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {
char data_ov065_0228e4cc[] = "gamevariant";
char data_ov065_0228e4f4[] = "teamfraglimit";
char data_ov065_0228e418[] = "player_";
char data_ov065_0228e43c[] = "hostport";
char data_ov065_0228e3d0[] = "pid_";
char data_ov065_0228e49c[] = "fraglimit";
char data_ov065_0228e3f8[] = "skill_";
char data_ov065_0228e400[] = "mapname";
char data_ov065_0228e4b4[] = "numplayers";
char data_ov065_0228e448[] = "password";
char data_ov065_0228e410[] = "gamever";
char data_ov065_0228e454[] = "hostname";
char data_ov065_0228e460[] = "numteams";
char data_ov065_0228e46c[] = "gamemode";
char data_ov065_0228e478[] = "teamplay";
char data_ov065_0228e484[] = "gametype";
char data_ov065_0228e3e8[] = "score_";
char data_ov065_0228e430[] = "gamename";
char data_ov065_0228e4e4[] = "roundelapsed";
char data_ov065_0228e3e0[] = "ping_";
char data_ov065_0228e408[] = "deaths_";
char data_ov065_0228e4d8[] = "timeelapsed";
char data_ov065_0228e3f0[] = "team_t";
char data_ov065_0228e428[] = "groupid";
char data_ov065_0228e490[] = "roundtime";
char data_ov065_0228e4a8[] = "timelimit";
char data_ov065_0228e4c0[] = "maxplayers";
char data_ov065_0228e420[] = "score_t";
char data_ov065_0228e3d8[] = "team_";

char *data_ov065_0228e504[0xfe] = {
    "",
    data_ov065_0228e454,
    data_ov065_0228e430,
    data_ov065_0228e410,
    data_ov065_0228e43c,
    data_ov065_0228e400,
    data_ov065_0228e484,
    data_ov065_0228e4cc,
    data_ov065_0228e4b4,
    data_ov065_0228e460,
    data_ov065_0228e4c0,
    data_ov065_0228e46c,
    data_ov065_0228e478,
    data_ov065_0228e49c,
    data_ov065_0228e4f4,
    data_ov065_0228e4d8,
    data_ov065_0228e4a8,
    data_ov065_0228e490,
    data_ov065_0228e4e4,
    data_ov065_0228e448,
    data_ov065_0228e428,
    data_ov065_0228e418,
    data_ov065_0228e3e8,
    data_ov065_0228e3f8,
    data_ov065_0228e3e0,
    data_ov065_0228e3d8,
    data_ov065_0228e408,
    data_ov065_0228e3d0,
    data_ov065_0228e3f0,
    data_ov065_0228e420,
};

void func_ov065_022884fc(s32 i, u32 v) {
    if (i >= 0x32 && i <= 0xfe) {
        data_ov065_0228e504[i] = (char *)v;
    }
}
}
