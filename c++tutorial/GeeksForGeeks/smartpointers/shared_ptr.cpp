// you are using shared_ptr then more than one pointer can point to 
// this one object at a time and it’ll maintain a Reference Counter 
// using use_count() method.
#include <iostream> 
using namespace std; 
#include <memory> 
class Rectangle { 
	int length,breadth; 
	public:
        // default constrcutior
        Rectangle(){};
        Rectangle(int l, int b):length(l),breadth(b){};//param. constructor.
        inline int area(){return length*breadth;};
}; 

int main() 
{ 

	shared_ptr<Rectangle> P1(new Rectangle(10, 5)); 
	// This'll print 50 
	cout << P1->area() << endl; 

	shared_ptr<Rectangle> P2; 
	P2 = P1; 

	// This'll print 50 
	cout << P2->area() << endl; 

	// This'll now not give an error, 
	cout << P1->area() << endl; 

	// This'll also print 50 now 
	// This'll print 2 as Reference Counter is 2 
	cout << P1.use_count() << endl; 
	return 0; 
} 

