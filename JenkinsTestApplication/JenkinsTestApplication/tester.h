

#include "stdafx.h"  
#include "CppUnitTest.h"  
#include "c1.h"  
	using namespace Microsoft::VisualStudio::CppUnitTestFramework;
	namespace MyTest
	{
		TEST_CLASS(MyTests)
		{
		public:
			TEST_METHOD(TestMethode1) {
				c1 Test;

				Test.adder(17);


				Assert::AreEqual(Test.get(), 17);
			}
		};
	}
