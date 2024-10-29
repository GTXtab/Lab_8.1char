#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1char/Lab_8.1char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testStr[] = "Hello World ,0-";
			Assert::AreEqual(Count(testStr), 1);
		}
	};
}
