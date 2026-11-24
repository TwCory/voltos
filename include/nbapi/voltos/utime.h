// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/utime.h
 *
 */

#ifndef _NBAPI_VOLTOS_UTIME_H
#define _NBAPI_VOLTOS_UTIME_H

#include <voltos/types.h>

struct utimbuf {
	__voltos_old_time_t actime;
	__voltos_old_time_t modtime;
};

#endif /* _NBAPI_VOLTOS_UTIME_H */
