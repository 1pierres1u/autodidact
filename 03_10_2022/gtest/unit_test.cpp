#include <gtest/gtest.h>

int copy(int c){
	return c;
}
int int_test=10;

TEST(COMPARISON, equality){
	EXPECT_EQ(int_test,copy(int_test));
}
