#include "pch.h"
#include "CppUnitTest.h"
#include "../../Fibonacci-Heap/Fibonacciheap.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
            {
                    public:

                    TEST_METHOD(First_test)
                    {
                        FibonacciHeap heap1;
                        heap1.insert(1);
                        heap1.insert(3);
                        heap1.insert(5);
                        Assert::IsTrue(heap1.removeMinimum() == "1");
                        FibonacciHeap heap2;
                        heap2.insert(2);
                        heap2.insert(4);
                        heap2.insert(6);
                        FibonacciHeap heap3(heap1,heap2);
                        heap3.decreaseKey(heap3.find(5), 1);
                        Assert::IsTrue(heap3.removeMinimum() == "1");
                        Assert::IsTrue(heap3.removeMinimum() == "2");
                        Assert::IsTrue(heap1.removeMinimum() == "3");
                        Assert::IsTrue(heap1.removeMinimum() == "5");
                        Assert::IsTrue(heap1.removeMinimum() == "*");
                    }
                    TEST_METHOD(Second_test)
                    {
                        FibonacciHeap heap1;
                        heap1.insert(1);
                        heap1.insert(2);
                        heap1.insert(3);
                        heap1.insert(1);
                        heap1.insert(4);
                        heap1.insert(5);
                        heap1.insert(6);
                        heap1.insert(7);
                        heap1.insert(18);
                        heap1.insert(8);
                        heap1.insert(9);
                        heap1.insert(10);
                        Assert::IsTrue(heap1.removeMinimum()=="1");
                        FibonacciHeap heap2;
                        heap2.insert(1);
                        heap2.insert(2);
                        heap2.insert(5);
                        Assert::IsTrue(heap2.removeMinimum() == "1");
                        FibonacciHeap heap3(heap1, heap2);
                        Assert::IsTrue(heap1.removeMinimum() == "1");
                        Assert::IsTrue(heap1.removeMinimum() == "2");
                        Assert::IsTrue(heap2.removeMinimum() == "2");
                        Assert::IsTrue(heap3.removeMinimum() == "1");
                    }
            };
}