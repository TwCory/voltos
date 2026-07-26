#ifndef _VOLTOS_BOOTVAR_H
#define _VOLTOS_BOOTVAR_H

struct bootvar_ctx {
	unsigned int 	start_marker;
	void 		*context;
	unsigned int 	end_marker;
};

#endif /* _VOLTOS_BOOTVAR_H */
