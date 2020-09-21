// This contains most common c++ features 
#include <bits/stdc++.h> // common header file used for competitive programming
using namespace std;
int main(){
    int a = 5;
    
    std::cout << "size of float:" << sizeof(float) << std::endl;
    std::cout << "size of double:" << sizeof(double) << std::endl;
    std::cout << "size of float:" << sizeof(unsigned int)<< std::endl;

    double x = -1.41;
    std::cout << floor(x) << std::endl; // floor
    std::cout << ceil(x) << std::endl; // ceil
    std::cout << trunc(x) << std::endl;// Trunc rounds removes digits after decimal point.
    std::cout << round(x) << std::endl;//round to closet integer.
    

   
    return 0;
}