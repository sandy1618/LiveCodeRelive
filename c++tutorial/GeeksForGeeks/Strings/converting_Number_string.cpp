// C++ code to demonstrate string stream method 
// to convert number to string. 
#include<iostream> 
#include <sstream>  // for string streams 
#include <string>  // for string 
using namespace std; 
void Num_to_Str(){

      int num = 2016;  
    // declaring output string stream 
    ostringstream str1;   
    // Sending a number as a stream into output 
    // string 
    str1 << num; 
  
    // the str() coverts number into string 
    string geek = str1.str(); 
  
    // Displaying the string 
    cout << "The newly formed string from number is : " << num; 
    // cout << num << endl; 

}

void Str_to_Num(){
    string s = "1234 afdas";
    // creating a stringstream object 
    stringstream stream(s);
    int x{};
    string str{};
    stream >> x >> str;
    // Here as you can see, the stream object is very intelligent. 
    cout << x << '\n';
    cout << str;
    
    
}
int main() 
{   
    Str_to_Num();
  
    return 0; 
} 