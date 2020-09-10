 //Range-based for loop - similar usage like python
 //range can be on any ITERATOR based containers 
 #include <iostream>

 int main(){
    using namespace std;
    int arr[] = { 1,2,3,4,5 };//aggregate initializer
    //Traditional index-based    
    for (int i = 0; i<5; i++ ){
        cout << arr[i] << " ";
    }
    cout << "Traditional inex based" << endl;

    //Using range-based    
    for (int x:arr){  // It creates each copy of the elements of array
        cout << x << " " ;
    }
    cout << "Range-based for loop" << endl;

    // for avoid copy and faster , pass by references, 
    //const auto if you dont what to change values of arr
    for (const auto &x:arr){
        cout << x << " " ;
    }
    cout << "Pass-by reference range-based for loop" << endl;



    // implementing range based without using for loop, more concepts in video:II
    int *begin = &arr[0]; // or just name arr
    int *end = &arr[5]; //address of one step after last element arr[4]

    while (begin != end) { // pointers support !=, ++ etc operators also
        std::cout << *begin << ' ';
        ++begin;
    }
    std::cout << "implementing range-based loop without for" << endl;
    
 }