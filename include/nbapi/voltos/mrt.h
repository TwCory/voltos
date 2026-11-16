// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mrt.h
 *
 * 	Multi-Threaded Routing Toolkit (MRT)
 */

#ifndef _NBAPI_VOLTOS_MRT_H
#define _NBAPI_VOLTOS_MRT_H

struct mrt_common_hdr {
	__u32 timestamp;
	__u16 type;
	__u16 subtype;
	__u32 length;
};

#endif /* _NBAPI_VOLTOS_MRT_H */
