#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r, int i)  {  real = r;   imag = i; }
    Complex & operator ++(int);
    Complex & operator ++();
};

Complex& Complex::operator ++()
{
    real++; imag++;
    cout << "Inside prefix operator overloading\n"; 
    return *this;
}

Complex& Complex::operator ++(int i)
{
    // Complex c1(real, imag);
    real++; imag++;
    cout << "Insid&\e postfix operator overloading\n"; 

    return *this;
}

int main()
{
    Complex c1(10, 15);
    c1++; 
    ++c1;
    return 0;
}