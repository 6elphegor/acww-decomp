#ifndef NET_SOCKADDRIN_H
#define NET_SOCKADDRIN_H

#include "types.h"

// Socket address {length 8, family 2, port, IPv4 address} (BSD sockaddr_in shape) passed to the ov065 socket layer
// (Sock_Bind, Sock_SendTo, Sock_RecvFrom) by the ov001 AOSS and Simple Start clients.
struct SockAddrIn {
    /* 0x0 */ u8 len;
    /* 0x1 */ u8 family;
    /* 0x2 */ u16 port;
    /* 0x4 */ u32 addr;
};

#endif
