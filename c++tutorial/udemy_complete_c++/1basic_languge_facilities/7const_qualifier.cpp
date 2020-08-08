//CONSTANT QUALIFIER
//cannot be modified later, attemp will casue compilation erros
//declarations & always initializer 
//replaces C macros, Also MACROS does not have scopes, can be used anywhere. 
//For scope access management, use const qualifies
// used with references 

// #include <iostream>
// int main(){
//     using namespace std;
//     float radius {0} ;
//     cin >> radius ;
//     const float PI = 3.145f ; // any changes gives error as PI is read-only variable
//     // float PI = 3.145f;
//     // PI = 1; // someone changed in middle.
//     float area = PI * radius * radius;
//     cout << "Area is :" << area << endl ;
//     return 0;


// }



// //More on const with pointer & references 
// #include <iostream>

// int main(){
//     using namespace std;
//     const int CHUNCK_SIZE = 512 ;// ptr is pointer to integer of type const.


//     // int *ptr = &CHUNCK_SIZE; // This cases error because my int is const but pointer is not pointing to cont int , 
//     // //error:  error: invalid conversion from ‘const int*’ to ‘int*’
//     // // if creating pointer to constant, then add constant in begining. 
//     // // it means that the address that ptr is pointing to, is itself not constant but the value is .
  


//     // const int *ptr = &CHUNCK_SIZE;
//     // //This means that *ptr is constant (ie ptr's value) but ptr is not . ie. the pointer is not constant.
//     // // *ptr = 1; // error , expressiion must be 
//     // int x = 10;
//     // ptr  = &x; // compiler will not allow this also, because, we told that it is pointing to a constant value.
//     // *ptr = 1;//error: assignment of read-only location ‘* ptr’



//     // const int *const ptr = &CHUNCK_SIZE; //ptr itself is const. pointer to an const integer.
//     // const pointers are useful when passind by address to functions. as Inside the functions the values are unchanged. 


// }



// //Use of const to pass as arguments inside functions. Pass by address
// #include <iostream>

// // void Print(int *ptr) {
// //     using namespace std;
// //     cout << *ptr << endl ;
// //     *ptr = 799;    
// // }
// // // 10
// // // main->x :799


// void Print(const int *ptr) {
//     using namespace std;
//     cout << *ptr << endl ;
//     // *ptr = 799;    // error , read-only *ptr
// }

// int main(){
//     using namespace std;
//     int x = 10;
//     Print(&x);
//     cout << "main->x :" << x << endl ;
//     return 0;

// }



// Pass by reference, 
#include <iostream>
void Print(const int &ptr) {
    using namespace std;
    cout << ptr << endl ;
    // *ptr = 799;    // error , read-only *ptr
}

int main(){
    using namespace std;
    int x = 10;
    Print(x);
    cout << "main->x :" << x << endl ;
    return 0;

}
