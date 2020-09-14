## A base class object points to all of its child classes. 
But this base class object needs to be a pointer or a reference. 
It means that, if we create a fucntion that takes a pointer/ reference 
to base class object, then this function can access all the members of child classes also.

As example: if we have a base calss: Account and two chld classes: savings and checking
Then if I create a fucntion that accepts a pointer to class object then
 void Transaction (Account *obj){};
 Then Transaction also can access member function by -> operator of both savings and checking child classes/
 eg. pAccount-> savings_memberfun();
    pAccount -> checking_mfun();
Hoever, the same fucntion common to both base classs and child class will create conflict. 
Therefore, use virtual keyword whereever necessary. 
now the compiler will generate calls to the function based on the object the pointer is pointer at.

The functions with "virtual" keyword are  POLYMORPHIC functions. 

The code that implements polymorphism does not need to know the actual object that the fuctions are pointing to.
With just the base class object pointer in the function definition and virtual keyword in the base class,
the passed object pointer ( maybe in as child class object) will get rightly invoked.

chidl functiosn are overriding the impletemation of base functions. 


### Mechanism: 
When any class ahs a virtual function, the compiler adds a hideen pointer to the class: Virtual pointer 
This virtual pointer is going to increase the size of the class and its objects with the size of the pointer.

IN A NUTSHELL, THE VIRTUAL FUNCTIONS ARE USED IF YOU WANT THE COMPILER TO INFER THE RESPECTIVE CHILD CLASS EVEN THOUGH ONLY INFORMATION OF BASE CLASS AVAILABLE. 
A POLYMORPHIC call to functions of base classes. 

