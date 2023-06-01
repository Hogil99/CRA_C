#include "pch.h"
#include "../Calculator/Cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(SumTest, TestName) {
	EXPECT_EQ(Cal().getSum(1, 5), 6);
}

TEST(SumSumTest, TestName) {
	EXPECT_EQ(Cal().getSumSum(1, 5, 10), 16);
}