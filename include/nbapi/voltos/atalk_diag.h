// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atalk_diag.h
 *
 */

#ifndef _NBAPI_VOLTOS_ATALK_DIAG_H
#define _NBAPI_VOLTOS_ATALK_DIAG_H

#include <voltos/atalk.h>

struct atalk_diag_sockid {
	__u8 adiag_sport;
	__u8 adiag_dport;

};

struct atalk_diag_req {
	__u8 adiag_family;
	__u8 adiag_protocol;
};

#endif /* _NBAPI_VOLTOS_ATALK_DIAG_H */
