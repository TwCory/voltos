// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/msg.h
 *
 */

#ifndef _VOLTOS_MSG_H
#define _VOLTOS_MSG_H

#include <voltos/list.h>
#include <nbapi/voltos/msg.h>

struct msg_msg {
	struct list_head 	m_list;
	long			m_type;
	size_t			m_text_size;
	struct msg_msgseg	*m_next;
	void			*m_security;
};

#endif /* _VOLTOS_MSG_H */
