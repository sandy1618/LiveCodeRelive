// Static class members : both variables and functions
// - Not part of the object
// - Belong to the class
// - only one copy exists
// - shared between objects

class Car
{
    static int totalCars;
};
int Car::totalCars = 0; // default initialize to 0

//  Static Member functions
// - Can only access static members of class
// - require only in declaration
// - belong to class but not objects
// - Do not receive "this" pointer because they always stay with class and not objects.
// - they cannot access non-static members of the class
// - They can be invoked directly by class name . eg. Class.staticmember(args)

class Car
{
private:
    static int totalCount = 0; // error: a-member-with-an-in-class-initializer-must-be-const
    // static members initialized outside the class.
public:
    static void ShowCount(); // need to use static only once
};

void Car::ShowCount()
{
    std::cout << "total cars :" << totalCount << std::endl; // here totalCount is a static variable.
}

int main()
{
    Car::ShowCount();
    ....

    Car::Showcount();
}