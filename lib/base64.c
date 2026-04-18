// SPDX-License-Identifier: BSD-3-Clause

#include <voltos/base64.h>

static const char *B64_ENCODE_TABLE = 
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void b64_encode_state_init(b64_encode_state_t *state_in)
{
	state_in->step = B64_ENCODE_STEP_T_A;
	state_in->result = 0;
}

char b64_encode_value(char value_in)
{
	if (value_in > 63)
		return '=';
	return B64_ENCODE_TABLE[(int)value_in];
}