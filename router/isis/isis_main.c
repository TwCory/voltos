// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/isis/isis_main.c
 *
 */

#include <router/isis.h>

int main(int argc, char **argv)
{
	isis_init();

	isis_router_init();
	isis_interface_init();
}
