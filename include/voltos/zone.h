#ifndef _VOLTOS_ZONE_H_
#define _VOLTOS_ZONE_H_

#include <nbapi/voltos/zone.h>

struct zone_security {
    char                    zone_name[ZONE_NAME_SIZE];
    __voltos_zone_id_t      zone_id;

    void                    *zone_user_ctx;
};

#endif /* _VOLTOS_ZONE_H_ */