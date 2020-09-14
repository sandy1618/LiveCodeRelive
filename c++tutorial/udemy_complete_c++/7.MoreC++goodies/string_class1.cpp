// We look at std::string class in c++ 
#include <iostream>
// C string header files for understanding C strigns 

#include <cstring>
// Usage of C style strings 
// In C when array is passed to a function it is passed as a pointer.

#include <string>


const char * Combine(const char * pFirst, const char * pLast){
    // char fullname[20];// full name array to store the combined text.As the func. only accepts pointer, there for we use 
    // Dynamic memory allocation
    int size = strlen(pFirst) + strlen(pLast);
    char *fullname = new char[size] ; 
    strcpy(fullname,pFirst); // All the communication is done via pointers 
    strcat(fullname,pLast);
    return fullname;
    }

std::string Combine(const std::string &first,const std::string &last){
    return first + last;
}
int main()
{   
    // char first[10];
    // char last[10];
    // std::cin.getline(first,10);
    // std::cin.getline(last,10);

    // const char *pFullName = Combine(first, last);
    // std::cout << pFullName << std::endl; //pFullname is basicall an array poineter so it will behave like priting array name 

    // //clearing the d_memory but you need to see if inside the fucntion if memory is allocated / or deallocated . 
    // delete[] pFullName;

    std::string first;
    std::string last;

    std::getline(std::cin, first);
    std::getline(std::cin, last);

    std::string fullname  = Combine(first, last);
    std::cout << fullname << std::endl;


    return 0;
}

//CONCLUSION
// working with C style string : char [] is prone to erros 
// User needs to take care of memory allcocation and deallocation.

void  UsingStdString(){
     //initialize & assign
    std::string s = "Hello"; // invoke the parameterized constructor of string. 
    //or
    s = "Hello_World";
    
    //Access
    s[0] = 'M' ; //assign char. via index
    char ch = s[1] ; //read char 

    std::cout << s << std::endl;
    std::cin >> s;
    std::getline(std::cin,s);

    //size
    s.length(); // faster then cstring(raw) , caching, so constant time complexiy
    
    //insert & concatinate
    std::string s1{"Hello"}, s2{"World"};
    s = s1 + s2;

    s.insert(2,"World");
    
    //comparison
    if(s1 == s2){

    }

    //Remove 
    s.erase();
    s.erase(0,5);

    s.clear();
    
    //Search
    auto pos=s.find("World",0);
    if (pos != std::string::npos){ // npos=-1 when not found . 
        //found
    }
}