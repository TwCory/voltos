// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/matip.h
 *
 */

#ifndef _NBAPI_VOLTOS_MATIP_H
#define _NBAPI_VOLTOS_MATIP_H

#define MATIP_TYPE_A_PORT	350
#define MATIP_TYPE_B_PORT	351

struct matip_hdr {
	__u8			zero:5,
				version:3;
	__u8			c_bit:1,
				cmd:7;
	__net16 		length;
};

#endif /* _NBAPI_VOLTOS_MATIP_H */
