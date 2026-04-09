#ifndef _VOLTOS_VRF_H_
#define _VOLTOS_VRF_H_

#define VRF_NAME_SIZE           36

typedef unsigned long           __voltos_vrf_id_t;

struct vrf {
    __voltos_vrf_id_t           vrf_id;
    signed char                 vrf_name[VRF_NAME_SIZE];
};

#endif /* _VOLTOS_VRF_H_ */