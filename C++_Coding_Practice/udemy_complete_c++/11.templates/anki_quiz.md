# Udemy based quiz to gain understanding of template 

## 1. Explicit Template instntiation.
template<typename T>
T Add(T x,T y){return x+y;}
 
template int Add(int,int) ; // <- What does this declaration do?

// Explcit  instantiation of function template Add wher T= int


## Explicit Spcialication 
What does the main first gets access to ? 

template<typename T>
void PrettyPrint(T x){
    //Implementation
}
 
template<> // Explicit specialization 
void PrettyPrint(const char *x){
    //Implementation
}
 
int main(){
    char *p{"Blah"} ;
    PrettyPrint(p) ;
    return 0 ;
}
// 
The main access to the primary template rather then the explicit specialization.
The specialization accepts const char *, but in main(), the argument type passed is char *.

## Partial Specialization 
How to partially specialize the following class template? The second argument type is specialized as int.

template<typename T1, typename T2>
class Foo{
    //Implementation
} ;

//
template<typename T1>
class foo<T1, int>

