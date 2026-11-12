// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/mldp/mldp_main.c
 *
 */

#include <router/mldp.h>

int main(int argc, char **argv)
{
	mldp_init();
	mldp_interface_init();
}
