// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/lisp/lisp_main.c
 *
 */

#include <router/lisp.h>

int main(int argc, char **argv)
{
	lisp_init();

	lisp_router_init();
	lisp_interface_init();
}
