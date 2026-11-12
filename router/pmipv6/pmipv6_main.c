// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/pmipv6/pmipv6_main.c
 *
 */

#include <router/pmipv6.h>

int main(int argc, char **argv)
{
	pmipv6_init();
	pmipv6_interface_init();
}
