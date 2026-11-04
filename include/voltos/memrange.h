// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/memrange.h
 *
 */

#ifndef _VOLTOS_MEMRANGE_H
#define _VOLTOS_MEMRANGE_H

#include <voltos/types.h>

struct memrange_ctx {
	phy_addr_t	start;
	phy_addr_t	stop;
};

#endif /* _VOLTOS_MEMRANGE_H */
