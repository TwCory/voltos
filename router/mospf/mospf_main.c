// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/mospf/mospf_main.c
 *
 */

#include <router/mospf.h>

int main(int argc, char **argv)
{
	mospf_init();
	mospf_interface_init();
}
