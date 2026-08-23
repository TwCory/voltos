// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/serial_idb.h
 *
 */

#ifndef _VOLTOS_SERIAL_IDB_H
#define _VOLTOS_SERIAL_IDB_H

#include <voltos/idb.h>
#include <voltos/if_serial.h>

struct serial_idb {
	struct idb *idb;
};

#endif /* _VOLTOS_SERIAL_IDB_H */
