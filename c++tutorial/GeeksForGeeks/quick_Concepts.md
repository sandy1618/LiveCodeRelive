What is the size of a character literal in C and C++?
a) 4 and 1
b) 1 and 4
c) 1 and 1
d) 4 and 4
View Answer

Answer: a
Explanation: The size of a character literal is 4 in case of C but it is one in case of C++. You can do printf(“%d”, (int)sizeof(‘a’)); in both C and C++ to check this.
10. What is the size of a character type in C and C++?
a) 4 and 1
b) 1 and 4
c) 1 and 1
d) 4 and 4
View Answer

Answer: c
Explanation: The size of a character type in both C and C++ is 1. You can do printf(“%d”, (int)sizeof(char)); in both C and C++ to check this.

What does the following statement mean?

int (*fp)(char*)
a) pointer to a pointer
b) pointer to an array of chars
c) pointer to function taking a char* argument and returns an int
d) function taking a char* argument and returning a pointer to int
View Answer

Answer: c
Explanation: The (*fn) represents a pointer to a function and char* as arguments and returning int from the function. So according to that, the above syntax represents a pointer to a function taking a char* as an argument and returning int.