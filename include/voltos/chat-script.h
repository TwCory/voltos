// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/chat-script.h
 *
 * 	Modem Chat Script
 */

#ifndef _VOLTOS_CHAT_SCRIPT_H
#define _VOLTOS_CHAT_SCRIPT_H

#include <voltos/refcount.h>
#include <nbapi/voltos/chat-script.h>

struct chat_script {
	const char 		name[CHAT_SCRIPT_NAME_SIZE];
	refcount_t 		ref_count;
};

#endif /* _VOLTOS_CHAT_SCRIPT_H */
