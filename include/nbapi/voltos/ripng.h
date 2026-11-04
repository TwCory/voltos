// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ripng.h
 *
 * 	Routing Information Protocol, Next Generation (RIPng)
 */

#ifndef _NBAPI_VOLTOS_RIPNG_H
#define _NBAPI_VOLTOS_RIPNG_H

#include <voltos/in6.h>
#include <voltos/types.h>

#define RIPNG_PORT			521

enum {
	RIPNG_COMMAND_T_UNSPEC		= 0,
#define RIPNG_COMMAND_UNSPEC		RIPNG_COMMAND_T_UNSPEC
	RIPNG_COMMAND_T_REQUEST		= 1,
#define RIPNG_COMMAND_Request		RIPNG_COMMAND_T_REQUEST
	RIPNG_COMMAND_T_RESPONSE	= 2,
#define RIPNG_COMMAND_Response		RIPNG_COMMAND_T_RESPONSE
	__RIPNG_COMMAND_T_MAX__
};

#define RIPNG_COMMAND_MAX		(__RIPNG_COMMAND_T_MAX__ - 1)

enum {
	RIPNG_UPDATE_HEADER_T_UNSPEC	= 0,
#define RIPNG_UPDATE_HEADER_UNSPEC	RIPNG_UPDATE_HEADER_T_UNSPEC
	RIPNG_UPDATE_HEADER_T_V1	= 1,
#define RIPNG_UPDATE_HEADER_V1		RIPNG_UPDATE_HEADER_T_V1
	__RIPNG_UPDATE_HEADER_T_MAX__
};

#define RIPNG_UPDATE_HEADER_MAX		(__RIPNG_UPDATE_HEADER_T_MAX__ - 1)

struct ripng_rte {
	struct in6_addr			prefix;
	uint16_t 			tag;
	uint8_t				prefix_length;
	uint8_t				metric;
};

struct ripng_pkt {
	uint8_t				command;
	uint8_t				version;
	unsigned short			pad0;
	struct ripng_rte		rte[1];
};

#endif /* _NBAPI_VOLTOS_RIPNG_H */
