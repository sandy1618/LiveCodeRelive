# These are intereting quizzes to test knowledge from geeks for geeks websties 
## 1. 
#include <iostream>
using namespace std;
 
template <typename T>
void fun(const T&x)
{
    static int count = 0;
    cout << "x = " << x << " count = " << count << endl;
    ++count;
    return;
}
 
int main()
{
    fun<int> (1); 
    cout << endl;
    fun<int>(1); 
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    return 0;
}
//
x = 1 count = 0
x = 1 count = 1
x = 1.1 count = 0

Compiler creates a new instance of a template function for every data type. 
So compiler creates two functions in the above example, one for int and other for double.
 Every instance has its own copy of static variable. The int instance of function is called twice, so count is incremented for the second call.

## 2.
#include <iostream>
using namespace std;
 
template <class T>
class Test
{
private:
    T val;
public:
    static int count;
    Test()  {   count++;   }
};
 
template<class T>
int Test<T>::count = 0;
 
int main()
{
    Test<int> a;
    Test<int> b;
    Test<double> c;
    cout << Test<int>::count   << endl;
    cout << Test<double>::count << endl;
    return 0;
}

//
2
1
There are two classes created by the template: Test and Test. 
Since count is a static member, every class has its own copy of it. 
Also, count gets incremented in constructor.

## 3.
Output of following program? Assume that the size of char is 1 byte and size of int is 4 bytes, and there is no alignment done by the compiler.
#include<iostream>
#include<stdlib.h>
using namespace std;
 
template<class T, class U>
class A  {
    T x;
    U y;
    static int count;
};
 
int main()  {
   A<char, char> a;
   A<int, int> b;
   cout << sizeof(a) << endl;
   cout << sizeof(b) << endl;
   return 0;
}
#
2
8
Since count is static, it is not counted in sizeof.


## 4. Non-Type as Argument to Templates 
#include <iostream>
using namespace std;
 
template <class T, int max>
int arrMin(T arr[], int n)
{
   int m = max;
   for (int i = 0; i < n; i++)
      if (arr[i] < m)
         m = arr[i];
 
   return m;
}
 
int main()
{
   int arr1[]  = {10, 20, 15, 12};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);
 
   char arr2[] = {1, 2, 3};
   int n2 = sizeof(arr2)/sizeof(arr2[0]);
 
   cout << arrMin<int, 10000>(arr1, n1) << endl;
   cout << arrMin<char, 256>(arr2, n2);
   return 0;
}
//
10
1
We can pass non-type arguments to templates. Non-type parameters are mainly used for specifying max or min values or any other constant value for a particular instance of template. The important thing to note about non-type parameters is, they must be const. Compiler must know the value of non-type parameters at compile time. Because compiler needs to create functions/classes for a specified non-type value at compile time. Following is another example of non-type parameters.

## 5. Template Specialization 
#include <iostream>
using namespace std;
 
template <class T>
T max (T &a, T &b)
{
    return (a > b)? a : b;
}
 
template <>
int max <int> (int &a, int &b)
{
    cout << "Called ";
    return (a > b)? a : b;
}
 
int main ()
{
    int a = 10, b = 20;
    cout << max <int> (a, b);
}
//
Called 20
Above program is an example of template specialization. 
Sometime we want a different behaviour of a function/class template for a particular data type.
For this, we can create a specialized version for that particular data type.

## 6. Template Metaprogramming 
#include <iostream>
using namespace std;
  
template<int n> struct funStruct
{
    static const int val = 2*funStruct<n-1>::val;
};
  
template<> struct funStruct<0>
{
    static const int val = 1 ;
};
  
int main()
{
    cout << funStruct<10>::val << endl;
    return 0;
}

// 1024
This is an example of template metaprogramming. The program mainly calculates 2^10.

