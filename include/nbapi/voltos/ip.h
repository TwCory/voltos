#ifndef _NBAPI_VOLTOS_IP_H
#define _NBAPI_VOLTOS_IP_H

#include <voltos/types.h>

#define IP_ETHERTYPE		0x0800
#define IP_VERSION		4

struct ip_hdr {
	__u8 			tos;
	__net16 		total_length;
	__net16 		identification;
};

#endif /* _NBAPI_VOLTOS_IP_H */
