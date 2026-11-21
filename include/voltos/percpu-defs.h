// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/percpu-defs.h
 *
 */

#ifndef _VOLTOS_PERCPU_DEFS_H
#define _VOLTOS_PERCPU_DEFS_H

#ifndef __percpu
#define __percpu
#endif /* __percpu */

#define DECLARE_PER_CPU_SECTION(type, name, section)

#define DEFINE_PER_CPU_SECTION(type, name, section)

#define DECLARE_PER_CPU(type, name)

#define DEFINE_PER_CPU(type, name)

#define DECLARE_PER_CPU_FAST_CACHE(type, name)

#define DEFINE_PER_CPU_FAST_CACHE(type, name)

#endif /* _VOLTOS_PERCPU_DEFS_H */
