#include <bits/stdc++.h>
void countOddEven(int arr[], int sizeof_array){ // using array is just like using pointer.no need for int* arr[] == int **
    int evenCount{0},oddCount{0};
    for(int i=0; i<sizeof_array ; i++){        
        if(arr[i]%2 == 0) evenCount++;
        else oddCount++ ;        
    }
    std::cout << oddCount << " " << evenCount << std::endl;
}

int main(){
    int testcase, sizeof_array ;
    // int arr[N];

    std::cin >> testcase;
    while(testcase--){
        std::cin >> sizeof_array;
        int arr[sizeof_array];

        for (int i = 0; i < sizeof_array ; i++){
            std::cin >> arr[i];
        }

        countOddEven(arr, sizeof_array);
    }

}