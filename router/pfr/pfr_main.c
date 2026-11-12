// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/pfr/pfr_main.c
 *
 */

#include <router/pfr.h>

int main(int argc, char **argv)
{
	pfr_init();
	pfr_interface_init();
}
