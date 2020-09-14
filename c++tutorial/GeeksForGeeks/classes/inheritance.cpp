#include <bits/stdc++.h>
using namespace std;

class Parent
{
    public:
    int id_p;
};

class child : public Parent 
{
    public:
    int id_c;
};

int main()
{
    child obj1;
    obj1.id_p = 91;
    obj1.id_c = 1;
    cout << "Child id: " << obj1.id_c << endl;
    cout << "Parent id: " << obj1.id_p << endl;
    return 0;
}
