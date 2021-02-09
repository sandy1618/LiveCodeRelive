// UNDERSTANDING ALGORITHM 
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void printVect(const std::vector<int> &vect){
    for(auto elem : vect){
        cout << elem << ' ';
    }
    cout << '\n';
}

// Driver code to test columnWithMaxZeros function
int main() {

	// SORTING , Reverse
        std::vector<int> vect{1,5,3,2,4,5,2,6};
        std::sort(vect.begin(),vect.end());

        std::reverse(vect.begin(),vect.end());
    printVect(vect);

    // MAX, MIN (similar)
    // Returns iterator of max_element.
    auto max_itr = std::max_element(vect.begin(),vect.end());
    cout << *max_itr<< endl;

    // ACCUMULATE: Summation
    int sum_ = std::accumulate(vect.begin(),vect.end(),0);
    cout << sum_ << endl;

    // COUNT Occorance
    int count_ = std::count(vect.begin(),vect.end(),5);
    cout << count_ << endl;

    // SEARCHING
        // FIND -> returns iterator, DISTANCE is used to get index.
        auto found_index_ = std::find(vect.begin(),vect.end(),6);
        cout << "found: "<< 6 << " at postion " << std::distance(vect.begin(),found_index_) << endl;

        //BINARY_SEARCH -> Bool: true or false.
        auto b_search_ = std::binary_search(vect.begin(),vect.end(),7);
        cout << "Using Binary_search to test if exists " << 7 << "?: " << b_search_ << endl;

    // INDEX FROM ITERATOR -> Stars from 0.
    cout << "what is distance from first post: " << std::distance(vect.begin(),vect.begin()) << endl;

    // DELETING
        // ERASE(n_position)
        vect.erase(vect.begin());


    printVect(vect);



      



   
    return 0;
    
}