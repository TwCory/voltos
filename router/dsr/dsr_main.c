// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/dsr/dsr_main.c
 *
 */

#include <router/dsr.h>

int main(int argc, char **argv)
{
	dsr_init();

	dsr_router_init();
	dsr_interface_init();
}