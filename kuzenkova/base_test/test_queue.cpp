#include "queue.h"

#include <gtest.h>

TEST(TQueue, can_create_queue_with_positive_length)
{
	ASSERT_NO_THROW(TQueue<int> st(5));
}

