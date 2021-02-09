// Pointer to Array: Array Pointer
// Pointer of Array: Pointer Array

#include <iostream>
using namespace std;


int main(){
    // Array
    int array[3]={3,2,1};
    // Normal pointer
    int *Ptr = NULL;
    Ptr = &array[0]; // type of &array[0] : int *

    // Array pointer : Pointer to array of integers
    int (*arrPtr)[3] = NULL;
    arrPtr = &array; // type of &array : int (*)[]

    // // Dynamic Memory Allocation Normal pointer
    int *Ptr2 = new int[3];
    Ptr2 = &array[0];

    // ArrayPointer
    // int (*arrPtr2)[3] = new int[3];// DOUBT : How to assign?
    // How to assign dynamic memory of array pointers. 


    cout << "Normal Pointer "<<*Ptr << "\t" << *&array[0] << endl;
    cout << "Array Pointer "<<*arrPtr << "\n" ; // Array pointer dereference returns the address.


    //array of pointers pointing to int value. 
    int *ptrArray[3] ;

    for (int i=0;i < 3 ; i++){
        ptrArray[i]= &array[i];
    }
    // printing array of pointers .
    for (int i = 0; i < 3; i++) { 
  
        printf("Value of arr[%d] = %d\n", i, *ptrArray[i]); }

    // Printign Arrya Pointer 
    

    // Passing Array Pointer to functions 

    // Passing PointerArray to functions 

    return 0;
} // printing values using pointer 
    