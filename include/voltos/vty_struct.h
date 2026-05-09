#ifndef _VOLTOS_VTY_STRUCT_H_
#define _VOLTOS_VTY_STRUCT_H_

#include <voltos/line.h>
#include <nbapi/voltos/vty.h>

struct vty {
    struct line         *l_ptr;

    __voltos_vty_id_t   vty_index;

    int                 vty_input_fd;
    int                 vty_output_fd;
};

void vty_struct_init(void);

#endif /* _VOLTOS_VTY_STRUCT_H_ */
