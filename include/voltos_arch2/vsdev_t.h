// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vsdev_t.h
 *
 */

#ifndef _VOLTOS_VSDEV_T_H
#define _VOLTOS_VSDEV_T_H

#include <nbapi/voltos/vsdev_t.h>

#define MINOR_BITS				20
#define MINOR_MASK				((1U << MINOR_BITS) - 1)

#define MAJOR(dev)				((unsigned int) ((dev) >> MINOR_BITS))
#define MINOR(dev)				((unsigned int) ((dev) & MINOR_MASK))
#define MK_DEV(ma, mi)				(((ma) << MINOR_BITS) | (mi))

#define print_dev_t(buffer, dev)

#define format_dev_t(buffer, dev)

#endif /* _VOLTOS_VSDEV_T_H */
