#ifndef _NBAPI_VOLTOS_NSAP_H
#define _NBAPI_VOLTOS_NSAP_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define NSAP_ADDR_SIZE_MIN		8
#define NSAP_ADDR_SIZE_MAX		20

#define NSAP_SYSTEM_ID_SIZE		6

struct nsap_addr {
	struct {
		__u8 			s_afi;
		unsigned char 		*s_idi;
	} idp;
	struct {
		unsigned char 		*s_ho_dsp;
		__u8 			s_sysid[NSAP_SYSTEM_ID_SIZE];
		__u8 			s_sel;
	} dsp;
};

struct sockaddr_nsap {
	__voltos_sa_family_t 		snsap_family;
};

#endif /* _NBAPI_VOLTOS_NSAP_H */
