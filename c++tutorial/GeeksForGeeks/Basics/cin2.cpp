// Input Format:
// First line of input conatins number of testcases T. 
// For each testcase, there will be one line of input 
// ontaining a and b separated by a space.

// Input:
// 1
// 5.43 2.653

#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b;
        cin >>a;
        cin >>b;
        cout << a << b;
    }
    return 0;
}