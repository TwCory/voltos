// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/wesp.h
 *
 * 	Wrapped Encapsulating Security Payload (WESP)
 */

#ifndef _NBAPI_VOLTOS_WESP_H
#define _NBAPI_VOLTOS_WESP_H

enum {
	WESP_FLAG_F_VERSION_1			= (1 << 0),
#define WESP_FLAG_VERSION_1			WESP_FLAG_F_VERSION_1
	WESP_FLAG_F_VERSION_2			= (1 << 1),
#define WESP_FLAG_VERSION_2			WESP_FLAG_F_VERSION_2
	WESP_FLAG_F_ENCRYPTING_PAYLOAD		= (1 << 2),
#define WESP_FLAG_ENCRYPTING_PAYLOAD		WESP_FLAG_F_ENCRYPTING_PAYLOAD
	WESP_FLAG_F_PADDING_PRESENT		= (1 << 3),
#define WESP_FLAG_PADDING_PRESENT		WESP_FLAG_F_PADDING_PRESENT
};

enum {
	WESP_VERSION_T_RFC5840			= 0,
#define WESP_VERSION_RFC5840			WESP_VERSION_T_RFC5840
	__WESP_VERSION_T_MAX__
};

#define WESP_VERSION_MAX			(__WESP_VERSION_T_MAX__ - 1)

struct wesp_hdr {
	__u8 					next_header;
	__u8 					header_length;
	__u8 					trailer_length;
	__u8 					flags;
	__net32					padding;
};

#endif /* _NBAPI_VOLTOS_WESP_H */
