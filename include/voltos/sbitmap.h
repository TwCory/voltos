#ifndef _VOLTOS_SBITMAP_H_
#define _VOLTOS_SBITMAP_H_

struct sbitmap_word {
	unsigned long word;
};

struct sbitmap {
	unsigned int depth;
	unsigned int shift;
};

#endif /* _VOLTOS_SBITMAP_H_ */
