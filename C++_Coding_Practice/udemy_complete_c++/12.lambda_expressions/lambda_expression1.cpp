#include <bits/stdc++.h>
void swap(int& a, int& b){
    int temp = a ;
    a = b;
    b = temp;
}
// Fuctin sort accectps array by reference
template<typename T, int size>
void Sort(T (&arr)[size]){
    for (int i = 0; i < size-1;++i){
        for (int j = 0; j < size - 1; ++j){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

int main () 
{
    int arr[]{ 0,1,4,3,2,5 };
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    Sort(arr);
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;


    return 0;
}