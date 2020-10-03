#include <iostream>
using namespace std;
class {
	public:
			void printfun(){std::cout << "class without name";}
}a;
int main()
{	a.printfun();
	return 0;    	     
}

// A class without a name will not have a destructor.
//  The object is made so constructor is required but the destructor is no

