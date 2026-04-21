// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_BGP_TYPES_H_
#define _VOLTOS_BGP_TYPES_H_

#include <voltos/inet.h>
#include <voltos/types.h>

typedef asn16_t         bgp_asn16_t;
typedef asn32_t         bgp_asn32_t;

typedef u_size          bgp_size_t;

typedef ip4_addr_t      bgp_router_id_t;
typedef ip4_addr_t      bgp_cluster_id_t;

#endif /* _VOLTOS_BGP_TYPES_H_ */