#include "pch.h"
#include "../Calculator/Cal.cpp"

TEST(CalTest, MinusTest) {
	Cal cal;
	EXPECT_TRUE(10, cal.getMinus(20, 10));
}