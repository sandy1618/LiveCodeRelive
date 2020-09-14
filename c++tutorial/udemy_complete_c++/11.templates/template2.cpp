#include <iostream>

using namespace std;

template<typename T1>
T1 print(T1 x){
    cout << x << endl ; 
}

template<typename T2>
T2 Min(T2 x , T2 y ){

    std::cout << "Inside template function : "<< typeid(T2).name() << std::endl;
    return x < y ? x:y ;

}


int main(){

    auto min_num = Min(3.1,4.5);
    auto min2 = Min(2,3);
    return 0;
    
}