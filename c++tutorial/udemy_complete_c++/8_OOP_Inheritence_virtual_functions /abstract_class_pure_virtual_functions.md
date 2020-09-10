### What is a pure virtual function ? 
A pure virtual functoin is marked with pure specifier ie "=0" in the end . 
eg; 
virtual void print(float x) = 0;
//This is a pure virtual fucntion.

A pure virtual funciton cannot be invoked. if inovoked, only used by derived classes.

MUST be overriden by the derived classes. If not overridden, then the derived class also become an 
abstract class which again cannot be instantiaated. 
### Abstract class 
Abstract class has atleast one pure virtual function . 
Abstract Class cannot be instanciated ? 
    - meaning? 


Through pure virtual functiosn, the abstract classs establishes a contract with the client. 
the contract guarentees that the implementation of the behavior is provided by the child claasses . 


