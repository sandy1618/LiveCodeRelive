#include <iostream>
using namespace std;
 
class A 
{
    public:
   int a;
   
//    A() { a = 5;} // If no constructor, gives zero, because , compiler initializes class.
};
 
int main()
{
    A *obj = new A; // here, new autmaically calls the constructor which makes this pointer
    // point to the object.
    cout << obj->a;
}