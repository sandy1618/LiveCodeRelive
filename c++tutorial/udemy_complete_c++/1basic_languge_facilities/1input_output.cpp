#include <iostream>
int main(){

    using namespace std;
    char buff[512];
    cout << "what is your name?" << endl ;
    // cin >> buff ; // code1
    // cin stops when sees spaces . so we do:
    cin.getline(buff,64,'\n'); //(variable, streamsize,delimiter )
    cout << "Your name is:" << buff << endl;      

    return 0;

}

    
// what is your name?
// sandeep Nayak
// Your name is:sandeep     


// what is your name?
// sandeep nayak
// Your name is:sandeep nayak
