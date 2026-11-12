// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/dvmrp/dvmrp_main.c
 *
 */

#include <router/dvmrp.h>

int main(int argc, char **argv)
{
	dvmrp_init();
	dvmrp_interface_init();
}