#ifndef PROTO_PROTO_OV065_UNK_OV065_02261638_H
#define PROTO_PROTO_OV065_UNK_OV065_02261638_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02261638.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/IpSocket.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_IpStack_Yield
void IpStack_Yield(void);
#endif
#ifndef PROTO_LOCAL_IpStack_Nop
void IpStack_Nop(void);
#endif
#ifndef PROTO_LOCAL_IpStack_SetIdleCallback
void IpStack_SetIdleCallback(void (*f)(void));
#endif
#ifndef PROTO_LOCAL_IpStack_Shutdown
void IpStack_Shutdown(void);
#endif
#ifndef PROTO_LOCAL_Eth_PopFrame
void Eth_PopFrame();
#endif
#ifndef PROTO_LOCAL_IpStack_TimerThreadMain
void IpStack_TimerThreadMain(void);
#endif
#ifndef PROTO_LOCAL_Dhcp_SendRelease
void Dhcp_SendRelease(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_IpStack_ResetAddress
void IpStack_ResetAddress(u32 a);
#endif
#ifndef PROTO_LOCAL_IpStack_ReturnTrue
s32 IpStack_ReturnTrue(void);
#endif
#ifndef PROTO_LOCAL_IpStack_RequestStop
s32 IpStack_RequestStop(void);
#endif
#ifndef PROTO_LOCAL_IpStack_SetThreadPriority
void IpStack_SetThreadPriority(u32 a);
#endif
#ifndef PROTO_LOCAL_Ip_ChecksumAdd
u32 Ip_ChecksumAdd(u8 *p, u32 len, u32 sum);
#endif
#ifndef PROTO_LOCAL_Ip_ChecksumFinish
u32 Ip_ChecksumFinish(u32 x);
#endif
#ifndef PROTO_LOCAL_Ip_Checksum
u32 Ip_Checksum(u8 *a, u32 b);
#endif
#ifndef PROTO_LOCAL_Ip_VerifyPseudoChecksum
s32 Ip_VerifyPseudoChecksum(u8 *a, u32 b, u8 *c, u32 d);
#endif
#ifndef PROTO_LOCAL_Ip_IsOnLocalNet
s32 Ip_IsOnLocalNet(u32 a);
#endif
#ifndef PROTO_LOCAL_Ip_GetNextHop
u32 Ip_GetNextHop(u32 a);
#endif
#ifndef PROTO_LOCAL_Ip_IsBroadcast
s32 Ip_IsBroadcast(u32 ip);
#endif
#ifndef PROTO_LOCAL_Ip_IsMulticast
s32 Ip_IsMulticast(u32 ip);
#endif
#ifndef PROTO_LOCAL_Ip_IsForMe
s32 Ip_IsForMe(u32 ip);
#endif
#ifndef PROTO_LOCAL_Eth_MacDiffers
s32 Eth_MacDiffers(u16 *a, u16 *b);
#endif
#ifndef PROTO_LOCAL_Eth_SendFrame
void Eth_SendFrame(u8 *hdr, u32 hlen, u8 *data, u32 n);
#endif
#ifndef PROTO_LOCAL_Eth_EnqueueFrame
void Eth_EnqueueFrame(u8 *a, u8 *b, u8 *c, u32 d, u8 *data, u32 n);
#endif
#ifndef PROTO_LOCAL_Eth_OnFrameReceived
void Eth_OnFrameReceived(u8 *a, u8 *b, u8 *c, u32 d);
#endif
#ifndef PROTO_LOCAL_Eth_WaitFrame
u8 *Eth_WaitFrame(u32 *out);
#endif
#ifndef PROTO_LOCAL_Arp_Lookup
u8 *Arp_Lookup(u32 ip);
#endif
#ifndef PROTO_LOCAL_Arp_SendRequest
void Arp_SendRequest(u32 ip);
#endif
#ifndef PROTO_LOCAL_Arp_Resolve
u8 *Arp_Resolve(u32 ip);
#endif
#ifndef PROTO_LOCAL_Arp_UpdateCache
void Arp_UpdateCache(u8 *mac, u32 ip, u32 flag);
#endif
#ifndef PROTO_LOCAL_Eth_SendIp
void Eth_SendIp(u8 *p, u32 off, u8 *data, u32 n, u32 x, u16 w);
#endif
#ifndef PROTO_LOCAL_Ip_SendPacket
void Ip_SendPacket(u8 *p, u32 off, u8 *data, u32 n, u32 x, u32 w);
#endif
#ifndef PROTO_LOCAL_Ip_Send
void Ip_Send(u8 *p, u32 len, u8 *data, u32 n, u32 x, u8 flag);
#endif
#ifndef PROTO_LOCAL_Icmp_SendEchoRequest
void Icmp_SendEchoRequest(u32 a, u32 b, IpSocket *c);
#endif
#ifndef PROTO_LOCAL_Dhcp_BuildHeader
u8 *Dhcp_BuildHeader(u8 *buf, u32 msgtype, u32 *xidout);
#endif
#ifndef PROTO_LOCAL_Dhcp_PadTo
u8 *Dhcp_PadTo(u32 a, u32 size, u8 *dst, u32 used);
#endif
#ifndef PROTO_LOCAL_Dhcp_SendDiscover
u32 Dhcp_SendDiscover(void);
#endif
#ifndef PROTO_LOCAL_Dhcp_SendRequest
u32 Dhcp_SendRequest(u32 mode);
#endif
#ifndef PROTO_LOCAL_Dhcp_WaitReply
s32 Dhcp_WaitReply(u32 xid, s32 i);
#endif
#ifndef PROTO_LOCAL_Dhcp_Discover
s32 Dhcp_Discover(void);
#endif
#ifndef PROTO_LOCAL_Dhcp_Request
s32 Dhcp_Request(u32 *out, s32 mode);
#endif
#ifndef PROTO_LOCAL_Dns_SkipName
u8 *Dns_SkipName(u8 *p);
#endif
#ifndef PROTO_LOCAL_Dns_Query
s32 Dns_Query(const u8 *name, u32 type, s32 xid);
#endif
#ifndef PROTO_LOCAL_IpAddr_ParseDecimal
u32 IpAddr_ParseDecimal(const u8 *p, const u8 **end);
#endif
#ifndef PROTO_LOCAL_IpAddr_Parse
s32 IpAddr_Parse(const u8 *s, u32 *out);
#endif
#ifndef PROTO_LOCAL_Dns_QueryServer
s32 Dns_QueryServer(const u8 *a, const u8 *b, s32 c);
#endif
#ifndef PROTO_LOCAL_Dns_Resolve
s32 Dns_Resolve(s32 self);
#endif
}
namespace Unk_ov065_02262240_Ns {
extern "C" {
#ifndef PROTO_LOCAL_Ip_Input
void Ip_Input(u8 *p, u32 len);
#endif
#ifndef PROTO_LOCAL_IpStack_RecvThreadMain
void IpStack_RecvThreadMain();
#endif
#ifndef PROTO_LOCAL_IpSoc_AllocEphemeralPort
u16 IpSoc_AllocEphemeralPort();
#endif
#ifndef PROTO_LOCAL_IpStack_Rand32
u32 IpStack_Rand32();
#endif
#ifndef PROTO_LOCAL_IpSoc_Unuse
void IpSoc_Unuse();
#endif
#ifndef PROTO_LOCAL_IpSoc_SetUdp
void IpSoc_SetUdp();
#endif
#ifndef PROTO_LOCAL_IpSoc_Bind
void IpSoc_Bind(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_IpSoc_Init
void IpSoc_Init();
#endif
#ifndef PROTO_LOCAL_IpSoc_Release
void IpSoc_Release();
#endif
#ifndef PROTO_LOCAL_IpSoc_SetUdpCallback
void IpSoc_SetUdpCallback(u32 v);
#endif
#ifndef PROTO_LOCAL_IpSoc_TcpListen
void IpSoc_TcpListen();
#endif
#ifndef PROTO_LOCAL_IpSoc_TcpConnect
s32 IpSoc_TcpConnect();
#endif
#ifndef PROTO_LOCAL_IpSoc_GetPeer
u32 IpSoc_GetPeer(u16 *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_IpSoc_TcpShutdown
void IpSoc_TcpShutdown();
#endif
#ifndef PROTO_LOCAL_IpSoc_TcpWaitClosed
void IpSoc_TcpWaitClosed();
#endif
#ifndef PROTO_LOCAL_IpSoc_Read
u8 *IpSoc_Read(u32 *out);
#endif
#ifndef PROTO_LOCAL_IpSoc_Consume
void IpSoc_Consume(u32 a);
#endif
#ifndef PROTO_LOCAL_IpSoc_WriteTwo
u32 IpSoc_WriteTwo(u8 *a, u32 b, u8 *c, u32 d);
#endif
#ifndef PROTO_LOCAL_IpSoc_Write
u32 IpSoc_Write(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_IpSoc_GetReadLength
s32 IpSoc_GetReadLength();
#endif
#ifndef PROTO_LOCAL_IpSoc_FlushPending
void IpSoc_FlushPending();
#endif
#ifndef PROTO_LOCAL_Arp_ProbeAddressConflict
void Arp_ProbeAddressConflict();
#endif
}
}
namespace Unk_ov065_02263578_Ns {
extern "C" {
#ifndef PROTO_LOCAL_Arp_SendReply
void Arp_SendReply(u8 *a);
#endif
#ifndef PROTO_LOCAL_Arp_Input
void Arp_Input(u8 *a, u32 len);
#endif
#ifndef PROTO_LOCAL_Icmp_SendEchoReply
void Icmp_SendEchoReply(u8 *a, u8 *b, u32 c);
#endif
#ifndef PROTO_LOCAL_Icmp_DeliverEchoReply
void Icmp_DeliverEchoReply(u8 *a, u8 *b, u32 c);
#endif
#ifndef PROTO_LOCAL_Ip_AreAddrsValid
s32 Ip_AreAddrsValid(u32 x, u32 y);
#endif
#ifndef PROTO_LOCAL_Icmp_Input
void Icmp_Input(u8 *a, u8 *b, u32 c);
#endif
#ifndef PROTO_LOCAL_Ip_IsNextHopResolved
s32 Ip_IsNextHopResolved(u32 x);
#endif
#ifndef PROTO_LOCAL_Tcp_SendReset
void Tcp_SendReset(u8 *a, u8 *b, u32 c, u32 d);
#endif
}
}
#endif

#endif
