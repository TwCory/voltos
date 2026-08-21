// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bfd.h
 *
 * 	Bidirectional Forwarding Detection (BFD)
 */

#ifndef _VOLTOS_BFD_H
#define _VOLTOS_BFD_H

#include <nbapi/voltos/bfd.h>

struct bfd_profile {
	const char 			name[BFD_PROFILE_NAME_SIZE];
};

#endif /* _VOLTOS_BFD_H */
