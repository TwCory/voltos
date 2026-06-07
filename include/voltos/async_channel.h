#ifndef VOLTOS_ASYNC_CHANNEL_H
#define VOLTOS_ASYNC_CHANNEL_H

#include <voltos/dma-engine.h>
#include <voltos/interrupt.h>
#include <voltos/spinlock.h>

struct async_channel {
	struct dma_channel *channel;
};

#endif /* VOLTOS_ASYNC_CHANNEL_H */
