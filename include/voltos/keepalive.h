// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_KEEPALIVE_H_
#define _VOLTOS_KEEPALIVE_H_

typedef enum {
    KEEPALIVE_STATE_T_UNSPEC        = 0,
    KEEPALIVE_STATE_T_ALIVE         = 1,
    KEEPALIVE_STATE_T_MISSING       = 2,
    KEEPALIVE_STATE_T_DEAD          = 3,
    KEEPALIVE_STATE_T_GONE          = 4,
    KEEPALIVE_STATE_T_DOZING        = 5,
    KEEPALIVE_STATE_T_SLEEP         = 6,
    __KEEPALIVE_STATE_T_MAX__
} keepalive_state_t;

#endif /* _VOLTOS_KEEPALIVE_H_ */