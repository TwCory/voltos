#ifndef _VOLTOS_IF_PACKET_H
#define _VOLTOS_IF_PACKET_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_packet {
	__voltos_sa_family_t spacket_family;
};

#endif /* _VOLTOS_IF_PACKET_H */
