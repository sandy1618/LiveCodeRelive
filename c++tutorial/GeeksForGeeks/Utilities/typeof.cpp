// C++ program to show the use of typeid operator 

#include <iostream> 
#include <typeinfo> 
using namespace std; 

int main() 
{ 
	int i = 5; 
	float j = 1.0; 
	char c = 'a'; 

	// Print the types 
	cout << "i is of type "
		<< typeid(i).name() << endl; 

	cout << "j is of type "
		<< typeid(j).name() << endl; 

	
	return 0; 
} 
