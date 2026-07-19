#ifndef _NBAPI_VOLTOS_BABEL_H
#define _NBAPI_VOLTOS_BABEL_H

#include <voltos/types.h>

#define BABEL_PORT			6696

enum babel_afi {
	BABEL_AFI_T_UNSPEC		= 0,
	BABEL_AFI_T_IPV4_UNICAST	= 1,
	BABEL_AFI_T_IPV6_UNICAST	= 2,
	__BABEL_AFI_T_MAX__
};

struct babel_hdr {

};

#endif /* _NBAPI_VOLTOS_BABEL_H */
