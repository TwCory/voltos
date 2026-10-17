// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/acct.h
 *
 *	Accounting Definitions
 */

#ifndef _NBAPI_VOLTOS_ACCT_H
#define _NBAPI_VOLTOS_ACCT_H

#include <voltos/types.h>

typedef __u16 			acct_comp1_t;
typedef __u32 			acct_comp2_t;

#define ACCT_COMM		16

struct acct {
	char 			ac_flag;
	char 			ac_version;
	__u16			ac_uid16;
	__u16			ac_gid16;
	__u16			ac_tty;
	__u32			ac_btime;
	acct_comp1_t		ac_utime;
	acct_comp1_t		ac_stime;
	acct_comp1_t		ac_etime;
	acct_comp1_t		ac_mem;
	acct_comp1_t		ac_io;
	acct_comp1_t		ac_rw;
	acct_comp1_t		ac_minflt;
	acct_comp1_t		ac_majflt;
	acct_comp1_t		ac_swaps;

	__u32			ac_exitcode;
	char			ac_comm[ACCT_COMM + 1];
	__u8			ac_etime_hi;
	__u16			ac_etime_lo;
	__u32			ac_uid;
	__u32			ac_gid;
};

struct acct_v3 {
	char			ac_flag;
	char			ac_version;
	__u16			ac_tty;
	__u32			ac_exitcode;
	__u32 			ac_uid;
	__u32 			ac_gid;
	__u32 			ac_pid;
	__u32 			ac_ppid;
	__u32 			ac_btime;
	__u32 			ac_etime;
	acct_comp1_t		ac_utime;
	acct_comp1_t		ac_stime;
	acct_comp1_t		ac_mem;
	acct_comp1_t		ac_io;
	acct_comp1_t		ac_rw;
	acct_comp1_t		ac_minflt;
	acct_comp1_t		ac_majflt;
	acct_comp1_t		ac_swaps;
	char			ac_comm[ACCT_COMM];
};

enum {
	ACCT_FLAG_T_FORK	= 0x01,
#define ACCT_FLAG_FORK		ACCT_FLAG_T_FORK
	ACCT_FLAG_T_SU		= 0x02,
#define ACCT_FLAG_SU		ACCT_FLAG_T_SU
	ACCT_FLAG_T_COMPAT	= 0x04,
#define ACCT_FLAG_COMPAT	ACCT_FLAG_T_COMPAT
	ACCT_FLAG_T_CORE	= 0x08,
#define ACCT_FLAG_CORE		ACCT_FLAG_T_CORE
	ACCT_FLAG_T_XSIG	= 0x10,
#define ACCT_FLAG_XSIG		ACCT_FLAG_T_XSIG
	ACCT_FLAG_T_GROUP	= 0x20,
#define ACCT_FLAG_GROUP		ACCT_FLAG_T_GROUP
	__ACCT_FLAG_T_MAX__
};

#define ACCT_FLAG_MAX		(__ACCT_FLAG_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ACCT_H */
