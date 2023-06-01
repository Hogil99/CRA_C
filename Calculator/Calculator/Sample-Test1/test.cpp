#include "pch.h"
#include "../Calculator/Cal.cpp"

TEST(TestCaseName, TestName) {

}

TEST(TestCaseName, TestDivide) {
	Cal cal;
	EXPECT_EQ(100, cal.getDivide(1000, 10));
}

TEST(TestCaseName, TestDivideByZero) {
	Cal cal;
	EXPECT_EQ(0, cal.getDivide(1000, 0));
}