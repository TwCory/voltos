// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/ldp/ldp_main.c
 *
 */

#include <router/ldp.h>

int main(int argc, char **argv)
{
	ldp_init();
	ldp_interface_init();
}
