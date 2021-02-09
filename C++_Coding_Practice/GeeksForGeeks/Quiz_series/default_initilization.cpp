#include<iostream>
using namespace std;
int x[100];
int main()
{
    cout << x[99] << endl;
}

// 0
//In C++ all the uninitialized variables are set to 0 
//therefore the value of all elements of the array is set to 0.