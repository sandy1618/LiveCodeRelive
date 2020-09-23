#include <iostream>
void ProcessRecords(int &x){
    if (x > 0) {
        throw std::runtime_error ("Positive number: We don't want positive nubmer");
    }
}
int main(){
    int x{10};

    try { // starting of block 
     ProcessRecords(x);
    }
    catch (std::runtime_error &ex){
        std::cout << ex.what() << std::endl;
    }

    return 0;
}