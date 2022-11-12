#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab9.2.2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest922
{
	TEST_CLASS(UnitTest922)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
