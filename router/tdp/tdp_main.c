// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/tdp/tdp_main.c
 *
 */

#include <router/tdp.h>

int main(int argc, char **argv)
{
	tdp_init();
	tdp_interface_init();
}
