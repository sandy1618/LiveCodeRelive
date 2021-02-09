 #include <iostream>
 int main(){
     using namespace std ;
     int x = 10 ;
     cout << &x << "\n" ;
     
     int *ptr = &x ; // ptr is a pointer, it will store address, &x return addres, 
     cout << ptr << "\n" ;
     *ptr = 5 ; // int *ptr, initializing pointer and *ptr = 5 is dereferencing ptr or accessin the value at the address
     cout << x << '\n';
     int y = *ptr ; 
     int *null = nullptr ; // NULL pointer using nullptr in c++ 11,before macros NULL was used.
     cout << y << endl ;
     return 0 ;
 }
// output:
// 0x7fffffffd81c
// 0x7fffffffd81c
// 5
// 5

// nullptr in c++ 11, before macros NULL was used.




//   int main(){
//      using namespace std ;
//      int x = 10 ;
//      cout << &x << "\n" ;
     
//      int *ptr = x ;
//      cout << ptr << "\n" ;
//      return 0 ;
//  }
//  // output: error : value int cannot be int *