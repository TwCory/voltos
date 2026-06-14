#ifndef NBAPI_VOLTOS_IP_H
#define NBAPI_VOLTOS_IP_H

#define IP_VERSION					4
#define IP_ETHERTYPE					0x0800

#define IP_MTU_MIN					576
#define IP_MTU_DEFAULT					1500

#define IP_TTL_MIN					0
#define IP_TTL_MAX					255
#define IP_TTL_DEFAULT					64

enum ip_split_horizon_type {
	IP_SPLIT_HORIZON_TYPE_T_DISABLE			= 0,
	IP_SPLIT_HORIZON_TYPE_T_ENABLE			= 1,
	IP_SPLIT_HORIZON_TYPE_T_ENABLE_POISON_REVERSE	= 2,
	__IP_SPLIT_HORIZON_TYPE_T_MAX__
};

struct ip_hdr {

};

#endif /* NBAPI_VOLTOS_IP_H */
