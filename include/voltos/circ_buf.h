#ifndef VOLTOS_CIRC_BUF_H
#define VOLTOS_CIRC_BUF_H

struct circ_buf {
	char 		*buffer;
	int 		head;
	int 		tail;
};

#endif /* VOLTOS_CIRC_BUF_H */
