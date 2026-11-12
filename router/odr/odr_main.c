// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/odr/odr_main.c
 *
 */

#include <router/odr.h>

int main(int argc, char **argv)
{
	odr_init();

	odr_router_init();
	odr_interface_init();
}
