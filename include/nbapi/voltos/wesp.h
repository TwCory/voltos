// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/wesp.h
 *
 * 	Wrapped Encapsulating Security Payload (WESP)
 */

#ifndef _NBAPI_VOLTOS_WESP_H
#define _NBAPI_VOLTOS_WESP_H

#define WESP_VERSION			0

enum {
	WESP_F_VERSION_1		= (1 << 0),
	WESP_F_VERSION_2		= (1 << 1),
	WESP_F_ENCRYPTED_PAYLOAD	= (1 << 2),
	WESP_F_PADDING_PRESENT		= (1 << 3),
};

struct wesp_hdr {

};

#endif /* _NBAPI_VOLTOS_WESP_H */
