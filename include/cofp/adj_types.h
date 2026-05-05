#ifndef _COFP_ADJ_TYPES_H_
#define _COFP_ADJ_TYPES_H_

enum {
    COFP_ADJ_TYPE_T_UNSPEC      = 0,
    COFP_ADJ_TYPE_T_CACHE       = 1,
    COFP_ADJ_TYPE_T_DISCARD     = 2,
    COFP_ADJ_TYPE_T_DROP        = 3,
    COFP_ADJ_TYPE_T_GLEAN       = 4,
    COFP_ADJ_TYPE_T_NULL        = 5,
    COFP_ADJ_TYPE_T_PUNT        = 6,
    COFP_ADJ_TYPE_T_RECEIVE     = 7,
    __COFP_ADJ_TYPE_T_MAX__
};

struct cofp_adj_entry {
    int adj_type;
};

#endif /* _COFP_ADJ_TYPES_H_ */