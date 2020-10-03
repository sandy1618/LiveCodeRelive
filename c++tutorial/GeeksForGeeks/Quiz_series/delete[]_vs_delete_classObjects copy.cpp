#include <iostream>
using namespace std;
class A{
public:
	A(){
		cout<<"Constructor called\n";
	   }
	~A(){
		cout<<"Destructor called\n";
	    } 
};
int main(int argc, char const *argv[])
{
	A *a = new A[5];
	delete[] a;
	return 0;
}

// In the above program we have first initiated five-pointer variables using new keyword hence 
// fives time constructor will be called after that as we using delete[](used for deleting
// multiple objects) to delete variables hence all the five objects created will be destroyed
// and hence five times destructor will be called.