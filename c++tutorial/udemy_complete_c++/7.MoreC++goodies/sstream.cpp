//cout only works with console, to give output like on a screen etc then we need sstream 
// with the use of sstream, we can create formatted strings and use them wherever we want. 

#include <iostream>
// sstream header has 3 classes s
// std::stringstream ss;
// std::istringstream is;
// std::ostringstream os;

#include <sstream>
// #include <stream>

int main(){
    int a{2}, b{3};
    int sum = a + b;
    std :: cout << "Sum of " << a << "&" << b << "is : " << sum << std::endl;

    // std::string str_output = "Sum of " + a + "&" + b + "is : " + sum;
    // This is not possible because you are adding int with string.
    //Now we use sstream for better including these concatincation

    std::stringstream ss;
    ss << "Sum of " << a << "&" << b << "is : " << sum;
    // std::cout << ss << std::endl; //this code will not work because 'ss' is object which 
    // ss manages a string buffer , we can access the string buffer by follwoing code
    std::string s = ss.str(); // this will give access to string of ss buffer.
    std::cout << s << std::endl;

    // Usage2 : If I have a string of Intergers and I want to extract the integer numbers 
    /**
     * @todo later to be done. not now. 
     */

    return 0;
}


// Sum of 2&3is : 5
// Sum of 2&3is : 5