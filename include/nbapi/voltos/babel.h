#ifndef _NBAPI_VOLTOS_BABEL_H_
#define _NBAPI_VOLTOS_BABEL_H_

#include <voltos/types.h>

#define BABEL_MAGIC				42
#define BABEL_VERSION				1
#define BABEL_PORT				6696
#define BABEL_INFINITY				0xFFFF

enum {
    	BABEL_TLV_T_PAD1			= 0,
    	BABEL_TLV_T_PADN			= 1,
    	BABEL_TLV_T_ACKNOWLEDGE_REQUEST		= 2,
    	BABEL_TLV_T_ACKNOWLEDGE			= 3,
    	BABEL_TLV_T_HELLO			= 4,
    	BABEL_TLV_T_IHU				= 5,
    	BABEL_TLV_T_ROUTER_ID			= 6,
    	BABEL_TLV_T_NEXT_HOP			= 7,
    	BABEL_TLV_T_UPDATE			= 8,
    	BABEL_TLV_T_ROUTE_REQUEST		= 9,
    	BABEL_TLV_T_SEQNO_REQUEST		= 10,
    	BABEL_TLV_T_TS_PC			= 11,
    	BABEL_TLV_T_HMAC			= 12,
    	BABEL_TLV_T_MAC				= 16,
    	BABEL_TLV_T_PC				= 17,
    	BABEL_TLV_T_CHALLENGE_REQUEST		= 18,
    	BABEL_TLV_T_CHALLENGE_REPLY		= 19,
    	__BABEL_TLV_T_MAX__
};

enum {
	BABEL_SUBTLV_T_PAD1			= 0,
	BABEL_SUBTLV_T_PADN			= 1,
	BABEL_SUBTLV_T_DIVERSITY		= 2,
	BABEL_SUBTLV_T_TIMESTAMP		= 3,
	BABEL_SUBTLV_T_SOURCE_PREFIX		= 128,
	__BABEL_SUBTLV_T_MAX__
};

struct babel_hdr {
	__u8 					magic;
	__u8 					version;
	__net16 				length;
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_BABEL_H_ */
