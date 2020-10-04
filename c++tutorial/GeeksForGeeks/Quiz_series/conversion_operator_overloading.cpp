#include<iostream>
using namespace std;
class A
{
    int i;
public:
    A(int ii = 0) : i(ii) {}
    void show() {  cout << i << endl;  }
};
 
class B
{
    int x;
public:
    B(int xx) : x(xx) {}
    operator A() const {  return A(this->x); }
};
 
void g(A a)
{
    a.show();
}
 
int main()
{
    B b(10);
    g(b);
    g(20);
    return 0;
}
// Note that the class B has as conversion operator overloaded,
// so an object of B can be converted to that of A.
// Also, class A has a constructor which can be called with 
// single integer argument, so an int can be converted to A.