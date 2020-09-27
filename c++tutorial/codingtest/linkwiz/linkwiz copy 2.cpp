#include <iostream>

using namespace std;
int isOdd(int a){
    if((a%2)==0) return 0;
    else
    {
         return 1;
    }
    
}

int main(void) {
  int a, b;

  cin >> a ;
  
  b = isOdd(a);

  cout << b << endl;

  return 0;
}