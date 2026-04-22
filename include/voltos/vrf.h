// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_VRF_H_
#define _VOLTOS_VRF_H_

#include <voltos/types.h>

#define VRF_NAME_SIZE           32
#define VRF_NAME_DEFAULT        "default"

#define VRF_ID_DEFAULT          (4294697295)

typedef __voltos_vrf_id_t       vrf_id_t;

struct vrf {
    vrf_id_t                    vrf_id;
    string                      vrf_name[VRF_NAME_SIZE];

    void                        *vrf_user_ctx;
    void                        *vrf_netns_ctx;
};

extern const struct vrf         default_vrf;

#endif /* _VOLTOS_VRF_H_ */