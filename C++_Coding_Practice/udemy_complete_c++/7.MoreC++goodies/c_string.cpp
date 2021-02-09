#include <iostream>
// C string header files for understanding C strigns 

#include <cstring>
// Usage of C style strings 
// In C when array is passed to a function it is passed as a pointer.
// 
const char * Combine(const char * pFirst, const char * pLast){
    // char fullname[20];// full name array to store the combined text.As the func. only accepts pointer, there for we use 
    // Dynamic memory allocation
    int size = strlen(pFirst) + strlen(pLast);
    char *fullname = new char[size] ; 
    strcpy(fullname,pFirst); // All the communication is done via pointers 
    strcat(fullname,pLast);
    return fullname;
     

}
int main()
{   
    char first[10];
    char last[10];
    std::cin.getline(first,10);
    std::cin.getline(last,10);

    const char *pFullName = Combine(first, last);
    std::cout << pFullName << std::endl; //pFullname is basicall an array poineter so it will behave like priting array name 

    //clearing the d_memory but you need to see if inside the fucntion if memory is allocated / or deallocated . 
    delete[] pFullName;


    return 0;
}

//CONCLUSION
// working with C style string : char [] is prone to erros 
// User needs to take care of memory allcocation and deallocation.