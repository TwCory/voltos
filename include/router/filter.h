// SPDX-License-Identifier: BSD-3-Clause

#ifndef _ROUTER_FILTER_H_
#define _ROUTER_FILTER_H_

typedef enum {
    FILTER_TYPE_T_UNSPEC        = 0,
    FILTER_TYPE_T_INBOUND       = 1,
    FILTER_TYPE_T_OUTBOUND      = 2,
    __FILTER_TYPE_T_MAX__
} filter_type_t;

typedef enum {
    FILTER_ACTION_T_UNSPEC      = 0,
    FILTER_ACTION_T_PERMIT      = 1,
    FILTER_ACTION_T_DENY        = 2,
    FILTER_ACTION_T_DYNAMIC     = 3,
    __FILTER_ACTION_T_MAX__
} filter_action_t;

typedef enum {
    FILTER_FAMILY_T_UNSPEC      = 0,
    FILTER_FAMILY_T_IPV4        = 1,
    FILTER_FAMILY_T_IPV6        = 2,
    __FILTER_FAMILY_T_MAX__
} filter_family_t;

#endif /* _ROUTER_FILTER_H_ */