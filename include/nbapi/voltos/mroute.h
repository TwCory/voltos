#ifndef _NBAPI_VOLTOS_MROUTE_H
#define _NBAPI_VOLTOS_MROUTE_H

#include <voltos/types.h>

enum mroute_afi {
	MROUTE_AFI_T_UNSPEC		= 0,
	MROUTE_AFI_T_IPV4		= 1,
	MROUTE_AFI_T_IPV6		= 2,
	__MROUTE_AFI_T_MAX__
};

#endif /* _NBAPI_VOLTOS_MROUTE_H */
