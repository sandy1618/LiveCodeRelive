#include <iostream>
#include <list>
void List(){
    // declaration 
    std::list<int> lst;
     for( int i=0; i<3 ;i++){
        lst.push_back(i*10); // push_back elements to end of list
    } // 0,10,20
    // list does not provide random access, so [] cannot be used. 
   
    auto itr = lst.begin();
    //insertation happens at constant time
    lst.insert(itr,590); // 590,0,10,20

    lst.erase(itr); // this itr is the itr begin object of list before insert. 
    // therfore output is : 590,10,20 and not 0,10,20 
    // dont think it as itr as [0,1,2] indexes. they both are different.
     // iterators can be used.    
    auto it = lst.begin();
    while( it != lst.end() ){
        std::cout << *it++ << " ";
    }

}
int main()
{   
    List();
    return 0;
}

