#include<iostream> 
using namespace std; 

class base { 
int arr[10];	 
}; 

// class b1:  public base { }; 
// class b2:  public base { }; // Without virtual : output 80

class b1: virtual public base { }; 
class b2: virtual public base { };  // With virtual : output 56, saves spaces.

class derived: public b1, public b2 {}; 

int main(void) 
{ 
cout<<sizeof(derived); 
// getchar(); 
return 0; 
} 

// ince b1 and b2 both inherit from class base, 
// two copies of class base are there in class derived. 
// his kind of inheritance without virtual causes wastage of space and ambiguities. 
// virtual base classes are used to save space and avoid ambiguities in such cases. 
// For example, following program prints 48. 8 extra bytes are for
//  bookkeeping information stored by the compiler 