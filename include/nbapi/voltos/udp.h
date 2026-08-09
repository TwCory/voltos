// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/udp.h
 *
 */

#ifndef _NBAPI_VOLTOS_UDP_H
#define _NBAPI_VOLTOS_UDP_H

#include <voltos/types.h>

#define UDP_PROTOCOL		17
#define UDP_LITE_PROTOCOL	136

struct udp_hdr {
	__net16 		src_port;
	__net16 		dst_port;
	__net16 		length;
	__csum16 		checksum;
};

#endif /* _NBAPI_VOLTOS_UDP_H */
