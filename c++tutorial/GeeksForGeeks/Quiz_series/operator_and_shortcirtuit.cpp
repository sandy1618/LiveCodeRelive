#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    cout << "ANDing integer 'a' with 'true' :" << a && true;
    return 0;
}
// ANDing integer 'a' with 'true' :8
// Explanation: The && operator in C++ uses short-circuit evaluation 
// so that if bool1 evaluates to false it doesn’t bother evaluating bool2. 
// So as here bool1 is 8 which is true as it is non-zero so C++ does not 
// cares about the expression further and prints the answer of 
// expression which is 8. If you write true && 8 then the output will be 1
//  because true is true and its integer equivalent is 1 so 1 will be printed.
