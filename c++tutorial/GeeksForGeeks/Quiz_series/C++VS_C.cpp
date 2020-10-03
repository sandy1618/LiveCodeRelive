#include <bits/stdc++.h>






int main(){

    const int a; // what Happens? 
    // error: c++ asks for intialize a which is const int. 
    // In C: OK

    int *p = malloc(10);
    // error; malloc returs void* , p is int*
    // In C : OK 
    

    return 0;
}