## Interesting quiz and explanintion from array
q1:

Which of the following declarations given below is valid:
int *ptr1 = &array[0];
int *ptr2 = array;

Ans: Both

The array index operator ([]) does not work on arrays in C and C++. When you apply it to an array the language implicitly converts the array into a pointer to the array's first element. Thus adding to an array or dereferencing an array appears to behave the same as adding or dereferencing a pointer.

Q2:
int main() 
{ 
    char arr[] = {'F', 'o', 'r', 'k', 'C', 'P', 'P'};
    char arr1[] = {'O', 'n', 'l', 'i', 'n', 'e', 'C', 'o', 'u', 'r', 's', 'e'};
    char *ch = &arr[0]; // line 1
    char *ch1 = arr1;   // line 2
    cout << ch[0]<< ch[4] << ch[6] << endl;
    cout << ch1[0] << ch1[6];
  
   return 0; 
}  
// Output: FCP, OC,
//arr and &arr[0] can be used interchangeably, both have same meaning. Similarly in the case of arr1 and &arr1[0]. An array name contains the address of first element of the array which acts like constant pointer.

Q3:
#include <iostream>
using namespace std;
  
int main() 
{ 
    int arr[] = {10, 50, 15, 20};
    int *ptr1 = arr;
    int *ptr2 = &arr[1];
    int res = (*++ptr1) * (*--ptr2);
    cout << res;
  
   return 0; 
}  
// 500
//Both the expressions *++ptr1 and *--ptr2 has two operators(*, ++/--) of same precedence, so compiler looks for assoiativity. Associativity of operators is right to left. Therefore the expression is treated as *(++ptr1) and *(--ptr2).

