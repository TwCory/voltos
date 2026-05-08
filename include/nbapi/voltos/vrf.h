// SPDX-License-Identifier: BSD-3-Clause

/*
 *	Virtual Routing and Forwarding (VRF) Instances
 *
 *
 */

#ifndef _NBAPI_VOLTOS_VRF_H_
#define _NBAPI_VOLTOS_VRF_H_

#define VRF_NAME_SIZE           32
#define VRF_LIST_NAME_SIZE      32
#define VRF_COMMENT_SIZE        128

#define VRF_ID_DEFAULT          1
#define VRF_NAME_DEFAULT        "default"

typedef unsigned int            __voltos_vrf_id_t;
typedef unsigned int            __voltos_vrf_list_id_t;

#endif /* _NBAPI_VOLTOS_VRF_H_ */
