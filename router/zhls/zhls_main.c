// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/zhls/zhls_main.c
 *
 */

#include <router/zhls.h>

int main(int argc, char **argv)
{
	zhls_init();

	zhls_router_init();
	zhls_interface_init();
}
