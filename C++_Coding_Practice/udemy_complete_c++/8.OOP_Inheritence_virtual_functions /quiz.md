class Base{
public:
    void Foo(){
        std::cout << "Base::Foo" ;
    }
};
class Derived : public Base{
public:
    void Foo(){
        std::cout << "Derived::Foo" ;
    }
} ;
 
int main(){
    Derived d{} ;
    Base *b = &d ;
    b->Foo() ;
    return 0 ;
}

// output : Base::Foo
//Even though, the pointer points to Derived object, the compiler will generate t
//the call to base class Foo function, as it is not virtual.

2
Which is the correct way to invoke the base class constructor from the derived class constructor during instantiation?
class Form{
    std::string m_Name ;
public:
    Form(const char *name){/*Implementation*/}
} ;
class ModalForm : public Form{
public:
    //Invoke the base constructor
    ModalForm(const char *name){
    }
} ;


// output: 
method1 : 
ModalForm(const char *name):Form(name){}
or 
metod2 :
class ModelForm : public Form{
    public:
        using Form::Form;
};

3.
What changes are required to compile the following code and get the desired behavior mentioned in the comment?
class A{
public:
    virtual void F() = 0 ;
} ;
class B : public A{
public:
} ;
int main(){
    B b ;
    A *a = &b ;
    a->F() ;//Should invoke F() based on the underlying object (polymorphically)
    return 0 ;
}

//
Sol: provide a definiton of F() in child class B.
Child classes must provide a definition for pure virtual functions declared in the base class. 
This is called overriding & will also provide the polymorphic behavior..


