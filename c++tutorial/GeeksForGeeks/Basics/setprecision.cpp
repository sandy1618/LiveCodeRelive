#include <iomanip>
#include <iostream>

int main()
{
    double num1 = 3.12345678;
    // std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(3);
    std::cout << num1 << std::endl;
    return 0;
}
// predict output without fixed 
// 3.12
// with fixed
// 3.123
    
// setprecision sets precision including the decimal points.
// outputs nothing. just act like a stream manipulator.
// fixed : helps setprecision to set precision AFTER DECIMAL POINTS.    
// You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.