#include <iostream>

using namespace std;

// template<typename T>  // With only template argument 
template<typename T, int size> // can also have non-type template argument 
class Stack {
    T m_Buffer[size];
    int m_Top{-1};
public:
    void Push(const T &elem){
        m_Buffer[++m_Top] = elem ;
    }

    void Pop();

    const T& Top() const{ // const. function, can only access, not change values
    // returns a reference t
        return m_Buffer[m_Top];
    }
    bool IsEmpty(){
        return m_Top == -1; // check if m_Top is == -1 
    }

};

// if definining member function outside the class, then follow the syntax of template
 // preceded with sthe declaratio of teh template 
// template parameters are part of type of the class stack, they both form a unit for the class
template<typename T, int size> 
void Stack<T, size>::Pop(){
    --m_Top;
}
int main(){
    // To make a generic stack container accepting differenct types , templates

    // Stack<int> s; // 3 56 3 1 2 gives this output.

    Stack<float, 10> s;
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