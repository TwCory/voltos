// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_TTY_H_
#define _VOLTOS_TTY_H_

#include <ttyent.h>
#include <sys/ttychars.h>
#include <sys/ttydefaults.h>
#include <voltos/types.h>

typedef __voltos_tty_id_t tty_id_t;

struct tty {
    tty_id_t tty_id;
    int tty_fd;
};

#endif /* _VOLTOS_TTY_H_ */