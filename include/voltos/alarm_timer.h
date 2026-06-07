#ifndef VOLTOS_ALARM_TIMER_H
#define VOLTOS_ALARM_TIMER_H

#define ALARM_TIMER_STATE_INACTIVE		0x00
#define ALARM_TIMER_STATE_ENQUEUED		0x01

struct alarm {
	int 					state;
	void 					*data;
};

#endif /* VOLTOS_ALARM_TIMER_H */
