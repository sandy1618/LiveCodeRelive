// BETTER IS sstream obects as demonstrated below. 
#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <string>
// istringstream, ostringstream, stringstream

std::vector<int> vect;
void printVect();

void using_sstream(){
    // Using sstream to find \n for using sstram
    std::string str;
    std::getline(std::cin,str);//cin helps in getting str. 
    // std::cout << typeid(str).name() << std::endl;

    std::istringstream iss(str);
    int x;
    while(iss >> x) vect.push_back(x);
    printVect();   

}

void printVect(){
    std::cout << "Printing stored vector : ";
    for(auto elem:vect) std::cout << elem << " ";
    std::cout << "\nSize of  stored vector : ";
    std::cout << vect.size();
     
}
int main(){

    using_sstream();   
    return 0;
} 