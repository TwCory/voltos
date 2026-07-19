#ifndef _NBAPI_VOLTOS_CAN_H
#define _NBAPI_VOLTOS_CAN_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_can {
	__voltos_sa_family_t scan_family;
};

#endif /* _NBAPI_VOLTOS_CAN_H */
