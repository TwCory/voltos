// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/sdrp/sdrp_main.c
 *
 */

#include <router/sdrp.h>

int main(int argc, char **argv)
{
	sdrp_init();

	sdrp_router_init();
	sdrp_interface_init();
}
