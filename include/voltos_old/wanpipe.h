#ifndef _VOLTOS_WANPIPE_H
#define _VOLTOS_WANPIPE_H

#include <voltos/socket.h>

struct sockaddr_wanpipe {
	__voltos_sa_family_t swanpipe_family;
};

#endif /* _VOLTOS_WANPIPE_H */
