#ifndef _NBAPI_VOLTOS_IPX_H_
#define _NBAPI_VOLTOS_IPX_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define IPX_PORT		213

struct sockaddr_ipx {
	__voltos_sa_family_t sipx_family;
};

#endif /* _NBAPI_VOLTOS_IPX_H_ */
