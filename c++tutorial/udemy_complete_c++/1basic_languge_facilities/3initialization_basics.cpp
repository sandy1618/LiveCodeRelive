// unifor initializations is useful because: 
//It automatically initializes the variable to 0 (or pointers to nullptr), thereby preventing runtime bugs
#include <string>
#include <iostream>

int main(){
    //before c++ 11
    int a1 ; //Uninitialised 
    int a2 = 0 ; // Copy initialization , when using = operator
    int a3(5) ; // Direct initializtion, when using ()
    std::string s1;
    std::string s2("C++"); // Direct initialization

    char d1[8] ; // Uninitialized
    char d2[8] = {'\0'} ; // using null, aggregate initialization
    char d3[8] = {'a','b','c','c'}; //aggregate initialization
    char d4[8] = {'abcd'} ;
    
    // Uniform initialization after c++ 11
    int b1{} ; //Value initialization, default to 0
    // int b2() ; //Most vexing parse , because direct initialization without a value can be thought of an empty function.
    int b3{5} ; // Direct initialization using {} 

    char e1[8]{};
    char e2[8]{"Hello"};

}

/*
Do value initializtion for user_defined functions
1. Value initialization => T obj{} ;
2. Direct initialization => T obj{v} ;
3. Copy initialization => T obj = v ;


*/