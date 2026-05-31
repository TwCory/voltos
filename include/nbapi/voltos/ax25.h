#ifndef _NBAPI_VOLTOS_AX25_H_
#define _NBAPI_VOLTOS_AX25_H_

#include <voltos/socket.h>
#include <voltos/types.h>

#define AX25_PROTOCOL		93

struct sockaddr_ax25 {
	__voltos_sa_family_t sax25_family;
};

#endif /* _NBAPI_VOLTOS_AX25_H_ */
