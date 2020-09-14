#include <iostream>
#include <array>

void Array(){
    std::array<int,5> arr{ 1,2,3,4,5 }; // can be initialized via initializer list : uniform initialzation.
    //array provides random access to its elements. so, subscripts operater arr[] can be used.
    for(int i = 0; i < arr.size() ; i++){
        arr[i] = i;
    }
    //Using iterators of the arrays 
    auto it = arr.begin(); // then use the
    
    while( it != arr.end() ){
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    //using range based for loops
    for(auto x : arr){
        std::cout << x << " "; 
    }
}
int main()
{
    Array();
    return 0;
}

// 0 1 2 3 4 
// 0 1 2 3 4