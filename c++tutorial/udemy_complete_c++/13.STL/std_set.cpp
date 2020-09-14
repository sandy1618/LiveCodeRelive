// sets and multisets. Associative containers 
#include <iostream>
#include <set> // set does not allow duplicates 
//multiset does. it is defined in set header file.

void Set(){
    std::set<int> s{ 4,5,6 };
    std::multiset<int> ms{ 3,3,3,5,4,6 }; // duplicates allowed
    // because it is not a seq. type, there is no push_front/ push_back
    // only insert
    s.insert(1);
    s.insert(3);
    // The iterator objects of set are const. ie. cannot be modified. 
    auto itr = s.begin();//iterators can be accessed 
    while( itr!= s.end()){
        std::cout << *itr++ << " "; 
    } // prints in order : 1 3 4 5 6

    // erase
    s.erase(0); //erase by key which is the value here
    s.erase(s.begin()); //erase by iterator

    //set/ multiset is mostly preferred for finding and searching elements 
    // use s.find()
    auto find_itr = s.find(9);

    if (find_itr != s.end()) {
		std::cout << "Element found" << std::endl; 
	}
	else {
		std::cout << "Not found" << std::endl;
	}

    // For finding multiple instance
	auto found = ms.equal_range(3); 
    // return a tuple of 2 iterators: 1 found instance , 2nd iterator to 2nd elem greate then searched element
	while (found.first != found.second) {
		std::cout << *found.first++ << " ";
	}
}
int main()
{   
    Set();
    return 0;
}

// 1 3 4 5 6 Not found
// 3 3 3 