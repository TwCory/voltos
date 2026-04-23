#ifndef _BABEL_ROUTER_H_
#define _BABEL_ROUTER_H_

#include <voltos/babel.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/route_table.h>
#include <voltos/thread.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct babel {
    struct protocol *p_ptr;
    struct route_table *rt_ptr;

    string *vrf_name;
    struct vrf *vrf_ptr;

    struct thread *t_read;
    struct thread *t_update;

};

struct babel_interface {
    struct babel *babel;
    struct interface *if_ptr;
};

struct babel_neighbour {
    struct babel *babel;
};

struct babel_route {
    struct route *r_ptr;
};

extern void babel_init(void);
extern void babel_interface_init(void);
extern void babel_neighbour_init(void);


#endif /* _BABEL_ROUTER_H_ */