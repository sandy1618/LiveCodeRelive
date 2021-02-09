// Circular ref. problem sol. => make a weak_ptr in one of the class. 
#include <iostream>
#include <memory>
class Employee; //forward declaration to tell compiler that class exists. 
class Project{
    public:
        std::shared_ptr<Employee> m_emp;  
        Project(){
            std::cout << "Project()" << std::endl;
            
        }
        ~Project(){
            std::cout << "~Project()" << std::endl;
        }  
};

class Employee{
    public:
        std::weak_ptr<Project> m_prj; // this is a weak pointer.
        Employee(){
            std::cout << "Employee()" << std::endl;
            
        }
        ~Employee(){
            std::cout << "~Employee()" << std::endl;
        }
};

int main(){
    std::shared_ptr<Employee> emp{new Employee{}};
    std::shared_ptr<Project> prj{new Project{}} ;
    // circular reference.
    emp->m_prj = prj;//m_prj is a weak ptr. prj is assigned to weak ptr.
    prj -> m_emp = emp; // assign emp pointer to project obj.

 
    return 0;
}


// Employee()
// Project()
// ~Project()
// ~Employee()
// Because of weak_ptr, both the obje. destructors is called.