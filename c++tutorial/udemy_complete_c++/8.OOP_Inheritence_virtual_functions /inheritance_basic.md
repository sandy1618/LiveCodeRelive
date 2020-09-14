## Composition: "Has-a" relationship
has-a relationship. 
For example : A car has a engine. S a class car can have an object of type engine. (another class object) 
This kind of collaboration allows the car to reuse the functionality givne by engine.
class car{
    Engine m_engine;
    public:
        void Accelerate(){
            m_engine.Intake(); // the accelerate method can use the engine object 
        }
};

## Inheritance : "Is-a" relationship
Very Important: 
In C++ there are 3 member functions that are not inherited: 
CONSTRUCTORS 
DESTRUCTORS 
ASSIGNMENT OPERATORS. 

So you need to invoke them in every child class 
by using member initializer list.