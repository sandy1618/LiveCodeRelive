#include "Integer.h"
#include <iostream>
class Integer{
        int *m_pInt;
    public:
        Integer();
        Integer(int value);
        // const keyword to aboud modification of original object
        Integer(const Integer &obj);// if we pass object by value, again copy will be created, so shallow copy again, so pass by reference, 
        int GetValue() const;
        void SetValue(int value);
        // User defined destructor for releasing the resources allocated by constructor
        ~Integer(); 
};

//Integer.cpp
Integer::Integer(){
    m_pInt = new int(0);
}

Integer::Integer(int value){
    m_pInt = new int(value);
}

//Deep copy definition using copy constructor
Integer::Integer(const Integer &obj){
    m_pInt = new int(*obj.m_pInt); // copying the value of the pointer
}

int Integer::GetValue() const{
    return *m_pInt;
}

void Integer::SetValue(int value){
    *m_pInt = value;
}

Integer::~Integer(){
    delete m_pInt;
}




// If I want to create a copy of the object state, I can do in multiple ways.
// passing object by value creates a copy of object state
void Print(Integer i){

}
// Returning object by value creates a copy of object state
Integer Add(int x, int y){
    return Integer(x + y);
}



int main() {
    
    // Directly creating a copy object ( thats where copy contructor is used)
    // Usually there is a shallow copy, ie. it copies all pointer address rather then values.
    // To avoid the problem of shallow copy, we us copy constructor

    int *p1 = new int(5); // memory allocation at pointer p1
    // example of shallow copy
    int *p2 = p1; // just copying the address

    //Deep copy
    int *p3 = new int(*p1) ;// allocating the value of allocated pointer p1 to p3 
    

    Integer i(5);
    Integer i_copy(i);
    std::cout << i.GetValue() << std::endl;
    return 0;
}