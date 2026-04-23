// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_DEVICE_H_
#define _VOLTOS_DEVICE_H_

typedef enum {
    DEVICE_EVENT_TYPE_T_CREATE  = 1,
    DEVICE_EVENT_TYPE_T_DELETE  = 2,
    __DEVICE_EVENT_TYPE_T_MAX__
} device_event_type_t;

typedef enum {
    DEVICE_RULE_T_ALLOW         = 1,
    DEVICE_RULE_T_BLOCK         = 2,
    __DEVICE_RULE_T_MAX__
} device_rule_t;

struct device {

};

#endif /* _VOLTOS_DEVICE_H_ */