// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_ALARM_H_
#define _VOLTOS_ALARM_H_

#include <voltos/types.h>

typedef void (*alarm_callback)(void *arg);

int alarm_set(u64 usec, alarm_callback cb, void *cb_arg);

int alarm_cancel(alarm_callback cb, void *cb_arg);

#endif /* _VOLTOS_ALARM_H_ */