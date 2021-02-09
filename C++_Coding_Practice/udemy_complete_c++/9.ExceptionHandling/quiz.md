Why should destructors not throw exceptions to the calling code?

Ans: When a functions throws an exception, the stack is completely deleted.
so, if there is a local object, then the object is destroyed. 
This is called STACK UNWINDING.
    It does not delete objects/ variables dynamically created on the heap.
So, if a distructor also has an "throw" block for exception error, 
Then the PROGRAM IS TERMMINATED.
