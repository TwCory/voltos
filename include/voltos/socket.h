// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/socket.h
 *
 */

#ifndef _VOLTOS_SOCKET_H
#define _VOLTOS_SOCKET_H

#include <nbapi/voltos/socket.h>

typedef __voltos_sa_family_t 		sa_family_t;

struct sockaddr {
	sa_family_t 			sa_family;
	char 				sa_data[14];
};

struct sockaddr_generic {
	__voltos_sa_family_t		sa_family;
	char				sa_data[];
};

struct linger {
	int 				l_state;
	int 				l_linger;
};

#define sockaddr_storage		__voltos_sockaddr_storage

struct msghdr {

};

struct user_msghdr {

};

struct mmsghdr {

};

struct cmsghdr {

};

struct ucred {

};

/* Supported address families. */
#define AF_UNSPEC	0
#define AF_UNIX		1
#define AF_LOCAL	1
#define AF_INET		2
#define AF_AX25		3
#define AF_IPX		4
#define AF_APPLETALK	5
#define AF_NETROM	6
#define AF_BRIDGE	7
#define AF_ATMPVC	8
#define AF_X25		9
#define AF_INET6	10
#define AF_ROSE		11
#define AF_DECnet	12
#define AF_NETBEUI	13
#define AF_SECURITY	14
#define AF_KEY		15
#define AF_NETLINK	16
#define AF_ROUTE	AF_NETLINK
#define AF_PACKET	17
#define AF_ASH		18
#define AF_ECONET	19
#define AF_ATMSVC	20
#define AF_RDS		21
#define AF_SNA		22
#define AF_IRDA		23
#define AF_PPPOX	24
#define AF_WANPIPE	25
#define AF_LLC		26
#define AF_IB		27
#define AF_MPLS		28
#define AF_CAN		29
#define AF_TIPC		30
#define AF_BLUETOOTH	31
#define AF_IUCV		32
#define AF_RXRPC	33
#define AF_ISDN		34
#define AF_PHONET	35
#define AF_IEEE802154	36
#define AF_CAIF		37
#define AF_ALG		38
#define AF_NFC		39
#define AF_VSOCK	40
#define AF_KCM		41
#define AF_QIPCRTR	42
#define AF_SMC		43
#define AF_XDP		44
#define AF_MCTP		45
#define AF_VINES	46
#define AF_MAX		47

#endif /* _VOLTOS_SOCKET_H */
