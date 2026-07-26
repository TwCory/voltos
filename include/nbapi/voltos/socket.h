#ifndef _NBAPI_VOLTOS_SOCKET_H
#define _NBAPI_VOLTOS_SOCKET_H

#include <voltos/types.h>

typedef __u16 				__voltos_sa_family_t;

struct __voltos_sa_storage {
	__voltos_sa_family_t 		ss_family;
	void 				*ss_data;
};

#endif /* _NBAPI_VOLTOS_SOCKET_H */
