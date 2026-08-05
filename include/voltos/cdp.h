// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cdp.h
 *
 */

#ifndef _VOLTOS_CDP_H
#define _VOLTOS_CDP_H

#include <voltos/if.h>
#include <voltos/types.h>
#include <nbapi/voltos/cdp.h>

struct cdp_global_conf {
	bool 				advertise_v2;
	__u16 				holdtime;
	bool 				log_mismatch_duplex;
	bool 				run;
	__voltos_if_index_t 		source_interface;
	__u16 				timer;
};

struct cdp_interface_conf {
	bool 				enable;
	bool 				log_mismatch_duplex;
};

#endif /* _VOLTOS_CDP_H */
