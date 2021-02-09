#include<iostream> 
using namespace std; 

class Test 
{ 
public: 
Test(); // default constructor
Test(int i){
    cout << "Parameterized Constructor called \n";
}
}; 

Test::Test() { 
	cout<<"Constructor Called \n"; 
} 

int main() 
{ 
	cout<<"Start \n"; 
	Test t1();  
	// Test t1;  // constructor called
    // Test t1(1);// parameterized constructer called
	cout<<"End \n"; 
	return 0; 
} 
// Start 
// End
// Note that the line “Test t1();” is not a constructor call. Compiler considers 
//  line as declaration of function t1 that doesn’t recieve any parameter and 
//  returns object of type Test.

