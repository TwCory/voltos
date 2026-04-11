#ifndef _VOLTOS_EVENT_H_
#define _VOLTOS_EVENT_H_

typedef enum {
	EVENT_TYPE_T_UNKNOWN        = 0,
	EVENT_TYPE_T_READ           = 1,
	EVENT_TYPE_T_WRITE          = 2,
	EVENT_TYPE_T_TIMER          = 3,
	EVENT_TYPE_T_EVENT          = 4,
	EVENT_TYPE_T_READY          = 5,
	EVENT_TYPE_T_EXECUTE        = 6,
	EVENT_TYPE_T_UNUSED         = 7,
	__EVENT_TYPE_T_MAX__
} event_type_t;

struct event {

};

#endif /* _VOLTOS_EVENT_H_ */