#include <iostream>

#include <gtest/gtest.h>
#include "c1.h"
using namespace std;


TEST(set1, works) {
	c1 Test_class;

	Test_class.adder(17);

	EXPECT_EQ(Test_class.get(), 17);

}

TEST(set1, fails) {
	c1 Test_class;

	Test_class.adder(27);

	EXPECT_EQ(Test_class.get(), 27);

}

int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc , argv);
	cout << RUN_ALL_TESTS();

	system("PAUSE");

	return 0;
}