#ifndef _VOLTOS_PFR_MAP_H_
#define _VOLTOS_PFR_MAP_H_

#include <nbapi/voltos/pfr-map.h>

struct pfr_map {
    char                        pm_name[PFR_MAP_NAME_SIZE];
    __voltos_pfr_map_id_t       pm_index;
};

#endif /* _VOLTOS_PFR_MAP_H_ */