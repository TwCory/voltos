#ifndef _COFP_ADJ_TYPES_H_
#define _COFP_ADJ_TYPES_H_

typedef enum {
    	COFP_ADJ_TYPE_T_UNSPEC		= 0,
    	COFP_ADJ_TYPE_T_CACHE		= 1,
    	COFP_ADJ_TYPE_T_RECEIVE		= 2,
    	COFP_ADJ_TYPE_T_NULL		= 3,
    	COFP_ADJ_TYPE_T_PUNT		= 4,
    	COFP_ADJ_TYPE_T_GLEAN		= 5,
    	COFP_ADJ_TYPE_T_DISCARD		= 6,
    	COFP_ADJ_TYPE_T_DROP		= 7,
    	__COFP_ADJ_TYPE_T_MAX__
} adj_type_t;

#endif /* _COFP_ADJ_TYPES_H_ */
