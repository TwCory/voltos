// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/idb_binding_dpdk.h
 *
 */

#ifndef _VOLTOS_IDB_BINDING_DPDK_H
#define _VOLTOS_IDB_BINDING_DPDK_H

enum if_dpdk_type {
	IF_DPDK_TYPE_T_UNSPEC		= 0,
	IF_DPDK_TYPE_T_BASEBAND		= 1,
	IF_DPDK_TYPE_T_COMPRESS		= 2,
	IF_DPDK_TYPE_T_CRYPTO		= 3,
	IF_DPDK_TYPE_T_DMA		= 4,
	IF_DPDK_TYPE_T_ETHERNET		= 5,
	IF_DPDK_TYPE_T_EVENT		= 6,
	IF_DPDK_TYPE_T_GPU		= 7,
	IF_DPDK_TYPE_T_ML		= 8,
	IF_DPDK_TYPE_T_RAW		= 9,
	IF_DPDK_TYPE_T_REGEX		= 10,
	__IF_DPDK_TYPE_T_MAX__
};

struct idb_binding_dpdk {

};

#endif /* _VOLTOS_IDB_BINDING_DPDK_H */
