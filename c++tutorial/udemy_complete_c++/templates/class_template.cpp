#include <iostream>

using namespace std;

template<typename T>  
class Stack {
    T m_Buffer[512];
    int m_Top{-1};
public:
    void Push(const T &elem){
        m_Buffer[++m_Top] = elem ;
    }

    void Pop(){
        --m_Top ;
    }

    const T& Top() const{ // const. function, can only access, not change values
    // returns a reference t
        return m_Buffer[m_Top];
    }
    bool IsEmpty(){
        return m_Top == -1; // check if m_Top is == -1 
    }

};


int main(){
    // To make a generic stack container accepting differenct types , templates

    Stack<int> s; // 3 56 3 1 2 gives this output.
    s.Push(2.78);
    s.Push(1.5);
    s.Push(3);
    s.Push(56);
    s.Push(3);

    while (!s.IsEmpty())
    {
        std::cout << s.Top() << " ";
        s.Pop();
    }
    
    return 0;
    
}