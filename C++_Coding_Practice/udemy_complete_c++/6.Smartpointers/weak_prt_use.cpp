//commented line describe why need for weak ptr 
#include <iostream>
#include <memory>

class Printer{
    std::weak_ptr<int> m_pValue{}; // making this object's members as weak_ptr
public:
    void SetValue(std::weak_ptr<int> p){
        m_pValue = p;// want both pointer to be same? 
    }   
    void Print(){// how to check if m_pValue is pointing to valid address? 
    // Usually by just using pointers, there is no communication between 
    // m_pValue and p. So, How do we make them communicate? 
    if(m_pValue.expired()){ // checkign if expired for weak_ptr. 
        std::cout << "Resouce No longer available" << std::endl;
        return;        
    }  
    auto sp = m_pValue.lock(); // locking to make this weak_ptr as shared_ptr to access values.
    // we cannot access values from weak_ptr directly as it is just used for communication purpose.
    std::cout << "Value is : " << *sp << std::endl;    
    std::cout << "Ref_count: " << sp.use_count() << std::endl;
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