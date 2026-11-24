// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_nve.h
 *
 * 	Network Virtualization Endpoint (NVE) Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_NVE_H
#define _NBAPI_VOLTOS_IF_NVE_H

#define NVE_ID_MIN		0
#define NVE_ID_MAX		65535U

enum nve_protocol {
	NVE_PROTOCOL_UNSPEC	= 0,
	NVE_PROTOCOL_GENEVE	= 1,
	NVE_PROTOCOL_NVGRE	= 2,
	NVE_PROTOCOL_VXLAN	= 3,
	__NVE_PROTOCOL_MAX__
};

#define NVE_PROTOCOL_MAX	(__NVE_PROTOCOL_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IF_NVE_H */
