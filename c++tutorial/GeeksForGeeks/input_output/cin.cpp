#include <iostream>
#include <bits/stdc++.h>
std::vector<int> vect;
void printVect();
void using_cin_eof(){
    // The first line itself will be a vector of unknown size.
    // containing elements separated by spaces. 
    // cin should be able to detect end of line, and input
    // okay, here, cin.eof(), detects end of stream i.e ctrl + D.
    int x;
    while(std::cin >> x){
        if(std::cin.eof()) break;
        
        vect.push_back(x);
    }
    printVect();
}
void using_cin_get(){
    // input: 1 2 3 4 \n, my program should extract the first numbers 
    // into lets say vector, and then when see \n , stop 
    // **THIS FAILS** FOR SIMPLE ENTER. 
    int x;
    while(std::cin >> x){         
        vect.push_back(x);
        if(std::cin.get()=='\n') break;
    }
    printVect();
}

void identify_new_line(){
    // input: 1 2 3 4 \n, my program should extract the first numbers 
    // into lets say vector, and then when see \n , stop 

}
void printVect(){
    std::cout << "Printing stored vector : ";
    for(auto elem:vect) std::cout << elem << " ";
    std::cout << "\nSize of  stored vector : ";
    std::cout << vect.size();
     
}
int main(){
    
    // using_cin_eof();
    using_cin_get();
    // identify_new_line();

    
    return 0;
} 

// Testing the value from an input operation
// Using cin in a while loop is a very common style of programming.
// Produces a value. The input operation with cin not only reads values into variables,
//  but it also produces a value. That's because >> is an operator that produces a value. 
// This value can be tested in loops and ifs.
// true. The value of cin >> x is true if a value was read into x.
// false. The value of cin >> x is false if it was unable to read. 
// There are several possible causes for a reading failure.
// EOF. When there is no more data, the EOF (End-Of-File) condition occurs. 
// Every stream of input has an end so this is a normal event. 
// It happens when reading a disk file and the end is reached. 
// It's also possible to signal an EOF from the console by entering a special key combination,
//  which depends on which operating system and C++ library you are using. Generally,
//   you can use Control-Z followed by Enter to send an EOF from the keyboard. 
