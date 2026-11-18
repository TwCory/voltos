// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/journal.h
 *
 * 	Journaling File Systems
 */

#ifndef _VOLTOS_JOURNAL_H
#define _VOLTOS_JOURNAL_H

typedef unsigned int 			journal_tid_t;
typedef struct journal_transaction 	journal_transaction_t;

struct buffer_head;

struct journal_head {
	struct buffer_head		*b_head;
	spinlock_t			b_state_lock;
	int 				b_jcount;
	unsigned			b_jlist;
	unsigned			b_modified;
	char 				*b_frozen_data;
	char 				*b_committed_data;
	journal_transaction_t		*b_transaction;
	journal_transaction_t		*b_next_transaction;
	struct journal_head		*b_tnext;
	struct journal_head		*b_tprev;
	journal_transaction_t		*b_cp_transaction;
	struct journal_head 		*b_cpnext;
	struct journal_head 		*b_cpprev;
};

#endif /* _VOLTOS_JOURNAL_H */
