#ifndef _VOLTOS_SNA_H
#define _VOLTOS_SNA_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define SNA_ETHERTYPE		0x80D5

struct sockaddr_sna {
	__voltos_sa_family_t ssna_family;
};

#endif /* _VOLTOS_SNA_H */
