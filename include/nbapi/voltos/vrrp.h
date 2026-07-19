#ifndef _NBAPI_VOLTOS_VRRP_H
#define _NBAPI_VOLTOS_VRRP_H

#include <voltos/types.h>

#define VRRP_PROTOCOL			112

enum vrrp_version {
	VRRP_VERSION_T_V2		= 2,
	VRRP_VERSION_T_V3		= 3,
	__VRRP_VERSION_T_MAX__
};

enum vrrp_state {
	VRRP_STATE_T_INIT		= 1,
	VRRP_STATE_T_BACKUP		= 2,
	VRRP_STATE_T_MASTER		= 3,
	VRRP_STATE_T_RECOVER		= 4,
	__VRRP_STATE_T_MAX__
};

enum vrrp_bfd_state {
	VRRP_BFD_STATE_T_NONE		= 0,
	VRRP_BFD_STATE_T_INACTIVE	= 1,
	VRRP_BFD_STATE_T_DOWN		= 2,
	VRRP_BFD_STATE_T_UP		= 3,
	__VRRP_BFD_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VRRP_H */
