// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/ospfv3/ospf6_main.c
 *
 */

#include <router/ospfv3.h>

int main(int argc, char **argv)
{
	ospf6_init();

	ospf6_router_init();
	ospf6_interface_init();
}
