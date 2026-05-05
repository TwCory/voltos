#ifndef _ROUTER_REDISTRIBUTE_H_
#define _ROUTER_REDISTRIBUTE_H_

#include <router/protocol.h>

struct redistribute_ctx {
    struct protocol *p_src;
    struct protocol *p_dst;
};

#endif /* _ROUTER_REDISTRIBUTE_H_ */