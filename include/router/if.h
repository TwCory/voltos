#ifndef _ROUTER_IF_H_
#define _ROUTER_IF_H_

typedef enum {
	IF_PASSIVE_TYPE_T_DISABLE				= 0,
	IF_PASSIVE_TYPE_T_ENABLE				= 1,
	__IF_PASSIVE_TYPE_T_MAX__
} if_passive_type_t;

typedef enum {
	IF_SPLIT_HORIZON_POLICY_T_NONE				= 0,
	IF_SPLIT_HORIZON_POLICY_T_ENABLE			= 1,
	IF_SPLIT_HORIZON_POLICY_T_ENABLE_POISONED_REVERSE	= 2,
	__IF_SPLIT_HORIZON_POLICY_T_MAX__
} if_split_horizon_policy_t;

#endif /* _ROUTER_IF_H_ */
