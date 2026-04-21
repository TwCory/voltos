// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_EIGRP_TYPES_H_
#define _VOLTOS_EIGRP_TYPES_H_

#include <voltos/inet.h>
#include <voltos/types.h>

typedef asn16_t         eigrp_asn_t;

typedef u64             eigrp_bandwidth_t;
typedef u64             eigrp_delay_t;
typedef u64             eigrp_metric_t;
typedef u64             eigrp_scaled_t;

typedef u32             eigrp_system_metric_t;
typedef u32             eigrp_system_delay_t;
typedef u32             eigrp_system_bandwidth_t;

#endif /* _VOLTOS_EIGRP_TYPES_H_ */