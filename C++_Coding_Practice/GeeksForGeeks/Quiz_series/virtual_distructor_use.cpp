#include<iostream> 
using namespace std; 
class Base { 
public: 
	Base()	 
	{ cout<<"Constructing Base \n"; } 
	~Base() 
	{ cout<<"Destructing Base \n"; }	 
}; 
class Derived: public Base { 
public: 
	Derived()	 
	{ cout<<"Constructing Derived \n"; } 
	~Derived() 
	{ cout<<"Destructing Derived \n"; } 
}; 

int main(void) 
{ 
	Derived *d = new Derived(); 
	Base *b = d; 
	delete b; 
	return 0; 
} 
// If there is no virtual distructor in base class,
// then derived class  will not be called for delete 
// because of only deleting b and compiler only calling 
// the destructor of the base class.