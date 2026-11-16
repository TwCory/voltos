// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/tcp.h
 *
 * 	Transmission Control Protocol (TCP)
 */

#ifndef _NBAPI_VOLTOS_TCP_H
#define _NBAPI_VOLTOS_TCP_H

struct tcp_hdr {
	__net16 	src_port;
	__net16 	dst_port;
	__net32 	seq_no;
	__net32 	ack_no;
	__u16			doff:4,
				res1:3,
				ae:1,
				cwr:1,
				ece:1,
				urg:1,
				ack:1,
				psh:1,
				rst:1,
				syn:1,
				fin:1;
	__net16 	window;
	__csum16 	checksum;
	__net16 	urg_ptr;
};

#endif /* _NBAPI_VOLTOS_TCP_H */
