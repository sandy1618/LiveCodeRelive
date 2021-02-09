// Array Initialization.
#include <iostream>
int main(){
    int array1[5] = {2, 5, 4, 8, 6};
    int array2[5] = {2, 5, 4}; // Rest initialized to zero.
    // int array8[5] = (1,2,3);//initialize with {} for aggregate initialize
    // int array3 {2, 5, 4, 8, 6};// Not OK, define as arr: Error need []
    int array3[] {2, 5, 4, 8, 6};
    int array7[7] {1,2,3}; // This is also OK.
    

    std::cout << array2[4]; // 0
    return 0;
}