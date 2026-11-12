// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/ospfv2/ospf_main.c
 *
 */

#include <router/ospf.h>

int main(int argc, char **argv)
{
	ospf_init();

	ospf_router_init();
	ospf_interface_init();
}
