//commented line describe why need for weak ptr 
#include <iostream>
#include <memory>

class Printer{//holds integer ptr and prints value at the address 
    // int *m_pValue{};
    std::shared_ptr<int> m_pValue{};
public:
    void SetValue(std::shared_ptr<int> p){
        m_pValue = p;// want both pointer to be same? 
    }   
    void Print(){// how to check if m_pValue is pointing to valid address? 
    // Usually by just using pointers, there is no communication between 
    // m_pValue and p. So, How do we make them communicate? 
        std::cout << "Value is : " << *m_pValue << std::endl;
    }        
};
int main(){
    Printer prn;
    int num;
    std::cin >> num;
    // int *p = new int(num);
    std::shared_ptr<int> p{new int(num)}; // Sol.1 Making shared ptr both the places, p & m_pValue

    prn.SetValue(p);
    if(*p > 10){
        // delete p;
        p=nullptr;//Alaway assign null after delete.<good practices>
    }
    prn.Print();
    // delete p;// (if not nullptr)->double delete situation, crashing program. 
}

// BUt the problem with shared_ptr is that the reference count is 2 initial. 
// after p=nullptr, the shared_ptr still has a reference count = 1 , which means, 
// so underlining memory is not erased. 