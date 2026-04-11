#ifndef _VOLTOS_IF_ADDRESS_H_
#define _VOLTOS_IF_ADDRESS_H_

#include <voltos/atalk.h>
#include <voltos/decnet.h>
#include <voltos/in.h>
#include <voltos/in6.h>
#include <voltos/ipx.h>
#include <voltos/osi.h>

typedef enum {
	IFA_FAMILY_T_UNSPEC                 = 0,
	IFA_FAMILY_T_IPV4                   = 1,
	IFA_FAMILY_T_IPV6                   = 2,
	IFA_FAMILY_T_IPX                    = 3,
	IFA_FAMILY_T_NSAP                   = 4,
	IFA_FAMILY_T_DECNET                 = 5,
	IFA_FAMILY_T_APPLETALK              = 6,
	__IFA_FAMILY_T_MAX__
} ifa_family_t;

struct ifa_ipv4 {
	struct in_addr address;
};

struct ifa_ipv6 {
	struct in6_addr address;
};

struct ifa_nsap {
	struct osi_addr address;
};

struct ifa_decnet {
	
};

struct ifa_appletalk {
	struct atalk_addr address;
};

struct if_address {
	ifa_family_t	ifa_family;
	union {
		struct ifa_ipv4 ipv4;
		struct ifa_ipv6 ipv6;
		struct ifa_nsap nsap;
		struct ifa_decnet decnet;
		struct ifa_appletalk appletalk;
	} ifa_u;
};

#endif /* _VOLTOS_IF_ADDRESS_H_ */