#include <iostream>
#include <string>

void checkString(const std::string& s){
    // count no of vovels and consonants.
    int countVovel{0},countConsonants{0};
    for(auto ch: s){
        if (ch=='a' || ch=='e' || ch == 'i' || ch=='o'|| ch=='u')
        {
            countVovel++;
        }
        else if(ch !='a' && ch!='e' && ch != 'i' && ch!='o'&& ch!='u' && ch!=' ' )
        {
            countConsonants++;
        }
    }
    if (countVovel > countConsonants) std::cout << "Yes\n";
    else if (countVovel < countConsonants) std::cout << "No\n";
    else
    {
        std::cout << "Same\n";
    }
}

int main(){
    int testcase;
    std::cin >> testcase;
    std::string s;
    while (testcase--)
    {
        // std::cin >> s;
        std::cin.ignore(); // very important, cin.ignore() before std::getline()!
        std::getline(std::cin, s);
        checkString(s);


    }
    
    return 0;
}