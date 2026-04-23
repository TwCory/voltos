// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_SYSLOG_H_
#define _VOLTOS_SYSLOG_H_

#include <syslog.h>
#include <sys/syslog.h>

struct log_msg {
    int key;
    const char *str;
};

#endif /* _VOLTOS_SYSLOG_H_ */