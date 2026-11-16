// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/xot.h
 *
 * 	X.25 over TCP/IP (XOT)
 */

#ifndef _NBAPI_VOLTOS_XOT_H
#define _NBAPI_VOLTOS_XOT_H

#define XOT_PORT		1998
#define XOT_VERSION		0

struct xot_hdr {
	__net16 		version;
	__net16 		length;
};

#endif /* _NBAPI_VOLTOS_XOT_H */
