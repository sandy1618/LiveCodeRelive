#include <iostream>
#include <bits/stdc++.h>
void sum(const int& a, const int& b){
    if (abs(a) <= 100 && abs(b)<= 100) {
        std::cout << a+b << std::endl;
    }
    else std::cout << 0 << std::endl;
}

int main(){
    // input a and b 
    int a,b;
    std::cin >> a >> b ;
    sum(a,b);
    return 0;
}