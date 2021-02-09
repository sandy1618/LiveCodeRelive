#include<iostream>
using namespace std;
 
class Point {
private:
  int x, y;
public:
  // Point():x(0),y(0){}
  Point(int x=0,int y=0) : x(x), y(y) { }
  Point& operator()(int dx, int dy);
  void show() {cout << "x = " << x << ", y = " << y; }
};
 
Point& Point::operator()(int dx, int dy)
{
    x = dx;
    y = dy;
    return *this;
}
 
int main()
{
// Remebeer, for construcotr calls, default : point pt and not point pt()
// Point pt() : JUST DOES NOT WORK
  Point pt;
  // here it is considered as a fucntion call. dont confuse wiht constructor call
  pt(3, 2); 
  pt.show();
  return 0;
}