#ifndef _VOLTOS_BUFFER_HEAD_H_
#define _VOLTOS_BUFFER_HEAD_H_

struct buffer_head {
	unsigned long 	state;

	void 		*context;
	void 		*internal;
};

#endif /* _VOLTOS_BUFFER_HEAD_H_ */
