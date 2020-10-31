#include <bits/stdc++.h> 
using namespace std;
// input: 1 2 3 4 \n  now, there is no loop mentioned.
void using_sstream(){
    std::string str;
    std::getline(std::cin,str);
    std::stringstream sstrm(str);
    int x;
    while (sstrm>>x){
        cout << x << endl;
    }

}
int main() { 

// code here  
    using_sstream();
    return 0; 

} 