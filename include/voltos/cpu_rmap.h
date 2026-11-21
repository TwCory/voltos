// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cpu_rmap.h
 *
 */

#ifndef _VOLTOS_CPU_RMAP_H
#define _VOLTOS_CPU_RMAP_H

struct cpu_rmap {
	struct vs_ref 		ref_count;
	u16 			size;
	void 			**objects;
	struct {
		u16 		index;
		u16 		distance;
	} near[];
};

#endif /* _VOLTOS_CPU_RMAP_H */
