#ifndef VOLTOS_VRF_H
#define VOLTOS_VRF_H

#include <nbapi/voltos/vrf.h>

struct vrf {
	__voltos_vrf_id_t 	vrf_id;
	char 			vrf_name[VRF_NAME_SIZE];
};

#endif /* VOLTOS_VRF_H */
