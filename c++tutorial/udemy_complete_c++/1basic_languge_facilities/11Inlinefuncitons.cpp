/* inline void Function(arguments){
    //implementation
}
-function marked with inline keyowrd
-defined in header files usually
-requests the compiler to replace the call with function body
-overhead of function call is avoided 
    -Stack memory for arguments not req.
    -no need to save return address
-may improve performance of code 
*/

#include <iostream>

// int Square(int x){
//     return x * x ;
// }

inline int Square(int x){
    return x * x ;
}

int main(){
    using namespace std;
    int val = 5;
    int result = Square(val + 1);
    cout << result << endl;

}