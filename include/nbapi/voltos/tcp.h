// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/tcp.h
 *
 */

#ifndef _NBAPI_VOLTOS_TCP_H
#define _NBAPI_VOLTOS_TCP_H

#include <voltos/types.h>

#define TCP_PROTOCOL		6

struct tcp_hdr {
	__net16 		src_port;
	__net16 		dst_port;
	__net32 		seq_no;
	__net32 		ack_seq_no;
};

#endif /* _NBAPI_VOLTOS_TCP_H */
