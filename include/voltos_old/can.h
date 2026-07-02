#ifndef _VOLTOS_CAN_H
#define _VOLTOS_CAN_H

#include <voltos/socket.h>

struct sockaddr_can {
	__voltos_sa_family_t scan_family;
};

#endif /* _VOLTOS_CAN_H */
