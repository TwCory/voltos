#ifndef _NBAPI_VOLTOS_XOT_H_
#define _NBAPI_VOLTOS_XOT_H_

#include <voltos/types.h>

#define XOT_VERSION		0
#define XOT_PORT		1998
#define XOT_HDR_SIZE		4

struct xot_hdr {
	__net16 		version;
	__net16 		length;
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_XOT_H_ */
