#include <iostream>
#include <bits/stdc++.h>
int sum(const int& a, const int& b){
    if (abs(a) <= 100 && abs(b)<= 100) {
        return a+b;
    }
    else return -1;
}

int main(){
    // input a and b 
    int a,b,c;
    // std::cin >> a >> b ;
    std::ifstream fin;
    std::ofstream fout;

    fin.open("./data/input.txt");
    fin >> a >> b;
    fin.close();
    
    // c = sum(a,b);

    fout.open("./data/output.txt");
    fout << a+b;
    fout.close();
    return 0;
}