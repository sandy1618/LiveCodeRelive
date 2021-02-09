#include<iostream> 
using namespace std; 

class Test { 
	int value; 
public: 
	Test(int v=0 ); // when u assing 0 , it becomes default constructor.
    //
}; 

Test::Test(int v) { 
	value = v; 
    cout << value << endl;
} 

int main() { 
	Test t[100]; // There is no meaning to [] here I guess.It is considered without arguments. 
    Test t(1); // parametrized contructor.
	return 0; 
}
