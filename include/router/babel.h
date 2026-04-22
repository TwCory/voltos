#ifndef _BABEL_ROUTER_H_
#define _BABEL_ROUTER_H_

#include <voltos/babel.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/vrf.h>
#include <router/protocol.h>

struct babel {
    struct protocol *protocol;
};

struct babel_interface {
    struct babel *babel;
    struct interface *ifp;
};

struct babel_neighbour {
    struct babel *babel;
};

extern void babel_init(void);
extern void babel_interface_init(void);
extern void babel_neighbour_init(void);
extern int babel_create_sock(struct vrf *vrf);
extern void babel_hello_send_noupdate(struct interface *ifp, unsigned int interval);
extern void babel_hello_send(struct interface *ifp);


#endif /* _BABEL_ROUTER_H_ */