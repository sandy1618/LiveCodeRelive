// A C++ code to demonstrate that we can define 
// methods outside namespace. 
#include <iostream> 
using namespace std; 

namespace ns
{ 
    int x;
} 
namespace ns
{
    int x;    
}

// Driver code 
int main()
{ 
    ns::x = 10;
    return 0; 
} 

// Error: Compilation
// redefinition of ‘int ns::x’