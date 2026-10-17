// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cookie.h
 *
 */

#ifndef _VOLTOS_COOKIE_H
#define _VOLTOS_COOKIE_H

#include <voltos/atomic.h>
#include <voltos/percpu.h>

struct generic_cookie {

};

struct pcpu_generic_cookie {

};

#define COOKIE_LOCAL_BATCH_SIZE		4096

#ifndef DEFINE_COOKIE
#define DEFINE_COOKIE(name)
#endif /* DEFINE_COOKIE */

#endif /* _VOLTOS_COOKIE_H */
