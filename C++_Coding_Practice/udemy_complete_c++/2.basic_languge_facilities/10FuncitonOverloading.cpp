//Multiple implementations of the same behavior , then the idea is to create same funciton for simplicity
//Fucntion overloading helps achieve this . 
//constant qulaifier also participates in funciton overloading

#include <iostream>

int Add(int a, int b){
    return a + b;
}
//funciton overloading implementation here .
double Add(double a , double b){
    return a + b;
    }

//funciton accepts a pointer
void Print(int *x){
    std::cout << *x <<"\t=>funciton accepts a pointer" << std::endl; 
}

//function accepts a  pointer to const int. Note: C++ does not care about spaces. 
void Print(const int *  x){
    std::cout << *x <<"\t=>function accepts a constant pointer"<< std::endl;
}

int main(){
    using namespace std;
    //function overloading
    int result = Add(3,5);
    cout << result << "\t=> Using int Add" << endl;
    cout << Add(3.1,6.2) << "\t=> Using double Add" << endl;
    
    //const qualifier also participates in funciton overlading
    int x = 10;
    Print(&x);
    const int y = 20;
    Print(&y);

}

// 8 => Using int Add
// 9.3=> Using double Add
// 10=>funciton accepts a pointer
// 20=>function accepts a constant pointer