// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/rift/rift_main.c
 *
 */

#include <router/rift.h>

int main(int argc, char **argv)
{
	rift_init();
	rift_interface_init();
}
