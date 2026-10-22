// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/err.h
 *
 */

#ifndef _VOLTOS_ERR_H
#define _VOLTOS_ERR_H

#define ERRNO_MAX	4095

#ifndef IS_ERR_VALUE
#define IS_ERR_VALUE(x)
#endif /* IS_ERR_VALUE */

#ifndef ERR_PTR
#define ERR_PTR(error)
#endif /* ERR_PTR */

#ifndef INIT_ERR_PTR
#define INIT_ERR_PTR(error)
#endif /* INIT_ERR_PTR */

#ifndef ERR_PTR_PERCPU
#define ERR_PTR_PERCPU(error)
#endif /* ERR_PTR_PERCPU */

#ifndef IO_ERR_PTR
#define IO_ERR_PTR(error)
#endif /* IO_ERR_PTR */

#ifndef PTR_ERR
#define PTR_ERR(ptr)
#endif /* PTR_ERR */

#ifndef PTR_ERR_PERCPU
#define PTR_ERR_PERCPU(ptr)
#endif /* PTR_ERR_PERCPU */

#ifndef IS_ERR
#define IS_ERR(ptr)
#endif /* IS_ERR */

#ifndef IS_ERR_PERCPU
#define IS_ERR_PERCPU(ptr)
#endif /* IS_ERR_PERCPU */

#ifndef IS_ERR_OR_NULL
#define IS_ERR_OR_NULL(ptr)
#endif /* IS_ERR_OR_NULL */

#ifndef ERR_CAST
#define ERR_CAST(ptr)
#endif /* ERR_CAST */

#ifndef PTR_ERR_OR_ZERO
#define PTR_ERR_OR_ZERO(ptr)
#endif /* PTR_ERR_OR_ZERO */

#endif /* _VOLTOS_ERR_H */
