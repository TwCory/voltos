// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/omp/omp_main.c
 *
 */

#include <router/omp.h>

int main(int argc, char **argv)
{
	omp_init();

	omp_router_init();
	omp_interface_init();
}
