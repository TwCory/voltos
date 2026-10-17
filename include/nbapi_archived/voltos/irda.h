// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/irda.h
 *
 */

#ifndef _NBAPI_VOLTOS_IRDA_H
#define _NBAPI_VOLTOS_IRDA_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IRDA_SERVICE_NAME_SIZE		25

struct irda_addr {
	__net32				s_addr;
};

struct sockaddr_irda {
	__voltos_sa_family_t		sirda_family;
	__u8				sirda_lsap_sel;
	struct irda_addr		sirda_addr;
	char				sirda_name[IRDA_SERVICE_NAME_SIZE];
};

#endif /* _NBAPI_VOLTOS_IRDA_H */
