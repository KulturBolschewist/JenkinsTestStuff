#include <iostream>

//#include "tester.h"

#include <gtest\gtest.h>

#include "c1.h"

using namespace std;


TEST(t1, demo) {
	c1 Test;
	Test.adder(17);
	EXPECT_EQ(17, Test.get());
}

TEST(t1, fail) {
	c1 Test;
	Test.adder(27);
	EXPECT_EQ(17, Test.get());
}

int main(int argc, char* argv[]) {

	testing::InitGoogleTest(& argc, argv);
	cout << RUN_ALL_TESTS();
	system("PAUSE");

	return 0;
}