#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project5.1(E)\Project5.1(E)\Complex.cpp"
#include "D:\Study\ООП\Project5.1(E)\Project5.1(E)\Complex.h"
#include "D:\Study\ООП\Project5.1(E)\Project5.1(E)\Object.cpp"
#include "D:\Study\ООП\Project5.1(E)\Project5.1(E)\Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Complex b(2, 2);
			Complex c(2, 2);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
