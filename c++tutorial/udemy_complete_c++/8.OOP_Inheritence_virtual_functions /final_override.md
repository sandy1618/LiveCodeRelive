### Why it is advisable to inherit from classes having virtual members.

1. Have overriding capabilities: Overriding is not possible if there is no virtual keyword . ie. the childclass cannot override the functions of the base class. 
2. Prevent Memory leaks: if a child class construcotr is invoked through passing a base calss pointer, then when there is a delete in the base class memory 
allocation, then only the base class destructor is deleted. and not child class . so this will lead to memory leaks.
making a virtual destructor will invoke the destrucotr of the child class as well.


"final" keyword : 
    If you create a class not meant to be inherited, use final keyword.