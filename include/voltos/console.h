// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_CONSOLE_H_
#define _VOLTOS_CONSOLE_H_

#include <voltos/types.h>

struct console {
    string *path;
    int fd;
};

#endif /* _VOLTOS_CONSOLE_H_ */