#ifndef _VOLTOS_IRDA_H
#define _VOLTOS_IRDA_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_irda {
	__voltos_sa_family_t sirda_family;
};

#endif /* _VOLTOS_IRDA_H */
