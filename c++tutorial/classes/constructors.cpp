#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int id;

    Geeks ()
    {
        cout << "Default consructor called " << endl;
        id = -1;
    }
    Geeks(int x)
    {
        cout << "parametrized constructor called" << endl;
        id = x;
    }
};

int main()
{
    Geeks obj1;
    cout << "Geeks id is" << obj1.id << endl;

    Geeks obj2(2);
    cout << "Geeks is is :" << obj2.id << endl;
    return 0;
}

