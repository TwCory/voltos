// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/shim6/shim6_main.c
 *
 */

#include <router/shim6.h>

int main(int argc, char **argv)
{
	shim6_init();
	shim6_interface_init();
}
