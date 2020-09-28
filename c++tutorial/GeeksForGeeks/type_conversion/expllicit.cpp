#include <iostream> 

using namespace std; 

class Complex 
{ 
private: 
	float real; 
	float imag; 

public: 
	// Default constructor 
	explicit Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {} 

	// A method to compare two Complex numbers 
	bool operator== (Complex rhs) { 
	return (real == rhs.real && imag == rhs.imag)? true : false; 
	} 
}; 

int main() 
{ 
	// a Complex object 
	Complex com1(3.0, 0.0); 

	// if (com1 == 3.0) // com1 is a complex object and 3.0 is float. so ERROR
	if (com1 == (Complex)3.0) // Solution: Explicit typecasting..
    cout << "Same"; 
	else
	cout << "Not Same"; 
	return 0; 
} 
