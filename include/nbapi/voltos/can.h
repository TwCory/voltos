#ifndef _NBAPI_VOLTOS_CAN_H_
#define _NBAPI_VOLTOS_CAN_H_

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_can {
	__voltos_sa_family_t scan_family;
};

#endif /* _NBAPI_VOLTOS_CAN_H_ */
