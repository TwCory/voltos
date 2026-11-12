// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/nhrp/nhrp_main.c
 *
 */

#include <router/nhrp.h>

int main(int argc, char **argv)
{
	nhrp_init();
	nhrp_interface_init();
}
