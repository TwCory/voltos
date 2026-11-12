// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/idpr/idpr.c
 *
 */

#include <router/idpr.h>

int main(int argc, char **argv)
{
	idpr_init();

	idpr_router_init();
	idpr_interface_init();
}
