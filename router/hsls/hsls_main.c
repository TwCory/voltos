// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/hsls/hsls_main.c
 *
 */

#include <router/hsls.h>

int main(int argc, char **argv)
{
	hsls_init();

	hsls_router_init();
	hsls_interface_init();
}
