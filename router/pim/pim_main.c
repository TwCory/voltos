// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/pim/pim_main.c
 *
 */

#include <router/pim.h>

int main(int argc, char **argv)
{
	pim_init();
	pim_interface_init();
}
