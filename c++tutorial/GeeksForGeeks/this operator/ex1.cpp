#include<iostream> 
using namespace std; 
  
class Test 
{ 
private: 
  int x; 
public: 
  Test(int x = 0) { this->x = x; } 
  // uest fochange takes in a pointer to the object Test 
  void change(Test *t) { this-> x = t.x; } 
 //reqr member ‘x’ in ‘t’, which is of pointer type ‘Test*’ (maybe you meant to use ‘->’ ?)

  
  void print() { cout << "x = " << x << endl; } 
}; 
  
int main() 
{ 
  Test obj(5); 
  Test *ptr = new Test (10); 
  obj.change(ptr); 
  obj.print(); 
  return 0; 
} 



// `error: 
//   solution: void change(Test *t) {this-> x = t->x;}
// t is a pointer to test object. so you need to reference the x variable to t which is a
// assigned the vale 10 during dynamic memory allocation. 