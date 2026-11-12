// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/carp/carp_main.c
 *
 */

#include <router/carp.h>

int main(int argc, char **argv)
{
	carp_init();
	carp_interface_init();
}
