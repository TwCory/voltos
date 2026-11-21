// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/karp.h
 *
 *	Keying and Authentication for Routing Protocols (KARP)
 */

#ifndef _NBAPI_VOLTOS_KARP_H
#define _NBAPI_VOLTOS_KARP_H

enum {
	KARP_PROTOCOL_ID_T_UNSPEC	= 0,
	KARP_PROTOCOL_ID_T_OSPFV3	= 1,
	KARP_PROTOCOL_ID_T_LDP		= 2,
	KARP_PROTOCOL_ID_T_OSPFV2	= 3,
	__KARP_PROTOCOL_ID_T_MAX__
};

#endif /* _NBAPI_VOLTOS_KARP_H */
