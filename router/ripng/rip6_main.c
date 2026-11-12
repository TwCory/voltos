// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/ripng/rip6_main.c
 *
 */

#include <router/ripng.h>

int main(int argc, char **argv)
{
	rip6_init();

	rip6_router_init();
	rip6_interface_init();
}
