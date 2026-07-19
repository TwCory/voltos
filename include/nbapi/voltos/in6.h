#ifndef _NBAPI_VOLTOS_IN6_H
#define _NBAPI_VOLTOS_IN6_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IN6_ADDR_U8_SIZE		16
#define IN6_ADDR_U16_SIZE		8
#define IN6_ADDR_U32_SIZE		4
#define IN6_ADDR_U64_SIZE		2

struct in6_addr {
	union {
		__u8 			u6_addr8[IN6_ADDR_U8_SIZE];
		__net16 		u6_addr16[IN6_ADDR_U16_SIZE];
		__net32 		u6_addr32[IN6_ADDR_U32_SIZE];
		__net64 		u6_addr64[IN6_ADDR_U64_SIZE];
		__net128 		u6_addr;
	} in6_u;
#define s6_addr8			in6_u.u6_addr8
#define s6_addr16			in6_u.u6_addr16
#define s6_addr32			in6_u.u6_addr32
#define s6_addr64			in6_u.u6_addr64
#define s6_addr				in6_u.u6_addr
};

struct sockaddr_in6 {
	__voltos_sa_family_t 		sin6_family;
	__net16 			sin6_port;
	__net32 			sin6_flowinfo;
	struct in6_addr 		sin6_addr;
	__u32 				sin6_scope_id;
};

struct in6_ifaddr {

};

#endif /* _NBAPI_VOLTOS_IN6_H */
