// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/pnni/pnni_main.c
 *
 */

#include <router/pnni.h>

int main(int argc, char **argv)
{
	pnni_init();

	pnni_router_init();
	pnni_interface_init();
}
