#include <iostream>
using namespace std;
void func(int x)
{
    cout << x ;
}
int main()
{
    void (*n)(int);
    // valid usage of pointer to function.
    n = &func; 
    (*n)( 2 ); 
    n( 2 );
    return 0;
}
// 22
