# UnitTest for Fibonacci-heap
---

## Testing goals and objectives
---
While working on writing a Fibonacci heap with my class, I had a need to test and identify critical errors. That's why I decided to write a Unit Test in C++


## Description of the object under test
---
The Fibonacci heap class is an implementation of the Fibonacci heap concept. For all the information about the methods and structure of the class, you can refer to my repository on GitHub.
• `insert(key)`: inserts a new element with the specified key into the heap.
• `merge(other_heap)`: Merges the heap with this heap. After that, the other pile becomes empty.
• `getMin()`: Returns the smallest key in the heap.
• `extract minimum()`: Returns the smallest key in the header and removes it from the heap.
• `decreaseKey(element, new_key)`: Reduces the key of this element to a new key. The new key must be smaller than the old key.
• `deleteElement(element)`: Removes this element from the heap.
• `isEmpty()`: Returns whether the heap is empty.
• `copy(original_heap)`: Create a copy of another heap with memory allocation and return the root of the heap


## Testing area
---
During the testing process, I resorted to such types of testing as: functional testing, unit testing, performance testing of class methods.

## Acceptance criteria
---
The conditions under which I consider my class to be successfully completed are correct memory relocation, fast execution speed of function methods, correct exception handling.

