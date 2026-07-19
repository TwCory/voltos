#ifndef _NBAPI_VOLTOS_GENEVE_H
#define _NBAPI_VOLTOS_GENEVE_H

#include <voltos/types.h>

#define GENEVE_VNI_BYTE_SIZE		3

struct geneve_vni {
	__byte 				bytes[GENEVE_VNI_BYTE_SIZE];
};

struct geneve_hdr {

};

#endif /* _NBAPI_VOLTOS_GENEVE_H */
