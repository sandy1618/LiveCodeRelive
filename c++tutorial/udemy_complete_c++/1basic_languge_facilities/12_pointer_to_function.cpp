/* pointer to funciton implementation 
    int (*ptr) (int,int) = &Add // funciton: int Add(int,int)
*/
//same signature of funciton
//can be used even if the funciton name is not know
// advantage is that we dont need to konw tha name of the function to use it. 

#include <iostream>

void Print(int count , char ch){
    using namespace std;
    for (int i = 0; i < count; ++i){
        cout << ch;
    }
    cout << endl;
}

int main(){
    Print(5,'#');

    void (*ptr) (int,char) = &Print;// also just Print will work because funciton name is address like treatement by c++
    (*ptr)(8,'$'); // standard way of calll 
    ptr (8,'%'); // can also call directly the pointer name.
    return 0;
}
// #####
// $$$$$$$$
// %%%%%%%%