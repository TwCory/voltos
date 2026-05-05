#ifndef _VOLTOS_TTY_STRUCT_H_
#define _VOLTOS_TTY_STRUCT_H_

#include <voltos/line.h>
#include <nbapi/voltos/tty.h>

struct tty {
    struct line             *l_ptr;

    __voltos_tty_id_t       tty_index;
};

#endif /* _VOLTOS_TTY_STRUCT_H_ */