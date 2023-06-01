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

TEST(TestCaseName, TestDivide) {
	Cal cal;
	EXPECT_EQ(100, cal.getDivide(1000, 10));
}

TEST(TestCaseName, TestDivideByZero) {
	Cal cal;
	EXPECT_EQ(0, cal.getDivide(1000, 0));
}

TEST(Cal, getGop) {
	EXPECT_EQ(30, Cal().getGop(1, 30));
	EXPECT_EQ(0, Cal().getGop(0, 30));
	EXPECT_EQ(-30, Cal().getGop(-1, 30));

}

TEST(CalTest, MinusTest) {
	Cal cal;
	EXPECT_TRUE(10, cal.getMinus(20, 10));
}