// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/l2f.h
 *
 *	Cisco Layer 2 Forwarding (L2F) Protocol
 */

#ifndef _NBAPI_VOLTOS_L2F_H
#define _NBAPI_VOLTOS_L2F_H

#include <voltos/types.h>

#define L2F_PORT	1701

struct l2f_hdr {
	__net16			f_bit:1,
				k_bit:1,
				p_bit:1,
				s_bit:1,
				reserved_bits:8,
				c_bit:1,
				version:3;
	__u8		protocol;
	__u8		sequence;
	__net16		multiplex_id;
	__net16		client_id;
	__net16		length;
	__net16		payload_offset;
	__net32		packet_key;
};

#endif /* _NBAPI_VOLTOS_L2F_H */
