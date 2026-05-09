#ifndef _VOLTOS_VRF_H_
#define _VOLTOS_VRF_H_

#include <nbapi/voltos/vrf.h>

struct vrf {
    char                        vrf_name[VRF_NAME_SIZE];
    __voltos_vrf_id_t           vrf_id;

    void                        *vrf_netns_ctx;
    void                        *vrf_user_ctx;
};

struct vrf_list {
    char                        vl_name[VRF_LIST_NAME_SIZE];
    __voltos_vrf_list_id_t      vl_index;

    void			*vl_user_ctx;
};

void vrf_init(void);
void vrf_list_init(void);

#endif /* _VOLTOS_VRF_H_ */
