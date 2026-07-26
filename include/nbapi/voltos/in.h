#ifndef _NBAPI_VOLTOS_IN_H
#define _NBAPI_VOLTOS_IN_H

#include <voltos/libc-compat.h>
#include <voltos/socket.h>
#include <voltos/stddef.h>
#include <voltos/types.h>

enum {
	IPPROTO_IP		= 0,
	IPPROTO_ICMP		= 1,
	IPPROTO_IGMP		= 2,
	IPPROTO_GGP		= 3,
	IPPROTO_IPV4		= 4,
	IPPROTO_ST		= 5,
	IPPROTO_TCP		= 6,
	IPPROTO_CBT		= 7,
	IPPROTO_EGP		= 8,
	IPPROTO_IGP		= 9,
	IPPROTO_RCCMON		= 10,
	IPPROTO_NVPII		= 11,
	IPPROTO_PUP		= 12,
	IPPROTO_ARGUS		= 13,
	IPPROTO_EMCON		= 14,
	IPPROTO_XNET		= 15,
	IPPROTO_CHAOS		= 16,
	IPPROTO_UDP		= 17,
	IPPROTO_MUX		= 18,
	IPPROTO_MEAS		= 19,
	IPPROTO_HMP		= 20,
	IPPROTO_PRM		= 21,
	IPPROTO_IDP		= 22,
	IPPROTO_TRUNK1		= 23,
	IPPROTO_TRUNK2		= 24,
	IPPROTO_LEAF1		= 25,
	IPPROTO_LEAF2		= 26,
	IPPROTO_RDP		= 27,
	IPPROTO_IRTP		= 28,
	IPPROTO_TP4		= 29,
	IPPROTO_NETBLT		= 30,
	IPPROTO_NSP		= 31,
	IPPROTO_INP		= 32,
	IPPROTO_DCCP		= 33,
	IPPROTO_3PC		= 34,
	IPPROTO_IDPR		= 35,
	IPPROTO_XTP		= 36,
	IPPROTO_DDP		= 37,
	IPPROTO_IDPRCMTP	= 38,
	IPPROTO_TPPP		= 39,
	IPPROTO_IL		= 40,
	IPPROTO_IPV6		= 41,
	IPPROTO_SDRP		= 42,
	IPPROTO_RSVP		= 46,
	IPPROTO_GRE		= 47,
	IPPROTO_DSR		= 48,
	IPPROTO_BNA		= 49,
	IPPROTO_ESP		= 50,
	IPPROTO_AH		= 51,
	IPPROTO_INLSP		= 52,
};

struct in_addr {
	__net32 		s_addr;
};

#define SIN_ZERO_SIZE		16
struct sockaddr_in {
	__voltos_sa_family_t 	sin_family;
	__net16 		sin_port;
	struct in_addr 		sin_addr;
	unsigned char 		__pad[SIN_ZERO_SIZE - sizeof(short int) -
					sizeof(unsigned short int) - 
					sizeof(struct in_addr)];
};
#define sin_zero		__pad

struct in_ifaddr {

};

#endif /* _NBAPI_VOLTOS_IN_H */
