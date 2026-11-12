// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/mobile/mobile_main.c
 *
 */

#include <router/mobile.h>

int main(int argc, char **argv)
{
	mobile_init();

	mobile_router_init();
	mobile_interface_init();
}
