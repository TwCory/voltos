// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/ripv2/rip_main.c
 *
 */

#include <router/rip.h>

int main(int argc, char **argv)
{
	rip_init();

	rip_router_init();
	rip_interface_init();
}
