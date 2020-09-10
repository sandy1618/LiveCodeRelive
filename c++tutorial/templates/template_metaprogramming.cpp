#include <iostream> 
using namespace std; 
// recursive implemenation 
template<int n>
struct funStruct{
    enum {
        val = 2*funStruct<n-1> :: val
    };
};

//base condition for recursion
template<> 
struct funStruct<0>
{
    enum{
        val = 1
    };
};



int main() 
{ 
	cout << funStruct<8>::val << endl; 
	return 0; 
} 
