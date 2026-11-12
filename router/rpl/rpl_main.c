// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/rpl/rpl_main.c
 *
 */

#include <router/rpl.h>

int main(int argc, char **argv)
{
	rpl_init();

	rpl_router_init();
	rpl_interface_init();
}
