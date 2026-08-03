// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/init.h
 *
 */

#ifndef _VOLTOS_INIT_H
#define _VOLTOS_INIT_H

#ifndef __init
#define __init
#endif /* __init */

#ifndef __init_ctx
#define __init_ctx
#endif /* __init_ctx */

#ifndef __init_const
#define __init_const
#endif /* __init_const */

#ifndef __exit_ctx
#define __exit_ctx
#endif /* __exit_ctx */

#ifndef __exit_call
#define __exit_call
#endif /* __exit_call */

#ifndef __ref
#define __ref
#endif /* __ref */

#ifndef __ref_ctx
#define __ref_ctx
#endif /* __ref_ctx */

#ifndef __ref_const
#define __ref_const
#endif /* __ref_const */

struct __voltos_startup_param {
	const char 	*string;
	int 		exec;
};

#endif /* _VOLTOS_INIT_H */
