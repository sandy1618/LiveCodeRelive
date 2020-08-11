### This pointer act similar to self in python.
- It helps to distinuish between members of different object . Ie. object to object distinguishing.  
- It is optional in nature as c++ implicitely recognizes between objects.
- It helps to distinguish member variables from internal variables if the variable names are same.
``` C++
class Car{
    int passengers;
};
void Car::AddPassengers(int passengers ){
    // passengers = passengers; // here the compiler will get confused which passengers are we talking about, Car.passengers or internal variable ////passengers 
    this-> passengers = passengers ;
}


```