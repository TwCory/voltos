// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/acct.h
 *
 * 	Accounting
 */

#ifndef _NBAPI_VOLTOS_ACCT_H
#define _NBAPI_VOLTOS_ACCT_H

#include <voltos/types.h>

typedef uint16_t 			__comp1_t;
typedef uint32_t 			__comp2_t;

#define ACCT_CMD			16
#define ACCT_VERSION			2

struct __voltos_acct {
	char 				ac_flag;
	char 				ac_version;
	uint16_t 			ac_uid16;
	uint16_t 			ac_gid16;
	uint16_t 			ac_terminal;
	uint32_t 			ac_btime;
	__comp1_t 			ac_utime;
	__comp1_t 			ac_stime;
	__comp1_t 			ac_etime;
	__comp1_t 			ac_memory;
	__comp1_t 			ac_io;
	__comp1_t 			ac_rw;
	__comp1_t 			ac_minor_faults;
	__comp1_t 			ac_major_faults;
	__comp1_t 			ac_swaps;

	uint32_t 			ac_exit_code;
	char 				ac_cmd[ACCT_CMD + 1];
	uint8_t 			ac_etime_hi;
	uint16_t 			ac_etime_lo;
	uint32_t 			ac_uid;
	uint32_t 			ac_gid;
};

struct __voltos_acct_v3 {
	char 				ac_flag;
	char 				ac_version;
	uint16_t 			ac_terminal;
	uint32_t 			ac_exit_code;
	uint32_t 			ac_uid;
	uint32_t 			ac_gid;
	uint32_t 			ac_pid;
	uint32_t 			ac_parent_pid;
	uint32_t 			ac_btime;
	float 				ac_etime;
	__comp1_t 			ac_utime;
	__comp1_t 			ac_stime;
	__comp1_t 			ac_memory;
	__comp1_t 			ac_io;
	__comp1_t 			ac_rw;
	__comp1_t 			ac_minor_faults;
	__comp1_t 			ac_major_faults;
	__comp1_t 			ac_swaps;
	char 				ac_cmd[ACCT_CMD];
};

enum {
	ACCT_FLAG_F_FORK		= 0x01,
#define ACCT_FLAG_FORK			ACCT_FLAG_F_FORK
	ACCT_FLAG_F_SUPER_USER		= 0x02,
#define ACCT_FLAG_SUPER_USER		ACCT_FLAG_F_SUPER_USER
	ACCT_FLAG_F_COMPAT		= 0x04,
#define ACCT_FLAG_COMPAT		ACCT_FLAG_F_COMPAT
	ACCT_FLAG_F_CORE		= 0x08,
#define ACCT_FLAG_CORE			ACCT_FLAG_F_CORE
	ACCT_FLAG_F_KILLED_BY_SIGNAL	= 0x10,
#define ACCT_FLAG_KILLED_BY_SIGNAL	ACCT_FLAG_F_KILLED_BY_SIGNAL
	ACCT_FLAG_F_TASK_GROUP		= 0x20,
#define ACCT_FLAG_TASK_GROUP		ACCT_FLAG_F_TASK_GROUP
};

#endif /* _NBAPI_VOLTOS_ACCT_H */
