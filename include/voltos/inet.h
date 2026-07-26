#ifndef _VOLTOS_INET_H
#define _VOLTOS_INET_H

#include <voltos/in.h>
#include <voltos/in6.h>
#include <voltos/socket.h>
#include <voltos/types.h>

#define IN_ADDR_STRING_SIZE			(16)
#define IN6_ADDR_STRING_SIZE			(48)

struct sockaddr_inet {
	__voltos_sa_family_t 			sinet_family;
	__net16 				sinet_port;
	union {
		struct {
			struct in_addr 		addr;
			unsigned char 		zero[SIN_ZERO_SIZE];
		} sinet;
		struct {
			__net32 		flowinfo;
			struct in6_addr 	addr;
			__u32 			scope_id;
		} sinet6;
	};
};

#endif /* _VOLTOS_INET_H */
