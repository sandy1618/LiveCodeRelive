#include <iostream> 
using namespace std; 
/*
 For initialization of member objects which do not have default constructor:
In the following example, an object “a” of class “A” is data member of class “B”,
and “A” doesn’t have default constructor. Initializer List must be used to initialize “a”.

## Inheritance : "Is-a" relationship
Very Important: 

In C++ there are 3 member functions that are not inherited: 
CONSTRUCTORS 
DESTRUCTORS 
ASSIGNMENT OPERATORS. 

So you need to invoke them in every child class 
by using member initializer list.

BUT IN C++ 11 , you can inherit the base class
with the using keyword, you can inherit the base class constructor. 

Eg: 
class Account{
    std::string& m_name;
    float m_balance;
    public:
    Account(const std::string& name, float balance);
};
// Using initializer list to initialze member viariables. 

Account::Account(const std::string& name, float balance): m_name(name),m_balance(balance){
    // method here eg.
    m_accountno = ++Accgenerator; 
}

class Checking:public Account{
    // method 2 : ""using keyword to inherite constructor from the base . 
    public:
        using Account::Account; //inherits from base. equivalent to method 1 
        
        // method 1 : initializer list 
        Checking(const std::string& name, float balance): Account(name,balance){ }

};
*/


class A { 
	int i; 
public: 
	A(int ); // Parametrized constructor in A. We dont have any default constructor in A.
}; 

A::A(int arg) { //Definition of this parametrized constructor.
	i = arg; 
	cout << "A's Constructor called: Value of i: " << i << endl; 
} 

// Class B contains object of A 
class B { 
	A a; 
public: 
	B(int ); 
}; 

B::B(int x):a(x) { //Initializer list must be used to invoke the parametrized 
// constructor in A
	cout << "B's Constructor called"; 
} 

int main() { 
	B obj(10); 
	return 0; 
} 
/* OUTPUT: 
	A's Constructor called: Value of i: 10 
	B's Constructor called 
*/
