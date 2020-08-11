### Constant member function 
- Member fucntion qualified with "const" keyword 
- Note : it is added in the end
  
```C++
// Done both in declaration and definition
Class Car{
    public:
        void Dashboard () const ;

};
void Car :: Dashboard() const {
    std::cout << "Fuel: " << fuel << std::endl;
}
```
- Such functions cannot change the value of any class member variables 
- Useful for creating Read-Only fucntions 
- Constant object can invoke only constant member funcitons    