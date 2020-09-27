#include<bits/stdc++.h>
void Largest(std::vector<int>& vect){
    std::sort(vect.begin(), vect.end());
    std::cout << *(vect.end()-1) << std::endl;
    // for(auto x: vect) std::cout << x;
}

int absMax(int& a, int& b){
    int c = std::abs(a-b);
    return c;
}

int main(){
    int testcase;
    std::cin >> testcase;
    std::vector<int> vect;
    while (testcase--)
    {   std::pair<int, int> pair;
        std::cin >> pair.first >> pair.second;
        int max = absMax(pair.first, pair.second);
        vect.push_back(max);
    }
    // for(auto x: vect) std::cout << x;
    Largest(vect);

    return 0;
    
}