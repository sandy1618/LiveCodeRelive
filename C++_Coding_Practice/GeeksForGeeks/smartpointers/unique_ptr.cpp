#include <iostream>
#include <memory> // for smart pointers.
class Rectangle {
    private:
        int length;
        int breadth;
        int area;
    public:
        // default constrcutior
        Rectangle(){};
        Rectangle(int l, int b):length(l),breadth(b){}
        inline int Area(){area = length*breadth; return area; }
        int getArea(){return this->area;}    // doubt: why error here? 
            
};

void print_area(Rectangle* ptr) {std::cout << ptr->getArea() ;}  
void rectangle_gen(){
    //generates a pointer to rectangle class
    Rectangle *p = new Rectangle();// calling default constructor
    //The problem of this function is that, the allocated memory is not 
    // deleted causeing memory leak. so, using delete is must here. 
    // Thats why c++ 11 has smart pointers so that "delete" is not needed. 
}

int main() 
{ 
    // // Infinite Loop , will go crashing because delete not used.
    // while (1) { 
    //     rectangle_gen(); 
    // } 

    // UNIQUE PTR CODE AND USAGE. 
    // unique pointer is not overloaded for "=" assignment.
    std::unique_ptr<Rectangle> P1(new Rectangle(10,5));//initializing object with new keyword
    // std::cout << P1->Area() << std::endl;
    std::unique_ptr<Rectangle> P2; 
    P2 = std::move(P1); 
  
    // This'll print 50 
    std::cout << P2->Area() <<std::endl; 
    // the object is a unique pointer object and not direct object. use .get() to get ptr.
    print_area(P1.get());
    return 0;

} 

// golden rule: you cannot create a copy of unique ptr, but can always move it . std::move(unq_ptr)
// so you cannot pass unique_ptr by value into a function call.
// but you can always reference it . 
