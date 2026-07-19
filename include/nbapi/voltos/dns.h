#ifndef _NBAPI_VOLTOS_DNS_H
#define _NBAPI_VOLTOS_DNS_H

#include <voltos/types.h>

#define DNS_PORT				53

enum dns_source_type {
	DNS_SOURCE_TYPE_T_NONE			= 0,
	DNS_SOURCE_TYPE_T_STATIC		= 1,
	DNS_SOURCE_TYPE_T_DHCP			= 2,
	__DNS_SOURCE_TYPE_T_MAX__
};

struct dns_common_hdr {

};

#endif /* _NBAPI_VOLTOS_DNS_H */
