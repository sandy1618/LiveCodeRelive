// Tutorial to understand assert
#include <iostream>

#include<assert.h>

int main(){
    // assert(<conditions>)
    // assert is important to check the condition 
    // if satisfied, then program moves else terminates with assertion errro 
    int n;
    std::cin >> n;
    assert(n>0);
    std::cout << "True";

    return 0;
}
// if user input = -1: 
// Assertion `n>0' failed.