// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/aodv/aodv_main.c
 *
 */

#include <router/aodv.h>

int main(int argc, char **argv)
{
	aodv_init();

	aodv_router_init();
	aodv_interface_init();
}
