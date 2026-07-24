#ifndef _NBAPI_VOLTOS_BITS_H
#define _NBAPI_VOLTOS_BITS_H

#define BIT_STATE_OFF   0
#define BIT_STATE_ON    1

#define BITS_PER_NIBBLE     4
#define BITS_PER_BYTE   8
#define BITS_PER_OCTET      8
#define BITS_PER_HEXTET     16

#define BITS_PER_SHORT      16
#define BITS_PER_INT        32
#define BITS_PER_LONG           32
#define BITS_PER_LONG_LONG      64

typedef enum {
    off = BIT_STATE_OFF,
    on = BIT_STATE_ON
} __bit;

#endif /* _NBAPI_VOLTOS_BITS_H */
