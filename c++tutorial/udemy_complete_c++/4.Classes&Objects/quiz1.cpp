// The following code has an error in the Print function. 
//Resolve by choosing the correct answer. Assume all the necessary headers are included.

#include <iostream>

class Number{
    int m_Num{} ;
public:
    Number(int num){
        m_Num = num ;
    }
     int GetNumber() {
        return m_Num ;
    }
    // //Constructors and other members
    // // soluiton 
    //    int GetNumber() const {
    //     return m_Num ;
    // }
} ;
 
void Print(const Number & num){
    std::cout << num.GetNumber() ;
}
 
int main(){
    Number n{5} ;
    Print(n) ;
    //Other code
    return 0 ;
}


/*
Question 2 ;
When should the class author provide an implementation for the copy constructor?

Ans: When class has pointer as member variable
Without user-defined copy constructor, the compiler generated copy constructor will perform a shallow copy that will lead to undefined results.
*/

