#ifndef _VOLTOS_ZONE_PAIR_H_
#define _VOLTOS_ZONE_PAIR_H_

#include <nbapi/voltos/zone-pair.h>

struct zone_pair {
    char                            zp_name[ZONE_PAIR_NAME_SIZE];
    __voltos_zone_pair_id_t         zp_id;

    void                            *zp_user_ctx;
};

void zone_pair_init(void);

#endif /* _VOLTOS_ZONE_PAIR_H_ */
