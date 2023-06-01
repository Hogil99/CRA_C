#include "pch.h"
#include "../Calculator/Cal.cpp"

TEST(CalTest, ZegopTest) 
{
    Cal cal;
    EXPECT_EQ(100, cal.getZegop(10));
}