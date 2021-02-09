#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    string geekname;
    int id;
    void printname()
    {
        cout << "Geekname is :" << geekname << '\n';
    }
    void printid();
};

void Geeks :: printid() 
{
    cout << "Geek id is " << id << '\n';
}
int main()
{
    Geeks obj1;
    obj1.geekname = "sandeep";
    obj1.id = 2;
    obj1.printname();
    obj1.printid();
    return 0;
}
