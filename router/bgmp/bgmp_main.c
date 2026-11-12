// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/bgmp/bgmp_main.c
 *
 */

#include <router/bgmp.h>

int main(int argc, char **argv)
{
	bgmp_init();
	bgmp_interface_init();
}
