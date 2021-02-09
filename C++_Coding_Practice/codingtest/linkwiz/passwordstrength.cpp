#include<bits/stdc++.h>

void strenght(int& b, int& x){
    std::cout << std::pow(b,x) << std::endl;
}
int main(){
    int n{0},l{0},u{0},b{0},x{0} ;
    char chr;
    while(std::cin >> chr){
        
        if(std::cin.get() == '\n') break;
        if(std::islower(chr)) l++;
        if(std::isdigit(chr)) n++;
        if(std::isupper(chr)) u++; 
        x++;   

    }
    if(static_cast<bool> (n) == true && static_cast<bool> (l) == false && static_cast<bool> (u) == false  ){
        b = 1;
        strenght(b,x);
    }
    if(static_cast<bool> (n) == false && static_cast<bool> (l) == true && static_cast<bool> (u) == false  ){
        b = 2;
        strenght(b,x);
    }
        if(static_cast<bool> (n) == false && static_cast<bool> (l) == false && static_cast<bool> (u) == true  ){
        b = 2;
        strenght(b,x);
    }
        if(static_cast<bool> (n) == true && static_cast<bool> (l) == false && static_cast<bool> (u) == true  ){
        b = 4;
        strenght(b,x);
    }
        if(static_cast<bool> (n) == true && static_cast<bool> (l) == true && static_cast<bool> (u) == false  ){
        b = 4;
        strenght(b,x);
    }
            if(static_cast<bool> (n) == true && static_cast<bool> (l) == true && static_cast<bool> (u) == true  ){
        b = 4;
        strenght(b,x);
    }


    return 0;
}