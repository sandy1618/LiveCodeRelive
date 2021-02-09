//R-value refernces introduced from c++ 11 
//R-value referneces can be used to identify temperory values & arguments to functions 
#include <iostream>
 // Returns r-value
 int Add (int x, int y){
     return x + y;
 }

 // Return l-value // takes in a reference and returns a reference
 int & Transform(int &x){
     x *= x;
     return x;
 }

 void Print(int &x){
     std::cout << "Print(int &x)" << std::endl;
 }
 void Print(const int &x){ // passing a constant reference 
     std::cout << "Print(const int &x)" << std::endl;
 }
 void Print(int &&x){
     std::cout << "Print(int &&x)" << std::endl;
     
 }

 int main(){
     // x,y,z are l-values & 5,10,8 are r-values
     int x = 5;
     int y = 10;
     int z = 8;

     // Expressions returns r-values 
     int result = (x + y) * z;
     // Expression returns l-values 
     ++x = 6; // here, the references are passed, therefore values are remebered and not forgotten

     /* R-value referneces alwas bind to temporaries 
        L-value reference always bind to l-values 
        syntax: int &&r1 = 10;  // R-value reference
                int &&r2 = Add(5,8) // Add returns by value(temperory)
                int &&r3 = 7+2 ; // expression return a temporary\\
     */

    //Temperories always bind to r-value references 

    int m = 10;
    Print(m);// Output : Print(int &x)
    Print(3); //If there was no Print(int &&x), then it would bind to Print(const ) but 
    // temperoris always bind to r-value references , so output is Print(int &&x)
    // used to indentify temperories , can later be used for move semantics

    return 0;

 }