#include <iostream>

// int Max(int x, int y) {
    
//     std::cout << "Inside Int type function"<<std::endl;
//     return x > y ? x : y ;
// }

// float Max(float x, float y){
    
//     std::cout << "Inside float type function"<<std::endl;
//     return x > y ? x : y ;
// }

// Primary Template 
template <typename T>
T Max(T x , T y){
    std::cout << "Inside template function : "<< typeid(T).name() << std::endl;
    return x > y ? x:y ;
}

// Explicit Instantiation
template char Max(char x, char y ); 

int main() {

    auto num = Max(2.2f,5.8f);
    std::cout << num << std::endl;
    auto num2 = Max(38,12);
    std::cout << num2 << std::endl; 
    // Template argument type mismatch . Two ways to solve this. 
    // way 1 : type casting . 
    Max(static_cast<float>(3),5.3f);
    // way 2 :  specify the type before to skip compiler deduction process.
    Max<double>(3,6.2);
    
    return 0;
}

// Inside template function : float
// 5.8
// Inside template function : integer
// 38
// Inside template function : float
// Inside template function : double

// Templates happen during the compile time. The fucntion is initiated when it is called and the 
// compiler induces the type by inspecting the input argument type and then assiging to fucntion.
// The input argument type should be of the same type else an error . 
// For example Max(36,5.6f); will call error becaous of type mismatch between integer and float. 
// compiler does not allow type conversion here. 

// // Convert the following functions into templates
// int Add(int x,int y) ; //Return the sum of two elements
// int ArraySum(int *pArr, int arrSize); //Returns the sum of array elements
// int Max(int *pArr, int arrSize) ; //Return the largest element in the array
// std::pair<int,int> MinMax(int *pArr, int arrSize) ; //Return the smallest and largest element in a pair

// template <typename T>

// T Add ( T x , T y);
// T ArraySum(T *pArr, T arrSize);
// T Max(T *pArr, T arrSize);
