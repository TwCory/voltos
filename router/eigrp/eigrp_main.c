// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/eigrp/eigrp_main.c
 *
 */

#include <router/eigrp.h>

int main(int argc, char **argv)
{
	eigrp_init();

	eigrp_router_init();
	eigrp_interface_init();
}
