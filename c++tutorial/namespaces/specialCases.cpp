#include<iostream>
using namespace std;
// testing the "using" funcitonality and how using is not suitable if we have namespaces have variables of common names.
namespace greek
{
    int val = 200;
}

namespace roman
{
    int val = 100;
    int valfun() {return 300;}
} // namespace roman

using namespace greek;

int main()
{
// using namespace roman;
cout << val << '\n' ;
cout << roman :: val << '\n' ;
cout << roman::valfun() << '\n' ;

}