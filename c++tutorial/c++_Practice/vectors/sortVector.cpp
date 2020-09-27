#include <bits/stdc++.h>
std::vector<int> sortVector(std::vector<int> vect){
    std::sort(vect.begin(),vect.end());
    return vect;
    }
std::vector<int> reverseVector(std::vector<int> vect){
    std::sort(vect.begin(),vect.end(),std::greater<int>());
    return vect;
}
/**
 * @todo complete the output later for vector
 */
int main(){
    int testcase;
    std::cin >> testcase;
    while(testcase--){
        int vect_size,element;
        std::cin >> vect_size;
        std::vector<int> vect;
        while(vect_size--){
            std::cin >> element;
            vect.push_back(element);
        }
        sortVector(vect);
        reverseVector(vect);
    }
}