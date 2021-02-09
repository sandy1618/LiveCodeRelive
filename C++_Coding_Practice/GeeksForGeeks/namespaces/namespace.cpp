#include <iostream>
using namespace std;

namespace first
{
    int val = 500;
}

//global variable
int val = 100;

int main()
{
    //local variable
    int val = 200;

    cout << first::val << '\n';
    const int x = 12 ; // const is for declaring read only
    // x = 20;
    cout << x << '\n';
    
    return 0;
}

