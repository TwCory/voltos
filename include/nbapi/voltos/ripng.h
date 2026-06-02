#ifndef _NBAPI_VOLTOS_RIPNG_H_
#define _NBAPI_VOLTOS_RIPNG_H_

#include <voltos/in6.h>
#include <voltos/types.h>

#define RIPNG_VERSION			1
#define RIPNG_PORT			521

#define RIPNG_PACKET_SIZE_MIN		4
#define RIPNG_PACKET_SIZE_MAX		1500

#define RIPNG_METRIC_MIN		1
#define RIPNG_METRIC_MAX		15
#define RIPNG_METRIC_INFINITY		16
#define RIPNG_METRIC_NEXT_HOP		0xFF

enum {
	RIPNG_CMD_T_REQUEST		= 1,
#define RIPNG_CMD_REQUEST		RIPNG_CMD_T_REQUEST
	RIPNG_CMD_T_RESPONSE		= 2,
#define RIPNG_CMD_RESPONSE		RIPNG_CMD_T_RESPONSE
	__RIPNG_CMD_T_MAX__
};

#define RIPNG_CMD_MAX			(__RIPNG_CMD_T_MAX__ - 1)

enum {
	RIPNG_UPDATE_HDR_T_DISCARD	= 0,
#define RIPNG_UPDATE_HDR_DISCARD	RIPNG_UPDATE_HDR_T_DISCARD
	RIPNG_UPDATE_HDR_T_V1		= 1,
#define RIPNG_UPDATE_HDR_V1		RIPNG_UPDATE_HDR_T_V1
	__RIPNG_UPDATE_HDR_T_MAX__
};

#define RIPNG_UPDATE_HDR_MAX		(__RIPNG_UPDATE_HDR_T_MAX__ - 1)

struct ripng_rte {
	struct in6_addr			address;
	__net16				tag;
	__u8				prefix_len;
	__u8				metric;
};

struct ripng_pkt {
	__u8				command;
	__u8				version;
	__net16				pad0;
	struct ripng_rte		rte[1];
};

#endif /* _NBAPI_VOLTOS_RIPNG_H_ */
