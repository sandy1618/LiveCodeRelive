#include <iostream>

using namespace std;

class base_print{
    public:
        virtual void Print(const int& x){
            cout << "inside base print :" << x << endl; 
        }
        
       
};

class child_print: public base_print{
    public:
    // When using override, the child member function signature must be same as base member funciton signature. 
    // void Print(const float&x) = delete;

    void Print(const int &x) override final {
        cout << "inside child print:" << x << endl;
    }
};

// This class or its function cannot be inherited.
class final_class final {    
    public: 
    // non vitual functionas cannot have final keyword 
        virtual void Print(int x) final{
            cout << x << endl;
        }
};

int main(){
    child_print m;// create child_print object m.
    base_print &base = m ; // base of type (reference pointing to base_print object) is pointing to m (child_print type)
    // base reference is referencing to child_print m object. so it should access m.Print() method. 
    base.Print(1.1); // after making base mehtod virutal , we get the output : inside child print:1

    // base.

    return 0;

}