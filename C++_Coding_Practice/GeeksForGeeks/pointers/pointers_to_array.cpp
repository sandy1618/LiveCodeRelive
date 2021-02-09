// C program to demonstrate 
// pointer to an array. 

#include <stdio.h> 
#include <iostream>

int main() 
{ 

	// Pointer to an array of five numbers 
	int(*a)[5]; 

	int b[5] = { 1, 2, 3, 4, 5 }; 

	int i = 0; 

	// Points to the whole array b 

	a = &b; 

	for (i = 0; i < 5; i++) 

		// printf("%d\n", *(*(a + i))); 
		printf("%d\n", *(*a + i)); // here *a gives the address. 
		//so, *(address + 0 )gives value. *a gives address because
		// it is a pointer to entire array.
	// Values can be accessed by a double pointer
	std::cout << **a; // 1
	// std::cout << *(*(a+1) - 1);
	return 0; 
} 
