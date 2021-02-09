#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y, z;
    string str,str2;
    cin >> x >> y;
    cin.ignore();
    getline(cin, str);
    getline(cin,str2);
    cin >> z ;
    
    cout << "Output" << endl;
    cout << x << endl;
    cout << y << endl;
    cout << str<<endl;
    cout << str2<<endl;
    cout << z << endl;
    return 0;

}