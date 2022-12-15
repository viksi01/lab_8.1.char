#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1.char/lab_8.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[]{ "aabooobcc" };
			int t = Count(str);
			Assert::AreEqual(t, 2);

		}
	};
}
