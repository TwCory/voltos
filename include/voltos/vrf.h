#ifndef _VOLTOS_VRF_H_
#define _VOLTOS_VRF_H_

#include <nbapi/voltos/vrf.h>

struct vrf {
	__voltos_vrf_id_t 	vrf_id;
	char 			vrf_name[VRF_NAME_SIZE];
};

#endif /* _VOLTOS_VRF_H_ */
