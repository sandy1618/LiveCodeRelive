 #include <iostream>

//  void Swap(int  x, int y){
//      int temp = x;
//      x = y;
//      y = temp ;
//  }

//  int main(){
//      using namespace std ;
//      int a = 5, b = 3;
//      Swap(a,b) ; // passing variables by value 
//      cout << "a:" << a << "\n " ;
//      cout << "b:" << b << "\n " ;
//      return 0;


//  }
// //  a:5  // did not swap
// //  b:3


//  void Swap(int  *x, int *y){
//      int temp = *x;
//      *x = *y;
//      *y = temp ;
//  }

//  int main(){
//      using namespace std ;
//      int a = 5, b = 3;
//      Swap(&a,&b) ; // Passing by address
//      cout << "a:" << a << "\n " ;
//      cout << "b:" << b << "\n " ;
//      return 0;


//  }
// //  a:3  // Swapped with passing by address 
// //  b:5








 void Swap(int  &x, int &y){
     int temp = x;
     x = y;
     y = temp ;
 }

 int main(){
     using namespace std ;
     int a = 5, b = 3;
     Swap(a,b) ; // Passing by reference, just like python
     cout << "a:" << a << "\n " ;
     cout << "b:" << b << "\n " ;
     return 0;


 }
//  a:3  // Swapped with passing by reference 
//  b:5



// Advantage of references over pointer 
// cleaner code like python
// for reference need not check for "nullptr" as reference cannot be null ptr. 
// if we pass by address, always check for "nullptr"