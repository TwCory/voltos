#ifndef _NBAPI_VOLTOS_UDP_H_
#define _NBAPI_VOLTOS_UDP_H_

#include <voltos/types.h>

#define UDP_PROTOCOL		17

struct udp_hdr {
	__net16 		src_port;
	__net16 		dst_port;
	__net16 		length;
	__csum16 		checksum;
};

#endif /* _NBAPI_VOLTOS_UDP_H_ */
