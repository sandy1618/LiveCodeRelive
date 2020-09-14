#include <iostream>
using namespace std;
class Test{
    private:
        int x;
        int y;
    public:
        Test(int x = 0, int y = 0){ this->x = x; this->y = y;} // accessing local variable
        // The below functions are part of chained funcitons 
        // that returns a reference to the object itself of type Test.
        Test& setX( int x ){ this-> x = x ; return *this; }
        Test& setY( int y ){ this-> y = y ; return *this;}
        
        void print() { cout << "x = " << x << " y = " << y << endl; } 

};

int main(){
    Test obj1(5, 5);

    // Chained function calls.  All calls modify the same object 
    // as the same object is returned by reference 
    obj1.setX(10).setY(20).print();
    return 0;

}