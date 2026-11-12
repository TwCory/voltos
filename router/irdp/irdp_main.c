// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/irdp/irdp_main.c
 *
 */

#include <router/irdp.h>

int main(int argc, char **argv)
{
	irdp_init();
	irdp_interface_init();
}
