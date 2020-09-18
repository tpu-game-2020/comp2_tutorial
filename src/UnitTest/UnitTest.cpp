#include "pch.h"
#include "CppUnitTest.h"
#include "../include/library.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(ÉeÉXÉgä÷êîÇªÇÃÇP)
		{
			Assert::AreEqual("Hello world!", HelloWorld());
		}
	};
}
