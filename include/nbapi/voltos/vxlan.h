#ifndef _NBAPI_VOLTOS_VXLAN_H_
#define _NBAPI_VOLTOS_VXLAN_H_

#include <voltos/types.h>

#define VXLAN_PORT	4789

struct vxlan_hdr {
	__net32		flags:8,
			reserved1:24;
	__net32		vni:24,
			reserved2:8;
};

#endif /* _NBAPI_VOLTOS_VXLAN_H_ */
