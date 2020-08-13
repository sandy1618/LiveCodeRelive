#include <iostream>
// default is used to tell the copiler to create a deault type eg. default constructor .
class Integer {
    int m_Value{0} ; // I can initialize in the variable itself, so compiler does not neet default construcor.
                    // BUt to use parameterized constructor, we need default constructor. 
public:
    // // This constructor is default constructor used to initialze tha value. If I comment this, 
    // // the compiler will not create default constructor because i already have parameterized constructor!!
    // Integer(){
    //     m_Value = 0;
    // }
    // Create default constructor
    Integer() = default ; 

    Integer(int value){
        m_Value = value;
    }

    // Integer(const Integer &) = default; // compiler creates default implementation of copy constructor, so this is not needed.

    // If you dont want the compiler to not make default copy constructor / or any other default members like construtors, destructors/ assignments etc
    Integer(const Integer &) = delete;

    // Another use of delete , Here you want the compiler to accept int but it also accetps float as it creates float accepting in backgroud. 
    // Use delete to enforce not to take in float values 
    void SetValue(int value ){
        m_Value = value;
    }
    void SetValue(float) = delete;
};
int main(){
    Integer i1;
    // Integer i2(i1); // gives error because I use delete keyword to stop making the copy construct 
    i1.SetValue(5);
    i1.SetValue(5.2f); // gives error, enforcement of not using float : success.     
    return 0 ;

}