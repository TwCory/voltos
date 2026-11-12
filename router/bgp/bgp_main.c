// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/bgp/bgp_main.c
 *
 */

#include <router/bgp.h>

int main(int argc, char **argv)
{
	bgp_init();

	bgp_router_init();
	bgp_interface_init();
}
