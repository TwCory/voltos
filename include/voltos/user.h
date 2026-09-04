// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/user.h
 *
 */

#ifndef _VOLTOS_USER_H
#define _VOLTOS_USER_H

#include <nbapi/voltos/user.h>

#ifndef __user
#define __user
#endif /* __user */

struct user {
	const char name[USER_NAME_SIZE];
};

#endif /* _VOLTOS_USER_H */
