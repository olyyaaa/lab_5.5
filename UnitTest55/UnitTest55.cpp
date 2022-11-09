#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.5/lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b = 4;
			int p = 6;
			double expected = 1296;

			double res = calculate(b, p);

			Assert::AreEqual(res, expected);
		}
	};
}
