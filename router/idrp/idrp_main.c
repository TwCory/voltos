// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/idrp/idrp_main.c
 *
 */

#include <router/idrp.h>

int main(int argc, char **argv)
{
	idrp_init();

	idrp_router_init();
	idrp_interface_init();
}
