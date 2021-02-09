#include <iostream>
#include <bits/stdc++.h>
template <typename T>
void print_vect(T &x){
    for(auto val : x ){
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
int main(){
    std::vector<int> vect1{3,1,2,4,5};

    // ACCESSING VALUES from vectos. // Most of them are accessed as reference.
    // Using range based for loop. 
    for (auto val: vect1){
        std::cout << val << " " ;
    }
    std::cout << std::endl;

    //USING ITERATORS 
    // Proper definiton of iterators. 
    // std::iterator<int> itr = vect1.begin(); // does not work
    std::vector<int>::iterator itr;
    auto itr2 = vect1.begin(); // use auto. Best is use auto. 
    for(;itr2<vect1.end();itr2++)
    {
        std::cout << *itr2 << " ";
    }
    // vect1[n], vect1.at(n) : Returns reference at position n.
    std::cout << "\nReference operator [g] : vect1[2] = " << vect1[2];  
    std::cout << "\nat : vect1.at(4) = " << vect1.at(4) << std::endl;

    // MODIFIERS. 
    // vect.push_back(value) 
    vect1.push_back(6);
    // vect.insert(iterator, value)
    vect1.insert(vect1.begin(),5); // 5 3 1 2 4 5 

    // ERASERS
    // vect.erase(iterator)
    vect1.erase(vect1.begin()+1); // erase item at 1 step from 1st postion.
    print_vect(vect1);

    // UTILITY 
    // vect.size() Returns the number of elements in the vector.
    std::cout << vect1.size() << std::endl;
    // vect.empty() Returns whether the container is empty.
    std::cout << vect1.empty() << std::endl;
    
    return 0;
}