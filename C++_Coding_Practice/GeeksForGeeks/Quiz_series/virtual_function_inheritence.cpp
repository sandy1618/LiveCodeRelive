#include<iostream> 
#include<stdio.h> 

using namespace std; 

class Base 
{ 
public: 
Base() 
{ 
	fun(); //note: fun() is virtual 
} 
virtual void fun() 
{ 
	cout<<"\nBase Function"; 
} 
}; 

class Derived: public Base 
{ 
public: 
Derived(){} 
 virtual void fun() 
{ 
	cout<<"\nDerived Function"; 
} 
}; 

int main() 
{ 
// Base* pBase = new Derived();// base function
// Derived* pBase = new Derived(); // Also base function !! 
// Base* pBase = new Base() ; // Base fucntion 
// Derived* pBase = new Base() ; // error, as only base can be used.
delete pBase; 
return 0; 
} 
