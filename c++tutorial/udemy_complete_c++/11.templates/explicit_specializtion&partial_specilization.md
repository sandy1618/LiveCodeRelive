# Explicit Specilization 
The main idea is to have  rewritten in this form: 

template<> // empty braces means I am redefinig all the template parameters.
class test<int>

#include <iostream> 
using namespace std; 

template <class T, class U> 
class Test 
{ 
// Data memnbers of test 
public: 
Test() 
{ 
	// Initialization of data members 
	cout << "General template object \n"; 
} 
// Other methods of Test 
}; 

template <> 
class Test <int, int> 
{ 
public: 
Test() 
{ 
	// Initialization of data members 
	cout << "Specialized template object\n"; 
} 
}; 

int main() 
{ 
	Test<int> a; 
	Test<char> b; 
	Test<float> c; 
	return 0; 
} 





# Partial Specilization 

Usually, partial specilization looks like this 
template <class T, class U> 
class Test 
{ 
};

// partial specializtion 
template <class T>
class Test<T, int> {

};


### Difference 
The difference is that in 
explicit spcializtion: In explicit spcializtion, all the template parameters are specialized. 
partial specialization : only partial template parameters are specialized. 
