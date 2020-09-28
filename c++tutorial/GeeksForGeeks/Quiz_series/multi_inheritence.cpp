// INTERESTING EXAMPLE.
#include<iostream> 

using namespace std; 
class P { 
public: 
P(){std::cout << "Inside constructor P()";}
void print() 
{ cout <<" Inside P::"; } 
}; 

class Q : public P { 
public: 
Q(){std::cout << "Inside constructor Q()";};
void print() 
{ cout <<" Inside Q"; } 
}; 

class R: public Q { 
    public:
    R(){std::cout << "Inside constructor R()";};
}; 

int main(void) 
{ 
R r; 

r.print(); 
return 0; 
} 

// Conclusin: The compiler calls construct from base to derived in downword directon. 
// But the compilers looks for the first matching fuction from derived to base.
// In upward directions. 
