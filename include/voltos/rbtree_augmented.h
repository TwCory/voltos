#ifndef _VOLTOS_RBTREE_AUGMENTED_H_
#define _VOLTOS_RBTREE_AUGMENTED_H_

struct rb_augment_ops {
	
};

enum {
    RB_COLOR_T_RED          = 0,
#define RB_COLOR_RED        RB_COLOR_T_RED
    RB_COLOR_T_BLACK        = 1
#define RB_COLOR_BLACK      RB_COLOR_T_BLACK
};

#endif /* _VOLTOS_RBTREE_AUGMENTED_H_ */