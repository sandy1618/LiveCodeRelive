#include <iostream>
#include <bits/stdc++.h> // general header
#include <utility> // pair
#include <string> // string

int main(){
    // initialization
    std::pair<int, int> pair1; // (1 ,20)
    std::pair<int, int> pair2{1,10}; // (1,10)
    // definiting pair.
    pair1.first = 1;
    pair1.second = 20;

    std::cout << pair2.first << std::endl;
    std::cout << pair2.second << std::endl;

    // Comparision operator pair1 : (1,20) pair2:(1,10)
    std::cout << (pair1 < pair2) << std::endl; // 0
    std::cout << (pair1 > pair2) << std::endl; // 1
    // If the first elements are same, it compares both the first and second element. 

    


    return 0;
}