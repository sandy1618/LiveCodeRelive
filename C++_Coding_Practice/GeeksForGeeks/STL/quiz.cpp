#include <iostream>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

void quiz1(){
    pair <int, int> pr1;
	pr1.first = 1;
	pr1.second = 20;
	
	pair <int, int> pr2;
	pr2.first = 2;
	pr2.second = 30;
	// ++pr.first: first increment and then assign. final value 2,
    // pr2.first++ : first assoign  = 2 and then increment ==3 
	pr1.first = pr2.first++ + ++pr1.first; // 2 + 2 (pre :and post properties.)
	pr2.second = pr2.second++ - --pr2.second;// 30 -30 (--pr2.second : --31 == 30)
	cout << pr1.first <<" " << pr2.second; 
}
// 4 0
void quiz2(){
    pair <int, int> p1;
	p1.first = 1;
	p1.second = 20;
	
	pair <int, int> p2;
	p2 = make_pair(2, 30);
	
	cout << (p1 == p2) << " ";
	cout << (p1 != p2) << endl;
	cout << (p1 <= p2) << " ";
	cout << (p1 >= p2) << endl;
}
// 0 1 
// 1 0 
// Comparison(==) operator: compares two pairs its first and second value and returns 1 if true else 0.
// Not equal (!=) operator: compares two operator, the first value and then second value and return 1 if not equal else 0.
// logical operator(<=, >=): it returns 0 or 1 on comparing only first value of pair.

void about_End(){
    vector <int> vec = {1, 2, 3, 4, 5, 6};
	vector <int> :: iterator itr;  // line 1 
	
   	for(itr = vec.end(); itr >= vec.begin(); itr--)
	 cout << *itr << " ";
    
    cout << endl;
    
    for(itr = vec.end()-1; itr >= vec.begin(); itr--)
     cout << *itr << " ";
   
} 
// garbage 6 5 4 3 2 1
// 6 5 4 3 2 1
// end() – Returns an iterator pointing 
// to the theoretical element that follows the last element in the vector
template <typename T> void print_vect(T &x){
    for(auto val : x ){
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

void about_Vecor_inialization(){
    std::vector<int> v;
    std::vector<int> v1{1,2,3};
    std::vector<int> v2(3); // size goes inside for initialzation. 
    print_vect(v);
    print_vect(v1);
    print_vect(v2);
 
	for(int i = 1; i <= 5; i++)
            v.push_back(i);
    // very interesting, put any value greate then vector.size() and it gives 0
    std::cout << v[111] << "\n" << "vector size: " << v.size() ;// 0
    std::cout << "\n capacity " << v.capacity() << std::endl; 


}

int main() 
{
    // quiz1();
    // quiz2();
    // about_End();
    about_Vecor_inialization();
    
	return 0;
}