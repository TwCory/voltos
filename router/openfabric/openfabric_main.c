// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/openfabric/openfabric_main.c
 *
 */

#include <router/openfabric.h>

int main(int argc, char **argv)
{
	openfabric_init();

	openfabric_router_init();
	openfabric_interface_init();
}
