// output of the following when only shared_ptr are used ?
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
        std::shared_ptr<Project> m_prj;
        Employee(){
            std::cout << "Employee()" << std::endl;
            
        }
        ~Employee(){
            std::cout << "~Employee()" << std::endl;
        }
};

int main(){
    // Employee *emp = new Employee{};
    // Project *prj = new Project{};
    std::shared_ptr<Employee> emp{new Employee{}};
    std::shared_ptr<Project> prj{new Project{}} ;
    // circular reference.
    emp->m_prj = prj;//assign prj pointer to employee object
    prj -> m_emp = emp; // assign emp pointer to project obj.

    // delete emp;
    // delete prj;
    return 0;
}

// Employee()
// Project()
// destructors of objects are not invoked. indicating memory not release: memory leak