#include<bits/stdc++.h>
void secondLargest(std::vector<int>& vect){
    std::sort(vect.begin(), vect.end());
    std::cout << *(vect.begin()+1) << std::endl;

}
int main(){
    int testcase{3};
    std::vector<int> vect;
    while (testcase--)
    {   int x;
        std::cin >> x;
        vect.push_back(x);
    }
    secondLargest(vect);

    return 0;
    return 0;
}