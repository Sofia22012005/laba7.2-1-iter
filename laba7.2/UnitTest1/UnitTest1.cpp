#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7.2/laba7.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            {
                int count = 0;
                int result, rowNo;
                const int k = 4;
                const int n = 4;
                int a[k][n] = {
                    {1, 5, 6, 10},
                    {4, 12, 18, 9},
                    {3, -2, 7, 0},
                    {-3, 4, 6, 7}
                };
                int* pa[4] = { a[0], a[1], a[2], a[3] };
                MaxMin(a, k, n, 0, max);
                result = count;
                Assert::AreEqual(12, result);
            }
        };
    };
}