// copy semantics: shallow copy, deep copy 
// Move semantics just shift the pointer of original to null, and points new one to original.
// So any change/destrution of original name is only on null. 
// Must faster the deep copy : involves allocation of memory & then copying
// Useful when expression yields temperory which needs to be copied elsewhere-> use move
// How to detect the if expression yields temperory or not? 
// make a move constructor: r-value copy constructor
// #include "Integer.h"

#include <iostream>
class Integer{
        int *m_pInt;
    public:
        Integer();
        Integer(int value);
        // const keyword to aboud modification of original object
        Integer(const Integer &obj);// if we pass object by value, again copy will be created, so shallow copy again, so pass by reference, 

        // Implementing move constructor, r-value reference 
        Integer(Integer &&obj);


        int GetValue() const;
        void SetValue(int value);
        // User defined destructor for releasing the resources allocated by constructor
        ~Integer(); 
};

//Integer.cpp
Integer::Integer(){
    std::cout << "Integer()" << std::endl;
    m_pInt = new int(0);
}

Integer::Integer(int value){
    std::cout << "Integer(int) " << std::endl;
    m_pInt = new int(value);
}

//Deep copy definition using copy constructor
// Copy semantics :: requires allocation of resources 
Integer::Integer(const Integer &obj){
    std::cout << "Integer (const Integer &) " << std::endl;
    m_pInt = new int(*obj.m_pInt); // copying the value of the pointer
}

//Move Semantics::Move constuctor 
Integer::Integer(Integer &&obj){
    std::cout << "Integer(Integer &&obj) " << std::endl;
    m_pInt = obj.m_pInt; // shallow copy obj.m_pInt to m_pInt
    obj.m_pInt = nullptr; // assigning obj.m_pInt to null
}

int Integer::GetValue() const{
    return *m_pInt;
}

void Integer::SetValue(int value){
    *m_pInt = value;
}

Integer::~Integer(){ // Destructor
    std::cout << "~Integer()" << std::endl;

    delete m_pInt;
}


Integer Add(const Integer &a, const Integer &b){
    Integer temp; //default constructor call for integer temp
    temp.SetValue(a.GetValue() + b.GetValue());
    return temp; //return, so a copy constutor call also needed
}

int main() {
    Integer a(1),b(3);
    a.SetValue(Add(a,b).GetValue()); // Add returns a temperory integer object


    return 0;
}