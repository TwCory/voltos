// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cpu_smt.h
 *
 * 	Simultaneous Multi-Threading (SMT)
 */

#ifndef _VOLTOS_CPU_SMT_H
#define _VOLTOS_CPU_SMT_H

enum cpu_smt_state {
	CPU_SMT_STATE_T_DISABLED		= 0,
	CPU_SMT_STATE_T_ENABLED			= 1,
	CPU_SMT_STATE_T_FORCE_DISABLED		= 2,
	CPU_SMT_STATE_T_NOT_SUPPORTED		= 3,
	CPU_SMT_STATE_T_NOT_IMPLEMENTED		= 4,
	__CPU_SMT_STATE_T_MAX__
};

#endif /* _VOLTOS_CPU_SMT_H */
