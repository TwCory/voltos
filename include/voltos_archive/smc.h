#ifndef _VOLTOS_SMC_H
#define _VOLTOS_SMC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_smc {
	__voltos_sa_family_t ssmc_family;
};

#endif /* _VOLTOS_SMC_H */
