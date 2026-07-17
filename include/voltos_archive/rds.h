#ifndef _VOLTOS_RDS_H
#define _VOLTOS_RDS_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_rds {
	__voltos_sa_family_t srds_family;
};

#endif /* _VOLTOS_RDS_H */
