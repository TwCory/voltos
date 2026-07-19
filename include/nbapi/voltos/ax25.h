#ifndef _NBAPI_VOLTOS_AX25_H
#define _NBAPI_VOLTOS_AX25_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define AX25_PROTOCOL		93

struct ax25_addr {

};

struct sockaddr_ax25 {
	__voltos_sa_family_t 	sax25_family;
};

#endif /* _NBAPI_VOLTOS_AX25_H */
