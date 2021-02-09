#include<iostream> 

using namespace std; 

class Test { 
	int value; 
public: 
	Test (int v = 0) {value = v;} 
	// int getValue() { return value; } 
	// int getValue() const { return value; } // This function is made constant
	// const int getValue()  { return value; } // This function returns constant. 


}; 




int main() { 
	const Test t; 
    
	cout << t.getValue(); 
	return 0; 
}

// compiler error:
// A const object cannot call a non-const function. 
// The above code can be fixed by either making getValue() const or making t non-const.
// Test t; // Solution
