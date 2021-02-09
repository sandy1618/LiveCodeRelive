#include<iostream>

using namespace std;
main() {
   enum { 
      india, is = 7, GREAT 
   };

   cout<<india<<" "<<GREAT;
}
// 0 8 
//0 8, enums gives the 
//sequence starting with 0. If assigned with a value the sequence continues from the assigned value.