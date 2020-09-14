// purpose of initializer list is to initialize user-defined objects 
// just like arrays are initialized 

#include <iostream>
#include <initializer_list>
#include <assert.h>
// How to initialize user defined objects ? 
// Make a constructor that accepts pointer to the list 

class Bag{
    int arr[10];
    int m_size{};//initialzed to 0
    public:
        Bag(const std::initializer_list<int> &list){
            assert(list.size() < 10);
            auto it = list.begin();
            while(it!=list.end()){
                Add(*it++); // access values from iterator.
            }
        }
        void Add(int value){
            assert(m_size<11);
            arr[m_size++]=value;
        } 
        // access operator overloading 
        int operator [](int index) {
            return arr[index];
        }

        int GetSize() const {
            return m_size;
        }

};
int main(){
    int x{ 0 }; // initializatoin 
    int arr[3]{ 1,2,3 };
    std::string s{ "Hello World" };
    std::initializer_list<int> data={1,2,3};         //class template, so give <int>

    //To access values inside initialzer list: use iterators 
    auto it = data.begin(); 
    while(it!=data.end()){
        std::cout << *it++ << " ";
    }
    
    // Initializing user defined object like an array
    Bag b{1,2,3};
    std::cout << std::endl << "Object initializer list : " ;
    for (int i = 0; i < b.GetSize(); ++i){
        std::cout <<  b[i] << " "; 
    }

    return 0;
}