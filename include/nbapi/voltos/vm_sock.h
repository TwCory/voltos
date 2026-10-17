// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vm_sock.h
 *
 */

#ifndef _NBAPI_VOLTOS_VM_SOCK_H
#define _NBAPI_VOLTOS_VM_SOCK_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_vm {
	__voltos_sa_family_t 		svm_family;
};

#endif /* _NBAPI_VOLTOS_VM_SOCK_H */
