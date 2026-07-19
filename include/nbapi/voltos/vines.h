#ifndef _NBAPI_VOLTOS_VINES_H
#define _NBAPI_VOLTOS_VINES_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct vines_addr {
	__net32 			s_net;
	__net16 			s_host;
};

struct sockaddr_vines {
	__voltos_sa_family_t 		svines_family;
};

#endif /* _NBAPI_VOLTOS_VINES_H */
