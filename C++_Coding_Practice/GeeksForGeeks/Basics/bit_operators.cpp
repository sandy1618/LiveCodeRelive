#include <iostream>

void bitWiseOperation(int a, int b, int c){
    int d,e,f,g,h;
    
    // Your cod e here
    d = a ^ a; // 4^4 = 0.
    e = c ^ b; // eg: 2 ^ 8 // act like a half adder = 10
    f = a & b; // 4 & 8 : 010 & 100 = 000 = 0
    g = c | (a^a);// 2 | (4 ^ 4) : 2 | 0 = 2
    h = ~e; // ~10 : 1010 => 0101 ? -11 ? 1111111111110101, for int.
    std::cout << d << std::endl; 
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << h << std::endl;
}
int main(){
    bitWiseOperation(4,8,2);
    return 0;
}