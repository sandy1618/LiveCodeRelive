### Static class members : both variables and functions 
- qualified with static keyword
- Not part of the object
- Belong to the class 
- only one copy exists 
- shared between objects 
- Example , if you want to count the number of objects of a class , you can make a static 
  - member variable inside the class and increment in constructor and decrement in destructor 
- cannot be initialized inside the class , have to be defined outside the class 
- // car.h 
 class Car{
     static int totalCars;
 };
 //Car.cpp
 int Car::totalCars = 0 ; // default initialize to 0

### Static Member functions 
- functions qulaified with static keyworkd 
- require only in declaration
- belong to class but not objects 
- Do not receive this pointer because they always stay with class and not objects.
  -  So, in their funciton call no address of individual objects are passed.
- because of this, they cannot access non-static members of the class
- They can be invoked directly by class name . eg. Class.staticmember(args)
  
``` C++
class Car{
    private:
        static int totalCount;
    public: 
        static void ShowCount(); // need to use static only once
};

void Car::ShowCount(){
    std::cout << "total cars :" << totalCount << std::endl; // here totalCount is a static variable.
}

int main(){
    Car::ShowCount();
    ....

    Car::Showcount();
    
}
```