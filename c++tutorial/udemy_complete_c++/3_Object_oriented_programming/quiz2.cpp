// Is there errors in the codes ?

int Square(int &&x){
    return x*x;
}
 
int main(){
    int &&res1 = Square(8) ;             //Line 1
    const int &res2 = Square(20) ;       //Line 2
    int res3 = Square(Square(5)) ;       //Line 3
    return 0 ;
}

// line1: r-vlaue  can stor temporary. 
//Line2 : const reference value can store temperory
// The Square function returns a temporary that is passed as argument to itself. 
// It accepts an r-value reference that can bind to the temporary. Square returns an r-value and we store that inside an l-value

// no error 


/* question 2:
When should we use std::move?
ans: when we want to force move operatiosn on l-valeus

Also, some objects are non-copyable, but they can be moved through std::move. e.g. std::unique_ptr, std::thread