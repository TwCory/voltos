// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_VTY_H_
#define _VOLTOS_VTY_H_

#include <voltos/types.h>

#define VTY_ID_MIN      0
#define VTY_ID_MAX      15

typedef __voltos_vty_id_t vty_id_t;

struct vty {
    vty_id_t vty_id;
    int vty_fd;
};

#endif /* _VOLTOS_VTY_H_ */