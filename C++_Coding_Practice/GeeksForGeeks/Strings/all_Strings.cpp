#include <iostream>
#include <string>
using namespace std;

void printStr(const std::string &str){
    // iterates over each element. 
    for (auto elem: str){
        std::cout << elem ;
    }
}
int main(){
    //1.CREATION: ASSIGN, INPUT
    std::string str, str1{"Nice"},str2("People");
    // Assign 
    str = "Japanese are";   
    
    // // input to str 
    // std::getline(std::cin, str);


    //2.ACCESS , ITERATIONS 
    // Access
    // std::cout << str[3];

    // Creating string iterators . 
    // std::string::iterator s_itr;
    
    // // Looping for iterators 
    // for(s_itr=str.begin(); s_itr!=str.end(); s_itr++){
    //     std::cout << *s_itr ;
    // } 
    
    // // iterates over each element. 
    // for (auto elem: str){
    //     std::cout << elem << '\n';
    // }

    //3.ADDING 
    // str[0] = 'A';
    // Error: a value of type "const char *" cannot be assigned to an entity of type "char"
    // str[0] = "B";  
        //3.0 PUSH_BACK
        // Push_back one char at a time
        // str.push_back('P');
        

        //3.1 INSERT 
        // Using pose
        // str.insert(0,"INSERT");
        
        // invalid, (iterator , const char*c)
        // str.insert(str.begin(),"New");
        // invalid, (iterator , char c)
        // str.insert(str.begin(),'N');

    // printStr(str);

    
    //4.DELETING
        // //4.0 POP_BACK
        // str.pop_back();

        // //4.1 ERASE
        // str.erase(str.begin());
        

    // printStr(str);
    
    //5.OPERATIONS
    // TO UPPER, TO LOWER ...
    //6.UTILITES
        // LENGHT :Both size() and length() return length of string but length is preferred 
        // int len = str1.length(); // Same as "len = str6.size();"   
        // cout << "Length of string is : " << len << endl;

        // APPEND
        // str += str1;
        // // str.append(str1);
        // += is slightly slower than append() because each time + is 
        // called a new string (creation of new buffer) is made which 
        // is returned that is a bit overhead in case of many append operation.

        // FIND AND REPLACE
        std::string main_str ("There are two needles in this haystack with needles.");
        std::string find_str ("needle");

        // int found_pose = main_str.find("needle");
        int found_pose = main_str.find(find_str);
        if(found_pose!=std::string::npos)
             std::cout << found_pose;
            
        //REPLACE
        // str.replace(found_position,replancement_length,replacement_string)
        main_str.replace(found_pose,str2.length(),"men");
        printStr(main_str);
                
        
    // printStr(str);
  



    return 0;
}