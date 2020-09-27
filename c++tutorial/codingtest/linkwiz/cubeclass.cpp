#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Cube{
    int length ;

    public:
        Cube(int &x):length(x){};
        int getVolume(){return std::pow(this->length,3);}
        int getSurfaceArea(){return (6 * std::pow(this->length,2));}
};

int main(void) {
  int x, y ,z;

  cin >> x;

  Cube c(x);
  
  y = c.getVolume();
  cout << y << endl;

  z = c.getSurfaceArea();
  cout << z << endl;

  return 0;
}