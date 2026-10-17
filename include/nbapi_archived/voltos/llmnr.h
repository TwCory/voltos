// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/llmnr.h
 *
 *	Link-Local Multicast Name Resolution (LLMNR)
 */

#ifndef _NBAPI_VOLTOS_LLMNR_H
#define _NBAPI_VOLTOS_LLMNR_H

#include <voltos/types.h>

#define LLMNR_PORT	5355

struct llmnr_hdr {
	__net16 	id;
	__net16			qr_bit:1,
				opcode:4,
				c_bit:1,
				tc_bit:1,
				t_bit:1,
				z1_bit:1,
				z2_bit:1,
				z3_bit:1,
				z4_bit:1,
				rcode:4;
	__net16		qd_count;
	__net16		an_count;
	__net16		ns_count;
	__net16		ar_count;
};

#endif /* _NBAPI_VOLTOS_LLMNR_H */
