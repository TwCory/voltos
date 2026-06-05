#ifndef _NET_SOCKET_H_
#define _NET_SOCKET_H_

#include <voltos/mbuf.h>

struct socket {


	struct mbuf_head 	sk_error_queue;
	struct mbuf_head 	sk_receive_queue;
};

#endif /* _NET_SOCKET_H_ */
