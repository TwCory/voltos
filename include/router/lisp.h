// SPDX-License-Identifier: BSD-3-Clause

#ifndef _LISP_ROUTER_H_
#define _LISP_ROUTER_H_

#include <voltos/if.h>
#include <voltos/lisp.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct lisp {
    struct protocol *p_ptr;
};

struct lisp_interface {
    struct lisp *lisp;
    struct interface *if_ptr;
};

extern void lisp_init(void);
extern void lisp_interface_init(void);

#endif /* _LISP_ROUTER_H_ */