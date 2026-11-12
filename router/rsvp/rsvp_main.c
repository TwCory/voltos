// SPDX-License-Identifier: BSD-3-Clause

/*
 *	router/rsvp/rsvp_main.c
 *
 */

#include <router/rsvp.h>

int main(int argc, char **argv)
{
	rsvp_init();
	rsvp_interface_init();
}
