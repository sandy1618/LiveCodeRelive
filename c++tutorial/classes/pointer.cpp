#include <bits/stdc++.h>
using namespace std;

void geeks()
{
    int val[3] = {5,10,15};
    // Declaring pointer Variable. 
    int *ptr;
    
    // Assign address of val[0] to ptr. 
    // We can use ptr=&val[0];(both are same) 
    ptr = val;
    cout << "Elements of the array are: "; 
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl; 
    cout << ptr <<'\n'<< val << endl;
  
    

}
int main()
{
    geeks();
    return 0 ;


}

