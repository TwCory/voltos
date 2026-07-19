#ifndef _NBAPI_VOLTOS_CARP_H
#define _NBAPI_VOLTOS_CARP_H

#include <voltos/types.h>

struct carp_hdr {
	__u8 			vhid;
	__u8 			adv_skew;
	__u8 			auth_len;
	__u8 			reserved;
	__u8 			adv_base;
	__csum16 		checksum;
	__net32 		counter[2];
	__net32 		sha1_hmac[5];
};

#endif /* _NBAPI_VOLTOS_CARP_H */
