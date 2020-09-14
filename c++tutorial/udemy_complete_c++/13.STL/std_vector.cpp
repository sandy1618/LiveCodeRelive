#include <iostream>
#include <vector>

void Vector(){
    // declaration
    std::vector<int> vect{1,2,3,4};
    // push_back adds elements in the end
    // prints out the dynamically increase in size of the vector
    for( int i=0; i<3 ;i++){
        vect.push_back(i*10);
        std::cout << vect.size() << std::endl;
    }
    // vector provides random access, so can access via [] and also assign
    // assign 
    vect[0] = 90;

    //access : iterator based
    auto it = vect.begin();
    while( it != vect.end() ){
        std::cout << *it++ << " ";
    }
    //insert
    vect.insert(vect.begin(),300);// vector not good for insertion & delection accept at back.
    //remove
    vect.erase(vect.end()-5); // end is one step after reall ending of vect 
    // 4th element from end.
    // removing end element
    vect.pop_back();
    
}   
int main()
{   
    Vector();
    return 0;
}