#include<iostream>

using namespace std;
class Base {
public:
   void f() {
      cout<<"Base\n";
   }
};
class Derived:public Base {
public:
   void f() {
      cout<<"Derived\n";
   }
};
main() { 
   Derived obj; 
   obj.f();
   obj.Base::f(); // accessing base class fucntion via derived class object. 
}