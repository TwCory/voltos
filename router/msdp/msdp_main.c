// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/msdp/msdp_main.c
 *
 */

#include <router/msdp.h>

int main(int argc, char **argv)
{
	msdp_init();
	msdp_interface_init();
}
