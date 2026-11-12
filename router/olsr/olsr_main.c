// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/olsr/olsr_main.c
 *
 */

#include <router/olsr.h>

int main(int argc, char **argv)
{
	olsr_init();

	olsr_router_init();
	olsr_interface_init();
}
