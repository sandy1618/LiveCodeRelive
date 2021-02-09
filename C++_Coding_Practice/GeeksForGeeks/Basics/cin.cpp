#include <iostream>
#include <string>
int main(){
    std::string x {};
    // // cin by default does not take in space
    // std::cin >> x ; // I/p:Hello World
    // std::cout << "Just using cin"  << x << std::endl;

    std::getline(std::cin,x); // space is also read, so we get entire screen.
    
    std::cout << "Just using getline: " << x << std::endl;
    
    return 0;

}

// Hello