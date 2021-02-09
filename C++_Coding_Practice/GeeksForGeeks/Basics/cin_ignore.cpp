// C++ Code to explain why 
// not clearing the input 
// buffer causes undesired 
// outputs 
#include<iostream> 
#include<vector> 
using namespace std; 

int main() 
{ 
	int a,b; 
	char ch[80]; 
    
	// Enter input from user 
	// - 4 for example 
	cin >> a; 
    cin >> b;
	
	// Get input from user - 
	// "GeeksforGeeks" for example 
	cin.getline(ch,80); 
	
	// Prints 4 
	cout << a << endl; 
    cout << b << endl;

	
	// Printing string : This does 
	// not print string 
	cout << ch << endl; 
	
	return 0; 
} 
// Output without using cin.ignore()
// 
// basically, cin>> doesn't remove new 
// lines from the buffer when the user presses enter. 
// getline() mistakes this for user input along with enter.
// You can use cin.ignore() to get rid of those 
// extra characters before using getline().

// Basically Add cin.ignore(); after every cin if you plan 
// to take in string input using std::getline() method.