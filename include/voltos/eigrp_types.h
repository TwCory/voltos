#ifndef _VOLTOS_EIGRP_TYPES_H_
#define _VOLTOS_EIGRP_TYPES_H_

#include <voltos/types.h>

typedef u16 				eigrp_asn_t;

typedef unsigned int 			eigrp_bandwidth_t;
typedef unsigned int			eigrp_load_t;
typedef unsigned int			eigrp_delay_t;
typedef unsigned int			eigrp_reliability_t;
typedef unsigned int			eigrp_mtu_t;
typedef unsigned int			eigrp_hop_count_t;

typedef enum {
	EIGRP_DST_TYPE_T_UNSPEC		= 0,
	EIGRP_DST_TYPE_T_PASSIVE	= 1,
	EIGRP_DST_TYPE_T_ACTIVE		= 2,
	__EIGRP_DST_TYPE_T_MAX__
} eigrp_dst_type_t;

#endif /* _VOLTOS_EIGRP_TYPES_H_ */
