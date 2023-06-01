#include "pch.h"
#include "../Calculator/Cal.cpp"

TEST(Cal, getGop) {
	EXPECT_EQ(30, Cal().getGop(1, 30));
	EXPECT_EQ(0, Cal().getGop(0, 30));
	EXPECT_EQ(-30, Cal().getGop(-1, 30));
}

TEST(CalTest, MinusTest) {
	Cal cal;
	EXPECT_TRUE(10, cal.getMinus(20, 10));
}