#ifndef _VOLTOS_NEXTHOP_H_
#define _VOLTOS_NEXTHOP_H_

#include <voltos/if.h>

typedef unsigned long           __voltos_nh_index_t;
typedef unsigned int            __voltos_nhgrp_id_t;

typedef enum {
	NH_FAMILY_T_UNSPEC		    = 0,
	NH_FAMILY_T_IPV4		    = 1,
	NH_FAMILY_T_IPV6		    = 2,
	__NH_FAMILY_T_MAX__
} nh_family_t;

typedef enum {
	NH_TYPE_T_UNSPEC		    = 0,
	NH_TYPE_T_DIRECT		    = 1,
	NH_TYPE_T_RECURSIVE		    = 2,
	NH_TYPE_T_FULL_SPEC		    = 3,
	NH_TYPE_T_BLACKHOLE		    = 4,
	__NH_TYPE_T_MAX__
} nh_type_t;

struct next_hop {
	__voltos_nh_index_t         nh_index;
};

struct next_hop_group {
	__voltos_nhgrp_id_t         nhgrp_id;
};

#endif /* _VOLTOS_NEXTHOP_H_ */