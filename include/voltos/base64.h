// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_BASE64_H_
#define _VOLTOS_BASE64_H_

typedef enum {
    B64_ENCODE_STEP_T_A,
    B64_ENCODE_STEP_T_B,
    B64_ENCODE_STEP_T_C
} b64_encode_step_t;

typedef enum {
    B64_DECODE_STEP_T_A,
    B64_DECODE_STEP_T_B,
    B64_DECODE_STEP_T_C,
    B64_DECODE_STEP_T_D
} b64_decode_step_t;

typedef struct {
    b64_encode_step_t step;
    char result;
} b64_encode_state_t;

typedef struct {
    b64_decode_step_t step;
    char plaintext;
} b64_decode_state_t;

void b64_encode_state_init(b64_encode_state_t *state_in);
char b64_encode_value(char value_in);
int b64_encode_block(const char *text_in, int len_in, char *code_out, b64_encode_state_t *state_in);
int b64_encode_block_end(char *code_out, b64_encode_state_t *state_in);

void b64_decode_state_init(b64_decode_state_t *state_in);
signed char b64_decode_value(signed char value_in);
int b64_decode_block(const char *code_in, int len_in, char *text_out, b64_decode_state_t *state_in);

#endif /* _VOLTOS_BASE64_H_ */