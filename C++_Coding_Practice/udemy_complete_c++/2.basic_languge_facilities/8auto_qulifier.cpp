//Auto: automatic type inferencing qualifier from c++ 11
// commonly used for lambda expressions and templates
//Note: auto <variable> = {initializer}, always use copy assignment type and initialize auto. 
//avoid auto when initializing references and pointers .

#include <initializer_list>
int Sum(int x, int y){
    return x + y; 
}

int main(){
    auto i = 10; //int i
    auto j = 2; //int j
    auto sum = i + 4.3f; //float sum

    //auto infers the return of funciton 
    auto result = Sum(i,j); // int result

    //auto also works with static & const qualifiers 
    static auto y = 2; //static int y
    const auto z = 3.14f; //const float z

    auto var = z; //float z, auto does not take the const qualifies for secondary assignmets. 
    
    const auto var2 = z;// const float z 

    auto &var3 = z; //const float z , auto+reference -> all the z type including const
    auto &vary = y; // int y  , and not static int y. 

    auto *ptr = &z; // const float *ptr , like reference, qualifier taken 

    auto list = { 1,2,3,4 };//initializer_list list, also remeber #include <initializer_list>
}   