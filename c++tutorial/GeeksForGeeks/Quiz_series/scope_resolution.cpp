#include<iostream> 
using namespace std; 

int x = 10; 
void fun() 
{ 
	int x = 2; 
	{ 
		int x = 1; 
		// cout << ::x << endl; // 10
		cout << x << endl; // 1
	} 
} 

int main() 
{ 
	fun(); 
	return 0; 
}
//If Scope Resolution Operator is placed before a variable name then the global variable is referenced. 
